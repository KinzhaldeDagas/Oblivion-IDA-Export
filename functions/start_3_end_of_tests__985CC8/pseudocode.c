void __usercall start_3_::end_of_tests(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v3; // eax
  double *v5; // [esp+10h] [ebp-78h]
  int v6; // [esp+10h] [ebp-78h]
  double v7[14]; // [esp+14h] [ebp-74h] BYREF

  if ( a1 ) /*0x985cca*/
  {
    start_3_::one_of_args_is_QNaN(); /*0x985cca*/
  }
  else
  {
    v5 = v7; /*0x985cd1*/
    __asm { fsave   byte ptr [ecx+8] } /*0x985cdc*/
    v3 = _powhlp(a2, a3, v7); /*0x985ce0*/
    _ECX = v6; /*0x985ce8*/
    __asm { frstor  byte ptr [ecx+8] } /*0x985ce9*/
    if ( v3 ) /*0x985cf3*/
      start_3_::_ErrorHandling(); /*0x985cfe*/
    else
      start_8_::unknown_libname_162(); /*0x985cf3*/
  }
}
