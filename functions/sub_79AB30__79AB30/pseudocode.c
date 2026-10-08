// Checked uninitialized_fill_n wrapper for SFrondVertex. Constructs count copies and returns destination+count.
OB_SFrondVertex_010201A0 *__stdcall OB_SFrondVertex_UninitializedFillNThunk_010201A0(
        OB_SFrondVertex_010201A0 *destination,
        unsigned int count,
        const OB_SFrondVertex_010201A0 *value)
{
  const void *v3; // ecx
  unsigned int debugCookie; // [esp+8h] [ebp-4h]

  LOBYTE(debugCookie) = 0; /*0x79ab3f*/
  OB_SFrondVertex_UninitializedFillN_010201A0(destination, count, value, v3, value, debugCookie); /*0x79ab52*/
  return &destination[count]; /*0x79ab66*/
}
