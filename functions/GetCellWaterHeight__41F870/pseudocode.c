double __thiscall GetCellWaterHeight(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_WaterHeight); /*0x41f872*/
  if ( ExtraData ) /*0x41f879*/
    return *(float *)&ExtraData[1].vtbl; /*0x41f87e*/
  else
    return 0.0; /*0x41f87b*/
}
