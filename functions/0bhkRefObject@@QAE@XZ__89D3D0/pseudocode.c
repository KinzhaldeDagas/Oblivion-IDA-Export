bhkRefObject *__thiscall bhkRefObject::bhkRefObject(bhkRefObject *this)
{
  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&bhkRefObject::`vftable';
  this->hkObject = 0;
  return this;
}
