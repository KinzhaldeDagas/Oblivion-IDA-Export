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

  v44 = a4[2] * a2[2] + a2[1] * a4[1] + a4[3] * a2[3]; /*0x95e271*/
  v45 = v44 - a2[4]; /*0x95e27c*/
  *(float *)&v49 = -a4[4]; /*0x95e285*/
  v12 = v45; /*0x95e289*/
  if ( *(float *)&v49 > (double)v45 ) /*0x95e298*/
  {
    v25 = *a5 - *a3; /*0x95e359*/
    v31 = a5[1] - a3[1]; /*0x95e363*/
    v37 = a5[2] - a3[2]; /*0x95e36d*/
    *(float *)&v46 = a2[1] * v25 + a2[2] * v31 + a2[3] * v37; /*0x95e38a*/
    if ( *(float *)&v46 <= 0.0 || *(float *)&v46 * a1 + v12 < *(float *)&v49 ) /*0x95e3bd*/
    {
      return 0; /*0x95e3a3*/
    }
    else
    {
      *a6 = -((v12 + a4[4]) / *(float *)&v46); /*0x95e3d6*/
      if ( a8 ) /*0x95e3d8*/
      {
        *a10 = a2[1]; /*0x95e3de*/
        a10[1] = a2[2]; /*0x95e3e3*/
        a10[2] = a2[3]; /*0x95e3e9*/
        v26 = -*a10; /*0x95e3f4*/
        v32 = -a10[1]; /*0x95e401*/
        v16 = a10[2]; /*0x95e405*/
        *a9 = v26; /*0x95e408*/
        a9[1] = v32; /*0x95e410*/
        v38 = -v16; /*0x95e413*/
        a9[2] = v38; /*0x95e41b*/
      }
      v47 = a4[4]; /*0x95e422*/
      v41 = v47 * *a10; /*0x95e42e*/
      v42 = a10[1] * v47; /*0x95e437*/
      v43 = v47 * a10[2]; /*0x95e442*/
      v48 = *a6; /*0x95e449*/
      v27 = *a5 * v48; /*0x95e459*/
      v33 = v48 * a5[1]; /*0x95e462*/
      v39 = v48 * a5[2]; /*0x95e46a*/
      v18 = v27 + a4[1]; /*0x95e475*/
      v20 = a4[2] + v33; /*0x95e47f*/
      v22 = a4[3] + v39; /*0x95e48a*/
      v28 = v18 + v41; /*0x95e495*/
      *a7 = v28; /*0x95e4a1*/
      v34 = v20 + v42; /*0x95e4a7*/
      a7[1] = v34; /*0x95e4b3*/
      v40 = v22 + v43; /*0x95e4ba*/
      a7[2] = v40; /*0x95e4c2*/
      return 1; /*0x95e4c5*/
    }
  }
  else
  {
    *a6 = 0.0; /*0x95e2ab*/
    v17 = a2[1] * v12; /*0x95e2b6*/
    v19 = a2[2] * v12; /*0x95e2be*/
    v21 = v12 * a2[3]; /*0x95e2c5*/
    v23 = a4[1] - v17; /*0x95e2cf*/
    v29 = a4[2] - v19; /*0x95e2da*/
    v13 = a4[3] - v21; /*0x95e2e5*/
    *a7 = v23; /*0x95e2e9*/
    a7[1] = v29; /*0x95e2ef*/
    v35 = v13; /*0x95e2f2*/
    a7[2] = v35; /*0x95e2fa*/
    if ( a8 ) /*0x95e2fd*/
    {
      *a10 = a2[1]; /*0x95e306*/
      a10[1] = a2[2]; /*0x95e30b*/
      a10[2] = a2[3]; /*0x95e311*/
      v24 = -*a10; /*0x95e318*/
      v30 = -a10[1]; /*0x95e325*/
      v14 = -a10[2]; /*0x95e334*/
      *a9 = v24; /*0x95e336*/
      v36 = v14; /*0x95e338*/
      a9[1] = v30; /*0x95e340*/
      a9[2] = v36; /*0x95e343*/
    }
    return 1; /*0x95e346*/
  }
}
