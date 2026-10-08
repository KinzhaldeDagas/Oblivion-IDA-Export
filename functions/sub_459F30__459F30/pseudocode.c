signed int __thiscall sub_459F30(ChangesMap **this, TESObjectCELL *a2)
{
  if ( !a2 ) /*0x459f3a*/
    return 0; /*0x459f3a*/
  if ( !TESObjectCELL_IsInterior(a2) ) /*0x459f3e*/
  {
    PrintError( /*0x459f50*/
      "PurgeSavedDataForCell() can only be called on interiors, but it was just called on exterior cell %08X.",
      a2->members.super.refID);
    return 0; /*0x459f5c*/
  }
  return sub_459AF0(this, a2->members.super.refID, 1); /*0x459f58*/
}
