bhkForceController *__thiscall bhkForceController::`scalar deleting destructor'(bhkForceController *this, char a2)
{
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x8b8323*/
  if ( (a2 & 1) != 0 ) /*0x8b832d*/
  {
    if ( this ) /*0x8b8331*/
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF)); /*0x8b8341*/
  }
  return this; /*0x8b8348*/
}
