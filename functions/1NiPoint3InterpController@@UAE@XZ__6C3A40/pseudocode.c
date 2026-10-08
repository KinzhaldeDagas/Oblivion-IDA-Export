// Shared single-interpolator-controller destructor body used by this controller family: releases refcounted interpolator smart pointer +0x3C, deleting at zero references, then destroys the time-controller base. Existing RTTI name reflects another identical controller specialization.
void __thiscall NiPoint3InterpController::~NiPoint3InterpController(NiPoint3InterpController *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 0xF); /*0x6c3a69*/
  if ( v2 ) /*0x6c3a76*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6c3a7c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6c3a92*/
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6c3a9e*/
}
