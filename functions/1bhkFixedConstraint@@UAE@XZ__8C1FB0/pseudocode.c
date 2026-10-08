void __thiscall bhkFixedConstraint::~bhkFixedConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkFixedConstraint::`vftable'; /*0x8c1fd8*/
  sub_89D700(this); /*0x8c1fe6*/
  --unk_BA80D0; /*0x8c1feb*/
  bhkGenericConstraint::~bhkGenericConstraint(this); /*0x8c1ffc*/
}
