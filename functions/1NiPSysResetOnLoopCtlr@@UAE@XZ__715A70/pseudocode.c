void __thiscall NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(NiPSysResetOnLoopCtlr *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *(_DWORD *)this = &NiTimeController::`vftable'; /*0x715a9a*/
  v2 = *((_DWORD *)this + 0xD); /*0x715aa0*/
  v3 = InterlockedDecrement; /*0x715aa5*/
  if ( v2 ) /*0x715ab3*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x715ab9*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x715acb*/
    *((_DWORD *)this + 0xD) = 0; /*0x715acd*/
  }
  v4 = *((_DWORD *)this + 0xD); /*0x715ad4*/
  if ( v4 ) /*0x715ade*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x715ae4*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x715af6*/
  }
  NiRefObject_destr(this); /*0x715b02*/
}
