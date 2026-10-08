// Verified teleport-extra removal hook: before removing linked-door metadata, it removes the corresponding AStarWorldNode from the low-path space maps; then it clears teleport metadata from the linked door and this reference.
void __cdecl RemoveExtraTeleportFromDoorRef(TESObjectCELL **a1)
{
  ExtraTeleport *TeleportExtraData; // esi
  BSExtraDataVtbl *v2; // eax

  if ( a1 ) /*0x4b6d57*/
  {
    TeleportExtraData = TESObjectREFR_GetTeleportData(a1); /*0x4b6d61*/
    if ( TeleportExtraData ) /*0x4b6d65*/
    {
      TravelPath_RemoveAStarWorldNodeFromSpaceMaps(a1); /*0x4b6d68*/
      v2 = TeleportData_GetLinkedDoor(&TeleportExtraData->super); /*0x4b6d72*/
      if ( v2 ) /*0x4b6d79*/
        sub_4D76D0(v2); /*0x4b6d7d*/
      sub_4D76D0(a1); /*0x4b6d86*/
    }
  }
}
