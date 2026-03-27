void __thiscall sub_73EEC0(NiGeometryData *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 0x11);
  this->__vftable = (NiGeometryDataVtbl *)&NiParticlesData::`vftable';
  FormHeapFree(v2);
  FormHeapFree(*((_DWORD *)this + 0x13));
  FormHeapFree(*((_DWORD *)this + 0x14));
  FormHeapFree(*((_DWORD *)this + 0x15));
  FormHeapFree(*((_DWORD *)this + 0x16));
  NiGeometryData::~NiGeometryData(this);
}
