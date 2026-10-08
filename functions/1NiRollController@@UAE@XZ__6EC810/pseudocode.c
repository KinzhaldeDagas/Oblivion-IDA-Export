void __thiscall NiRollController::~NiRollController(NiRollController *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &NiFloatController::`vftable'; /*0x6ec83a*/
  v2 = *((_DWORD *)this + 0x10); /*0x6ec840*/
  v3 = InterlockedDecrement; /*0x6ec845*/
  if ( v2 ) /*0x6ec853*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x6ec859*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6ec86b*/
    *((_DWORD *)this + 0x10) = 0; /*0x6ec86d*/
  }
  v4 = *((_DWORD *)this + 0x10); /*0x6ec874*/
  if ( v4 ) /*0x6ec87e*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x6ec884*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6ec896*/
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6ec8a2*/
}
