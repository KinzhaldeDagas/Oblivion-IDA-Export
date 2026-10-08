bhkSerializable *__thiscall bhkAabbPhantom::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkAabbPhantom::~bhkAabbPhantom(this); /*0x699d83*/
  if ( (a2 & 1) != 0 ) /*0x699d8d*/
    FormHeapFree((unsigned int)this); /*0x699d90*/
  return this; /*0x699d9a*/
}
