bhkSerializable *__thiscall bhkStiffSpringConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkStiffSpringConstraint::~bhkStiffSpringConstraint(this); /*0x8c0733*/
  if ( (a2 & 1) != 0 ) /*0x8c073d*/
    FormHeapFree((unsigned int)this); /*0x8c0740*/
  return this; /*0x8c074a*/
}
