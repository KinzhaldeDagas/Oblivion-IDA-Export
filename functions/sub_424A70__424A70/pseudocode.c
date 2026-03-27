void __thiscall sub_424A70(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // esi
  ExtraEnableStateChildren *v4; // eax
  BSExtraData *v5; // eax
  BSExtraData *v6; // eax

  if ( a2 )
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateChildren);
    if ( !ExtraData )
    {
      v4 = (ExtraEnableStateChildren *)FormHeapAlloc(0x14u);
      if ( v4 )
        v5 = (BSExtraData *)ExtraEnableStateChildren::ExtraEnableStateChildren(v4);
      else
        v5 = 0;
      ExtraData = v5;
      BaseExtraList_AddExtra(this, v5);
    }
    v6 = ExtraData + 1;
    if ( ExtraData == (BSExtraData *)0xFFFFFFF4 )
    {
LABEL_10:
      BSSimpleList_PushFront(&ExtraData[1].vtbl, (int)a2);
    }
    else
    {
      while ( v6->vtbl != a2 )
      {
        v6 = *(BSExtraData **)&v6->members.type;
        if ( !v6 )
          goto LABEL_10;
      }
    }
  }
}
