int __cdecl start_3_::CW_is_set_to_default_2(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  char v8; // zf

  v6 = v5 & 0x7FF00000;
  if ( v6 == 0x7FF00000 )
    return start_3_::special_exponent(a1, a2, a3, a4);
  v7 = unknown_libname_160(v6);
  if ( v8 )
    return start_3_::special_base();
  if ( (v7 & 0x7FF00000) != 0 )
    return start_3_::base_is_not_zero(a1, a2, a3);
  return start_3_::test_if_we_have_zero_base(a1, a2, a3, a4, a5);
}
