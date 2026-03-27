int __thiscall sub_8B03A0(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = *(_DWORD *)(v3 + 0xC);
  else
    v4 = 0;
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 )
      (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5);
  }
  return sub_8A2610(this, a2);
}
