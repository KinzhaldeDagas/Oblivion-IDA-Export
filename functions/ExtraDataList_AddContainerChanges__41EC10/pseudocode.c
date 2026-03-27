void __thiscall ExtraDataList_AddContainerChanges(ExtraDataList *this, ExtraContainerChanges_Data *a2)
{
  ExtraContainerChanges *ExtraData; // eax
  ExtraContainerChanges *v4; // eax
  ExtraContainerChanges *v5; // eax

  if ( a2 )
  {
    ExtraData = (ExtraContainerChanges *)BaseExtraList_GetExtraData(this, kExtraData_InventoryChanges);
    if ( ExtraData )
    {
      ExtraData->data = a2;
    }
    else
    {
      v4 = (ExtraContainerChanges *)FormHeapAlloc(0x10u);
      if ( v4 )
        v5 = ExtraContainerChanges::ExtraContainerChanges(v4, (int)a2);
      else
        v5 = 0;
      BaseExtraList_AddExtra(this, &v5->super);
    }
  }
}
