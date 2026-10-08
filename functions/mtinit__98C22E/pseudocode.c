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

  ModuleHandleA = GetModuleHandleA("KERNEL32.DLL"); /*0x98c234*/
  v1 = ModuleHandleA; /*0x98c23a*/
  if ( !ModuleHandleA ) /*0x98c23e*/
  {
    _mtterm(); /*0x98c240*/
    return 0; /*0x98c248*/
  }
  dword_BA9E10[2] = GetProcAddress(ModuleHandleA, "FlsAlloc"); /*0x98c25e*/
  dword_BA9E10[3] = GetProcAddress(v1, "FlsGetValue"); /*0x98c26b*/
  dword_BA9E10[4] = GetProcAddress(v1, "FlsSetValue"); /*0x98c278*/
  FlsFree = GetProcAddress(v1, "FlsFree"); /*0x98c27d*/
  dword_BA9E10[5] = FlsFree; /*0x98c28c*/
  if ( !dword_BA9E10[2] || !dword_BA9E10[3] || !dword_BA9E10[4] || !FlsFree ) /*0x98c2a7*/
  {
    dword_BA9E10[3] = TlsGetValue; /*0x98c2ae*/
    dword_BA9E10[2] = __crtTlsAlloc; /*0x98c2b8*/
    dword_BA9E10[4] = TlsSetValue; /*0x98c2c2*/
    dword_BA9E10[5] = TlsFree; /*0x98c2c8*/
  }
  v4 = TlsAlloc(); /*0x98c2cd*/
  dwTlsIndex = v4; /*0x98c2d6*/
  if ( v4 != 0xFFFFFFFF && TlsSetValue(v4, (LPVOID)dword_BA9E10[3]) ) /*0x98c2e8*/
  {
    _init_pointers(); /*0x98c2f2*/
    dword_BA9E10[2] = _encode_pointer((void *)dword_BA9E10[2]); /*0x98c308*/
    dword_BA9E10[3] = _encode_pointer((void *)dword_BA9E10[3]); /*0x98c318*/
    dword_BA9E10[4] = _encode_pointer((void *)dword_BA9E10[4]); /*0x98c328*/
    dword_BA9E10[5] = _encode_pointer((void *)dword_BA9E10[5]); /*0x98c335*/
    if ( _mtinitlocks() ) /*0x98c33a*/
    {
      v5 = (int (__stdcall *)(_DWORD))_decode_pointer((void *)dword_BA9E10[2]); /*0x98c34e*/
      dword_B310AC = v5(_freefls); /*0x98c359*/
      if ( dword_B310AC != 0xFFFFFFFF ) /*0x98c35e*/
      {
        v6 = unknown_libname_74(1, 0x214); /*0x98c367*/
        v7 = (DWORD *)v6; /*0x98c36c*/
        if ( v6 ) /*0x98c372*/
        {
          v11 = v6; /*0x98c374*/
          v10 = dword_B310AC; /*0x98c375*/
          v8 = (int (__stdcall *)(int, int))_decode_pointer((void *)dword_BA9E10[4]); /*0x98c381*/
          if ( v8(v10, v11) ) /*0x98c387*/
          {
            _initptd((int)v7, 0); /*0x98c390*/
            CurrentThreadId = GetCurrentThreadId(); /*0x98c397*/
            v7[1] = 0xFFFFFFFF; /*0x98c39d*/
            *v7 = CurrentThreadId; /*0x98c3a1*/
            return 1; /*0x98c3a6*/
          }
        }
      }
    }
    _mtterm(); /*0x98c3a8*/
  }
  return 0; /*0x98c247*/
}
