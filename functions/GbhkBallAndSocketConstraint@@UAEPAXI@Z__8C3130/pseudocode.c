bhkSerializable *__thiscall bhkBallAndSocketConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkBallAndSocketConstraint::~bhkBallAndSocketConstraint(this); /*0x8c3133*/
  if ( (a2 & 1) != 0 ) /*0x8c313d*/
    FormHeapFree((unsigned int)this); /*0x8c3140*/
  return this; /*0x8c314a*/
}
