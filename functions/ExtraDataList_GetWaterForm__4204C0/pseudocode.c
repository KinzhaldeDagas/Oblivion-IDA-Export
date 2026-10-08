TESWaterForm *__thiscall ExtraDataList::GetWaterForm(ExtraDataList *this)
{
  ExtraWaterType *ExtraData; // eax

  ExtraData = (ExtraWaterType *)BaseExtraList_GetExtraData(this, kExtraData_CellWaterType); /*0x4204c2*/
  if ( ExtraData ) /*0x4204c9*/
    return ExtraData->waterForm; /*0x4204cb*/
  else
    return 0; /*0x4204cf*/
}
