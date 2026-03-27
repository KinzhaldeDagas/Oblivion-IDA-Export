Tile::Extra *__thiscall Tile::Extra::Extra(Tile::Extra *this, unsigned int a2, unsigned int a3)
{
  sub_721350(this);
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &Tile::Extra::`vftable';
  *((_DWORD *)this + 3) = a2;
  sub_721440((unsigned int *)this, "Tileptr");
  return this;
}
