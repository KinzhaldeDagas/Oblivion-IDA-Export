// Dimension-checked in-place element addition: this += rhs.
FaceGenMatrix *__thiscall FaceGenMatrix_AddInPlace(FaceGenMatrix *this, const FaceGenMatrix *rhs)
{
  int v2; // ebx
  float *begin; // esi
  unsigned int *p_allocator08; // ebp
  float *v6; // ebx
  unsigned int *v7; // edi
  const FaceGenMatrix *rhsa; // [esp+18h] [ebp+4h]
  const FaceGenMatrix *rhsb; // [esp+18h] [ebp+4h]

  if ( this->rows != rhs->rows || this->columns != rhs->columns ) /*0x551dbc*/
    FaceGen_ReportAssertionViolation("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp", 0x249); /*0x551dc8*/
  begin = this->begin; /*0x551dd0*/
  p_allocator08 = &this->allocator08; /*0x551dd3*/
  if ( (unsigned int)begin > p_allocator08[2] ) /*0x551dd9*/
    _invalid_parameter_noinfo(v2, (int)rhs, (int)begin); /*0x551ddb*/
  v6 = rhs->begin; /*0x551de0*/
  v7 = &rhs->allocator08; /*0x551de3*/
  if ( v6 > rhs->end ) /*0x551de9*/
    _invalid_parameter_noinfo((int)v6, (int)v7, (int)begin); /*0x551deb*/
  while ( 1 ) /*0x551df6*/
  {
    rhsa = (const FaceGenMatrix *)p_allocator08[2]; /*0x551df6*/
    if ( p_allocator08[1] > (unsigned int)rhsa ) /*0x551dfa*/
      _invalid_parameter_noinfo((int)v6, (int)v7, (int)begin); /*0x551dfc*/
    if ( begin == (float *)rhsa ) /*0x551e0e*/
      break; /*0x551e0e*/
    rhsb = (const FaceGenMatrix *)v7[2]; /*0x551e16*/
    if ( v7[1] > (unsigned int)rhsb ) /*0x551e1a*/
      _invalid_parameter_noinfo((int)v6, (int)v7, (int)begin); /*0x551e1c*/
    if ( v6 == (float *)rhsb ) /*0x551e2e*/
      break; /*0x551e2e*/
    if ( (unsigned int)begin >= p_allocator08[2] ) /*0x551e33*/
      _invalid_parameter_noinfo((int)v6, (int)v7, (int)begin); /*0x551e35*/
    if ( (unsigned int)v6 >= v7[2] ) /*0x551e3d*/
      _invalid_parameter_noinfo((int)v6, (int)v7, (int)begin); /*0x551e3f*/
    *begin = *v6 + *begin; /*0x551e48*/
    if ( (unsigned int)begin >= p_allocator08[2] ) /*0x551e4d*/
      _invalid_parameter_noinfo((int)v6, (int)v7, (int)begin); /*0x551e4f*/
    ++begin; /*0x551e54*/
    if ( (unsigned int)v6 >= v7[2] ) /*0x551e5a*/
      _invalid_parameter_noinfo((int)v6, (int)v7, (int)begin); /*0x551e5c*/
    ++v6; /*0x551e61*/
  }
  return this; /*0x551e6a*/
}
