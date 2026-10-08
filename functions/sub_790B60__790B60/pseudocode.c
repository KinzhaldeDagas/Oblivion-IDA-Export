// Oblivion binary evidence: uninitialized fill_n for count four-byte slots, returning destination + count. Used by the folded vector insertion implementation.
unsigned int *__stdcall OB_stVector4_UninitializedFillN_010201A0(
        unsigned int *destination,
        unsigned int count,
        const unsigned int *value)
{
  unsigned int v3; // eax
  unsigned int *i; // ecx

  v3 = count; /*0x790b6c*/
  for ( i = destination; v3; ++i ) /*0x790b70*/
  {
    *i = *value; /*0x790b79*/
    --v3; /*0x790b7b*/
  }
  return &destination[count]; /*0x790b89*/
}
