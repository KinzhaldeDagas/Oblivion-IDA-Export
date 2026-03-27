NiTimeController *__thiscall sub_6C5EE0(NiTimeController *this, unsigned __int16 a2)
{
  sub_6D04E0(this);
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_WORD *)this + 0x22) = 0;
  this->vtbl = (NiTimeControllerVtbl *)&NiMultiTargetTransformController::`vftable';
  sub_6D0010(this, a2);
  return this;
}
