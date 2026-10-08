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
  float *v18; // eax
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

  v11 = a4 + 8; /*0x95e98d*/
  v12 = a2 + 1; /*0x95e998*/
  v13 = a4 + 0xB; /*0x95e99d*/
  v67 = a4[9] * a2[2] + a4[8] * a2[1] + a4[0xA] * a2[3]; /*0x95e9ac*/
  v46 = v67 - a2[4]; /*0x95e9b7*/
  v48 = *v11 + *v13; /*0x95e9bf*/
  v49 = v13[1] + v11[1]; /*0x95e9c9*/
  v50 = v13[2] + v11[2]; /*0x95e9d3*/
  v68 = a2[1] * v48 + a2[2] * v49 + a2[3] * v50; /*0x95e9ef*/
  *(float *)&v69 = v68 - a2[4]; /*0x95e9fa*/
  v14 = v46; /*0x95ea00*/
  v15 = *(float *)&v69; /*0x95ea08*/
  if ( v46 < 0.0 && v15 > 0.0 ) /*0x95ea18*/
    goto LABEL_5; /*0x95ea18*/
  v16 = v46; /*0x95ea1a*/
  v17 = *(float *)&v69; /*0x95ea1a*/
  if ( v46 > 0.0 ) /*0x95ea23*/
  {
    v15 = *(float *)&v69; /*0x95ea25*/
    v14 = v46; /*0x95ea25*/
    if ( *(float *)&v69 < 0.0 ) /*0x95ea2e*/
    {
LABEL_5:
      *a6 = 0.0; /*0x95ea30*/
      v18 = a7; /*0x95ea38*/
      v61 = v14 / (v14 - v15); /*0x95ea42*/
      v48 = *v13 * v61; /*0x95ea52*/
      v49 = v13[1] * v61; /*0x95ea5b*/
      v50 = v61 * v13[2]; /*0x95ea62*/
      *(float *)&v51 = *v11 + v48; /*0x95ea6c*/
      v52 = v11[1] + v49; /*0x95ea7b*/
      v19 = v52; /*0x95ea7f*/
      v20 = v11[2]; /*0x95ea83*/
      *a7 = *(float *)&v51; /*0x95ea86*/
      v53 = v20 + v50; /*0x95ea8c*/
      v21 = v53; /*0x95ea90*/
LABEL_24:
      v18[1] = v19; /*0x95ee8f*/
      v18[2] = v21; /*0x95ee92*/
      goto LABEL_25; /*0x95ee92*/
    }
    v16 = v46; /*0x95ea99*/
    v17 = *(float *)&v69; /*0x95ea99*/
  }
  v47 = -v11[6]; /*0x95eaa0*/
  if ( v47 > v16 ) /*0x95eaaf*/
  {
    if ( v47 <= v17 ) /*0x95ebae*/
    {
      *a6 = 0.0; /*0x95ebc1*/
      sub_96C420((float *)&v56, 1.0, (int)&g_zeroNiPoint3); /*0x95ebcd*/
      v60 = a4[0xE]; /*0x95ebd5*/
      *(float *)&v51 = *v11 + a4[0xB]; /*0x95ebde*/
      v27 = v11[1]; /*0x95ebe6*/
      v57 = *(float *)&v51; /*0x95ebe9*/
      v52 = v27 + a4[0xC]; /*0x95ebfc*/
      v28 = v11[2]; /*0x95ec04*/
      v58 = v52; /*0x95ec07*/
      v53 = v28 + a4[0xD]; /*0x95ec1a*/
      v59 = v53; /*0x95ec26*/
      return sub_95E250(a1, a2, a3, (float *)&v56, a5, a6, a7, a8, a9, a10); /*0x95ec57*/
    }
    *(float *)&v51 = *a5 - *a3; /*0x95ec65*/
    v52 = a5[1] - a3[1]; /*0x95ec6f*/
    v53 = a5[2] - a3[2]; /*0x95ec79*/
    v62 = a2[2] * v52 + a2[1] * *(float *)&v51 + a2[3] * v53; /*0x95ec95*/
    v29 = v62; /*0x95eca1*/
    if ( v62 <= 0.0 ) /*0x95eca6*/
      return 0; /*0x95eca6*/
    *(float *)&v63 = -(v29 * a1 + v11[6]); /*0x95ecb3*/
    if ( *(float *)&v63 > v16 && *(float *)&v63 > v17 ) /*0x95eccb*/
      return 0; /*0x95ecdc*/
    if ( v17 + dbl_AA3A18 >= v16 ) /*0x95ecf2*/
    {
      v31 = -((v17 + v11[6]) / v29); /*0x95ed58*/
      if ( v16 + dbl_AA3A18 >= v17 ) /*0x95ed5a*/
      {
        v66 = v31; /*0x95edcf*/
        *a6 = v66; /*0x95edd9*/
        v34 = dbl_A2FAA0; /*0x95ede9*/
        *(float *)&v51 = *v13 * v34; /*0x95edeb*/
        v52 = v13[1] * v34; /*0x95edf4*/
        v53 = v34 * v13[2]; /*0x95edfb*/
        v48 = *v11 + *(float *)&v51; /*0x95ee05*/
        v49 = v11[1] + v52; /*0x95ee10*/
        v50 = v11[2] + v53; /*0x95ee1b*/
        v35 = sub_47DA10((float *)&v56, v66, a5); /*0x95ee23*/
        *(float *)&v51 = *v35 + v48; /*0x95ee33*/
        v52 = v35[1] + v49; /*0x95ee3e*/
        v53 = v35[2] + v50; /*0x95ee4d*/
        v36 = sub_4707B0(v12, (float *)v55, v11[6]); /*0x95ee58*/
        v48 = *v36 + *(float *)&v51; /*0x95ee63*/
        v49 = v36[1] + v52; /*0x95ee72*/
        v19 = v49; /*0x95ee76*/
        v37 = v36[2]; /*0x95ee7a*/
        v18 = a7; /*0x95ee7d*/
        v38 = v37 + v53; /*0x95ee81*/
        *a7 = v48; /*0x95ee85*/
        v50 = v38; /*0x95ee87*/
        v21 = v50; /*0x95ee8b*/
        goto LABEL_24; /*0x95ee8b*/
      }
      v65 = v31; /*0x95ed5c*/
      *a6 = v65; /*0x95ed69*/
      v45 = sub_4707B0(v12, (float *)v55, v11[6]); /*0x95ed7d*/
      v44 = (float *)v54; /*0x95ed82*/
      v43 = sub_47DA10((float *)&v51, v65, a5); /*0x95ed95*/
      v32 = sub_47D9B0(v11, (float *)&v56, v13); /*0x95eda8*/
      v30 = sub_47D9B0(v32, &v48, v43); /*0x95edaa*/
    }
    else
    {
      v64 = -((v16 + v11[6]) / v29); /*0x95ed0a*/
      *a6 = v64; /*0x95ed12*/
      v45 = sub_4707B0(v12, (float *)&v51, v11[6]); /*0x95ed24*/
      v44 = &v48; /*0x95ed29*/
      v42 = sub_47DA10((float *)v54, v64, a5); /*0x95ed3c*/
      v30 = sub_47D9B0(v11, (float *)v55, v42); /*0x95ed44*/
    }
    v33 = sub_47D9B0(v30, v44, v45); /*0x95edb1*/
    *a7 = *v33; /*0x95edbc*/
    a7[1] = v33[1]; /*0x95edc1*/
    a7[2] = v33[2]; /*0x95edc7*/
LABEL_25:
    if ( a8 ) /*0x95ee9a*/
    {
      *a10 = *v12; /*0x95eea5*/
      a10[1] = v12[1]; /*0x95eeaa*/
      a10[2] = v12[2]; /*0x95eeb0*/
      *(float *)&v51 = -*a10; /*0x95eeb7*/
      v52 = -a10[1]; /*0x95eec4*/
      v39 = v52; /*0x95eec8*/
      v40 = -a10[2]; /*0x95eed3*/
      *a9 = *(float *)&v51; /*0x95eed5*/
      v53 = v40; /*0x95eed7*/
      v41 = v53; /*0x95eedb*/
      a9[1] = v39; /*0x95eedf*/
      a9[2] = v41; /*0x95eee2*/
    }
    return 1; /*0x95eee8*/
  }
  *a6 = 0.0; /*0x95eac5*/
  sub_96C420((float *)&v56, 1.0, (int)&g_zeroNiPoint3); /*0x95ead0*/
  v60 = a4[0xE]; /*0x95ead8*/
  if ( -v11[6] > *(float *)&v69 ) /*0x95eaf0*/
  {
    v25 = v11[1]; /*0x95eb4f*/
    v26 = v11[2]; /*0x95eb52*/
    v57 = *v11; /*0x95eb55*/
    v58 = v25; /*0x95eb65*/
    v59 = v26; /*0x95eb75*/
  }
  else
  {
    v22 = a4[2]; /*0x95eaf5*/
    v23 = a4[3]; /*0x95eaf8*/
    v57 = a4[1]; /*0x95eafb*/
    v58 = v22; /*0x95eb0b*/
    v59 = v23; /*0x95eb1b*/
  }
  return sub_95E250(a1, a2, a3, (float *)&v56, a5, a6, a7, a8, a9, a10); /*0x95eb47*/
}
