void __thiscall bhkFixedConstraint::~bhkFixedConstraint(bhkFixedConstraint *this)
{
  *(_DWORD *)this = &bhkFixedConstraint::`vftable';
  sub_89D700(this);
  --dword_BA80D0;
  bhkGenericConstraint::~bhkGenericConstraint(this);
}
