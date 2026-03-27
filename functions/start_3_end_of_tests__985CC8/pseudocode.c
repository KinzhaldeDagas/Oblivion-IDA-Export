int __usercall start_3_::end_of_tests@<eax>(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v3; // eax
  _BYTE *v6; // [esp+10h] [ebp-78h]
  int v7; // [esp+10h] [ebp-78h]
  _BYTE v8[116]; // [esp+14h] [ebp-74h] BYREF

  if ( a1 )
    return start_3_::one_of_args_is_QNaN();
  v6 = v8;
  __asm { fsave   byte ptr [ecx+8] }
  v3 = _powhlp(a2, a3, (int)v8);
  _ECX = v7;
  __asm { frstor  byte ptr [ecx+8] }
  if ( v3 )
    return start_3_::_ErrorHandling();
  else
    return start_8_::unknown_libname_162();
}
