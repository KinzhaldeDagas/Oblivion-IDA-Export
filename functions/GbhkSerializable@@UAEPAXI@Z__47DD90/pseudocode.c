bhkSerializable *__thiscall bhkSerializable::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkSerializable::~bhkSerializable(this); /*0x47dd93*/
  if ( (a2 & 1) != 0 ) /*0x47dd9d*/
    FormHeapFree((unsigned int)this); /*0x47dda0*/
  return this; /*0x47ddaa*/
}
