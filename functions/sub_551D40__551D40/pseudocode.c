// Verified Oblivion: multiply every stored float in [begin,end) by scale, independently of rows/columns; return this. ECX=this, one stack float, ret 4. EBX is saved and overwritten, not a semantic argument; prior userpurge signature was a decompiler artifact.
FaceGenMatrix *__thiscall FaceGenMatrix_ScaleInPlace(FaceGenMatrix *this, float scale)
{
  int v2; // ebx
  unsigned int *p_allocator08; // esi
  float *begin; // edi
  unsigned int v6; // ebx

  p_allocator08 = &this->allocator08; /*0x551d45*/
  begin = this->begin; /*0x551d49*/
  if ( begin > this->end ) /*0x551d4f*/
    _invalid_parameter_noinfo(v2, (int)begin, (int)p_allocator08); /*0x551d51*/
  while ( 1 ) /*0x551d56*/
  {
    v6 = p_allocator08[2]; /*0x551d56*/
    if ( p_allocator08[1] > v6 ) /*0x551d5c*/
      _invalid_parameter_noinfo(v6, (int)begin, (int)p_allocator08); /*0x551d5e*/
    if ( begin == (float *)v6 ) /*0x551d6e*/
      break; /*0x551d6e*/
    if ( (unsigned int)begin >= p_allocator08[2] ) /*0x551d73*/
      _invalid_parameter_noinfo(v6, (int)begin, (int)p_allocator08); /*0x551d75*/
    *begin = *begin * scale; /*0x551d80*/
    if ( (unsigned int)begin >= p_allocator08[2] ) /*0x551d85*/
      _invalid_parameter_noinfo(v6, (int)begin, (int)p_allocator08); /*0x551d87*/
    ++begin; /*0x551d8c*/
  }
  return this; /*0x551d91*/
}
