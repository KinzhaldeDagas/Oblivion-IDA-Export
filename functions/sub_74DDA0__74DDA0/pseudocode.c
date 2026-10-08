NiPSysFieldModifier *__thiscall sub_74DDA0(NiPSysFieldModifier *this, char a2)
{
  int *v3; // ecx

  v3 = *((int **)this + 7); /*0x74dda3*/
  *((_DWORD *)this + 6) = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x74dda8*/
  if ( v3 ) /*0x74ddaf*/
    sub_4027F0(v3, 3); /*0x74ddb3*/
  NiPSysFieldModifier::~NiPSysFieldModifier(this); /*0x74ddba*/
  if ( (a2 & 1) != 0 ) /*0x74ddc4*/
    FormHeapFree((unsigned int)this); /*0x74ddc7*/
  return this; /*0x74ddd1*/
}
