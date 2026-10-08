TileRect *__thiscall TileRect::`scalar deleting destructor'(TileRect *this, char a2)
{
  TileRect::~TileRect(this); /*0x581a33*/
  if ( (a2 & 1) != 0 ) /*0x581a3d*/
    FormHeapFree((unsigned int)this); /*0x581a40*/
  return this; /*0x581a4a*/
}
