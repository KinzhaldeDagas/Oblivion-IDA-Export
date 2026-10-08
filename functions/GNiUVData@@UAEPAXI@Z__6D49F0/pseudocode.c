NiUVData *__thiscall NiUVData::`scalar deleting destructor'(NiUVData *this, char a2)
{
  NiUVData::~NiUVData(this); /*0x6d49f3*/
  if ( (a2 & 1) != 0 ) /*0x6d49fd*/
    FormHeapFree((unsigned int)this); /*0x6d4a00*/
  return this; /*0x6d4a0a*/
}
