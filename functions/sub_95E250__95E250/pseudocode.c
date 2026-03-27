char __cdecl sub_95E250(
        float a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        char a8,
        float *a9,
        float *a10)
{
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v16; // st7
  float v17; // [esp+0h] [ebp-24h]
  float v18; // [esp+0h] [ebp-24h]
  float v19; // [esp+4h] [ebp-20h]
  float v20; // [esp+4h] [ebp-20h]
  float v21; // [esp+8h] [ebp-1Ch]
  float v22; // [esp+8h] [ebp-1Ch]
  float v23; // [esp+Ch] [ebp-18h]
  float v24; // [esp+Ch] [ebp-18h]
  float v25; // [esp+Ch] [ebp-18h]
  float v26; // [esp+Ch] [ebp-18h]
  float v27; // [esp+Ch] [ebp-18h]
  float v28; // [esp+Ch] [ebp-18h]
  float v29; // [esp+10h] [ebp-14h]
  float v30; // [esp+10h] [ebp-14h]
  float v31; // [esp+10h] [ebp-14h]
  float v32; // [esp+10h] [ebp-14h]
  float v33; // [esp+10h] [ebp-14h]
  float v34; // [esp+10h] [ebp-14h]
  float v35; // [esp+14h] [ebp-10h]
  float v36; // [esp+14h] [ebp-10h]
  float v37; // [esp+14h] [ebp-10h]
  float v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+14h] [ebp-10h]
  float v40; // [esp+14h] [ebp-10h]
  float v41; // [esp+18h] [ebp-Ch]
  float v42; // [esp+1Ch] [ebp-8h]
  float v43; // [esp+20h] [ebp-4h]
  float v44; // [esp+2Ch] [ebp+8h]
  float v45; // [esp+2Ch] [ebp+8h]
  int v46; // [esp+2Ch] [ebp+8h]
  float v47; // [esp+2Ch] [ebp+8h]
  float v48; // [esp+2Ch] [ebp+8h]
  int v49; // [esp+34h] [ebp+10h]

  v44 = a4[2] * a2[2] + a2[1] * a4[1] + a4[3] * a2[3];
  v45 = v44 - a2[4];
  *(float *)&v49 = -a4[4];
  v12 = v45;
  if ( *(float *)&v49 > (double)v45 )
  {
    v25 = *a5 - *a3;
    v31 = a5[1] - a3[1];
    v37 = a5[2] - a3[2];
    *(float *)&v46 = a2[1] * v25 + a2[2] * v31 + a2[3] * v37;
    if ( *(float *)&v46 <= 0.0 || *(float *)&v46 * a1 + v12 < *(float *)&v49 )
    {
      return 0;
    }
    else
    {
      *a6 = -((v12 + a4[4]) / *(float *)&v46);
      if ( a8 )
      {
        *a10 = a2[1];
        a10[1] = a2[2];
        a10[2] = a2[3];
        v26 = -*a10;
        v32 = -a10[1];
        v16 = a10[2];
        *a9 = v26;
        a9[1] = v32;
        v38 = -v16;
        a9[2] = v38;
      }
      v47 = a4[4];
      v41 = v47 * *a10;
      v42 = a10[1] * v47;
      v43 = v47 * a10[2];
      v48 = *a6;
      v27 = *a5 * v48;
      v33 = v48 * a5[1];
      v39 = v48 * a5[2];
      v18 = v27 + a4[1];
      v20 = a4[2] + v33;
      v22 = a4[3] + v39;
      v28 = v18 + v41;
      *a7 = v28;
      v34 = v20 + v42;
      a7[1] = v34;
      v40 = v22 + v43;
      a7[2] = v40;
      return 1;
    }
  }
  else
  {
    *a6 = 0.0;
    v17 = a2[1] * v12;
    v19 = a2[2] * v12;
    v21 = v12 * a2[3];
    v23 = a4[1] - v17;
    v29 = a4[2] - v19;
    v13 = a4[3] - v21;
    *a7 = v23;
    a7[1] = v29;
    v35 = v13;
    a7[2] = v35;
    if ( a8 )
    {
      *a10 = a2[1];
      a10[1] = a2[2];
      a10[2] = a2[3];
      v24 = -*a10;
      v30 = -a10[1];
      v14 = -a10[2];
      *a9 = v24;
      v36 = v14;
      a9[1] = v30;
      a9[2] = v36;
    }
    return 1;
  }
}
