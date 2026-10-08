int __cdecl sub_978770(
        float *a1,
        float *a2,
        float **a3,
        float *a4,
        float a5,
        float *a6,
        float a7,
        float *a8,
        float *a9)
{
  float *v9; // esi
  float *v10; // edi
  float *v11; // edx
  double v12; // st6
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st7
  double v18; // st5
  double v19; // st5
  double v20; // st4
  double v21; // st7
  double v22; // st7
  double v23; // st4
  double v24; // st3
  double v25; // st7
  double v26; // st7
  float v27; // edx
  float v28; // ecx
  float v29; // [esp+28h] [ebp-3Ch]
  float v30; // [esp+28h] [ebp-3Ch]
  float v31; // [esp+28h] [ebp-3Ch]
  float v32; // [esp+28h] [ebp-3Ch]
  float v33; // [esp+28h] [ebp-3Ch]
  float v34; // [esp+28h] [ebp-3Ch]
  float v35; // [esp+28h] [ebp-3Ch]
  float v36; // [esp+28h] [ebp-3Ch]
  float v37; // [esp+28h] [ebp-3Ch]
  float v38; // [esp+28h] [ebp-3Ch]
  float v39; // [esp+28h] [ebp-3Ch]
  float v40; // [esp+28h] [ebp-3Ch]
  int v41; // [esp+2Ch] [ebp-38h] BYREF
  int v42; // [esp+30h] [ebp-34h] BYREF
  int v43; // [esp+34h] [ebp-30h] BYREF
  float v44; // [esp+38h] [ebp-2Ch]
  float v45; // [esp+3Ch] [ebp-28h]
  int v46; // [esp+40h] [ebp-24h] BYREF
  float v47; // [esp+44h] [ebp-20h]
  float v48; // [esp+48h] [ebp-1Ch]
  float v49; // [esp+4Ch] [ebp-18h] BYREF
  float v50; // [esp+50h] [ebp-14h]
  float v51; // [esp+54h] [ebp-10h]
  float v52; // [esp+58h] [ebp-Ch] BYREF
  float v53; // [esp+5Ch] [ebp-8h]
  float v54; // [esp+60h] [ebp-4h]

  if ( !sub_977DF0(a7, a4, a5, a6, a1, a2, (float *)&v41, (float *)&v43, (float *)&v42, (float *)&v46) ) /*0x9787b5*/
    return 0; /*0x9787b5*/
  v9 = a3[1]; /*0x9787c3*/
  v10 = *a3; /*0x9787c7*/
  sub_977C60(*a3, v9, a3[2], (float *)&v43, &v52); /*0x9787d6*/
  sub_977C60(v10, v9, v11, (float *)&v46, &v49); /*0x9787e8*/
  v12 = v52; /*0x9787ef*/
  if ( v52 < 0.0 ) /*0x9787ff*/
  {
    if ( v49 < 0.0 ) /*0x978810*/
      return 0; /*0x97881d*/
    v29 = v12 / (v12 - v49); /*0x978822*/
    v14 = v29; /*0x978825*/
    v15 = 1.0 - v29; /*0x97882c*/
    v30 = v50 * v29 + v53 * v15; /*0x97883c*/
    if ( v30 >= 0.0 ) /*0x978849*/
    {
      v31 = v51 * v14 + v54 * v15; /*0x97885d*/
      if ( v31 >= 0.0 ) /*0x97886c*/
      {
        v32 = v14 * *(float *)&v42 + *(float *)&v41 * v15; /*0x978884*/
        if ( *a8 > (double)v32 ) /*0x978893*/
        {
          *a8 = v32; /*0x978899*/
          v49 = *(float *)&v46 * v14; /*0x9788a5*/
          v50 = v47 * v14; /*0x9788af*/
          v51 = v14 * v48; /*0x9788b7*/
          *(float *)&v42 = v15; /*0x9788bb*/
          v52 = *(float *)&v43 * *(float *)&v42; /*0x9788cd*/
          v53 = v44 * *(float *)&v42; /*0x9788d7*/
          v54 = *(float *)&v42 * v45; /*0x9788df*/
          *(float *)&v46 = v52 + v49; /*0x9788eb*/
          v16 = v53; /*0x9788f3*/
          *a9 = *(float *)&v46; /*0x9788f7*/
          v47 = v16 + v50; /*0x9788fd*/
          v17 = v54; /*0x978905*/
          a9[1] = v47; /*0x978909*/
          v48 = v17 + v51; /*0x978910*/
          a9[2] = v48; /*0x978918*/
          return 1; /*0x978923*/
        }
        return 1; /*0x978893*/
      }
    }
    return 0; /*0x97886c*/
  }
  v18 = v53; /*0x978933*/
  if ( v53 < 0.0 ) /*0x97893e*/
  {
    if ( v50 >= 0.0 ) /*0x97894f*/
    {
      v33 = v18 / (v18 - v50); /*0x978959*/
      v19 = v33; /*0x97895c*/
      v20 = 1.0 - v33; /*0x978963*/
      v34 = v33 * v49 + v12 * v20; /*0x978973*/
      if ( v34 < 0.0 ) /*0x978980*/
        return 0; /*0x978980*/
      v35 = v51 * v19 + v54 * v20; /*0x978994*/
      if ( v35 < 0.0 ) /*0x9789a3*/
        return 0; /*0x9789a3*/
      v36 = v19 * *(float *)&v42 + *(float *)&v41 * v20; /*0x9789bb*/
      if ( *a8 > (double)v36 ) /*0x9789ca*/
      {
        *a8 = v36; /*0x9789d0*/
        v49 = *(float *)&v46 * v19; /*0x9789dc*/
        v50 = v47 * v19; /*0x9789e6*/
        v51 = v19 * v48; /*0x9789f2*/
        *(float *)&v42 = v20; /*0x9789f6*/
        v52 = *(float *)&v43 * *(float *)&v42; /*0x978a08*/
        v53 = v44 * *(float *)&v42; /*0x978a12*/
        v54 = *(float *)&v42 * v45; /*0x978a1a*/
        *(float *)&v46 = v52 + v49; /*0x978a26*/
        v21 = v53; /*0x978a2e*/
        *a9 = *(float *)&v46; /*0x978a32*/
        v47 = v21 + v50; /*0x978a38*/
        v22 = v54; /*0x978a40*/
        a9[1] = v47; /*0x978a44*/
        v48 = v22 + v51; /*0x978a4b*/
        a9[2] = v48; /*0x978a53*/
        return 1; /*0x978a5e*/
      }
      return 1; /*0x9789ca*/
    }
    return 0; /*0x97894f*/
  }
  if ( v54 >= 0.0 ) /*0x978a79*/
  {
    if ( *a8 <= (double)*(float *)&v41 ) /*0x978bcd*/
      return 1; /*0x978932*/
    *a8 = *(float *)&v41; /*0x978bd7*/
    v27 = v44; /*0x978bdd*/
    *a9 = *(float *)&v43; /*0x978be1*/
    v28 = v45; /*0x978be3*/
    a9[1] = v27; /*0x978be7*/
    a9[2] = v28; /*0x978bea*/
    return 1; /*0x978bed*/
  }
  else
  {
    if ( v51 < 0.0 ) /*0x978a8a*/
      return 0; /*0x978a9b*/
    v37 = v54 / (v54 - v51); /*0x978aa0*/
    v23 = v37; /*0x978aa3*/
    v24 = 1.0 - v37; /*0x978aaa*/
    v38 = v37 * v49 + v12 * v24; /*0x978aba*/
    if ( v38 < 0.0 ) /*0x978ac7*/
      return 0; /*0x978bb3*/
    v39 = v50 * v23 + v18 * v24; /*0x978adb*/
    if ( v39 < 0.0 ) /*0x978aea*/
      return 0; /*0x978aea*/
    v40 = v23 * *(float *)&v42 + *(float *)&v41 * v24; /*0x978b02*/
    if ( *a8 <= (double)v40 ) /*0x978b11*/
      return 1; /*0x978a6d*/
    *a8 = v40; /*0x978b17*/
    v49 = *(float *)&v46 * v23; /*0x978b23*/
    v50 = v47 * v23; /*0x978b2d*/
    v51 = v23 * v48; /*0x978b39*/
    *(float *)&v42 = v24; /*0x978b3d*/
    v52 = *(float *)&v43 * *(float *)&v42; /*0x978b4f*/
    v53 = v44 * *(float *)&v42; /*0x978b59*/
    v54 = *(float *)&v42 * v45; /*0x978b61*/
    *(float *)&v46 = v52 + v49; /*0x978b6d*/
    v25 = v53; /*0x978b75*/
    *a9 = *(float *)&v46; /*0x978b79*/
    v47 = v25 + v50; /*0x978b7f*/
    v26 = v54; /*0x978b87*/
    a9[1] = v47; /*0x978b8b*/
    v48 = v26 + v51; /*0x978b92*/
    a9[2] = v48; /*0x978b9a*/
    return 1; /*0x978b9d*/
  }
}
