void __usercall usepowhlp(int a1@<ebp>, double a2@<st1>, double a3@<st0>)
{
  int v4; // eax
  _BYTE *v5; // [esp+10h] [ebp-7Ch]
  _BYTE v6[120]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v6;
  v5 = v6;
  __asm { fsave   byte ptr [esi+8] }
  v4 = _powhlp(a3, a2, (int)v6);
  __asm { frstor  byte ptr [esi+8] }
  if ( v4 )
    unknown_libname_131(a1);
  else
    usepowhlp_::noerror();
}
