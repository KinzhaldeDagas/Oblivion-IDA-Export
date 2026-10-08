NiAVObject *__thiscall sub_749EE0(NiAVObject *this)
{
  int v2; // eax
  double v3; // st7
  unsigned int v5; // [esp-8h] [ebp-10h]

  sub_741FA0(this); /*0x749ee4*/
  this->vtbl = (NiAVObjectVtbl *)&NiParticleSystem::`vftable'; /*0x749ee9*/
  *((_BYTE *)this + 0xC0) = 1; /*0x749eef*/
  *((_DWORD *)this + 0x34) = 0; /*0x749ef8*/
  *((_DWORD *)this + 0x32) = 0; /*0x749efe*/
  *((_DWORD *)this + 0x33) = 0; /*0x749f04*/
  *((_DWORD *)this + 0x31) = &NiTPointerList<NiPointer<NiPSysModifier>>::`vftable'; /*0x749f0a*/
  *((_DWORD *)this + 0x36) = 0x25; /*0x749f1b*/
  *((_DWORD *)this + 0x35) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPSysModifier *>::`vftable'; /*0x749f2b*/
  *((_DWORD *)this + 0x38) = 0; /*0x749f35*/
  v2 = FormHeapAlloc(0x94u); /*0x749f40*/
  v5 = 4 * *((_DWORD *)this + 0x36); /*0x749f4f*/
  *((_DWORD *)this + 0x37) = v2; /*0x749f52*/
  _memset(v2, 0, v5); /*0x749f58*/
  *((_BYTE *)this + 0xE4) = 1; /*0x749f5d*/
  *((_DWORD *)this + 0x35) = &NiTStringPointerMap<NiPSysModifier *>::`vftable'; /*0x749f64*/
  v3 = -flt_A7DEB4; /*0x749f77*/
  *((_BYTE *)this + 0xEC) = 0; /*0x749f79*/
  *((float *)this + 0x3A) = v3; /*0x749f7f*/
  return this; /*0x749f87*/
}
