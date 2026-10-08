bhkSerializable *__thiscall bhkAngularDashpotAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkAngularDashpotAction::~bhkAngularDashpotAction(this); /*0x8bdee3*/
  if ( (a2 & 1) != 0 ) /*0x8bdeed*/
    FormHeapFree((unsigned int)this); /*0x8bdef0*/
  return this; /*0x8bdefa*/
}
