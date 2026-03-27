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

  LastError = GetLastError();
  __set_flsgetvalue();
  v8 = dword_B310AC;
  Value = (int (__stdcall *)(int))TlsGetValue(dwTlsIndex);
  v2 = (DWORD *)Value(v8);
  if ( !v2 )
  {
    v3 = unknown_libname_74();
    v2 = (DWORD *)v3;
    if ( v3 )
    {
      v9 = v3;
      v7 = dword_B310AC;
      v4 = (int (__stdcall *)(int, int))_decode_pointer((void *)FlsSetValue);
      if ( v4(v7, v9) )
      {
        _initptd((int)v2, 0);
        CurrentThreadId = GetCurrentThreadId();
        v2[1] = 0xFFFFFFFF;
        *v2 = CurrentThreadId;
      }
      else
      {
        free(v2);
        v2 = 0;
      }
    }
  }
  SetLastError(LastError);
  return v2;
}
