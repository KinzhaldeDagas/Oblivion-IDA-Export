// Verified player-scaled lock level calculation. This reads ExtraLockData.level as a signed byte; when flags bit 0x04 is set it adds PlayerCharacter::GetLevel() multiplied by GameSettingFloat fLeveledLockMult and clamps to 99. Fallout's REFR_LOCK::GetLevel accepts an owner reference and uses that reference's calculated level when non-null; Oblivion always uses global PlayerCharacter reference. This is a direct implementation divergence.
int __thiscall ExtraLockData_GetPlayerScaledLockLevel(ExtraLockData *this)
{
  int result; // eax
  int Level; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  result = (char)this->level; /*0x429997*/
  v3 = result; /*0x42999a*/
  if ( (this->flags & 4) != 0 ) /*0x42999e*/
  {
    Level = (unsigned __int16)Actor_GetLevel((Actor *)reference); /*0x4299ae*/
    result = Double_To_SInt32((double)Level * MEMORY[0xB33880].value + (double)v3); /*0x4299be*/
    if ( result > 0x63 ) /*0x4299c6*/
      return 0x63; /*0x4299c8*/
  }
  return result; /*0x4299cd*/
}
