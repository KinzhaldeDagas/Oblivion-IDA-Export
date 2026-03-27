bhkSerializable *__thiscall bhkDashpotAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkDashpotAction::~bhkDashpotAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
