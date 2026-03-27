NiScreenGeometryData *__thiscall NiScreenGeometryData::`scalar deleting destructor'(
        NiScreenGeometryData *this,
        char a2)
{
  NiScreenGeometryData::~NiScreenGeometryData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
