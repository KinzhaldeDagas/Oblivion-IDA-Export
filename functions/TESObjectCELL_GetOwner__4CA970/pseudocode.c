// Verified Oblivion getter: returns only the direct XOWN/ExtraOwnership form stored in the cell extra list at cell+8. Unlike Fallout TESObjectCELL::GetOwner, it does not fall back to an encounter-zone owner.
TESForm *__thiscall TESObjectCELL_GetOwner(TESObjectCELL *cell)
{
  return ExtraDataList_GetOwner(&cell->members.extraData);
}
