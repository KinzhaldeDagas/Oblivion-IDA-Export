// Returns ExtraPackage's target TESObjectREFR pointer, or null.
BSExtraData *__thiscall ExtraDataList_GetPackageExtraTarget(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x41fb62*/
  if ( ExtraData ) /*0x41fb69*/
    return ExtraData[1].members.next; /*0x41fb6b*/
  else
    return 0; /*0x41fb6f*/
}
