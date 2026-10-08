BSPackedAdditionalGeometryData *__thiscall BSPackedAdditionalGeometryData::`scalar deleting destructor'(
        BSPackedAdditionalGeometryData *this,
        char a2)
{
  *(_DWORD *)this = &BSPackedAdditionalGeometryData::`vftable'; /*0x4c15c3*/
  NiAdditionalGeometryData::~NiAdditionalGeometryData(this); /*0x4c15c9*/
  if ( (a2 & 1) != 0 ) /*0x4c15d3*/
    FormHeapFree((unsigned int)this); /*0x4c15d6*/
  return this; /*0x4c15e0*/
}
