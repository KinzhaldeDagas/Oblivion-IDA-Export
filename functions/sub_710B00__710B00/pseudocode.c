char __thiscall sub_710B00(float *this, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st5
  double v7; // rt2
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st4
  double v18; // st3
  double v19; // st4
  double v20; // st3
  double v21; // st3
  double v22; // st6
  double v23; // st5
  double v24; // st4
  double v25; // st7
  double v26; // st6
  double v27; // st4
  double v28; // st4
  double v29; // st3
  double v30; // st4
  double v31; // st3
  double v32; // st2
  bool v33; // cc
  double v35; // st7
  double v36; // st6
  double v37; // st7
  double v38; // st7
  double v39; // st5
  double v40; // st5
  double v41; // st4
  double v42; // st5
  double v43; // st4
  double v44; // st7
  double v45; // st6
  double v46; // st7
  double v47; // st7
  double v48; // st5
  double v49; // st5
  double v50; // st4
  double v51; // st5
  double v52; // st4
  float v53; // [esp+Ch] [ebp-34h]
  float v54; // [esp+Ch] [ebp-34h]
  float v55; // [esp+Ch] [ebp-34h]
  float v56; // [esp+10h] [ebp-30h]
  float v57; // [esp+10h] [ebp-30h]
  float v58; // [esp+10h] [ebp-30h]
  float v59; // [esp+10h] [ebp-30h]
  float v60; // [esp+10h] [ebp-30h]
  float v61; // [esp+10h] [ebp-30h]
  float v62; // [esp+10h] [ebp-30h]
  float v63; // [esp+10h] [ebp-30h]
  float v64; // [esp+10h] [ebp-30h]
  float v65; // [esp+10h] [ebp-30h]
  float v66; // [esp+10h] [ebp-30h]
  float v67; // [esp+18h] [ebp-28h]
  float v68; // [esp+18h] [ebp-28h]
  float v69; // [esp+18h] [ebp-28h]
  float v70; // [esp+18h] [ebp-28h]
  float v71; // [esp+18h] [ebp-28h]
  float v72; // [esp+18h] [ebp-28h]
  float v73; // [esp+18h] [ebp-28h]
  float v74; // [esp+18h] [ebp-28h]
  float v75; // [esp+18h] [ebp-28h]
  float v76; // [esp+18h] [ebp-28h]
  float v77; // [esp+18h] [ebp-28h]
  float v78; // [esp+18h] [ebp-28h]
  float v79; // [esp+18h] [ebp-28h]
  float v80; // [esp+18h] [ebp-28h]
  float v81; // [esp+18h] [ebp-28h]
  float v82; // [esp+18h] [ebp-28h]
  float v83; // [esp+18h] [ebp-28h]
  float v84; // [esp+1Ch] [ebp-24h]
  float v85; // [esp+1Ch] [ebp-24h]
  float v86; // [esp+1Ch] [ebp-24h]
  float v87; // [esp+1Ch] [ebp-24h]
  float v88; // [esp+1Ch] [ebp-24h]
  float v89; // [esp+1Ch] [ebp-24h]
  float v90; // [esp+1Ch] [ebp-24h]
  float v91; // [esp+20h] [ebp-20h]
  float v92; // [esp+20h] [ebp-20h]
  float v93; // [esp+20h] [ebp-20h]
  float v94; // [esp+20h] [ebp-20h]
  float v95; // [esp+20h] [ebp-20h]
  float v96; // [esp+20h] [ebp-20h]
  float v97; // [esp+20h] [ebp-20h]
  float v98; // [esp+20h] [ebp-20h]
  float v99; // [esp+20h] [ebp-20h]
  float v100; // [esp+20h] [ebp-20h]
  float v101; // [esp+20h] [ebp-20h]
  float v102; // [esp+20h] [ebp-20h]
  float v103; // [esp+20h] [ebp-20h]
  float v104; // [esp+20h] [ebp-20h]
  float v105; // [esp+20h] [ebp-20h]
  float v106; // [esp+20h] [ebp-20h]
  float v107; // [esp+20h] [ebp-20h]
  float v108; // [esp+20h] [ebp-20h]
  float v109; // [esp+20h] [ebp-20h]
  float v110; // [esp+20h] [ebp-20h]
  float v111; // [esp+20h] [ebp-20h]
  float v112; // [esp+20h] [ebp-20h]
  float v113; // [esp+20h] [ebp-20h]
  int v114; // [esp+24h] [ebp-1Ch]
  double v115; // [esp+28h] [ebp-18h]
  float v116; // [esp+28h] [ebp-18h]
  float v117; // [esp+28h] [ebp-18h]
  float v118; // [esp+28h] [ebp-18h]
  float v119; // [esp+28h] [ebp-18h]
  float v120; // [esp+28h] [ebp-18h]
  float v121; // [esp+28h] [ebp-18h]
  float v122; // [esp+28h] [ebp-18h]
  float v123; // [esp+28h] [ebp-18h]
  float v124; // [esp+28h] [ebp-18h]
  float v125; // [esp+28h] [ebp-18h]
  float v126; // [esp+28h] [ebp-18h]
  float v127; // [esp+28h] [ebp-18h]
  float v128; // [esp+28h] [ebp-18h]
  float v129; // [esp+28h] [ebp-18h]
  float v130; // [esp+28h] [ebp-18h]
  double v131; // [esp+30h] [ebp-10h]
  double v132; // [esp+30h] [ebp-10h]
  double v133; // [esp+30h] [ebp-10h]
  double v134; // [esp+30h] [ebp-10h]
  double v135; // [esp+30h] [ebp-10h]
  double v136; // [esp+38h] [ebp-8h]
  double v137; // [esp+38h] [ebp-8h]
  double v138; // [esp+38h] [ebp-8h]
  double v139; // [esp+38h] [ebp-8h]

  v3 = dbl_A3D0C0;
  v4 = 1.0;
  v5 = 0.0;
  v114 = 0;
  while ( 1 )
  {
    v84 = fabs(a2[1]);
    v91 = fabs(*a2);
    v67 = v91 + v84;
    v92 = fabs(*a3);
    if ( v92 + v67 == v67 )
      break;
    v93 = fabs(a2[2]);
    v68 = v84 + v93;
    v94 = fabs(a3[1]);
    if ( v94 + v68 == v68 )
    {
      v44 = v5;
      a3[1] = v5;
      v124 = fabs(*a2);
      v45 = v124;
      v125 = fabs(a2[1]);
      v80 = v45 + v125;
      v126 = fabs(*a3);
      if ( v126 + v80 != v80 )
      {
        v135 = a2[1];
        v139 = *a2;
        v81 = v139 + v135;
        v64 = v139 - v135;
        v127 = *a3 * (*a3 * dbl_A3C800) + v64 * v64;
        v128 = sqrt(v127);
        v90 = (v81 - v128) * dbl_A2FAA0;
        v113 = (v81 + v128) * dbl_A2FAA0;
        if ( v64 < 0.0 )
        {
          v82 = v135 - v90;
          v46 = *a3;
        }
        else
        {
          v82 = *a3;
          v46 = v139 - v90;
        }
        v65 = v46;
        v129 = v65 * v65 + v82 * v82;
        v130 = sqrt(v129);
        v55 = 1.0 / v130;
        v83 = v82 * v55;
        v66 = v55 * v65;
        v47 = *this;
        v48 = *(this + 1);
        *(this + 1) = v48 * v83 + v47 * v66;
        *this = v47 * v83 - v48 * v66;
        v49 = *(this + 3);
        v50 = *(this + 4);
        *(this + 4) = v50 * v83 + v49 * v66;
        *(this + 3) = v49 * v83 - v50 * v66;
        v51 = *(this + 6);
        v52 = *(this + 7);
        *(this + 7) = v52 * v83 + v51 * v66;
        *(this + 6) = v83 * v51 - v66 * v52;
        *a2 = v90;
        a2[1] = v113;
        v44 = 0.0;
      }
      *a3 = v44;
      return 1;
    }
    v136 = *a2;
    v115 = *a3;
    v69 = (a2[1] - v136) / (v3 * v115);
    v131 = v69;
    v95 = v4 + v131 * v131;
    v96 = sqrt(v95);
    v53 = v96;
    v97 = a3[1];
    v8 = v53;
    if ( v69 < 0.0 )
      v9 = v131 - v8;
    else
      v9 = v8 + v131;
    v56 = a2[2] - v136;
    v57 = v115 / v9 + v56;
    v10 = v97;
    v11 = v57;
    v98 = fabs(v97);
    v12 = v98;
    v99 = fabs(v57);
    if ( v99 > v12 )
    {
      v72 = v10 / v11;
      v132 = v72;
      v102 = v132 * v132 + dbl_A2F928;
      v103 = sqrt(v102);
      v13 = 1.0;
      v71 = 1.0 / v103;
      v58 = v71 * v132;
    }
    else
    {
      v70 = v11 / v10;
      v100 = v70 * v70 + dbl_A2F928;
      v101 = sqrt(v100);
      v13 = 1.0;
      v58 = 1.0 / v101;
      v71 = v58 * v70;
    }
    v14 = *(this + 1);
    v15 = v58;
    v16 = *(this + 2);
    *(this + 2) = v14 * v58 + v16 * v71;
    *(this + 1) = v14 * v71 - v16 * v58;
    v17 = *(this + 4);
    v18 = *(this + 5);
    *(this + 5) = v18 * v71 + v17 * v58;
    *(this + 4) = v17 * v71 - v18 * v58;
    v19 = *(this + 7);
    v20 = *(this + 8);
    *(this + 8) = v20 * v71 + v19 * v58;
    *(this + 7) = v19 * v71 - v20 * v58;
    v85 = (a2[1] - a2[2]) * v58 + (a3[1] + a3[1]) * v71;
    v21 = *a3;
    v116 = v71 * v21;
    v104 = v21 * v58;
    v59 = v71 * v85 - a3[1];
    v86 = v85 * v15;
    v22 = v104;
    v137 = v104;
    v23 = v59;
    v105 = fabs(v104);
    v24 = v105;
    v106 = fabs(v59);
    if ( v106 > v24 )
    {
      v75 = v22 / v23;
      v133 = v75;
      v109 = v13 + v133 * v133;
      v110 = sqrt(v109);
      a3[1] = v23 * v110;
      v25 = 1.0;
      v74 = 1.0 / v110;
      v60 = v74 * v133;
    }
    else
    {
      v73 = v23 / v22;
      v107 = v13 + v73 * v73;
      v108 = sqrt(v107);
      a3[1] = v137 * v108;
      v25 = 1.0;
      v60 = 1.0 / v108;
      v74 = v60 * v73;
    }
    v26 = *this;
    v27 = *(this + 1);
    *(this + 1) = v27 * v74 + v26 * v60;
    *this = v26 * v74 - v27 * v60;
    v28 = *(this + 3);
    v29 = *(this + 4);
    *(this + 4) = v29 * v74 + v28 * v60;
    *(this + 3) = v28 * v74 - v29 * v60;
    v30 = *(this + 6);
    v31 = *(this + 7);
    *(this + 7) = v31 * v74 + v30 * v60;
    *(this + 6) = v30 * v74 - v31 * v60;
    v111 = a2[1] - v86;
    a2[2] = v86 + a2[2];
    v32 = dbl_A3D0C0;
    v87 = (*a2 - v111) * v60 + v116 * v32 * v74;
    *a3 = v74 * v87 - v116;
    v88 = v60 * v87;
    v33 = v114 + 1 < 0x20;
    a2[1] = v111 + v88;
    ++v114;
    *a2 = *a2 - v88;
    if ( !v33 )
      return 0;
    v6 = v25;
    v3 = v32;
    v7 = v6;
    v5 = 0.0;
    v4 = v7;
  }
  v35 = v5;
  *a3 = v5;
  v117 = fabs(a2[1]);
  v36 = v117;
  v118 = fabs(a2[2]);
  v76 = v36 + v118;
  v119 = fabs(a3[1]);
  if ( v119 + v76 != v76 )
  {
    v138 = a2[2];
    v134 = a2[1];
    v77 = v138 + v134;
    v61 = v134 - v138;
    v120 = a3[1] * (a3[1] * dbl_A3C800) + v61 * v61;
    v121 = sqrt(v120);
    v89 = (v77 - v121) * dbl_A2FAA0;
    v112 = (v77 + v121) * dbl_A2FAA0;
    if ( v61 < 0.0 )
    {
      v78 = v138 - v89;
      v37 = a3[1];
    }
    else
    {
      v78 = a3[1];
      v37 = v134 - v89;
    }
    v62 = v37;
    v122 = v62 * v62 + v78 * v78;
    v123 = sqrt(v122);
    v54 = 1.0 / v123;
    v79 = v78 * v54;
    v63 = v54 * v62;
    v38 = *(this + 1);
    v39 = *(this + 2);
    *(this + 2) = v39 * v79 + v38 * v63;
    *(this + 1) = v38 * v79 - v39 * v63;
    v40 = *(this + 4);
    v41 = *(this + 5);
    *(this + 5) = v41 * v79 + v40 * v63;
    *(this + 4) = v40 * v79 - v41 * v63;
    v42 = *(this + 7);
    v43 = *(this + 8);
    *(this + 8) = v43 * v79 + v42 * v63;
    *(this + 7) = v79 * v42 - v63 * v43;
    a2[1] = v89;
    a2[2] = v112;
    v35 = 0.0;
  }
  a3[1] = v35;
  return 1;
}
