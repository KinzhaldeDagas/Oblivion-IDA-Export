TESWaterForm *__thiscall ExtraDataList::GetWaterForm(ExtraDataList *this)
{
  ExtraWaterType *ExtraData; // eax

  ExtraData = (ExtraWaterType *)BaseExtraList_GetExtraData(this, kExtraData_CellWaterType);
  if ( ExtraData )
    return ExtraData->waterForm;
  else
    return 0;
}
