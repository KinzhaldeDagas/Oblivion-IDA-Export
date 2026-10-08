// Dimension-checked element-wise FaceGen matrix addition: outSum = this + right.
FaceGenMatrix *__thiscall FaceGenMatrix_Add(
        const FaceGenMatrix *this,
        FaceGenMatrix *outSum,
        const FaceGenMatrix *right)
{
  float *begin; // ebp
  unsigned int *p_allocator08; // edi
  float *v6; // esi
  float *v7; // ebx
  float *v9; // [esp+10h] [ebp-4h]

  if ( this->rows != right->rows || this->columns != right->columns ) /*0x55254f*/
    FaceGen_ReportAssertionViolation("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp", 0x167); /*0x55255b*/
  FaceGenMatrix_InitializeDimensions(outSum, (int)outSum, this->rows, this->columns); /*0x552570*/
  begin = outSum->begin; /*0x552575*/
  if ( begin > outSum->end ) /*0x55257b*/
    _invalid_parameter_noinfo((int)right, (int)outSum, (int)this); /*0x55257d*/
  p_allocator08 = &this->allocator08; /*0x552582*/
  v6 = this->begin; /*0x552585*/
  if ( (unsigned int)v6 > p_allocator08[2] ) /*0x55258b*/
    _invalid_parameter_noinfo((int)right, (int)p_allocator08, (int)v6); /*0x55258d*/
  v7 = right->begin; /*0x552592*/
  if ( v7 > right->end ) /*0x55259c*/
    _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x55259e*/
  while ( 1 ) /*0x5525a9*/
  {
    v9 = (float *)p_allocator08[2]; /*0x5525a9*/
    if ( p_allocator08[1] > (unsigned int)v9 ) /*0x5525ad*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5525af*/
    if ( v6 == v9 ) /*0x5525c1*/
      break; /*0x5525c1*/
    if ( (unsigned int)v6 >= p_allocator08[2] ) /*0x5525c6*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5525c8*/
    if ( v7 >= right->end ) /*0x5525d4*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5525d6*/
    if ( begin >= outSum->end ) /*0x5525e2*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5525e4*/
    *begin = *v7 + *v6; /*0x5525ed*/
    if ( (unsigned int)v6 >= p_allocator08[2] ) /*0x5525f3*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5525f5*/
    ++v6; /*0x5525fe*/
    if ( v7 >= right->end ) /*0x552604*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x552606*/
    ++v7; /*0x55260f*/
    if ( begin >= outSum->end ) /*0x552615*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x552617*/
    ++begin; /*0x55261c*/
  }
  return outSum; /*0x552625*/
}
