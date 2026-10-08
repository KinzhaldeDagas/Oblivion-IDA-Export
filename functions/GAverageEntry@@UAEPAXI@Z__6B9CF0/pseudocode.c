AverageEntry *__thiscall AverageEntry::`scalar deleting destructor'(AverageEntry *this, char a2)
{
  AverageEntry::~AverageEntry(this); /*0x6b9cf3*/
  if ( (a2 & 1) != 0 ) /*0x6b9cfd*/
    FormHeapFree((unsigned int)this); /*0x6b9d00*/
  return this; /*0x6b9d0a*/
}
