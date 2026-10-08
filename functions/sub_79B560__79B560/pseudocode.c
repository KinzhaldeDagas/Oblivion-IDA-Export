// Checked insert-one wrapper for st_vector<SFrondVertex>. Preserves the pre-growth iterator index, delegates to InsertFill(count=1), then returns an 8-byte {owner,current} iterator.
OB_stVectorIterator_SFrondVertex_010201A0 *__thiscall OB_stVector_SFrondVertex_InsertOne_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVectorIterator_SFrondVertex_010201A0 *result,
        OB_stVector16_010201A0 *expectedOwner,
        OB_SFrondVertex_010201A0 *position,
        const OB_SFrondVertex_010201A0 *value)
{
  _BYTE *begin; // edi
  _BYTE *end; // ebx
  OB_stVector16_010201A0 *v8; // ebx
  int insertionIndex; // edi
  char *v10; // ebx
  OB_SFrondVertex_010201A0 *insertedPosition; // edi

  begin = this->begin; /*0x79b56b*/
  if ( begin && (end = this->end, (end - begin) / 0x38) ) /*0x79b58a*/
  {
    if ( begin > end ) /*0x79b598*/
      _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x79b59a*/
    v8 = expectedOwner; /*0x79b59f*/
    if ( !expectedOwner || expectedOwner != this ) /*0x79b5a9*/
      _invalid_parameter_noinfo((int)expectedOwner, (int)begin, (int)this); /*0x79b5ab*/
    insertionIndex = ((char *)position - begin) / 0x38; /*0x79b5c5*/
  }
  else
  {
    v8 = expectedOwner; /*0x79b58e*/
    insertionIndex = 0; /*0x79b592*/
  }
  OB_stVector_SFrondVertex_InsertFill_010201A0(this, v8, position, 1u, value); /*0x79b5d2*/
  v10 = (char *)this->begin; /*0x79b5d7*/
  if ( v10 > this->end ) /*0x79b5dd*/
    _invalid_parameter_noinfo((int)v10, insertionIndex, (int)this); /*0x79b5df*/
  insertedPosition = (OB_SFrondVertex_010201A0 *)&v10[0x38 * insertionIndex]; /*0x79b5ed*/
  if ( insertedPosition > this->end || insertedPosition < this->begin ) /*0x79b5fc*/
    _invalid_parameter_noinfo((int)v10, (int)insertedPosition, (int)this); /*0x79b5fe*/
  result->current = insertedPosition; /*0x79b607*/
  result->owner = this; /*0x79b60b*/
  return result; /*0x79b60a*/
}
