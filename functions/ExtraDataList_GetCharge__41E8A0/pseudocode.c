double __thiscall ExtraDataList_GetCharge(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Charge);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  else
    return -1.0;
}
