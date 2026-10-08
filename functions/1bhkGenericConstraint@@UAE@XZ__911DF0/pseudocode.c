void __thiscall bhkGenericConstraint::~bhkGenericConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable'; /*0x911e18*/
  sub_89D700(this); /*0x911e26*/
  --unk_BA8354; /*0x911e2b*/
  bhkConstraint::~bhkConstraint(this); /*0x911e3c*/
}
