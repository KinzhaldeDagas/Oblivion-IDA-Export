bhkSerializable *__thiscall bhkCharacterProxy::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkCharacterProxy::~bhkCharacterProxy(this); /*0x890393*/
  if ( (a2 & 1) != 0 ) /*0x89039d*/
    FormHeapFree((unsigned int)this); /*0x8903a0*/
  return this; /*0x8903aa*/
}
