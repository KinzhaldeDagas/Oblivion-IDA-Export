Tile::Extra *__thiscall Tile::Extra::`scalar deleting destructor'(Tile::Extra *this, char a2)
{
  Tile::Extra::~Extra(this); /*0x5897c3*/
  if ( (a2 & 1) != 0 ) /*0x5897cd*/
    FormHeapFree((unsigned int)this); /*0x5897d0*/
  return this; /*0x5897da*/
}
