NiTransformData *__thiscall NiTransformData::`scalar deleting destructor'(NiTransformData *this, char a2)
{
  NiTransformData::~NiTransformData(this); /*0x6e2163*/
  if ( (a2 & 1) != 0 ) /*0x6e216d*/
    FormHeapFree((unsigned int)this); /*0x6e2170*/
  return this; /*0x6e217a*/
}
