bhkSerializable *__thiscall bhkSpringAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkSpringAction::~bhkSpringAction(this); /*0x8bd9a3*/
  if ( (a2 & 1) != 0 ) /*0x8bd9ad*/
    FormHeapFree((unsigned int)this); /*0x8bd9b0*/
  return this; /*0x8bd9ba*/
}
