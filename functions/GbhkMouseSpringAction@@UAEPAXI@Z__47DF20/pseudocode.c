bhkSerializable *__thiscall bhkMouseSpringAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkMouseSpringAction::~bhkMouseSpringAction(this); /*0x47df23*/
  if ( (a2 & 1) != 0 ) /*0x47df2d*/
    FormHeapFree((unsigned int)this); /*0x47df30*/
  return this; /*0x47df3a*/
}
