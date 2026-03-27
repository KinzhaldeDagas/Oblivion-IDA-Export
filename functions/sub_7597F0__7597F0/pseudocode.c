NiObject *__thiscall sub_7597F0(NiObject *this)
{
  sub_73EE80(this);
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_WORD *)this + 0x32) = 0;
  *((_WORD *)this + 0x33) = 0;
  this->__vftable = (NiObjectVtbl *)&NiPSysData::`vftable';
  return this;
}
