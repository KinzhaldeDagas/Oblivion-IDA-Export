NiPSysResetOnLoopCtlr *__thiscall sub_8AAC90(NiPSysResetOnLoopCtlr *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &bhkBlendController::`vftable';
  v4 = *((_DWORD *)this + 0x11);
  *((_DWORD *)this + 0x10) = &NiTLargeArray<BLENDKEY>::`vftable';
  FormHeapFree(v4);
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
