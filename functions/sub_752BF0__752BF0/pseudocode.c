NiObject *__thiscall sub_752BF0(NiObject *this)
{
  NiObject_constr(this);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  this->__vftable = (NiObjectVtbl *)&NiPSysModifier::`vftable';
  *((_BYTE *)this + 0x14) = 1;
  return this;
}
