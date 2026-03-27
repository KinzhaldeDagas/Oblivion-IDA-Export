bhkRefObject *__thiscall sub_47DE90(bhkRefObject *this, int a2)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkAction::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D00;
  this->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable';
  ++dword_BA7D0C;
  this->__vftable = (NiObjectVtbl *)&bhkMouseSpringAction::`vftable';
  sub_89E620(this, a2);
  ++dword_BA7D18;
  return this;
}
