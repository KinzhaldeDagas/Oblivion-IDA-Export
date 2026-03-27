bhkSerializable *__thiscall bhkHingeConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkHingeConstraint::~bhkHingeConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
