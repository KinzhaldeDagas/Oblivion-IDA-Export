unsigned int __thiscall ExtraDataList_GetExtraLeveledItem(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem); /*0x41ff62*/
  if ( ExtraData ) /*0x41ff69*/
    return (unsigned int)ExtraData[1].vtbl; /*0x41ff6b*/
  else
    return 0xFFFFFFFF; /*0x41ff6f*/
}
