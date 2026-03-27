char __cdecl sub_95E980(
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
  float *v11; // esi
  float *v12; // edi
  float *v13; // ebx
  double v14; // st6
  double v15; // st5
  double v16; // st5
  double v17; // st6
  int v18; // eax
  float v19; // edx
  double v20; // st7
  float v21; // ecx
  float v22; // eax
  float v23; // ecx
  float v25; // edx
  float v26; // eax
  double v27; // st7
  double v28; // st7
  double v29; // st7
  float *v30; // eax
  double v31; // st7
  float *v32; // ecx
  float *v33; // eax
  double v34; // rt2
  float *v35; // eax
  float *v36; // eax
  double v37; // st7
  double v38; // st7
  float v39; // edx
  double v40; // st7
  float v41; // ecx
  float *v42; // [esp+1Ch] [ebp-64h]
  float *v43; // [esp+1Ch] [ebp-64h]
  float *v44; // [esp+20h] [ebp-60h]
  float *v45; // [esp+24h] [ebp-5Ch]
  float v46; // [esp+38h] [ebp-48h]
  float v47; // [esp+38h] [ebp-48h]
  float v48; // [esp+3Ch] [ebp-44h] BYREF
  float v49; // [esp+40h] [ebp-40h]
  float v50; // [esp+44h] [ebp-3Ch]
  int v51; // [esp+48h] [ebp-38h] BYREF
  float v52; // [esp+4Ch] [ebp-34h]
  float v53; // [esp+50h] [ebp-30h]
  int v54[3]; // [esp+54h] [ebp-2Ch] BYREF
  int v55[3]; // [esp+60h] [ebp-20h] BYREF
  int v56; // [esp+6Ch] [ebp-14h] BYREF
  float v57; // [esp+70h] [ebp-10h]
  float v58; // [esp+74h] [ebp-Ch]
  float v59; // [esp+78h] [ebp-8h]
  float v60; // [esp+7Ch] [ebp-4h]
  float v61; // [esp+88h] [ebp+8h]
  float v62; // [esp+88h] [ebp+8h]
  int v63; // [esp+88h] [ebp+8h]
  float v64; // [esp+88h] [ebp+8h]
  float v65; // [esp+88h] [ebp+8h]
  float v66; // [esp+88h] [ebp+8h]
  float v67; // [esp+90h] [ebp+10h]
  float v68; // [esp+90h] [ebp+10h]
  int v69; // [esp+90h] [ebp+10h]

  v11 = a4 + 8;
  v12 = a2 + 1;
  v13 = a4 + 0xB;
  v67 = a4[9] * a2[2] + a4[8] * a2[1] + a4[0xA] * a2[3];
  v46 = v67 - a2[4];
  v48 = *v11 + *v13;
  v49 = v13[1] + v11[1];
  v50 = v13[2] + v11[2];
  v68 = a2[1] * v48 + a2[2] * v49 + a2[3] * v50;
  *(float *)&v69 = v68 - a2[4];
  v14 = v46;
  v15 = *(float *)&v69;
  if ( v46 < 0.0 && v15 > 0.0 )
    goto LABEL_5;
  v16 = v46;
  v17 = *(float *)&v69;
  if ( v46 > 0.0 )
  {
    v15 = *(float *)&v69;
    v14 = v46;
    if ( *(float *)&v69 < 0.0 )
    {
LABEL_5:
      *a6 = 0.0;
      v18 = (int)a7;
      v61 = v14 / (v14 - v15);
      v48 = *v13 * v61;
      v49 = v13[1] * v61;
      v50 = v61 * v13[2];
      *(float *)&v51 = *v11 + v48;
      v52 = v11[1] + v49;
      v19 = v52;
      v20 = v11[2];
      *a7 = *(float *)&v51;
      v53 = v20 + v50;
      v21 = v53;
LABEL_24:
      *(float *)(v18 + 4) = v19;
      *(float *)(v18 + 8) = v21;
      goto LABEL_25;
    }
    v16 = v46;
    v17 = *(float *)&v69;
  }
  v47 = -v11[6];
  if ( v47 > v16 )
  {
    if ( v47 <= v17 )
    {
      *a6 = 0.0;
      sub_96C420((float *)&v56, 1.0, (int)&Vector3_InitValue_);
      v60 = a4[0xE];
      *(float *)&v51 = *v11 + a4[0xB];
      v27 = v11[1];
      v57 = *(float *)&v51;
      v52 = v27 + a4[0xC];
      v28 = v11[2];
      v58 = v52;
      v53 = v28 + a4[0xD];
      v59 = v53;
      return sub_95E250(a1, a2, a3, (float *)&v56, a5, a6, a7, a8, a9, a10);
    }
    *(float *)&v51 = *a5 - *a3;
    v52 = a5[1] - a3[1];
    v53 = a5[2] - a3[2];
    v62 = a2[2] * v52 + a2[1] * *(float *)&v51 + a2[3] * v53;
    v29 = v62;
    if ( v62 <= 0.0 )
      return 0;
    *(float *)&v63 = -(v29 * a1 + v11[6]);
    if ( *(float *)&v63 > v16 && *(float *)&v63 > v17 )
      return 0;
    if ( v17 + dbl_AA3A18 >= v16 )
    {
      v31 = -((v17 + v11[6]) / v29);
      if ( v16 + dbl_AA3A18 >= v17 )
      {
        v66 = v31;
        *a6 = v66;
        v34 = dbl_A2FAA0;
        *(float *)&v51 = *v13 * v34;
        v52 = v13[1] * v34;
        v53 = v34 * v13[2];
        v48 = *v11 + *(float *)&v51;
        v49 = v11[1] + v52;
        v50 = v11[2] + v53;
        v35 = sub_47DA10((float *)&v56, v66, a5);
        *(float *)&v51 = *v35 + v48;
        v52 = v35[1] + v49;
        v53 = v35[2] + v50;
        v36 = sub_4707B0(v12, (float *)v55, v11[6]);
        v48 = *v36 + *(float *)&v51;
        v49 = v36[1] + v52;
        v19 = v49;
        v37 = v36[2];
        v18 = (int)a7;
        v38 = v37 + v53;
        *a7 = v48;
        v50 = v38;
        v21 = v50;
        goto LABEL_24;
      }
      v65 = v31;
      *a6 = v65;
      v45 = sub_4707B0(v12, (float *)v55, v11[6]);
      v44 = (float *)v54;
      v43 = sub_47DA10((float *)&v51, v65, a5);
      v32 = sub_47D9B0(v11, (float *)&v56, v13);
      v30 = sub_47D9B0(v32, &v48, v43);
    }
    else
    {
      v64 = -((v16 + v11[6]) / v29);
      *a6 = v64;
      v45 = sub_4707B0(v12, (float *)&v51, v11[6]);
      v44 = &v48;
      v42 = sub_47DA10((float *)v54, v64, a5);
      v30 = sub_47D9B0(v11, (float *)v55, v42);
    }
    v33 = sub_47D9B0(v30, v44, v45);
    *a7 = *v33;
    a7[1] = v33[1];
    a7[2] = v33[2];
LABEL_25:
    if ( a8 )
    {
      *a10 = *v12;
      a10[1] = v12[1];
      a10[2] = v12[2];
      *(float *)&v51 = -*a10;
      v52 = -a10[1];
      v39 = v52;
      v40 = -a10[2];
      *a9 = *(float *)&v51;
      v53 = v40;
      v41 = v53;
      a9[1] = v39;
      a9[2] = v41;
    }
    return 1;
  }
  *a6 = 0.0;
  sub_96C420((float *)&v56, 1.0, (int)&Vector3_InitValue_);
  v60 = a4[0xE];
  if ( -v11[6] > *(float *)&v69 )
  {
    v25 = v11[1];
    v26 = v11[2];
    v57 = *v11;
    v58 = v25;
    v59 = v26;
  }
  else
  {
    v22 = a4[2];
    v23 = a4[3];
    v57 = a4[1];
    v58 = v22;
    v59 = v23;
  }
  return sub_95E250(a1, a2, a3, (float *)&v56, a5, a6, a7, a8, a9, a10);
}
