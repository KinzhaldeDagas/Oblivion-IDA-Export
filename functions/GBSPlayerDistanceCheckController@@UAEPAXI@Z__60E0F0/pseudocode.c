BSPlayerDistanceCheckController *__thiscall BSPlayerDistanceCheckController::`scalar deleting destructor'(
        BSPlayerDistanceCheckController *this,
        char a2)
{
  *(_DWORD *)this = &BSPlayerDistanceCheckController::`vftable'; /*0x60e0f3*/
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this); /*0x60e0f9*/
  if ( (a2 & 1) != 0 ) /*0x60e103*/
    FormHeapFree((unsigned int)this); /*0x60e106*/
  return this; /*0x60e110*/
}
