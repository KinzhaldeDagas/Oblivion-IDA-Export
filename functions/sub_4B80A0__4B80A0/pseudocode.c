// Verified mechanics: rejects null/unsupported candidate spaces, then returns true only when the TESForm* is present in TESObjectDOOR.randomTeleport. Probable domain meaning: this list records spaces in which the door can be selected as a random teleport destination; ExtraRandomTeleportMarker.teleportRef is a separate per-reference marker pointer.
bool __thiscall TESObjectDOOR_ContainsRandomTeleportSpace(TESObjectDOOR *this, TESForm *space)
{
  TESObjectDOOR_RandomTeleportSpaceNode *p_randomTeleport; // eax

  if ( !space ) /*0x4b80ad*/
    return 0; /*0x4b80ad*/
  if ( !TESForm_IsInteriorCellOrWorldSpace(space) ) /*0x4b80b0*/
    return 0; /*0x4b80b0*/
  p_randomTeleport = &this->super.randomTeleport; /*0x4b80bc*/
  if ( this == (TESObjectDOOR *)0xFFFFFF98 ) /*0x4b80c1*/
    return 0; /*0x4b80ce*/
  while ( p_randomTeleport->space != space ) /*0x4b80c5*/
  {
    p_randomTeleport = p_randomTeleport->next; /*0x4b80c7*/
    if ( !p_randomTeleport ) /*0x4b80cc*/
      return 0; /*0x4b80cc*/
  }
  return 1; /*0x4b80ce*/
}
