void __thiscall sub_5A6A40(_DWORD **this, unsigned __int8 *a2)
{
  int v3; // eax

  Tile_SetString(*(this + 0xE), (_DWORD *)0xFE6, (char *)a2);
  v3 = _mbscmp(a2, dword_B33D84);
  sub_5A6220(this, v3);
}
