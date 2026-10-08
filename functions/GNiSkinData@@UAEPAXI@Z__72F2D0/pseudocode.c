NiSkinData *__thiscall NiSkinData::`scalar deleting destructor'(NiSkinData *this, char a2)
{
  NiSkinData::~NiSkinData(this); /*0x72f2d3*/
  if ( (a2 & 1) != 0 ) /*0x72f2dd*/
    FormHeapFree((unsigned int)this); /*0x72f2e0*/
  return this; /*0x72f2ea*/
}
