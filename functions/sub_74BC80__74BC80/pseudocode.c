NiPSysFieldModifier *__thiscall sub_74BC80(NiPSysFieldModifier *this, char a2)
{
  int *v3; // ecx
  int *v4; // ecx

  v3 = *((int **)this + 0x19); /*0x74bc83*/
  *((_DWORD *)this + 0x18) = &NiTArray<NiPointer<NiPSysMeshEmitter::NiSkinnedEmitterData>>::`vftable'; /*0x74bc88*/
  if ( v3 ) /*0x74bc8f*/
    sub_74A000(v3, 3); /*0x74bc93*/
  v4 = *((int **)this + 0x15); /*0x74bc98*/
  *((_DWORD *)this + 0x14) = &NiTArray<NiPointer<NiGeometry>>::`vftable'; /*0x74bc9d*/
  if ( v4 ) /*0x74bca4*/
    sub_74A000(v4, 3); /*0x74bca8*/
  NiPSysFieldModifier::~NiPSysFieldModifier(this); /*0x74bcaf*/
  if ( (a2 & 1) != 0 ) /*0x74bcb9*/
    FormHeapFree((unsigned int)this); /*0x74bcbc*/
  return this; /*0x74bcc6*/
}
