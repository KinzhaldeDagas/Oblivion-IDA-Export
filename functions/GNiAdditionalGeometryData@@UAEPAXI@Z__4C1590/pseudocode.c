NiAdditionalGeometryData *__thiscall NiAdditionalGeometryData::`scalar deleting destructor'(
        NiAdditionalGeometryData *this,
        char a2)
{
  NiAdditionalGeometryData::~NiAdditionalGeometryData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
