BSPackedAdditionalGeometryData *__thiscall BSPackedAdditionalGeometryData::`scalar deleting destructor'(
        BSPackedAdditionalGeometryData *this,
        char a2)
{
  *(_DWORD *)this = &BSPackedAdditionalGeometryData::`vftable';
  NiAdditionalGeometryData::~NiAdditionalGeometryData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
