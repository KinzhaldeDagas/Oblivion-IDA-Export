void __thiscall sub_8A00A0(_DWORD *this, signed int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = *(_DWORD *)(v3 + 0x18);
  else
    v4 = 0;
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 0xC);
  else
    v5 = 0;
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5);
  if ( this && (v6 = *(this + 2)) != 0 )
    v7 = *(_DWORD *)(v6 + 0x1C);
  else
    v7 = 0;
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 0xC);
  else
    v8 = 0;
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v8);
  sub_89D7B0(this, a2);
}
