// Builds an initial encoded key from live actor movement/weapon state and requested fixed group ID, then returns ActorAnimData_ResolveAnimKeyFallback's concrete playable key or sentinel 0x00FF when no ActorAnimData exists.
unsigned __int16 __thiscall Actor_LoadAnimGroup_(
        Actor *this,
        unsigned int groupID,
        EntryData *weaponEntryDataArg,
        unsigned int forceWeaponPrefix)
{
  int weaponPrefix; // ebp
  EntryData *weaponEntryData; // edi
  __int16 movementFlags; // ax
  unsigned __int16 initialKey; // ax
  int movementPrefix; // [esp+Ch] [ebp-8h]
  ActorAnimData *animData; // [esp+10h] [ebp-4h]

  weaponPrefix = 0; /*0x5e56a1*/
  animData = this->vtbl->super.super.GetAnimData(this); /*0x5e56a5*/
  if ( !animData ) /*0x5e56a9*/
    return 0xFF; /*0x5e56ac*/
  weaponEntryData = weaponEntryDataArg; /*0x5e56b8*/
  if ( !weaponEntryDataArg ) /*0x5e56be*/
    weaponEntryData = this->members.super.process->GetEquippedWeaponData(this->members.super.process, 1); /*0x5e56cf*/
  movementFlags = this->members.super.process->GetMovementFlags(this->members.super.process);// Movement prefix priority from process flags: Swimming 0x0800 -> 2, else Flying 0x2000 -> 3, else Sneaking 0x0400 -> 1, otherwise 0. /*0x5e56dc*/
  if ( (movementFlags & 0x800) != 0 )           // Swimming overrides Flying and Sneaking when building encoded animation-key movement bits. /*0x5e56ea*/
  {
    movementPrefix = 2; /*0x5e56ec*/
  }
  else if ( (movementFlags & 0x2000) != 0 )     // Flying is selected only when Swimming was not set; it overrides Sneaking. /*0x5e56fb*/
  {
    movementPrefix = 3; /*0x5e56fd*/
  }
  else
  {
    movementPrefix = (movementFlags & 0x400) != 0;// Sneaking supplies movement prefix 1 only when neither Swimming nor Flying was selected. /*0x5e570e*/
  }
  if ( !((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this) && this->vtbl->IsInCombat(this, 1) /*0x5e579d*/
    || ((int (__thiscall *)(Actor *))this->vtbl->Unk_9F)(this)
    && this->members.super.process->GetWeaponOut(this->members.super.process)
    || this == (Actor *)reference && reference->defaultAnimData
    || weaponEntryData
    && (weaponEntryDataArg
     || this->members.super.process->GetWeaponOut(this->members.super.process)
     || this->members.super.process->GetCombatMode(this->members.super.process))
    || (_BYTE)forceWeaponPrefix )
  {
    if ( !weaponEntryData || (_BYTE)forceWeaponPrefix ) /*0x5e57a5*/
      weaponPrefix = 1; /*0x5e57ba*/
    else
      weaponPrefix = *(_DWORD *)(4 * SLOBYTE(weaponEntryData->type[6].vtbl) + 0xB086B8);// For an equipped weapon entry, read TESObjectWEAP::type byte at form +0x90 and map types 0..5 through g_weaponTypeToAnimWeaponPrefix: 2,3,2,3,4,5. /*0x5e57b1*/
  }
  if ( this->members.super.process ) /*0x5e57bf*/
  {
    if ( this->members.super.process->GetEquippedShieldData(this->members.super.process, 1) ) /*0x5e57d7*/
    {                                           // With an equipped shield, BlockIdle (27) and BlockHit (28) force weapon prefix 0 before key construction.
      if ( (int)groupID >= 0x1B && (int)groupID <= 0x1C ) /*0x5e57e5*/
        weaponPrefix = 0; /*0x5e57e7*/
    }
    if ( this->members.super.process ) /*0x5e57e9*/
    {
      if ( weaponPrefix ) /*0x5e57f1*/
      {                                         // For TorchIdle through CastTouchAlt (groups 34..39), clear a nonzero weapon prefix when the weapon is not drawn or process virtual +0x138 reports true.
        if ( (int)groupID >= 0x22 /*0x5e5819*/
          && (int)groupID <= 0x27
          && (!this->members.super.process->GetWeaponOut(this->members.super.process)
           || this->members.super.process->Unk_4D(this->members.super.process)) )
        {
          weaponPrefix = 0; /*0x5e581f*/
        }
      }
    }
  }
  initialKey = AnimKey_Make(movementPrefix, weaponPrefix, groupID);// Compose group | (weaponPrefix << 8) | (movementPrefix << 12). Movement priority is Swim > Fly > Sneak; weapon type table values are Blade1H=2, Blade2H=3, Blunt1H=2, Blunt2H=3, Staff=4, Bow=5, subject to the group/state prefix-clearing gates above. /*0x5e5828*/
  return ActorAnimData_ResolveAnimKeyFallback(animData, initialKey, 0);// Native caller consumes the resolved fallback key, not necessarily the initially requested movement/weapon/group combination. /*0x5e56ab*/
}
