NiPalette *__thiscall NiPalette::`scalar deleting destructor'(NiPalette *this, char a2)
{
  NiPalette::~NiPalette(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
