bhkGenericConstraint *__thiscall bhkGenericConstraint::`scalar deleting destructor'(
        bhkGenericConstraint *this,
        char a2)
{
  bhkGenericConstraint::~bhkGenericConstraint(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
