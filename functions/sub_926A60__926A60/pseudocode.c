int __thiscall sub_926A60(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // esi
  int v5; // ebx
  _WORD *v6; // eax

  v4 = a2;
  v5 = *(this + 1);
  if ( !a2 )
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x29);
    v6[2] = 0xA0;
    v4 = sub_924930(v6);
  }
  sub_924960(v4, *(_DWORD *)(v5 + 0x98));
  *((_BYTE *)v4 + 0x91) = *(_BYTE *)(v5 + 0x91);
  return sub_8B2DD0(this, v4, a3);
}
