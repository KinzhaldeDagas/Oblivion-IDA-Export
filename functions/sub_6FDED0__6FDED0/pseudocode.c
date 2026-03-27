NiPSysResetOnLoopCtlr *__thiscall sub_6FDED0(NiPSysResetOnLoopCtlr *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &NiBSBoneLODController::`vftable';
  sub_6FD8B0(this);
  v4 = *((_DWORD *)this + 0x12);
  *((_DWORD *)this + 0x11) = &NiTArray<NiTSet<NiNode *> *>::`vftable';
  FormHeapFree(v4);
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
