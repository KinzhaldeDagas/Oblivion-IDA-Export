int __usercall start_3_::special_exponent@<eax>(int eax0@<eax>, int a1, int a2, int a3, int a4, int a5)
{
  if ( a4 | eax0 & 0xFFFFF )
    return start_3_::exponent_is_NAN(a1, a2, a3, a4, a5);
  unknown_libname_160(0);
  return start_3_::test_base(a1, a2, a3);
}
