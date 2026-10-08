void __thiscall BSTexturePalette::~BSTexturePalette(BSTexturePalette *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this = &BSTexturePalette::`vftable'; /*0x4a2998*/
  sub_4A2850(this); /*0x4a29a6*/
  NiTMap_Clear(*((_DWORD **)this + 3)); /*0x4a29ae*/
  NiTMap_Clear(*((_DWORD **)this + 2)); /*0x4a29b6*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 3); /*0x4a29bb*/
  if ( v2 ) /*0x4a29c0*/
    (**v2)(v2, 1); /*0x4a29c8*/
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 2); /*0x4a29ca*/
  if ( v3 ) /*0x4a29cf*/
    (**v3)(v3, 1); /*0x4a29d7*/
  *((_DWORD *)this + 3) = 0; /*0x4a29de*/
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x4a29e5*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x4a29eb*/
}
