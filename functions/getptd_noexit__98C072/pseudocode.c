DWORD *_getptd_noexit()
{
  DWORD LastError; // edi
  int (__stdcall *Value)(int); // eax
  DWORD *v2; // esi
  int v3; // eax
  int (__stdcall *v4)(int, int); // eax
  DWORD CurrentThreadId; // eax
  int v7; // [esp-8h] [ebp-10h]
  int v8; // [esp-4h] [ebp-Ch]
  int v9; // [esp-4h] [ebp-Ch]

  LastError = GetLastError(); /*0x98c07a*/
  __set_flsgetvalue(); /*0x98c07c*/
  v8 = dword_B310AC; /*0x98c081*/
  Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex); /*0x98c08d*/
  v2 = (DWORD *)Value(v8); /*0x98c095*/
  if ( !v2 ) /*0x98c099*/
  {
    v3 = unknown_libname_74(1, 0x214); /*0x98c0a2*/
    v2 = (DWORD *)v3; /*0x98c0a7*/
    if ( v3 ) /*0x98c0ad*/
    {
      v9 = v3; /*0x98c0af*/
      v7 = dword_B310AC; /*0x98c0b0*/
      v4 = (int (__stdcall *)(int, int))_decode_pointer((void *)dword_BA9E10[4]); /*0x98c0bc*/
      if ( v4(v7, v9) ) /*0x98c0c2*/
      {
        _initptd((int)v2, 0); /*0x98c0cb*/
        CurrentThreadId = GetCurrentThreadId(); /*0x98c0d2*/
        v2[1] = 0xFFFFFFFF; /*0x98c0d8*/
        *v2 = CurrentThreadId; /*0x98c0dc*/
      }
      else
      {
        free(v2); /*0x98c0e1*/
        v2 = 0; /*0x98c0e7*/
      }
    }
  }
  SetLastError(LastError); /*0x98c0ea*/
  return v2; /*0x98c0f0*/
}
