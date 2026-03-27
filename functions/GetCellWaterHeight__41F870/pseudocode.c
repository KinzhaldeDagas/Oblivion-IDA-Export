double __thiscall GetCellWaterHeight(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_WaterHeight);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  else
    return 0.0;
}
