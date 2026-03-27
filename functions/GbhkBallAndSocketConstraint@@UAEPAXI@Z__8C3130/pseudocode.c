bhkSerializable *__thiscall bhkBallAndSocketConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkBallAndSocketConstraint::~bhkBallAndSocketConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
