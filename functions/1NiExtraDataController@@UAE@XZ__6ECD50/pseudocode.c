void __thiscall NiExtraDataController::~NiExtraDataController(NiExtraDataController *this)
{
  int v2; // edi

  *(_DWORD *)this = &NiExtraDataController::`vftable';
  FormHeapFree(*((_DWORD *)this + 0x10));
  v2 = *((_DWORD *)this + 0x11);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  NiPoint3InterpController::~NiPoint3InterpController(this);
}
