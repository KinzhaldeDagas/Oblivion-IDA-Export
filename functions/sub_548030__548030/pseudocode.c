double __cdecl sub_548030(int a1, float a2, float a3)
{
  double v3; // st7
  double v4; // st7
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]
  float v8; // [esp+8h] [ebp+8h]
  float v10; // [esp+Ch] [ebp+Ch]

  if ( LOBYTE(a2) )
    v3 = fSkillUseSpecMult;
  else
    v3 = 1.0;
  v8 = v3;
  if ( LOBYTE(a3) )
    v4 = fSkillUseMajorMult;
  else
    v4 = fSkillUseMinorMult;
  v10 = v4;
  v6 = (double)a1 * flt_B37D98;
  v7 = pow(v6, flt_B37D90);
  return (float)(v7 * v8 * v10);
}
