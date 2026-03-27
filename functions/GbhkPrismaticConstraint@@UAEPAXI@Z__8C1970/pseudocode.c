bhkSerializable *__thiscall bhkPrismaticConstraint::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkPrismaticConstraint::~bhkPrismaticConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
