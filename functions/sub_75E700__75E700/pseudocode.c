NiPSysResetOnLoopCtlr *__thiscall sub_75E700(NiPSysResetOnLoopCtlr *this, char a2)
{
  int v3; // edi
  unsigned int v5; // [esp-4h] [ebp-Ch]

  v5 = *((_DWORD *)this + 0x10);
  *(_DWORD *)this = &NiPSysModifierCtlr::`vftable';
  FormHeapFree(v5);
  v3 = *((_DWORD *)this + 0xF);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
