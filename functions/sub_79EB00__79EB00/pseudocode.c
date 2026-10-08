// Checked single-element insert for st_vector<SFrondTexture>. Preserves the insertion index across possible reallocation, delegates to insert-fill(count=1), then returns an owner/current iterator.
OB_stVectorIterator_SFrondTexture_010201A0 *__thiscall OB_stVector_SFrondTexture_InsertOne_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVectorIterator_SFrondTexture_010201A0 *result,
        OB_stVector16_010201A0 *expectedOwner,
        OB_SFrondTexture_010201A0 *position,
        const OB_SFrondTexture_010201A0 *value)
{
  _BYTE *beginAddress; // esi
  OB_stVector16_010201A0 *checkedOwner; // ebx
  int insertionIndex; // esi
  char *begin; // ebx
  OB_SFrondTexture_010201A0 *insertedElement; // esi

  beginAddress = this->begin; /*0x79eb0b*/
  if ( beginAddress && ((char *)this->end - (char *)beginAddress) / 0x2C ) /*0x79eb28*/
  {
    if ( beginAddress > this->end ) /*0x79eb36*/
      _invalid_parameter_noinfo(); /*0x79eb38*/
    checkedOwner = expectedOwner; /*0x79eb3d*/
    if ( !expectedOwner || expectedOwner != this ) /*0x79eb47*/
      _invalid_parameter_noinfo(); /*0x79eb49*/
    insertionIndex = ((char *)position - beginAddress) / 0x2C; /*0x79eb61*/
  }
  else
  {
    checkedOwner = expectedOwner; /*0x79eb2c*/
    insertionIndex = 0; /*0x79eb30*/
  }
  OB_stVector_SFrondTexture_InsertFill_010201A0(this, checkedOwner, position, 1u, value); /*0x79eb6e*/
  begin = (char *)this->begin; /*0x79eb73*/
  if ( begin > this->end ) /*0x79eb79*/
    _invalid_parameter_noinfo(); /*0x79eb7b*/
  insertedElement = (OB_SFrondTexture_010201A0 *)&begin[0x2C * insertionIndex]; /*0x79eb83*/
  if ( insertedElement > this->end || insertedElement < this->begin ) /*0x79eb91*/
    _invalid_parameter_noinfo(); /*0x79eb93*/
  result->owner = this; /*0x79eb9c*/
  result->current = insertedElement; /*0x79eb9f*/
  return result; /*0x79eb9e*/
}
