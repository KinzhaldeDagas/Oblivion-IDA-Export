// Verified: mask 0x200 loads 21 skills at +0xEC; mask 0x400 loads/resolves FormID, RTTI-casts to TESCombatStyle and unconditionally stores result at +0x1E4. Unlike creature load 0x51C710, failure clears the pointer. Recomputes base vampirism except for formID 7.
// Probable parameter naming: currentFlags is the second forwarded load argument (Oblivion calling convention verified; meaning suggested by Fallout aiCurrentFlags and matching parent/component chain). Higher-level policy remains Unknown.
void __thiscall TESNPC_LoadModifiedForm(TESNPC *self, ActorBaseSaveChangeMask changeMask, unsigned int currentFlags)
{
  TESForm *v4; // eax

  TESActorBase_LoadModified((TESActorBase *)self, changeMask, currentFlags); /*0x52538e*/
  if ( (changeMask & 0x200) != 0 ) /*0x525399*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, self->member.skillLevels, 0x15u); /*0x5253a6*/
  if ( (changeMask & 0x400) != 0 ) /*0x5253b1*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)self, &currentFlags, 4u); /*0x5253bc*/
    v4 = TESForm_LookupByFormID(currentFlags); /*0x5253d4*/
    self->member.combatStyle = (TESCombatStyle *)OblivionDynamicCast( /*0x5253e5*/
                                                   v4,
                                                   0,
                                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                   &TESCombatStyle `RTTI Type Descriptor',
                                                   0);
  }
  if ( self->member.super.super.super.refID != 7 ) /*0x5253ef*/
    TESNPC_RecomputeBaseVampirismFromSpells((int *)self); /*0x5253f3*/
}
