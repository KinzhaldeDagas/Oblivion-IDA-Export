bhkSerializable *__thiscall bhkBinaryAction::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkBinaryAction::~bhkBinaryAction(this); /*0x89ff83*/
  if ( (a2 & 1) != 0 ) /*0x89ff8d*/
    FormHeapFree((unsigned int)this); /*0x89ff90*/
  return this; /*0x89ff9a*/
}
