int __thiscall sub_8A1E90(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = *(this + 2)) != 0 && (v4 = *(_DWORD *)(v3 + 0xC)) != 0 )
    v5 = *(_DWORD *)(v4 + 8);
  else
    v5 = 0;
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5);
  return sub_8A2610(this, a2);
}
