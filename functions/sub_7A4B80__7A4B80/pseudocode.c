// Checked leaf-texture vector erase: shifts the tail by deep assignment, destroys the vacated suffix, updates end, and returns {owner,current}.
OB_stVectorIterator_SIdvLeafTexture_010201A0 *__thiscall OB_stVector_SIdvLeafTexture_EraseRange_010201A0(
        OB_stVector_SIdvLeafTexture_010201A0 *this,
        OB_stVectorIterator_SIdvLeafTexture_010201A0 *result,
        OB_stVector_SIdvLeafTexture_010201A0 *firstOwner,
        OB_SIdvLeafTexture_010201A0 *first,
        OB_stVector_SIdvLeafTexture_010201A0 *lastOwner,
        OB_SIdvLeafTexture_010201A0 *last)
{
  int v6; // ebx
  int v7; // edi
  OB_SIdvLeafTexture_010201A0 *movedEnd; // edi

  if ( !firstOwner || firstOwner != lastOwner ) /*0x7a4b91*/
    _invalid_parameter_noinfo(v6, v7, (int)this); /*0x7a4b93*/
  if ( first != last ) /*0x7a4ba2*/
  {
    movedEnd = OB_SIdvLeafTexture_CopyAssignRangeForward_010201A0(last, this->end, first); /*0x7a4bc7*/
    OB_SIdvLeafTexture_DestroyRange_010201A0(movedEnd, this->end); /*0x7a4bd1*/
    this->end = movedEnd; /*0x7a4bd9*/
  }
  result->owner = firstOwner; /*0x7a4be2*/
  result->current = first; /*0x7a4be5*/
  return result; /*0x7a4be1*/
}
