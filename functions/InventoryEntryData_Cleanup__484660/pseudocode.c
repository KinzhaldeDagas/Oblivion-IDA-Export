int __thiscall InventoryEntryData_Cleanup(ExtraDataList ***this)
{
  ExtraDataList **v2; // edi
  int v3; // ebx
  ExtraDataList *v4; // esi

  v2 = *this;
  v3 = 0;
  while ( v2 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    if ( !ExtraDataList_IsExtraDefaultForContainer(v4, 0) )
      ++v3;
    v2 = (ExtraDataList **)v2[1];
    if ( BaseExtraList_Count(v4) == 1 && ExtraDataList_GetExtraCount(v4) > 1 )
    {
      sub_41F620(v4);
      BSSimpleList_Remove(*this, (int)v4);
      if ( v4 )
        (*(void (__thiscall **)(ExtraDataList *, int))v4->vtbl)(v4, 1);
      v2 = *this;
      v3 = 0;
    }
  }
  return v3;
}
