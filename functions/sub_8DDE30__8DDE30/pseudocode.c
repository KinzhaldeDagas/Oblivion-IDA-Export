int __thiscall sub_8DDE30(_WORD *this, int a2)
{
  const void **v3; // esi
  int v4; // esi
  int v5; // eax

  *(_DWORD *)(a2 + 0x54) = this; /*0x8dde39*/
  v3 = (const void **)(this + 0x1A); /*0x8dde40*/
  *(_WORD *)(a2 + 0x8C) = *(this + 0x1C); /*0x8dde43*/
  if ( *((_DWORD *)this + 0xE) == (*((_DWORD *)this + 0xF) & 0x3FFFFFFF) ) /*0x8dde58*/
    sub_8A6EE0(v3, 4); /*0x8dde5d*/
  *((_DWORD *)*v3 + (_DWORD)v3[1]) = a2; /*0x8dde6a*/
  v3[1] = (char *)v3[1] + 1; /*0x8dde6d*/
  v4 = *(_DWORD *)this; /*0x8dde75*/
  v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x50) + 0x1C))(*(_DWORD *)(a2 + 0x50)); /*0x8dde77*/
  return (*(int (__thiscall **)(_WORD *, int))(v4 + 0x14))(this, v5); /*0x8dde80*/
}
