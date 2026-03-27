void __thiscall BSPSysArrayEmitter::~BSPSysArrayEmitter(BSPSysArrayEmitter *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  v2 = *((int **)this + 0x17);
  *((_DWORD *)this + 0x16) = &NiTArray<NiPointer<NiAVObject>>::`vftable';
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 4u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v3);
  }
  NiPSysFieldModifier::~NiPSysFieldModifier(this);
}
