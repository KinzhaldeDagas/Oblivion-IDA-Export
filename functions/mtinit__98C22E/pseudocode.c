signed int _mtinit()
{
  HMODULE ModuleHandleA; // eax
  HMODULE v1; // edi
  FARPROC FlsFree; // eax
  DWORD v4; // eax
  int (__stdcall *v5)(_DWORD); // eax
  int v6; // eax
  DWORD *v7; // esi
  int (__stdcall *v8)(int, int); // eax
  DWORD CurrentThreadId; // eax
  int v10; // [esp-Ch] [ebp-10h]
  int v11; // [esp-8h] [ebp-Ch]

  ModuleHandleA = GetModuleHandleA("KERNEL32.DLL");
  v1 = ModuleHandleA;
  if ( !ModuleHandleA )
  {
    _mtterm();
    return 0;
  }
  FlsAlloc = (int)GetProcAddress(ModuleHandleA, "FlsAlloc");
  lpTlsValue = GetProcAddress(v1, "FlsGetValue");
  FlsSetValue = (int)GetProcAddress(v1, "FlsSetValue");
  FlsFree = GetProcAddress(v1, "FlsFree");
  dword_BA9E24 = (int)FlsFree;
  if ( !FlsAlloc || !lpTlsValue || !FlsSetValue || !FlsFree )
  {
    lpTlsValue = TlsGetValue;
    FlsAlloc = (int)__crtTlsAlloc;
    FlsSetValue = (int)TlsSetValue;
    dword_BA9E24 = (int)TlsFree;
  }
  v4 = TlsAlloc();
  dwTlsIndex = v4;
  if ( v4 != 0xFFFFFFFF && TlsSetValue(v4, lpTlsValue) )
  {
    _init_pointers();
    FlsAlloc = (int)_encode_pointer((void *)FlsAlloc);
    lpTlsValue = _encode_pointer(lpTlsValue);
    FlsSetValue = (int)_encode_pointer((void *)FlsSetValue);
    dword_BA9E24 = (int)_encode_pointer((void *)dword_BA9E24);
    if ( _mtinitlocks() )
    {
      v5 = (int (__stdcall *)(_DWORD))_decode_pointer((void *)FlsAlloc);
      dword_B310AC = v5(_freefls);
      if ( dword_B310AC != 0xFFFFFFFF )
      {
        v6 = unknown_libname_74();
        v7 = (DWORD *)v6;
        if ( v6 )
        {
          v11 = v6;
          v10 = dword_B310AC;
          v8 = (int (__stdcall *)(int, int))_decode_pointer((void *)FlsSetValue);
          if ( v8(v10, v11) )
          {
            _initptd((int)v7, 0);
            CurrentThreadId = GetCurrentThreadId();
            v7[1] = 0xFFFFFFFF;
            *v7 = CurrentThreadId;
            return 1;
          }
        }
      }
    }
    _mtterm();
  }
  return 0;
}
