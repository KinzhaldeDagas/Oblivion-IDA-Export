void __thiscall bhkStiffSpringConstraint::~bhkStiffSpringConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkStiffSpringConstraint::`vftable';
  sub_89D700(this);
  --dword_BA80AC;
  bhkConstraint::~bhkConstraint(this);
}
