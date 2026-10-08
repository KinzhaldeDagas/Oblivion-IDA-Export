// OBLIVION AUTHORITY (2026-08-30): Checked-iterator insert-one wrapper for vector<vector<float>>. Validates owner/position, calls insert-fill(count=1), relocates the inserted element after possible reallocation, and returns {owner,current}. Boundary corrected through ret 0x10 at 0x79F1DA.
OB_stVectorIterator_stVectorFloat_010201A0 *__thiscall OB_stVector_stVectorFloat_InsertOne_010201A0(
        OB_stVector_stVectorFloat_010201A0 *this,
        OB_stVectorIterator_stVectorFloat_010201A0 *result,
        OB_stVector_stVectorFloat_010201A0 *expectedOwner,
        OB_stVectorFloat_010201A0 *position,
        const OB_stVectorFloat_010201A0 *value)
{
  OB_stVectorFloat_010201A0 *begin; // ebx
  int v7; // edi
  OB_stVectorFloat_010201A0 *v8; // ebx
  OB_stVectorFloat_010201A0 *v9; // edi

  begin = this->begin; /*0x79f15a*/
  if ( begin && this->end - begin ) /*0x79f169*/
  {
    if ( begin > this->end ) /*0x79f174*/
      _invalid_parameter_noinfo(); /*0x79f176*/
    if ( !expectedOwner || expectedOwner != this ) /*0x79f181*/
      _invalid_parameter_noinfo(); /*0x79f183*/
    v7 = position - begin; /*0x79f18e*/
  }
  else
  {
    v7 = 0; /*0x79f16e*/
  }
  OB_stVector_stVectorFloat_InsertFill_010201A0(this, expectedOwner, position, 1u, value); /*0x79f1a0*/
  v8 = this->begin;                             // Recovered post-insert normal tail omitted by the former false noreturn call: recomputes the inserted pointer after possible reallocation and fills the checked iterator result. /*0x79f1a5*/
  if ( v8 > this->end ) /*0x79f1ab*/
    _invalid_parameter_noinfo(); /*0x79f1ad*/
  v9 = &v8[v7]; /*0x79f1b5*/
  if ( v9 > this->end || v9 < this->begin ) /*0x79f1c3*/
    _invalid_parameter_noinfo(); /*0x79f1c5*/
  result->current = v9; /*0x79f1ce*/
  result->owner = this; /*0x79f1d2*/
  return result; /*0x79f1d1*/
}
