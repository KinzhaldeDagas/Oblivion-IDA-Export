NiColorData *__thiscall NiColorData::`scalar deleting destructor'(NiColorData *this, char a2)
{
  NiColorData::~NiColorData(this); /*0x6e4623*/
  if ( (a2 & 1) != 0 ) /*0x6e462d*/
    FormHeapFree((unsigned int)this); /*0x6e4630*/
  return this; /*0x6e463a*/
}
