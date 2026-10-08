NiTimeController *__thiscall sub_6C5EE0(NiTimeController *this, unsigned __int16 a2)
{
  NiInterpController_Construct(this); /*0x6c5f08*/
  *((_DWORD *)this + 0xF) = 0; /*0x6c5f13*/
  *((_DWORD *)this + 0x10) = 0; /*0x6c5f16*/
  *((_WORD *)this + 0x22) = 0; /*0x6c5f19*/
  this->vtbl = (NiTimeControllerVtbl *)&NiMultiTargetTransformController::`vftable'; /*0x6c5f24*/
  sub_6D0010(this, a2); /*0x6c5f2a*/
  return this; /*0x6c5f31*/
}
