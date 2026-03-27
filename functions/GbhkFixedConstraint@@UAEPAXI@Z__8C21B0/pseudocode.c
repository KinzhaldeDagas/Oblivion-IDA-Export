bhkFixedConstraint *__thiscall bhkFixedConstraint::`scalar deleting destructor'(bhkFixedConstraint *this, char a2)
{
  bhkFixedConstraint::~bhkFixedConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
