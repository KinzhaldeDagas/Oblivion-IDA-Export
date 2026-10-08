void __thiscall hkNiTriStripsShape::~hkNiTriStripsShape(hkNiTriStripsShape *this)
{
  char *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &hkNiTriStripsShape::`vftable'; /*0x916179*/
  v2 = *((char **)this + 0xA); /*0x91617f*/
  *((_DWORD *)this + 9) = &NiTLargeArray<hkNiTriStripsData>::`vftable'; /*0x91618c*/
  if ( v2 ) /*0x916193*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x916198*/
    _LN21(v2, 8u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x9161a4*/
    FormHeapFree(v3); /*0x9161aa*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x9161b2*/
}
