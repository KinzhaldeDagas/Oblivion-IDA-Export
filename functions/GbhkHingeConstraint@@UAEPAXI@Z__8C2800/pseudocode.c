bhkSerializable *__thiscall bhkHingeConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkHingeConstraint::~bhkHingeConstraint(this); /*0x8c2803*/
  if ( (a2 & 1) != 0 ) /*0x8c280d*/
    FormHeapFree((unsigned int)this); /*0x8c2810*/
  return this; /*0x8c281a*/
}
