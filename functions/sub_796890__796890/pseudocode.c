// OBLIVION AUTHORITY (2026-08-30): clear() for vector<vector<unsigned short*>>, implemented as checked erase(begin,end) while retaining outer capacity.
void __thiscall OB_stVector_stVectorUShortPtr_Clear_010201A0(OB_stVector_stVectorUShortPtr_010201A0 *this)
{
  int v1; // edi
  OB_stVectorUShortPtr_010201A0 *end; // ebx
  OB_stVectorUShortPtr_010201A0 *begin; // edi
  OB_stVector_stVectorUShortPtrIterator_010201A0 result; // [esp+Ch] [ebp-8h] BYREF

  end = this->end; /*0x796897*/
  if ( this->begin > end ) /*0x79689e*/
    _invalid_parameter_noinfo((int)end, v1, (int)this); /*0x7968a0*/
  begin = this->begin; /*0x7968a5*/
  if ( begin > this->end ) /*0x7968ab*/
    _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x7968ad*/
  OB_stVector_stVectorUShortPtr_EraseRange_010201A0( /*0x7968bd*/
    this,
    &result,
    (OB_stVector_stVectorUShortPtrIterator_010201A0)__PAIR64__((unsigned int)begin, (unsigned int)this),
    (OB_stVector_stVectorUShortPtrIterator_010201A0)__PAIR64__((unsigned int)end, (unsigned int)this));
}
