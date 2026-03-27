void __thiscall sub_8B9BA0(_DWORD *this, signed int a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax

  if ( this && (v3 = (_DWORD *)*(this + 2)) != 0 && (v4 = sub_8AC0C0(v3)) != 0 )
    v5 = *(_DWORD *)(v4 + 0xC);
  else
    v5 = 0;
  (*(void (__thiscall **)(signed int, int))(*(_DWORD *)a2 + 0x2C))(a2, v5);
  sub_89D7B0(this, a2);
}
