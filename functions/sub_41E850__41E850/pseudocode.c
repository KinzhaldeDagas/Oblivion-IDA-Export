// Returns the ExtraLeveledItem object itself, allowing callers to inspect its selected leveled-list state.
BSExtraData *__thiscall ExtraDataList_GetLeveledItem(ExtraDataList *this)
{
  return BaseExtraList_GetExtraData(this, kExtraData_LeveledItem); /*0x41e857*/
}
