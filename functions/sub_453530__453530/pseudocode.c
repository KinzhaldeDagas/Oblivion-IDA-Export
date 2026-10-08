// Verified: created-form predicate at 45353F gates adjustment; RTTI cast TESObjectREFR -> clear bit4/set bit2; RTTI cast TESObjectCELL -> OR6; otherwise preserves flags. Used by LoadForm 463930, LoadGame 465FEE/4664CD and save-side normalization 4535A0. Unknown broader meanings of flag bits outside these form-specific uses.
unsigned int __stdcall SaveLoad_AdjustCreatedFormChangeFlags(TESForm *form, unsigned int flags)
{
  unsigned int v2; // edi

  if ( !TESDataHandler_IsFormIDCreated_(form->member.refID) ) /*0x45353f*/
    return flags; /*0x453593*/
  v2 = flags; /*0x45355d*/
  if ( OblivionDynamicCast( /*0x453558*/
         form,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0) )
  {
    v2 = flags & 0xFFFFFFF9 | 2; /*0x45356b*/
  }
  if ( OblivionDynamicCast( /*0x45357d*/
         form,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectCELL `RTTI Type Descriptor',
         0) )
  {
    v2 |= 6u; /*0x453589*/
  }
  return v2; /*0x45358f*/
}
