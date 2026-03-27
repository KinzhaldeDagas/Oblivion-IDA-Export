NiPSysFieldModifier *__thiscall sub_75AA50(NiPSysFieldModifier *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 7);
  *(_DWORD *)this = &NiPSysBoundUpdateModifier::`vftable';
  FormHeapFree(v4);
  NiPSysFieldModifier::~NiPSysFieldModifier(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
