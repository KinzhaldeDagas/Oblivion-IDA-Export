bhkRefObject *__thiscall sub_563A30(bhkRefObject *this, int a2)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable';
  ++dword_BA7F44;
  this->__vftable = (NiObjectVtbl *)&bhkMultiSphereShape::`vftable';
  sub_8B76E0(this, a2);
  ++dword_BA7FE8;
  return this;
}
