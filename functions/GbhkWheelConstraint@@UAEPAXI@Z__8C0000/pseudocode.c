bhkSerializable *__thiscall bhkWheelConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkWheelConstraint::~bhkWheelConstraint(this); /*0x8c0003*/
  if ( (a2 & 1) != 0 ) /*0x8c000d*/
    FormHeapFree((unsigned int)this); /*0x8c0010*/
  return this; /*0x8c001a*/
}
