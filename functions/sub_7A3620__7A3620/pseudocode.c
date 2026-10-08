// Oblivion binary evidence: inserts one four-byte value at a checked owner/current iterator by calling OB_stVector4_InsertFill, then returns a relocated iterator to the inserted slot. Widely folded across SpeedTree pointer and scalar vectors.
OB_stVector4Iterator_010201A0 *__thiscall OB_stVector4_InsertOne_010201A0(
        OB_stVector4_010201A0 *this,
        OB_stVector4Iterator_010201A0 *result,
        OB_stVector4Iterator_010201A0 position,
        const unsigned int *value)
{
  int v4; // ebx
  unsigned int *begin; // edi
  int insertionIndex; // ebx
  unsigned int *relocatedBegin; // edi
  unsigned int *insertedSlot; // edi

  begin = this->begin; /*0x7a362b*/
  if ( begin && this->end - begin ) /*0x7a3639*/
  {
    if ( begin > this->end ) /*0x7a3644*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x7a3646*/
    if ( !position.owner || position.owner != this ) /*0x7a3651*/
      _invalid_parameter_noinfo(v4, (int)begin, (int)this); /*0x7a3653*/
    insertionIndex = position.current - begin; /*0x7a365e*/
  }
  else
  {
    insertionIndex = 0; /*0x7a363e*/
  }
  OB_stVector4_InsertFill_010201A0(this, position.owner, position.current, 1u, value); /*0x7a3670*/
  relocatedBegin = this->begin; /*0x7a3675*/
  if ( relocatedBegin > this->end ) /*0x7a367b*/
    _invalid_parameter_noinfo(insertionIndex, (int)relocatedBegin, (int)this); /*0x7a367d*/
  insertedSlot = &relocatedBegin[insertionIndex]; /*0x7a3686*/
  if ( insertedSlot > this->end || insertedSlot < this->begin ) /*0x7a3691*/
    _invalid_parameter_noinfo(insertionIndex, (int)insertedSlot, (int)this); /*0x7a3693*/
  result->current = insertedSlot; /*0x7a369c*/
  result->owner = this; /*0x7a36a0*/
  return result; /*0x7a369f*/
}
