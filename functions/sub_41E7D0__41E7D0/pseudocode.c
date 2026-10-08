// Verified accessor: returns the TESGlobal* in ExtraGlobal (extra type 0x28/XGLB), or null if the extra is absent.
TESGlobal *__thiscall ExtraDataList_GetGlobal(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Global); /*0x41e7d2*/
  if ( ExtraData ) /*0x41e7d9*/
    return (TESGlobal *)ExtraData[1].vtbl; /*0x41e7db*/
  else
    return 0; /*0x41e7df*/
}
