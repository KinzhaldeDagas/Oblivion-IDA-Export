bhkConstraint *__thiscall bhkConstraint::`scalar deleting destructor'(bhkConstraint *this, char a2)
{
  bhkConstraint::~bhkConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
