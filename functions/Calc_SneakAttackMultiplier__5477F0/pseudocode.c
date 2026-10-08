// Returns the Oblivion sneak-attack damage multiplier. Weapon types -1, 0, and 2 use the melee mastery settings; type 5 uses Marksman mastery settings; unsupported types remain 1.0. Mastery indices 0..4 select Novice through Master game settings.
float __cdecl Calc_SneakAttackDamageMultiplier(int masteryLevel, int weaponType)
{
  double v2; // st7

  v2 = 1.0; /*0x5477f1*/
  if ( weaponType == 0xFFFFFFFF || !weaponType || weaponType == 2 ) /*0x547806*/
  {
    Calc_SneakAttackMultiplier_::SetMelee(); /*0x5477fd*/
  }
  else if ( weaponType == 5 ) /*0x54780d*/
  {
    switch ( masteryLevel ) /*0x547822*/
    {
      case 0: /*0x547822*/
        v2 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x19A]); /*0x547854*/
        break; /*0x547858*/
      case 1: /*0x547822*/
        v2 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x19E]); /*0x547880*/
        break; /*0x547884*/
      case 2: /*0x547822*/
        v2 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x1A2]); /*0x5478ac*/
        break; /*0x5478b0*/
      case 3: /*0x547822*/
        v2 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x1A6]); /*0x5478d8*/
        break; /*0x5478dc*/
      case 4: /*0x547822*/
        v2 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x1AA]); /*0x5478f0*/
        Calc_SneakAttackMultiplier_::Retn(); /*0x5478f3*/
        break; /*0x5478f3*/
      default:
        JUMPOUT(0x5478F5); /*0x5478f5*/
    }
  }
  else
  {
    Calc_SneakAttackMultiplier_::Done(); /*0x54780d*/
  }
  return v2; /*0x547844*/
}
