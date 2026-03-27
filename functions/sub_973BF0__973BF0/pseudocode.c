double __cdecl sub_973BF0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  int v7; // ecx
  int v8; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  double v14; // st7
  double v15; // st7
  double v16; // st7
  float v17; // ecx
  float v18; // edx
  float v19; // eax
  float v20; // ecx
  float v21; // edx
  float v22; // ecx
  float v23; // edx
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  double v30; // st7
  double v31; // st7
  float v33; // [esp+10h] [ebp-34h] BYREF
  float v34; // [esp+14h] [ebp-30h] BYREF
  float v35; // [esp+18h] [ebp-2Ch] BYREF
  float v36; // [esp+1Ch] [ebp-28h] BYREF
  float v37; // [esp+20h] [ebp-24h]
  float v38; // [esp+24h] [ebp-20h]
  float v39; // [esp+28h] [ebp-1Ch]
  float v40; // [esp+2Ch] [ebp-18h] BYREF
  float v41; // [esp+30h] [ebp-14h]
  float v42; // [esp+34h] [ebp-10h]
  float v43; // [esp+38h] [ebp-Ch]
  float v44; // [esp+3Ch] [ebp-8h]
  float v45; // [esp+40h] [ebp-4h]
  float v46; // [esp+48h] [ebp+4h]
  float v47; // [esp+4Ch] [ebp+8h]
  float v48; // [esp+4Ch] [ebp+8h]
  float v49; // [esp+4Ch] [ebp+8h]
  float v50; // [esp+4Ch] [ebp+8h]
  float v51; // [esp+4Ch] [ebp+8h]
  float v52; // [esp+4Ch] [ebp+8h]

  v7 = *((int *)a1 + 1);
  v8 = *((int *)a1 + 2);
  v40 = *a1;
  v10 = *((int *)a1 + 3);
  v41 = *(float *)&v7;
  v11 = *((int *)a1 + 4);
  v43 = *(float *)&v10;
  v44 = *(float *)&v11;
  v42 = *(float *)&v8;
  v45 = a1[5];
  v46 = sub_9708E0(&v40, a2, a3, a5, a6);
  *a4 = 0.0;
  v12 = *((int *)a1 + 7);
  v13 = *((int *)a1 + 8);
  v43 = a1[6];
  v44 = *(float *)&v12;
  v45 = *(float *)&v13;
  v47 = sub_9708E0(&v40, a2, &v33, &v36, &v35);
  v34 = 0.0;
  if ( v46 > (double)v47 )
  {
    v46 = v47;
    *a3 = 0.0;
    *a4 = v33;
    *a5 = v36;
    *a6 = v35;
  }
  v37 = a1[3] + v40;
  v14 = a1[4];
  v40 = v37;
  v38 = v14 + v41;
  v15 = a1[5];
  v41 = v38;
  v39 = v15 + v42;
  v42 = v39;
  v37 = v43 - a1[3];
  v43 = v37;
  v38 = v44 - a1[4];
  v44 = v38;
  v39 = v45 - a1[5];
  v45 = v39;
  v48 = sub_9708E0(&v40, a2, &v33, &v36, &v35);
  v16 = v33;
  v34 = 1.0 - v33;
  if ( v46 > (double)v48 )
  {
    v46 = v48;
    *a3 = v34;
    *a4 = v16;
    *a5 = v36;
    *a6 = v35;
  }
  v17 = a2[1];
  v18 = a2[2];
  v40 = *a2;
  v19 = a2[3];
  v41 = v17;
  v20 = a2[4];
  v43 = v19;
  v42 = v18;
  v21 = a2[5];
  v44 = v20;
  v45 = v21;
  v49 = sub_9726E0(&v40, a1, &v36, &v34, &v33);
  v35 = 0.0;
  if ( v46 > (double)v49 )
  {
    v46 = v49;
    *a3 = v34;
    *a4 = v33;
    *a5 = v36;
    *a6 = 0.0;
  }
  v22 = a2[7];
  v23 = a2[8];
  v43 = a2[6];
  v44 = v22;
  v45 = v23;
  v50 = sub_9726E0(&v40, a1, &v35, &v34, &v33);
  v36 = 0.0;
  if ( v46 > (double)v50 )
  {
    v46 = v50;
    *a3 = v34;
    *a4 = v33;
    *a5 = 0.0;
    *a6 = v35;
  }
  v37 = a2[6] + *a2;
  v24 = a2[7];
  v40 = v37;
  v25 = v24 + a2[1];
  v43 = a2[3];
  v38 = v25;
  v26 = a2[8];
  v41 = v38;
  v27 = v26 + a2[2];
  v44 = a2[4];
  v39 = v27;
  v42 = v39;
  v45 = a2[5];
  v51 = sub_9726E0(&v40, a1, &v36, &v34, &v33);
  v35 = 1.0;
  if ( v46 > (double)v51 )
  {
    v46 = v51;
    *a3 = v34;
    *a4 = v33;
    *a5 = v36;
    *a6 = 1.0;
  }
  v37 = *a2 + a2[3];
  v28 = a2[4];
  v40 = v37;
  v29 = v28 + a2[1];
  v43 = a2[6];
  v38 = v29;
  v30 = a2[5];
  v41 = v38;
  v31 = v30 + a2[2];
  v44 = a2[7];
  v39 = v31;
  v42 = v39;
  v45 = a2[8];
  v52 = sub_9726E0(&v40, a1, &v35, &v34, &v33);
  if ( v46 <= (double)v52 )
    return v46;
  *a3 = v34;
  *a4 = v33;
  *a5 = 1.0;
  *a6 = v35;
  return v52;
}
