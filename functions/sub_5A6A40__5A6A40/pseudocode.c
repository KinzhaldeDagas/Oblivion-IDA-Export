void __thiscall sub_5A6A40(_DWORD **this, unsigned __int8 *a2)
{
  int v3; // eax

  Tile_SetString(*(this + 0xE), (_DWORD *)0xFE6, (char *)a2); /*0x5a6a51*/
  v3 = _mbscmp(a2, (const unsigned __int8 *)stru_B33D84.value); /*0x5a6a5d*/
  sub_5A6220(this, v3); /*0x5a6a68*/
}
