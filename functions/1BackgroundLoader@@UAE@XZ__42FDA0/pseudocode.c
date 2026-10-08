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

  v2 = *((_DWORD *)this + 3); /*0x42fda3*/
  *(_DWORD *)this = &BackgroundLoader::`vftable'; /*0x42fda8*/
  if ( v2 ) /*0x42fdae*/
    NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v2 + 4), (int)&unk_A2F830); /*0x42fdb8*/
  if ( *((_DWORD *)this + 2) == 1 ) /*0x42fdc1*/
    *((_DWORD *)this + 2) = 2; /*0x42fdc3*/
  v3 = *((_DWORD *)this + 3); /*0x42fdca*/
  if ( v3 ) /*0x42fdcf*/
    NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(v3 + 4)); /*0x42fdd4*/
  v4 = *((_DWORD *)this + 3); /*0x42fdd9*/
  if ( v4 ) /*0x42fdde*/
  {
    NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v4 + 4), (int)&unk_A2F830); /*0x42fde8*/
    v5 = *((_DWORD *)this + 2); /*0x42fded*/
    if ( v5 == 1 || v5 == 2 ) /*0x42fdf8*/
    {
      v6 = *((_DWORD *)this + 3); /*0x42fdfa*/
      if ( v6 ) /*0x42fdff*/
      {
        v7 = (volatile LONG *)(v6 + 0x2C); /*0x42fe02*/
        if ( WaitForSingleObject(*(HANDLE *)(v6 + 0x34), 0xFFFFFFFF) != 0x102 ) /*0x42fe16*/
          InterlockedDecrement(v7); /*0x42fe19*/
      }
      (*(void (__thiscall **)(BackgroundLoader *))(*(_DWORD *)this + 8))(this); /*0x42fe27*/
      v8 = *(void (__thiscall **)(BackgroundLoader *))(*(_DWORD *)this + 0xC); /*0x42fe2b*/
      *((_DWORD *)this + 2) = 0; /*0x42fe30*/
      v8(this); /*0x42fe37*/
    }
    NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(*((_DWORD *)this + 3) + 4)); /*0x42fe3f*/
  }
  v9 = *((void (__thiscall ****)(_DWORD, int))this + 3); /*0x42fe44*/
  if ( v9 ) /*0x42fe49*/
  {
    (**v9)(v9, 1); /*0x42fe51*/
    *((_DWORD *)this + 3) = 0; /*0x42fe53*/
  }
}
