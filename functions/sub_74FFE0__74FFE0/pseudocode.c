NiPSysModifierFloatCtlr *__thiscall sub_74FFE0(NiPSysModifierFloatCtlr *this, char a2)
{
  int v3; // esi

  FormHeapFree(*((_DWORD *)this + 0x16)); /*0x74ffe8*/
  v3 = *((_DWORD *)this + 0x12); /*0x74ffed*/
  if ( v3 ) /*0x74fff5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x74fffb*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x750011*/
  }
  NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(this); /*0x750015*/
  if ( (a2 & 1) != 0 ) /*0x75001f*/
    FormHeapFree((unsigned int)this); /*0x750022*/
  return this; /*0x75002c*/
}
