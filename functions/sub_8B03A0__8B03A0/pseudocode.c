int __thiscall sub_8B03A0(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8b03ad*/
    v4 = *(_DWORD *)(v3 + 0xC); /*0x8b03af*/
  else
    v4 = 0; /*0x8b03b4*/
  if ( v4 ) /*0x8b03bc*/
  {
    v5 = *(_DWORD *)(v4 + 8); /*0x8b03be*/
    if ( v5 ) /*0x8b03c3*/
      (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5); /*0x8b03cd*/
  }
  return sub_8A2610(this, a2); /*0x8b03d7*/
}
