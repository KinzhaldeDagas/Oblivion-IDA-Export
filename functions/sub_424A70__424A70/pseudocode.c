void __thiscall sub_424A70(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraEnableStateChildren *v4; // eax
  BSExtraData *v5; // eax
  BSExtraData *v6; // eax

  if ( a2 ) /*0x424a9b*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateChildren); /*0x424aa4*/
    if ( !ExtraData ) /*0x424aa8*/
    {
      v4 = (ExtraEnableStateChildren *)FormHeapAlloc(0x14u); /*0x424aac*/
      if ( v4 ) /*0x424abe*/
        v5 = (BSExtraData *)ExtraEnableStateChildren::ExtraEnableStateChildren(v4); /*0x424ac2*/
      else
        v5 = 0; /*0x424ac9*/
      ExtraData = v5; /*0x424ad6*/
      BaseExtraList_AddExtra(this, v5); /*0x424ad8*/
    }
    v6 = ExtraData + 1; /*0x424ae0*/
    if ( ExtraData == (BSExtraData *)0xFFFFFFF4 ) /*0x424ae4*/
    {
LABEL_10:
      BSSimpleList_PushFront(&ExtraData[1].vtbl, (int)a2); /*0x424af1*/
    }
    else
    {
      while ( v6->vtbl != a2 ) /*0x424ae8*/
      {
        v6 = *(BSExtraData **)&v6->members.type; /*0x424aea*/
        if ( !v6 ) /*0x424aef*/
          goto LABEL_10; /*0x424aef*/
      }
    }
  }
}
