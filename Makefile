ifeq ($(CMDNAME),)
$(error "Please provide CMDNAME='...'")
endif

ifeq ($(TYPE),)
$(error "Please provide TYPE='...'")
endif

ifeq ($(ARG),)
$(error "Please provide ARG='...'")
endif

.PHONY : $(CMDNAME)
$(CMDNAME) : ./$(CMDNAME)
./$(CMDNAME) : $(CMDNAME).cc
	@echo "TYPE='$(TYPE)'"
	@g++ -std=c++11 -DTYPE='$(TYPE)' -DARG='$(ARG)' $^ -o $@

.SILENT:

