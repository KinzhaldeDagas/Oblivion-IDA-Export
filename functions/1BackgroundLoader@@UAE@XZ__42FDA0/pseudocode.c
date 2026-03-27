void __thiscall BackgroundLoader::~BackgroundLoader(BackgroundLoader *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  volatile LONG *v7; // edi
  void (__thiscall *v8)(BackgroundLoader *); // eax
  void (__thiscall ***v9)(_DWORD, int); // ecx

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &BackgroundLoader::`vftable';
  if ( v2 )
    NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v2 + 4), (int)&unk_A2F830);
  if ( *((_DWORD *)this + 2) == 1 )
    *((_DWORD *)this + 2) = 2;
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
    NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(v3 + 4));
  v4 = *((_DWORD *)this + 3);
  if ( v4 )
  {
    NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v4 + 4), (int)&unk_A2F830);
    v5 = *((_DWORD *)this + 2);
    if ( v5 == 1 || v5 == 2 )
    {
      v6 = *((_DWORD *)this + 3);
      if ( v6 )
      {
        v7 = (volatile LONG *)(v6 + 0x2C);
        if ( WaitForSingleObject(*(HANDLE *)(v6 + 0x34), 0xFFFFFFFF) != 0x102 )
          InterlockedDecrement(v7);
      }
      (*(void (__thiscall **)(BackgroundLoader *))(*(_DWORD *)this + 8))(this);
      v8 = *(void (__thiscall **)(BackgroundLoader *))(*(_DWORD *)this + 0xC);
      *((_DWORD *)this + 2) = 0;
      v8(this);
    }
    NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(*((_DWORD *)this + 3) + 4));
  }
  v9 = *((void (__thiscall ****)(_DWORD, int))this + 3);
  if ( v9 )
  {
    (**v9)(v9, 1);
    *((_DWORD *)this + 3) = 0;
  }
}
