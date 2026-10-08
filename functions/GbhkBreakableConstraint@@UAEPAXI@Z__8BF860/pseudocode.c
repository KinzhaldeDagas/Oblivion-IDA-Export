bhkSerializable *__thiscall bhkBreakableConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkBreakableConstraint::~bhkBreakableConstraint(this); /*0x8bf863*/
  if ( (a2 & 1) != 0 ) /*0x8bf86d*/
    FormHeapFree((unsigned int)this); /*0x8bf870*/
  return this; /*0x8bf87a*/
}
