char __cdecl sub_95F210(
        float a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        _DWORD *a9,
        char a10,
        float *a11,
        float *a12)
{
  double v13; // st6
  float v14; // edx
  double v15; // st7
  float v16; // ecx
  double v18; // st5
  float v19; // edx
  double v20; // st7
  float v21; // ecx
  double v22; // st4
  float v23; // edx
  double v24; // st7
  float v25; // ecx
  double v26; // st7
  double v27; // st2
  float *v28; // eax
  float v29; // ecx
  double v30; // st7
  float v31; // edx
  float *v32; // [esp+4h] [ebp-2Ch]
  float *v33; // [esp+4h] [ebp-2Ch]
  float *v34; // [esp+4h] [ebp-2Ch]
  int v35; // [esp+18h] [ebp-18h] BYREF
  float v36; // [esp+1Ch] [ebp-14h]
  float v37; // [esp+20h] [ebp-10h]
  int v38[3]; // [esp+24h] [ebp-Ch] BYREF
  float v39; // [esp+38h] [ebp+8h]
  float v40; // [esp+38h] [ebp+8h]
  float v41; // [esp+38h] [ebp+8h]
  float v42; // [esp+38h] [ebp+8h]
  float v43; // [esp+38h] [ebp+8h]
  float v44; // [esp+38h] [ebp+8h]
  float v45; // [esp+38h] [ebp+8h]
  float v46; // [esp+38h] [ebp+8h]

  v39 = a4[1] * a2[2] + a2[1] * *a4 + a4[2] * a2[3]; /*0x95f233*/
  v40 = v39 - a2[4]; /*0x95f23e*/
  v13 = v40; /*0x95f244*/
  if ( v40 >= 0.0 ) /*0x95f24f*/
  {
    *a8 = 0.0; /*0x95f25c*/
    *a9 = *(_DWORD *)a4; /*0x95f265*/
    a9[1] = *((_DWORD *)a4 + 1); /*0x95f26a*/
    a9[2] = *((_DWORD *)a4 + 2); /*0x95f270*/
    if ( a10 ) /*0x95f273*/
    {
      *a12 = a2[1]; /*0x95f27c*/
      a12[1] = a2[2]; /*0x95f281*/
      a12[2] = a2[3]; /*0x95f287*/
      *(float *)&v35 = -*a12; /*0x95f28e*/
      v36 = -a12[1]; /*0x95f29b*/
      v14 = v36; /*0x95f29f*/
      v15 = -a12[2]; /*0x95f2aa*/
      *a11 = *(float *)&v35; /*0x95f2ac*/
      v37 = v15; /*0x95f2ae*/
      v16 = v37; /*0x95f2b2*/
      a11[1] = v14; /*0x95f2b6*/
      a11[2] = v16; /*0x95f2b9*/
    }
    return 1; /*0x95f2c3*/
  }
  v41 = a5[1] * a2[2] + a2[1] * *a5 + a5[2] * a2[3]; /*0x95f2de*/
  v42 = v41 - a2[4]; /*0x95f2e9*/
  v18 = v42; /*0x95f2ed*/
  if ( v42 < 0.0 ) /*0x95f2f8*/
  {
    v43 = a6[1] * a2[2] + *a6 * a2[1] + a6[2] * a2[3]; /*0x95f389*/
    v44 = v43 - a2[4]; /*0x95f394*/
    v22 = v44; /*0x95f398*/
    if ( v44 >= 0.0 ) /*0x95f3a3*/
    {
      *a8 = 0.0; /*0x95f3b8*/
      *a9 = *(_DWORD *)a6; /*0x95f3bc*/
      a9[1] = *((_DWORD *)a6 + 1); /*0x95f3c1*/
      a9[2] = *((_DWORD *)a6 + 2); /*0x95f3c7*/
      if ( a10 ) /*0x95f3ca*/
      {
        *a12 = a2[1]; /*0x95f3d7*/
        a12[1] = a2[2]; /*0x95f3dc*/
        a12[2] = a2[3]; /*0x95f3e2*/
        *(float *)&v35 = -*a12; /*0x95f3ea*/
        v36 = -a12[1]; /*0x95f3f9*/
        v23 = v36; /*0x95f3fd*/
        v24 = a12[2]; /*0x95f401*/
        *a11 = *(float *)&v35; /*0x95f408*/
        v37 = -v24; /*0x95f40c*/
        v25 = v37; /*0x95f410*/
        a11[1] = v23; /*0x95f414*/
        a11[2] = v25; /*0x95f417*/
        return 1; /*0x95f420*/
      }
      return 1; /*0x95f3ca*/
    }
    *(float *)&v35 = *a7 - *a3; /*0x95f42d*/
    v36 = a7[1] - a3[1]; /*0x95f437*/
    v37 = a7[2] - a3[2]; /*0x95f441*/
    v45 = a2[2] * v36 + a2[1] * *(float *)&v35 + a2[3] * v37; /*0x95f45e*/
    v26 = v45; /*0x95f46a*/
    if ( v45 <= 0.0 ) /*0x95f46f*/
      return 0; /*0x95f46f*/
    v46 = -a1 * v26; /*0x95f47b*/
    v27 = v46; /*0x95f47f*/
    if ( v46 > v13 && v27 > v18 && v27 > v22 ) /*0x95f49c*/
      return 0; /*0x95f4b1*/
    if ( v13 < v18 ) /*0x95f4c3*/
    {
      if ( v22 <= v18 ) /*0x95f4fd*/
      {
        *a8 = -v18 / v26; /*0x95f50b*/
        v33 = sub_47DA10((float *)v38, a1, a7); /*0x95f51d*/
        v28 = sub_47D9B0(a5, (float *)&v35, v33); /*0x95f521*/
        goto LABEL_23; /*0x95f521*/
      }
    }
    else if ( v22 <= v13 ) /*0x95f4ce*/
    {
      *a8 = -v13 / v26; /*0x95f4dc*/
      v32 = sub_47DA10((float *)&v35, a1, a7); /*0x95f4ee*/
      v28 = sub_47D9B0(a4, (float *)v38, v32); /*0x95f4f2*/
      goto LABEL_23; /*0x95f4f2*/
    }
    *a8 = -v22 / v26; /*0x95f52f*/
    v34 = sub_47DA10((float *)v38, a1, a7); /*0x95f541*/
    v28 = sub_47D9B0(a6, (float *)&v35, v34); /*0x95f545*/
LABEL_23:
    *a9 = *(_DWORD *)v28; /*0x95f54a*/
    a9[1] = *((_DWORD *)v28 + 1); /*0x95f55a*/
    a9[2] = *((_DWORD *)v28 + 2); /*0x95f560*/
    if ( a10 ) /*0x95f563*/
    {
      *a12 = a2[1]; /*0x95f56c*/
      a12[1] = a2[2]; /*0x95f571*/
      a12[2] = a2[3]; /*0x95f577*/
      *(float *)&v35 = -*a12; /*0x95f57e*/
      v36 = -a12[1]; /*0x95f58b*/
      v29 = v36; /*0x95f58f*/
      v30 = -a12[2]; /*0x95f59a*/
      *a11 = *(float *)&v35; /*0x95f59c*/
      v37 = v30; /*0x95f59e*/
      v31 = v37; /*0x95f5a2*/
      a11[1] = v29; /*0x95f5a6*/
      a11[2] = v31; /*0x95f5a9*/
    }
    return 1; /*0x95f5af*/
  }
  *a8 = 0.0; /*0x95f30b*/
  *a9 = *(_DWORD *)a5; /*0x95f30f*/
  a9[1] = *((_DWORD *)a5 + 1); /*0x95f314*/
  a9[2] = *((_DWORD *)a5 + 2); /*0x95f31a*/
  if ( a10 ) /*0x95f31d*/
  {
    *a12 = a2[1]; /*0x95f326*/
    a12[1] = a2[2]; /*0x95f32b*/
    a12[2] = a2[3]; /*0x95f331*/
    *(float *)&v35 = -*a12; /*0x95f338*/
    v36 = -a12[1]; /*0x95f345*/
    v19 = v36; /*0x95f349*/
    v20 = -a12[2]; /*0x95f354*/
    *a11 = *(float *)&v35; /*0x95f356*/
    v37 = v20; /*0x95f358*/
    v21 = v37; /*0x95f35c*/
    a11[1] = v19; /*0x95f360*/
    a11[2] = v21; /*0x95f363*/
  }
  return 1; /*0x95f2bf*/
}
