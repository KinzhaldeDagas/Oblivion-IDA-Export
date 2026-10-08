// Checked erase-range for st_vector<SFrondTexture>. Validates iterator owners, deep-moves [last,end) over [first,last), destroys the vacated tail, updates end, and returns {owner,first}.
OB_stVectorIterator_SFrondTexture_010201A0 *__thiscall OB_stVector_SFrondTexture_EraseRange_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVectorIterator_SFrondTexture_010201A0 *result,
        OB_stVector16_010201A0 *firstOwner,
        OB_SFrondTexture_010201A0 *first,
        OB_stVector16_010201A0 *lastOwner,
        OB_SFrondTexture_010201A0 *last)
{
  int v6; // ebx
  int v7; // edi
  OB_SFrondTexture_010201A0 *newEnd; // edi

  if ( !firstOwner || firstOwner != lastOwner ) /*0x79e031*/
    _invalid_parameter_noinfo(v6, v7, (int)this); /*0x79e033*/
  if ( first != last ) /*0x79e042*/
  {
    newEnd = OB_SFrondTexture_CopyAssignRangeForwardThunk_010201A0( /*0x79e055*/
               last,
               (const OB_SFrondTexture_010201A0 *)this->end,
               first);
    OB_SFrondTexture_DestroyRange_010201A0(newEnd, (OB_SFrondTexture_010201A0 *)this->end); /*0x79e05d*/
    this->end = newEnd; /*0x79e065*/
  }
  result->owner = firstOwner; /*0x79e06e*/
  result->current = first; /*0x79e071*/
  return result; /*0x79e06d*/
}
