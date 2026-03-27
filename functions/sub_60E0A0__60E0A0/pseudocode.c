NiTimeController *__thiscall sub_60E0A0(NiTimeController *this)
{
  NiTimeController::NiTimeController(this);
  *((float *)this + 0xF) = 0.0;
  this->vtbl = (NiTimeControllerVtbl *)&BSPlayerDistanceCheckController::`vftable';
  *((_DWORD *)this + 0x10) = 0;
  return this;
}
