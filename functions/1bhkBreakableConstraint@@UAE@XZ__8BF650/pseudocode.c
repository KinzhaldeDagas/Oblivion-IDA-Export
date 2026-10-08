void __thiscall bhkBreakableConstraint::~bhkBreakableConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkBreakableConstraint::`vftable'; /*0x8bf678*/
  sub_89D700(this); /*0x8bf686*/
  --unk_BA8094; /*0x8bf68b*/
  bhkConstraint::~bhkConstraint(this); /*0x8bf69c*/
}
