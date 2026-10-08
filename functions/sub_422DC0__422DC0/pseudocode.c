double __thiscall sub_422DC0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  float v3; // [esp+0h] [ebp-4h]

  v3 = 0.0; /*0x422dc5*/
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_HaggleAmount); /*0x422dc9*/
  if ( ExtraData ) /*0x422dd0*/
    return *(float *)&ExtraData[1].vtbl; /*0x422dd5*/
  return v3; /*0x422ddc*/
}
