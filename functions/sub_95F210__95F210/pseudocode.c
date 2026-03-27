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

  v39 = a4[1] * a2[2] + a2[1] * *a4 + a4[2] * a2[3];
  v40 = v39 - a2[4];
  v13 = v40;
  if ( v40 >= 0.0 )
  {
    *a8 = 0.0;
    *a9 = *(_DWORD *)a4;
    a9[1] = *((_DWORD *)a4 + 1);
    a9[2] = *((_DWORD *)a4 + 2);
    if ( a10 )
    {
      *a12 = a2[1];
      a12[1] = a2[2];
      a12[2] = a2[3];
      *(float *)&v35 = -*a12;
      v36 = -a12[1];
      v14 = v36;
      v15 = -a12[2];
      *a11 = *(float *)&v35;
      v37 = v15;
      v16 = v37;
      a11[1] = v14;
      a11[2] = v16;
    }
    return 1;
  }
  v41 = a5[1] * a2[2] + a2[1] * *a5 + a5[2] * a2[3];
  v42 = v41 - a2[4];
  v18 = v42;
  if ( v42 < 0.0 )
  {
    v43 = a6[1] * a2[2] + *a6 * a2[1] + a6[2] * a2[3];
    v44 = v43 - a2[4];
    v22 = v44;
    if ( v44 >= 0.0 )
    {
      *a8 = 0.0;
      *a9 = *(_DWORD *)a6;
      a9[1] = *((_DWORD *)a6 + 1);
      a9[2] = *((_DWORD *)a6 + 2);
      if ( a10 )
      {
        *a12 = a2[1];
        a12[1] = a2[2];
        a12[2] = a2[3];
        *(float *)&v35 = -*a12;
        v36 = -a12[1];
        v23 = v36;
        v24 = a12[2];
        *a11 = *(float *)&v35;
        v37 = -v24;
        v25 = v37;
        a11[1] = v23;
        a11[2] = v25;
        return 1;
      }
      return 1;
    }
    *(float *)&v35 = *a7 - *a3;
    v36 = a7[1] - a3[1];
    v37 = a7[2] - a3[2];
    v45 = a2[2] * v36 + a2[1] * *(float *)&v35 + a2[3] * v37;
    v26 = v45;
    if ( v45 <= 0.0 )
      return 0;
    v46 = -a1 * v26;
    v27 = v46;
    if ( v46 > v13 && v27 > v18 && v27 > v22 )
      return 0;
    if ( v13 < v18 )
    {
      if ( v22 <= v18 )
      {
        *a8 = -v18 / v26;
        v33 = sub_47DA10((float *)v38, a1, a7);
        v28 = sub_47D9B0(a5, (float *)&v35, v33);
        goto LABEL_23;
      }
    }
    else if ( v22 <= v13 )
    {
      *a8 = -v13 / v26;
      v32 = sub_47DA10((float *)&v35, a1, a7);
      v28 = sub_47D9B0(a4, (float *)v38, v32);
      goto LABEL_23;
    }
    *a8 = -v22 / v26;
    v34 = sub_47DA10((float *)v38, a1, a7);
    v28 = sub_47D9B0(a6, (float *)&v35, v34);
LABEL_23:
    *a9 = *(_DWORD *)v28;
    a9[1] = *((_DWORD *)v28 + 1);
    a9[2] = *((_DWORD *)v28 + 2);
    if ( a10 )
    {
      *a12 = a2[1];
      a12[1] = a2[2];
      a12[2] = a2[3];
      *(float *)&v35 = -*a12;
      v36 = -a12[1];
      v29 = v36;
      v30 = -a12[2];
      *a11 = *(float *)&v35;
      v37 = v30;
      v31 = v37;
      a11[1] = v29;
      a11[2] = v31;
    }
    return 1;
  }
  *a8 = 0.0;
  *a9 = *(_DWORD *)a5;
  a9[1] = *((_DWORD *)a5 + 1);
  a9[2] = *((_DWORD *)a5 + 2);
  if ( a10 )
  {
    *a12 = a2[1];
    a12[1] = a2[2];
    a12[2] = a2[3];
    *(float *)&v35 = -*a12;
    v36 = -a12[1];
    v19 = v36;
    v20 = -a12[2];
    *a11 = *(float *)&v35;
    v37 = v20;
    v21 = v37;
    a11[1] = v19;
    a11[2] = v21;
  }
  return 1;
}
