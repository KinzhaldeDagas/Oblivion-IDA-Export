// OBLIVION AUTHORITY (2026-08-30): Checked vector<unsigned short>::erase(first,last). Validates both iterator owners, shifts the suffix by 2-byte elements, updates end, and returns the resulting checked iterator.
OB_stVectorUShortIterator_010201A0 *__thiscall OB_stVectorUShort_EraseRange_010201A0(
        OB_stVectorUShort_010201A0 *this,
        OB_stVectorUShortIterator_010201A0 *result,
        OB_stVectorUShortIterator_010201A0 first,
        OB_stVectorUShortIterator_010201A0 last)
{
  int v4; // ebx
  int v5; // esi
  int v7; // eax
  unsigned __int16 *v8; // ebx
  rsize_t v10; // [esp-4h] [ebp-10h]

  if ( !first.owner || first.owner != last.owner ) /*0x794ef1*/
    _invalid_parameter_noinfo(v4, (int)this, v5); /*0x794ef3*/
  if ( first.current != last.current ) /*0x794f02*/
  {
    v7 = this->end - last.current; /*0x794f09*/
    LODWORD(v10) = v4; /*0x794f10*/
    v8 = &first.current[v7]; /*0x794f11*/
    if ( v7 > 0 ) /*0x794f14*/
      memmove_s(first.current, __PAIR64__((unsigned int)last.current, 2 * v7), (const void *)(2 * v7), v10); /*0x794f1a*/
    this->end = v8; /*0x794f22*/
  }
  *result = first; /*0x794f2b*/
  return result; /*0x794f2a*/
}
