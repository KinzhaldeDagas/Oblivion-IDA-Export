bhkSerializable *__thiscall bhkWheelConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkWheelConstraint::~bhkWheelConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
