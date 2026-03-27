float *__cdecl sub_6BE4D0(float a1, int a2, int a3, float *a4)
{
  unsigned int v4; // edi
  int *v5; // esi
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

  v4 = 0;
  v5 = (int *)(a2 + 0x14);
  do
  {
    if ( *v5 )
      v6 = sub_6BB270(a1, (float *)v5[7], v5[3], *v5, v5 + 0xA, *(_BYTE *)(v4 + a2 + 0x2C));
    else
      v6 = 0.0;
    v19[v4++] = v6;
    ++v5;
  }
  while ( v4 < 3 );
  v20 = v19[0] * dbl_A2FAA0;
  v16 = cos(v20);
  v17 = sin(v20);
  v13 = v19[1] * dbl_A2FAA0;
  v21 = cos(v13);
  v15 = sin(v13);
  v18 = v19[2] * dbl_A2FAA0;
  v12 = cos(v18);
  v14 = sin(v18);
  v8 = v14 * v15;
  v9 = v12 * v21;
  *a4 = v16 * v9 + v17 * v8;
  a4[1] = v9 * v17 - v8 * v16;
  v10 = v14 * v21;
  v11 = v15 * v12;
  a4[2] = v16 * v11 + v17 * v10;
  a4[3] = v10 * v16 - v17 * v11;
  return a4;
}
