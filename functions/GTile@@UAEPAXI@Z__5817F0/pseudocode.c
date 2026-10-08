Tile *__thiscall Tile::`scalar deleting destructor'(Tile *this, char a2)
{
  Tile::~Tile(this); /*0x5817f3*/
  if ( (a2 & 1) != 0 ) /*0x5817fd*/
    FormHeapFree((unsigned int)this); /*0x581800*/
  return this; /*0x58180a*/
}
