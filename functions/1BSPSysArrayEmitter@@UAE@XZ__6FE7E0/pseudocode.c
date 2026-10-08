void __thiscall BSPSysArrayEmitter::~BSPSysArrayEmitter(BSPSysArrayEmitter *this)
{
  char *v2; // eax
  unsigned int v3; // edi

  v2 = *((char **)this + 0x17); /*0x6fe809*/
  *((_DWORD *)this + 0x16) = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x6fe816*/
  if ( v2 ) /*0x6fe81d*/
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFC); /*0x6fe822*/
    _LN21(v2, 4u, *((_DWORD *)v2 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6fe82e*/
    FormHeapFree(v3); /*0x6fe834*/
  }
  NiPSysFieldModifier::~NiPSysFieldModifier(this); /*0x6fe846*/
}
