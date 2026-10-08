bhkSerializable *__thiscall bhkPrismaticConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkPrismaticConstraint::~bhkPrismaticConstraint(this); /*0x8c1973*/
  if ( (a2 & 1) != 0 ) /*0x8c197d*/
    FormHeapFree((unsigned int)this); /*0x8c1980*/
  return this; /*0x8c198a*/
}
