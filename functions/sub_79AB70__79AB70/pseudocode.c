// Checked erase-range helper for the trivial SFrondVertex vector. Validates both iterator owners, moves [last,end) forward over [first,last), updates end, and returns {owner,first}.
OB_stVectorIterator_SFrondVertex_010201A0 *__thiscall OB_stVector_SFrondVertex_EraseRange_010201A0(
        OB_stVector16_010201A0 *this,
        OB_stVectorIterator_SFrondVertex_010201A0 *result,
        OB_stVector16_010201A0 *firstOwner,
        OB_SFrondVertex_010201A0 *first,
        OB_stVector16_010201A0 *lastOwner,
        OB_SFrondVertex_010201A0 *last)
{
  int v6; // edi

  if ( !firstOwner || firstOwner != lastOwner ) /*0x79ab81*/
    _invalid_parameter_noinfo((int)firstOwner, v6, (int)this); /*0x79ab83*/
  if ( first != last ) /*0x79ab92*/
    this->end = OB_SFrondVertex_CopyForward_010201A0(last, (OB_SFrondVertex_010201A0 *)this->end, first); /*0x79abb6*/
  result->current = first; /*0x79abbd*/
  result->owner = firstOwner; /*0x79abc2*/
  return result; /*0x79abc0*/
}
