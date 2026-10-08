void __thiscall sub_424B60(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraDroppedItemList *v4; // eax
  BSExtraData *v5; // eax
  BSExtraData *v6; // eax

  if ( a2 ) /*0x424b8b*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList); /*0x424b94*/
    if ( !ExtraData ) /*0x424b98*/
    {
      v4 = (ExtraDroppedItemList *)FormHeapAlloc(0x14u); /*0x424b9c*/
      if ( v4 ) /*0x424bae*/
        v5 = (BSExtraData *)ExtraDroppedItemList::ExtraDroppedItemList(v4); /*0x424bb2*/
      else
        v5 = 0; /*0x424bb9*/
      ExtraData = v5; /*0x424bc6*/
      BaseExtraList_AddExtra(this, v5); /*0x424bc8*/
    }
    v6 = ExtraData + 1; /*0x424bd0*/
    if ( ExtraData == (BSExtraData *)0xFFFFFFF4 ) /*0x424bd4*/
    {
LABEL_10:
      BSSimpleList_PushFront(&ExtraData[1].vtbl, (int)a2); /*0x424be1*/
    }
    else
    {
      while ( v6->vtbl != a2 ) /*0x424bd8*/
      {
        v6 = *(BSExtraData **)&v6->members.type; /*0x424bda*/
        if ( !v6 ) /*0x424bdf*/
          goto LABEL_10; /*0x424bdf*/
      }
    }
  }
}
