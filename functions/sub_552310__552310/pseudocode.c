// Matrix scalar multiply: out = this * scale. Dimensions and storage are initialized from the source matrix.
FaceGenMatrix *__thiscall FaceGenMatrix_Scale(const FaceGenMatrix *this, FaceGenMatrix *out, float scale)
{
  int v3; // ebx
  unsigned int *p_allocator08; // edi
  float *begin; // esi
  float *v8; // ebx
  FaceGenMatrix *outa; // [esp+18h] [ebp+4h]

  FaceGenMatrix_InitializeDimensions(out, this->rows, this->columns); /*0x55232c*/
  p_allocator08 = &this->allocator08; /*0x552331*/
  begin = this->begin; /*0x552334*/
  if ( (unsigned int)begin > p_allocator08[2] ) /*0x55233a*/
    _invalid_parameter_noinfo(v3, (int)p_allocator08, (int)begin); /*0x55233c*/
  v8 = out->begin; /*0x552341*/
  if ( v8 > out->end ) /*0x552347*/
    _invalid_parameter_noinfo((int)v8, (int)p_allocator08, (int)begin); /*0x552349*/
  while ( 1 ) /*0x552356*/
  {
    outa = (FaceGenMatrix *)p_allocator08[2]; /*0x552356*/
    if ( p_allocator08[1] > (unsigned int)outa ) /*0x55235a*/
      _invalid_parameter_noinfo((int)v8, (int)p_allocator08, (int)begin); /*0x55235c*/
    if ( begin == (float *)outa ) /*0x55236e*/
      break; /*0x55236e*/
    if ( (unsigned int)begin >= p_allocator08[2] ) /*0x552373*/
      _invalid_parameter_noinfo((int)v8, (int)p_allocator08, (int)begin); /*0x552375*/
    if ( v8 >= out->end ) /*0x55237d*/
      _invalid_parameter_noinfo((int)v8, (int)p_allocator08, (int)begin); /*0x55237f*/
    *v8 = *begin * scale; /*0x55238a*/
    if ( (unsigned int)begin >= p_allocator08[2] ) /*0x55238f*/
      _invalid_parameter_noinfo((int)v8, (int)p_allocator08, (int)begin); /*0x552391*/
    ++begin; /*0x552396*/
    if ( v8 >= out->end ) /*0x55239c*/
      _invalid_parameter_noinfo((int)v8, (int)p_allocator08, (int)begin); /*0x55239e*/
    ++v8; /*0x5523a3*/
  }
  return out; /*0x5523a8*/
}
