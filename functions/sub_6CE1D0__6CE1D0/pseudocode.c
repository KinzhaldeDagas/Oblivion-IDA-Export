// Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
NiTimeController *__thiscall NiSingleInterpController_Construct(NiTimeController *this)
{
  NiInterpController_Construct(this); /*0x6ce1d3*/
  this->vtbl = (NiTimeControllerVtbl *)&NiSingleInterpController::`vftable'; /*0x6ce1d8*/
  *((_DWORD *)this + 0xF) = 0; /*0x6ce1de*/
  return this; /*0x6ce1e7*/
}
