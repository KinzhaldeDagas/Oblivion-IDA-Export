NiDefaultAVObjectPalette *__thiscall NiDefaultAVObjectPalette::`scalar deleting destructor'(
        NiDefaultAVObjectPalette *this,
        char a2)
{
  NiDefaultAVObjectPalette::~NiDefaultAVObjectPalette(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
