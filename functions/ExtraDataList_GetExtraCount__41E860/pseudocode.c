signed __int16 __thiscall ExtraDataList_GetExtraCount(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Count); /*0x41e862*/
  if ( ExtraData ) /*0x41e869*/
    return (signed __int16)ExtraData[1].vtbl; /*0x41e86b*/
  else
    return 1; /*0x41e870*/
}
