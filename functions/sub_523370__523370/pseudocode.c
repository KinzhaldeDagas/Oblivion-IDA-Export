// Verified: after parent serialization, mask 0x200 writes 21 skill bytes at +0xEC. Mask 0x400 writes combatStyle(+0x1E4) FormID, or zero for NULL. Divergence within Oblivion: creature save 0x51DA50 dereferences combatStyle unconditionally.
void __thiscall TESNPC_SaveModified(TESNPC *self, ActorBaseSaveChangeMask changeMask)
{
  __int16 v2; // di
  TESCombatStyle *combatStyle; // eax

  v2 = changeMask; /*0x523372*/
  TESActorBase_SaveModified((TESActorBase *)self, changeMask); /*0x523379*/
  if ( (v2 & 0x200) != 0 ) /*0x523384*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, self->member.skillLevels, 0x15u); /*0x523391*/
  if ( (v2 & 0x400) != 0 ) /*0x52339c*/
  {
    combatStyle = self->member.combatStyle; /*0x52339e*/
    changeMask = 0; /*0x5233a6*/
    if ( combatStyle ) /*0x5233ae*/
      changeMask = *((_DWORD *)combatStyle + 3); /*0x5233b3*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)self, (const unsigned int *)&changeMask, 4u); /*0x5233c0*/
  }
}
