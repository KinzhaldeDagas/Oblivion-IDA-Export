// Deep matrix assignment. Copies rows/columns, resizes coefficient storage, then copies rows*columns floats.
FaceGenMatrix *__thiscall FaceGenMatrix_Assign(FaceGenMatrix *this, const FaceGenMatrix *source)
{
  int v2; // ebx
  unsigned int columns; // eax
  unsigned int *p_allocator08; // ebx
  float *begin; // eax
  float *v7; // eax
  float *v8; // edi
  unsigned int v10; // [esp-4h] [ebp-14h]
  size_t v11; // [esp+0h] [ebp-10h]

  if ( this != source ) /*0x5520ea*/
  {
    HIDWORD(v11) = v2; /*0x5520f0*/
    this->rows = source->rows; /*0x5520f2*/
    columns = source->columns; /*0x5520f7*/
    p_allocator08 = &this->allocator08; /*0x5520ff*/
    v10 = columns * this->rows; /*0x552102*/
    this->columns = columns; /*0x552105*/
    FaceGenFloatVector_ResizeFill(&this->allocator08, (int)source, v10, COERCE_INT(0.0)); /*0x552108*/
    begin = source->begin; /*0x55210d*/
    if ( !begin || !(source->end - begin) ) /*0x552119*/
      _invalid_parameter_noinfo((int)p_allocator08, (int)source, (int)this); /*0x55211e*/
    v7 = this->begin; /*0x552123*/
    v8 = source->begin; /*0x552128*/
    if ( !v7 || !(this->end - v7) ) /*0x552132*/
      _invalid_parameter_noinfo((int)p_allocator08, (int)v8, (int)this); /*0x552137*/
    LODWORD(v11) = 4 * this->rows * this->columns; /*0x552149*/
    memcpy(this->begin, v8, v11); /*0x55214c*/
  }
  return this; /*0x552155*/
}
