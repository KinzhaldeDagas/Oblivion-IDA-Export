int __thiscall sub_8DDE30(_WORD *this, int a2)
{
  const void **v3; // esi
  int v4; // esi
  int v5; // eax

  *(_DWORD *)(a2 + 0x54) = this;
  v3 = (const void **)(this + 0x1A);
  *(_WORD *)(a2 + 0x8C) = *(this + 0x1C);
  if ( *((_DWORD *)this + 0xE) == (*((_DWORD *)this + 0xF) & 0x3FFFFFFF) )
    sub_8A6EE0(v3, 4);
  *((_DWORD *)*v3 + (_DWORD)v3[1]) = a2;
  v3[1] = (char *)v3[1] + 1;
  v4 = *(_DWORD *)this;
  v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x50) + 0x1C))(*(_DWORD *)(a2 + 0x50));
  return (*(int (__thiscall **)(_WORD *, int))(v4 + 0x14))(this, v5);
}
