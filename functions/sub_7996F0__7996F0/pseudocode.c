// Checked-iterator vector<float>::insert(position,value) wrapper. Converts the owner/current iterator to an index, delegates to insert-fill with count=1, then returns an iterator relocated against the possibly new begin pointer.
OB_stVectorFloatIterator_010201A0 *__thiscall OB_stVectorFloat_InsertOne_010201A0(
        OB_stVectorFloat_010201A0 *this,
        OB_stVectorFloatIterator_010201A0 *result,
        OB_stVectorFloatIterator_010201A0 position,
        const float *value)
{
  int v4; // ebx
  float *begin; // edi
  int insertionIndex; // ebx
  float *relocatedBegin; // edi
  float *insertedElement; // edi

  begin = this->begin; /*0x7996fb*/
  if ( begin && this->end - begin ) /*0x799709*/
  {
    if ( begin > this->end ) /*0x799714*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x799716*/
    if ( !position.owner || position.owner != this ) /*0x799721*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x799723*/
    insertionIndex = position.current - begin; /*0x79972e*/
  }
  else
  {
    insertionIndex = 0; /*0x79970e*/
  }
  OB_stVectorFloat_InsertFill_010201A0(this, position.owner, position.current, 1u, value); /*0x799740*/
  relocatedBegin = this->begin; /*0x799745*/
  if ( relocatedBegin > this->end ) /*0x79974b*/
    _invalid_parameter_noinfo(insertionIndex, (int)relocatedBegin, (int)this); /*0x79974d*/
  insertedElement = &relocatedBegin[insertionIndex]; /*0x799756*/
  if ( insertedElement > this->end || insertedElement < this->begin ) /*0x799761*/
    _invalid_parameter_noinfo(insertionIndex, (int)insertedElement, (int)this); /*0x799763*/
  result->current = insertedElement; /*0x79976c*/
  result->owner = this; /*0x799770*/
  return result; /*0x79976f*/
}
