Tile::Extra *__thiscall Tile::Extra::`scalar deleting destructor'(Tile::Extra *this, char a2)
{
  Tile::Extra::~Extra(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
