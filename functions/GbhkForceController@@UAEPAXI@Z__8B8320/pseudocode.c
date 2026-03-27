bhkForceController *__thiscall bhkForceController::`scalar deleting destructor'(bhkForceController *this, char a2)
{
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
  if ( (a2 & 1) != 0 )
  {
    if ( this )
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  }
  return this;
}
