NiObject *__thiscall sub_56B7F0(NiObject *this)
{
  NiObject_constr(this);
  *((_DWORD *)this + 2) = 0;
  this->__vftable = (NiObjectVtbl *)&BSTECreateTask::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
