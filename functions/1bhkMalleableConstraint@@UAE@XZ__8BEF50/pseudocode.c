void __thiscall bhkMalleableConstraint::~bhkMalleableConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMalleableConstraint::`vftable';
  sub_89D700(this);
  --dword_BA8088;
  bhkConstraint::~bhkConstraint(this);
}
