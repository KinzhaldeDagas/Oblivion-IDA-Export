// Reallocation/insert-one wrapper for the CBranch flare vector at CBranch+0x30. Preserves the iterator index across growth and delegates the 0x18-byte record insertion to 0x791140.
unsigned int **__thiscall OB_CBranch_flareVectorInsertRealloc_010201A0(
        OB_stVector16_010201A0 *this,
        unsigned int **resultIterator,
        OB_stVector16_010201A0 *expectedOwner,
        OB_CBranchFlareEntry_010201A0 *position,
        const OB_CBranchFlareEntry_010201A0 *value)
{
  _BYTE *begin; // edi
  _BYTE *end; // ebx
  OB_stVector16_010201A0 *v8; // ebx
  int v9; // edi
  char *v10; // ebx
  unsigned int *v11; // edi

  begin = this->begin; /*0x79151b*/
  if ( begin && (end = this->end, (end - begin) / 0x18) ) /*0x791538*/
  {
    if ( begin > end ) /*0x791546*/
      _invalid_parameter_noinfo((int)end, (int)begin, (int)this); /*0x791548*/
    v8 = expectedOwner; /*0x79154d*/
    if ( !expectedOwner || expectedOwner != this ) /*0x791557*/
      _invalid_parameter_noinfo((int)expectedOwner, (int)begin, (int)this); /*0x791559*/
    v9 = ((char *)position - begin) / 0x18; /*0x791571*/
  }
  else
  {
    v8 = expectedOwner; /*0x79153c*/
    v9 = 0; /*0x791540*/
  }
  OB_stVectorBranchFlareEntry_InsertFill_010201A0(this, (int)v8, position, 1u, value); /*0x79157e*/
  v10 = (char *)this->begin; /*0x791583*/
  if ( v10 > this->end ) /*0x791589*/
    _invalid_parameter_noinfo((int)v10, v9, (int)this); /*0x79158b*/
  v11 = (unsigned int *)&v10[0x18 * v9]; /*0x791593*/
  if ( v11 > this->end || v11 < this->begin ) /*0x7915a2*/
    _invalid_parameter_noinfo((int)v10, (int)v11, (int)this); /*0x7915a4*/
  resultIterator[1] = v11; /*0x7915ad*/
  *resultIterator = &this->allocatorState; /*0x7915b1*/
  return resultIterator; /*0x7915b0*/
}
