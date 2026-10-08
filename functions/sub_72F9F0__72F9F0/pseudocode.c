float *__cdecl sub_72F9F0(float *a1, float *a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7
  float v7; // [esp+8h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-10h]
  float v9; // [esp+14h] [ebp-8h]
  float v10; // [esp+18h] [ebp-4h]
  float v11; // [esp+24h] [ebp+8h]
  float v12; // [esp+24h] [ebp+8h]
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+24h] [ebp+8h]
  float v15; // [esp+24h] [ebp+8h]
  float v16; // [esp+24h] [ebp+8h]
  float v17; // [esp+24h] [ebp+8h]
  float v18; // [esp+24h] [ebp+8h]

  v11 = a2[2] * a2[2] + a2[1] * a2[1] + a2[3] * a2[3]; /*0x72fa11*/
  v12 = sqrt(v11); /*0x72fa1e*/
  v9 = v12; /*0x72fa26*/
  v10 = cos(v12); /*0x72fa30*/
  v13 = sin(v12); /*0x72fa34*/
  v3 = v13; /*0x72fa38*/
  v14 = fabs(v13); /*0x72fa40*/
  if ( flt_A7EAB0 <= (double)v14 ) /*0x72fa55*/
    v4 = v3 / v9; /*0x72fa5d*/
  else
    v4 = 1.0; /*0x72fa59*/
  v15 = v4; /*0x72fa61*/
  v5 = v15; /*0x72fa73*/
  v16 = a2[3] * v15; /*0x72fa75*/
  v8 = v16; /*0x72fa7d*/
  v17 = v5 * a2[2]; /*0x72fa86*/
  v7 = v17; /*0x72fa8e*/
  v18 = v5 * a2[1]; /*0x72fa9b*/
  sub_714C40(a1, v10, v18, v7, v8); /*0x72faae*/
  return a1; /*0x72fab5*/
}
