ExtraContainerChanges_Data *__thiscall ExtraDataList_GetContainerChanges(ExtraDataList *this)
{
  ExtraContainerChanges *ExtraData; // eax

  ExtraData = (ExtraContainerChanges *)BaseExtraList_GetExtraData(this, kExtraData_InventoryChanges);
  if ( ExtraData )
    return ExtraData->data;
  else
    return 0;
}
