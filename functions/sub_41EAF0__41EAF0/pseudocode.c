// Verified ExtraLock lifecycle setter: if type 0x31 exists, frees its old ExtraLockData payload and replaces it; otherwise allocates a 16-byte ExtraLock wrapper, constructs it with the supplied 12-byte ExtraLockData*, and adds it to ExtraDataList.
ExtraLock *__thiscall ExtraDataList_SetLock(ExtraDataList *this, ExtraLockData *lockData)
{
  ExtraLock *ExtraData; // esi
  ExtraLock *v4; // eax

  ExtraData = (ExtraLock *)BaseExtraList_GetExtraData(this, kExtraData_Lock); /*0x41eb1c*/
  if ( ExtraData ) /*0x41eb20*/
  {
    FormHeapFree((unsigned int)ExtraData->lockData); /*0x41eb26*/
    ExtraData->lockData = lockData; /*0x41eb32*/
  }
  else
  {
    v4 = (ExtraLock *)FormHeapAlloc(0x10u); /*0x41eb39*/
    if ( v4 ) /*0x41eb4f*/
      ExtraData = ExtraLock_ctor(v4, lockData); /*0x41eb5d*/
    else
      ExtraData = 0; /*0x41eb61*/
    BaseExtraList_AddExtra(this, &ExtraData->super); /*0x41eb6e*/
  }
  return ExtraData; /*0x41eb75*/
}
