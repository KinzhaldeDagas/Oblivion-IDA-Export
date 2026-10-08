bool __cdecl sub_96E4C0(float *a1, float *a2, float *a3)
{
  double v3; // st3
  double v5; // st7
  float v6; // [esp+0h] [ebp-1Ch]
  float v7; // [esp+4h] [ebp-18h]
  float v8; // [esp+8h] [ebp-14h]
  float v9; // [esp+18h] [ebp-4h]
  float v10; // [esp+20h] [ebp+4h]
  float v11; // [esp+20h] [ebp+4h]
  float v12; // [esp+20h] [ebp+4h]
  float v13; // [esp+20h] [ebp+4h]

  v9 = a1[0xB]; /*0x96e4e9*/
  v6 = *a2 - a1[8]; /*0x96e4ed*/
  v7 = a2[1] - a1[9]; /*0x96e4f7*/
  v8 = a2[2] - a1[0xA]; /*0x96e502*/
  v10 = v6 * v6 + v7 * v7 + v8 * v8; /*0x96e52d*/
  v11 = v10 - v9 * v9; /*0x96e539*/
  v3 = v11; /*0x96e53f*/
  if ( v11 <= 0.0 ) /*0x96e54a*/
    return 1; /*0x96e54e*/
  v12 = v8 * a3[2] + v6 * *a3 + v7 * a3[1]; /*0x96e578*/
  if ( v12 >= 0.0 ) /*0x96e589*/
    return 0; /*0x96e58d*/
  v5 = v12 * v12; /*0x96e59f*/
  v13 = a3[2] * a3[2] + *a3 * *a3 + a3[1] * a3[1]; /*0x96e5b3*/
  return v3 * v13 <= v5; /*0x96e558*/
}
