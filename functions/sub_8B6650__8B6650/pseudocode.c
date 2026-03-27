bhkRefObject *__thiscall sub_8B6650(bhkRefObject *this)
{
  bhkRefObject::bhkRefObject(this);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable';
  ++dword_BA7F44;
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable';
  ++dword_BA7F50;
  this->__vftable = (NiObjectVtbl *)&bhkCapsuleShape::`vftable';
  ++dword_BA7FD4;
  return this;
}
