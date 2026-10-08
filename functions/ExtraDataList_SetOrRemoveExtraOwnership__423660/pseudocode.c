// Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
void __thiscall ExtraDataList::SetOrRemoveExtraOwnership(ExtraDataList *this, TESForm *owner)
{
  ExtraOwnership *ExtraData; // eax
  ExtraOwnership *v4; // eax
  ExtraOwnership *v5; // eax

  ExtraData = (ExtraOwnership *)BaseExtraList_GetExtraData(this, kExtraData_Ownership); /*0x423686*/
  if ( ExtraData ) /*0x42368d*/
  {
    if ( owner ) /*0x423695*/
      ExtraData->owner.ownerForm = owner; /*0x4236b5*/
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x42369c*/
  }
  else if ( owner ) /*0x4236d2*/
  {
    v4 = (ExtraOwnership *)FormHeapAlloc(0x10u); /*0x4236d6*/
    if ( v4 ) /*0x4236ec*/
      v5 = ExtraOwnership::ExtraOwnership(v4, owner); /*0x4236f1*/
    else
      v5 = 0; /*0x4236f8*/
    BaseExtraList_AddExtra(this, &v5->super); /*0x423705*/
  }
}
