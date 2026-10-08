void __thiscall ExtraDataList_AddContainerChanges(ExtraDataList *this, ExtraContainerChanges_Data *a2)
{
  ExtraContainerChanges *ExtraData; // eax
  ExtraContainerChanges *v4; // eax
  ExtraContainerChanges *v5; // eax

  if ( a2 ) /*0x41ec3a*/
  {
    ExtraData = (ExtraContainerChanges *)BaseExtraList_GetExtraData(this, kExtraData_InventoryChanges); /*0x41ec3e*/
    if ( ExtraData ) /*0x41ec45*/
    {
      ExtraData->data = a2; /*0x41ec47*/
    }
    else
    {
      v4 = (ExtraContainerChanges *)FormHeapAlloc(0x10u); /*0x41ec60*/
      if ( v4 ) /*0x41ec76*/
        v5 = ExtraContainerChanges::ExtraContainerChanges(v4, a2); /*0x41ec7b*/
      else
        v5 = 0; /*0x41ec82*/
      BaseExtraList_AddExtra(this, &v5->super); /*0x41ec8f*/
    }
  }
}
