NiLightDimmerController *__thiscall NiLightDimmerController::`scalar deleting destructor'(
        NiLightDimmerController *this,
        char a2)
{
  *(_DWORD *)this = &NiLightDimmerController::`vftable'; /*0x6e0843*/
  NiPoint3InterpController::~NiPoint3InterpController(this); /*0x6e0849*/
  if ( (a2 & 1) != 0 ) /*0x6e0853*/
    FormHeapFree((unsigned int)this); /*0x6e0856*/
  return this; /*0x6e0860*/
}
