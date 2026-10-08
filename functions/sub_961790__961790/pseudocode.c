bool __cdecl sub_961790(float a1, float *a2, float *a3, float *a4, float *a5)
{
  float *v5; // ebx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st4
  float *v14; // edx
  double v15; // st4
  double v16; // st3
  double x; // st4
  double y; // st3
  double v19; // st2
  double v21; // st2
  double v22; // st2
  double v23; // st2
  double v24; // st1
  double v25; // rt1
  double v26; // st1
  double v27; // st6
  double v28; // rt2
  double v29; // st2
  double v30; // st7
  double v31; // rtt
  double v32; // st3
  double v33; // st5
  double v34; // st5
  double v35; // st4
  double v36; // st3
  double v37; // st3
  double v38; // st3
  double v39; // st3
  double v40; // st2
  double v41; // st5
  double v42; // st2
  double v43; // st3
  double v44; // st4
  double v45; // st3
  double v46; // st6
  double v47; // st3
  bool v48; // c0
  double v49; // st7
  double v50; // st7
  bool v51; // c0
  bool v52; // c3
  double v53; // st4
  double v54; // st5
  double v55; // st3
  double v56; // st4
  double v57; // st5
  double v58; // st3
  double v59; // st3
  bool v60; // c0
  double v61; // st5
  bool v62; // c0
  bool v63; // c3
  double v64; // st3
  double v65; // st5
  bool v66; // c0
  bool v67; // c3
  double v68; // st4
  double v69; // st3
  double v70; // st6
  double v71; // st3
  double v72; // st2
  double v73; // st7
  double v74; // st4
  double v75; // rt0
  double v76; // st6
  double v77; // st7
  double v78; // st4
  double v79; // rt2
  double v80; // st6
  double v81; // st7
  double v82; // st4
  double v83; // rt0
  double v84; // st7
  double v85; // st4
  double v86; // rt2
  double v87; // st6
  double v88; // st7
  double v89; // st4
  double v90; // rt0
  double v91; // st7
  double v92; // st4
  double v93; // rt2
  double v94; // st6
  float v95; // [esp+8h] [ebp-B4h]
  float v96; // [esp+8h] [ebp-B4h]
  float v97; // [esp+8h] [ebp-B4h]
  float v98; // [esp+8h] [ebp-B4h]
  float v99; // [esp+8h] [ebp-B4h]
  float v100; // [esp+8h] [ebp-B4h]
  float v101; // [esp+8h] [ebp-B4h]
  float v102; // [esp+8h] [ebp-B4h]
  float v103; // [esp+8h] [ebp-B4h]
  float v104; // [esp+8h] [ebp-B4h]
  float v105; // [esp+8h] [ebp-B4h]
  float v106; // [esp+8h] [ebp-B4h]
  float v107; // [esp+8h] [ebp-B4h]
  float v108; // [esp+8h] [ebp-B4h]
  float v109; // [esp+8h] [ebp-B4h]
  float v110; // [esp+8h] [ebp-B4h]
  float v111; // [esp+8h] [ebp-B4h]
  float v112; // [esp+8h] [ebp-B4h]
  float v113; // [esp+8h] [ebp-B4h]
  float v114; // [esp+8h] [ebp-B4h]
  float v115; // [esp+8h] [ebp-B4h]
  float v116; // [esp+8h] [ebp-B4h]
  float v117; // [esp+8h] [ebp-B4h]
  float v118; // [esp+8h] [ebp-B4h]
  float v119; // [esp+8h] [ebp-B4h]
  float v120; // [esp+8h] [ebp-B4h]
  float v121; // [esp+8h] [ebp-B4h]
  float v122; // [esp+8h] [ebp-B4h]
  float v123; // [esp+8h] [ebp-B4h]
  float v124; // [esp+8h] [ebp-B4h]
  float v125; // [esp+8h] [ebp-B4h]
  float v126; // [esp+8h] [ebp-B4h]
  float v127; // [esp+8h] [ebp-B4h]
  float v128; // [esp+8h] [ebp-B4h]
  float v129; // [esp+8h] [ebp-B4h]
  float v130; // [esp+8h] [ebp-B4h]
  float v131; // [esp+8h] [ebp-B4h]
  float v132; // [esp+8h] [ebp-B4h]
  float v133; // [esp+8h] [ebp-B4h]
  float v134; // [esp+8h] [ebp-B4h]
  float v135; // [esp+8h] [ebp-B4h]
  float v136; // [esp+8h] [ebp-B4h]
  float v137; // [esp+8h] [ebp-B4h]
  float v138; // [esp+8h] [ebp-B4h]
  float v139; // [esp+8h] [ebp-B4h]
  float v140; // [esp+8h] [ebp-B4h]
  float v141; // [esp+8h] [ebp-B4h]
  float v142; // [esp+8h] [ebp-B4h]
  float v143; // [esp+8h] [ebp-B4h]
  float v144; // [esp+8h] [ebp-B4h]
  float v145; // [esp+8h] [ebp-B4h]
  float v146; // [esp+8h] [ebp-B4h]
  float v147; // [esp+8h] [ebp-B4h]
  float v148; // [esp+8h] [ebp-B4h]
  float v149; // [esp+8h] [ebp-B4h]
  float v150; // [esp+8h] [ebp-B4h]
  float v151; // [esp+8h] [ebp-B4h]
  float v152; // [esp+8h] [ebp-B4h]
  float v153; // [esp+8h] [ebp-B4h]
  float v154; // [esp+8h] [ebp-B4h]
  float v155; // [esp+8h] [ebp-B4h]
  float v156; // [esp+Ch] [ebp-B0h]
  float v157; // [esp+Ch] [ebp-B0h]
  float v158; // [esp+Ch] [ebp-B0h]
  float v159; // [esp+Ch] [ebp-B0h]
  float v160; // [esp+Ch] [ebp-B0h]
  float v161; // [esp+Ch] [ebp-B0h]
  float v162; // [esp+Ch] [ebp-B0h]
  float v163; // [esp+Ch] [ebp-B0h]
  float v164; // [esp+Ch] [ebp-B0h]
  float v165; // [esp+Ch] [ebp-B0h]
  float v166; // [esp+Ch] [ebp-B0h]
  float v167; // [esp+Ch] [ebp-B0h]
  float v168; // [esp+Ch] [ebp-B0h]
  float v169; // [esp+Ch] [ebp-B0h]
  float v170; // [esp+Ch] [ebp-B0h]
  float v171; // [esp+Ch] [ebp-B0h]
  float v172; // [esp+Ch] [ebp-B0h]
  float v173; // [esp+Ch] [ebp-B0h]
  float v174; // [esp+Ch] [ebp-B0h]
  float v175; // [esp+Ch] [ebp-B0h]
  float v176; // [esp+Ch] [ebp-B0h]
  float v177; // [esp+Ch] [ebp-B0h]
  float v178; // [esp+Ch] [ebp-B0h]
  float v179; // [esp+Ch] [ebp-B0h]
  float v180; // [esp+Ch] [ebp-B0h]
  float v181; // [esp+Ch] [ebp-B0h]
  float v182; // [esp+Ch] [ebp-B0h]
  float v183; // [esp+Ch] [ebp-B0h]
  float v184; // [esp+Ch] [ebp-B0h]
  float v185; // [esp+Ch] [ebp-B0h]
  float v186; // [esp+Ch] [ebp-B0h]
  float v187; // [esp+10h] [ebp-ACh]
  float v188; // [esp+10h] [ebp-ACh]
  float v189; // [esp+10h] [ebp-ACh]
  float v190; // [esp+10h] [ebp-ACh]
  float v191; // [esp+10h] [ebp-ACh]
  float v192; // [esp+10h] [ebp-ACh]
  float v193; // [esp+10h] [ebp-ACh]
  float v194; // [esp+10h] [ebp-ACh]
  float v195; // [esp+10h] [ebp-ACh]
  float v196; // [esp+10h] [ebp-ACh]
  float v197; // [esp+10h] [ebp-ACh]
  float v198; // [esp+10h] [ebp-ACh]
  float v199; // [esp+10h] [ebp-ACh]
  float v200; // [esp+10h] [ebp-ACh]
  float v201; // [esp+10h] [ebp-ACh]
  float v202; // [esp+10h] [ebp-ACh]
  float v203; // [esp+10h] [ebp-ACh]
  float v204; // [esp+10h] [ebp-ACh]
  float v205; // [esp+10h] [ebp-ACh]
  float v206; // [esp+10h] [ebp-ACh]
  float v207; // [esp+10h] [ebp-ACh]
  float *v208; // [esp+14h] [ebp-A8h]
  float v209; // [esp+14h] [ebp-A8h]
  float v210; // [esp+14h] [ebp-A8h]
  float v211; // [esp+14h] [ebp-A8h]
  float v212; // [esp+14h] [ebp-A8h]
  float v213; // [esp+14h] [ebp-A8h]
  float v214; // [esp+14h] [ebp-A8h]
  float v215; // [esp+14h] [ebp-A8h]
  float v216; // [esp+14h] [ebp-A8h]
  float v217; // [esp+14h] [ebp-A8h]
  float v218; // [esp+14h] [ebp-A8h]
  float v219; // [esp+14h] [ebp-A8h]
  float v220; // [esp+14h] [ebp-A8h]
  float v221; // [esp+14h] [ebp-A8h]
  float v222; // [esp+14h] [ebp-A8h]
  float v223; // [esp+14h] [ebp-A8h]
  float v224; // [esp+14h] [ebp-A8h]
  float v225; // [esp+14h] [ebp-A8h]
  float v226; // [esp+14h] [ebp-A8h]
  float v227; // [esp+14h] [ebp-A8h]
  float v228; // [esp+18h] [ebp-A4h]
  float v229; // [esp+18h] [ebp-A4h]
  float v230; // [esp+18h] [ebp-A4h]
  float v231; // [esp+18h] [ebp-A4h]
  float v232; // [esp+18h] [ebp-A4h]
  float v233; // [esp+18h] [ebp-A4h]
  float v234; // [esp+18h] [ebp-A4h]
  float v235; // [esp+18h] [ebp-A4h]
  float v236; // [esp+18h] [ebp-A4h]
  float v237; // [esp+18h] [ebp-A4h]
  float v238; // [esp+18h] [ebp-A4h]
  float v239; // [esp+18h] [ebp-A4h]
  float v240; // [esp+18h] [ebp-A4h]
  float v241; // [esp+1Ch] [ebp-A0h]
  float v242; // [esp+1Ch] [ebp-A0h]
  float v243; // [esp+1Ch] [ebp-A0h]
  float v244; // [esp+20h] [ebp-9Ch]
  float v245; // [esp+20h] [ebp-9Ch]
  float v246; // [esp+20h] [ebp-9Ch]
  float v247; // [esp+24h] [ebp-98h]
  float v248; // [esp+24h] [ebp-98h]
  float v249; // [esp+24h] [ebp-98h]
  NiPoint3 out; // [esp+28h] [ebp-94h] BYREF
  float v251; // [esp+34h] [ebp-88h]
  float v252; // [esp+38h] [ebp-84h]
  float v253; // [esp+3Ch] [ebp-80h]
  float v254; // [esp+40h] [ebp-7Ch]
  float v255; // [esp+44h] [ebp-78h]
  float v256; // [esp+48h] [ebp-74h]
  float v257; // [esp+4Ch] [ebp-70h]
  float v258; // [esp+50h] [ebp-6Ch]
  float v259; // [esp+54h] [ebp-68h]
  float v260; // [esp+58h] [ebp-64h]
  float v261; // [esp+5Ch] [ebp-60h]
  float v262; // [esp+60h] [ebp-5Ch]
  float v263; // [esp+64h] [ebp-58h]
  float v264; // [esp+68h] [ebp-54h]
  float v265; // [esp+6Ch] [ebp-50h]
  float v266; // [esp+70h] [ebp-4Ch]
  float v267; // [esp+74h] [ebp-48h]
  float v268; // [esp+78h] [ebp-44h]
  float v269; // [esp+7Ch] [ebp-40h]
  float v270; // [esp+80h] [ebp-3Ch]
  float v271; // [esp+84h] [ebp-38h]
  float v272; // [esp+88h] [ebp-34h]
  float v273; // [esp+8Ch] [ebp-30h]
  float v274; // [esp+90h] [ebp-2Ch]
  float *v275; // [esp+94h] [ebp-28h]
  NiPoint3 v276; // [esp+98h] [ebp-24h] BYREF
  float v277[3]; // [esp+A4h] [ebp-18h] BYREF
  NiPoint3 other; // [esp+B0h] [ebp-Ch] BYREF

  out.x = *a5 - *a3; /*0x9617b1*/
  v5 = a2 + 4; /*0x9617c3*/
  out.y = a5[1] - a3[1]; /*0x9617c6*/
  v6 = a5[2] - a3[2]; /*0x9617d1*/
  v276.x = out.x; /*0x9617d8*/
  v276.y = out.y; /*0x9617df*/
  out.z = v6; /*0x9617e6*/
  v7 = a4[1]; /*0x9617ee*/
  v276.z = out.z; /*0x9617f1*/
  v241 = v7 - a2[1]; /*0x9617fb*/
  v8 = a4[2]; /*0x961803*/
  other.x = v241; /*0x961806*/
  v244 = v8 - a2[2]; /*0x961810*/
  v9 = a4[3]; /*0x961818*/
  other.y = v244; /*0x96181b*/
  v247 = v9 - a2[3]; /*0x961825*/
  other.z = v247; /*0x961831*/
  v260 = out.x * a1; /*0x961845*/
  v261 = out.y * a1; /*0x96184f*/
  v262 = a1 * out.z; /*0x961857*/
  v10 = v241; /*0x961867*/
  out.x = v260 + v241; /*0x961869*/
  v277[0] = out.x; /*0x961875*/
  v11 = v244; /*0x961884*/
  out.y = v261 + v244; /*0x961886*/
  v277[1] = out.y; /*0x961892*/
  v12 = v247; /*0x9618a1*/
  out.z = v262 + v247; /*0x9618a3*/
  v13 = a4[4]; /*0x9618ab*/
  v277[2] = out.z; /*0x9618ae*/
  v251 = v13 * a2[4] + a4[5] * a2[5] + a4[6] * a2[6]; /*0x9618c7*/
  v14 = a4 + 0xA; /*0x9618d1*/
  v15 = a4[8] * a2[5]; /*0x9618d4*/
  v16 = a4[7]; /*0x9618db*/
  v275 = a4 + 0xA; /*0x9618dd*/
  v252 = v15 + v16 * a2[4] + a4[9] * a2[6]; /*0x9618f0*/
  v253 = a4[0xB] * a2[5] + a4[0xA] * a2[4] + a4[0xC] * a2[6]; /*0x961908*/
  v260 = v241 * a2[4] + v244 * a2[5] + a2[6] * v247; /*0x96191e*/
  x = out.x; /*0x961922*/
  y = out.y; /*0x96193e*/
  v263 = out.x * a2[4] + out.y * a2[5] + a2[6] * out.z; /*0x961940*/
  v95 = fabs(v251); /*0x96194a*/
  v266 = v95; /*0x961952*/
  v96 = fabs(v252); /*0x96195c*/
  v267 = v96; /*0x961964*/
  v97 = fabs(v253); /*0x96196e*/
  v268 = v97; /*0x961976*/
  v98 = a4[0xE] * v267 + a4[0xD] * v266 + v97 * a4[0xF]; /*0x961993*/
  v156 = v98 + a2[0xD]; /*0x96199e*/
  v19 = v156; /*0x9619ae*/
  if ( v156 >= (double)v260 ) /*0x9619b3*/
  {
    v157 = -v19; /*0x9619da*/
    if ( v157 > (double)v260 && v263 < (double)v157 ) /*0x9619fc*/
      return 0; /*0x961a13*/
  }
  else if ( v263 > v19 ) /*0x9619c0*/
  {
    return 0; /*0x9619d7*/
  }
  v208 = a2 + 7; /*0x961a1f*/
  v254 = a2[8] * a4[5] + a4[4] * a2[7] + a2[9] * a4[6]; /*0x961a32*/
  v255 = a4[8] * a2[8] + a2[7] * a4[7] + a4[9] * a2[9]; /*0x961a4a*/
  v256 = a4[0xB] * a2[8] + a4[0xA] * a2[7] + a4[0xC] * a2[9]; /*0x961a62*/
  v261 = a2[8] * v11 + v10 * a2[7] + a2[9] * v12; /*0x961a78*/
  v264 = a2[8] * y + x * a2[7] + a2[9] * out.z; /*0x961a90*/
  v99 = fabs(v254); /*0x961a9a*/
  v269 = v99; /*0x961aa2*/
  v100 = fabs(v255); /*0x961aaf*/
  v270 = v100; /*0x961ab7*/
  v101 = fabs(v256); /*0x961ac4*/
  v271 = v101; /*0x961acc*/
  v102 = a4[0xE] * v270 + a4[0xD] * v269 + v101 * a4[0xF]; /*0x961af5*/
  v158 = v102 + a2[0xE]; /*0x961b00*/
  v21 = v158; /*0x961b10*/
  if ( v158 >= (double)v261 ) /*0x961b15*/
  {
    v159 = -v21; /*0x961b3c*/
    if ( v159 > (double)v261 && v264 < (double)v159 ) /*0x961b5e*/
      return 0; /*0x961b75*/
  }
  else if ( v264 > v21 ) /*0x961b22*/
  {
    return 0; /*0x961b39*/
  }
  v257 = a2[0xB] * a4[5] + a2[0xA] * a4[4] + a2[0xC] * a4[6]; /*0x961b92*/
  v258 = a4[8] * a2[0xB] + a4[7] * a2[0xA] + a4[9] * a2[0xC]; /*0x961bab*/
  v259 = a4[0xB] * a2[0xB] + a4[0xA] * a2[0xA] + a4[0xC] * a2[0xC]; /*0x961bc4*/
  v262 = a2[0xB] * v11 + v10 * a2[0xA] + a2[0xC] * v12; /*0x961bdb*/
  v265 = a2[0xB] * y + x * a2[0xA] + a2[0xC] * out.z; /*0x961bf4*/
  v103 = fabs(v257); /*0x961bfe*/
  v272 = v103; /*0x961c06*/
  v104 = fabs(v258); /*0x961c13*/
  v273 = v104; /*0x961c1b*/
  v105 = fabs(v259); /*0x961c28*/
  v274 = v105; /*0x961c30*/
  v106 = a4[0xE] * v273 + a4[0xD] * v272 + v105 * a4[0xF]; /*0x961c59*/
  v160 = v106 + a2[0xF]; /*0x961c64*/
  v22 = v160; /*0x961c74*/
  if ( v160 >= (double)v262 ) /*0x961c79*/
  {
    v161 = -v22; /*0x961ca1*/
    if ( v161 > (double)v262 && v265 < (double)v161 ) /*0x961cc3*/
      return 0; /*0x961cdb*/
  }
  else if ( v265 > v22 ) /*0x961c86*/
  {
    return 0; /*0x961c9e*/
  }
  v187 = v11 * a4[5] + v10 * a4[4] + a4[6] * v12; /*0x961cf1*/
  v107 = a2[0xE] * v269 + a2[0xD] * v266 + a2[0xF] * v272; /*0x961d14*/
  v162 = v107 + a4[0xD]; /*0x961d1f*/
  if ( v162 >= (double)v187 ) /*0x961d32*/
  {
    v163 = -v162; /*0x961d7d*/
    if ( v163 > (double)v187 ) /*0x961d8c*/
    {
      v109 = y * a4[5] + x * a4[4] + a4[6] * out.z; /*0x961da3*/
      if ( v163 > (double)v109 ) /*0x961db6*/
        return 0; /*0x961db6*/
    }
  }
  else
  {
    v108 = y * a4[5] + x * a4[4] + a4[6] * out.z; /*0x961d4b*/
    if ( v162 < (double)v108 ) /*0x961d5e*/
      return 0; /*0x961d76*/
  }
  v188 = a4[8] * v11 + v10 * a4[7] + a4[9] * v12; /*0x961dce*/
  v110 = a2[0xE] * v270 + a2[0xD] * v267 + a2[0xF] * v273; /*0x961df1*/
  v164 = v110 + a4[0xE]; /*0x961dfc*/
  if ( v164 < (double)v188 ) /*0x961e0f*/
  {
    v111 = a4[8] * y + x * a4[7] + a4[9] * out.z; /*0x961e27*/
    if ( v164 < (double)v111 ) /*0x961e3a*/
      return 0; /*0x961e56*/
    goto LABEL_33; /*0x961e3a*/
  }
  v165 = -v164; /*0x961e5d*/
  if ( v165 <= (double)v188 ) /*0x961e6c*/
  {
LABEL_33:
    v23 = v265; /*0x961f69*/
    v24 = v262; /*0x961f6d*/
    goto LABEL_30; /*0x961f71*/
  }
  if ( v165 > sub_47D9E0(a4 + 7, v277) ) /*0x961e94*/
    return 0; /*0x961e94*/
  v14 = v275; /*0x961e9e*/
  v10 = v241; /*0x961ebf*/
  v11 = v244; /*0x961ec3*/
  v23 = v265; /*0x961ec5*/
  v12 = v247; /*0x961ec7*/
  x = out.x; /*0x961ec9*/
  v24 = v262; /*0x961ecb*/
  y = out.y; /*0x961ecb*/
LABEL_30:
  v25 = v24; /*0x961ecd*/
  v26 = v11 * v14[1]; /*0x961ed6*/
  v27 = v25; /*0x961ed6*/
  v28 = v23; /*0x961edf*/
  v29 = v10 * *v14 + v26; /*0x961edf*/
  v30 = v28; /*0x961edf*/
  v31 = y; /*0x961ee3*/
  v32 = v12 * v14[2] + v29; /*0x961ee3*/
  v33 = v31; /*0x961ee3*/
  v189 = v32; /*0x961ee5*/
  v112 = a2[0xE] * v271 + a2[0xD] * v268 + a2[0xF] * v274; /*0x961f0b*/
  v166 = v112 + a4[0xF]; /*0x961f16*/
  if ( v166 < (double)v189 ) /*0x961f29*/
  {
    v113 = x * *v14 + v33 * v14[1] + v14[2] * out.z; /*0x961f43*/
    if ( v113 > (double)v166 ) /*0x961f52*/
      return 0; /*0x961f68*/
    goto LABEL_40; /*0x961f52*/
  }
  v167 = -v166; /*0x961f7c*/
  if ( v167 <= (double)v189 ) /*0x961f8b*/
  {
LABEL_40:
    v34 = v257; /*0x96205e*/
    v35 = v258; /*0x962062*/
    goto LABEL_37; /*0x962066*/
  }
  if ( v167 > sub_47D9E0(v275, v277) ) /*0x961fb4*/
    return 0; /*0x961fb4*/
  v30 = v265; /*0x961fca*/
  v34 = v257; /*0x961fcc*/
  v35 = v258; /*0x961fce*/
  v27 = v262; /*0x961fce*/
LABEL_37:
  v190 = v27 * v254 - v34 * v261; /*0x961fd0*/
  v114 = a4[0xE] * v268 + v267 * a4[0xF]; /*0x961ff5*/
  v36 = v114; /*0x961ff9*/
  v115 = a2[0xF] * v269 + a2[0xE] * v272; /*0x962013*/
  v168 = v36 + v115; /*0x96201b*/
  if ( v168 >= (double)v190 ) /*0x96202e*/
  {
    v169 = -v168; /*0x96206d*/
    if ( v169 > (double)v190 && v30 * v254 - v34 * v264 < v169 ) /*0x962095*/
      return 0; /*0x9620ab*/
  }
  else if ( v30 * v254 - v34 * v264 > v168 ) /*0x962047*/
  {
    return 0; /*0x96205d*/
  }
  v191 = v27 * v255 - v35 * v261; /*0x9620bc*/
  v116 = a4[0xD] * v268 + v266 * a4[0xF]; /*0x9620d3*/
  v37 = v116; /*0x9620d7*/
  v117 = a2[0xF] * v270 + a2[0xE] * v273; /*0x9620f1*/
  v170 = v37 + v117; /*0x9620f9*/
  if ( v170 >= (double)v191 ) /*0x96210c*/
  {
    v171 = -v170; /*0x96213e*/
    if ( v171 > (double)v191 && v30 * v255 - v35 * v264 < v171 ) /*0x962166*/
      return 0; /*0x96217c*/
  }
  else if ( v30 * v255 - v35 * v264 > v170 ) /*0x962125*/
  {
    return 0; /*0x96213b*/
  }
  v192 = v27 * v256 - v259 * v261; /*0x96218f*/
  v118 = a2[0xF] * v271 + a2[0xE] * v274; /*0x9621a9*/
  v38 = v118; /*0x9621ad*/
  v119 = a4[0xE] * v266 + a4[0xD] * v267; /*0x9621c1*/
  v172 = v38 + v119; /*0x9621c9*/
  if ( v172 >= (double)v192 ) /*0x9621dc*/
  {
    v173 = -v172; /*0x962210*/
    if ( v173 > (double)v192 && v30 * v256 - v259 * v264 < v173 ) /*0x96223a*/
      return 0; /*0x962250*/
  }
  else if ( v30 * v256 - v259 * v264 > v172 ) /*0x9621f7*/
  {
    return 0; /*0x96220d*/
  }
  v193 = v34 * v260 - v27 * v251; /*0x962261*/
  v120 = a4[0xE] * v271 + v270 * a4[0xF]; /*0x96227b*/
  v39 = v120; /*0x96227f*/
  v121 = a2[0xF] * v266 + a2[0xD] * v272; /*0x962296*/
  v174 = v39 + v121; /*0x96229e*/
  if ( v174 >= (double)v193 ) /*0x9622b1*/
  {
    v175 = -v174; /*0x9622e7*/
    if ( v175 <= (double)v193 ) /*0x9622f8*/
    {
      v41 = v263; /*0x962332*/
    }
    else
    {
      v42 = v34 * v263 - v30 * v251; /*0x96230a*/
      v41 = v263; /*0x96230a*/
      if ( v42 < v175 ) /*0x962313*/
        return 0; /*0x962329*/
    }
  }
  else
  {
    v40 = v34 * v263 - v30 * v251; /*0x9622c5*/
    v41 = v263; /*0x9622c5*/
    if ( v40 > v174 ) /*0x9622ce*/
      return 0; /*0x9622e4*/
  }
  v194 = v35 * v260 - v27 * v252; /*0x962342*/
  v122 = a4[0xD] * v271 + v269 * a4[0xF]; /*0x96235c*/
  v43 = v122; /*0x962360*/
  v123 = a2[0xF] * v267 + a2[0xD] * v273; /*0x962377*/
  v176 = v43 + v123; /*0x96237f*/
  if ( v176 >= (double)v194 ) /*0x962392*/
  {
    v177 = -v176; /*0x9623c0*/
    if ( v177 > (double)v194 && v177 > v35 * v41 - v30 * v252 ) /*0x9623e6*/
      return 0; /*0x9623fa*/
  }
  else if ( v176 < v35 * v41 - v30 * v252 ) /*0x9623a9*/
  {
    return 0; /*0x9623bd*/
  }
  v44 = v259; /*0x9623ff*/
  v45 = v259 * v260 - v27 * v253; /*0x962417*/
  v46 = v260; /*0x962417*/
  v195 = v45; /*0x962419*/
  v124 = a4[0xE] * v269 + a4[0xD] * v270; /*0x962433*/
  v47 = v124; /*0x962437*/
  v125 = a2[0xF] * v268 + a2[0xD] * v274; /*0x962451*/
  v178 = v47 + v125; /*0x962459*/
  if ( v178 >= (double)v195 ) /*0x96246c*/
  {
    v179 = -v178; /*0x96249c*/
    if ( v179 <= (double)v195 ) /*0x9624ad*/
    {
      v49 = v41; /*0x9624dd*/
    }
    else
    {
      v50 = v44 * v41 - v30 * v253; /*0x9624bb*/
      v51 = v179 < v50; /*0x9624bd*/
      v52 = v179 == v50; /*0x9624bd*/
      v49 = v41; /*0x9624c1*/
      if ( !v51 && !v52 ) /*0x9624c3*/
        return 0; /*0x9624d8*/
    }
  }
  else
  {
    v48 = v178 < v44 * v41 - v30 * v253; /*0x96247e*/
    v49 = v41; /*0x962482*/
    if ( v48 ) /*0x962487*/
      return 0; /*0x962499*/
  }
  v53 = v251; /*0x9624e3*/
  v54 = v254; /*0x9624f5*/
  v196 = v261 * v251 - v254 * v46; /*0x9624f7*/
  v126 = a4[0xE] * v274 + v273 * a4[0xF]; /*0x962511*/
  v55 = v126; /*0x962515*/
  v127 = a2[0xE] * v266 + a2[0xD] * v269; /*0x96252c*/
  v180 = v55 + v127; /*0x962534*/
  if ( v180 >= (double)v196 ) /*0x962547*/
  {
    v181 = -v180; /*0x962575*/
    if ( v181 > (double)v196 && v181 > v53 * v264 - v54 * v49 ) /*0x96259d*/
      return 0; /*0x9625af*/
  }
  else if ( v180 < v53 * v264 - v54 * v49 ) /*0x962560*/
  {
    return 0; /*0x962572*/
  }
  v56 = v252; /*0x9625ba*/
  v57 = v255; /*0x9625cc*/
  v197 = v261 * v252 - v255 * v46; /*0x9625ce*/
  v128 = a4[0xD] * v274 + v272 * a4[0xF]; /*0x9625e8*/
  v58 = v128; /*0x9625ec*/
  v129 = a2[0xE] * v267 + a2[0xD] * v270; /*0x962603*/
  v182 = v58 + v129; /*0x96260b*/
  v59 = v197; /*0x96260f*/
  if ( v182 >= (double)v197 ) /*0x96261e*/
  {
    v183 = -v182; /*0x962652*/
    v62 = v183 < v59; /*0x96265a*/
    v63 = v183 == v59; /*0x96265a*/
    v64 = v183; /*0x96265e*/
    if ( v62 || v63 ) /*0x962660*/
    {
      v61 = v264; /*0x962699*/
    }
    else
    {
      v65 = v56 * v264 - v57 * v49; /*0x962673*/
      v66 = v64 < v65; /*0x962675*/
      v67 = v64 == v65; /*0x962675*/
      v61 = v264; /*0x962679*/
      if ( !v66 && !v67 ) /*0x96267b*/
        return 0; /*0x962692*/
    }
  }
  else
  {
    v60 = v182 < v56 * v264 - v57 * v49; /*0x962632*/
    v61 = v264; /*0x962636*/
    if ( v60 ) /*0x96263b*/
      return 0; /*0x96264f*/
  }
  v68 = v256; /*0x9626b1*/
  v69 = v261 * v253 - v46 * v256; /*0x9626b5*/
  v70 = v253; /*0x9626b5*/
  v198 = v69; /*0x9626b7*/
  v130 = a4[0xE] * v272 + a4[0xD] * v273; /*0x9626d1*/
  v71 = v130; /*0x9626d5*/
  v131 = a2[0xE] * v268 + a2[0xD] * v271; /*0x9626ef*/
  v184 = v71 + v131; /*0x9626f7*/
  v72 = v184; /*0x9626ff*/
  if ( v184 >= (double)v198 ) /*0x96270a*/
  {
    v185 = -v72; /*0x962730*/
    if ( v185 > (double)v198 && v185 > v70 * v61 - v49 * v68 ) /*0x962754*/
      return 0; /*0x962754*/
  }
  else if ( v72 < v70 * v61 - v49 * v68 ) /*0x96271f*/
  {
    return 0; /*0x96272d*/
  }
  NiPoint3_CrossProduct(&v276, &out, &other); /*0x962781*/
  v245 = sub_47D9E0(&v276.x, v208); /*0x962797*/
  v248 = sub_47D9E0(&v276.x, a2 + 0xA); /*0x9627a8*/
  v199 = fabs(v248); /*0x9627b7*/
  v186 = fabs(v245); /*0x9627c3*/
  v132 = fabs(sub_47D9E0(v5, &out.x)); /*0x9627ce*/
  v73 = v132; /*0x9627d2*/
  v133 = v248 * v255 - v245 * v258; /*0x9627ee*/
  v134 = fabs(v133); /*0x9627f8*/
  v74 = v134 * a4[0xE]; /*0x962800*/
  v135 = v248 * v254 - v245 * v257; /*0x962811*/
  v136 = fabs(v135); /*0x96281b*/
  v75 = v74 + v136 * a4[0xD]; /*0x962834*/
  v137 = v248 * v256 - v245 * v259; /*0x962838*/
  v138 = fabs(v137); /*0x962842*/
  v139 = v75 + v138 * a4[0xF]; /*0x96284f*/
  v76 = v139; /*0x962853*/
  v140 = a2[0xF] * v186 + a2[0xE] * v199; /*0x962867*/
  v141 = v76 + v140; /*0x96286f*/
  if ( v141 < v73 ) /*0x96287e*/
    return 0; /*0x96287e*/
  v242 = sub_47D9E0(&v276.x, v5); /*0x962891*/
  v142 = fabs(v242); /*0x9628a4*/
  v209 = fabs(sub_47D9E0(v208, &out.x)); /*0x9628af*/
  v77 = v209; /*0x9628b3*/
  v210 = v242 * v258 - v248 * v252; /*0x9628cf*/
  v211 = fabs(v210); /*0x9628d9*/
  v78 = v211 * a4[0xE]; /*0x9628e1*/
  v212 = v242 * v257 - v248 * v251; /*0x9628f2*/
  v213 = fabs(v212); /*0x9628fc*/
  v79 = v78 + v213 * a4[0xD]; /*0x962915*/
  v214 = v242 * v259 - v248 * v253; /*0x962919*/
  v215 = fabs(v214); /*0x962923*/
  v216 = v79 + v215 * a4[0xF]; /*0x962930*/
  v80 = v216; /*0x962934*/
  v217 = v199 * a2[0xD] + a2[0xF] * v142; /*0x962948*/
  v218 = v80 + v217; /*0x962950*/
  if ( v218 < v77 ) /*0x96295f*/
    return 0; /*0x96295f*/
  v219 = fabs(sub_47D9E0(a2 + 0xA, &out.x)); /*0x962973*/
  v81 = v219; /*0x962977*/
  v220 = v245 * v252 - v242 * v255; /*0x962993*/
  v221 = fabs(v220); /*0x96299d*/
  v82 = v221 * a4[0xE]; /*0x9629a5*/
  v222 = v245 * v251 - v242 * v254; /*0x9629b6*/
  v223 = fabs(v222); /*0x9629c0*/
  v83 = v82 + v223 * a4[0xD]; /*0x9629d9*/
  v224 = v245 * v253 - v242 * v256; /*0x9629dd*/
  v225 = fabs(v224); /*0x9629e7*/
  v226 = v83 + v225 * a4[0xF]; /*0x9629f4*/
  v143 = v186 * a2[0xD] + a2[0xE] * v142; /*0x962a0c*/
  v144 = v226 + v143; /*0x962a14*/
  if ( v144 < v81 ) /*0x962a23*/
    return 0; /*0x962a23*/
  v246 = sub_47D9E0(&v276.x, a4 + 7); /*0x962a3a*/
  v249 = sub_47D9E0(&v276.x, v275); /*0x962a52*/
  v228 = fabs(v249); /*0x962a63*/
  v227 = fabs(v246); /*0x962a70*/
  v145 = fabs(sub_47D9E0(a4 + 4, &out.x)); /*0x962a7b*/
  v84 = v145; /*0x962a7f*/
  v146 = v249 * v255 - v246 * v256; /*0x962a9b*/
  v147 = fabs(v146); /*0x962aa5*/
  v85 = v147 * a2[0xE]; /*0x962aad*/
  v148 = v249 * v252 - v246 * v253; /*0x962abe*/
  v149 = fabs(v148); /*0x962ac8*/
  v86 = v85 + v149 * a2[0xD]; /*0x962ae1*/
  v150 = v249 * v258 - v246 * v259; /*0x962ae5*/
  v151 = fabs(v150); /*0x962aef*/
  v152 = v86 + v151 * a2[0xF]; /*0x962afc*/
  v87 = v152; /*0x962b00*/
  v153 = v227 * a4[0xF] + v228 * a4[0xE]; /*0x962b14*/
  v154 = v87 + v153; /*0x962b1c*/
  if ( v154 < v84 ) /*0x962b2b*/
    return 0; /*0x962b2b*/
  v243 = sub_47D9E0(&v276.x, a4 + 4); /*0x962b3e*/
  v155 = fabs(v243); /*0x962b4f*/
  v200 = fabs(sub_47D9E0(a4 + 7, &out.x)); /*0x962b5a*/
  v88 = v200; /*0x962b5e*/
  v201 = v243 * v256 - v249 * v254; /*0x962b7a*/
  v202 = fabs(v201); /*0x962b84*/
  v89 = v202 * a2[0xE]; /*0x962b8c*/
  v203 = v243 * v253 - v249 * v251; /*0x962b9d*/
  v204 = fabs(v203); /*0x962ba7*/
  v90 = v89 + v204 * a2[0xD]; /*0x962bc0*/
  v205 = v243 * v259 - v249 * v257; /*0x962bc4*/
  v206 = fabs(v205); /*0x962bce*/
  v207 = v90 + v206 * a2[0xF]; /*0x962bdb*/
  v229 = v155 * a4[0xF] + v228 * a4[0xD]; /*0x962bf3*/
  v230 = v207 + v229; /*0x962bfb*/
  if ( v230 < v88 ) /*0x962c0a*/
    return 0; /*0x962c0a*/
  v231 = fabs(sub_47D9E0(v275, &out.x)); /*0x962c23*/
  v91 = v231; /*0x962c27*/
  v232 = v246 * v254 - v243 * v255; /*0x962c43*/
  v233 = fabs(v232); /*0x962c4d*/
  v92 = v233 * a2[0xE]; /*0x962c55*/
  v234 = v246 * v251 - v243 * v252; /*0x962c66*/
  v235 = fabs(v234); /*0x962c70*/
  v93 = v92 + v235 * a2[0xD]; /*0x962c89*/
  v236 = v246 * v257 - v243 * v258; /*0x962c8d*/
  v237 = fabs(v236); /*0x962c97*/
  v238 = v93 + v237 * a2[0xF]; /*0x962ca4*/
  v94 = v238; /*0x962ca8*/
  v239 = v155 * a4[0xE] + v227 * a4[0xD]; /*0x962cbc*/
  v240 = v94 + v239; /*0x962cc4*/
  return v240 >= v91; /*0x962cd3*/
}
