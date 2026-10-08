// Verified actor wrapper: returns false if the actor has no current cell; otherwise calls TESObjectCELL_IsActorOwnershipRestricted(currentCell, actor). It is referenced by condition/function tables, but the registered condition identity/name remains Unknown.
bool __thiscall Actor_IsCurrentCellOwnershipRestricted(Actor *actor)
{
  TESObjectCELL *DwordAtOffset40; // eax

  if ( !Shared_GetDwordAtOffset40(actor) ) /*0x60e326*/
    return 0; /*0x60e342*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x60e332*/
  return TESObjectCELL_IsActorOwnershipRestricted(DwordAtOffset40, actor); /*0x60e33e*/
}
