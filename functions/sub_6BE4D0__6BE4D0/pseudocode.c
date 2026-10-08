float *__cdecl sub_6BE4D0(float a1, int a2, int a3, float *a4)
{
  unsigned int v4; // edi
  int v5; // esi
  double v6; // st7
  double v8; // st6
  double v9; // st4
  double v10; // st7
  double v11; // st5
  float v12; // [esp+24h] [ebp-24h]
  float v13; // [esp+28h] [ebp-20h]
  float v14; // [esp+28h] [ebp-20h]
  float v15; // [esp+2Ch] [ebp-1Ch]
  float v16; // [esp+30h] [ebp-18h]
  float v17; // [esp+34h] [ebp-14h]
  float v18; // [esp+38h] [ebp-10h]
  float v19[3]; // [esp+3Ch] [ebp-Ch]
  float v20; // [esp+50h] [ebp+8h]
  float v21; // [esp+50h] [ebp+8h]

  v4 = 0; /*0x6be4da*/
  v5 = a2 + 0x14; /*0x6be4dc*/
  do /*0x6be51a*/
  {
    if ( *(_DWORD *)v5 ) /*0x6be4e0*/
      v6 = NiFloatKey_EvaluateTrack( /*0x6be505*/
             a1,
             (float *)*(_DWORD *)(v5 + 0x1C),
             *(_DWORD *)(v5 + 0xC),
             *(float *)v5,
             (int *)(v5 + 0x28),
             *(_BYTE *)(v4 + a2 + 0x2C));
    else
      v6 = 0.0; /*0x6be4e6*/
    v19[v4++] = v6; /*0x6be50d*/
    v5 += 4; /*0x6be514*/
  }
  while ( v4 < 3 ); /*0x6be51a*/
  v20 = v19[0] * dbl_A2FAA0; /*0x6be526*/
  v16 = cos(v20); /*0x6be530*/
  v17 = sin(v20); /*0x6be534*/
  v13 = v19[1] * dbl_A2FAA0; /*0x6be542*/
  v21 = cos(v13); /*0x6be54c*/
  v15 = sin(v13); /*0x6be550*/
  v18 = v19[2] * dbl_A2FAA0; /*0x6be55e*/
  v12 = cos(v18); /*0x6be568*/
  v14 = sin(v18); /*0x6be56c*/
  v8 = v14 * v15; /*0x6be583*/
  v9 = v12 * v21; /*0x6be588*/
  *a4 = v16 * v9 + v17 * v8; /*0x6be5a0*/
  a4[1] = v9 * v17 - v8 * v16; /*0x6be5b0*/
  v10 = v14 * v21; /*0x6be5b7*/
  v11 = v15 * v12; /*0x6be5bc*/
  a4[2] = v16 * v11 + v17 * v10; /*0x6be5c8*/
  a4[3] = v10 * v16 - v17 * v11; /*0x6be5d3*/
  return a4; /*0x6be5d6*/
}
