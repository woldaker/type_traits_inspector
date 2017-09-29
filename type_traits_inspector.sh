#!/bin/sh

if [ $# -lt 1 -o $# -gt 2 ]; then
  echo "Usage: $0 type [arg=type]" >&2
  exit 1
fi

TYPE="$1"
ARG="$1"

if [ $# -eq 2 ]; then
  ARG="$2"
fi

CMDNAME="$(basename "$0")"
CMDNAME="${CMDNAME%%\.sh}"

make -B TYPE="${TYPE}" ARG="${ARG}" CMDNAME="${CMDNAME%%\.sh}" >/dev/null 2>&1

if [ $? -eq 0 ]; then
  clear
  ./${CMDNAME}
  rm -f ./${CMDNAME}
else
  if [ $# -lt 2 ]; then
    echo "Invalid type argument: '${TYPE}'" >&2
  else
    echo "Invalid type arguments: '${TYPE}' '${ARG}'" >&2
  fi

  exit 1
fi

