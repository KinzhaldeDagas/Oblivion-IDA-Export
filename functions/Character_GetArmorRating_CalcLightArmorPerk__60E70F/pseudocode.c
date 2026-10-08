// positive sp value has been detected, the output may be wrong!
double __usercall Character_GetArmorRating_::CalcLightArmorPerk@<st0>(int a1@<ebp>)
{
  double v3; // st7
  float v5; // [esp-4Ch] [ebp-4Ch]
  float v7; // [esp-48h] [ebp-48h]

  v3 = *(float *)(a1 + 0x108); /*0x60e70f*/
  v5 = *(float *)(a1 + 0x108); /*0x60e719*/
  if ( Actor_GetSkillMasteryLevel((Actor *)a1, kSkillAV_LightArmor) == kSkillMastery_Master /*0x60e742*/
    && !Actor_GetArmorCoverage((_BYTE *)a1, 1)  // Light Master minimum-coverage call: Actor_GetArmorCoverage(actor, heavy=0), compared with the weighted minimum at 0xB37260. Medium-only mastery should mirror this minimum-coverage gate after proving every worn armor form is Medium.
    && Actor_GetArmorCoverage((_BYTE *)a1, 0) >= SLODWORD(g_GameSettingStringPointers_B36CD8[0x162]) )
  {
    v3 = g_GameSettingStringPointers_B36CD8[0x160] * v5; /*0x60e74a*/
    v5 = v3; /*0x60e74e*/
  }
  Actor_GetArmorRating((void *)a1);             // Adds Actor_GetArmorRating(this), which is GetAVfCur(0x2B DefendBonus), to the worn-armor total before the fMaxArmorRating cap. /*0x60e754*/
  v7 = v3 + v5; /*0x60e75f*/
  if ( MEMORY[0xB37D20] <= 0.0 )                // Vanilla fMaxArmorRating cap branch. AVU jumps to the no-cap return so its wrapper can apply DR to worn armor + DefendBonus first, then reapply fMaxArmorRating. /*0x60e774*/
    return v7; /*0x60e7a9*/
  if ( v7 >= (double)MEMORY[0xB37D20] ) /*0x60e781*/
    return MEMORY[0xB37D20]; /*0x60e793*/
  else
    return (float)(v3 + v5); /*0x60e785*/
}
