NiObject *__thiscall sub_897600(NiObject *this)
{
  sub_711C50(this);
  this->__vftable = (NiObjectVtbl *)&bhkNiCollisionObject::`vftable';
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7A80;
  *((_WORD *)this + 6) = 0x41;
  return this;
}
