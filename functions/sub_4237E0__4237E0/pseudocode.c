// Verified ExtraRank lifecycle writer: rank -1 removes the payload; every other signed 32-bit value updates or allocates ExtraRank. XRNK loading supplies a bounded 4-byte value into a zero-initialized local, so empty/short chunks become zero.
void __thiscall ExtraDataList_SetRank(ExtraDataList *this, SInt32 rank)
{
  BSExtraData *ExtraData; // eax
  ExtraRank *v4; // eax
  ExtraRank *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Rank); /*0x423806*/
  if ( ExtraData ) /*0x42380d*/
  {
    if ( rank == 0xFFFFFFFF ) /*0x423816*/
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x42381d*/
    else
      ExtraData[1].vtbl = (BSExtraDataVtbl *)rank; /*0x423836*/
  }
  else if ( rank != 0xFFFFFFFF ) /*0x423854*/
  {
    v4 = (ExtraRank *)FormHeapAlloc(0x10u); /*0x423858*/
    if ( v4 ) /*0x42386e*/
      v5 = ExtraRank_ctor(v4, rank); /*0x423873*/
    else
      v5 = 0; /*0x42387a*/
    BaseExtraList_AddExtra(this, &v5->super); /*0x423887*/
  }
}
