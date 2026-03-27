int __cdecl unknown_libname_10(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // [esp+0h] [ebp-3Ch] BYREF
  int v9; // [esp+4h] [ebp-38h]
  _DWORD v10[2]; // [esp+8h] [ebp-34h] BYREF
  void (__cdecl *v11)(_DWORD, _DWORD *); // [esp+10h] [ebp-2Ch]
  _DWORD v12[10]; // [esp+14h] [ebp-28h] BYREF
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  if ( a1 == (_DWORD *)0x123 )
  {
    *a2 = unknown_libname_10_::unknown_libname_11;
    JUMPOUT(0x980FDC);
  }
  v12[0] = 0;
  v12[1] = TranslatorGuardHandler;
  v12[2] = (unsigned int)v12 ^ __security_cookie;
  v12[3] = a5;
  v12[4] = a2;
  v12[5] = a6;
  v12[6] = a7;
  v12[9] = 0;
  v12[7] = &v8;
  v12[8] = &savedregs;
  v12[0] = NtCurrentTeb()->Tib.ExceptionList;
  v9 = 1;
  v10[0] = a1;
  v10[1] = a3;
  v11 = *(void (__cdecl **)(_DWORD, _DWORD *))(_getptd() + 0x80);
  v11(*a1, v10);
  v9 = 0;
  return unknown_libname_10_::unknown_libname_11();
}
