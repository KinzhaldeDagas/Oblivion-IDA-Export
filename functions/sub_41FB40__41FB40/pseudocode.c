// Returns ExtraPackage's package index field, or zero when absent.
int __thiscall ExtraDataList_GetPackageExtraIndex(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x41fb42*/
  if ( ExtraData ) /*0x41fb49*/
    return *(_DWORD *)&ExtraData[1].members.type; /*0x41fb4b*/
  else
    return 0; /*0x41fb4f*/
}
