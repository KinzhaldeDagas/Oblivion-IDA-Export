void __thiscall bhkRagdollConstraint::~bhkRagdollConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkRagdollConstraint::`vftable';
  sub_89D700(this);
  --dword_BA80B8;
  bhkConstraint::~bhkConstraint(this);
}
