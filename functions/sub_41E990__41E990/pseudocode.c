// Returns the byte stored in ExtraSeed, or 0xFF when no seed extra exists.
unsigned __int8 __thiscall ExtraDataList_GetSeedIndex(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Seed); /*0x41e992*/
  if ( ExtraData ) /*0x41e999*/
    return (unsigned __int8)ExtraData[1].vtbl; /*0x41e99e*/
  else
    return 0xFF; /*0x41e99b*/
}
