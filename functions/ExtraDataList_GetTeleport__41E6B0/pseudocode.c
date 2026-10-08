TeleportData *__thiscall ExtraDataList_GetTeleport(ExtraDataList *this)
{
  ExtraTeleport *ExtraData; // eax

  ExtraData = (ExtraTeleport *)BaseExtraList_GetExtraData(this, kExtraData_Teleport); /*0x41e6b2*/
  if ( ExtraData ) /*0x41e6b9*/
    return ExtraData->teleport; /*0x41e6bb*/
  else
    return 0; /*0x41e6bf*/
}
