// OBLIVION AUTHORITY (2026-08-30): Uninitialized fill_n wrapper for SLodEntry; returns destination+count.
OB_CLeafLodEngine_SLodEntry_010201A0 *__cdecl OB_LeafLodEntry_UninitializedFillN_ReturnEnd_010201A0(
        OB_CLeafLodEngine_SLodEntry_010201A0 *destination,
        unsigned int count,
        const OB_CLeafLodEngine_SLodEntry_010201A0 *value)
{
  OB_LeafLodEntry_UninitializedFillN_010201A0(destination, count, value); /*0x7a87b2*/
  return &destination[count]; /*0x7a87bd*/
}
