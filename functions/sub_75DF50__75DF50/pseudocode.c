NiObject *__thiscall sub_75DF50(NiObject *this)
{
  NiObject_constr(this);
  *((_DWORD *)this + 2) = 0;
  this->__vftable = (NiObjectVtbl *)&NiPSysUpdateTask::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((float *)this + 4) = 0.0;
  return this;
}
