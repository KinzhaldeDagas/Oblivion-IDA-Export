bhkSerializable *__thiscall bhkMalleableConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkMalleableConstraint::~bhkMalleableConstraint(this); /*0x8bf193*/
  if ( (a2 & 1) != 0 ) /*0x8bf19d*/
    FormHeapFree((unsigned int)this); /*0x8bf1a0*/
  return this; /*0x8bf1aa*/
}
