void __thiscall bhkMalleableConstraint::~bhkMalleableConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMalleableConstraint::`vftable'; /*0x8bef78*/
  sub_89D700(this); /*0x8bef86*/
  --unk_BA8088; /*0x8bef8b*/
  bhkConstraint::~bhkConstraint(this); /*0x8bef9c*/
}
