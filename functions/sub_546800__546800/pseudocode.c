// Calculates an attack desirability score from luck-modified skill, CombatStyle weights, target action-state flags, power/regular attack multiplier, and the attack-during-block multiplier.
float __cdecl CombatStyle_CalculateAttackScore(
        void *combatStyle,
        int skillValue,
        int luckValue,
        char usePowerAttack,
        float targetAttacking,
        float targetStaggered,
        float targetKnockedDown,
        char targetBlocking)
{
  double v8; // st7
  double v9; // st7
  float v12; // [esp+4h] [ebp-8h]
  double v13; // [esp+4h] [ebp-8h]
  float targetAttackinga; // [esp+20h] [ebp+14h]
  float targetStaggereda; // [esp+24h] [ebp+18h]
  float targetStaggeredb; // [esp+24h] [ebp+18h]
  float targetStaggeredc; // [esp+24h] [ebp+18h]
  float targetKnockedDowna; // [esp+28h] [ebp+1Ch]
  float targetKnockedDownb; // [esp+28h] [ebp+1Ch]
  float targetKnockedDownc; // [esp+28h] [ebp+1Ch]

  v8 = Calc_LuckModifiedSkill(skillValue, luckValue) / fCostant_100; /*0x546813*/
  v12 = v8; /*0x546825*/
  if ( LOBYTE(targetStaggered) ) /*0x546829*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)combatStyle + 0x110))(combatStyle); /*0x546835*/
  else
    v8 = 0.0; /*0x546839*/
  targetStaggereda = v8; /*0x546840*/
  if ( LOBYTE(targetKnockedDown) ) /*0x546844*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)combatStyle + 0x114))(combatStyle); /*0x546850*/
  else
    v8 = 0.0; /*0x546854*/
  targetKnockedDowna = v8; /*0x54685b*/
  if ( LOBYTE(targetAttacking) ) /*0x54685f*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)combatStyle + 0x118))(combatStyle); /*0x54686b*/
  else
    v8 = 0.0; /*0x54686f*/
  targetAttackinga = v8; /*0x546873*/
  v13 = sub_4AA030(combatStyle) * v12; /*0x546882*/
  *(float *)&v13 = sub_4AA070(combatStyle) + v13; /*0x546899*/
  targetStaggeredb = (double)(*(char (__thiscall **)(void *))(*(_DWORD *)combatStyle + 0x10C))(combatStyle) /*0x5468c1*/
                   + targetStaggereda
                   + targetKnockedDowna
                   + targetAttackinga
                   + *(float *)&v13;
  if ( usePowerAttack ) /*0x5468c5*/
    v9 = sub_4AA0B0(combatStyle); /*0x5468c7*/
  else
    v9 = sub_4AA130(combatStyle); /*0x5468ce*/
  targetKnockedDownb = v9; /*0x5468d8*/
  targetStaggeredc = targetKnockedDownb * targetStaggeredb; /*0x5468e4*/
  if ( targetBlocking ) /*0x5468e8*/
  {
    targetKnockedDownc = CombatStyle_GetAttackDuringBlockMult(combatStyle); /*0x5468f1*/
    return targetKnockedDownc * targetStaggeredc; /*0x5468fe*/
  }
  else
  {
    return (float)1.0 * targetStaggeredc; /*0x546919*/
  }
}
