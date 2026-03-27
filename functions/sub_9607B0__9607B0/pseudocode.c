bool __cdecl sub_9607B0(float a1, float *a2, float *a3, int *a4, float *a5, float *a6, float *a7)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st7
  double v14; // st5
  double v15; // st4
  double v16; // st4
  double v17; // st7
  bool v18; // c0
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st5
  double v23; // st4
  double v24; // st3
  double v26; // st3
  double v27; // st3
  double v28; // st2
  double v29; // st3
  double v30; // st2
  float v31; // eax
  float v32; // ecx
  float v33; // edx
  float v34; // eax
  float v35; // ecx
  float v36; // edx
  double v37; // st7
  float v38; // [esp+4h] [ebp-88h] BYREF
  int v39; // [esp+8h] [ebp-84h] BYREF
  int v40; // [esp+Ch] [ebp-80h]
  int v41; // [esp+10h] [ebp-7Ch]
  float v42; // [esp+14h] [ebp-78h]
  float v43; // [esp+18h] [ebp-74h]
  float v44; // [esp+1Ch] [ebp-70h]
  int v45; // [esp+20h] [ebp-6Ch]
  int v46; // [esp+24h] [ebp-68h]
  int v47; // [esp+28h] [ebp-64h]
  float v48; // [esp+2Ch] [ebp-60h] BYREF
  float v49; // [esp+30h] [ebp-5Ch] BYREF
  float v50; // [esp+34h] [ebp-58h] BYREF
  float v51; // [esp+38h] [ebp-54h]
  float v52; // [esp+3Ch] [ebp-50h]
  float v53; // [esp+40h] [ebp-4Ch]
  int v54[9]; // [esp+44h] [ebp-48h] BYREF
  float v55[9]; // [esp+68h] [ebp-24h] BYREF

  v54[0] = *a4;
  v7 = *a5 - *(float *)a4;
  v54[1] = a4[1];
  v54[2] = a4[2];
  *(float *)&v45 = v7;
  *(float *)&v46 = a5[1] - *((float *)a4 + 1);
  v8 = a5[2] - *((float *)a4 + 2);
  v54[3] = v45;
  v54[4] = v46;
  *(float *)&v47 = v8;
  v9 = *a6;
  v54[5] = v47;
  *(float *)&v39 = v9 - *(float *)a4;
  *(float *)&v40 = a6[1] - *((float *)a4 + 1);
  v10 = a6[2] - *((float *)a4 + 2);
  v54[6] = v39;
  v54[7] = v40;
  *(float *)&v41 = v10;
  v11 = *a3 - *a7;
  v54[8] = v41;
  v51 = v11;
  v52 = a3[1] - a7[1];
  v53 = a3[2] - a7[2];
  v42 = *(float *)&v41 * *(float *)&v46 - *(float *)&v40 * *(float *)&v47;
  v43 = *(float *)&v47 * *(float *)&v39 - *(float *)&v41 * *(float *)&v45;
  v44 = *(float *)&v45 * *(float *)&v40 - *(float *)&v39 * *(float *)&v46;
  *(float *)&v39 = -v42;
  *(float *)&v40 = -v43;
  *(float *)&v41 = -v44;
  v12 = *(float *)&v40;
  v13 = *(float *)&v39;
  v14 = *(float *)&v41;
  v48 = a2[3] * *(float *)&v41 + a2[1] * *(float *)&v39 + a2[2] * *(float *)&v40;
  if ( a2[0xE] >= (double)a2[7] )
    v15 = a2[0xE];
  else
    v15 = a2[7];
  v50 = v15;
  v49 = *(float *)a4 * v13 + v12 * *((float *)a4 + 1) + *((float *)a4 + 2) * v14;
  v38 = v48 - v49;
  v16 = v13 * v13;
  v17 = v38 * v38;
  v38 = v12 * v12 + v16 + v14 * v14;
  v38 = v38 * v50 * v50;
  v18 = v38 < v17;
  v19 = a1;
  v20 = v53;
  if ( v18 )
  {
    sub_43F350((float *)&v39);
    v21 = *(float *)&v40;
    v22 = *(float *)&v39;
    v23 = *(float *)&v41;
    v20 = v53;
    v24 = *(float *)&v41 * v53 + *(float *)&v40 * v52 + *(float *)&v39 * v51;
    if ( v49 >= (double)v48 )
    {
      v38 = v24;
      if ( v38 <= (double)*(float *)&SrcStr )
        return 0;
      v42 = v22 * v50;
      v43 = v21 * v50;
      v44 = v50 * v23;
      *(float *)&v45 = a2[1] + v42;
      *(float *)&v46 = a2[2] + v43;
      v26 = a2[3] + v44;
    }
    else
    {
      v38 = v24;
      if ( v38 >= (double)*(float *)&SrcStr )
        return 0;
      v42 = v22 * v50;
      v43 = v21 * v50;
      v44 = v50 * v23;
      *(float *)&v45 = a2[1] - v42;
      *(float *)&v46 = a2[2] - v43;
      v26 = a2[3] - v44;
    }
    *(float *)&v47 = v26;
    v27 = *(float *)a4 * v22;
    v40 = v46;
    v28 = v21 * *((float *)a4 + 1);
    v39 = v45;
    v41 = v47;
    v49 = v27 + v28 + *((float *)a4 + 2) * v23;
    v29 = v49 + dbl_A30E40;
    v38 = *(float *)&v46 * v21 + *(float *)&v45 * v22 + *(float *)&v47 * v23;
    if ( v38 <= v29 )
    {
      v19 = a1;
    }
    else
    {
      v42 = v51 * a1;
      v43 = v52 * a1;
      v44 = v20 * a1;
      *(float *)&v45 = v42 + *(float *)&v39;
      *(float *)&v46 = v43 + *(float *)&v40;
      *(float *)&v47 = v44 + *(float *)&v41;
      v30 = v21 * *(float *)&v46;
      v19 = a1;
      v38 = v23 * *(float *)&v47 + v22 * *(float *)&v45 + v30;
      if ( v38 > v29 )
        return 0;
    }
  }
  if ( Vector3_InitValue_ == v51 && *(&Vector3_InitValue_ + 1) == v52 && dword_B3F9B0 == v20 )
  {
    v37 = sub_9726E0(a2 + 8, (float *)v54, &v49, &v48, &v38);
  }
  else
  {
    v31 = a2[8];
    v32 = a2[9];
    v33 = a2[0xA];
    v42 = v51 * v19;
    v55[0] = v31;
    v34 = a2[0xB];
    v55[1] = v32;
    v35 = a2[0xC];
    v55[2] = v33;
    v36 = a2[0xD];
    v43 = v52 * v19;
    v55[3] = v34;
    v55[4] = v35;
    v55[5] = v36;
    v44 = v19 * v20;
    v55[6] = v42;
    v55[7] = v43;
    v55[8] = v44;
    v37 = sub_973BF0(v54, v55, &v48, &v38, &v50, &v49);
  }
  v48 = v37;
  return v48 <= a2[0xE] * a2[0xE];
}
