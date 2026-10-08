// Oblivion 1.2.0.416: vector<float>::insert(position,value) wrapper returning a checked iterator; the called 0x526FA0 helper is the folded 4-byte insert-fill core.
OB_stVectorFloatIterator_010201A0 *__thiscall OB_stVector_float_InsertOne_010201A0(
        OB_stVectorFloat_010201A0 *this,
        OB_stVectorFloatIterator_010201A0 *result,
        OB_stVectorFloatIterator_010201A0 position,
        const float *value)
{
  int v4; // ebx
  float *begin; // edi
  int v7; // ebx
  float *v8; // edi
  float *v9; // edi

  begin = this->begin; /*0x78588b*/
  if ( begin && this->end - begin ) /*0x785899*/
  {
    if ( begin > this->end ) /*0x7858a4*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x7858a6*/
    if ( !position.owner || position.owner != this ) /*0x7858b1*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x7858b3*/
    v7 = position.current - begin; /*0x7858be*/
  }
  else
  {
    v7 = 0; /*0x78589e*/
  }
  OB_stVectorFloat_InsertFill_CompilerCopy_010201A0(this, position, 1u, value); /*0x7858d0*/
  v8 = this->begin; /*0x7858d5*/
  if ( v8 > this->end ) /*0x7858db*/
    _invalid_parameter_noinfo(v7, (int)v8, (int)this); /*0x7858dd*/
  v9 = &v8[v7]; /*0x7858e6*/
  if ( v9 > this->end || v9 < this->begin ) /*0x7858f1*/
    _invalid_parameter_noinfo(v7, (int)v9, (int)this); /*0x7858f3*/
  result->current = v9; /*0x7858fc*/
  result->owner = this; /*0x785900*/
  return result; /*0x7858ff*/
}
