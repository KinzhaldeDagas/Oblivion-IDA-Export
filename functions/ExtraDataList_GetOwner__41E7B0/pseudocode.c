// Verified accessor: returns the owner TESForm pointer stored in the ExtraOwnership payload identified by kExtraData_Ownership, or null when absent. RTTI callers confirm TESNPC/TESFaction owner forms.
TESForm *__thiscall ExtraDataList_GetOwner(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Ownership); /*0x41e7b2*/
  if ( ExtraData ) /*0x41e7b9*/
    return (TESForm *)ExtraData[1].vtbl; /*0x41e7bb*/
  else
    return 0; /*0x41e7bf*/
}
