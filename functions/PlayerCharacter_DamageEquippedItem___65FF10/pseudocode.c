// PlayerCharacter vtable +0x2C4 override. In god mode returns false without changing the equipped item; otherwise forwards EntryData, float damage, and suppression flag to Actor_DamageEquippedItem.
bool __thiscall PlayerCharacter_DamageEquippedItem(
        PlayerCharacter *this,
        EntryData *entry,
        float damage,
        bool suppressArmorSkillModifiers)
{
  return !g_godModeEnabled && Actor_DamageEquippedItem((Actor *)this, entry, damage, suppressArmorSkillModifiers); /*0x65ff1b*/
}
