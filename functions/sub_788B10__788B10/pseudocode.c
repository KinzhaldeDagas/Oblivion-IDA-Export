// Oblivion checked byte-vector erase-range: verifies both iterators belong to this vector, overlap-moves the suffix, updates end, and returns the resulting checked iterator.
OB_stVectorByteIterator_010201A0 *__thiscall OB_stVectorByte_EraseRange_010201A0(
        OB_stVectorByte_010201A0 *this,
        OB_stVectorByteIterator_010201A0 *result,
        OB_stVectorByteIterator_010201A0 first,
        OB_stVectorByteIterator_010201A0 last)
{
  int v4; // ebx
  int v5; // esi
  int v7; // eax
  unsigned __int8 *v8; // ebx
  rsize_t v10; // [esp-4h] [ebp-10h]

  if ( !first.owner || first.owner != last.owner ) /*0x788b21*/
    _invalid_parameter_noinfo(v4, (int)this, v5); /*0x788b23*/
  if ( first.current != last.current ) /*0x788b32*/
  {
    v7 = this->end - last.current; /*0x788b37*/
    LODWORD(v10) = v4; /*0x788b3b*/
    v8 = &first.current[v7]; /*0x788b3c*/
    if ( v7 > 0 ) /*0x788b3f*/
      memmove_s(first.current, __PAIR64__((unsigned int)last.current, v7), (const void *)v7, v10); /*0x788b45*/
    this->end = v8; /*0x788b4d*/
  }
  *result = first; /*0x788b56*/
  return result; /*0x788b55*/
}
