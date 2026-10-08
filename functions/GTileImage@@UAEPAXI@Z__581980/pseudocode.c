TileImage *__thiscall TileImage::`scalar deleting destructor'(TileImage *this, char a2)
{
  TileImage::~TileImage(this); /*0x581983*/
  if ( (a2 & 1) != 0 ) /*0x58198d*/
    FormHeapFree((unsigned int)this); /*0x581990*/
  return this; /*0x58199a*/
}
