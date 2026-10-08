void __thiscall NiExtraDataController::~NiExtraDataController(NiExtraDataController *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiExtraDataController::`vftable'; /*0x6ecd79*/
  FormHeapFree(*((_DWORD *)this + 0x10)); /*0x6ecd8b*/
  v2 = *((_DWORD *)this + 0x11); /*0x6ecd90*/
  if ( v2 ) /*0x6ecd98*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6ecd9e*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6ecdb4*/
  }
  NiPoint3InterpController::~NiPoint3InterpController(this); /*0x6ecdc0*/
}
