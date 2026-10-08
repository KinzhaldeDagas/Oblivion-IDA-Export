bhkSerializable *__thiscall bhkPhantom::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkPhantom::~bhkPhantom(this); /*0x531f73*/
  if ( (a2 & 1) != 0 ) /*0x531f7d*/
    FormHeapFree((unsigned int)this); /*0x531f80*/
  return this; /*0x531f8a*/
}
