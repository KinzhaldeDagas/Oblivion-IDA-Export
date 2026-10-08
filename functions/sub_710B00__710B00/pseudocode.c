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

  v3 = dbl_A3D0C0; /*0x710b09*/
  v4 = 1.0; /*0x710b10*/
  v5 = 0.0; /*0x710b15*/
  v114 = 0; /*0x710b1e*/
  while ( 1 ) /*0x710b35*/
  {
    v84 = fabs(a2[1]); /*0x710b35*/
    v91 = fabs(*a2); /*0x710b3d*/
    v67 = v91 + v84; /*0x710b4f*/
    v92 = fabs(*a3); /*0x710b5b*/
    if ( v92 + v67 == v67 ) /*0x710b6c*/
      break; /*0x710b6c*/
    v93 = fabs(a2[2]); /*0x710b77*/
    v68 = v84 + v93; /*0x710b7f*/
    v94 = fabs(a3[1]); /*0x710b8c*/
    if ( v94 + v68 == v68 ) /*0x710b9d*/
    {
      v44 = v5; /*0x71112e*/
      a3[1] = v5; /*0x711132*/
      v124 = fabs(*a2); /*0x711139*/
      v45 = v124; /*0x71113d*/
      v125 = fabs(a2[1]); /*0x711146*/
      v80 = v45 + v125; /*0x71114e*/
      v126 = fabs(*a3); /*0x71115a*/
      if ( v126 + v80 != v80 ) /*0x71116b*/
      {
        v135 = a2[1]; /*0x711176*/
        v139 = *a2; /*0x71117c*/
        v81 = v139 + v135; /*0x711184*/
        v64 = v139 - v135; /*0x71118a*/
        v127 = *a3 * (*a3 * dbl_A3C800) + v64 * v64; /*0x7111a2*/
        v128 = sqrt(v127); /*0x7111af*/
        v90 = (v81 - v128) * dbl_A2FAA0; /*0x7111d1*/
        v113 = (v81 + v128) * dbl_A2FAA0; /*0x7111db*/
        if ( v64 < 0.0 ) /*0x7111ea*/
        {
          v82 = v135 - v90; /*0x711204*/
          v46 = *a3; /*0x711208*/
        }
        else
        {
          v82 = *a3; /*0x7111ee*/
          v46 = v139 - v90; /*0x7111f6*/
        }
        v65 = v46; /*0x71120a*/
        v129 = v65 * v65 + v82 * v82; /*0x711226*/
        v130 = sqrt(v129); /*0x711233*/
        v55 = 1.0 / v130; /*0x71123f*/
        v83 = v82 * v55; /*0x71124d*/
        v66 = v55 * v65; /*0x711255*/
        v47 = *this; /*0x711260*/
        v48 = *(this + 1); /*0x711266*/
        *(this + 1) = v48 * v83 + v47 * v66; /*0x711278*/
        *this = v47 * v83 - v48 * v66; /*0x711285*/
        v49 = *(this + 3); /*0x71128e*/
        v50 = *(this + 4); /*0x711291*/
        *(this + 4) = v50 * v83 + v49 * v66; /*0x71129f*/
        *(this + 3) = v49 * v83 - v50 * v66; /*0x7112ac*/
        v51 = *(this + 6); /*0x7112b6*/
        v52 = *(this + 7); /*0x7112b9*/
        *(this + 7) = v52 * v83 + v51 * v66; /*0x7112c7*/
        *(this + 6) = v83 * v51 - v66 * v52; /*0x7112d2*/
        *a2 = v90; /*0x7112d9*/
        a2[1] = v113; /*0x7112df*/
        v44 = 0.0; /*0x7112e2*/
      }
      *a3 = v44; /*0x7112e5*/
      return 1; /*0x7112e8*/
    }
    v136 = *a2; /*0x710ba7*/
    v115 = *a3; /*0x710bad*/
    v69 = (a2[1] - v136) / (v3 * v115); /*0x710bbc*/
    v131 = v69; /*0x710bc4*/
    v95 = v4 + v131 * v131; /*0x710bcc*/
    v96 = sqrt(v95); /*0x710bd9*/
    v53 = v96; /*0x710be1*/
    v97 = a3[1]; /*0x710be8*/
    v8 = v53; /*0x710bff*/
    if ( v69 < 0.0 ) /*0x710c06*/
      v9 = v131 - v8; /*0x710c0e*/
    else
      v9 = v8 + v131; /*0x710c08*/
    v56 = a2[2] - v136; /*0x710bf3*/
    v57 = v115 / v9 + v56; /*0x710c1a*/
    v10 = v97; /*0x710c1e*/
    v11 = v57; /*0x710c22*/
    v98 = fabs(v97); /*0x710c2a*/
    v12 = v98; /*0x710c2e*/
    v99 = fabs(v57); /*0x710c36*/
    if ( v99 > v12 ) /*0x710c45*/
    {
      v72 = v10 / v11; /*0x710c8e*/
      v132 = v72; /*0x710c96*/
      v102 = v132 * v132 + dbl_A2F928; /*0x710ca2*/
      v103 = sqrt(v102); /*0x710caf*/
      v13 = 1.0; /*0x710cbd*/
      v71 = 1.0 / v103; /*0x710cbf*/
      v58 = v71 * v132; /*0x710ccb*/
    }
    else
    {
      v70 = v11 / v10; /*0x710c49*/
      v100 = v70 * v70 + dbl_A2F928; /*0x710c5d*/
      v101 = sqrt(v100); /*0x710c6a*/
      v13 = 1.0; /*0x710c78*/
      v58 = 1.0 / v101; /*0x710c7a*/
      v71 = v58 * v70; /*0x710c86*/
    }
    v14 = *(this + 1); /*0x710cd6*/
    v15 = v58; /*0x710cd9*/
    v16 = *(this + 2); /*0x710cdd*/
    *(this + 2) = v14 * v58 + v16 * v71; /*0x710cef*/
    *(this + 1) = v14 * v71 - v16 * v58; /*0x710cfc*/
    v17 = *(this + 4); /*0x710d06*/
    v18 = *(this + 5); /*0x710d09*/
    *(this + 5) = v18 * v71 + v17 * v58; /*0x710d17*/
    *(this + 4) = v17 * v71 - v18 * v58; /*0x710d24*/
    v19 = *(this + 7); /*0x710d2e*/
    v20 = *(this + 8); /*0x710d31*/
    *(this + 8) = v20 * v71 + v19 * v58; /*0x710d3f*/
    *(this + 7) = v19 * v71 - v20 * v58; /*0x710d4c*/
    v85 = (a2[1] - a2[2]) * v58 + (a3[1] + a3[1]) * v71; /*0x710d62*/
    v21 = *a3; /*0x710d66*/
    v116 = v71 * v21; /*0x710d6c*/
    v104 = v21 * v58; /*0x710d72*/
    v59 = v71 * v85 - a3[1]; /*0x710d82*/
    v86 = v85 * v15; /*0x710d88*/
    v22 = v104; /*0x710d8c*/
    v137 = v104; /*0x710d90*/
    v23 = v59; /*0x710d94*/
    v105 = fabs(v104); /*0x710da0*/
    v24 = v105; /*0x710da4*/
    v106 = fabs(v59); /*0x710dac*/
    if ( v106 > v24 ) /*0x710dbb*/
    {
      v75 = v22 / v23; /*0x710e11*/
      v133 = v75; /*0x710e19*/
      v109 = v13 + v133 * v133; /*0x710e21*/
      v110 = sqrt(v109); /*0x710e2e*/
      a3[1] = v23 * v110; /*0x710e44*/
      v25 = 1.0; /*0x710e4d*/
      v74 = 1.0 / v110; /*0x710e4f*/
      v60 = v74 * v133; /*0x710e5b*/
    }
    else
    {
      v73 = v23 / v22; /*0x710dbf*/
      v107 = v13 + v73 * v73; /*0x710dcf*/
      v108 = sqrt(v107); /*0x710ddc*/
      a3[1] = v137 * v108; /*0x710df2*/
      v25 = 1.0; /*0x710dfb*/
      v60 = 1.0 / v108; /*0x710dfd*/
      v74 = v60 * v73; /*0x710e09*/
    }
    v26 = *this; /*0x710e66*/
    v27 = *(this + 1); /*0x710e6c*/
    *(this + 1) = v27 * v74 + v26 * v60; /*0x710e7e*/
    *this = v26 * v74 - v27 * v60; /*0x710e8b*/
    v28 = *(this + 3); /*0x710e94*/
    v29 = *(this + 4); /*0x710e97*/
    *(this + 4) = v29 * v74 + v28 * v60; /*0x710ea5*/
    *(this + 3) = v28 * v74 - v29 * v60; /*0x710eb2*/
    v30 = *(this + 6); /*0x710ebc*/
    v31 = *(this + 7); /*0x710ebf*/
    *(this + 7) = v31 * v74 + v30 * v60; /*0x710ecd*/
    *(this + 6) = v30 * v74 - v31 * v60; /*0x710eda*/
    v111 = a2[1] - v86; /*0x710ee6*/
    a2[2] = v86 + a2[2]; /*0x710eed*/
    v32 = dbl_A3D0C0; /*0x710f0e*/
    v87 = (*a2 - v111) * v60 + v116 * v32 * v74; /*0x710f10*/
    *a3 = v74 * v87 - v116; /*0x710f22*/
    v88 = v60 * v87; /*0x710f2a*/
    v33 = v114 + 1 < 0x20; /*0x710f3d*/
    a2[1] = v111 + v88; /*0x710f40*/
    ++v114; /*0x710f43*/
    *a2 = *a2 - v88; /*0x710f49*/
    if ( !v33 ) /*0x710f4b*/
      return 0; /*0x710f5d*/
    v6 = v25; /*0x710b2c*/
    v3 = v32; /*0x710b2c*/
    v7 = v6; /*0x710b2e*/
    v5 = 0.0; /*0x710b2e*/
    v4 = v7; /*0x710b2e*/
  }
  v35 = v5; /*0x710f62*/
  *a3 = v5; /*0x710f66*/
  v117 = fabs(a2[1]); /*0x710f6d*/
  v36 = v117; /*0x710f71*/
  v118 = fabs(a2[2]); /*0x710f7a*/
  v76 = v36 + v118; /*0x710f82*/
  v119 = fabs(a3[1]); /*0x710f8f*/
  if ( v119 + v76 != v76 ) /*0x710fa0*/
  {
    v138 = a2[2]; /*0x710fab*/
    v134 = a2[1]; /*0x710fb2*/
    v77 = v138 + v134; /*0x710fba*/
    v61 = v134 - v138; /*0x710fc0*/
    v120 = a3[1] * (a3[1] * dbl_A3C800) + v61 * v61; /*0x710fd9*/
    v121 = sqrt(v120); /*0x710fe6*/
    v89 = (v77 - v121) * dbl_A2FAA0; /*0x711008*/
    v112 = (v77 + v121) * dbl_A2FAA0; /*0x711012*/
    if ( v61 < 0.0 ) /*0x711021*/
    {
      v78 = v138 - v89; /*0x71103c*/
      v37 = a3[1]; /*0x711040*/
    }
    else
    {
      v78 = a3[1]; /*0x711026*/
      v37 = v134 - v89; /*0x71102e*/
    }
    v62 = v37; /*0x711043*/
    v122 = v62 * v62 + v78 * v78; /*0x71105f*/
    v123 = sqrt(v122); /*0x71106c*/
    v54 = 1.0 / v123; /*0x711078*/
    v79 = v78 * v54; /*0x711086*/
    v63 = v54 * v62; /*0x71108e*/
    v38 = *(this + 1); /*0x711099*/
    v39 = *(this + 2); /*0x7110a0*/
    *(this + 2) = v39 * v79 + v38 * v63; /*0x7110b2*/
    *(this + 1) = v38 * v79 - v39 * v63; /*0x7110bf*/
    v40 = *(this + 4); /*0x7110c9*/
    v41 = *(this + 5); /*0x7110cc*/
    *(this + 5) = v41 * v79 + v40 * v63; /*0x7110da*/
    *(this + 4) = v40 * v79 - v41 * v63; /*0x7110e7*/
    v42 = *(this + 7); /*0x7110f1*/
    v43 = *(this + 8); /*0x7110f4*/
    *(this + 8) = v43 * v79 + v42 * v63; /*0x711102*/
    *(this + 7) = v79 * v42 - v63 * v43; /*0x71110d*/
    a2[1] = v89; /*0x711114*/
    a2[2] = v112; /*0x71111b*/
    v35 = 0.0; /*0x71111e*/
  }
  a3[1] = v35; /*0x711120*/
  return 1; /*0x710f57*/
}
