ExtraSeenData *__thiscall ExtraSeenData::`scalar deleting destructor'(ExtraSeenData *this, char a2)
{
  ExtraSeenData::~ExtraSeenData(this); /*0x41ddf3*/
  if ( (a2 & 1) != 0 ) /*0x41ddfd*/
    FormHeapFree((unsigned int)this); /*0x41de00*/
  return this; /*0x41de0a*/
}
