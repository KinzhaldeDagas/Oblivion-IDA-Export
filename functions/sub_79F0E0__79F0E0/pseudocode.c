// Checked erase-range for st_vector<SFrondGuide>. Validates iterator owners, deep-moves [last,end) over [first,last), destroys the vacated tail, updates end, and returns {owner,first}.
OB_stVectorIterator_SFrondGuide_010201A0 *__thiscall OB_stVector_SFrondGuide_EraseRange_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVectorIterator_SFrondGuide_010201A0 *result,
        OB_stVector16_010201A0 *firstOwner,
        OB_SFrondGuide_010201A0 *first,
        OB_stVector16_010201A0 *lastOwner,
        OB_SFrondGuide_010201A0 *last)
{
  int v6; // ebx
  int v7; // edi
  OB_SFrondGuide_010201A0 *v9; // edi

  if ( !firstOwner || firstOwner != lastOwner ) /*0x79f0f1*/
    _invalid_parameter_noinfo(v6, v7, (int)this); /*0x79f0f3*/
  if ( first != last ) /*0x79f102*/
  {
    v9 = OB_SFrondGuide_CopyAssignRangeForwardThunk_010201A0(last, (const OB_SFrondGuide_010201A0 *)this->end, first); /*0x79f127*/
    OB_SFrondGuide_DestroyRange_010201A0(v9, (OB_SFrondGuide_010201A0 *)this->end); /*0x79f131*/
    this->end = v9; /*0x79f139*/
  }
  result->owner = firstOwner; /*0x79f142*/
  result->current = first; /*0x79f145*/
  return result; /*0x79f141*/
}
