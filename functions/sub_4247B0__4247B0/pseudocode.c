void __thiscall sub_4247B0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell);
  if ( ExtraData )
  {
    if ( a2 )
      ExtraData[1].vtbl = a2;
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
  else if ( a2 )
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A2E0(v4, (int)a2);
    else
      v5 = 0;
    BaseExtraList_AddExtra(this, v5);
  }
}
