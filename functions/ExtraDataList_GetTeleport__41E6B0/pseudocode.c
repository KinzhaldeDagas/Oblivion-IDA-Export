TeleportData *__thiscall ExtraDataList_GetTeleport(ExtraDataList *this)
{
  ExtraTeleport *ExtraData; // eax

  ExtraData = (ExtraTeleport *)BaseExtraList_GetExtraData(this, kExtraData_Teleport);
  if ( ExtraData )
    return ExtraData->teleport;
  else
    return 0;
}
