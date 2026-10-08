// OBLIVION AUTHORITY (2026-08-30): Trivial uninitialized_fill_n for unsigned-short storage; writes count copies and returns destination+count.
unsigned __int16 *__stdcall OB_stVectorUShort_UninitializedFillN_010201A0(
        unsigned __int16 *destination,
        unsigned int count,
        const unsigned __int16 *value)
{
  unsigned int v3; // eax
  unsigned __int16 *i; // ecx

  v3 = count; /*0x794f9c*/
  for ( i = destination; v3; ++i ) /*0x794fa0*/
  {
    *i = *value; /*0x794faa*/
    --v3; /*0x794fad*/
  }
  return &destination[count]; /*0x794fbb*/
}
