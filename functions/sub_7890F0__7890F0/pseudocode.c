// Oblivion byte-vector uninitialized fill-N primitive: writes count copies of one byte and returns one-past-last.
unsigned __int8 *__stdcall OB_stVectorByte_UninitializedFillN_010201A0(
        unsigned __int8 *destination,
        unsigned int count,
        const unsigned __int8 *value)
{
  unsigned int v3; // eax
  unsigned __int8 *i; // ecx

  v3 = count; /*0x7890fc*/
  for ( i = destination; v3; ++i ) /*0x789100*/
  {
    *i = *value; /*0x789109*/
    --v3; /*0x78910b*/
  }
  return &destination[count]; /*0x789119*/
}
