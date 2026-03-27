void __thiscall sub_89E110(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = *(_DWORD *)(v3 + 0x18);
  else
    v4 = 0;
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 0xC);
  else
    v5 = 0;
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5);
  sub_89D7B0(this, a2);
}
