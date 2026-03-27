BSPlayerDistanceCheckController *__thiscall BSPlayerDistanceCheckController::`scalar deleting destructor'(
        BSPlayerDistanceCheckController *this,
        char a2)
{
  *(_DWORD *)this = &BSPlayerDistanceCheckController::`vftable';
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
