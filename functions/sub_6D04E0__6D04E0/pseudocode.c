// Constructs NiInterpController over NiTimeController, installs its vtable, and clears interpolator capability/manager flag 0x20.
NiTimeController *__thiscall NiInterpController_Construct(NiTimeController *this)
{
  NiTimeController::NiTimeController(this); /*0x6d04e3*/
  this->members.flags &= ~0x20u; /*0x6d04e8*/
  this->vtbl = (NiTimeControllerVtbl *)&NiInterpController::`vftable'; /*0x6d04ee*/
  return this; /*0x6d04f6*/
}
