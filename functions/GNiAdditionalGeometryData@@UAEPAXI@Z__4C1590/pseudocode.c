NiAdditionalGeometryData *__thiscall NiAdditionalGeometryData::`scalar deleting destructor'(
        NiAdditionalGeometryData *this,
        char a2)
{
  NiAdditionalGeometryData::~NiAdditionalGeometryData(this); /*0x4c1593*/
  if ( (a2 & 1) != 0 ) /*0x4c159d*/
    FormHeapFree((unsigned int)this); /*0x4c15a0*/
  return this; /*0x4c15aa*/
}
