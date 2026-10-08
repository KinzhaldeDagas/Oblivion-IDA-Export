// Verified lock-data factory: returns the existing ExtraLockData payload or allocates a zeroed 12-byte payload, installs it in an ExtraLock wrapper, and returns it. An allocation failure leaves/sets a null-payload ExtraLock wrapper through ExtraDataList_SetLock.
ExtraLockData *__thiscall TESObjectREFR_GetOrCreateLockData(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // edi
  ExtraLockData *result; // eax
  ExtraLockData *v3; // eax
  ExtraLockData *v4; // esi

  p_baseExtraList = &this->member.baseExtraList; /*0x4dbdf1*/
  result = ExtraDataList_GetLock(&this->member.baseExtraList); /*0x4dbdf6*/
  if ( !result ) /*0x4dbdfd*/
  {
    v3 = (ExtraLockData *)FormHeapAlloc(0xCu); /*0x4dbe02*/
    if ( v3 ) /*0x4dbe0c*/
    {
      v4 = v3; /*0x4dbe0e*/
      v3->level = 0; /*0x4dbe13*/
      v3->key = 0; /*0x4dbe16*/
      v3->flags = 0; /*0x4dbe1d*/
      ExtraDataList_SetLock(p_baseExtraList, v3); /*0x4dbe21*/
      return v4; /*0x4dbe26*/
    }
    else
    {
      ExtraDataList_SetLock(p_baseExtraList, 0); /*0x4dbe30*/
      return 0; /*0x4dbe35*/
    }
  }
  return result; /*0x4dbe29*/
}
