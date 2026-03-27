NiObject *__thiscall NiAccumulator_Constructor(NiObject *this)
{
  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiAccumulator::`vftable';
  *((_DWORD *)this + 2) = 0;
  return this;
}
