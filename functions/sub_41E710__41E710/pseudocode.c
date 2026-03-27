int __thiscall sub_41E710(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OriginalReference);
  if ( ExtraData )
    ExtraData[1].vtbl = a2;
  v4 = (_BYTE *)FormHeapAlloc(0x10u);
  if ( v4 )
    v5 = (BSExtraData *)sub_429DE0(v4, (int)a2);
  else
    v5 = 0;
  return BaseExtraList_AddExtra(this, v5);
}
