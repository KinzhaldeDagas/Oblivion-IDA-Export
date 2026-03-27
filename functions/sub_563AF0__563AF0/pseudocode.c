bhkRefObject *__thiscall sub_563AF0(bhkRefObject *this, int a2)
{
  bhkRefObject::bhkRefObject(this);
  *((_DWORD *)this + 3) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkTransformShape::`vftable';
  sub_8A2160(this, a2);
  ++dword_BA7D64;
  return this;
}
