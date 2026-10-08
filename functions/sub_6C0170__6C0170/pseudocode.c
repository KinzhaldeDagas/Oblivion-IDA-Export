void __cdecl sub_6C0170(float *a1, unsigned int a2)
{
  double v2; // st7
  unsigned int v3; // ebp
  unsigned int v5; // ebx
  float *v6; // esi
  int v7; // ebp
  double v8; // rt0
  float *v9; // ecx
  int v10; // eax
  double v11; // st7
  float *v12; // eax
  double v13; // st6
  float *v14; // eax
  float v15; // [esp+4h] [ebp-80h]
  float v16; // [esp+18h] [ebp-6Ch]
  float v17; // [esp+18h] [ebp-6Ch]
  float v18; // [esp+18h] [ebp-6Ch]
  float v19; // [esp+1Ch] [ebp-68h]
  float v20; // [esp+1Ch] [ebp-68h]
  float v21; // [esp+1Ch] [ebp-68h]
  float v22; // [esp+20h] [ebp-64h]
  float v23; // [esp+20h] [ebp-64h]
  float v24; // [esp+20h] [ebp-64h]
  float v25; // [esp+24h] [ebp-60h]
  float v26; // [esp+28h] [ebp-5Ch]
  float v27; // [esp+2Ch] [ebp-58h]
  float v28; // [esp+30h] [ebp-54h]
  float v29; // [esp+34h] [ebp-50h]
  float v30; // [esp+38h] [ebp-4Ch]
  float v31; // [esp+3Ch] [ebp-48h]
  float v32; // [esp+40h] [ebp-44h]
  float v33; // [esp+44h] [ebp-40h]
  float v34; // [esp+48h] [ebp-3Ch]
  float v35; // [esp+4Ch] [ebp-38h]
  float v36; // [esp+50h] [ebp-34h]
  float v37; // [esp+54h] [ebp-30h]
  float v38; // [esp+58h] [ebp-2Ch]
  float v39; // [esp+5Ch] [ebp-28h]
  float v40; // [esp+60h] [ebp-24h]
  float v41; // [esp+64h] [ebp-20h]
  float v42; // [esp+68h] [ebp-1Ch]
  float v43; // [esp+6Ch] [ebp-18h]
  float v44; // [esp+70h] [ebp-14h]
  float v45; // [esp+74h] [ebp-10h]
  int v46; // [esp+78h] [ebp-Ch] BYREF
  float v47; // [esp+7Ch] [ebp-8h]
  float v48; // [esp+80h] [ebp-4h]
  float v49; // [esp+88h] [ebp+4h]
  float v50; // [esp+88h] [ebp+4h]

  v2 = dbl_A3D0C0; /*0x6c0170*/
  v3 = a2; /*0x6c017b*/
  v5 = a2 - 1; /*0x6c0187*/
  if ( a2 >= 2 ) /*0x6c018a*/
  {
    v6 = a1 + 1; /*0x6c0196*/
    v16 = a1[1] * v2; /*0x6c019f*/
    v19 = a1[2] * v2; /*0x6c01aa*/
    v22 = v2 * a1[3]; /*0x6c01b1*/
    *(float *)&v46 = v16 - a1[0x14]; /*0x6c01bb*/
    v47 = v19 - a1[0x15]; /*0x6c01c6*/
    v48 = v22 - a1[0x16]; /*0x6c01d1*/
    sub_6BFF30(a1, (float *)&v46, a1 + 0x14, 1.0, 1.0); /*0x6c01e7*/
    if ( v5 > 1 ) /*0x6c01ef*/
    {
      v7 = a2 - 2; /*0x6c01f1*/
      do /*0x6c023d*/
      {
        v49 = v6[0x25] - v6[0x12]; /*0x6c0208*/
        v15 = v49; /*0x6c0216*/
        v50 = v6[0x12] - v6[0xFFFFFFFF]; /*0x6c021f*/
        sub_6BFF30(v6 + 0x12, v6, v6 + 0x26, v50, v15); /*0x6c0232*/
        v6 += 0x13; /*0x6c0237*/
        --v7; /*0x6c023a*/
      }
      while ( v7 ); /*0x6c023d*/
      v3 = a2; /*0x6c023f*/
    }
    v8 = dbl_A3D0C0; /*0x6c0257*/
    v17 = a1[0x13 * v5 + 1] * v8; /*0x6c0259*/
    v9 = &a1[0x13 * v5]; /*0x6c0261*/
    v10 = 0x13 * (v3 - 2); /*0x6c0268*/
    v20 = v9[2] * v8; /*0x6c026b*/
    v23 = v8 * v9[3]; /*0x6c0272*/
    v11 = v17 - a1[v10 + 1]; /*0x6c027a*/
    v12 = &a1[v10 + 1]; /*0x6c027e*/
    *(float *)&v46 = v11; /*0x6c0282*/
    v47 = v20 - v12[1]; /*0x6c0294*/
    v48 = v23 - v12[2]; /*0x6c029f*/
    sub_6BFF30(v9, v12, (float *)&v46, 1.0, 1.0); /*0x6c02b1*/
    v2 = dbl_A3D0C0; /*0x6c02b6*/
  }
  if ( a2 != 1 ) /*0x6c02bf*/
  {
    v13 = dbl_A30E48; /*0x6c02c5*/
    v14 = a1 + 0x16; /*0x6c02cb*/
    do /*0x6c0416*/
    {
      v18 = v14[0xFFFFFFF4] * v2; /*0x6c02d3*/
      v21 = v14[0xFFFFFFF5] * v2; /*0x6c02dc*/
      v24 = v14[0xFFFFFFF6] * v2; /*0x6c02e5*/
      v31 = v18 + v14[4]; /*0x6c02f0*/
      v32 = v21 + v14[5]; /*0x6c02fb*/
      v33 = v24 + v14[6]; /*0x6c0306*/
      v25 = v14[0xFFFFFFFE] - v14[0xFFFFFFEB]; /*0x6c0310*/
      v26 = v14[0xFFFFFFFF] - v14[0xFFFFFFEC]; /*0x6c031a*/
      v27 = *v14 - v14[0xFFFFFFED]; /*0x6c0323*/
      v28 = v25 * v13; /*0x6c032d*/
      v29 = v26 * v13; /*0x6c0337*/
      v30 = v27 * v13; /*0x6c0341*/
      v34 = v28 - v31; /*0x6c034d*/
      v14[0xFFFFFFF7] = v34; /*0x6c0359*/
      v35 = v29 - v32; /*0x6c0360*/
      v14[0xFFFFFFF8] = v35; /*0x6c036c*/
      v36 = v30 - v33; /*0x6c0373*/
      v14[0xFFFFFFF9] = v36; /*0x6c037b*/
      v37 = v14[0xFFFFFFFE] - v14[0xFFFFFFEB]; /*0x6c0384*/
      v38 = v14[0xFFFFFFFF] - v14[0xFFFFFFEC]; /*0x6c038e*/
      v39 = *v14 - v14[0xFFFFFFED]; /*0x6c0397*/
      v43 = v37 * v2; /*0x6c03a1*/
      v44 = v38 * v2; /*0x6c03ab*/
      v45 = v39 * v2; /*0x6c03b5*/
      v40 = v14[0xFFFFFFF4] + v14[4]; /*0x6c03bf*/
      v41 = v14[5] + v14[0xFFFFFFF5]; /*0x6c03c9*/
      v42 = v14[6] + v14[0xFFFFFFF6]; /*0x6c03d3*/
      *(float *)&v46 = v40 - v43; /*0x6c03df*/
      v14[0xFFFFFFFA] = *(float *)&v46; /*0x6c03ef*/
      v14 += 0x13; /*0x6c03f2*/
      --v5; /*0x6c03f5*/
      v47 = v41 - v44; /*0x6c03f8*/
      v14[0xFFFFFFE8] = v47; /*0x6c0404*/
      v48 = v42 - v45; /*0x6c040b*/
      v14[0xFFFFFFE9] = v48; /*0x6c0413*/
    }
    while ( v5 ); /*0x6c0416*/
  }
}
