// OBLIVION AUTHORITY (2026-08-30): Checked single-element insertion wrapper for vector<unsigned int>; validates owner/position, delegates to insert-fill, and returns an iterator to the inserted value.
OB_stVector4Iterator_010201A0 *__thiscall OB_stVectorUInt32_InsertOne_010201A0(
        OB_stVectorUInt32_010201A0 *this,
        OB_stVector4Iterator_010201A0 *result,
        OB_stVector4Iterator_010201A0 position,
        const unsigned int *value)
{
  int v4; // ebx
  unsigned int *begin; // edi
  int v7; // ebx
  unsigned int *v8; // edi
  unsigned int *v9; // edi

  begin = this->begin; /*0x79584b*/
  if ( begin && this->end - begin ) /*0x795859*/
  {
    if ( begin > this->end ) /*0x795864*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x795866*/
    if ( !position.owner || (OB_stVectorUInt32_010201A0 *)position.owner != this ) /*0x795871*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x795873*/
    v7 = position.current - begin; /*0x79587e*/
  }
  else
  {
    v7 = 0; /*0x79585e*/
  }
  OB_stVectorUInt32_InsertFill_010201A0(this, position, 1u, value); /*0x795890*/
  v8 = this->begin; /*0x795895*/
  if ( v8 > this->end ) /*0x79589b*/
    _invalid_parameter_noinfo(v7, (int)v8, (int)this); /*0x79589d*/
  v9 = &v8[v7]; /*0x7958a6*/
  if ( v9 > this->end || v9 < this->begin ) /*0x7958b1*/
    _invalid_parameter_noinfo(v7, (int)v9, (int)this); /*0x7958b3*/
  result->current = v9; /*0x7958bc*/
  result->owner = (OB_stVector4_010201A0 *)this; /*0x7958c0*/
  return result; /*0x7958bf*/
}
