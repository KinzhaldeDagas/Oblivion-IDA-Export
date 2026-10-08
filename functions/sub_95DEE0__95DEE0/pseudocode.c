bool __cdecl sub_95DEE0(float a1, float *a2, float *a3, float *a4, float *a5)
{
  double v7; // st7
  double v9; // st6
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+14h] [ebp+8h]
  float v14; // [esp+14h] [ebp+8h]
  float v15; // [esp+14h] [ebp+8h]
  float v16; // [esp+14h] [ebp+8h]
  int v17; // [esp+14h] [ebp+8h]
  int v18; // [esp+14h] [ebp+8h]
  int v19; // [esp+1Ch] [ebp+10h]

  v13 = a4[9] * a2[2] + a4[8] * a2[1] + a4[0xA] * a2[3]; /*0x95df01*/
  v14 = v13 - a2[4]; /*0x95df0c*/
  *(float *)&v19 = -a4[0xE]; /*0x95df15*/
  v7 = v14; /*0x95df19*/
  if ( *(float *)&v19 <= (double)v14 ) /*0x95df28*/
    return 1; /*0x95df28*/
  v15 = a4[0xC] * a2[2] + a4[0xB] * a2[1] + a4[0xD] * a2[3]; /*0x95df4a*/
  v16 = v15 + v7; /*0x95df54*/
  v9 = v16; /*0x95df60*/
  if ( v16 >= (double)*(float *)&v19 ) /*0x95df65*/
    return 1; /*0x95df2c*/
  v10 = *a5 - *a3; /*0x95df74*/
  v11 = a5[1] - a3[1]; /*0x95df7e*/
  v12 = a5[2] - a3[2]; /*0x95df89*/
  *(float *)&v17 = a2[2] * v11 + v10 * a2[1] + a2[3] * v12; /*0x95dfa5*/
  if ( *(float *)&v17 <= 0.0 ) /*0x95dfb8*/
    return 0; /*0x95dfbc*/
  *(float *)&v18 = -(*(float *)&v17 * a1 + a4[0xE]); /*0x95dfcf*/
  return *(float *)&v18 <= v7 || v9 >= *(float *)&v18; /*0x95df30*/
}
