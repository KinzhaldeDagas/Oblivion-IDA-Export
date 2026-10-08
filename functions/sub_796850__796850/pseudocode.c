// OBLIVION AUTHORITY (2026-08-30): clear() for vector<vector<unsigned short>>, implemented as checked erase(begin,end) while retaining outer capacity.
void __thiscall OB_stVector_stVectorUShort_Clear_010201A0(OB_stVector_stVectorUShort_010201A0 *this)
{
  int v1; // edi
  OB_stVectorUShort_010201A0 *end; // ebx
  OB_stVectorUShort_010201A0 *begin; // edi
  OB_stVector_stVectorUShortIterator_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = this->end; /*0x796857*/
  if ( this->begin > end ) /*0x79685e*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x796860*/
  begin = this->begin; /*0x796865*/
  if ( begin > this->end ) /*0x79686b*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x79686d*/
  OB_stVector_stVectorUShort_EraseRange_010201A0( /*0x79687d*/
    this,
    &result,
    (OB_stVector_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)begin, (unsigned int)this),
    (OB_stVector_stVectorUShortIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
}
