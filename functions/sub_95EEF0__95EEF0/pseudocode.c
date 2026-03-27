char __cdecl sub_95EEF0(
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
  float *v16; // eax
  double v17; // st7
  float v18; // esi
  double v19; // st7
  double v20; // st5
  float v21; // [esp+4h] [ebp-24h]
  float v22; // [esp+4h] [ebp-24h]
  float v23; // [esp+8h] [ebp-20h]
  float v24; // [esp+8h] [ebp-20h]
  float v25; // [esp+Ch] [ebp-1Ch]
  float v26; // [esp+Ch] [ebp-1Ch]
  float v27; // [esp+10h] [ebp-18h]
  float v28; // [esp+10h] [ebp-18h]
  float v29; // [esp+14h] [ebp-14h]
  float v30; // [esp+14h] [ebp-14h]
  float v31; // [esp+18h] [ebp-10h]
  float v32; // [esp+18h] [ebp-10h]
  float v33; // [esp+1Ch] [ebp-Ch]
  float v34; // [esp+1Ch] [ebp-Ch]
  float v35; // [esp+1Ch] [ebp-Ch]
  float v36; // [esp+1Ch] [ebp-Ch]
  float v37; // [esp+1Ch] [ebp-Ch]
  float v38; // [esp+1Ch] [ebp-Ch]
  float v39; // [esp+20h] [ebp-8h]
  float v40; // [esp+20h] [ebp-8h]
  float v41; // [esp+20h] [ebp-8h]
  float v42; // [esp+20h] [ebp-8h]
  float v43; // [esp+20h] [ebp-8h]
  float v44; // [esp+20h] [ebp-8h]
  float v45; // [esp+24h] [ebp-4h]
  float v46; // [esp+24h] [ebp-4h]
  float v47; // [esp+24h] [ebp-4h]
  float v48; // [esp+24h] [ebp-4h]
  float v49; // [esp+24h] [ebp-4h]
  float v50; // [esp+24h] [ebp-4h]
  float v51; // [esp+30h] [ebp+8h]
  float v52; // [esp+30h] [ebp+8h]
  float v53; // [esp+30h] [ebp+8h]
  float v54; // [esp+30h] [ebp+8h]
  float v55; // [esp+30h] [ebp+8h]
  float v56; // [esp+30h] [ebp+8h]
  float v57; // [esp+38h] [ebp+10h]

  v51 = a4[1] * a2[1] + a4[2] * a2[2] + a4[3] * a2[3];
  v12 = v51;
  if ( v51 <= dbl_AA3A10 )
  {
    if ( -a4[4] < a2[4] )
    {
      v37 = *a5 - *a3;
      v43 = a5[1] - a3[1];
      v49 = a5[2] - a3[2];
      v55 = a2[2] * v43 + a2[1] * v37 + a2[3] * v49;
      v19 = v55;
      if ( v55 <= 0.0 || v19 * a1 - a4[4] < a2[4] )
        return 0;
      v56 = (a4[4] + a2[4]) / v19;
      *a6 = v56;
      v16 = a7;
      v28 = v56 * *a3;
      v30 = a3[1] * v56;
      v32 = v56 * a3[2];
      v20 = a2[4];
      v38 = a2[1] * v20;
      v44 = a2[2] * v20;
      v50 = v20 * a2[3];
      v22 = v38 + v28;
      *a7 = v22;
      v24 = v44 + v30;
      a7[1] = v24;
      v26 = v50 + v32;
      v18 = v26;
    }
    else
    {
      *a6 = 0.0;
      v16 = a7;
      v54 = a2[4] - a4[4];
      v36 = a2[1] * v54;
      v42 = a2[2] * v54;
      v17 = v54 * a2[3];
      *a7 = v36;
      a7[1] = v42;
      v48 = v17;
      v18 = v48;
    }
    v16[2] = v18;
    if ( a8 )
    {
      *a10 = a2[1];
      a10[1] = a2[2];
      a10[2] = a2[3];
      *a9 = a4[1];
      a9[1] = a4[2];
      a9[2] = a4[3];
    }
    return 1;
  }
  else
  {
    v52 = 1.0 / (1.0 - v12 * v12);
    v57 = (a2[4] - a4[4] * v12) * v52;
    v53 = (a4[4] - v12 * a2[4]) * v52;
    *a6 = 0.0;
    v27 = a4[1] * v53;
    v29 = a4[2] * v53;
    v31 = v53 * a4[3];
    v21 = a2[1] * v57;
    v23 = a2[2] * v57;
    v25 = v57 * a2[3];
    v33 = v21 + v27;
    *a7 = v33;
    v39 = v29 + v23;
    a7[1] = v39;
    v45 = v25 + v31;
    a7[2] = v45;
    if ( a8 )
    {
      v34 = -a2[1];
      v40 = -a2[2];
      v13 = a2[3];
      *a9 = v34;
      v46 = -v13;
      a9[1] = v40;
      a9[2] = v46;
      v35 = -a4[1];
      v41 = -a4[2];
      v14 = -a4[3];
      *a10 = v35;
      v47 = v14;
      a10[1] = v41;
      a10[2] = v47;
    }
    return 1;
  }
}
