bhkSerializable *__thiscall bhkBreakableConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkBreakableConstraint::~bhkBreakableConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
