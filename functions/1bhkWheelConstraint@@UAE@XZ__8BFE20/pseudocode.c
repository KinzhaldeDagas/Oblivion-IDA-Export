void __thiscall bhkWheelConstraint::~bhkWheelConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkWheelConstraint::`vftable';
  sub_89D700(this);
  --dword_BA80A0;
  bhkConstraint::~bhkConstraint(this);
}
