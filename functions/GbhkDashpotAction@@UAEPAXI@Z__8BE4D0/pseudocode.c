bhkSerializable *__thiscall bhkDashpotAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkDashpotAction::~bhkDashpotAction(this); /*0x8be4d3*/
  if ( (a2 & 1) != 0 ) /*0x8be4dd*/
    FormHeapFree((unsigned int)this); /*0x8be4e0*/
  return this; /*0x8be4ea*/
}
