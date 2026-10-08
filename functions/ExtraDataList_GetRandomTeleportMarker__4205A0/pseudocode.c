// Verified getter: returns ExtraRandomTeleportMarker.teleportRef from this ExtraDataList, or null if the type-0x43 extra is absent.
TESObjectREFR *__thiscall ExtraDataList::GetRandomTeleportMarker(ExtraDataList *this)
{
  ExtraRandomTeleportMarker *ExtraData; // eax

  ExtraData = (ExtraRandomTeleportMarker *)BaseExtraList_GetExtraData(this, kExtraData_RandomTeleportMarker); /*0x4205a2*/
  if ( ExtraData ) /*0x4205a9*/
    return ExtraData->teleportRef; /*0x4205ab*/
  else
    return 0; /*0x4205af*/
}
