void __thiscall NiBoneLODController::~NiBoneLODController(NiBoneLODController *this)
{
  unsigned int v2; // [esp-Ch] [ebp-24h]
  unsigned int v3; // [esp-8h] [ebp-20h]

  *(_DWORD *)this = &NiBoneLODController::`vftable';
  sub_6E9F60(this);
  FormHeapFree(*((_DWORD *)this + 0x19));
  v3 = *((_DWORD *)this + 0x16);
  *((_DWORD *)this + 0x15) = &NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable';
  FormHeapFree(v3);
  v2 = *((_DWORD *)this + 0x12);
  *((_DWORD *)this + 0x11) = &NiTArray<NiTSet<NiNode *> *>::`vftable';
  FormHeapFree(v2);
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
}
