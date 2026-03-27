void __thiscall sub_424B10(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  int v4; // edi
  BSExtraData *v5; // esi

  if ( a2 )
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateChildren);
    v4 = (int)ExtraData;
    if ( ExtraData )
    {
      v5 = ExtraData + 1;
      BSSimpleList_Remove(&ExtraData[1].vtbl, a2);
      if ( !*(_DWORD *)(v4 + 0x10) && !v5->vtbl )
        BaseExtraList_RemoveExtraByPtr(this, v4, 1);
    }
  }
}
