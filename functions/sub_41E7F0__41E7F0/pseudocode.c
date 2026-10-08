// Verified accessor: returns ExtraRank.rank as signed 32-bit; returns -1 when kExtraData_Rank is absent. Cell ownership compares this required rank against the actor's faction rank.
SInt32 __thiscall ExtraDataList_GetRank(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Rank); /*0x41e7f2*/
  if ( ExtraData ) /*0x41e7f9*/
    return (SInt32)ExtraData[1].vtbl; /*0x41e7fb*/
  else
    return 0xFFFFFFFF; /*0x41e7ff*/
}
