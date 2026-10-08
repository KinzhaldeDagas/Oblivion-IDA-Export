ExtraContainerChanges_Data *__thiscall ExtraDataList_GetContainerChanges(ExtraDataList *this)
{
  ExtraContainerChanges *ExtraData; // eax

  ExtraData = (ExtraContainerChanges *)BaseExtraList_GetExtraData(this, kExtraData_InventoryChanges); /*0x41e6f2*/
  if ( ExtraData ) /*0x41e6f9*/
    return ExtraData->data; /*0x41e6fb*/
  else
    return 0; /*0x41e6ff*/
}
