bhkSerializable *__thiscall bhkMotorAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkMotorAction::~bhkMotorAction(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
