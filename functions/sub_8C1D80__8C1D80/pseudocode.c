bhkRefObject *__thiscall sub_8C1D80(bhkRefObject *this, int a2)
{
  int *v3; // eax

  bhkRefObject::bhkRefObject(this); /*0x8c1da8*/
  v3 = 0; /*0x8c1dad*/
  this->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c1daf*/
  *((_DWORD *)this + 3) = 0; /*0x8c1db5*/
  ++unk_BA7D4C; /*0x8c1db8*/
  this->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable'; /*0x8c1dbf*/
  ++unk_BA8354; /*0x8c1dc5*/
  this->__vftable = (NiObjectVtbl *)&bhkFixedConstraint::`vftable'; /*0x8c1dd6*/
  if ( a2 ) /*0x8c1ddc*/
    v3 = (int *)(a2 + 4); /*0x8c1dde*/
  sub_8A0610(this, v3); /*0x8c1de4*/
  ++unk_BA80D0; /*0x8c1de9*/
  return this; /*0x8c1df2*/
}
