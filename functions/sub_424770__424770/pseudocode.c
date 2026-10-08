void __thiscall sub_424770(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold); /*0x424775*/
  if ( ExtraData ) /*0x42477c*/
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x424783*/
}
