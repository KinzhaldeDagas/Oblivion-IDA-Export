void __thiscall sub_424C00(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  int v4; // edi
  BSExtraData *v5; // esi

  if ( a2 ) /*0x424c0a*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DroppedItemList); /*0x424c0f*/
    v4 = (int)ExtraData; /*0x424c14*/
    if ( ExtraData ) /*0x424c18*/
    {
      v5 = ExtraData + 1; /*0x424c1b*/
      BSSimpleList_Remove((int *)&ExtraData[1], a2); /*0x424c21*/
      if ( !*(_DWORD *)(v4 + 0x10) && !v5->vtbl ) /*0x424c2c*/
        BaseExtraList_RemoveExtraByPtr(this, v4, 1); /*0x424c36*/
    }
  }
}
