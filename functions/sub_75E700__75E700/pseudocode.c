NiPSysResetOnLoopCtlr *__thiscall sub_75E700(NiPSysResetOnLoopCtlr *this, char a2)
{
  int v3; // edi
  unsigned int v5; // [esp-4h] [ebp-Ch]

  v5 = *((_DWORD *)this + 0x10); /*0x75e707*/
  *(_DWORD *)this = &NiPSysModifierCtlr::`vftable'; /*0x75e708*/
  FormHeapFree(v5); /*0x75e70e*/
  v3 = *((_DWORD *)this + 0xF); /*0x75e713*/
  if ( v3 ) /*0x75e71b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x75e721*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x75e737*/
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x75e73b*/
  if ( (a2 & 1) != 0 ) /*0x75e745*/
    FormHeapFree((unsigned int)this); /*0x75e748*/
  return this; /*0x75e750*/
}
