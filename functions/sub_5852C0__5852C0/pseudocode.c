void __thiscall sub_5852C0(unsigned int *this)
{
  sub_58BC20(this);
  NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>((NiTPointerList__BSImageSpaceShader *)(this + 3));
  FormHeapFree(*this);
  *this = 0;
  *((_WORD *)this + 3) = 0;
  *((_WORD *)this + 2) = 0;
}
