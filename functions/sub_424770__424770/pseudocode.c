void __thiscall sub_424770(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold);
  if ( ExtraData )
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
}
