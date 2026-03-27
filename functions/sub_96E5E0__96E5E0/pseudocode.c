char __cdecl sub_96E5E0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        char a6,
        _DWORD *a7,
        float *a8,
        float *a9,
        float *a10)
{
  double v10; // st7
  double v11; // st5
  double v12; // st4
  double v13; // st6
  double v14; // st3
  double v15; // st2
  float *v16; // edi
  float *v17; // ebx
  double v18; // st1
  double v19; // st7
  double v20; // st1
  double v21; // st4
  double v22; // st2
  double v23; // st3
  float *v24; // ebp
  float *v25; // ecx
  double v27; // st6
  float *v28; // eax
  float *v29; // eax
  float v30; // [esp+18h] [ebp-30h] BYREF
  float v31; // [esp+1Ch] [ebp-2Ch]
  float v32; // [esp+20h] [ebp-28h]
  float v33; // [esp+24h] [ebp-24h] BYREF
  float v34; // [esp+28h] [ebp-20h]
  float v35; // [esp+2Ch] [ebp-1Ch]
  float v36; // [esp+30h] [ebp-18h] BYREF
  float v37; // [esp+34h] [ebp-14h]
  float v38; // [esp+38h] [ebp-10h]
  int v39[3]; // [esp+3Ch] [ebp-Ch] BYREF
  float v40; // [esp+54h] [ebp+Ch]
  float v41; // [esp+54h] [ebp+Ch]
  float v42; // [esp+54h] [ebp+Ch]
  float v43; // [esp+54h] [ebp+Ch]
  float v44; // [esp+54h] [ebp+Ch]
  float v45; // [esp+54h] [ebp+Ch]
  float v46; // [esp+58h] [ebp+10h]
  float v47; // [esp+58h] [ebp+10h]
  float v48; // [esp+58h] [ebp+10h]

  v30 = *a4 - *a3;
  v31 = a4[1] - a3[1];
  v32 = a4[2] - a3[2];
  v33 = *a5 - *a3;
  v34 = a5[1] - a3[1];
  v35 = a5[2] - a3[2];
  v36 = a2[1] * v35 - a2[2] * v34;
  v37 = a2[2] * v33 - v35 * *a2;
  v38 = v34 * *a2 - v33 * a2[1];
  v10 = v37;
  v11 = v31;
  v12 = v36;
  v13 = v30;
  v14 = v38;
  v46 = v36 * v30 + v37 * v31 + v38 * v32;
  v15 = v46;
  if ( v46 < (double)flt_A3C778 )
  {
    v27 = v38;
    if ( !a6 && flt_AA3D4C >= v15 )
    {
      v16 = a1;
      v17 = a9;
      v36 = *a1 - *a3;
      v37 = a1[1] - a3[1];
      v38 = a1[2] - a3[2];
      v43 = v27 * v38 + v10 * v37 + v12 * v36;
      *a9 = v43;
      if ( v43 <= 0.0 && v43 >= v15 )
      {
        sub_498FE0(&v36, (float *)v39, &v30);
        v44 = sub_47D9E0(a2, (float *)v39);
        v24 = a10;
        *a10 = v44;
        if ( v44 <= 0.0 && v46 <= v44 + *a9 )
        {
          v45 = sub_47D9E0(&v33, (float *)v39);
          v25 = a8;
          *a8 = v45;
          if ( v45 <= 0.0 )
          {
LABEL_17:
            v47 = 1.0 / v46;
            *v17 = *v17 * v47;
            *v24 = *v24 * v47;
            v48 = v47 * *v25;
            *v25 = v48;
            v28 = sub_47DA10((float *)v39, v48, a2);
            v29 = sub_47D9B0(v16, &v36, v28);
            *a7 = *(_DWORD *)v29;
            a7[1] = *((_DWORD *)v29 + 1);
            a7[2] = *((_DWORD *)v29 + 2);
            return 1;
          }
        }
      }
    }
  }
  else
  {
    v16 = a1;
    v17 = a9;
    v36 = *a1 - *a3;
    v37 = a1[1] - a3[1];
    v38 = a1[2] - a3[2];
    v18 = v10 * v37;
    v19 = v36;
    v20 = v12 * v36 + v18;
    v21 = v38;
    v22 = v14 * v38 + v20;
    v23 = v37;
    v40 = v22;
    *a9 = v40;
    if ( v40 < 0.0 )
      return 0;
    if ( v46 < (double)v40 )
      return 0;
    v24 = a10;
    v36 = v23 * v32 - v21 * v11;
    v37 = v21 * v13 - v19 * v32;
    v38 = v11 * v19 - v13 * v23;
    v41 = a2[1] * v37 + v36 * *a2 + a2[2] * v38;
    *a10 = v41;
    if ( v41 >= 0.0 && v46 >= v41 + *a9 )
    {
      v42 = sub_47D9E0(&v33, &v36);
      v25 = a8;
      *a8 = v42;
      if ( v42 < 0.0 )
        return 0;
      goto LABEL_17;
    }
  }
  return 0;
}
