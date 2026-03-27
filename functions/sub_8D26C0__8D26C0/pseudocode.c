bhkRefObject *__thiscall sub_8D26C0(bhkRefObject *this, float *a2)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable';
  ++dword_BA7F44;
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable';
  ++dword_BA7F50;
  this->__vftable = (NiObjectVtbl *)&bhkConvexVerticesShape::`vftable';
  ++dword_BA814C;
  this->__vftable = (NiObjectVtbl *)&bhkCharControllerShape::`vftable';
  sub_8D25A0(this, a2);
  ++dword_BA814C;
  return this;
}
