void __thiscall bhkStiffSpringConstraint::~bhkStiffSpringConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkStiffSpringConstraint::`vftable'; /*0x8c0578*/
  sub_89D700(this); /*0x8c0586*/
  --unk_BA80AC; /*0x8c058b*/
  bhkConstraint::~bhkConstraint(this); /*0x8c059c*/
}
