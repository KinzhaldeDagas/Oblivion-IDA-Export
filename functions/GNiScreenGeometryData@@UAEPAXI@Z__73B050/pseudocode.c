NiScreenGeometryData *__thiscall NiScreenGeometryData::`scalar deleting destructor'(
        NiScreenGeometryData *this,
        char a2)
{
  NiScreenGeometryData::~NiScreenGeometryData(this); /*0x73b053*/
  if ( (a2 & 1) != 0 ) /*0x73b05d*/
    FormHeapFree((unsigned int)this); /*0x73b060*/
  return this; /*0x73b06a*/
}
