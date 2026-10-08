// Initialize FaceGenMatrix dimensions and resize to rows*columns floats. The product is computed in 32 bits without overflow validation.
FaceGenMatrix *__thiscall FaceGenMatrix_InitializeDimensions(
        FaceGenMatrix *this,
        unsigned int rows,
        unsigned int columns)
{
  int v3; // edi

  this->rows = rows; /*0x552270*/
  this->columns = columns; /*0x552272*/
  this->begin = 0; /*0x55227a*/
  this->end = 0; /*0x55227d*/
  this->capacityEnd = 0; /*0x552280*/
  FaceGenFloatVector_ResizeFill( /*0x552294*/
    (OB_stVector4_010201A0 *)&this->allocator08,
    v3,
    this->rows * this->columns,
    COERCE_UNSIGNED_INT(0.0));                  // Unchecked 32-bit rows*columns becomes the float-vector element count. Overflow can allocate fewer coefficients than the stored dimensions describe.
  return this; /*0x55229b*/
}
