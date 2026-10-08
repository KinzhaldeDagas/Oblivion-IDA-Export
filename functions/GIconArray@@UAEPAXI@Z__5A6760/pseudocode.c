IconArray *__thiscall IconArray::`scalar deleting destructor'(IconArray *this, char a2)
{
  IconArray::~IconArray(this); /*0x5a6763*/
  if ( (a2 & 1) != 0 ) /*0x5a676d*/
    FormHeapFree((unsigned int)this); /*0x5a6770*/
  return this; /*0x5a677a*/
}
