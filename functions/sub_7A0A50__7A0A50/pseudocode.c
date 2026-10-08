// Checked insert-one wrapper for st_vector<SFrondGuide>. Preserves the iterator index across possible reallocation, delegates to InsertFill(count=1), and returns the 8-byte {owner,current} iterator.
OB_stVectorIterator_SFrondGuide_010201A0 *__thiscall OB_stVector_SFrondGuide_InsertOne_010201A0(
        OB_stVector_SFrondGuide_010201A0 *this,
        OB_stVectorIterator_SFrondGuide_010201A0 *result,
        OB_stVector_SFrondGuide_010201A0 *expectedOwner,
        OB_SFrondGuide_010201A0 *position,
        const OB_SFrondGuide_010201A0 *value)
{
  OB_SFrondGuide_010201A0 *begin; // edi
  OB_SFrondGuide_010201A0 *end; // ebx
  OB_stVector16_010201A0 *v8; // ebx
  int insertionIndex; // edi
  OB_SFrondGuide_010201A0 *v10; // ebx
  OB_SFrondGuide_010201A0 *insertedPosition; // edi

  begin = this->begin; /*0x7a0a5b*/
  if ( begin && (end = this->end, end - begin) ) /*0x7a0a78*/
  {
    if ( begin > end ) /*0x7a0a86*/
      _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x7a0a88*/
    v8 = (OB_stVector16_010201A0 *)expectedOwner; /*0x7a0a8d*/
    if ( !expectedOwner || expectedOwner != this ) /*0x7a0a97*/
      _invalid_parameter_noinfo((int)expectedOwner, (int)begin, (int)this); /*0x7a0a99*/
    insertionIndex = position - begin; /*0x7a0ab1*/
  }
  else
  {
    v8 = (OB_stVector16_010201A0 *)expectedOwner; /*0x7a0a7c*/
    insertionIndex = 0; /*0x7a0a80*/
  }
  OB_stVector_SFrondGuide_InsertFill_010201A0((OB_stVector16_010201A0 *)this, v8, position, 1u, value); /*0x7a0abe*/
  v10 = this->begin; /*0x7a0ac3*/
  if ( v10 > this->end ) /*0x7a0ac9*/
    _invalid_parameter_noinfo((int)v10, insertionIndex, (int)this); /*0x7a0acb*/
  insertedPosition = &v10[insertionIndex]; /*0x7a0ad6*/
  if ( insertedPosition > this->end || insertedPosition < this->begin ) /*0x7a0ae5*/
    _invalid_parameter_noinfo((int)v10, (int)insertedPosition, (int)this); /*0x7a0ae7*/
  result->current = insertedPosition; /*0x7a0af0*/
  result->owner = this; /*0x7a0af4*/
  return result; /*0x7a0af3*/
}
