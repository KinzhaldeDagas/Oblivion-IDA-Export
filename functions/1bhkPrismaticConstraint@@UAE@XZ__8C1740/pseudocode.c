void __thiscall bhkPrismaticConstraint::~bhkPrismaticConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkPrismaticConstraint::`vftable'; /*0x8c1768*/
  sub_89D700(this); /*0x8c1776*/
  --unk_BA80C4; /*0x8c177b*/
  bhkConstraint::~bhkConstraint(this); /*0x8c178c*/
}
