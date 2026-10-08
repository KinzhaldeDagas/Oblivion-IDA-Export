// Return the TESObjectREFR payload from ExtraReferencePointer type 0x22, or null. Provenance only: callers still select EntryData by exact TESForm first.
TESObjectREFR *__thiscall ExtraDataList_GetReferencePointer(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer); /*0x41fb02*/
  if ( ExtraData ) /*0x41fb09*/
    return (TESObjectREFR *)ExtraData[1].vtbl; /*0x41fb0b*/
  else
    return 0; /*0x41fb0f*/
}
