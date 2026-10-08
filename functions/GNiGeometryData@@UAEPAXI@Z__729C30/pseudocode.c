NiGeometryData *__thiscall NiGeometryData::`scalar deleting destructor'(NiGeometryData *this, char a2)
{
  NiGeometryData::~NiGeometryData(this); /*0x729c33*/
  if ( (a2 & 1) != 0 ) /*0x729c3d*/
    FormHeapFree((unsigned int)this); /*0x729c40*/
  return this; /*0x729c4a*/
}
