// OBLIVION AUTHORITY (2026-08-30): Checked single-element insertion wrapper for vector<unsigned short>; used when CombineStrips appends a composite strip length.
OB_stVectorUShortIterator_010201A0 *__thiscall OB_stVectorUShort_InsertOne_010201A0(
        OB_stVectorUShort_010201A0 *this,
        OB_stVectorUShortIterator_010201A0 *result,
        OB_stVectorUShortIterator_010201A0 position,
        const unsigned __int16 *value)
{
  int v4; // ebx
  unsigned __int16 *begin; // edi
  int v7; // ebx
  unsigned __int16 *v8; // edi
  unsigned __int16 *v9; // edi

  begin = this->begin; /*0x795a4b*/
  if ( begin && this->end - begin ) /*0x795a59*/
  {
    if ( begin > this->end ) /*0x795a63*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x795a65*/
    if ( !position.owner || position.owner != this ) /*0x795a70*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x795a72*/
    v7 = position.current - begin; /*0x795a7d*/
  }
  else
  {
    v7 = 0; /*0x795a5d*/
  }
  OB_stVectorUShort_InsertFill_010201A0(this, position, 1u, value); /*0x795a8e*/
  v8 = this->begin; /*0x795a93*/
  if ( v8 > this->end ) /*0x795a99*/
    _invalid_parameter_noinfo(v7, (int)v8, (int)this); /*0x795a9b*/
  v9 = &v8[v7]; /*0x795aa4*/
  if ( v9 > this->end || v9 < this->begin ) /*0x795aaf*/
    _invalid_parameter_noinfo(v7, (int)v9, (int)this); /*0x795ab1*/
  result->current = v9; /*0x795aba*/
  result->owner = this; /*0x795abe*/
  return result; /*0x795abd*/
}
