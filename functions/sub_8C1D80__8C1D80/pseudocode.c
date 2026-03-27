bhkRefObject *__thiscall sub_8C1D80(bhkRefObject *this, int a2)
{
  int *v3; // eax

  bhkRefObject::bhkRefObject(this);
  v3 = 0;
  this->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D4C;
  this->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable';
  ++dword_BA8354;
  this->__vftable = (NiObjectVtbl *)&bhkFixedConstraint::`vftable';
  if ( a2 )
    v3 = (int *)(a2 + 4);
  sub_8A0610(this, v3);
  ++dword_BA80D0;
  return this;
}
