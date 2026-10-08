TESForm *__thiscall MagicItemObject::`scalar deleting destructor'(TESForm *this, char a2)
{
  MagicItemObject::~MagicItemObject(this); /*0x412bc3*/
  if ( (a2 & 1) != 0 ) /*0x412bcd*/
    FormHeapFree((unsigned int)this); /*0x412bd0*/
  return this; /*0x412bda*/
}
