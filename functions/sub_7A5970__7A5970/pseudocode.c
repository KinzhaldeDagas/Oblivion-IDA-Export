// Deep-copy assigns one SIdvLeafTexture value across an existing 0x54-stride range.
void __cdecl OB_SIdvLeafTexture_CopyAssignFillRange_010201A0(
        OB_SIdvLeafTexture_010201A0 *first,
        OB_SIdvLeafTexture_010201A0 *last,
        const OB_SIdvLeafTexture_010201A0 *value)
{
  OB_SIdvLeafTexture_010201A0 *i; // esi

  for ( i = first; i != last; ++i ) /*0x7a597c*/
    OB_SIdvLeafTexture_CopyAssign_010201A0(i, value); /*0x7a5986*/
}
