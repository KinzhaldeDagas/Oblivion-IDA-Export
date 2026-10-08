char **__thiscall GridDistantArray::`scalar deleting destructor'(char **this, char a2)
{
  GridDistantArray::~GridDistantArray(this); /*0x4842b3*/
  if ( (a2 & 1) != 0 ) /*0x4842bd*/
    FormHeapFree((unsigned int)this); /*0x4842c0*/
  return this; /*0x4842ca*/
}
