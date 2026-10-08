NiPosData *__thiscall NiPosData::`scalar deleting destructor'(NiPosData *this, char a2)
{
  NiPosData::~NiPosData(this); /*0x6d3813*/
  if ( (a2 & 1) != 0 ) /*0x6d381d*/
    FormHeapFree((unsigned int)this); /*0x6d3820*/
  return this; /*0x6d382a*/
}
