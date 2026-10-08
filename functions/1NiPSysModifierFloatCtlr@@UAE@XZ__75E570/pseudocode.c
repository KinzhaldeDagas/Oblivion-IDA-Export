void __thiscall NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(NiPSysModifierFloatCtlr *this)
{
  int v2; // edi
  unsigned int v3; // [esp-4h] [ebp-Ch]

  v3 = *((_DWORD *)this + 0x10); /*0x75e577*/
  *(_DWORD *)this = &NiPSysModifierCtlr::`vftable'; /*0x75e578*/
  FormHeapFree(v3); /*0x75e57e*/
  v2 = *((_DWORD *)this + 0xF); /*0x75e583*/
  if ( v2 ) /*0x75e58b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x75e591*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x75e5a7*/
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x75e5ad*/
}
