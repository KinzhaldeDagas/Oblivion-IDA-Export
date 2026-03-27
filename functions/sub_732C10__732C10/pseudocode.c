NiGeometryData *__thiscall sub_732C10(NiGeometryData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x10);
  this->__vftable = (NiGeometryDataVtbl *)&NiLinesData::`vftable';
  FormHeapFree(v4);
  NiGeometryData::~NiGeometryData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
