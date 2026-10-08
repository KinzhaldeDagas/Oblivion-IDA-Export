//
// Verified 2026-10-01: unlink existing entry from no-save list, update neighbor next/previous and group head+8/count+4, clear both links in removed node. No allocation, release or free occurs.
OblivionRenderStateEntry *__thiscall NiD3DRenderStateGroup_RemoveNoSaveEntry(
        OblivionRenderStateGroupPrefix *this,
        OblivionRenderStateEntry *entry)
{
  OblivionRenderStateEntry *result; // eax
  OblivionRenderStateEntry *Next08; // edx
  OblivionRenderStateEntry *Previous0C; // esi

  result = entry; /*0x772750*/
  Next08 = entry->Next08; /*0x772754*/
  Previous0C = entry->Previous0C; /*0x77275a*/
  if ( Next08 ) /*0x77275d*/
    Next08->Previous0C = Previous0C; /*0x77275f*/
  if ( Previous0C ) /*0x772764*/
    Previous0C->Next08 = Next08; /*0x772766*/
  if ( entry == this->NoSaveHead08 ) /*0x77276d*/
    this->NoSaveHead08 = Next08; /*0x77276f*/
  --this->NoSaveCount04; /*0x772772*/
  entry->Next08 = 0; /*0x772776*/
  entry->Previous0C = 0; /*0x77277d*/
  return result; /*0x77276c*/
}
