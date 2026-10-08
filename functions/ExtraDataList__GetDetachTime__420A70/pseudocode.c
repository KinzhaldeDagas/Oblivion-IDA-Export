// Returns the uint32 payload of ExtraDetachTime (type 0x10), or zero when absent.
unsigned int __thiscall ExtraDataList_GetDetachTime(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DetachTime); /*0x420a72*/
  if ( ExtraData ) /*0x420a79*/
    return (unsigned int)ExtraData[1].vtbl; /*0x420a7b*/
  else
    return 0; /*0x420a7f*/
}
