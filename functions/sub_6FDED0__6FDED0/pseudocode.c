NiPSysResetOnLoopCtlr *__thiscall sub_6FDED0(NiPSysResetOnLoopCtlr *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &NiBSBoneLODController::`vftable'; /*0x6fded3*/
  sub_6FD8B0(this); /*0x6fded9*/
  v4 = *((_DWORD *)this + 0x12); /*0x6fdee1*/
  *((_DWORD *)this + 0x11) = &NiTArray<NiTSet<NiNode *> *>::`vftable'; /*0x6fdee2*/
  FormHeapFree(v4); /*0x6fdee9*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6fdef3*/
  if ( (a2 & 1) != 0 ) /*0x6fdefd*/
    FormHeapFree((unsigned int)this); /*0x6fdf00*/
  return this; /*0x6fdf0a*/
}
