float *__usercall sub_974E40@<eax>(
        int a1@<edx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        float *a7,
        float *a8,
        float *a9)
{
  double v10; // st7
  double v11; // st6
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  bool v15; // pf
  double v16; // st6
  bool v17; // c0
  bool v18; // c3
  float *result; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st4
  double v24; // st3
  double v25; // st7
  double v26; // rt1
  double v27; // st4
  double v28; // st3
  double v29; // st5
  double v31; // st7
  double v32; // st7
  double v33; // st7
  double v34; // st6
  double v36; // st5
  double v37; // st4
  double v38; // st7
  double v39; // st4
  double v40; // st3
  double v41; // st6
  double v42; // st6
  double v43; // st7
  double v44; // st7
  double v45; // st7
  double v46; // st6
  double v47; // st5
  double v48; // st4
  double v49; // st3
  double v50; // st1
  double v51; // st7
  double v52; // rt0
  double v53; // st4
  double v54; // st3
  double v55; // st5
  double v56; // st6
  double v57; // rt0
  double v58; // st4
  double v59; // st3
  double v60; // st7
  double v62; // st7
  double v63; // st5
  double v64; // st3
  double v65; // st7
  double v67; // rt1
  double v68; // st4
  double v69; // st3
  double v70; // st5
  double v71; // st7
  double v72; // st3
  double v73; // st6
  double v74; // rtt
  double v75; // st4
  double v76; // st5
  double v77; // st7
  double v78; // st7
  double v79; // st5
  double v80; // st6
  float v81[3]; // [esp+4h] [ebp-Ch]
  float v82; // [esp+18h] [ebp+8h]
  float v83; // [esp+18h] [ebp+8h]
  float v84; // [esp+18h] [ebp+8h]
  float v85; // [esp+18h] [ebp+8h]
  float v86; // [esp+18h] [ebp+8h]
  float v87; // [esp+18h] [ebp+8h]
  float v88; // [esp+18h] [ebp+8h]
  float v89; // [esp+18h] [ebp+8h]
  float v90; // [esp+18h] [ebp+8h]
  float v91; // [esp+18h] [ebp+8h]
  float v92; // [esp+18h] [ebp+8h]
  float v93; // [esp+18h] [ebp+8h]
  float v94; // [esp+18h] [ebp+8h]
  float v95; // [esp+18h] [ebp+8h]
  float v96; // [esp+18h] [ebp+8h]
  float v97; // [esp+18h] [ebp+8h]
  float v98; // [esp+18h] [ebp+8h]
  float v99; // [esp+18h] [ebp+8h]
  float v100; // [esp+18h] [ebp+8h]
  float v101; // [esp+18h] [ebp+8h]
  float v102; // [esp+18h] [ebp+8h]
  float v103; // [esp+18h] [ebp+8h]
  float v104; // [esp+18h] [ebp+8h]
  float v105; // [esp+18h] [ebp+8h]
  float v106; // [esp+18h] [ebp+8h]
  float v107; // [esp+18h] [ebp+8h]
  float v108; // [esp+18h] [ebp+8h]
  float v109; // [esp+18h] [ebp+8h]
  float v110; // [esp+18h] [ebp+8h]
  float v111; // [esp+18h] [ebp+8h]
  float v112; // [esp+18h] [ebp+8h]
  float v113; // [esp+18h] [ebp+8h]
  float v114; // [esp+18h] [ebp+8h]
  float v115; // [esp+18h] [ebp+8h]
  float v116; // [esp+18h] [ebp+8h]
  float v117; // [esp+18h] [ebp+8h]
  float v118; // [esp+18h] [ebp+8h]
  float v119; // [esp+18h] [ebp+8h]
  float v120; // [esp+18h] [ebp+8h]
  float v121; // [esp+18h] [ebp+8h]
  float v122; // [esp+1Ch] [ebp+Ch]
  float v123; // [esp+1Ch] [ebp+Ch]
  float v124; // [esp+1Ch] [ebp+Ch]
  float v125; // [esp+1Ch] [ebp+Ch]

  v81[a1] = *(float *)(a2 + 4 * a1) + *(float *)(a5 + 4 * a1 + 0x30); /*0x974e57*/
  v81[a4] = *(float *)(a2 + 4 * a4) + *(float *)(a5 + 4 * a4 + 0x30); /*0x974e62*/
  v10 = *(float *)(a3 + 4 * a6) * v81[a1]; /*0x974e69*/
  v11 = *(float *)(a3 + 4 * a1) * a7[a6]; /*0x974e70*/
  v12 = v11 < v10; /*0x974e73*/
  v13 = v11 == v10; /*0x974e73*/
  v14 = *(float *)(a3 + 4 * a6) * v81[a4]; /*0x974e7a*/
  v15 = !v12 && !v13; /*0x974e7e*/
  v16 = a7[a6] * *(float *)(a3 + 4 * a4); /*0x974e88*/
  v17 = v16 < v14; /*0x974e8b*/
  v18 = v16 == v14; /*0x974e8b*/
  if ( !v15 ) /*0x974e8f*/
  {
    result = a7; /*0x974e98*/
    if ( v17 || v18 ) /*0x974e95*/
    {
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x974ea3*/
      v82 = 1.0 / *(float *)(a3 + 4 * a6); /*0x974ead*/
      *(float *)(a2 + 4 * a1) = *(float *)(a2 + 4 * a1) - *(float *)(a3 + 4 * a1) * a7[a6] * v82; /*0x974ec4*/
      *(float *)(a2 + 4 * a4) = *(float *)(a2 + 4 * a4) - a7[a6] * *(float *)(a3 + 4 * a4) * v82; /*0x974ed4*/
      *a8 = v82 * -a7[a6]; /*0x974ee2*/
    }
    else
    {
      v83 = *(float *)(a3 + 4 * a6) * *(float *)(a3 + 4 * a6) + *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4); /*0x974ef6*/
      v20 = *(float *)(a3 + 4 * a6) * a7[a6]; /*0x974efd*/
      v21 = *(float *)(a3 + 4 * a4) * v81[a4]; /*0x974f03*/
      v22 = v83; /*0x974f1c*/
      v84 = v81[a1] * v83 - (v21 + v20) * *(float *)(a3 + 4 * a1); /*0x974f1e*/
      if ( (v22 + v22) * *(float *)(a5 + 4 * a1 + 0x30) < v84 ) /*0x974f35*/
      {
        v90 = v21 + v20 + *(float *)(a3 + 4 * a1) * a7[a1]; /*0x974ff4*/
        v31 = v90; /*0x97500b*/
        v122 = v22 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1); /*0x97500d*/
        v91 = -v90 / v122; /*0x975015*/
        *a9 = v31 * v91 + a7[a6] * a7[a6] + a7[a1] * a7[a1] + v81[a4] * v81[a4] + *a9; /*0x975049*/
        result = a8; /*0x97504b*/
        *a8 = v91; /*0x97504f*/
        *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x975055*/
        *(float *)(a2 + 4 * a1) = *(float *)(a5 + 4 * a1 + 0x30); /*0x97505c*/
      }
      else
      {
        v85 = v84 / v22; /*0x974f41*/
        v23 = v85; /*0x974f51*/
        v86 = v81[a1] - v85; /*0x974f53*/
        v24 = v20 + *(float *)(a3 + 4 * a1) * v86; /*0x974f66*/
        v25 = v86; /*0x974f66*/
        v26 = v23; /*0x974f6a*/
        v87 = v21 + v24; /*0x974f6c*/
        v27 = -v87; /*0x974f7f*/
        v28 = v22 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1); /*0x974f83*/
        v29 = v87; /*0x974f83*/
        v88 = v28; /*0x974f85*/
        v89 = v27 / v88; /*0x974f8d*/
        *a9 = v29 * v89 + v81[a4] * v81[a4] + a7[a6] * a7[a6] + v25 * v25 + *a9; /*0x974fbc*/
        result = a8; /*0x974fbe*/
        *a8 = v89; /*0x974fc4*/
        *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x974fca*/
        *(float *)(a2 + 4 * a1) = v26 - *(float *)(a5 + 4 * a1 + 0x30); /*0x974fd1*/
      }
      *(float *)(a2 + 4 * a4) = -*(float *)(a5 + 4 * a4 + 0x30); /*0x974fdb*/
    }
    return result; /*0x974ee7*/
  }
  v32 = *(float *)(a3 + 4 * a6); /*0x97506d*/
  if ( v17 || v18 ) /*0x975070*/
  {
    v92 = v32 * v32 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1); /*0x975088*/
    v33 = *(float *)(a3 + 4 * a6) * a7[a6] + *(float *)(a3 + 4 * a1) * v81[a1]; /*0x975099*/
    v34 = v92; /*0x97509b*/
    v93 = v92 * v81[a4] - *(float *)(a3 + 4 * a4) * v33; /*0x9750ac*/
    if ( (v34 + v34) * *(float *)(a5 + 4 * a4 + 0x30) < v93 ) /*0x9750c7*/
    {
      v99 = v33 + *(float *)(a3 + 4 * a4) * a7[a4]; /*0x975178*/
      v44 = v99; /*0x97518f*/
      v123 = v34 + *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4); /*0x975191*/
      v100 = -v99 / v123; /*0x975199*/
      *a9 = v44 * v100 + a7[a4] * a7[a4] + v81[a1] * v81[a1] + a7[a6] * a7[a6] + *a9; /*0x9751cf*/
      *a8 = v100; /*0x9751d5*/
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x9751db*/
      *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30); /*0x9751e4*/
      *(float *)(a2 + 4 * a4) = *(float *)(a5 + 4 * a4 + 0x30); /*0x9751ec*/
      return a8; /*0x9751f2*/
    }
    v94 = v93 / v34; /*0x9750cf*/
    v36 = v94; /*0x9750df*/
    v95 = v81[a4] - v94; /*0x9750e1*/
    v37 = v33 + *(float *)(a3 + 4 * a4) * v95; /*0x9750f4*/
    v38 = v95; /*0x9750f4*/
    v96 = v37; /*0x9750f6*/
    v39 = -v96; /*0x975109*/
    v40 = v34 + *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4); /*0x97510d*/
    v41 = v96; /*0x97510d*/
    v97 = v40; /*0x97510f*/
    v98 = v39 / v97; /*0x975117*/
    *a9 = v41 * v98 + v38 * v38 + a7[a6] * a7[a6] + v81[a1] * v81[a1] + *a9; /*0x975146*/
    v42 = v98; /*0x975148*/
    v43 = v36; /*0x975148*/
    goto LABEL_11; /*0x975148*/
  }
  v45 = v32 * v32; /*0x9751f3*/
  v46 = *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4); /*0x9751f8*/
  v101 = v46 + v45; /*0x9751fe*/
  v47 = *(float *)(a3 + 4 * a6) * a7[a6]; /*0x975205*/
  v48 = *(float *)(a3 + 4 * a4) * v81[a4]; /*0x97520b*/
  v49 = v101; /*0x975224*/
  v102 = v81[a1] * v101 - (v48 + v47) * *(float *)(a3 + 4 * a1); /*0x975226*/
  v50 = v102; /*0x97522c*/
  if ( v102 < 0.0 ) /*0x975237*/
  {
    v110 = v45 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1); /*0x97539d*/
    v63 = v47 + *(float *)(a3 + 4 * a1) * v81[a1]; /*0x9753a8*/
    v64 = v110; /*0x9753aa*/
    v111 = v110 * v81[a4] - *(float *)(a3 + 4 * a4) * v63; /*0x9753bb*/
    v65 = v111; /*0x9753c7*/
    if ( v111 < 0.0 ) /*0x9753cc*/
    {
      v119 = v63 + v48; /*0x9754f8*/
      v78 = -v119; /*0x975504*/
      v79 = v46 + v64; /*0x975508*/
      v80 = v119; /*0x975508*/
      v120 = v79; /*0x97550a*/
      v121 = v78 / v120; /*0x975516*/
      *a9 = v80 * v121 + v81[a4] * v81[a4] + v81[a1] * v81[a1] + a7[a6] * a7[a6] + *a9; /*0x97554d*/
      *a8 = v121; /*0x975553*/
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x975559*/
      *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30); /*0x975562*/
      *(float *)(a2 + 4 * a4) = -*(float *)(a5 + 4 * a4 + 0x30); /*0x97556c*/
      return a8; /*0x97554f*/
    }
    if ( (v64 + v64) * *(float *)(a5 + 4 * a4 + 0x30) < v65 ) /*0x9753e7*/
    {
      v117 = v63 + *(float *)(a3 + 4 * a4) * a7[a4]; /*0x975478*/
      v125 = v46 + v64; /*0x97548a*/
      v77 = v117; /*0x975494*/
      v118 = -v117 / v125; /*0x975496*/
      *a9 = v77 * v118 + a7[a4] * a7[a4] + v81[a1] * v81[a1] + a7[a6] * a7[a6] + *a9; /*0x9754cc*/
      *a8 = v118; /*0x9754d2*/
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x9754d8*/
      *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30); /*0x9754e1*/
      *(float *)(a2 + 4 * a4) = *(float *)(a5 + 4 * a4 + 0x30); /*0x9754e9*/
      return a8; /*0x9754ef*/
    }
    v67 = v64; /*0x9753f1*/
    v112 = v65 / v64; /*0x9753f3*/
    v68 = v112; /*0x975403*/
    v113 = v81[a4] - v112; /*0x975405*/
    v69 = v63 + *(float *)(a3 + 4 * a4) * v113; /*0x975418*/
    v70 = v113; /*0x975418*/
    v114 = v69; /*0x97541a*/
    v71 = -v114; /*0x975426*/
    v72 = v46 + v67; /*0x97542a*/
    v73 = v114; /*0x97542a*/
    v115 = v72; /*0x97542c*/
    v74 = v68; /*0x975436*/
    v75 = v71 / v115; /*0x975436*/
    v43 = v74; /*0x975436*/
    v116 = v75; /*0x975438*/
    v76 = v73 * v116 + v70 * v70 + a7[a6] * a7[a6] + v81[a1] * v81[a1] + *a9; /*0x975465*/
    v42 = v116; /*0x975465*/
    *a9 = v76; /*0x975467*/
