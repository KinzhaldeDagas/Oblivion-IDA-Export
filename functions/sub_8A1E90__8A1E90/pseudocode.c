int __thiscall sub_8A1E90(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = *(this + 2)) != 0 && (v4 = *(_DWORD *)(v3 + 0xC)) != 0 ) /*0x8a1ea4*/
    v5 = *(_DWORD *)(v4 + 8); /*0x8a1ea6*/
  else
    v5 = 0; /*0x8a1eab*/
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5); /*0x8a1eb9*/
  return sub_8A2610(this, a2); /*0x8a1ec3*/
}
