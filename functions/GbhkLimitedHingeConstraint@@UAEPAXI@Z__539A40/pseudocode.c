bhkSerializable *__thiscall bhkLimitedHingeConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkLimitedHingeConstraint::~bhkLimitedHingeConstraint(this); /*0x539a43*/
  if ( (a2 & 1) != 0 ) /*0x539a4d*/
    FormHeapFree((unsigned int)this); /*0x539a50*/
  return this; /*0x539a5a*/
}
