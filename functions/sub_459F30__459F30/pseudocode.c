signed int __thiscall sub_459F30(NiTMap_TESCELL **this, TESObjectCELL *a2)
{
  if ( !a2 )
    return 0;
  if ( !TESObjectCELL_IsInterior(a2) )
  {
    PrintError(
      "PurgeSavedDataForCell() can only be called on interiors, but it was just called on exterior cell %08X.",
      a2->members.super.refID);
    return 0;
  }
  return sub_459AF0(this, a2->members.super.refID, 1);
}
