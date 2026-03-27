void __thiscall NiUVController::~NiUVController(NiUVController *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &NiUVController::`vftable';
  v2 = *((_DWORD *)this + 0x14);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x14) = 0;
  }
  v4 = *((_DWORD *)this + 0x14);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
}
