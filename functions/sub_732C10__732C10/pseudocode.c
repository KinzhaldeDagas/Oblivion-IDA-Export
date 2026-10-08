NiGeometryData *__thiscall sub_732C10(NiGeometryData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x10); /*0x732c16*/
  this->__vftable = (NiGeometryDataVtbl *)&NiLinesData::`vftable'; /*0x732c17*/
  FormHeapFree(v4); /*0x732c1d*/
  NiGeometryData::~NiGeometryData(this); /*0x732c27*/
  if ( (a2 & 1) != 0 ) /*0x732c31*/
    FormHeapFree((unsigned int)this); /*0x732c34*/
  return this; /*0x732c3e*/
}
