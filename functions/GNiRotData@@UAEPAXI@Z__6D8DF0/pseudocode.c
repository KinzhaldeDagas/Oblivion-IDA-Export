NiRotData *__thiscall NiRotData::`scalar deleting destructor'(NiRotData *this, char a2)
{
  NiRotData::~NiRotData(this); /*0x6d8df3*/
  if ( (a2 & 1) != 0 ) /*0x6d8dfd*/
    FormHeapFree((unsigned int)this); /*0x6d8e00*/
  return this; /*0x6d8e0a*/
}