LABEL_11:
    *a8 = v42; /*0x97514a*/
    *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x975154*/
    *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30); /*0x97515d*/
    *(float *)(a2 + 4 * a4) = v43 - *(float *)(a5 + 4 * a4 + 0x30); /*0x975165*/
    return a8; /*0x97516b*/
  }
  v51 = v49; /*0x975241*/
  if ( (v49 + v49) * *(float *)(a5 + 4 * a1 + 0x30) < v50 ) /*0x975252*/
  {
    v108 = v48 + v47 + *(float *)(a3 + 4 * a1) * a7[a1]; /*0x975317*/
    v62 = v108; /*0x97532e*/
    v124 = v49 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1); /*0x975330*/
    v109 = -v108 / v124; /*0x975338*/
    *a9 = v62 * v109 + a7[a6] * a7[a6] + a7[a1] * a7[a1] + v81[a4] * v81[a4] + *a9; /*0x97536c*/
    result = a8; /*0x97536e*/
    *a8 = v109; /*0x975372*/
    *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x975378*/
    *(float *)(a2 + 4 * a1) = *(float *)(a5 + 4 * a1 + 0x30); /*0x97537f*/
  }
  else
  {
    v52 = v48; /*0x975260*/
    v103 = v50 / v49; /*0x975262*/
    v53 = v103; /*0x975272*/
    v104 = v81[a1] - v103; /*0x975274*/
    v54 = v47 + *(float *)(a3 + 4 * a1) * v104; /*0x975287*/
    v55 = v104; /*0x975287*/
    v56 = v52 + v54; /*0x975289*/
    v57 = v53; /*0x97528b*/
    v105 = v56; /*0x97528d*/
    v58 = -v105; /*0x9752a0*/
    v59 = v51 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1); /*0x9752a4*/
    v60 = v105; /*0x9752a4*/
    v106 = v59; /*0x9752a6*/
    v107 = v58 / v106; /*0x9752ae*/
    *a9 = v60 * v107 + v81[a4] * v81[a4] + a7[a6] * a7[a6] + v55 * v55 + *a9; /*0x9752e1*/
    result = a8; /*0x9752e3*/
    *a8 = v107; /*0x9752e9*/
    *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30); /*0x9752ef*/
    *(float *)(a2 + 4 * a1) = v57 - *(float *)(a5 + 4 * a1 + 0x30); /*0x9752f6*/
  }
  *(float *)(a2 + 4 * a4) = -*(float *)(a5 + 4 * a4 + 0x30); /*0x975300*/
  return result; /*0x974ee4*/
}
