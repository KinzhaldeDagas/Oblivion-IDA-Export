bhkRefObject *__thiscall sub_890410(bhkRefObject *this, _DWORD *a2)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable';
  ++dword_BA816C;
  this->__vftable = (NiObjectVtbl *)&bhkListShape::`vftable';
  sub_8A1170(this, a2);
  ++dword_BA7D58;
  return this;
}
