NiMorphData *__thiscall NiMorphData::`scalar deleting destructor'(NiMorphData *this, char a2)
{
  NiMorphData::~NiMorphData(this); /*0x6de893*/
  if ( (a2 & 1) != 0 ) /*0x6de89d*/
    FormHeapFree((unsigned int)this); /*0x6de8a0*/
  return this; /*0x6de8aa*/
}
