// Replace ExtraAction flag byte. Default value 1 removes/omits the extra only when its companion action-state dword is zero; otherwise retain/update. This is the XACT consumer.
void __thiscall ExtraDataList_SetActionFlags(ExtraDataList *this, unsigned int flags)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x423da6*/
  if ( ExtraData ) /*0x423db1*/
  {
    if ( flags == 1 && !*(_DWORD *)&ExtraData[1].members.type ) /*0x423dd0*/
    {
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x423dda*/
      return; /*0x423dda*/
    }
  }
  else
  {
    if ( flags == 1 ) /*0x423db6*/
      return; /*0x423db6*/
    ExtraData = ExtraDataList_GetOrCreateAction(this); /*0x423dba*/
  }
  if ( ExtraData ) /*0x423dc1*/
    LOBYTE(ExtraData[1].vtbl) = flags; /*0x423dc3*/
}
