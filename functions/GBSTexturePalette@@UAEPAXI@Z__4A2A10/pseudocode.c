BSTexturePalette *__thiscall BSTexturePalette::`scalar deleting destructor'(BSTexturePalette *this, char a2)
{
  BSTexturePalette::~BSTexturePalette(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
