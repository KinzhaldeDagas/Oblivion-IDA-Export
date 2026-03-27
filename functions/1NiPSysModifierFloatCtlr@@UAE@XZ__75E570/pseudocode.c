void __thiscall NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(NiPSysModifierFloatCtlr *this)
{
  int v2; // edi
  unsigned int v3; // [esp-4h] [ebp-Ch]

  v3 = *((_DWORD *)this + 0x10);
  *(_DWORD *)this = &NiPSysModifierCtlr::`vftable';
  FormHeapFree(v3);
  v2 = *((_DWORD *)this + 0xF);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
}
