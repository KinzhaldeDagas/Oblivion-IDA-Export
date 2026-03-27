NiPixelData *__thiscall NiPixelData::`scalar deleting destructor'(NiPixelData *this, char a2)
{
  NiPixelData::~NiPixelData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
