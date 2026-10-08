bhkSerializable *__thiscall bhkMotorAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkMotorAction::~bhkMotorAction(this); /*0x8beab3*/
  if ( (a2 & 1) != 0 ) /*0x8beabd*/
    FormHeapFree((unsigned int)this); /*0x8beac0*/
  return this; /*0x8beaca*/
}
