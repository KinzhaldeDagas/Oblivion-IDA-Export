NiTMap_Entry_TESCELL *__thiscall NumericIDBufferMap::`scalar deleting destructor'(NiTMap_Entry_TESCELL *this, char a2)
{
  NumericIDBufferMap::~NumericIDBufferMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
