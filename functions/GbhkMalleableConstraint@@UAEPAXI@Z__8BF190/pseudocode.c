bhkSerializable *__thiscall bhkMalleableConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkMalleableConstraint::~bhkMalleableConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
