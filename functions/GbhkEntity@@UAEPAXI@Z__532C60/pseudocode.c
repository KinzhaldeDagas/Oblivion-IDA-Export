bhkSerializable *__thiscall bhkEntity::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkEntity::~bhkEntity(this); /*0x532c63*/
  if ( (a2 & 1) != 0 ) /*0x532c6d*/
    FormHeapFree((unsigned int)this); /*0x532c70*/
  return this; /*0x532c7a*/
}
