// Returns the TESObjectREFR stored in ExtraItemDropper type 0x41.
BSExtraDataVtbl *__thiscall ExtraDataList_GetItemDropper(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ItemDropper); /*0x4203c5*/
  if ( ExtraData ) /*0x4203cc*/
    return ExtraData[1].vtbl; /*0x4203ce*/
  else
    return 0; /*0x4203d3*/
}
