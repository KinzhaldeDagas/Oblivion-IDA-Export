// Verified singleton ExtraData_Seed behavior: signed byte 0xFF removes the extra; other bytes add or replace it. Combined with TESObjectTREE_GetIndexForSeed, this means an empty/missing tree seed entry cannot be persisted as a concrete per-reference seed.
void __thiscall ExtraDataList_SetOrRemoveTreeSeed(ExtraDataList *this, signed __int8 seed)
{
  BSExtraData *ExtraData; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Seed); /*0x423bf6*/
  if ( seed == (signed __int8)0xFF ) /*0x423c02*/
  {
    if ( ExtraData ) /*0x423c6b*/
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x423c72*/
  }
  else if ( ExtraData ) /*0x423c06*/
  {
    LOBYTE(ExtraData[1].vtbl) = seed; /*0x423c52*/
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u); /*0x423c0a*/
    if ( v4 ) /*0x423c20*/
      v5 = (BSExtraData *)sub_42A160(v4, seed); /*0x423c25*/
    else
      v5 = 0; /*0x423c2c*/
    BaseExtraList_AddExtra(this, v5); /*0x423c39*/
  }
}
