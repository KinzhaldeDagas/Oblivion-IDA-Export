NiStringsExtraData *__thiscall NiStringsExtraData::`scalar deleting destructor'(NiStringsExtraData *this, char a2)
{
  NiStringsExtraData::~NiStringsExtraData(this); /*0x73ce83*/
  if ( (a2 & 1) != 0 ) /*0x73ce8d*/
    FormHeapFree((unsigned int)this); /*0x73ce90*/
  return this; /*0x73ce9a*/
}
