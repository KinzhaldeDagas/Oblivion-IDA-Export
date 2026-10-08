char __cdecl sub_95E4D0(
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
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // rt0
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // st2
  double v23; // st7
  float *v24; // eax
  double v25; // st7
  double v27; // rt1
  double v28; // st2
  double v29; // st7
  double v30; // st3
  double v31; // st5
  double v32; // st7
  double v33; // st5
  double v34; // st5
  bool v35; // c0
  double v36; // st6
  double v37; // st7
  double v38; // st5
  double v39; // st4
  double v40; // st5
  double v41; // rtt
  double v42; // st6
  double v43; // st7
  double v44; // st5
  double v45; // st4
  double v46; // st5
  double v47; // rt0
  bool v48; // pf
  double v49; // st7
  double v50; // st6
  double v51; // st7
  double v52; // st7
  float v53; // [esp+4h] [ebp-2Ch]
  float v54; // [esp+8h] [ebp-28h]
  float v55; // [esp+8h] [ebp-28h]
  float v56; // [esp+8h] [ebp-28h]
  float v57; // [esp+Ch] [ebp-24h]
  float v58; // [esp+Ch] [ebp-24h]
  float v59; // [esp+Ch] [ebp-24h]
  float v60; // [esp+Ch] [ebp-24h]
  float v61; // [esp+10h] [ebp-20h]
  float v62; // [esp+10h] [ebp-20h]
  float v63; // [esp+10h] [ebp-20h]
  float v64; // [esp+10h] [ebp-20h]
  float v65; // [esp+14h] [ebp-1Ch]
  float v66; // [esp+14h] [ebp-1Ch]
  float v67; // [esp+14h] [ebp-1Ch]
  float v68; // [esp+14h] [ebp-1Ch]
  float v69; // [esp+18h] [ebp-18h]
  float v70; // [esp+18h] [ebp-18h]
  float v71; // [esp+18h] [ebp-18h]
  float v72; // [esp+18h] [ebp-18h]
  float v73; // [esp+18h] [ebp-18h]
  float v74; // [esp+18h] [ebp-18h]
  float v75; // [esp+1Ch] [ebp-14h]
  float v76; // [esp+1Ch] [ebp-14h]
  float v77; // [esp+1Ch] [ebp-14h]
  float v78; // [esp+1Ch] [ebp-14h]
  float v79; // [esp+1Ch] [ebp-14h]
  float v80; // [esp+1Ch] [ebp-14h]
  float v81; // [esp+20h] [ebp-10h]
  float v82; // [esp+20h] [ebp-10h]
  float v83; // [esp+20h] [ebp-10h]
  float v84; // [esp+20h] [ebp-10h]
  float v85; // [esp+20h] [ebp-10h]
  float v86; // [esp+20h] [ebp-10h]
  float v87; // [esp+24h] [ebp-Ch]
  float v88; // [esp+24h] [ebp-Ch]
  float v89; // [esp+24h] [ebp-Ch]
  float v90; // [esp+24h] [ebp-Ch]
  float v91; // [esp+28h] [ebp-8h]
  float v92; // [esp+28h] [ebp-8h]
  float v93; // [esp+28h] [ebp-8h]
  float v94; // [esp+28h] [ebp-8h]
  float v95; // [esp+2Ch] [ebp-4h]
  float v96; // [esp+2Ch] [ebp-4h]
  float v97; // [esp+2Ch] [ebp-4h]
  float v98; // [esp+2Ch] [ebp-4h]
  float v99; // [esp+38h] [ebp+8h]
  float v100; // [esp+38h] [ebp+8h]
  float v101; // [esp+38h] [ebp+8h]
  float v102; // [esp+38h] [ebp+8h]
  int v103; // [esp+38h] [ebp+8h]
  float v104; // [esp+38h] [ebp+8h]
  int v105; // [esp+40h] [ebp+10h]

  v12 = a2[2]; /*0x95e4dc*/
  v13 = a2[1]; /*0x95e4df*/
  v14 = a2[3]; /*0x95e4e2*/
  v99 = a4[5] * v12 + a4[4] * v13 + a4[6] * v14; /*0x95e4f8*/
  v87 = v99 * a4[0xD]; /*0x95e503*/
  v100 = a4[8] * v12 + a4[7] * v13 + a4[9] * v14; /*0x95e51a*/
  v91 = v100 * a4[0xE]; /*0x95e525*/
  v15 = v13; /*0x95e53a*/
  v16 = v12 * a4[0xB] + a4[0xA] * v13 + v14 * a4[0xC]; /*0x95e53a*/
  v17 = v15; /*0x95e53a*/
  v101 = v16; /*0x95e53c*/
  v95 = v101 * a4[0xF]; /*0x95e547*/
  *(float *)&v105 = fabs(v91); /*0x95e551*/
  v102 = fabs(v87); /*0x95e55b*/
  v53 = fabs(v95); /*0x95e565*/
  v18 = v102; /*0x95e569*/
  *(float *)&v103 = v102 + *(float *)&v105 + v53; /*0x95e577*/
  v19 = a2[2]; /*0x95e57b*/
  v20 = a2[3]; /*0x95e57e*/
  v54 = a4[2] * v19 + a4[1] * v15 + a4[3] * v20; /*0x95e594*/
  v55 = v54 - a2[4]; /*0x95e59f*/
  v21 = v55; /*0x95e5a3*/
  v22 = -*(float *)&v103; /*0x95e5ab*/
  if ( v22 <= v55 ) /*0x95e5b4*/
  {
    *a6 = 0.0; /*0x95e5cf*/
    v88 = a2[1] * v21; /*0x95e5da*/
    v92 = a2[2] * v21; /*0x95e5e3*/
    v96 = v21 * a2[3]; /*0x95e5ea*/
    v69 = a4[1] - v88; /*0x95e5f5*/
    v75 = a4[2] - v92; /*0x95e600*/
    v23 = a4[3] - v96; /*0x95e60f*/
    *a7 = v69; /*0x95e613*/
    a7[1] = v75; /*0x95e615*/
    v81 = v23; /*0x95e618*/
    a7[2] = v81; /*0x95e620*/
    if ( !a8 ) /*0x95e623*/
      return 1; /*0x95e672*/
    *a10 = a2[1]; /*0x95e62c*/
    a10[1] = a2[2]; /*0x95e631*/
    a10[2] = a2[3]; /*0x95e637*/
    v89 = -*a10; /*0x95e63e*/
    v93 = -a10[1]; /*0x95e647*/
    v24 = a9; /*0x95e64e*/
    v25 = -a10[2]; /*0x95e652*/
LABEL_4:
    v97 = v25; /*0x95e654*/
    *v24 = v89; /*0x95e660*/
    v24[1] = v93; /*0x95e666*/
    v24[2] = v97; /*0x95e669*/
    return 1; /*0x95e669*/
  }
  v70 = *a5 - *a3; /*0x95e67f*/
  v76 = a5[1] - a3[1]; /*0x95e689*/
  v82 = a5[2] - a3[2]; /*0x95e693*/
  v27 = v22; /*0x95e6a3*/
  v28 = v17 * v70; /*0x95e6a3*/
  v29 = v27; /*0x95e6a3*/
  v30 = v19 * v76 + v28; /*0x95e6ad*/
  v31 = v55; /*0x95e6ad*/
  v56 = v20 * v82 + v30; /*0x95e6b1*/
  if ( v56 <= 0.0 ) /*0x95e6c2*/
    return 0; /*0x95e6c6*/
  if ( a1 * v56 + v31 >= v29 ) /*0x95e6e6*/
  {
    v32 = 0.0; /*0x95e6fa*/
    v104 = -((v31 + *(float *)&v103) / v56); /*0x95e6fe*/
    *a6 = v104; /*0x95e706*/
    v71 = *a5 * v104; /*0x95e714*/
    v77 = a5[1] * v104; /*0x95e71d*/
    v83 = v104 * a5[2]; /*0x95e728*/
    v57 = a4[1] + v71; /*0x95e733*/
    v61 = v77 + a4[2]; /*0x95e742*/
    v33 = v83 + a4[3]; /*0x95e74a*/
    *a7 = v57; /*0x95e74d*/
    a7[1] = v61; /*0x95e753*/
    v65 = v33; /*0x95e756*/
    v34 = flt_A37080; /*0x95e75e*/
    a7[2] = v65; /*0x95e764*/
    v35 = v34 < v18; /*0x95e767*/
    v36 = v34; /*0x95e76b*/
    if ( v35 ) /*0x95e770*/
    {
      v37 = v34; /*0x95e772*/
      v38 = a4[0xD]; /*0x95e784*/
      v39 = a4[4] * v38; /*0x95e78b*/
      if ( v87 <= 0.0 ) /*0x95e78d*/
      {
        v72 = v39; /*0x95e7be*/
        v78 = a4[5] * v38; /*0x95e7c7*/
        v84 = v38 * a4[6]; /*0x95e7ce*/
        *a7 = *a7 - v72; /*0x95e7d8*/
        a7[1] = a7[1] - v78; /*0x95e7e1*/
        v40 = a7[2] - v84; /*0x95e7e7*/
      }
      else
      {
        v58 = v39; /*0x95e78f*/
        v62 = a4[5] * v38; /*0x95e798*/
        v66 = v38 * a4[6]; /*0x95e79f*/
        *a7 = *a7 + v58; /*0x95e7a9*/
        a7[1] = a7[1] + v62; /*0x95e7b2*/
        v40 = v66 + a7[2]; /*0x95e7b9*/
      }
      a7[2] = v40; /*0x95e7eb*/
      v36 = v37; /*0x95e7ee*/
      v32 = 0.0; /*0x95e7ee*/
    }
    if ( v36 < *(float *)&v105 ) /*0x95e7f9*/
    {
      v41 = v36; /*0x95e7fb*/
      v42 = v32; /*0x95e7fb*/
      v43 = v41; /*0x95e7fb*/
      v44 = a4[0xE]; /*0x95e80d*/
      v45 = a4[7] * v44; /*0x95e814*/
      if ( v42 >= v91 ) /*0x95e816*/
      {
        v73 = v45; /*0x95e847*/
        v79 = a4[8] * v44; /*0x95e850*/
        v85 = v44 * a4[9]; /*0x95e857*/
        *a7 = *a7 - v73; /*0x95e861*/
        a7[1] = a7[1] - v79; /*0x95e86a*/
        v46 = a7[2] - v85; /*0x95e870*/
      }
      else
      {
        v59 = v45; /*0x95e818*/
        v63 = a4[8] * v44; /*0x95e821*/
        v67 = v44 * a4[9]; /*0x95e828*/
        *a7 = *a7 + v59; /*0x95e832*/
        a7[1] = a7[1] + v63; /*0x95e83b*/
        v46 = v67 + a7[2]; /*0x95e842*/
      }
      a7[2] = v46; /*0x95e874*/
      v47 = v42; /*0x95e877*/
      v36 = v43; /*0x95e877*/
      v32 = v47; /*0x95e877*/
    }
    if ( v36 < v53 ) /*0x95e882*/
    {
      v48 = v32 >= v95; /*0x95e88d*/
      v49 = a4[0xF]; /*0x95e894*/
      v50 = a4[0xA] * v49; /*0x95e89b*/
      if ( v48 ) /*0x95e89d*/
      {
        v74 = v50; /*0x95e8d1*/
        v80 = a4[0xB] * v49; /*0x95e8da*/
        v86 = v49 * a4[0xC]; /*0x95e8e1*/
        *a7 = *a7 - v74; /*0x95e8eb*/
        a7[1] = a7[1] - v80; /*0x95e8f4*/
        v51 = a7[2] - v86; /*0x95e8fa*/
      }
      else
      {
        v60 = v50; /*0x95e89f*/
        v64 = a4[0xB] * v49; /*0x95e8a8*/
        v68 = v49 * a4[0xC]; /*0x95e8af*/
        *a7 = *a7 + v60; /*0x95e8b9*/
        a7[1] = a7[1] + v64; /*0x95e8c2*/
        v51 = v68 + a7[2]; /*0x95e8c9*/
      }
      a7[2] = v51; /*0x95e8cc*/
    }
    if ( !a8 ) /*0x95e90a*/
      return 1; /*0x95e90a*/
    v90 = -a2[1]; /*0x95e919*/
    v94 = -a2[2]; /*0x95e922*/
    v52 = a2[3]; /*0x95e926*/
    *a9 = v90; /*0x95e92d*/
    v98 = -v52; /*0x95e935*/
    a9[1] = v94; /*0x95e939*/
    a9[2] = v98; /*0x95e940*/
    v24 = a10; /*0x95e948*/
    v89 = *a7 - a4[1]; /*0x95e94c*/
    v93 = a7[1] - a4[2]; /*0x95e956*/
    v25 = a7[2] - a4[3]; /*0x95e95d*/
    goto LABEL_4; /*0x95e960*/
  }
  return 0; /*0x95e66e*/
}
