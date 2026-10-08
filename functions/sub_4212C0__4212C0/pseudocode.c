// Returns ExtraSavedMovementData's saved-Havok-data pointer, or null.
BSExtraDataVtbl *__thiscall ExtraDataList_GetSavedHavokData(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_SavedMovementData); /*0x4212c2*/
  if ( ExtraData ) /*0x4212c9*/
    return ExtraData[2].vtbl; /*0x4212cb*/
  else
    return 0; /*0x4212cf*/
}
