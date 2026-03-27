double __cdecl sub_547590(int a1, int a2, float a3)
{
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v5 = (double)a1 * fFatigueBlockSkillMult + fFatigueBlockSkillBase;
  v3 = v5;
  v6 = fFatigueBlockMult * a3 + fFatigueBlockBase;
  return (float)(v3 + v6);
}
