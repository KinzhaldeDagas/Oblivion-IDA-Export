NiTMap_Entry_TESCELL *__thiscall NumericIDBufferMap::`scalar deleting destructor'(NiTMap_Entry_TESCELL *this, char a2)
{
  NumericIDBufferMap::~NumericIDBufferMap(this); /*0x45f0d3*/
  if ( (a2 & 1) != 0 ) /*0x45f0dd*/
    FormHeapFree((unsigned int)this); /*0x45f0e0*/
  return this; /*0x45f0ea*/
}
