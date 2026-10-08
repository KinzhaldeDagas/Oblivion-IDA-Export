char __cdecl sub_96C6A0(
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
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st3
  bool v18; // c0
  bool v19; // c3
  double v20; // st3
  double v21; // st4
  double v23; // rtt
  double v24; // st3
  double v25; // st5
  double v26; // st4
  double v27; // st6
  double v28; // rt0
  double v29; // st7
  double v30; // st7
  double v31; // st7
  double v32; // st7
  double v33; // st5
  double v34; // st7
  float *v35; // eax
  double v36; // st7
  double v37; // st7
  double v38; // st7
  float v39; // [esp+Ch] [ebp-34h]
  float v40; // [esp+10h] [ebp-30h]
  float v41; // [esp+10h] [ebp-30h]
  float v42; // [esp+14h] [ebp-2Ch]
  float v43; // [esp+14h] [ebp-2Ch]
  float v44; // [esp+18h] [ebp-28h]
  float v45; // [esp+18h] [ebp-28h]
  float v46; // [esp+1Ch] [ebp-24h]
  float v47; // [esp+1Ch] [ebp-24h]
  float v48; // [esp+1Ch] [ebp-24h]
  float v49; // [esp+20h] [ebp-20h]
  float v50; // [esp+20h] [ebp-20h]
  float v51; // [esp+20h] [ebp-20h]
  float v52; // [esp+24h] [ebp-1Ch]
  float v53; // [esp+24h] [ebp-1Ch]
  float v54; // [esp+24h] [ebp-1Ch]
  float v55; // [esp+28h] [ebp-18h]
  float v56; // [esp+28h] [ebp-18h]
  float v57; // [esp+28h] [ebp-18h]
  float v58; // [esp+28h] [ebp-18h]
  float v59; // [esp+28h] [ebp-18h]
  float v60; // [esp+28h] [ebp-18h]
  float v61; // [esp+28h] [ebp-18h]
  float v62; // [esp+2Ch] [ebp-14h]
  float v63; // [esp+2Ch] [ebp-14h]
  float v64; // [esp+2Ch] [ebp-14h]
  float v65; // [esp+2Ch] [ebp-14h]
  float v66; // [esp+2Ch] [ebp-14h]
  float v67; // [esp+2Ch] [ebp-14h]
  float v68; // [esp+2Ch] [ebp-14h]
  float v69; // [esp+30h] [ebp-10h]
  float v70; // [esp+30h] [ebp-10h]
  float v71; // [esp+30h] [ebp-10h]
  float v72; // [esp+30h] [ebp-10h]
  float v73; // [esp+30h] [ebp-10h]
  float v74; // [esp+30h] [ebp-10h]
  float v75; // [esp+30h] [ebp-10h]
  float v76; // [esp+34h] [ebp-Ch]
  float v77; // [esp+34h] [ebp-Ch]
  float v78; // [esp+34h] [ebp-Ch]
  float v79; // [esp+34h] [ebp-Ch]
  float v80; // [esp+34h] [ebp-Ch]
  float v81; // [esp+34h] [ebp-Ch]
  float v82; // [esp+34h] [ebp-Ch]
  float v83; // [esp+38h] [ebp-8h]
  float v84; // [esp+38h] [ebp-8h]
  float v85; // [esp+38h] [ebp-8h]
  float v86; // [esp+38h] [ebp-8h]
  float v87; // [esp+38h] [ebp-8h]
  float v88; // [esp+38h] [ebp-8h]
  float v89; // [esp+38h] [ebp-8h]
  float v90; // [esp+3Ch] [ebp-4h]
  float v91; // [esp+3Ch] [ebp-4h]
  float v92; // [esp+3Ch] [ebp-4h]
  float v93; // [esp+3Ch] [ebp-4h]
  float v94; // [esp+3Ch] [ebp-4h]
  float v95; // [esp+3Ch] [ebp-4h]
  float v96; // [esp+3Ch] [ebp-4h]
  int v97; // [esp+48h] [ebp+8h]
  int v98; // [esp+4Ch] [ebp+Ch]
  int v99; // [esp+50h] [ebp+10h]
  float v100; // [esp+50h] [ebp+10h]
  int v101; // [esp+50h] [ebp+10h]
  float v102; // [esp+50h] [ebp+10h]
  int v103; // [esp+54h] [ebp+14h]
  float v104; // [esp+54h] [ebp+14h]
  float v105; // [esp+54h] [ebp+14h]
  float v106; // [esp+54h] [ebp+14h]
  float v107; // [esp+54h] [ebp+14h]
  float v108; // [esp+54h] [ebp+14h]
  float v109; // [esp+54h] [ebp+14h]
  float v110; // [esp+54h] [ebp+14h]

  v46 = *a5 - *a3; /*0x96c6b6*/
  v49 = a5[1] - a3[1]; /*0x96c6c4*/
  v52 = a5[2] - a3[2]; /*0x96c6ce*/
  *(float *)&v98 = v52 * v52 + v49 * v49 + v46 * v46; /*0x96c6f8*/
  v40 = a4[1] - a2[1]; /*0x96c702*/
  v42 = a4[2] - a2[2]; /*0x96c70c*/
  v44 = a4[3] - a2[3]; /*0x96c716*/
  *(float *)&v99 = v40 * v40 + v42 * v42 + v44 * v44; /*0x96c738*/
  *(float *)&v97 = a4[4] + a2[4]; /*0x96c742*/
  v39 = *(float *)&v97 * *(float *)&v97; /*0x96c74c*/
  if ( *(float *)&v98 <= 0.0 ) /*0x96c75d*/
  {
    v14 = 0.0; /*0x96cae2*/
  }
  else
  {
    v14 = 0.0; /*0x96c76d*/
    v15 = *(float *)&v98; /*0x96c77b*/
    *(float *)&v103 = v52 * v44 + v46 * v40 + v49 * v42; /*0x96c77d*/
    v16 = *(float *)&v103; /*0x96c781*/
    if ( *(float *)&v103 <= 0.0 ) /*0x96c78c*/
    {
      v17 = -a1 * v15; /*0x96c79a*/
      v18 = v17 < v16; /*0x96c79c*/
      v19 = v17 == v16; /*0x96c79c*/
      v20 = *(float *)&v99; /*0x96c7a0*/
      if ( v18 || v19 ) /*0x96c7a4*/
      {
        v21 = v39; /*0x96c7e3*/
      }
      else
      {
        v21 = v39; /*0x96c7c9*/
        if ( dbl_AA3AF8 + v39 < a1 * (v15 * a1 + v16 + v16) + v20 ) /*0x96c7ce*/
          return 0; /*0x96c7e2*/
      }
      v23 = *(float *)&v99; /*0x96c7e9*/
      v100 = v20 - v21; /*0x96c7eb*/
      v24 = v16 * v16; /*0x96c7fb*/
      v25 = v100; /*0x96c7fb*/
      v26 = v24 - v15 * v100; /*0x96c7ff*/
      v27 = v23; /*0x96c7ff*/
      *(float *)&v101 = v26; /*0x96c801*/
      if ( *(float *)&v101 < 0.0 ) /*0x96c810*/
        return 0; /*0x96cad7*/
      if ( v25 > 0.0 ) /*0x96c81f*/
      {
        v102 = sqrt(*(float *)&v101); /*0x96c92c*/
        v104 = -((v102 + *(float *)&v103) / *(float *)&v98); /*0x96c942*/
        *a6 = v104; /*0x96c94a*/
        if ( v104 >= 0.0 ) /*0x96c955*/
        {
          if ( a1 < (double)v104 ) /*0x96c96c*/
            *a6 = a1; /*0x96c96e*/
        }
        else
        {
          *a6 = 0.0; /*0x96c959*/
        }
        v105 = *a6; /*0x96c97b*/
        v57 = v105 * v46; /*0x96c98d*/
        v64 = v49 * v105; /*0x96c997*/
        v71 = v105 * v52; /*0x96c99f*/
        v48 = v57 + v40; /*0x96c9ab*/
        v51 = v64 + v42; /*0x96c9b7*/
        v54 = v71 + v44; /*0x96c9c3*/
        v106 = a2[4] / *(float *)&v97; /*0x96c9ce*/
        v76 = v48 * v106; /*0x96c9e0*/
        v83 = v51 * v106; /*0x96c9ea*/
        v90 = v106 * v54; /*0x96c9f2*/
        v107 = *a6; /*0x96c9f8*/
        v58 = v107 * *a3; /*0x96ca04*/
        v65 = v107 * a3[1]; /*0x96ca0d*/
        v72 = v107 * a3[2]; /*0x96ca14*/
        v41 = a2[1] + v58; /*0x96ca1f*/
        v43 = a2[2] + v65; /*0x96ca2a*/
        v45 = a2[3] + v72; /*0x96ca35*/
        v59 = v41 + v76; /*0x96ca41*/
        *a7 = v59; /*0x96ca4d*/
        v66 = v43 + v83; /*0x96ca53*/
        a7[1] = v66; /*0x96ca5f*/
        v73 = v45 + v90; /*0x96ca66*/
        a7[2] = v73; /*0x96ca6e*/
        if ( a8 ) /*0x96ca71*/
        {
          *a9 = v48; /*0x96ca83*/
          a9[1] = v51; /*0x96ca85*/
          a9[2] = v54; /*0x96ca88*/
          Vector3_NormalizeInPlace(a9); /*0x96ca8d*/
          v77 = -*a9; /*0x96ca9c*/
          v84 = -a9[1]; /*0x96caa9*/
          v30 = a9[2]; /*0x96cab1*/
          *a10 = v77; /*0x96cab4*/
          a10[1] = v84; /*0x96cab8*/
          v91 = -v30; /*0x96cabb*/
          a10[2] = v91; /*0x96cac3*/
        }
        return 1; /*0x96cac8*/
      }
      else
      {
        *a6 = 0.0; /*0x96c832*/
        v47 = a2[1] + a4[1]; /*0x96c83e*/
        v50 = a2[2] + a4[2]; /*0x96c848*/
        v53 = a2[3] + a4[3]; /*0x96c852*/
        v28 = dbl_A2FAA0; /*0x96c862*/
        v55 = v47 * v28; /*0x96c864*/
        *a7 = v55; /*0x96c870*/
        v62 = v50 * v28; /*0x96c874*/
        a7[1] = v62; /*0x96c87c*/
        v69 = v28 * v53; /*0x96c883*/
        a7[2] = v69; /*0x96c88b*/
        if ( a8 ) /*0x96c88e*/
        {
          if ( v27 <= flt_AA3B44 ) /*0x96c8a3*/
          {
            *a9 = stru_B258D0.x; /*0x96c8ca*/
            a9[1] = stru_B258D0.y; /*0x96c8d1*/
            a9[2] = stru_B258D0.z; /*0x96c8da*/
          }
          else
          {
            *a9 = v40; /*0x96c8b1*/
            a9[1] = v42; /*0x96c8b3*/
            a9[2] = v44; /*0x96c8b6*/
            Vector3_NormalizeInPlace(a9); /*0x96c8bb*/
          }
          v56 = -*a9; /*0x96c8e6*/
          v63 = -a9[1]; /*0x96c8f3*/
          v29 = a9[2]; /*0x96c8fb*/
          *a10 = v56; /*0x96c8fe*/
          a10[1] = v63; /*0x96c902*/
          v70 = -v29; /*0x96c905*/
          a10[2] = v70; /*0x96c90e*/
          return 1; /*0x96c911*/
        }
        else
        {
          return 1; /*0x96c91c*/
        }
      }
    }
  }
  if ( v39 < (double)*(float *)&v99 ) /*0x96caf9*/
    return 0; /*0x96caf9*/
  *a6 = v14; /*0x96cb03*/
  v108 = a5[2] * a5[2] + *a5 * *a5 + a5[1] * a5[1]; /*0x96cb2b*/
  v31 = v108; /*0x96cb47*/
  v109 = a3[2] * a3[2] + *a3 * *a3 + a3[1] * a3[1]; /*0x96cb49*/
  if ( v109 >= v31 ) /*0x96cb58*/
  {
    v81 = a2[1] - a4[1]; /*0x96cc20*/
    v88 = a2[2] - a4[2]; /*0x96cc2e*/
    v37 = a2[3] - a4[3]; /*0x96cc3d*/
    *a10 = v81; /*0x96cc40*/
    a10[1] = v88; /*0x96cc42*/
    v94 = v37; /*0x96cc47*/
    a10[2] = v94; /*0x96cc4f*/
    Vector3_NormalizeInPlace(a10); /*0x96cc52*/
    v110 = a4[4]; /*0x96cc60*/
    v82 = v110 * *a10; /*0x96cc6c*/
    v89 = a10[1] * v110; /*0x96cc75*/
    v95 = v110 * a10[2]; /*0x96cc7c*/
    v61 = v82 + a4[1]; /*0x96cc87*/
    v68 = a4[2] + v89; /*0x96cc96*/
    v38 = a4[3]; /*0x96cc9e*/
    *a7 = v61; /*0x96cca1*/
    a7[1] = v68; /*0x96cca7*/
    v75 = v38 + v95; /*0x96ccaa*/
    a7[2] = v75; /*0x96ccb2*/
    v35 = a9; /*0x96ccb7*/
    v80 = -*a10; /*0x96ccbd*/
    v87 = -a10[1]; /*0x96ccc6*/
    v36 = a10[2]; /*0x96ccca*/
  }
  else
  {
    v78 = a4[1] - a2[1]; /*0x96cb64*/
    v85 = a4[2] - a2[2]; /*0x96cb72*/
    v32 = a4[3] - a2[3]; /*0x96cb81*/
    *a9 = v78; /*0x96cb84*/
    a9[1] = v85; /*0x96cb86*/
    v92 = v32; /*0x96cb8b*/
    a9[2] = v92; /*0x96cb93*/
    Vector3_NormalizeInPlace(a9); /*0x96cb96*/
    v33 = a2[4]; /*0x96cbae*/
    v79 = *a9 * v33; /*0x96cbb4*/
    v86 = a9[1] * v33; /*0x96cbbd*/
    v93 = v33 * a9[2]; /*0x96cbc4*/
    v60 = a2[1] + v79; /*0x96cbcf*/
    v67 = a2[2] + v86; /*0x96cbde*/
    v34 = a2[3]; /*0x96cbe6*/
    *a7 = v60; /*0x96cbe9*/
    a7[1] = v67; /*0x96cbef*/
    v74 = v34 + v93; /*0x96cbf2*/
    a7[2] = v74; /*0x96cbfa*/
    v35 = a10; /*0x96cbff*/
    v80 = -*a9; /*0x96cc05*/
    v87 = -a9[1]; /*0x96cc0e*/
    v36 = a9[2]; /*0x96cc12*/
  }
  v96 = -v36; /*0x96ccd7*/
  *v35 = v80; /*0x96ccdb*/
  v35[1] = v87; /*0x96cce2*/
  v35[2] = v96; /*0x96cce6*/
  return 1; /*0x96c7db*/
}
