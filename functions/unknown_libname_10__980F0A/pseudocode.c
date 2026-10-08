int __cdecl unknown_libname_10(
        _DWORD *a1,
        int (__usercall **a2)@<eax>(int@<ebp>),
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v8; // [esp+0h] [ebp-3Ch] BYREF
  int v9; // [esp+4h] [ebp-38h]
  _DWORD v10[2]; // [esp+8h] [ebp-34h] BYREF
  void (__cdecl *v11)(_DWORD, _DWORD *); // [esp+10h] [ebp-2Ch]
  _DWORD v12[10]; // [esp+14h] [ebp-28h] BYREF
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  if ( a1 == (_DWORD *)0x123 ) /*0x980f18*/
  {
    *a2 = unknown_libname_10_::unknown_libname_11; /*0x980f22*/
    JUMPOUT(0x980FDC); /*0x980fdc*/
  }
  v12[0] = 0; /*0x980f2c*/
  v12[1] = TranslatorGuardHandler; /*0x980f30*/
  v12[2] = (unsigned int)v12 ^ __security_cookie; /*0x980f41*/
  v12[3] = a5; /*0x980f47*/
  v12[4] = a2; /*0x980f4d*/
  v12[5] = a6; /*0x980f53*/
  v12[6] = a7; /*0x980f59*/
  v12[9] = 0; /*0x980f64*/
  v12[7] = &v8; /*0x980f68*/
  v12[8] = &savedregs; /*0x980f6b*/
  v12[0] = NtCurrentTeb()->Tib.ExceptionList; /*0x980f74*/
  v9 = 1; /*0x980f80*/
  v10[0] = a1; /*0x980f8a*/
  v10[1] = a3; /*0x980f90*/
  v11 = (void (__cdecl *)(_DWORD, _DWORD *))_getptd()[0x20]; /*0x980f9e*/
  v11(*a1, v10); /*0x980faa*/
  v9 = 0; /*0x980faf*/
  return unknown_libname_10_::unknown_libname_11((int)&savedregs);
}
