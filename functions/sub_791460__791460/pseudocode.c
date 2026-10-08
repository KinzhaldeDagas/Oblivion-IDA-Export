// Checked one-element insertion wrapper for the 0x0C-byte branch-child vector. Captures the logical index, calls InsertFill(count=1), then rebuilds the checked owner/current iterator against the possibly relocated buffer.
OB_stVectorBranchChildRefIterator_010201A0 *__thiscall OB_stVectorBranchChildRef_InsertOneChecked_010201A0(
        OB_stVectorBranchChildRef_010201A0 *this,
        OB_stVectorBranchChildRefIterator_010201A0 *result,
        OB_stVectorBranchChildRef_010201A0 *owner,
        OB_CBranchChildRef_010201A0 *position,
        const OB_CBranchChildRef_010201A0 *value)
{
  OB_CBranchChildRef_010201A0 *begin; // edi
  OB_CBranchChildRef_010201A0 *end; // ebx
  OB_stVectorBranchChildRef_010201A0 *v8; // ebx
  int v9; // edi
  OB_CBranchChildRef_010201A0 *v10; // ebx
  OB_CBranchChildRef_010201A0 *v11; // edi

  begin = this->begin; /*0x79146b*/
  if ( begin && (end = this->end, end - begin) ) /*0x791487*/
  {
    if ( begin > end ) /*0x791495*/
      _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x791497*/
    v8 = owner; /*0x79149c*/
    if ( !owner || owner != this ) /*0x7914a6*/
      _invalid_parameter_noinfo((int)owner, (int)begin, (int)this); /*0x7914a8*/
    v9 = position - begin; /*0x7914bf*/
  }
  else
  {
    v8 = owner; /*0x79148b*/
    v9 = 0; /*0x79148f*/
  }
  OB_stVectorBranchChildRef_InsertFill_010201A0((OB_stVector16_010201A0 *)this, (int)v8, position, 1u, value); /*0x7914cc*/
  v10 = this->begin; /*0x7914d1*/
  if ( v10 > this->end ) /*0x7914d7*/
    _invalid_parameter_noinfo((int)v10, v9, (int)this); /*0x7914d9*/
  v11 = &v10[v9]; /*0x7914e1*/
  if ( v11 > this->end || v11 < this->begin ) /*0x7914f0*/
    _invalid_parameter_noinfo((int)v10, (int)v11, (int)this); /*0x7914f2*/
  result->current = v11; /*0x7914fb*/
  result->owner = this; /*0x7914ff*/
  return result; /*0x7914fe*/
}
