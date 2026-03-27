char __thiscall sub_420F20(ExtraDataList *this, BSExtraDataVtbl *a2, float a3, char a4, BSExtraDataVtbl *a5)
{
  BSExtraData *ExtraData; // esi
  float *v7; // eax
  float *v8; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersuasionPercent);
  if ( !ExtraData )
  {
    v7 = (float *)FormHeapAlloc(0x1Cu);
    if ( v7 )
      v8 = sub_42A6E0(v7);
    else
      v8 = 0;
    ExtraData = (BSExtraData *)v8;
    BaseExtraList_AddExtra(this, (BSExtraData *)v8);
  }
  ExtraData[1].vtbl = a2;
  LOBYTE(ExtraData[1].members.next) = a4;
  *(float *)&ExtraData[1].members.type = a3;
  ExtraData[2].vtbl = a5;
  return a4;
}
