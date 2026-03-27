NiAVObject *__thiscall sub_749EE0(NiAVObject *this)
{
  int v2; // eax
  double v3; // st7
  int v5; // [esp-8h] [ebp-10h]

  sub_741FA0(this);
  this->vtbl = (NiAVObjectVtbl *)&NiParticleSystem::`vftable';
  *((_BYTE *)this + 0xC0) = 1;
  *((_DWORD *)this + 0x34) = 0;
  *((_DWORD *)this + 0x32) = 0;
  *((_DWORD *)this + 0x33) = 0;
  *((_DWORD *)this + 0x31) = &NiTPointerList<NiPointer<NiPSysModifier>>::`vftable';
  *((_DWORD *)this + 0x36) = 0x25;
  *((_DWORD *)this + 0x35) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPSysModifier *>::`vftable';
  *((_DWORD *)this + 0x38) = 0;
  v2 = FormHeapAlloc(0x94u);
  v5 = 4 * *((_DWORD *)this + 0x36);
  *((_DWORD *)this + 0x37) = v2;
  _memset(v2, 0, v5);
  *((_BYTE *)this + 0xE4) = 1;
  *((_DWORD *)this + 0x35) = &NiTStringPointerMap<NiPSysModifier *>::`vftable';
  v3 = -flt_A7DEB4;
  *((_BYTE *)this + 0xEC) = 0;
  *((float *)this + 0x3A) = v3;
  return this;
}
