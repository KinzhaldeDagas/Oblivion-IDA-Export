void __thiscall bhkRagdollConstraint::~bhkRagdollConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkRagdollConstraint::`vftable'; /*0x8c0998*/
  sub_89D700(this); /*0x8c09a6*/
  --unk_BA80B8; /*0x8c09ab*/
  bhkConstraint::~bhkConstraint(this); /*0x8c09bc*/
}
