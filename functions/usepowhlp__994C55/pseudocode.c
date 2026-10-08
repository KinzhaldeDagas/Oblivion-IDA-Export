void __usercall usepowhlp(int a1@<ebp>, double a2@<st1>, double a3@<st0>)
{
  int v4; // eax
  double *v5; // [esp+10h] [ebp-7Ch]
  double v6[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v6; /*0x994c59*/
  v5 = v6; /*0x994c5b*/
  __asm { fsave   byte ptr [esi+8] } /*0x994c68*/
  v4 = _powhlp(a3, a2, v6); /*0x994c6c*/
  __asm { frstor  byte ptr [esi+8] } /*0x994c74*/
  if ( v4 ) /*0x994c7f*/
    unknown_libname_131(a1); /*0x994c81*/
  else
    usepowhlp_::noerror(); /*0x994c7f*/
}
