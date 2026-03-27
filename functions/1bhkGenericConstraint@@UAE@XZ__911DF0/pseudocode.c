void __thiscall bhkGenericConstraint::~bhkGenericConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable';
  sub_89D700(this);
  --dword_BA8354;
  bhkConstraint::~bhkConstraint(this);
}
