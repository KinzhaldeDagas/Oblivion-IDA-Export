// Test ExtraAction flag mask. Missing ExtraAction behaves as default flags byte 1. REFR save calls with 0x08 to decide whether to emit ONAM.
bool __thiscall ExtraDataList_TestActionFlagBits(ExtraDataList *this, unsigned int mask)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Action); /*0x41f832*/
  if ( ExtraData ) /*0x41f839*/
    LOBYTE(ExtraData) = (LOBYTE(ExtraData[1].vtbl) & mask) != 0; /*0x41f843*/
  else
    return (mask & 1) != 0; /*0x41f852*/
  return (char)ExtraData; /*0x41f846*/
}
