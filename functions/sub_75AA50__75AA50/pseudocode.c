NiPSysFieldModifier *__thiscall sub_75AA50(NiPSysFieldModifier *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 7); /*0x75aa56*/
  *(_DWORD *)this = &NiPSysBoundUpdateModifier::`vftable'; /*0x75aa57*/
  FormHeapFree(v4); /*0x75aa5d*/
  NiPSysFieldModifier::~NiPSysFieldModifier(this); /*0x75aa67*/
  if ( (a2 & 1) != 0 ) /*0x75aa71*/
    FormHeapFree((unsigned int)this); /*0x75aa74*/
  return this; /*0x75aa7e*/
}
