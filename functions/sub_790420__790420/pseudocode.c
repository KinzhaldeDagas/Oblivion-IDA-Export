// OBLIVION AUTHORITY (2026-08-30): Copies the half-open range of trivial 4-byte elements into initialized destination storage and returns destination plus the element count.
unsigned int *__cdecl OB_stVector4_CopyRange_010201A0(
        const unsigned int *first,
        const unsigned int *last,
        unsigned int *destination)
{
  int v3; // eax
  unsigned int *v4; // esi
  rsize_t v6; // [esp-Ch] [ebp-14h]
  rsize_t v7; // [esp+0h] [ebp-8h]

  v3 = last - first; /*0x79042b*/
  v4 = &destination[v3]; /*0x79043c*/
  if ( v3 > 0 ) /*0x79043f*/
  {
    HIDWORD(v6) = first; /*0x790442*/
    LODWORD(v6) = 4 * v3; /*0x790443*/
    memmove_s(destination, v6, (const void *)(4 * v3), v7); /*0x790445*/
  }
  return v4; /*0x79044d*/
}
