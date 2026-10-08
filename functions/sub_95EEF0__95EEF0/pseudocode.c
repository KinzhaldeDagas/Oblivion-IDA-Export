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

  v51 = a4[1] * a2[1] + a4[2] * a2[2] + a4[3] * a2[3]; /*0x95ef12*/
  v12 = v51; /*0x95ef16*/
  if ( v51 <= dbl_AA3A10 ) /*0x95ef25*/
  {
    if ( -a4[4] < a2[4] ) /*0x95f06e*/
    {
      v37 = *a5 - *a3; /*0x95f103*/
      v43 = a5[1] - a3[1]; /*0x95f10d*/
      v49 = a5[2] - a3[2]; /*0x95f117*/
      v55 = a2[2] * v43 + a2[1] * v37 + a2[3] * v49; /*0x95f134*/
      v19 = v55; /*0x95f142*/
      if ( v55 <= 0.0 || v19 * a1 - a4[4] < a2[4] ) /*0x95f160*/
        return 0; /*0x95f202*/
      v56 = (a4[4] + a2[4]) / v19; /*0x95f172*/
      *a6 = v56; /*0x95f17a*/
      v16 = a7; /*0x95f184*/
      v28 = v56 * *a3; /*0x95f18c*/
      v30 = a3[1] * v56; /*0x95f195*/
      v32 = v56 * a3[2]; /*0x95f19c*/
      v20 = a2[4]; /*0x95f1ae*/
      v38 = a2[1] * v20; /*0x95f1b4*/
      v44 = a2[2] * v20; /*0x95f1bd*/
      v50 = v20 * a2[3]; /*0x95f1c4*/
      v22 = v38 + v28; /*0x95f1d0*/
      *a7 = v22; /*0x95f1dc*/
      v24 = v44 + v30; /*0x95f1e2*/
      a7[1] = v24; /*0x95f1ee*/
      v26 = v50 + v32; /*0x95f1f5*/
      v18 = v26; /*0x95f1f9*/
    }
    else
    {
      *a6 = 0.0; /*0x95f07a*/
      v16 = a7; /*0x95f07f*/
      v54 = a2[4] - a4[4]; /*0x95f086*/
      v36 = a2[1] * v54; /*0x95f097*/
      v42 = a2[2] * v54; /*0x95f0a4*/
      v17 = v54 * a2[3]; /*0x95f0a8*/
      *a7 = v36; /*0x95f0ab*/
      a7[1] = v42; /*0x95f0b1*/
      v48 = v17; /*0x95f0b4*/
      v18 = v48; /*0x95f0b8*/
    }
    v16[2] = v18; /*0x95f0c1*/
    if ( a8 ) /*0x95f0c4*/
    {
      *a10 = a2[1]; /*0x95f0cd*/
      a10[1] = a2[2]; /*0x95f0d2*/
      a10[2] = a2[3]; /*0x95f0d8*/
      *a9 = a4[1]; /*0x95f0e2*/
      a9[1] = a4[2]; /*0x95f0e7*/
      a9[2] = a4[3]; /*0x95f0ed*/
    }
    return 1; /*0x95f0f0*/
  }
  else
  {
    v52 = 1.0 / (1.0 - v12 * v12); /*0x95ef40*/
    v57 = (a2[4] - a4[4] * v12) * v52; /*0x95ef58*/
    v53 = (a4[4] - v12 * a2[4]) * v52; /*0x95ef68*/
    *a6 = 0.0; /*0x95ef6e*/
    v27 = a4[1] * v53; /*0x95ef81*/
    v29 = a4[2] * v53; /*0x95ef8a*/
    v31 = v53 * a4[3]; /*0x95ef91*/
    v21 = a2[1] * v57; /*0x95efa2*/
    v23 = a2[2] * v57; /*0x95efab*/
    v25 = v57 * a2[3]; /*0x95efb2*/
    v33 = v21 + v27; /*0x95efbe*/
    *a7 = v33; /*0x95efca*/
    v39 = v29 + v23; /*0x95efd0*/
    a7[1] = v39; /*0x95efdc*/
    v45 = v25 + v31; /*0x95efe3*/
    a7[2] = v45; /*0x95efeb*/
    if ( a8 ) /*0x95efee*/
    {
      v34 = -a2[1]; /*0x95eff9*/
      v40 = -a2[2]; /*0x95f002*/
      v13 = a2[3]; /*0x95f006*/
      *a9 = v34; /*0x95f00d*/
      v46 = -v13; /*0x95f015*/
      a9[1] = v40; /*0x95f019*/
      a9[2] = v46; /*0x95f020*/
      v35 = -a4[1]; /*0x95f02c*/
      v41 = -a4[2]; /*0x95f035*/
      v14 = -a4[3]; /*0x95f044*/
      *a10 = v35; /*0x95f046*/
      v47 = v14; /*0x95f048*/
      a10[1] = v41; /*0x95f050*/
      a10[2] = v47; /*0x95f053*/
    }
    return 1; /*0x95f056*/
  }
}
