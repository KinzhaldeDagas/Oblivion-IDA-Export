float *__stdcall sub_6B1EA0(float *a1, float *a2, int a3)
{
  float *result; // eax
  float *v4; // ecx
  int v5; // edx
  double v6; // st7
  float *v7; // ecx
  double v8; // st6
  int v9; // edx
  double v10; // st5
  double v11; // st4
  double v12; // st3
  double v13; // st4
  double v14; // st3
  double v15; // st4
  double v16; // st3
  double v17; // st4
  double v18; // st3
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st2
  double v23; // st4
  double v24; // st3
  double v25; // st1
  double v26; // st2
  double v28; // st7
  double v29; // st6
  double v30; // st7
  double v31; // st6
  double v32; // st7
  double v33; // st6
  double v34; // st7
  double v35; // st6
  double v36; // st7
  double v37; // st6
  double v38; // st7
  double v39; // st6
  double v40; // st7
  double v41; // st6
  double v42; // st7
  double v43; // st6
  double v44; // st7
  double v45; // st6
  double v46; // st7
  double v47; // st6
  double v48; // st7
  double v49; // st6
  double v50; // st7
  double v51; // st6
  double v52; // st7
  double v53; // st6
  double v54; // st7
  double v55; // st6
  double v56; // st7
  double v57; // st6
  double v58; // st7
  double v59; // st5
  double v60; // st4
  double v61; // st5
  double v62; // st4
  double v63; // st5
  double v64; // st4
  double v65; // st5
  double v66; // st4
  double v67; // st5
  double v68; // st4
  double v69; // st5
  double v70; // st4
  double v71; // st5
  double v72; // st7
  double v73; // st5
  double v74; // st4
  double v75; // rt1
  double v76; // st6
  double v77; // st0
  double v78; // st2
  double v79; // st7
  double v80; // rt2
  double v81; // rtt
  double v82; // st0
  double v83; // st4
  double v84; // st3
  double v85; // st2
  float v86; // [esp+4h] [ebp-D4h]
  float v87; // [esp+4h] [ebp-D4h]
  float v88; // [esp+4h] [ebp-D4h]
  float v89; // [esp+4h] [ebp-D4h]
  float v90; // [esp+4h] [ebp-D4h]
  float v91; // [esp+4h] [ebp-D4h]
  float v92; // [esp+4h] [ebp-D4h]
  float v93; // [esp+4h] [ebp-D4h]
  float v94; // [esp+4h] [ebp-D4h]
  float v95; // [esp+4h] [ebp-D4h]
  float v96; // [esp+4h] [ebp-D4h]
  float v97; // [esp+8h] [ebp-D0h]
  float v98; // [esp+8h] [ebp-D0h]
  float v99; // [esp+8h] [ebp-D0h]
  float v100; // [esp+8h] [ebp-D0h]
  float v101; // [esp+8h] [ebp-D0h]
  float v102; // [esp+8h] [ebp-D0h]
  float v103; // [esp+8h] [ebp-D0h]
  float v104; // [esp+8h] [ebp-D0h]
  float v105; // [esp+8h] [ebp-D0h]
  float v106; // [esp+8h] [ebp-D0h]
  float v107; // [esp+8h] [ebp-D0h]
  double v108; // [esp+8h] [ebp-D0h]
  float v109; // [esp+14h] [ebp-C4h]
  float v110; // [esp+14h] [ebp-C4h]
  float v111; // [esp+14h] [ebp-C4h]
  float v112; // [esp+14h] [ebp-C4h]
  float v113; // [esp+14h] [ebp-C4h]
  float v114; // [esp+14h] [ebp-C4h]
  float v115; // [esp+14h] [ebp-C4h]
  double v116; // [esp+18h] [ebp-C0h]
  double v117; // [esp+18h] [ebp-C0h]
  double v118; // [esp+18h] [ebp-C0h]
  double v119; // [esp+20h] [ebp-B8h]
  double v120; // [esp+20h] [ebp-B8h]
  double v121; // [esp+20h] [ebp-B8h]
  double v122; // [esp+20h] [ebp-B8h]
  double v123; // [esp+28h] [ebp-B0h]
  double v124; // [esp+28h] [ebp-B0h]
  double v125; // [esp+28h] [ebp-B0h]
  double v126; // [esp+28h] [ebp-B0h]
  float v127; // [esp+30h] [ebp-A8h]
  float v128; // [esp+38h] [ebp-A0h]
  float v129; // [esp+38h] [ebp-A0h]
  float v130; // [esp+38h] [ebp-A0h]
  float v131; // [esp+38h] [ebp-A0h]
  float v132; // [esp+38h] [ebp-A0h]
  float v133; // [esp+38h] [ebp-A0h]
  float v134; // [esp+3Ch] [ebp-9Ch]
  float v135; // [esp+3Ch] [ebp-9Ch]
  float v136; // [esp+3Ch] [ebp-9Ch]
  float v137; // [esp+3Ch] [ebp-9Ch]
  float v138; // [esp+3Ch] [ebp-9Ch]
  float v139; // [esp+40h] [ebp-98h]
  float v140; // [esp+40h] [ebp-98h]
  float v141; // [esp+40h] [ebp-98h]
  float v142; // [esp+40h] [ebp-98h]
  float v143; // [esp+40h] [ebp-98h]
  float v144; // [esp+44h] [ebp-94h]
  float v145; // [esp+44h] [ebp-94h]
  float v146; // [esp+44h] [ebp-94h]
  float v147; // [esp+44h] [ebp-94h]
  float v148; // [esp+44h] [ebp-94h]
  float v149; // [esp+48h] [ebp-90h]
  float v150; // [esp+48h] [ebp-90h]
  float v151; // [esp+48h] [ebp-90h]
  float v152; // [esp+48h] [ebp-90h]
  float v153; // [esp+48h] [ebp-90h]
  float v154; // [esp+48h] [ebp-90h]
  float v155; // [esp+4Ch] [ebp-8Ch]
  float v156; // [esp+4Ch] [ebp-8Ch]
  float v157; // [esp+4Ch] [ebp-8Ch]
  float v158; // [esp+4Ch] [ebp-8Ch]
  float v159; // [esp+4Ch] [ebp-8Ch]
  float v160; // [esp+4Ch] [ebp-8Ch]
  float v161; // [esp+50h] [ebp-88h]
  float v162; // [esp+50h] [ebp-88h]
  float v163; // [esp+54h] [ebp-84h]
  float v164; // [esp+54h] [ebp-84h]
  float v165; // [esp+58h] [ebp-80h]
  float v166; // [esp+58h] [ebp-80h]
  float v167; // [esp+5Ch] [ebp-7Ch]
  float v168; // [esp+5Ch] [ebp-7Ch]
  float v169; // [esp+60h] [ebp-78h]
  float v170; // [esp+60h] [ebp-78h]
  float v171; // [esp+64h] [ebp-74h]
  float v172; // [esp+64h] [ebp-74h]
  float v173; // [esp+68h] [ebp-70h]
  float v174; // [esp+6Ch] [ebp-6Ch]
  float v175; // [esp+70h] [ebp-68h]
  float v176; // [esp+74h] [ebp-64h]
  float v177; // [esp+78h] [ebp-60h]
  float v178; // [esp+7Ch] [ebp-5Ch]
  float v179; // [esp+80h] [ebp-58h]
  double v180; // [esp+80h] [ebp-58h]
  float v181; // [esp+88h] [ebp-50h]
  double v182; // [esp+88h] [ebp-50h]
  double v183; // [esp+90h] [ebp-48h]
  double v184; // [esp+90h] [ebp-48h]
  double v185; // [esp+98h] [ebp-40h]
  double v186; // [esp+A0h] [ebp-38h]
  double v187; // [esp+A0h] [ebp-38h]
  float v188; // [esp+A8h] [ebp-30h]
  double v189; // [esp+A8h] [ebp-30h]
  float v190; // [esp+B0h] [ebp-28h]
  float v191; // [esp+B4h] [ebp-24h]
  float v192; // [esp+B8h] [ebp-20h]
  double v193; // [esp+B8h] [ebp-20h]
  float v194; // [esp+C0h] [ebp-18h]
  float v195; // [esp+C4h] [ebp-14h]
  float v196; // [esp+C8h] [ebp-10h]
  double v197; // [esp+C8h] [ebp-10h]
  float v198; // [esp+D0h] [ebp-8h]

  if ( a3 == 2 ) /*0x6b1eb2*/
  {
    result = a2 + 7; /*0x6b1ebd*/
    v4 = a2 + 7; /*0x6b1ec0*/
    v5 = 4; /*0x6b1ec2*/
    do /*0x6b1ee8*/
    {
      v4[1] = 0.0; /*0x6b1ec7*/
      v4 += 9; /*0x6b1eca*/
      --v5; /*0x6b1ecd*/
      v4[0xFFFFFFF7] = 0.0; /*0x6b1ed0*/
      v4[0xFFFFFFF6] = 0.0; /*0x6b1ed3*/
      v4[0xFFFFFFF5] = 0.0; /*0x6b1ed6*/
      v4[0xFFFFFFF4] = 0.0; /*0x6b1ed9*/
      v4[0xFFFFFFF3] = 0.0; /*0x6b1edc*/
      v4[0xFFFFFFF2] = 0.0; /*0x6b1edf*/
      v4[0xFFFFFFF1] = 0.0; /*0x6b1ee2*/
      v4[0xFFFFFFF0] = 0.0; /*0x6b1ee5*/
    }
    while ( v5 ); /*0x6b1ee8*/
    v6 = dbl_A77BF0; /*0x6b1eef*/
    v7 = a1 + 9; /*0x6b1ef5*/
    v8 = dbl_A2FAA0; /*0x6b1ef8*/
    v9 = 3; /*0x6b1efe*/
    v10 = dbl_A77BE8; /*0x6b1f03*/
    do /*0x6b21d4*/
    {
      v11 = v7[3]; /*0x6b1f09*/
      v7[6] = v7[6] + v11; /*0x6b1f11*/
      v12 = v11 + *v7; /*0x6b1f18*/
      v13 = *v7; /*0x6b1f18*/
      v7[3] = v12; /*0x6b1f1a*/
      v14 = v13 + v7[0xFFFFFFFD]; /*0x6b1f24*/
      v15 = v7[0xFFFFFFFD]; /*0x6b1f24*/
      *v7 = v14; /*0x6b1f26*/
      v16 = v15 + v7[0xFFFFFFFA]; /*0x6b1f2f*/
      v17 = v7[0xFFFFFFFA]; /*0x6b1f2f*/
      v7[0xFFFFFFFD] = v16; /*0x6b1f31*/
      v18 = v17 + v7[0xFFFFFFF7]; /*0x6b1f3b*/
      v19 = v7[0xFFFFFFF7]; /*0x6b1f3b*/
      v97 = v18; /*0x6b1f3d*/
      v20 = v97; /*0x6b1f41*/
      v7[0xFFFFFFFA] = v97; /*0x6b1f45*/
      v21 = *v7; /*0x6b1f48*/
      v7[6] = v7[6] + v21; /*0x6b1f4f*/
      v98 = v21 + v97; /*0x6b1f54*/
      v22 = v98; /*0x6b1f58*/
      *v7 = v98; /*0x6b1f5c*/
      v86 = v7[0xFFFFFFFD] * v6; /*0x6b1f63*/
      v99 = v7[3] * v8; /*0x6b1f6e*/
      v100 = v99 + v19; /*0x6b1f78*/
      v134 = v19 - v7[3]; /*0x6b1f80*/
      v128 = v86 + v100; /*0x6b1f90*/
      v139 = v100 - v86; /*0x6b1f96*/
      v87 = v22 * v6; /*0x6b1f9e*/
      v101 = v7[6] * v8; /*0x6b1fa9*/
      v102 = v101 + v20; /*0x6b1fb3*/
      v149 = v20 - v7[6]; /*0x6b1fb9*/
      v155 = v87 + v102; /*0x6b1fc9*/
      v103 = v102 - v87; /*0x6b1fcf*/
      v144 = v103 * dbl_A77BE0; /*0x6b1fdd*/
      v150 = v149 * dbl_A77BD8; /*0x6b1feb*/
      v156 = v155 * dbl_A77BD0; /*0x6b1ff9*/
      v104 = v128; /*0x6b2001*/
      v129 = v128 + v156; /*0x6b200d*/
      v157 = v104 - v156; /*0x6b2015*/
      v105 = v134; /*0x6b201d*/
      v135 = v134 + v150; /*0x6b2029*/
      v151 = v105 - v150; /*0x6b2031*/
      v106 = v139; /*0x6b2039*/
      v140 = v139 + v144; /*0x6b2045*/
      v145 = v106 - v144; /*0x6b204d*/
      v130 = v129 * dbl_A77BC8; /*0x6b205b*/
      v136 = v135 * dbl_A77BC0; /*0x6b2069*/
      v141 = v140 * dbl_A77BB8; /*0x6b2077*/
      v146 = v145 * dbl_A77BB0; /*0x6b2085*/
      v152 = v151 * dbl_A77BA8; /*0x6b2093*/
      v158 = v157 * dbl_A77BA0; /*0x6b20a1*/
      v23 = -v130; /*0x6b20a9*/
      v165 = v23 * v10; /*0x6b20af*/
      v167 = v23 * dbl_A77B98; /*0x6b20bd*/
      v24 = -v136; /*0x6b20c5*/
      v25 = dbl_A77B90; /*0x6b20c9*/
      v163 = v24 * v25; /*0x6b20d3*/
      v169 = v24 * dbl_A77B88; /*0x6b20df*/
      v26 = -v141; /*0x6b20e7*/
      v161 = dbl_A77B80 * v26; /*0x6b20f1*/
      v171 = v26 * dbl_A77B78; /*0x6b20fb*/
      v131 = v146; /*0x6b2103*/
      v137 = dbl_A77B88 * v152; /*0x6b2113*/
      v142 = dbl_A77B98 * v158; /*0x6b2121*/
      result += 6; /*0x6b212b*/
      ++v7; /*0x6b212e*/
      --v9; /*0x6b2131*/
      v147 = -v158 * v10; /*0x6b2134*/
      v153 = v25 * -v152; /*0x6b213e*/
      v159 = -v131 * dbl_A77B80; /*0x6b2150*/
      v132 = v131 * dbl_A77B78; /*0x6b215a*/
      result[0xFFFFFFF9] = result[0xFFFFFFF9] + v132; /*0x6b2165*/
      result[0xFFFFFFFA] = result[0xFFFFFFFA] + v137; /*0x6b216f*/
      result[0xFFFFFFFB] = v142 + result[0xFFFFFFFB]; /*0x6b2179*/
      result[0xFFFFFFFC] = result[0xFFFFFFFC] + v147; /*0x6b2183*/
      result[0xFFFFFFFD] = result[0xFFFFFFFD] + v153; /*0x6b218d*/
      result[0xFFFFFFFE] = result[0xFFFFFFFE] + v159; /*0x6b2197*/
      result[0xFFFFFFFF] = v161 + result[0xFFFFFFFF]; /*0x6b21a1*/
      *result = *result + v163; /*0x6b21aa*/
      result[1] = result[1] + v165; /*0x6b21b3*/
      result[2] = result[2] + v167; /*0x6b21bd*/
      result[3] = v169 + result[3]; /*0x6b21c7*/
      result[4] = result[4] + v171; /*0x6b21d1*/
    }
    while ( v9 ); /*0x6b21d4*/
  }
  else
  {
    v28 = a1[0x10]; /*0x6b21e9*/
    a1[0x11] = a1[0x11] + v28; /*0x6b21f1*/
    v29 = v28 + a1[0xF]; /*0x6b21fb*/
    v30 = a1[0xF]; /*0x6b21fb*/
    a1[0x10] = v29; /*0x6b21fd*/
    v31 = v30 + a1[0xE]; /*0x6b2207*/
    v32 = a1[0xE]; /*0x6b2207*/
    a1[0xF] = v31; /*0x6b2209*/
    v33 = v32 + a1[0xD]; /*0x6b2213*/
    v34 = a1[0xD]; /*0x6b2213*/
    a1[0xE] = v33; /*0x6b2215*/
    v35 = v34 + a1[0xC]; /*0x6b221f*/
    v36 = a1[0xC]; /*0x6b221f*/
    a1[0xD] = v35; /*0x6b2221*/
    v37 = v36 + a1[0xB]; /*0x6b222b*/
    v38 = a1[0xB]; /*0x6b222b*/
    a1[0xC] = v37; /*0x6b222d*/
    v39 = v38 + a1[0xA]; /*0x6b2237*/
    v40 = a1[0xA]; /*0x6b2237*/
    a1[0xB] = v39; /*0x6b2239*/
    v41 = v40 + a1[9]; /*0x6b2243*/
    v42 = a1[9]; /*0x6b2243*/
    a1[0xA] = v41; /*0x6b2245*/
    v43 = v42 + a1[8]; /*0x6b224f*/
    v44 = a1[8]; /*0x6b224f*/
    a1[9] = v43; /*0x6b2251*/
    v45 = v44 + a1[7]; /*0x6b225b*/
    v46 = a1[7]; /*0x6b225b*/
    a1[8] = v45; /*0x6b225d*/
    v47 = v46 + a1[6]; /*0x6b2267*/
    v48 = a1[6]; /*0x6b2267*/
    a1[7] = v47; /*0x6b2269*/
    v49 = v48 + a1[5]; /*0x6b2273*/
    v50 = a1[5]; /*0x6b2273*/
    a1[6] = v49; /*0x6b2275*/
    v51 = v50 + a1[4]; /*0x6b227f*/
    v52 = a1[4]; /*0x6b227f*/
    a1[5] = v51; /*0x6b2281*/
    v53 = v52 + a1[3]; /*0x6b228b*/
    v54 = a1[3]; /*0x6b228b*/
    a1[4] = v53; /*0x6b228d*/
    v55 = v54 + a1[2]; /*0x6b2297*/
    v56 = a1[2]; /*0x6b2297*/
    a1[3] = v55; /*0x6b2299*/
    v57 = v56 + a1[1]; /*0x6b22a3*/
    v58 = a1[1]; /*0x6b22a3*/
    a1[2] = v57; /*0x6b22a5*/
    v119 = *a1; /*0x6b22aa*/
    v107 = v58 + v119; /*0x6b22b4*/
    a1[1] = v107; /*0x6b22bc*/
    v59 = a1[0xF]; /*0x6b22bf*/
    a1[0x11] = a1[0x11] + v59; /*0x6b22c7*/
    v60 = v59 + a1[0xD]; /*0x6b22d1*/
    v61 = a1[0xD]; /*0x6b22d1*/
    a1[0xF] = v60; /*0x6b22d3*/
    v62 = v61 + a1[0xB]; /*0x6b22dd*/
    v63 = a1[0xB]; /*0x6b22dd*/
    a1[0xD] = v62; /*0x6b22df*/
    v64 = v63 + a1[9]; /*0x6b22e9*/
    v65 = a1[9]; /*0x6b22e9*/
    a1[0xB] = v64; /*0x6b22eb*/
    v66 = v65 + a1[7]; /*0x6b22f5*/
    v67 = a1[7]; /*0x6b22f5*/
    a1[9] = v66; /*0x6b22f7*/
    v68 = v67 + a1[5]; /*0x6b2301*/
    v69 = a1[5]; /*0x6b2301*/
    a1[7] = v68; /*0x6b2303*/
    v70 = v69 + a1[3]; /*0x6b230d*/
    v71 = a1[3]; /*0x6b230d*/
    a1[5] = v70; /*0x6b230f*/
    v88 = v107 + v71; /*0x6b2314*/
    a1[3] = v88; /*0x6b231c*/
    v109 = v119 + v119; /*0x6b2321*/
    v116 = a1[0xC]; /*0x6b2328*/
    v123 = v109; /*0x6b2330*/
    v110 = v116 + v109; /*0x6b2336*/
    v72 = a1[4]; /*0x6b233a*/
    v73 = a1[8]; /*0x6b2348*/
    v74 = a1[0x10]; /*0x6b234b*/
    v75 = dbl_A77B70; /*0x6b2358*/
    v76 = dbl_A77B68; /*0x6b2366*/
    v77 = dbl_A77B60; /*0x6b236c*/
    v194 = a1[0x10] * v77 + a1[8] * v76 + v110 + v72 * v75; /*0x6b2378*/
    v198 = v123 + v72 - v73 - v116 - v116 - v74; /*0x6b2391*/
    v192 = v110 - v72 * v77 - v73 * v75 + v74 * v76; /*0x6b23af*/
    v196 = v110 - v72 * v76 + v73 * v77 - v74 * v75; /*0x6b23cd*/
    v78 = v119 - v72; /*0x6b23da*/
    v79 = v77; /*0x6b23da*/
    v179 = v74 + v73 + v78 - v116; /*0x6b23e6*/
    v111 = a1[6] * dbl_A77B58; /*0x6b23f6*/
    v117 = a1[2]; /*0x6b23fd*/
    v183 = a1[0xA]; /*0x6b240c*/
    v124 = a1[0xE]; /*0x6b2416*/
    v80 = dbl_A77B50; /*0x6b2422*/
    v81 = dbl_A77B48; /*0x6b242e*/
    v82 = dbl_A77B40; /*0x6b2432*/
    v191 = v124 * v82 + v183 * v81 + v111 + v117 * v80; /*0x6b243e*/
    v195 = (v117 - v183 - v124) * dbl_A77B58; /*0x6b245e*/
    v188 = v117 * v81 - v111 - v183 * v82 + v124 * v80; /*0x6b247d*/
    *(float *)&v183 = v117 * v82 - v111 + v183 * v80 - v124 * v81; /*0x6b24a1*/
    v108 = v107; /*0x6b24ac*/
    v112 = v108 + v108; /*0x6b24b2*/
    v185 = a1[0xD]; /*0x6b24b9*/
    v186 = v112; /*0x6b24c4*/
    v113 = v185 + v112; /*0x6b24cd*/
    v120 = a1[5]; /*0x6b24d4*/
    v118 = a1[9]; /*0x6b24e6*/
    v125 = a1[0x11]; /*0x6b24ed*/
    v190 = v120 * v75 + v113 + v118 * v76 + v125 * v79; /*0x6b250a*/
    v127 = v186 + v120 - v118 - v185 - v185 - v125; /*0x6b252f*/
    *(float *)&v186 = v113 - v120 * v79 - v118 * v75 + v125 * v76; /*0x6b2550*/
    *(float *)&v125 = v79 * v118 + v113 - v76 * v120 - v75 * v125; /*0x6b2580*/
    *(float *)&v118 = (a1[0x11] + v108 - v120 + v118 - v185) * dbl_A77BD8; /*0x6b25a1*/
    v114 = a1[7] * dbl_A77B58; /*0x6b25ae*/
    v83 = v114; /*0x6b25b2*/
    v84 = a1[0xB]; /*0x6b25b6*/
    v85 = a1[0xF]; /*0x6b25b9*/
    v115 = v88 * v80 + v114 + a1[0xB] * v81 + a1[0xF] * v82; /*0x6b25d0*/
    v121 = a1[3]; /*0x6b25d7*/
    *(float *)&v185 = (v121 - v84 - v85) * dbl_A77B58; /*0x6b25e5*/
    v181 = v121 * v81 - v83 - v84 * v82 + v85 * v80; /*0x6b2600*/
    *(float *)&v121 = v80 * v84 + v82 * v121 - v83 - v81 * v85; /*0x6b2619*/
    *(float *)&v108 = v194 + v191; /*0x6b262f*/
    v89 = (v190 + v115) * dbl_A77B38; /*0x6b2648*/
    v133 = *(float *)&v108 + v89; /*0x6b2658*/
    v178 = *(float *)&v108 - v89; /*0x6b265e*/
    *(float *)&v108 = v198 + v195; /*0x6b2674*/
    v90 = (*(float *)&v185 + v127) * dbl_A77BD0; /*0x6b2699*/
    v138 = *(float *)&v108 + v90; /*0x6b26ab*/
    v177 = *(float *)&v108 - v90; /*0x6b26b3*/
    v189 = v188; /*0x6b26be*/
    v193 = v192; /*0x6b26cc*/
    *(float *)&v108 = v189 + v193; /*0x6b26d5*/
    v182 = v181; /*0x6b26e0*/
    v187 = *(float *)&v186; /*0x6b26ee*/
    v91 = (v182 + v187) * dbl_A77B30; /*0x6b26fd*/
    v143 = *(float *)&v108 + v91; /*0x6b270f*/
    v176 = *(float *)&v108 - v91; /*0x6b2717*/
    v184 = *(float *)&v183; /*0x6b2722*/
    v197 = v196; /*0x6b2730*/
    *(float *)&v108 = v184 + v197; /*0x6b2739*/
    v122 = *(float *)&v121; /*0x6b2741*/
    v126 = *(float *)&v125; /*0x6b2749*/
    v92 = (v122 + v126) * dbl_A77B28; /*0x6b2755*/
    v148 = *(float *)&v108 + v92; /*0x6b2767*/
    v175 = *(float *)&v108 - v92; /*0x6b276f*/
    v180 = v179; /*0x6b277e*/
    v154 = v180 + *(float *)&v118; /*0x6b2787*/
    v174 = v180 - *(float *)&v118; /*0x6b2792*/
    *(float *)&v108 = v197 - v184; /*0x6b27a4*/
    v93 = (v126 - v122) * dbl_A77B20; /*0x6b27b6*/
    v160 = *(float *)&v108 + v93; /*0x6b27c8*/
    v173 = *(float *)&v108 - v93; /*0x6b27d0*/
    *(float *)&v108 = v193 - v189; /*0x6b27e2*/
    v94 = (v187 - v182) * dbl_A77B18; /*0x6b27fa*/
    v162 = *(float *)&v108 + v94; /*0x6b280c*/
    v172 = *(float *)&v108 - v94; /*0x6b2814*/
    *(float *)&v108 = v198 - v195; /*0x6b281a*/
    v95 = (v127 - *(float *)&v185) * dbl_A77BE0; /*0x6b2832*/
    v164 = *(float *)&v108 + v95; /*0x6b2842*/
    v170 = *(float *)&v108 - v95; /*0x6b2848*/
    *(float *)&v108 = v194 - v191; /*0x6b2852*/
    v96 = (v190 - v115) * dbl_A77B10; /*0x6b285e*/
    result = (float *)((char *)&unk_B183D0 + 0x90 * a3); /*0x6b2877*/
    v166 = *(float *)&v108 + v96; /*0x6b287c*/
    v168 = *(float *)&v108 - v96; /*0x6b2882*/
    *a2 = -v168 * *result; /*0x6b2890*/
    a2[1] = result[1] * -v170; /*0x6b28a1*/
    a2[2] = result[2] * -v172; /*0x6b28b3*/
    a2[3] = result[3] * -v173; /*0x6b28c5*/
    a2[4] = result[4] * -v174; /*0x6b28d7*/
    a2[5] = result[5] * -v175; /*0x6b28e9*/
    a2[6] = result[6] * -v176; /*0x6b28f7*/
    a2[7] = result[7] * -v177; /*0x6b2905*/
    a2[8] = result[8] * -v178; /*0x6b2913*/
    a2[9] = result[9] * v178; /*0x6b291d*/
    a2[0xA] = result[0xA] * v177; /*0x6b2927*/
    a2[0xB] = result[0xB] * v176; /*0x6b2931*/
    a2[0xC] = v175 * result[0xC]; /*0x6b2937*/
    a2[0xD] = v174 * result[0xD]; /*0x6b293d*/
    a2[0xE] = v173 * result[0xE]; /*0x6b2943*/
    a2[0xF] = v172 * result[0xF]; /*0x6b2949*/
    a2[0x10] = v170 * result[0x10]; /*0x6b294f*/
    a2[0x11] = v168 * result[0x11]; /*0x6b2955*/
    a2[0x12] = result[0x12] * v166; /*0x6b2961*/
    a2[0x13] = result[0x13] * v164; /*0x6b296d*/
    a2[0x14] = result[0x14] * v162; /*0x6b2979*/
    a2[0x15] = result[0x15] * v160; /*0x6b2985*/
    a2[0x16] = result[0x16] * v154; /*0x6b2991*/
    a2[0x17] = result[0x17] * v148; /*0x6b299d*/
    a2[0x18] = v143 * result[0x18]; /*0x6b29ab*/
    a2[0x19] = v138 * result[0x19]; /*0x6b29bc*/
    a2[0x1A] = result[0x1A] * v133; /*0x6b29c8*/
    a2[0x1B] = v133 * result[0x1B]; /*0x6b29ce*/
    a2[0x1C] = result[0x1C] * v138; /*0x6b29db*/
    a2[0x1D] = result[0x1D] * v143; /*0x6b29e5*/
    a2[0x1E] = v148 * result[0x1E]; /*0x6b29eb*/
    a2[0x1F] = v154 * result[0x1F]; /*0x6b29f1*/
    a2[0x20] = v160 * result[0x20]; /*0x6b29fa*/
    a2[0x21] = v162 * result[0x21]; /*0x6b2a06*/
    a2[0x22] = v164 * result[0x22]; /*0x6b2a12*/
    a2[0x23] = v166 * result[0x23]; /*0x6b2a1e*/
  }
  return result; /*0x6b21e0*/
}
