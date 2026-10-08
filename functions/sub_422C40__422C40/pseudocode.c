unsigned __int8 __thiscall sub_422C40(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_QuickKey); /*0x422c46*/
  if ( ExtraData ) /*0x422c4d*/
    return (unsigned __int8)ExtraData[1].vtbl; /*0x422c4f*/
  else
    return 0xFF; /*0x422c54*/
}
