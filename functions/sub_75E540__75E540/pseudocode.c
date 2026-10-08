NiTimeController *__thiscall sub_75E540(NiTimeController *this)
{
  NiSingleInterpController_Construct(this); /*0x75e543*/
  *((_DWORD *)this + 0x10) = 0; /*0x75e54a*/
  *((_DWORD *)this + 0x11) = 0; /*0x75e54d*/
  this->vtbl = (NiTimeControllerVtbl *)&NiPSysModifierCtlr::`vftable'; /*0x75e550*/
  return this; /*0x75e558*/
}
