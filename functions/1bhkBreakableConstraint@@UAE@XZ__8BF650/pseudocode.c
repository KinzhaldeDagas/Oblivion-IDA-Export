void __thiscall bhkBreakableConstraint::~bhkBreakableConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkBreakableConstraint::`vftable';
  sub_89D700(this);
  --dword_BA8094;
  bhkConstraint::~bhkConstraint(this);
}
