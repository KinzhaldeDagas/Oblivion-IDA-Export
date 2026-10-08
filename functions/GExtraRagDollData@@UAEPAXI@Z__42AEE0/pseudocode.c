ExtraRagDollData *__thiscall ExtraRagDollData::`scalar deleting destructor'(ExtraRagDollData *this, char a2)
{
  ExtraRagDollData::~ExtraRagDollData(this); /*0x42aee3*/
  if ( (a2 & 1) != 0 ) /*0x42aeed*/
    FormHeapFree((unsigned int)this); /*0x42aef0*/
  return this; /*0x42aefa*/
}
