//
// Verified 2026-10-01: unlink existing entry from saved list, update neighbor next/previous and group head+10/count+C, clear both links in removed node. No allocation, release or free occurs.
OblivionRenderStateEntry *__thiscall NiD3DRenderStateGroup_RemoveSavedEntry(
        OblivionRenderStateGroupPrefix *this,
        OblivionRenderStateEntry *entry)
{
  OblivionRenderStateEntry *result; // eax
  OblivionRenderStateEntry *Next08; // edx
  OblivionRenderStateEntry *Previous0C; // esi

  result = entry; /*0x772790*/
  Next08 = entry->Next08; /*0x772794*/
  Previous0C = entry->Previous0C; /*0x77279a*/
  if ( Next08 ) /*0x77279d*/
    Next08->Previous0C = Previous0C; /*0x77279f*/
  if ( Previous0C ) /*0x7727a4*/
    Previous0C->Next08 = Next08; /*0x7727a6*/
  if ( entry == this->SavedHead10 ) /*0x7727ad*/
    this->SavedHead10 = Next08; /*0x7727af*/
  --this->SavedCount0C; /*0x7727b2*/
  entry->Next08 = 0; /*0x7727b6*/
  entry->Previous0C = 0; /*0x7727bd*/
  return result; /*0x7727ac*/
}
