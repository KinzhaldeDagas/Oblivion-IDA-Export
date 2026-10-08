NiPSysFieldModifier *__thiscall sub_75A760(NiPSysFieldModifier *this, char a2)
{
  int v3; // esi

  v3 = *((_DWORD *)this + 6); /*0x75a764*/
  if ( v3 ) /*0x75a769*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x75a76f*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x75a785*/
  }
  NiPSysFieldModifier::~NiPSysFieldModifier(this); /*0x75a789*/
  if ( (a2 & 1) != 0 ) /*0x75a793*/
    FormHeapFree((unsigned int)this); /*0x75a796*/
  return this; /*0x75a7a0*/
}
