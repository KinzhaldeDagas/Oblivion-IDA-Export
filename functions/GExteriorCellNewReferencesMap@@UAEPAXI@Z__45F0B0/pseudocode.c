//
// Verified: calls 45AAD0; frees self only when deleteFlags bit 0 is set.
ExteriorCellNewReferencesMap *__thiscall ExteriorCellNewReferencesMap_scalar_dtor(
        ExteriorCellNewReferencesMap *self,
        unsigned int deleteFlags)
{
  ExteriorCellNewReferencesMap_dtor(self); /*0x45f0b3*/
  if ( (deleteFlags & 1) != 0 ) /*0x45f0bd*/
    FormHeapFree((unsigned int)self); /*0x45f0c0*/
  return self; /*0x45f0ca*/
}
