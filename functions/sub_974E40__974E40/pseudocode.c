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

  v81[a1] = *(float *)(a2 + 4 * a1) + *(float *)(a5 + 4 * a1 + 0x30);
  v81[a4] = *(float *)(a2 + 4 * a4) + *(float *)(a5 + 4 * a4 + 0x30);
  v10 = *(float *)(a3 + 4 * a6) * v81[a1];
  v11 = *(float *)(a3 + 4 * a1) * a7[a6];
  v12 = v11 < v10;
  v13 = v11 == v10;
  v14 = *(float *)(a3 + 4 * a6) * v81[a4];
  v15 = !v12 && !v13;
  v16 = a7[a6] * *(float *)(a3 + 4 * a4);
  v17 = v16 < v14;
  v18 = v16 == v14;
  if ( !v15 )
  {
    result = a7;
    if ( v17 || v18 )
    {
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
      v82 = 1.0 / *(float *)(a3 + 4 * a6);
      *(float *)(a2 + 4 * a1) = *(float *)(a2 + 4 * a1) - *(float *)(a3 + 4 * a1) * a7[a6] * v82;
      *(float *)(a2 + 4 * a4) = *(float *)(a2 + 4 * a4) - a7[a6] * *(float *)(a3 + 4 * a4) * v82;
      *a8 = v82 * -a7[a6];
    }
    else
    {
      v83 = *(float *)(a3 + 4 * a6) * *(float *)(a3 + 4 * a6) + *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4);
      v20 = *(float *)(a3 + 4 * a6) * a7[a6];
      v21 = *(float *)(a3 + 4 * a4) * v81[a4];
      v22 = v83;
      v84 = v81[a1] * v83 - (v21 + v20) * *(float *)(a3 + 4 * a1);
      if ( (v22 + v22) * *(float *)(a5 + 4 * a1 + 0x30) < v84 )
      {
        v90 = v21 + v20 + *(float *)(a3 + 4 * a1) * a7[a1];
        v31 = v90;
        v122 = v22 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1);
        v91 = -v90 / v122;
        *a9 = v31 * v91 + a7[a6] * a7[a6] + a7[a1] * a7[a1] + v81[a4] * v81[a4] + *a9;
        result = a8;
        *a8 = v91;
        *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
        *(float *)(a2 + 4 * a1) = *(float *)(a5 + 4 * a1 + 0x30);
      }
      else
      {
        v85 = v84 / v22;
        v23 = v85;
        v86 = v81[a1] - v85;
        v24 = v20 + *(float *)(a3 + 4 * a1) * v86;
        v25 = v86;
        v26 = v23;
        v87 = v21 + v24;
        v27 = -v87;
        v28 = v22 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1);
        v29 = v87;
        v88 = v28;
        v89 = v27 / v88;
        *a9 = v29 * v89 + v81[a4] * v81[a4] + a7[a6] * a7[a6] + v25 * v25 + *a9;
        result = a8;
        *a8 = v89;
        *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
        *(float *)(a2 + 4 * a1) = v26 - *(float *)(a5 + 4 * a1 + 0x30);
      }
      *(float *)(a2 + 4 * a4) = -*(float *)(a5 + 4 * a4 + 0x30);
    }
    return result;
  }
  v32 = *(float *)(a3 + 4 * a6);
  if ( v17 || v18 )
  {
    v92 = v32 * v32 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1);
    v33 = *(float *)(a3 + 4 * a6) * a7[a6] + *(float *)(a3 + 4 * a1) * v81[a1];
    v34 = v92;
    v93 = v92 * v81[a4] - *(float *)(a3 + 4 * a4) * v33;
    if ( (v34 + v34) * *(float *)(a5 + 4 * a4 + 0x30) < v93 )
    {
      v99 = v33 + *(float *)(a3 + 4 * a4) * a7[a4];
      v44 = v99;
      v123 = v34 + *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4);
      v100 = -v99 / v123;
      *a9 = v44 * v100 + a7[a4] * a7[a4] + v81[a1] * v81[a1] + a7[a6] * a7[a6] + *a9;
      *a8 = v100;
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
      *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30);
      *(float *)(a2 + 4 * a4) = *(float *)(a5 + 4 * a4 + 0x30);
      return a8;
    }
    v94 = v93 / v34;
    v36 = v94;
    v95 = v81[a4] - v94;
    v37 = v33 + *(float *)(a3 + 4 * a4) * v95;
    v38 = v95;
    v96 = v37;
    v39 = -v96;
    v40 = v34 + *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4);
    v41 = v96;
    v97 = v40;
    v98 = v39 / v97;
    *a9 = v41 * v98 + v38 * v38 + a7[a6] * a7[a6] + v81[a1] * v81[a1] + *a9;
    v42 = v98;
    v43 = v36;
    goto LABEL_11;
  }
  v45 = v32 * v32;
  v46 = *(float *)(a3 + 4 * a4) * *(float *)(a3 + 4 * a4);
  v101 = v46 + v45;
  v47 = *(float *)(a3 + 4 * a6) * a7[a6];
  v48 = *(float *)(a3 + 4 * a4) * v81[a4];
  v49 = v101;
  v102 = v81[a1] * v101 - (v48 + v47) * *(float *)(a3 + 4 * a1);
  v50 = v102;
  if ( v102 < 0.0 )
  {
    v110 = v45 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1);
    v63 = v47 + *(float *)(a3 + 4 * a1) * v81[a1];
    v64 = v110;
    v111 = v110 * v81[a4] - *(float *)(a3 + 4 * a4) * v63;
    v65 = v111;
    if ( v111 < 0.0 )
    {
      v119 = v63 + v48;
      v78 = -v119;
      v79 = v46 + v64;
      v80 = v119;
      v120 = v79;
      v121 = v78 / v120;
      *a9 = v80 * v121 + v81[a4] * v81[a4] + v81[a1] * v81[a1] + a7[a6] * a7[a6] + *a9;
      *a8 = v121;
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
      *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30);
      *(float *)(a2 + 4 * a4) = -*(float *)(a5 + 4 * a4 + 0x30);
      return a8;
    }
    if ( (v64 + v64) * *(float *)(a5 + 4 * a4 + 0x30) < v65 )
    {
      v117 = v63 + *(float *)(a3 + 4 * a4) * a7[a4];
      v125 = v46 + v64;
      v77 = v117;
      v118 = -v117 / v125;
      *a9 = v77 * v118 + a7[a4] * a7[a4] + v81[a1] * v81[a1] + a7[a6] * a7[a6] + *a9;
      *a8 = v118;
      *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
      *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30);
      *(float *)(a2 + 4 * a4) = *(float *)(a5 + 4 * a4 + 0x30);
      return a8;
    }
    v67 = v64;
    v112 = v65 / v64;
    v68 = v112;
    v113 = v81[a4] - v112;
    v69 = v63 + *(float *)(a3 + 4 * a4) * v113;
    v70 = v113;
    v114 = v69;
    v71 = -v114;
    v72 = v46 + v67;
    v73 = v114;
    v115 = v72;
    v74 = v68;
    v75 = v71 / v115;
    v43 = v74;
    v116 = v75;
    v76 = v73 * v116 + v70 * v70 + a7[a6] * a7[a6] + v81[a1] * v81[a1] + *a9;
    v42 = v116;
    *a9 = v76;
