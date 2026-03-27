// positive sp value has been detected, the output may be wrong!
double __usercall Character_GetArmorRating_::CalcLightArmorPerk@<st0>(int a1@<ebx>, int a2@<ebp>, int a3@<edi>)
{
  double v3; // st7
  float v5; // [esp-4Ch] [ebp-4Ch]
  float v7; // [esp-48h] [ebp-48h]

  v3 = *(float *)(a2 + 0x108);
  v5 = *(float *)(a2 + 0x108);
  if ( Actor_GetSkillMasteryLevel((int *)a2, a1, a3, 0x1B) == 4
    && !Actor_GetArmorCoverage((_BYTE *)a2, 1)
    && Actor_GetArmorCoverage((_BYTE *)a2, 0) >= iPerkLightArmorMasterMinSum )
  {
    v3 = fPerkLightArmorMasterRatingMult * v5;
    v5 = v3;
  }
  Actor_GetArmorRating((void *)a2);
  v7 = v3 + v5;
  if ( fMaxArmorRating <= 0.0 )
    return v7;
  if ( v7 >= (double)fMaxArmorRating )
    return fMaxArmorRating;
  else
    return (float)(v3 + v5);
}
