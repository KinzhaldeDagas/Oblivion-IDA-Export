BSDoorHavokController *__thiscall BSDoorHavokController::`scalar deleting destructor'(
        BSDoorHavokController *this,
        char a2)
{
  *(_DWORD *)this = &BSDoorHavokController::`vftable';
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
