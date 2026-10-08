// Returns baseAttackDamage * fDamageToWeaponPercentage. The GameSetting storage is 0xB36E10, registered at 0x9E8C70; native default is 0.01. Return ABI is float.
float __cdecl Calc_WeaponConditionDamagePerShot(float baseAttackDamage)
{
  return g_GameSettingStringPointers_B36CD8[0x4E] * baseAttackDamage; /*0x547252*/
}
