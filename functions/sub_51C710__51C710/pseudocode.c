// Verified: after TESActorBase_LoadModified, bit 0x200 loads combat/magic/stealth bytes +0x105..+0x107; bit 0x400 resolves loaded FormID and RTTI-casts TESForm to TESCombatStyle, storing at +0x118 only on successful cast. A failed resolution leaves the prior pointer unchanged. Fallout OLD LoadGame 0x8240B590 only shares the three-byte extension.
// Probable parameter naming: currentFlags is the second forwarded load argument (Oblivion calling convention verified; meaning suggested by Fallout aiCurrentFlags and matching parent/component chain). Higher-level policy remains Unknown.
void __thiscall TESCreature_LoadModified(
        TESCreature *self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  TESForm *v4; // eax
  TESCombatStyle *v5; // eax

  TESActorBase_LoadModified((TESActorBase *)self, changeMask, currentFlags); /*0x51c71e*/
  if ( (changeMask & 0x200) != 0 ) /*0x51c729*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->combatSkill, 1u); /*0x51c736*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->magicSkill, 1u); /*0x51c746*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &self->stealthSkill, 1u); /*0x51c756*/
  }
  if ( (changeMask & 0x400) != 0 ) /*0x51c761*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)self, &currentFlags, 4u); /*0x51c76c*/
    v4 = TESForm_LookupByFormID(currentFlags); /*0x51c784*/
    v5 = (TESCombatStyle *)OblivionDynamicCast( /*0x51c78d*/
                             v4,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             &TESCombatStyle `RTTI Type Descriptor',
                             0);
    if ( v5 ) /*0x51c797*/
      self->combatStyle = v5; /*0x51c799*/
  }
}
