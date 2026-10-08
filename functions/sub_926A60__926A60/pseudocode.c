int __thiscall sub_926A60(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // esi
  int v5; // ebx
  _WORD *v6; // eax

  v4 = a2; /*0x926a85*/
  v5 = *(this + 1); /*0x926a8b*/
  if ( !a2 ) /*0x926a8e*/
  {
    v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x29); /*0x926aa2*/
    v6[2] = 0xA0; /*0x926aa4*/
    v4 = sub_924930(v6); /*0x926ac1*/
  }
  sub_924960(v4, *(_DWORD *)(v5 + 0x98)); /*0x926acc*/
  *((_BYTE *)v4 + 0x91) = *(_BYTE *)(v5 + 0x91); /*0x926adf*/
  return sub_8B2DD0(this, v4, a3); /*0x926aea*/
}
