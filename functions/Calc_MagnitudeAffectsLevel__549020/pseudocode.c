bool __cdecl Calc_MagnitudeAffectsLevel(int a1, float a2)
{
  float v3; // [esp+8h] [ebp+8h]

  v3 = fMagicLevelMagnitudeMult * a2;
  return (double)iMagnitudeLevelAffectsAll <= v3 || (double)a1 <= v3;
}
