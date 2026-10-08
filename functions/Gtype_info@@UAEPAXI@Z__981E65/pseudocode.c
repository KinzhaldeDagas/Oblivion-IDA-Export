type_info *__thiscall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  type_info::~type_info(this); /*0x981e68*/
  if ( (a2 & 1) != 0 ) /*0x981e72*/
    FormHeapFree((unsigned int)this); /*0x981e75*/
  return this; /*0x981e7d*/
}
