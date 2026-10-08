// OBLIVION AUTHORITY (2026-08-30): Checked erase-range core for vectors of trivial 4-byte elements. Validates iterator owners, shifts the suffix with memmove_s, updates end, and returns the resulting iterator; directly clears CIndexedGeometry triangle totals.
OB_stVector4Iterator_010201A0 *__thiscall OB_stVector4_EraseRange_010201A0(
        OB_stVector4_010201A0 *this,
        OB_stVector4Iterator_010201A0 *result,
        OB_stVector4Iterator_010201A0 first,
        OB_stVector4Iterator_010201A0 last)
{
  int v4; // ebx
  int v5; // esi
  int v7; // eax
  unsigned int *v8; // ebx
  rsize_t v10; // [esp-4h] [ebp-10h]

  if ( !first.owner || first.owner != last.owner ) /*0x439061*/
    _invalid_parameter_noinfo(v4, (int)this, v5); /*0x439063*/
  if ( first.current != last.current ) /*0x439072*/
  {
    v7 = this->end - last.current; /*0x439079*/
    LODWORD(v10) = v4; /*0x439085*/
    v8 = &first.current[v7]; /*0x439086*/
    if ( v7 > 0 ) /*0x439089*/
      memmove_s(first.current, __PAIR64__((unsigned int)last.current, 4 * v7), (const void *)(4 * v7), v10); /*0x43908f*/
    this->end = v8; /*0x439097*/
  }
  *result = first; /*0x4390a0*/
  return result; /*0x43909f*/
}
