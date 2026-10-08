double __cdecl Calc_SunDamage__(float a1, float a2, float a3, float a4, char a5, float a6, char a7)
{
  double v7; // st7
  double v8; // st6
  double v9; // st7
  float v11; // [esp+0h] [ebp-8h]
  float v12; // [esp+4h] [ebp-4h]
  float v13; // [esp+10h] [ebp+8h]
  float v14; // [esp+10h] [ebp+8h]
  float v15; // [esp+10h] [ebp+8h]
  float v17; // [esp+14h] [ebp+Ch]

  v7 = a2; /*0x548ec0*/
  v8 = a3; /*0x548ec7*/
  if ( a3 > (double)a2 || a4 < v7 ) /*0x548ee3*/
    return 0.0; /*0x548f9e*/
  if ( flt_A2F918 < v7 ) /*0x548ef6*/
    v8 = a4; /*0x548ef8*/
  v13 = (dbl_A2F910 - v7) / (dbl_A2F910 - v8); /*0x548f0c*/
  v14 = pow(v13, dbl_A3C800); /*0x548f1f*/
  v15 = 1.0 - v14; /*0x548f34*/
  v9 = 1.0; /*0x548f4e*/
  if ( a5 ) /*0x548f50*/
    v11 = 1.0; /*0x548f5d*/
  else
    v11 = flt_B37ED0[0x36]; /*0x548f58*/
  if ( a7 ) /*0x548f65*/
    v9 = flt_B37ED0[0x34]; /*0x548f69*/
  v17 = v9; /*0x548f6f*/
  v12 = (1.0 - flt_B37ED0[0x38]) * a6 + flt_B37ED0[0x38]; /*0x548f4a*/
  return (float)(flt_B37ED0[0x32] * a1 * v15 * v12 * v17 * v11); /*0x548f97*/
}
