// Returns ExtraNorthRotation's float payload (type 0x4C), or 0.0.
float __thiscall ExtraDataList_GetNorthRotation(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_NorthRotation); /*0x420c42*/
  if ( ExtraData ) /*0x420c49*/
    return *(float *)&ExtraData[1].vtbl; /*0x420c4b*/
  else
    return 0.0; /*0x420c4f*/
}
