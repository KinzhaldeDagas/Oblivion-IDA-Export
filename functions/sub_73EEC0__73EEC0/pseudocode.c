void __thiscall sub_73EEC0(NiGeometryData *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 0x11); /*0x73eec6*/
  this->__vftable = (NiGeometryDataVtbl *)&NiParticlesData::`vftable'; /*0x73eec7*/
  FormHeapFree(v2); /*0x73eecd*/
  FormHeapFree(*((_DWORD *)this + 0x13)); /*0x73eed6*/
  FormHeapFree(*((_DWORD *)this + 0x14)); /*0x73eedf*/
  FormHeapFree(*((_DWORD *)this + 0x15)); /*0x73eee8*/
  FormHeapFree(*((_DWORD *)this + 0x16)); /*0x73eef1*/
  NiGeometryData::~NiGeometryData(this); /*0x73eefc*/
}
