void __thiscall NiUVController::~NiUVController(NiUVController *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &NiUVController::`vftable'; /*0x6d527a*/
  v2 = *((_DWORD *)this + 0x14); /*0x6d5280*/
  v3 = InterlockedDecrement; /*0x6d5285*/
  if ( v2 ) /*0x6d5293*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x6d5299*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6d52ab*/
    *((_DWORD *)this + 0x14) = 0; /*0x6d52ad*/
  }
  v4 = *((_DWORD *)this + 0x14); /*0x6d52b4*/
  if ( v4 ) /*0x6d52be*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x6d52c4*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d52d6*/
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6d52e2*/
}