LABEL_11:
    *a8 = v42;
    *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
    *(float *)(a2 + 4 * a1) = -*(float *)(a5 + 4 * a1 + 0x30);
    *(float *)(a2 + 4 * a4) = v43 - *(float *)(a5 + 4 * a4 + 0x30);
    return a8;
  }
  v51 = v49;
  if ( (v49 + v49) * *(float *)(a5 + 4 * a1 + 0x30) < v50 )
  {
    v108 = v48 + v47 + *(float *)(a3 + 4 * a1) * a7[a1];
    v62 = v108;
    v124 = v49 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1);
    v109 = -v108 / v124;
    *a9 = v62 * v109 + a7[a6] * a7[a6] + a7[a1] * a7[a1] + v81[a4] * v81[a4] + *a9;
    result = a8;
    *a8 = v109;
    *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
    *(float *)(a2 + 4 * a1) = *(float *)(a5 + 4 * a1 + 0x30);
  }
  else
  {
    v52 = v48;
    v103 = v50 / v49;
    v53 = v103;
    v104 = v81[a1] - v103;
    v54 = v47 + *(float *)(a3 + 4 * a1) * v104;
    v55 = v104;
    v56 = v52 + v54;
    v57 = v53;
    v105 = v56;
    v58 = -v105;
    v59 = v51 + *(float *)(a3 + 4 * a1) * *(float *)(a3 + 4 * a1);
    v60 = v105;
    v106 = v59;
    v107 = v58 / v106;
    *a9 = v60 * v107 + v81[a4] * v81[a4] + a7[a6] * a7[a6] + v55 * v55 + *a9;
    result = a8;
    *a8 = v107;
    *(float *)(a2 + 4 * a6) = *(float *)(a5 + 4 * a6 + 0x30);
    *(float *)(a2 + 4 * a1) = v57 - *(float *)(a5 + 4 * a1 + 0x30);
  }
  *(float *)(a2 + 4 * a4) = -*(float *)(a5 + 4 * a4 + 0x30);
  return result;
}
