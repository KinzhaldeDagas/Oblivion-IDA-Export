void __thiscall Tile::Extra::~Extra(Tile::Extra *this)
{
  *(_DWORD *)this = &Tile::Extra::`vftable';
  if ( *((_DWORD *)this + 3) )
  {
    *(_DWORD *)(*((_DWORD *)this + 3) + 0x10) = sub_588E60(*(_DWORD *)(*((_DWORD *)this + 4) + 0x1C));
    *(_DWORD *)(*((_DWORD *)this + 3) + 0x24) = 0;
  }
  *((_DWORD *)this + 3) = 0;
  NiExtraData_dtor(this);
}
