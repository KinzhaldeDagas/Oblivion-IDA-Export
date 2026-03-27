bhkLimitedHingeConstraint *__thiscall bhkLimitedHingeConstraint::`scalar deleting destructor'(
        bhkLimitedHingeConstraint *this,
        char a2)
{
  bhkLimitedHingeConstraint::~bhkLimitedHingeConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
