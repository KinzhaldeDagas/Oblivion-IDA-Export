bhkSerializable *__thiscall bhkRagdollConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkRagdollConstraint::~bhkRagdollConstraint(this); /*0x8c0b53*/
  if ( (a2 & 1) != 0 ) /*0x8c0b5d*/
    FormHeapFree((unsigned int)this); /*0x8c0b60*/
  return this; /*0x8c0b6a*/
}
