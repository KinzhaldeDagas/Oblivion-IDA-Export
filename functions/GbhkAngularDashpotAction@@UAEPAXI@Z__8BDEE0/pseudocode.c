bhkSerializable *__thiscall bhkAngularDashpotAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkAngularDashpotAction::~bhkAngularDashpotAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
