void __thiscall NiBoneLODController::~NiBoneLODController(NiBoneLODController *this)
{
  unsigned int v2; // [esp-Ch] [ebp-24h]
  unsigned int v3; // [esp-8h] [ebp-20h]

  *(_DWORD *)this = &NiBoneLODController::`vftable'; /*0x6ea188*/
  sub_6E9F60(this); /*0x6ea196*/
  FormHeapFree(*((_DWORD *)this + 0x19)); /*0x6ea19f*/
  v3 = *((_DWORD *)this + 0x16); /*0x6ea1a7*/
  *((_DWORD *)this + 0x15) = &NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'; /*0x6ea1a8*/
  FormHeapFree(v3); /*0x6ea1af*/
  v2 = *((_DWORD *)this + 0x12); /*0x6ea1b7*/
  *((_DWORD *)this + 0x11) = &NiTArray<NiTSet<NiNode *> *>::`vftable'; /*0x6ea1b8*/
  FormHeapFree(v2); /*0x6ea1bf*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6ea1d1*/
}
