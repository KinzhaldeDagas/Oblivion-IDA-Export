bhkSerializable *__thiscall bhkConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkConstraint::~bhkConstraint(this); /*0x539963*/
  if ( (a2 & 1) != 0 ) /*0x53996d*/
    FormHeapFree((unsigned int)this); /*0x539970*/
  return this; /*0x53997a*/
}
