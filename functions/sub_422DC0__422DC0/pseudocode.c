double __thiscall sub_422DC0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  float v3; // [esp+0h] [ebp-4h]

  v3 = 0.0;
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_HaggleAmount);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  return v3;
}
