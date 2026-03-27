NiPSysFieldModifier *__thiscall sub_74DDA0(NiPSysFieldModifier *this, char a2)
{
  int *v3; // ecx

  v3 = *((int **)this + 7);
  *((_DWORD *)this + 6) = &NiTArray<NiPointer<NiAVObject>>::`vftable';
  if ( v3 )
    sub_4027F0(v3, 3);
  NiPSysFieldModifier::~NiPSysFieldModifier(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
