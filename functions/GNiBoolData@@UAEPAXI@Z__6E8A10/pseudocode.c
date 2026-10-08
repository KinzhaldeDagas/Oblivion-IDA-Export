NiBoolData *__thiscall NiBoolData::`scalar deleting destructor'(NiBoolData *this, char a2)
{
  NiBoolData::~NiBoolData(this); /*0x6e8a13*/
  if ( (a2 & 1) != 0 ) /*0x6e8a1d*/
    FormHeapFree((unsigned int)this); /*0x6e8a20*/
  return this; /*0x6e8a2a*/
}
