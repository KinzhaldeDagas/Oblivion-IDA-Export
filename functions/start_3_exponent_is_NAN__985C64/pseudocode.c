int __cdecl start_3_::exponent_is_NAN(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx

  unknown_libname_160(v5, &a2); /*0x985c68*/
  if ( (a5 & 0x80000) != 0 ) /*0x985c72*/
    return start_3_::SNaN_detected(); /*0x985c72*/
  else
    return start_3_::test_base(a1, a2, a3); /*0x985c75*/
}
