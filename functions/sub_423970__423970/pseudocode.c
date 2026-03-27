void __thiscall sub_423970(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_HeadingTarget);
  if ( a2 )
  {
    if ( ExtraData )
    {
      ExtraData[1].vtbl = a2;
      return;
    }
  }
  else if ( ExtraData )
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
    return;
  }
  v4 = (_BYTE *)FormHeapAlloc(0x10u);
  if ( v4 )
    v5 = (BSExtraData *)sub_42AB10(v4, (int)a2);
  else
    v5 = 0;
  BaseExtraList_AddExtra(this, v5);
}
