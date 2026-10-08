void __thiscall sub_424790(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem); /*0x424795*/
  if ( ExtraData ) /*0x42479c*/
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4247a3*/
}
