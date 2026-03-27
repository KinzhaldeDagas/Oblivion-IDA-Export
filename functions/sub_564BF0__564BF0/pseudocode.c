bhkRefObject *__thiscall sub_564BF0(bhkRefObject *this, __m128 *a2)
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
  this->__vftable = (NiObjectVtbl *)&bhkBoxShape::`vftable';
  ++dword_BA7FF4;
  sub_564080(this, a2);
  return this;
}
