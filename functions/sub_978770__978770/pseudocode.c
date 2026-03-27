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

  if ( !sub_977DF0(a7, a4, a5, a6, a1, a2, (float *)&v41, (float *)&v43, (float *)&v42, (float *)&v46) )
    return 0;
  v9 = a3[1];
  v10 = *a3;
  sub_977C60(*a3, v9, a3[2], (float *)&v43, &v52);
  sub_977C60(v10, v9, v11, (float *)&v46, &v49);
  v12 = v52;
  if ( v52 < 0.0 )
  {
    if ( v49 < 0.0 )
      return 0;
    v29 = v12 / (v12 - v49);
    v14 = v29;
    v15 = 1.0 - v29;
    v30 = v50 * v29 + v53 * v15;
    if ( v30 >= 0.0 )
    {
      v31 = v51 * v14 + v54 * v15;
      if ( v31 >= 0.0 )
      {
        v32 = v14 * *(float *)&v42 + *(float *)&v41 * v15;
        if ( *a8 > (double)v32 )
        {
          *a8 = v32;
          v49 = *(float *)&v46 * v14;
          v50 = v47 * v14;
          v51 = v14 * v48;
          *(float *)&v42 = v15;
          v52 = *(float *)&v43 * *(float *)&v42;
          v53 = v44 * *(float *)&v42;
          v54 = *(float *)&v42 * v45;
          *(float *)&v46 = v52 + v49;
          v16 = v53;
          *a9 = *(float *)&v46;
          v47 = v16 + v50;
          v17 = v54;
          a9[1] = v47;
          v48 = v17 + v51;
          a9[2] = v48;
          return 1;
        }
        return 1;
      }
    }
    return 0;
  }
  v18 = v53;
  if ( v53 < 0.0 )
  {
    if ( v50 >= 0.0 )
    {
      v33 = v18 / (v18 - v50);
      v19 = v33;
      v20 = 1.0 - v33;
      v34 = v33 * v49 + v12 * v20;
      if ( v34 < 0.0 )
        return 0;
      v35 = v51 * v19 + v54 * v20;
      if ( v35 < 0.0 )
        return 0;
      v36 = v19 * *(float *)&v42 + *(float *)&v41 * v20;
      if ( *a8 > (double)v36 )
      {
        *a8 = v36;
        v49 = *(float *)&v46 * v19;
        v50 = v47 * v19;
        v51 = v19 * v48;
        *(float *)&v42 = v20;
        v52 = *(float *)&v43 * *(float *)&v42;
        v53 = v44 * *(float *)&v42;
        v54 = *(float *)&v42 * v45;
        *(float *)&v46 = v52 + v49;
        v21 = v53;
        *a9 = *(float *)&v46;
        v47 = v21 + v50;
        v22 = v54;
        a9[1] = v47;
        v48 = v22 + v51;
        a9[2] = v48;
        return 1;
      }
      return 1;
    }
    return 0;
  }
  if ( v54 >= 0.0 )
  {
    if ( *a8 <= (double)*(float *)&v41 )
      return 1;
    *a8 = *(float *)&v41;
    v27 = v44;
    *a9 = *(float *)&v43;
    v28 = v45;
    a9[1] = v27;
    a9[2] = v28;
    return 1;
  }
  else
  {
    if ( v51 < 0.0 )
      return 0;
    v37 = v54 / (v54 - v51);
    v23 = v37;
    v24 = 1.0 - v37;
    v38 = v37 * v49 + v12 * v24;
    if ( v38 < 0.0 )
      return 0;
    v39 = v50 * v23 + v18 * v24;
    if ( v39 < 0.0 )
      return 0;
    v40 = v23 * *(float *)&v42 + *(float *)&v41 * v24;
    if ( *a8 <= (double)v40 )
      return 1;
    *a8 = v40;
    v49 = *(float *)&v46 * v23;
    v50 = v47 * v23;
    v51 = v23 * v48;
    *(float *)&v42 = v24;
    v52 = *(float *)&v43 * *(float *)&v42;
    v53 = v44 * *(float *)&v42;
    v54 = *(float *)&v42 * v45;
    *(float *)&v46 = v52 + v49;
    v25 = v53;
    *a9 = *(float *)&v46;
    v47 = v25 + v50;
    v26 = v54;
    a9[1] = v47;
    v48 = v26 + v51;
    a9[2] = v48;
    return 1;
  }
}
