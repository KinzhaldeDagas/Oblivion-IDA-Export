// OBLIVION AUTHORITY (2026-08-30): Placement-fills count uninitialized 8-byte SLodEntry slots from one source pair.
void __cdecl OB_LeafLodEntry_UninitializedFillN_010201A0(
        OB_CLeafLodEngine_SLodEntry_010201A0 *destination,
        unsigned int count,
        const OB_CLeafLodEngine_SLodEntry_010201A0 *value)
{
  unsigned int i; // ecx

  for ( i = count; i; ++destination ) /*0x7a8726*/
  {
    if ( destination ) /*0x7a8733*/
      *destination = *value; /*0x7a8737*/
    --i; /*0x7a873f*/
  }
}
