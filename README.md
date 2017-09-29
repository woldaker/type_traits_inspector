# Type Traits Inspector

## How to Use

Simply run the shell script ./type\_traits\_inspector.sh

## Example

###### NOTE: Providing the "std::" prefix is unnecessary.

```sh
./type_traits_inspector.sh string 'char const **'
```

will print this:

```

TYPE = 'string'
ARG  = 'char const **'

alignment_of< string > _______________________ 8
has_virtual_destructor< string > _____________ false
is_abstract< string > ________________________ false
is_arithmetic< string > ______________________ false
is_array< string > ___________________________ false
is_class< string > ___________________________ true
is_compound< string > ________________________ true
is_const< string > ___________________________ false
is_copy_assignable< string > _________________ true
is_copy_constructible< string > ______________ true
is_default_constructible< string > ___________ true
is_destructible< string > ____________________ true
is_empty< string > ___________________________ false
is_enum< string > ____________________________ false
is_floating_point< string > __________________ false
is_function< string > ________________________ false
is_fundamental< string > _____________________ false
is_integral< string > ________________________ false
is_literal_type< string > ____________________ false
is_lvalue_reference< string > ________________ false
is_member_function_pointer< string > _________ false
is_member_object_pointer< string > ___________ false
is_member_pointer< string > __________________ false
is_move_assignable< string > _________________ true
is_move_constructible< string > ______________ true
is_nothrow_copy_assignable< string > _________ false
is_nothrow_copy_constructible< string > ______ false
is_nothrow_default_constructible< string > ___ true
is_nothrow_destructible< string > ____________ true
is_nothrow_move_assignable< string > _________ true
is_nothrow_move_constructible< string > ______ true
is_null_pointer< string > ____________________ false
is_object< string > __________________________ true
is_pod< string > _____________________________ false
is_pointer< string > _________________________ false
is_polymorphic< string > _____________________ false
is_reference< string > _______________________ false
is_rvalue_reference< string > ________________ false
is_scalar< string > __________________________ false
is_signed< string > __________________________ false
is_standard_layout< string > _________________ true
is_trivial< string > _________________________ false
is_trivially_constructible< string > _________ false
is_trivially_copyable< string > ______________ false
is_trivially_copy_assignable< string > _______ false
is_trivially_copy_constructible< string > ____ false
is_trivially_default_constructible< string > _ false
is_trivially_destructible< string > __________ false
is_trivially_move_assignable< string > _______ false
is_trivially_move_constructible< string > ____ false
is_union< string > ___________________________ false
is_unsigned< string > ________________________ false
is_void< string > ____________________________ false
is_volatile< string > ________________________ false
rank< string > _______________________________ 0

Dependent on arg type 'char const **' :

is_assignable< string, char const ** > ____________ false
is_base_of< string, char const ** > _______________ false
is_constructible< string, char const ** > _________ false
is_convertible< string, char const ** > ___________ false
is_nothrow_assignable< string, char const ** > ____ false
is_nothrow_constructible< string, char const ** > _ false
is_same< string, char const ** > __________________ false
is_trivially_assignable< string, char const ** > __ false

```

