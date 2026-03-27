int __thiscall TileTemplateItem_constr(int this, char *a2, int a3)
{
  *(_DWORD *)this = 0;
  *(_WORD *)(this + 4) = 0;
  *(_WORD *)(this + 6) = 0;
  *(_DWORD *)(this + 0x18) = 0;
  *(_DWORD *)(this + 0x10) = 0;
  *(_DWORD *)(this + 0x14) = 0;
  *(_DWORD *)(this + 0xC) = &NiTList<Tile::TileTemplateItem *>::`vftable';
  BSStringT_Set((BSStringT *)this, a2, 0);
  *(_DWORD *)(this + 8) = a3;
  return this;
}
