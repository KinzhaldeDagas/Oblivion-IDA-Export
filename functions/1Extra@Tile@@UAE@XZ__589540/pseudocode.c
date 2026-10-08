void __thiscall Tile::Extra::~Extra(Tile::Extra *this)
{
  *(_DWORD *)this = &Tile::Extra::`vftable'; /*0x589568*/
  if ( *((_DWORD *)this + 3) ) /*0x58956e*/
  {
    *(_DWORD *)(*((_DWORD *)this + 3) + 0x10) = sub_588E60(*(_DWORD *)(*((_DWORD *)this + 4) + 0x1C)); /*0x58958b*/
    *(_DWORD *)(*((_DWORD *)this + 3) + 0x24) = 0; /*0x589594*/
  }
  *((_DWORD *)this + 3) = 0; /*0x58959d*/
  NiExtraData_dtor((unsigned int *)this); /*0x5895ac*/
}
