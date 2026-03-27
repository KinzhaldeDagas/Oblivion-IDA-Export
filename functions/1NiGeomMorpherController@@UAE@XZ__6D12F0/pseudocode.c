void __thiscall NiGeomMorpherController::~NiGeomMorpherController(NiGeomMorpherController *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // edi
  unsigned int v5; // [esp-4h] [ebp-24h]

  *(_DWORD *)this = &NiGeomMorpherController::`vftable';
  v2 = *((_DWORD *)this + 0x14);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x14) = 0;
  }
  sub_6D10F0((unsigned __int16 *)this, 0.0);
  v4 = *((_DWORD *)this + 0x14);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *((_DWORD *)this + 0x11);
  *((_DWORD *)this + 0x10) = &NiTArray<float>::`vftable';
  FormHeapFree(v5);
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
}
