NiTimeController *__thiscall sub_6CE1D0(NiTimeController *this)
{
  sub_6D04E0(this);
  this->vtbl = (NiTimeControllerVtbl *)&NiSingleInterpController::`vftable';
  *((_DWORD *)this + 0xF) = 0;
  return this;
}
