double __cdecl sub_973BF0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v7; // ecx
  float v8; // edx
  float v10; // eax
  float v11; // ecx
  float v12; // ecx
  float v13; // edx
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

  v7 = a1[1]; /*0x973c04*/
  v8 = a1[2]; /*0x973c07*/
  v40 = *a1; /*0x973c0f*/
  v10 = a1[3]; /*0x973c13*/
  v41 = v7; /*0x973c17*/
  v11 = a1[4]; /*0x973c1b*/
  v43 = v10; /*0x973c1e*/
  v44 = v11; /*0x973c28*/
  v42 = v8; /*0x973c2c*/
  v45 = a1[5]; /*0x973c39*/
  v46 = sub_9708E0(&v40, a2, a3, a5, a6); /*0x973c42*/
  *a4 = 0.0; /*0x973c4c*/
  v12 = a1[7]; /*0x973c51*/
  v13 = a1[8]; /*0x973c54*/
  v43 = a1[6]; /*0x973c57*/
  v44 = v12; /*0x973c60*/
  v45 = v13; /*0x973c69*/
  v47 = sub_9708E0(&v40, a2, &v33, &v36, &v35); /*0x973c7d*/
  v34 = 0.0; /*0x973c86*/
  if ( v46 > (double)v47 ) /*0x973c99*/
  {
    v46 = v47; /*0x973c9f*/
    *a3 = 0.0; /*0x973ca7*/
    *a4 = v33; /*0x973cad*/
    *a5 = v36; /*0x973cb3*/
    *a6 = v35; /*0x973cba*/
  }
  v37 = a1[3] + v40; /*0x973cc9*/
  v14 = a1[4]; /*0x973cd1*/
  v40 = v37; /*0x973cd4*/
  v38 = v14 + v41; /*0x973cdc*/
  v15 = a1[5]; /*0x973ce4*/
  v41 = v38; /*0x973ce7*/
  v39 = v15 + v42; /*0x973cef*/
  v42 = v39; /*0x973cfb*/
  v37 = v43 - a1[3]; /*0x973d02*/
  v43 = v37; /*0x973d0e*/
  v38 = v44 - a1[4]; /*0x973d1e*/
  v44 = v38; /*0x973d2a*/
  v39 = v45 - a1[5]; /*0x973d36*/
  v45 = v39; /*0x973d3e*/
  v48 = sub_9708E0(&v40, a2, &v33, &v36, &v35); /*0x973d4e*/
  v16 = v33; /*0x973d52*/
  v34 = 1.0 - v33; /*0x973d5f*/
  if ( v46 > (double)v48 ) /*0x973d72*/
  {
    v46 = v48; /*0x973d78*/
    *a3 = v34; /*0x973d84*/
    *a4 = v16; /*0x973d86*/
    *a5 = v36; /*0x973d8c*/
    *a6 = v35; /*0x973d93*/
  }
  v17 = a2[1]; /*0x973d9d*/
  v18 = a2[2]; /*0x973da0*/
  v40 = *a2; /*0x973da3*/
  v19 = a2[3]; /*0x973da7*/
  v41 = v17; /*0x973daa*/
  v20 = a2[4]; /*0x973dae*/
  v43 = v19; /*0x973db1*/
  v42 = v18; /*0x973db5*/
  v21 = a2[5]; /*0x973db9*/
  v44 = v20; /*0x973dc1*/
  v45 = v21; /*0x973dca*/
  v49 = sub_9726E0(&v40, a1, &v36, &v34, &v33); /*0x973dde*/
  v35 = 0.0; /*0x973de7*/
  if ( v46 > (double)v49 ) /*0x973dfa*/
  {
    v46 = v49; /*0x973e00*/
    *a3 = v34; /*0x973e0c*/
    *a4 = v33; /*0x973e12*/
    *a5 = v36; /*0x973e18*/
    *a6 = 0.0; /*0x973e1b*/
  }
  v22 = a2[7]; /*0x973e26*/
  v23 = a2[8]; /*0x973e29*/
  v43 = a2[6]; /*0x973e2c*/
  v44 = v22; /*0x973e35*/
  v45 = v23; /*0x973e3e*/
  v50 = sub_9726E0(&v40, a1, &v35, &v34, &v33); /*0x973e52*/
  v36 = 0.0; /*0x973e5b*/
  if ( v46 > (double)v50 ) /*0x973e6e*/
  {
    v46 = v50; /*0x973e74*/
    *a3 = v34; /*0x973e80*/
    *a4 = v33; /*0x973e86*/
    *a5 = 0.0; /*0x973e88*/
    *a6 = v35; /*0x973e8f*/
  }
  v37 = a2[6] + *a2; /*0x973e9c*/
  v24 = a2[7]; /*0x973ea4*/
  v40 = v37; /*0x973ea7*/
  v25 = v24 + a2[1]; /*0x973eab*/
  v43 = a2[3]; /*0x973eb1*/
  v38 = v25; /*0x973eb9*/
  v26 = a2[8]; /*0x973ec1*/
  v41 = v38; /*0x973ec4*/
  v27 = v26 + a2[2]; /*0x973ec8*/
  v44 = a2[4]; /*0x973ecf*/
  v39 = v27; /*0x973ed3*/
  v42 = v39; /*0x973edb*/
  v45 = a2[5]; /*0x973ee7*/
  v51 = sub_9726E0(&v40, a1, &v36, &v34, &v33); /*0x973efb*/
  v35 = 1.0; /*0x973f04*/
  if ( v46 > (double)v51 ) /*0x973f17*/
  {
    v46 = v51; /*0x973f1d*/
    *a3 = v34; /*0x973f29*/
    *a4 = v33; /*0x973f2f*/
    *a5 = v36; /*0x973f35*/
    *a6 = 1.0; /*0x973f38*/
  }
  v37 = *a2 + a2[3]; /*0x973f45*/
  v28 = a2[4]; /*0x973f4d*/
  v40 = v37; /*0x973f50*/
  v29 = v28 + a2[1]; /*0x973f54*/
  v43 = a2[6]; /*0x973f5a*/
  v38 = v29; /*0x973f62*/
  v30 = a2[5]; /*0x973f6a*/
  v41 = v38; /*0x973f6d*/
  v31 = v30 + a2[2]; /*0x973f71*/
  v44 = a2[7]; /*0x973f78*/
  v39 = v31; /*0x973f7c*/
  v42 = v39; /*0x973f84*/
  v45 = a2[8]; /*0x973f90*/
  v52 = sub_9726E0(&v40, a1, &v35, &v34, &v33); /*0x973fa4*/
  if ( v46 <= (double)v52 ) /*0x973fba*/
    return v46; /*0x973fee*/
  *a3 = v34; /*0x973fcf*/
  *a4 = v33; /*0x973fd6*/
  *a5 = 1.0; /*0x973fda*/
  *a6 = v35; /*0x973fe2*/
  return v52; /*0x973fe8*/
}
