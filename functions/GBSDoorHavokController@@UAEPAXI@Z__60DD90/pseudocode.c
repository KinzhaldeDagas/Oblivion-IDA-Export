BSDoorHavokController *__thiscall BSDoorHavokController::`scalar deleting destructor'(
        BSDoorHavokController *this,
        char a2)
{
  *(_DWORD *)this = &BSDoorHavokController::`vftable'; /*0x60dd93*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x60dd99*/
  if ( (a2 & 1) != 0 ) /*0x60dda3*/
    FormHeapFree((unsigned int)this); /*0x60dda6*/
  return this; /*0x60ddb0*/
}
