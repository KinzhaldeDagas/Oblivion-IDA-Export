bool __cdecl sub_9607B0(float a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
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
  float v39; // [esp+8h] [ebp-84h] BYREF
  float v40; // [esp+Ch] [ebp-80h]
  float v41; // [esp+10h] [ebp-7Ch]
  float v42; // [esp+14h] [ebp-78h]
  float v43; // [esp+18h] [ebp-74h]
  float v44; // [esp+1Ch] [ebp-70h]
  float v45; // [esp+20h] [ebp-6Ch]
  float v46; // [esp+24h] [ebp-68h]
  float v47; // [esp+28h] [ebp-64h]
  float v48; // [esp+2Ch] [ebp-60h] BYREF
  float v49; // [esp+30h] [ebp-5Ch] BYREF
  float v50; // [esp+34h] [ebp-58h] BYREF
  float v51; // [esp+38h] [ebp-54h]
  float v52; // [esp+3Ch] [ebp-50h]
  float v53; // [esp+40h] [ebp-4Ch]
  float v54[9]; // [esp+44h] [ebp-48h] BYREF
  float v55[9]; // [esp+68h] [ebp-24h] BYREF

  v54[0] = *a4; /*0x9607c0*/
  v7 = *a5 - *a4; /*0x9607d0*/
  v54[1] = a4[1]; /*0x9607d2*/
  v54[2] = a4[2]; /*0x9607d9*/
  v45 = v7; /*0x9607dd*/
  v46 = a5[1] - a4[1]; /*0x9607e8*/
  v8 = a5[2] - a4[2]; /*0x9607f7*/
  v54[3] = v45; /*0x9607fa*/
  v54[4] = v46; /*0x960805*/
  v47 = v8; /*0x960809*/
  v9 = *a6; /*0x960811*/
  v54[5] = v47; /*0x960813*/
  v39 = v9 - *a4; /*0x960819*/
  v40 = a6[1] - a4[1]; /*0x960823*/
  v10 = a6[2] - a4[2]; /*0x960832*/
  v54[6] = v39; /*0x960835*/
  v54[7] = v40; /*0x960840*/
  v41 = v10; /*0x960844*/
  v11 = *a3 - *a7; /*0x960855*/
  v54[8] = v41; /*0x960857*/
  v51 = v11; /*0x96085b*/
  v52 = a3[1] - a7[1]; /*0x960865*/
  v53 = a3[2] - a7[2]; /*0x96086f*/
  v42 = v41 * v46 - v40 * v47; /*0x960893*/
  v43 = v47 * v39 - v41 * v45; /*0x9608ad*/
  v44 = v45 * v40 - v39 * v46; /*0x9608b7*/
  v39 = -v42; /*0x9608c8*/
  v40 = -v43; /*0x9608d2*/
  v41 = -v44; /*0x9608dc*/
  v12 = v40; /*0x9608e3*/
  v13 = v39; /*0x9608f6*/
  v14 = v41; /*0x960905*/
  v48 = a2[3] * v41 + a2[1] * v39 + a2[2] * v40; /*0x960909*/
  if ( a2[0xE] >= (double)a2[7] ) /*0x96091a*/
    v15 = a2[0xE]; /*0x960921*/
  else
    v15 = a2[7]; /*0x96091c*/
  v50 = v15; /*0x960924*/
  v49 = *a4 * v13 + v12 * a4[1] + a4[2] * v14; /*0x96093a*/
  v38 = v48 - v49; /*0x960946*/
  v16 = v13 * v13; /*0x960958*/
  v17 = v38 * v38; /*0x960958*/
  v38 = v12 * v12 + v16 + v14 * v14; /*0x960960*/
  v38 = v38 * v50 * v50; /*0x960972*/
  v18 = v38 < v17; /*0x96097a*/
  v19 = a1; /*0x96097e*/
  v20 = v53; /*0x960988*/
  if ( v18 ) /*0x96098c*/
  {
    Vector3_NormalizeInPlace(&v39); /*0x96099a*/
    v21 = v40; /*0x9609ad*/
    v22 = v39; /*0x9609ba*/
    v23 = v41; /*0x9609c6*/
    v20 = v53; /*0x9609d4*/
    v24 = v41 * v53 + v40 * v52 + v39 * v51; /*0x9609d6*/
    if ( v49 >= (double)v48 ) /*0x9609d8*/
    {
      v38 = v24; /*0x960a3f*/
      if ( v38 <= (double)*(float *)&SrcStr ) /*0x960a52*/
        return 0; /*0x960a52*/
      v42 = v22 * v50; /*0x960a60*/
      v43 = v21 * v50; /*0x960a68*/
      v44 = v50 * v23; /*0x960a6e*/
      v45 = a2[1] + v42; /*0x960a79*/
      v46 = a2[2] + v43; /*0x960a84*/
      v26 = a2[3] + v44; /*0x960a8b*/
    }
    else
    {
      v38 = v24; /*0x9609da*/
      if ( v38 >= (double)*(float *)&SrcStr ) /*0x9609ed*/
        return 0; /*0x960a01*/
      v42 = v22 * v50; /*0x960a0e*/
      v43 = v21 * v50; /*0x960a16*/
      v44 = v50 * v23; /*0x960a1c*/
      v45 = a2[1] - v42; /*0x960a27*/
      v46 = a2[2] - v43; /*0x960a32*/
      v26 = a2[3] - v44; /*0x960a39*/
    }
    v47 = v26; /*0x960a8f*/
    v27 = *a4 * v22; /*0x960a9d*/
    v40 = v46; /*0x960aa5*/
    v28 = v21 * a4[1]; /*0x960aa9*/
    v39 = v45; /*0x960aac*/
    v41 = v47; /*0x960ab0*/
    v49 = v27 + v28 + a4[2] * v23; /*0x960abd*/
    v29 = v49 + dbl_A30E40; /*0x960ac5*/
    v38 = v46 * v21 + v45 * v22 + v47 * v23; /*0x960ae1*/
    if ( v38 <= v29 ) /*0x960af0*/
    {
      v19 = a1; /*0x960b8a*/
    }
    else
    {
      v42 = v51 * a1; /*0x960b07*/
      v43 = v52 * a1; /*0x960b11*/
      v44 = v20 * a1; /*0x960b19*/
      v45 = v42 + v39; /*0x960b25*/
      v46 = v43 + v40; /*0x960b31*/
      v47 = v44 + v41; /*0x960b3d*/
      v30 = v21 * v46; /*0x960b4d*/
      v19 = a1; /*0x960b4d*/
      v38 = v23 * v47 + v22 * v45 + v30; /*0x960b5b*/
      if ( v38 > v29 ) /*0x960b6a*/
        return 0; /*0x960b7a*/
    }
  }
  if ( g_zeroNiPoint3.x == v51 && g_zeroNiPoint3.y == v52 && g_zeroNiPoint3.z == v20 ) /*0x960bc3*/
  {
    v37 = sub_9726E0(a2 + 8, v54, &v49, &v48, &v38); /*0x960c73*/
  }
  else
  {
    v31 = a2[8]; /*0x960bc9*/
    v32 = a2[9]; /*0x960bce*/
    v33 = a2[0xA]; /*0x960bd1*/
    v42 = v51 * v19; /*0x960bd4*/
    v55[0] = v31; /*0x960bd8*/
    v34 = a2[0xB]; /*0x960be0*/
    v55[1] = v32; /*0x960be5*/
    v35 = a2[0xC]; /*0x960be9*/
    v55[2] = v33; /*0x960bec*/
    v36 = a2[0xD]; /*0x960bf0*/
    v43 = v52 * v19; /*0x960bf3*/
    v55[3] = v34; /*0x960bf7*/
    v55[4] = v35; /*0x960c01*/
    v55[5] = v36; /*0x960c09*/
    v44 = v19 * v20; /*0x960c10*/
    v55[6] = v42; /*0x960c18*/
    v55[7] = v43; /*0x960c1f*/
    v55[8] = v44; /*0x960c2b*/
    v37 = sub_973BF0(v54, v55, &v48, &v38, &v50, &v49); /*0x960c4b*/
  }
  v48 = v37; /*0x960c7b*/
  return v48 <= a2[0xE] * a2[0xE]; /*0x9609fb*/
}
