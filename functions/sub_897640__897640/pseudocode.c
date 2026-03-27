NiObject *__thiscall sub_897640(NiObject *this, NiAVObject *a2)
{
  sub_711D90(this, a2);
  this->__vftable = (NiObjectVtbl *)&bhkNiCollisionObject::`vftable';
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7A80;
  *((_WORD *)this + 6) = 0x41;
  return this;
}
