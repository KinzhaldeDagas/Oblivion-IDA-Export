void __thiscall sub_423970(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_HeadingTarget); /*0x423996*/
  if ( a2 ) /*0x4239a1*/
  {
    if ( ExtraData ) /*0x4239c7*/
    {
      ExtraData[1].vtbl = a2; /*0x4239c9*/
      return; /*0x4239dd*/
    }
  }
  else if ( ExtraData ) /*0x4239a5*/
  {
    BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x4239ac*/
    return; /*0x4239c2*/
  }
  v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x4239e2*/
  if ( v4 ) /*0x4239f8*/
    v5 = (BSExtraData *)sub_42AB10(v4, (int)a2); /*0x4239fd*/
  else
    v5 = 0; /*0x423a04*/
  BaseExtraList_AddExtra(this, v5); /*0x423a11*/
}
