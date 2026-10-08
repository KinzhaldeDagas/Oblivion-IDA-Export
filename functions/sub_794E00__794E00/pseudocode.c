// OBLIVION AUTHORITY (2026-08-30): Copies the half-open unsigned-short range [first,last) into initialized destination storage with memmove_s and returns destination plus the copied element count.
unsigned __int16 *__cdecl OB_stVectorUShort_CopyRange_010201A0(
        const unsigned __int16 *first,
        const unsigned __int16 *last,
        unsigned __int16 *destination)
{
  int v3; // eax
  unsigned __int16 *v4; // esi
  rsize_t v6; // [esp-Ch] [ebp-14h]
  rsize_t v7; // [esp+0h] [ebp-8h]

  v3 = last - first; /*0x794e0b*/
  v4 = &destination[v3]; /*0x794e17*/
  if ( v3 > 0 ) /*0x794e1a*/
  {
    HIDWORD(v6) = first; /*0x794e1d*/
    LODWORD(v6) = 2 * v3; /*0x794e1e*/
    memmove_s(destination, v6, (const void *)(2 * v3), v7); /*0x794e20*/
  }
  return v4; /*0x794e28*/
}
