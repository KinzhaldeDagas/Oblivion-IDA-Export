NiTextKeyExtraData *__thiscall NiTextKeyExtraData::`scalar deleting destructor'(NiTextKeyExtraData *this, char a2)
{
  NiTextKeyExtraData::~NiTextKeyExtraData(this); /*0x6d76d3*/
  if ( (a2 & 1) != 0 ) /*0x6d76dd*/
    FormHeapFree((unsigned int)this); /*0x6d76e0*/
  return this; /*0x6d76ea*/
}
