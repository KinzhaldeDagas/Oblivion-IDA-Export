NiObject *__thiscall sub_711C50(NiObject *this)
{
  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiCollisionObject::`vftable';
  *((_DWORD *)this + 2) = 0;
  return this;
}
