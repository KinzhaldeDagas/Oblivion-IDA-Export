// Dimension-checked element-wise matrix subtraction: outDifference = this - right.
FaceGenMatrix *__thiscall FaceGenMatrix_Subtract(
        const FaceGenMatrix *this,
        FaceGenMatrix *outDifference,
        const FaceGenMatrix *right)
{
  float *begin; // ebp
  unsigned int *p_allocator08; // edi
  float *v6; // esi
  float *v7; // ebx
  float *v9; // [esp+10h] [ebp-4h]

  if ( this->rows != right->rows || this->columns != right->columns ) /*0x55264f*/
    FaceGen_ReportAssertionViolation("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp", 0x1C4); /*0x55265b*/
  FaceGenMatrix_InitializeDimensions(outDifference, (int)outDifference, this->rows, this->columns); /*0x552670*/
  begin = outDifference->begin; /*0x552675*/
  if ( begin > outDifference->end ) /*0x55267b*/
    _invalid_parameter_noinfo((int)right, (int)outDifference, (int)this); /*0x55267d*/
  p_allocator08 = &this->allocator08; /*0x552682*/
  v6 = this->begin; /*0x552685*/
  if ( (unsigned int)v6 > p_allocator08[2] ) /*0x55268b*/
    _invalid_parameter_noinfo((int)right, (int)p_allocator08, (int)v6); /*0x55268d*/
  v7 = right->begin; /*0x552692*/
  if ( v7 > right->end ) /*0x55269c*/
    _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x55269e*/
  while ( 1 ) /*0x5526a9*/
  {
    v9 = (float *)p_allocator08[2]; /*0x5526a9*/
    if ( p_allocator08[1] > (unsigned int)v9 ) /*0x5526ad*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5526af*/
    if ( v6 == v9 ) /*0x5526c1*/
      break; /*0x5526c1*/
    if ( (unsigned int)v6 >= p_allocator08[2] ) /*0x5526c6*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5526c8*/
    if ( v7 >= right->end ) /*0x5526d4*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5526d6*/
    if ( begin >= outDifference->end ) /*0x5526e2*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5526e4*/
    *begin = *v6 - *v7; /*0x5526ed*/
    if ( (unsigned int)v6 >= p_allocator08[2] ) /*0x5526f3*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x5526f5*/
    ++v6; /*0x5526fe*/
    if ( v7 >= right->end ) /*0x552704*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x552706*/
    ++v7; /*0x55270f*/
    if ( begin >= outDifference->end ) /*0x552715*/
      _invalid_parameter_noinfo((int)v7, (int)p_allocator08, (int)v6); /*0x552717*/
    ++begin; /*0x55271c*/
  }
  return outDifference; /*0x552725*/
}
