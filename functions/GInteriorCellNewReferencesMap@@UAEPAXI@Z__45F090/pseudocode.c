//
// Verified: calls 45A990; frees self only when deleteFlags bit 0 is set.
InteriorCellNewReferencesMap *__thiscall InteriorCellNewReferencesMap_scalar_dtor(
        InteriorCellNewReferencesMap *self,
        unsigned int deleteFlags)
{
  InteriorCellNewReferencesMap_dtor(self); /*0x45f093*/
  if ( (deleteFlags & 1) != 0 ) /*0x45f09d*/
    FormHeapFree((unsigned int)self); /*0x45f0a0*/
  return self; /*0x45f0aa*/
}
