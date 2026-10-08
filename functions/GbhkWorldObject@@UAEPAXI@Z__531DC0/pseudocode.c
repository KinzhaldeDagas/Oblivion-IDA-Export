bhkSerializable *__thiscall bhkWorldObject::`scalar deleting destructor'(bhkSerializable *this, char a2)
{
  bhkWorldObject::~bhkWorldObject(this); /*0x531dc3*/
  if ( (a2 & 1) != 0 ) /*0x531dcd*/
    FormHeapFree((unsigned int)this); /*0x531dd0*/
  return this; /*0x531dda*/
}
