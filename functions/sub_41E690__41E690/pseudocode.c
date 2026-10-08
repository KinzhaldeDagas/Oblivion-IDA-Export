// Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
ExtraLockData *__thiscall ExtraDataList_GetLock(ExtraDataList *this)
{
  ExtraLock *ExtraData; // eax

  ExtraData = (ExtraLock *)BaseExtraList_GetExtraData(this, kExtraData_Lock); /*0x41e692*/
  if ( ExtraData ) /*0x41e699*/
    return ExtraData->lockData; /*0x41e69b*/
  else
    return 0; /*0x41e69f*/
}
