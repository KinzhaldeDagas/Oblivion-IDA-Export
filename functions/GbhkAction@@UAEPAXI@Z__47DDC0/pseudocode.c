bhkSerializable *__thiscall bhkAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkAction::~bhkAction(this); /*0x47ddc3*/
  if ( (a2 & 1) != 0 ) /*0x47ddcd*/
    FormHeapFree((unsigned int)this); /*0x47ddd0*/
  return this; /*0x47ddda*/
}
