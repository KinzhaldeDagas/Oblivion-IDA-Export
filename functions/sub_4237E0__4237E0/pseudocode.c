void __thiscall sub_4237E0(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Rank);
  if ( ExtraData )
  {
    if ( a2 == (BSExtraDataVtbl *)0xFFFFFFFF )
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
    else
      ExtraData[1].vtbl = a2;
  }
  else if ( a2 != (BSExtraDataVtbl *)0xFFFFFFFF )
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)sub_429E40(v4, (int)a2);
    else
      v5 = 0;
    BaseExtraList_AddExtra(this, v5);
  }
}
