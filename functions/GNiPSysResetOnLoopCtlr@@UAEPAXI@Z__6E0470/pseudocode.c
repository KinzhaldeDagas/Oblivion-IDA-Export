NiPSysResetOnLoopCtlr *__thiscall NiPSysResetOnLoopCtlr::`scalar deleting destructor'(
        NiPSysResetOnLoopCtlr *this,
        char a2)
{
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x6e0473*/
  if ( (a2 & 1) != 0 ) /*0x6e047d*/
    FormHeapFree((unsigned int)this); /*0x6e0480*/
  return this; /*0x6e048a*/
}
