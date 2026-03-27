NiPSysFieldModifier *__thiscall sub_74BC80(NiPSysFieldModifier *this, char a2)
{
  int *v3; // ecx
  int *v4; // ecx

  v3 = *((int **)this + 0x19);
  *((_DWORD *)this + 0x18) = &NiTArray<NiPointer<NiPSysMeshEmitter::NiSkinnedEmitterData>>::`vftable';
  if ( v3 )
    sub_74A000(v3, 3);
  v4 = *((int **)this + 0x15);
  *((_DWORD *)this + 0x14) = &NiTArray<NiPointer<NiGeometry>>::`vftable';
  if ( v4 )
    sub_74A000(v4, 3);
  NiPSysFieldModifier::~NiPSysFieldModifier(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
