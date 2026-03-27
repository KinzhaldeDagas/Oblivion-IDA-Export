bhkRefObject *__thiscall sub_8A4150(bhkRefObject *this)
{
  _DWORD v3[8]; // [esp-4h] [ebp-20h] BYREF

  v3[3] = this;
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D34;
  this->__vftable = (NiObjectVtbl *)&bhkEntity::`vftable';
  ++dword_BA7F8C;
  this->__vftable = (NiObjectVtbl *)&bhkRigidBody::`vftable';
  v3[7] = 0;
  v3[4] = v3;
  sub_532DF0((_DWORD *)this + 4, 0);
  *((_DWORD *)this + 6) = 0;
  ++dword_BA7D80;
  return this;
}
