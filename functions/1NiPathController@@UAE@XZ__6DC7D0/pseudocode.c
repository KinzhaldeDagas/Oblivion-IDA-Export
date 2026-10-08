void __thiscall NiPathController::~NiPathController(NiPathController *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi

  *(_DWORD *)this = &NiPathController::`vftable'; /*0x6dc7fa*/
  v2 = *((_DWORD *)this + 0x12); /*0x6dc800*/
  v3 = InterlockedDecrement; /*0x6dc805*/
  if ( v2 ) /*0x6dc813*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x6dc819*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6dc82b*/
    *((_DWORD *)this + 0x12) = 0; /*0x6dc82d*/
  }
  v4 = *((_DWORD *)this + 0x13); /*0x6dc834*/
  if ( v4 ) /*0x6dc839*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x6dc83f*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6dc851*/
    *((_DWORD *)this + 0x13) = 0; /*0x6dc853*/
  }
  FormHeapFree(*((_DWORD *)this + 0x14)); /*0x6dc85e*/
  v5 = *((_DWORD *)this + 0x13); /*0x6dc863*/
  if ( v5 ) /*0x6dc870*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x6dc876*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6dc888*/
  }
  v6 = *((_DWORD *)this + 0x12); /*0x6dc88a*/
  if ( v6 ) /*0x6dc894*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x6dc89a*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6dc8ac*/
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6dc8b8*/
}
