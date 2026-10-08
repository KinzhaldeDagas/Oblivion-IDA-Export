void __thiscall bhkWheelConstraint::~bhkWheelConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkWheelConstraint::`vftable'; /*0x8bfe48*/
  sub_89D700(this); /*0x8bfe56*/
  --unk_BA80A0; /*0x8bfe5b*/
  bhkConstraint::~bhkConstraint(this); /*0x8bfe6c*/
}
