IntSeenData *__thiscall IntSeenData::`scalar deleting destructor'(IntSeenData *this, char a2)
{
  IntSeenData::~IntSeenData(this); /*0x412623*/
  if ( (a2 & 1) != 0 ) /*0x41262d*/
    FormHeapFree((unsigned int)this); /*0x412630*/
  return this; /*0x41263a*/
}
