// Constructs a 0x18-byte FaceGenMatrix. Embedded vector layout: allocator state +0x08, begin +0x0C, end +0x10, capacity end +0x14.
FaceGenMatrix *__thiscall FaceGenMatrix_Construct(FaceGenMatrix *this)
{
  unsigned int *p_allocator08; // esi
  float *begin; // ebp
  int v5; // [esp+10h] [ebp-8h] BYREF

  p_allocator08 = &this->allocator08; /*0x43eb3b*/
  this->rows = 0; /*0x43eb3e*/
  this->columns = 0; /*0x43eb40*/
  this->begin = 0; /*0x43eb47*/
  this->end = 0; /*0x43eb4a*/
  this->capacityEnd = 0; /*0x43eb4d*/
  begin = this->begin; /*0x43eb57*/
  if ( begin > this->end ) /*0x43eb5d*/
    _invalid_parameter_noinfo(0, (int)this, (int)p_allocator08); /*0x43eb5f*/
  OB_stVector4_EraseRange_010201A0(p_allocator08, 0, &v5, (int)p_allocator08, (char *)begin, (int)p_allocator08, 0); /*0x43eb6f*/
  return this; /*0x43eb76*/
}
