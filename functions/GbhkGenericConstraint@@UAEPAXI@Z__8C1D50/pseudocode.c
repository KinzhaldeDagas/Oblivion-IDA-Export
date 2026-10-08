bhkSerializable *__thiscall bhkGenericConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkGenericConstraint::~bhkGenericConstraint(this); /*0x8c1d53*/
  if ( (a2 & 1) != 0 ) /*0x8c1d5d*/
    FormHeapFree((unsigned int)this); /*0x8c1d60*/
  return this; /*0x8c1d6a*/
}
