#include <iostream>
#include <type_traits>

using namespace std;

#ifndef TYPE
#define TYPE string
#endif

#ifndef ARG
#define ARG char const*
#endif

#define DEF(T) #T
#define STR(T) DEF(T)


int main() {
  cout << boolalpha
    << "\n"
       "TYPE = '" STR(TYPE) "'\n"
       "ARG  = '"  STR(ARG) "'\n"
       "\nalignment_of< " STR(TYPE) " > _______________________ " << static_cast<size_t>(alignment_of<TYPE>::value)
    << "\nhas_virtual_destructor< " STR(TYPE) " > _____________ " << has_virtual_destructor<TYPE>::value
    << "\nis_abstract< " STR(TYPE) " > ________________________ " << is_abstract<TYPE>::value
    << "\nis_arithmetic< " STR(TYPE) " > ______________________ " << is_arithmetic<TYPE>::value
    << "\nis_array< " STR(TYPE) " > ___________________________ " << is_array<TYPE>::value
    << "\nis_class< " STR(TYPE) " > ___________________________ " << is_class<TYPE>::value
    << "\nis_compound< " STR(TYPE) " > ________________________ " << is_compound<TYPE>::value
    << "\nis_const< " STR(TYPE) " > ___________________________ " << is_const<TYPE>::value
    << "\nis_copy_assignable< " STR(TYPE) " > _________________ " << is_copy_assignable<TYPE>::value
    << "\nis_copy_constructible< " STR(TYPE) " > ______________ " << is_copy_constructible<TYPE>::value
    << "\nis_default_constructible< " STR(TYPE) " > ___________ " << is_default_constructible<TYPE>::value
    << "\nis_destructible< " STR(TYPE) " > ____________________ " << is_destructible<TYPE>::value
    << "\nis_empty< " STR(TYPE) " > ___________________________ " << is_empty<TYPE>::value
    << "\nis_enum< " STR(TYPE) " > ____________________________ " << is_enum<TYPE>::value
    << "\nis_floating_point< " STR(TYPE) " > __________________ " << is_floating_point<TYPE>::value
    << "\nis_function< " STR(TYPE) " > ________________________ " << is_function<TYPE>::value
    << "\nis_fundamental< " STR(TYPE) " > _____________________ " << is_fundamental<TYPE>::value
    << "\nis_integral< " STR(TYPE) " > ________________________ " << is_integral<TYPE>::value
    << "\nis_literal_type< " STR(TYPE) " > ____________________ " << is_literal_type<TYPE>::value
    << "\nis_lvalue_reference< " STR(TYPE) " > ________________ " << is_lvalue_reference<TYPE>::value
    << "\nis_member_function_pointer< " STR(TYPE) " > _________ " << is_member_function_pointer<TYPE>::value
    << "\nis_member_object_pointer< " STR(TYPE) " > ___________ " << is_member_object_pointer<TYPE>::value
    << "\nis_member_pointer< " STR(TYPE) " > __________________ " << is_member_pointer<TYPE>::value
    << "\nis_move_assignable< " STR(TYPE) " > _________________ " << is_move_assignable<TYPE>::value
    << "\nis_move_constructible< " STR(TYPE) " > ______________ " << is_move_constructible<TYPE>::value
    << "\nis_nothrow_copy_assignable< " STR(TYPE) " > _________ " << is_nothrow_copy_assignable<TYPE>::value
    << "\nis_nothrow_copy_constructible< " STR(TYPE) " > ______ " << is_nothrow_copy_constructible<TYPE>::value
    << "\nis_nothrow_default_constructible< " STR(TYPE) " > ___ " << is_nothrow_default_constructible<TYPE>::value
    << "\nis_nothrow_destructible< " STR(TYPE) " > ____________ " << is_nothrow_destructible<TYPE>::value
    << "\nis_nothrow_move_assignable< " STR(TYPE) " > _________ " << is_nothrow_move_assignable<TYPE>::value
    << "\nis_nothrow_move_constructible< " STR(TYPE) " > ______ " << is_nothrow_move_constructible<TYPE>::value
    << "\nis_null_pointer< " STR(TYPE) " > ____________________ " << is_null_pointer<TYPE>::value
    << "\nis_object< " STR(TYPE) " > __________________________ " << is_object<TYPE>::value
    << "\nis_pod< " STR(TYPE) " > _____________________________ " << is_pod<TYPE>::value
    << "\nis_pointer< " STR(TYPE) " > _________________________ " << is_pointer<TYPE>::value
    << "\nis_polymorphic< " STR(TYPE) " > _____________________ " << is_polymorphic<TYPE>::value
    << "\nis_reference< " STR(TYPE) " > _______________________ " << is_reference<TYPE>::value
    << "\nis_rvalue_reference< " STR(TYPE) " > ________________ " << is_rvalue_reference<TYPE>::value
    << "\nis_scalar< " STR(TYPE) " > __________________________ " << is_scalar<TYPE>::value
    << "\nis_signed< " STR(TYPE) " > __________________________ " << is_signed<TYPE>::value
    << "\nis_standard_layout< " STR(TYPE) " > _________________ " << is_standard_layout<TYPE>::value
    << "\nis_trivial< " STR(TYPE) " > _________________________ " << is_trivial<TYPE>::value
    << "\nis_trivially_constructible< " STR(TYPE) " > _________ " << is_trivially_constructible<TYPE>::value
    << "\nis_trivially_copyable< " STR(TYPE) " > ______________ " << is_trivially_copyable<TYPE>::value
    << "\nis_trivially_copy_assignable< " STR(TYPE) " > _______ " << is_trivially_copy_assignable<TYPE>::value
    << "\nis_trivially_copy_constructible< " STR(TYPE) " > ____ " << is_trivially_copy_constructible<TYPE>::value
    << "\nis_trivially_default_constructible< " STR(TYPE) " > _ " << is_trivially_default_constructible<TYPE>::value
    << "\nis_trivially_destructible< " STR(TYPE) " > __________ " << is_trivially_destructible<TYPE>::value
    << "\nis_trivially_move_assignable< " STR(TYPE) " > _______ " << is_trivially_move_assignable<TYPE>::value
    << "\nis_trivially_move_constructible< " STR(TYPE) " > ____ " << is_trivially_move_constructible<TYPE>::value
    << "\nis_union< " STR(TYPE) " > ___________________________ " << is_union<TYPE>::value
    << "\nis_unsigned< " STR(TYPE) " > ________________________ " << is_unsigned<TYPE>::value
    << "\nis_void< " STR(TYPE) " > ____________________________ " << is_void<TYPE>::value
    << "\nis_volatile< " STR(TYPE) " > ________________________ " << is_volatile<TYPE>::value
    << "\nrank< " STR(TYPE) " > _______________________________ " << static_cast<size_t>(rank<TYPE>::value)
    << "\n"
       "\nDependent on arg type '" STR(ARG) "' :\n"
       "\nis_assignable< " STR(TYPE) ", " STR(ARG) " > ____________ " << is_assignable<TYPE, ARG>::value
    << "\nis_base_of< " STR(TYPE) ", " STR(ARG) " > _______________ " << is_base_of<TYPE, ARG>::value
    << "\nis_constructible< " STR(TYPE) ", " STR(ARG) " > _________ " << is_constructible<TYPE, ARG>::value
    << "\nis_convertible< " STR(TYPE) ", " STR(ARG) " > ___________ " << is_convertible<TYPE, ARG>::value
    << "\nis_nothrow_assignable< " STR(TYPE) ", " STR(ARG) " > ____ " << is_nothrow_assignable<TYPE, ARG>::value
    << "\nis_nothrow_constructible< " STR(TYPE) ", " STR(ARG) " > _ " << is_nothrow_constructible<TYPE, ARG>::value
    << "\nis_same< " STR(TYPE) ", " STR(ARG) " > __________________ " << is_same<TYPE, ARG>::value
    << "\nis_trivially_assignable< " STR(TYPE) ", " STR(ARG) " > __ " << is_trivially_assignable<TYPE, ARG>::value
    << "\n"
  << endl;

  return EXIT_SUCCESS;
}

