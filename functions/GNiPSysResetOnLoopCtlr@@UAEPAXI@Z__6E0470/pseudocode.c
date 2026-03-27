NiPSysResetOnLoopCtlr *__thiscall NiPSysResetOnLoopCtlr::`scalar deleting destructor'(
        NiPSysResetOnLoopCtlr *this,
        char a2)
{
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
