NiPSysResetOnLoopCtlr *__thiscall sub_8AAC90(NiPSysResetOnLoopCtlr *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &bhkBlendController::`vftable'; /*0x8aac93*/
  v4 = *((_DWORD *)this + 0x11); /*0x8aac9c*/
  *((_DWORD *)this + 0x10) = &NiTLargeArray<BLENDKEY>::`vftable'; /*0x8aac9d*/
  FormHeapFree(v4); /*0x8aaca4*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x8aacae*/
  if ( (a2 & 1) != 0 ) /*0x8aacb8*/
    FormHeapFree((unsigned int)this); /*0x8aacbb*/
  return this; /*0x8aacc5*/
}
