bhkSerializable *__thiscall bhkFixedConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkFixedConstraint::~bhkFixedConstraint(this); /*0x8c21b3*/
  if ( (a2 & 1) != 0 ) /*0x8c21bd*/
    FormHeapFree((unsigned int)this); /*0x8c21c0*/
  return this; /*0x8c21ca*/
}
