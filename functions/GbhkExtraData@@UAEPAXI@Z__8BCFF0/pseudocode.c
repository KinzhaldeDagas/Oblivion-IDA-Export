bhkExtraData *__thiscall bhkExtraData::`scalar deleting destructor'(bhkExtraData *this, char a2)
{
  bhkExtraData::~bhkExtraData(this); /*0x8bcff3*/
  if ( (a2 & 1) != 0 ) /*0x8bcffd*/
    FormHeapFree((unsigned int)this); /*0x8bd000*/
  return this; /*0x8bd00a*/
}
