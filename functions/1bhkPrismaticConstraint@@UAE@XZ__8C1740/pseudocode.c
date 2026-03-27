void __thiscall bhkPrismaticConstraint::~bhkPrismaticConstraint(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkPrismaticConstraint::`vftable';
  sub_89D700(this);
  --dword_BA80C4;
  bhkConstraint::~bhkConstraint(this);
}
