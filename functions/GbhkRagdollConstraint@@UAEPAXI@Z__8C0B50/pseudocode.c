bhkSerializable *__thiscall bhkRagdollConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkRagdollConstraint::~bhkRagdollConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
