_DWORD *__thiscall sub_942E60(_DWORD *this, char a2)
{
  int v3; // ecx
  int v4; // edi

  v3 = *(this + 2); /*0x942e63*/
  *this = &off_AA2444; /*0x942e66*/
  if ( *(_WORD *)(v3 + 4) ) /*0x942e6c*/
  {
    if ( !--*(_WORD *)(v3 + 6) ) /*0x942e77*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x942e82*/
  }
  v4 = *(this + 3); /*0x942e85*/
  if ( v4 ) /*0x942e8a*/
  {
    sub_8B0E60((_DWORD *)*(this + 3)); /*0x942e8e*/
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v4, 0xC, 5); /*0x942ea0*/
  }
  *this = &hkBaseObject::`vftable'; /*0x942ea8*/
  if ( (a2 & 1) != 0 ) /*0x942eaf*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x942ec1*/
      this,
      *((unsigned __int16 *)this + 2),
      6);
  return this; /*0x942ec6*/
}
