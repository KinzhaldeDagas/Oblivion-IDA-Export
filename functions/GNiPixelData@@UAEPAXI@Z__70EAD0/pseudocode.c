NiPixelData *__thiscall NiPixelData::`scalar deleting destructor'(NiPixelData *this, char a2)
{
  NiPixelData::~NiPixelData(this); /*0x70ead3*/
  if ( (a2 & 1) != 0 ) /*0x70eadd*/
    FormHeapFree((unsigned int)this); /*0x70eae0*/
  return this; /*0x70eaea*/
}
