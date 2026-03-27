bool __cdecl sub_548330(int a1, signed int a2)
{
  int v3; // ecx
  float v4; // [esp+4h] [ebp-8h]

  if ( Calc_MasteryFromSkill(a1) >= 4 )
    return 0;
  v4 = Calc_LuckModifiedSkill(a1, a2) * fRepairSkillBreakMult + fRepairSkillBreakBase;
  if ( v3 >= 1 )
    v4 = fRepairBreakApprenticeMult * v4;
  return v4 > (double)(GetRandomLargeInteger_(0) % 0x64);
}
