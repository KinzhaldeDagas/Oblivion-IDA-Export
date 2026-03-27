NiTimeController *__thiscall sub_75E540(NiTimeController *this)
{
  sub_6CE1D0(this);
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  this->vtbl = (NiTimeControllerVtbl *)&NiPSysModifierCtlr::`vftable';
  return this;
}
