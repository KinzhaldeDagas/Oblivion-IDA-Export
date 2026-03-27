bhkSerializable *__thiscall bhkSpringAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkSpringAction::~bhkSpringAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
