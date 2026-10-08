void __thiscall sub_424B10(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // eax
  int v4; // edi
  BSExtraData *v5; // esi

  if ( a2 ) /*0x424b1a*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateChildren); /*0x424b1f*/
    v4 = (int)ExtraData; /*0x424b24*/
    if ( ExtraData ) /*0x424b28*/
    {
      v5 = ExtraData + 1; /*0x424b2b*/
      BSSimpleList_Remove((int *)&ExtraData[1], a2); /*0x424b31*/
      if ( !*(_DWORD *)(v4 + 0x10) && !v5->vtbl ) /*0x424b3c*/
        BaseExtraList_RemoveExtraByPtr(this, v4, 1); /*0x424b46*/
    }
  }
}
