float *__cdecl sub_6BBEE0(float a1, int a2, int a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  void (__cdecl *v8)(_DWORD, int, int, float *); // esi
  double v10; // st7
  double v11; // st5
  double v12; // st4
  double v13; // rt2
  double v14; // st4
  double v15; // st7
  float *v16; // edi
  double v17; // st7
  double v18; // st7
  bool v19; // c0
  bool v20; // c3
  double v21; // st7
  float v23; // edx
  double v24; // st7
  double v25; // st6
  float v26; // [esp+1Ch] [ebp-28h]
  float v27; // [esp+20h] [ebp-24h] BYREF
  float v28; // [esp+24h] [ebp-20h]
  float v29; // [esp+28h] [ebp-1Ch]
  float v30; // [esp+2Ch] [ebp-18h] BYREF
  float v31; // [esp+30h] [ebp-14h]
  float v32; // [esp+34h] [ebp-10h]
  float v33; // [esp+38h] [ebp-Ch]
  float v34; // [esp+3Ch] [ebp-8h]
  float v35; // [esp+40h] [ebp-4h]
  float v36; // [esp+54h] [ebp+10h]
  float v37; // [esp+54h] [ebp+10h]
  float v38; // [esp+54h] [ebp+10h]
  float v39; // [esp+54h] [ebp+10h]
  float v40; // [esp+54h] [ebp+10h]
  float v41; // [esp+54h] [ebp+10h]
  float v42; // [esp+54h] [ebp+10h]
  float v43; // [esp+58h] [ebp+14h]
  float v44; // [esp+58h] [ebp+14h]

  v8 = *(void (__cdecl **)(_DWORD, int, int, float *))(4 * a4 + 0xB3D668);
  (*(void (__cdecl **)(_DWORD, int, int, float *))(4 * a4 + 0xB3D250))(LODWORD(a1), a2, a3, &v27);
  v8(LODWORD(a1), a2, a3, &v30);
  v26 = v28 * v28 + v27 * v27 + v29 * v29;
  v36 = sqrt(v26);
  v37 = 1.0 / v36;
  v10 = v27;
  v33 = v27 * v37;
  v11 = v28;
  *a5 = v33;
  v34 = v11 * v37;
  v12 = v29;
  a5[1] = v34;
  v13 = v12;
  v35 = v37 * v12;
  v14 = v32;
  a5[2] = v35;
  v33 = v14 * v11 - v31 * v13;
  v34 = v13 * v30 - v14 * v10;
  v35 = v10 * v31 - v30 * v11;
  v43 = v34 * v34 + v33 * v33 + v35 * v35;
  v44 = sqrt(v43);
  v38 = v44 * v37 * v37;
  *a8 = v38;
  v39 = fabs(v38);
  v15 = flt_A372CC;
  if ( v15 >= v39 )
  {
    *a8 = 0.0;
    v41 = fabs(*a5);
    if ( v41 > v15 )
    {
      v21 = 0.0;
    }
    else
    {
      v42 = fabs(a5[1]);
      v19 = v42 < v15;
      v20 = v42 == v15;
      v21 = 0.0;
      if ( v19 || v20 )
      {
        v16 = a6;
        a6[2] = a5[1];
        a6[1] = -a5[2];
        *a6 = 0.0;
        goto LABEL_8;
      }
    }
    v16 = a6;
    *a6 = a5[1];
    a6[1] = -*a5;
    a6[2] = v21;
    goto LABEL_8;
  }
  v16 = a6;
  v40 = v32 * v29 + v30 * v27 + v31 * v28;
  v27 = v27 * v40;
  v28 = v28 * v40;
  v29 = v40 * v29;
  v33 = v30 * v26;
  v34 = v31 * v26;
  v35 = v26 * v32;
  v30 = v33 - v27;
  v17 = v34;
  *a6 = v30;
  v31 = v17 - v28;
  v18 = v35;
  a6[1] = v31;
  v32 = v18 - v29;
  a6[2] = v32;
LABEL_8:
  sub_43F350(v16);
  v33 = v16[2] * a5[1] - a5[2] * v16[1];
  v34 = *v16 * a5[2] - v16[2] * *a5;
  v23 = v34;
  v24 = *a5 * v16[1];
  v25 = *v16 * a5[1];
  *a7 = v33;
  a7[1] = v23;
  v35 = v24 - v25;
  a7[2] = v35;
  return a7;
}
