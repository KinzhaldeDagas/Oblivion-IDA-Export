NiGeometryData *__thiscall sub_73F210(NiGeometryData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x11); /*0x73f216*/
  this->__vftable = (NiGeometryDataVtbl *)&NiParticlesData::`vftable'; /*0x73f217*/
  FormHeapFree(v4); /*0x73f21d*/
  FormHeapFree(*((_DWORD *)this + 0x13)); /*0x73f226*/
  FormHeapFree(*((_DWORD *)this + 0x14)); /*0x73f22f*/
  FormHeapFree(*((_DWORD *)this + 0x15)); /*0x73f238*/
  FormHeapFree(*((_DWORD *)this + 0x16)); /*0x73f241*/
  NiGeometryData::~NiGeometryData(this); /*0x73f24b*/
  if ( (a2 & 1) != 0 ) /*0x73f255*/
    FormHeapFree((unsigned int)this); /*0x73f258*/
  return this; /*0x73f262*/
}
