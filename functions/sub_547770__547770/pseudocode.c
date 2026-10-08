// ODismemberment combat decode: maps hit/death damage magnitude into a force scalar using fDeathForceDamageMin/Max and fDeathForceForceMin/Max.
double __cdecl Calc_DeathForceFromDamage(float a1)
{
  double v1; // st7
  double v2; // st7
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]

  v4 = fabs(a1); /*0x547776*/
  v5 = (v4 - MEMORY[0xB371F0]) / (MEMORY[0xB371F8] - MEMORY[0xB371F0]); /*0x547790*/
  v1 = 0.0; /*0x547794*/
  if ( v5 > 0.0 ) /*0x5477a1*/
    v1 = v5; /*0x5477a3*/
  v6 = v1; /*0x5477a9*/
  v2 = v6; /*0x5477ad*/
  if ( v6 > dbl_A2F928 ) /*0x5477bc*/
    v2 = 1.0; /*0x5477c0*/
  v7 = v2; /*0x5477c2*/
  return (float)((MEMORY[0xB371E8] - MEMORY[0xB371E0]) * v7 + MEMORY[0xB371E0]); /*0x5477e6*/
}
