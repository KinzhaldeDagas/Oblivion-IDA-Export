// Returns the TESObjectCELL stored in ExtraPersistentCell, or null.
BSExtraDataVtbl *__thiscall ExtraDataList_GetPersistentCell(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell); /*0x41ff82*/
  if ( ExtraData ) /*0x41ff89*/
    return ExtraData[1].vtbl; /*0x41ff8b*/
  else
    return 0; /*0x41ff8f*/
}
