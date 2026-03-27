NiGeometryData *__thiscall sub_73F210(NiGeometryData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x11);
  this->__vftable = (NiGeometryDataVtbl *)&NiParticlesData::`vftable';
  FormHeapFree(v4);
  FormHeapFree(*((_DWORD *)this + 0x13));
  FormHeapFree(*((_DWORD *)this + 0x14));
  FormHeapFree(*((_DWORD *)this + 0x15));
  FormHeapFree(*((_DWORD *)this + 0x16));
  NiGeometryData::~NiGeometryData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
