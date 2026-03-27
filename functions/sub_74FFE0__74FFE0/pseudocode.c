NiPSysModifierFloatCtlr *__thiscall sub_74FFE0(NiPSysModifierFloatCtlr *this, char a2)
{
  int v3; // esi

  FormHeapFree(*((_DWORD *)this + 0x16));
  v3 = *((_DWORD *)this + 0x12);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
