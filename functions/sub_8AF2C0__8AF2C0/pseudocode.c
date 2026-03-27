bhkRefObject *__thiscall sub_8AF2C0(bhkRefObject *this)
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
  this->__vftable = (NiObjectVtbl *)&bhkSphereShape::`vftable';
  ++dword_BA7F80;
  return this;
}
