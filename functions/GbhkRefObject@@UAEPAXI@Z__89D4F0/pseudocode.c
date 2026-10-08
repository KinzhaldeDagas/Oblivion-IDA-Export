bhkRefObject *__thiscall bhkRefObject::`scalar deleting destructor'(bhkRefObject *this, char a2)
{
  bhkRefObject::~bhkRefObject(this); /*0x89d4f3*/
  if ( (a2 & 1) != 0 ) /*0x89d4fd*/
    FormHeapFree((unsigned int)this); /*0x89d500*/
  return this; /*0x89d50a*/
}
