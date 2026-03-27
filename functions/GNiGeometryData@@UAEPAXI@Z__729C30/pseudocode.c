NiGeometryData *__thiscall NiGeometryData::`scalar deleting destructor'(NiGeometryData *this, char a2)
{
  NiGeometryData::~NiGeometryData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
