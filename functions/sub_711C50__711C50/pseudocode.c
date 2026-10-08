NiObject *__thiscall sub_711C50(NiObject *this)
{
  NiObject_constr(this); /*0x711c53*/
  this->__vftable = (NiObjectVtbl *)&NiCollisionObject::`vftable'; /*0x711c58*/
  *((_DWORD *)this + 2) = 0; /*0x711c5e*/
  return this; /*0x711c67*/
}
