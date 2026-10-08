// Checked insert-one wrapper for vector<st_vector<SFrondGuide>>. Preserves the 0x10-element index across possible reallocation and returns {owner,current}.
OB_stVectorIterator_stVector_SFrondGuide_010201A0 *__thiscall OB_stVector_stVector_SFrondGuide_InsertOne_010201A0(
        OB_stVector_stVector_SFrondGuide_010201A0 *this,
        OB_stVectorIterator_stVector_SFrondGuide_010201A0 *result,
        OB_stVector_stVector_SFrondGuide_010201A0 *expectedOwner,
        OB_stVector_SFrondGuide_010201A0 *position,
        const OB_stVector_SFrondGuide_010201A0 *value)
{
  int v5; // edi
  OB_stVector_SFrondGuide_010201A0 *begin; // ebx
  int insertionIndex; // edi
  OB_stVector_SFrondGuide_010201A0 *newBegin; // ebx
  OB_stVector_SFrondGuide_010201A0 *insertedElement; // edi

  begin = this->begin; /*0x7a132a*/
  if ( begin && this->end - begin ) /*0x7a1339*/
  {
    if ( begin > this->end ) /*0x7a1344*/
      _invalid_parameter_noinfo((int)begin, v5, (int)this); /*0x7a1346*/
    if ( !expectedOwner || expectedOwner != this ) /*0x7a1351*/
      _invalid_parameter_noinfo((int)begin, v5, (int)this); /*0x7a1353*/
    insertionIndex = position - begin; /*0x7a135e*/
  }
  else
  {
    insertionIndex = 0; /*0x7a133e*/
  }
  OB_stVector_stVector_SFrondGuide_InsertFill_010201A0(this, expectedOwner, position, 1u, value); /*0x7a1370*/
  newBegin = this->begin; /*0x7a1375*/
  if ( newBegin > this->end ) /*0x7a137b*/
    _invalid_parameter_noinfo((int)newBegin, insertionIndex, (int)this); /*0x7a137d*/
  insertedElement = &newBegin[insertionIndex]; /*0x7a1385*/
  if ( insertedElement > this->end || insertedElement < this->begin ) /*0x7a1393*/
    _invalid_parameter_noinfo((int)newBegin, (int)insertedElement, (int)this); /*0x7a1395*/
  result->current = insertedElement; /*0x7a139e*/
  result->owner = this; /*0x7a13a2*/
  return result; /*0x7a13a1*/
}
