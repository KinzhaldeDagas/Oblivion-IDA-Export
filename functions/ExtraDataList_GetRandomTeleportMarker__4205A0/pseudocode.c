TESObjectREFR *__thiscall ExtraDataList::GetRandomTeleportMarker(ExtraDataList *this)
{
  ExtraRandomTeleportMarker *ExtraData; // eax

  ExtraData = (ExtraRandomTeleportMarker *)BaseExtraList_GetExtraData(this, kExtraData_RandomTeleportMarker);
  if ( ExtraData )
    return ExtraData->teleportRef;
  else
    return 0;
}
