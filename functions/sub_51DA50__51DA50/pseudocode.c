// Verified: after TESActorBase_SaveModified, bit 0x200 writes three single-byte fields +0x105/+0x106/+0x107 (combat/magic/stealth skill). Bit 0x400 writes FormID at combatStyle(+0x118)->+0xC through FormID serializer. No null check on combatStyle in this branch. Fallout OLD SaveGame 0x8240B518 lacks this 0x400 extension.
void __thiscall TESCreature_SaveModified(TESCreature *self, ActorBaseSaveChangeMask changeMask)
{
  __int16 v2; // di

  v2 = changeMask; /*0x51da52*/
  TESActorBase_SaveModified((TESActorBase *)self, changeMask); /*0x51da59*/
  if ( (v2 & 0x200) != 0 ) /*0x51da64*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->combatSkill, 1u); /*0x51da71*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->magicSkill, 1u); /*0x51da81*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &self->stealthSkill, 1u); /*0x51da91*/
  }
  if ( (v2 & 0x400) != 0 ) /*0x51da9c*/
  {
    changeMask = *((_DWORD *)self->combatStyle + 3); /*0x51daad*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)self, (const unsigned int *)&changeMask, 4u); /*0x51dab4*/
  }
}
