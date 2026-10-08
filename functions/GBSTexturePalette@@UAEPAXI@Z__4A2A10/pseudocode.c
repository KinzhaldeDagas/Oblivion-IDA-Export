BSTexturePalette *__thiscall BSTexturePalette::`scalar deleting destructor'(BSTexturePalette *this, char a2)
{
  BSTexturePalette::~BSTexturePalette(this); /*0x4a2a13*/
  if ( (a2 & 1) != 0 ) /*0x4a2a1d*/
    FormHeapFree((unsigned int)this); /*0x4a2a20*/
  return this; /*0x4a2a2a*/
}
