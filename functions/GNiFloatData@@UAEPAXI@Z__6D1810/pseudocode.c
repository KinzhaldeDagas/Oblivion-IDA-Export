NiFloatData *__thiscall NiFloatData::`scalar deleting destructor'(NiFloatData *this, char a2)
{
  NiFloatData::~NiFloatData(this); /*0x6d1813*/
  if ( (a2 & 1) != 0 ) /*0x6d181d*/
    FormHeapFree((unsigned int)this); /*0x6d1820*/
  return this; /*0x6d182a*/
}
