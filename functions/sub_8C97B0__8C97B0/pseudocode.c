int __thiscall sub_8C97B0(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = *(this + 2)) != 0 && (v4 = *(_DWORD *)(v3 + 0x10)) != 0 ) /*0x8c97c4*/
    v5 = *(_DWORD *)(v4 + 8); /*0x8c97c6*/
  else
    v5 = 0; /*0x8c97cb*/
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5); /*0x8c97d9*/
  return sub_8A2610(this, a2); /*0x8c97e3*/
}
