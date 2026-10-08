BSFaceGenImage *__thiscall BSFaceGenImage::BSFaceGenImage(BSFaceGenImage *this, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x54e2e2*/
  *((_DWORD *)this + 1) = 0; /*0x54e2e8*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x54e2eb*/
  *(_DWORD *)this = &BSFaceGenImage::`vftable'; /*0x54e2f1*/
  *((_DWORD *)this + 2) = 0; /*0x54e2fb*/
  *((_DWORD *)this + 4) = 0; /*0x54e2fe*/
  *((_DWORD *)this + 5) = 0; /*0x54e301*/
  *((_DWORD *)this + 6) = 0; /*0x54e304*/
  v3 = *((_DWORD *)this + 2); /*0x54e307*/
  if ( v3 != a2 ) /*0x54e315*/
  {
    if ( v3 ) /*0x54e319*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x54e31f*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x54e335*/
    }
    *((_DWORD *)this + 2) = a2; /*0x54e339*/
    if ( a2 ) /*0x54e33c*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x54e342*/
  }
  v4 = *((_DWORD *)this + 2); /*0x54e348*/
  if ( v4 ) /*0x54e34d*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x4C))(v4); /*0x54e354*/
    v6 = *((_DWORD *)this + 2); /*0x54e356*/
    *((_DWORD *)this + 7) = v5; /*0x54e359*/
    *((_DWORD *)this + 8) = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x50))(v6); /*0x54e363*/
  }
  else
  {
    *((_DWORD *)this + 8) = 0; /*0x54e368*/
    *((_DWORD *)this + 7) = 0; /*0x54e36b*/
  }
  return this; /*0x54e370*/
}
