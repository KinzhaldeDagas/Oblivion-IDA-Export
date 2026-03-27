bhkRefObject *__thiscall sub_8C1E10(bhkRefObject *this, int a2)
{
  int *v3; // eax

  bhkRefObject::bhkRefObject(this);
  v3 = 0;
  *((_DWORD *)this + 3) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable';
  ++dword_BA7D4C;
  this->__vftable = (NiObjectVtbl *)&bhkMalleableConstraint::`vftable';
  if ( a2 )
    v3 = (int *)(a2 + 4);
  sub_8A0610(this, v3);
  ++dword_BA8088;
  return this;
}
