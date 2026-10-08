char __cdecl sub_962E30(float a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st4
  NiPoint3 *v12; // edi
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st2
  double v18; // st2
  double v19; // st2
  double v20; // st7
  double v22; // st1
  double v23; // st7
  double v24; // rtt
  double v25; // st5
  double v26; // st5
  double v27; // rt2
  double v28; // st4
  double v29; // st3
  double v30; // st4
  double v31; // st3
  double v32; // st2
  double v33; // st3
  bool v34; // c0
  bool v35; // c3
  double v36; // st7
  double v37; // st4
  double v38; // st3
  bool v39; // c0
  bool v40; // c3
  double v41; // st1
  double v42; // rt0
  double v43; // st1
  double v44; // st3
  double v45; // st7
  double v46; // st4
  bool v47; // c0
  double v48; // st4
  double v49; // st2
  double v50; // st1
  double v51; // st4
  double v52; // st3
  double v53; // st4
  double v54; // st3
  double v55; // st1
  double v56; // st3
  double v57; // st4
  double v58; // rtt
  double v59; // st3
  double v60; // st4
  double v61; // st5
  double v62; // st3
  double v63; // st2
  bool v64; // c0
  double v65; // st5
  double v66; // st5
  double v67; // st4
  char v68; // fps^1
  double v69; // st4
  bool v70; // c0
  char v71; // c2
  bool v72; // c3
  char v73; // ah
  double v74; // st1
  double v75; // st3
  char v76; // fps^1
  double v77; // st5
  bool v78; // c0
  char v79; // c2
  bool v80; // c3
  double v81; // st5
  double v82; // rt2
  double v83; // st3
  double v84; // st5
  double v85; // st4
  double v86; // st3
  double v87; // st2
  double v88; // st3
  double v89; // st3
  double v90; // st2
  double v91; // st7
  double v92; // st2
  bool v93; // c0
  bool v94; // c3
  double v95; // st7
  double v96; // st2
  double v97; // st7
  bool v98; // c0
  double v99; // st1
  double v100; // st2
  double v101; // st3
  double v102; // st2
  double v103; // st4
  double v104; // st3
  double v105; // st2
  double v106; // st2
  double v107; // st6
  double v108; // st1
  bool v109; // c0
  bool v110; // c3
  double v111; // st6
  double v112; // st2
  double v113; // st7
  double v114; // st7
  double v115; // st6
  double v116; // rt1
  double v117; // st6
  double v118; // st7
  double v119; // st6
  double v120; // rt2
  double v121; // st6
  double v122; // st7
  NiPoint3 *v123; // eax
  float v124; // edx
  float v125; // ecx
  double v126; // st7
  double v127; // st7
  double v128; // st6
  double v129; // st6
  double v130; // st5
  double v131; // rt1
  double v132; // st5
  double v133; // st7
  NiPoint3 *v134; // eax
  float v135; // edx
  float v136; // ecx
  double v137; // st7
  double v138; // st6
  double v139; // st6
  double v140; // st4
  double v141; // st5
  double v142; // st3
  double v143; // st2
  bool v144; // c0
  bool v145; // c3
  double v146; // st4
  double v147; // st4
  bool v148; // c0
  bool v149; // c0
  double v150; // rt2
  double v151; // st4
  double v152; // st7
  double v153; // st6
  double v154; // st6
  double v155; // st5
  double v156; // rt0
  double v157; // st5
  double v158; // st6
  NiPoint3 *v159; // eax
  float v160; // edx
  float v161; // ecx
  float v162; // eax
  double v163; // st7
  double v164; // st7
  double v165; // st6
  double v166; // st6
  double v167; // st5
  double v168; // rt2
  double v169; // st5
  double v170; // st7
  NiPoint3 *v171; // eax
  float v172; // ecx
  float v173; // edx
  float v174; // eax
  double v175; // st7
  double v176; // st6
  double v177; // st4
  double v178; // st5
  double v179; // st3
  double v180; // st2
  bool v181; // c0
  bool v182; // c3
  double v183; // st4
  double v184; // st4
  bool v185; // c0
  bool v186; // c0
  double v187; // st7
  double v188; // st6
  double v189; // st5
  double v190; // rt2
  double v191; // st5
  double v192; // st6
  float v193; // [esp+Ch] [ebp-14Ch]
  float v194; // [esp+Ch] [ebp-14Ch]
  float v195; // [esp+Ch] [ebp-14Ch]
  float v196; // [esp+Ch] [ebp-14Ch]
  float v197; // [esp+Ch] [ebp-14Ch]
  float v198; // [esp+Ch] [ebp-14Ch]
  float v199; // [esp+Ch] [ebp-14Ch]
  float v200; // [esp+Ch] [ebp-14Ch]
  float v201; // [esp+Ch] [ebp-14Ch]
  float v202; // [esp+Ch] [ebp-14Ch]
  float v203; // [esp+Ch] [ebp-14Ch]
  float v204; // [esp+Ch] [ebp-14Ch]
  float v205; // [esp+Ch] [ebp-14Ch]
  float v206; // [esp+Ch] [ebp-14Ch]
  float v207; // [esp+Ch] [ebp-14Ch]
  float v208; // [esp+Ch] [ebp-14Ch]
  float v209; // [esp+Ch] [ebp-14Ch]
  float v210; // [esp+Ch] [ebp-14Ch]
  float v211; // [esp+Ch] [ebp-14Ch]
  float v212; // [esp+Ch] [ebp-14Ch]
  float v213; // [esp+Ch] [ebp-14Ch]
  float v214; // [esp+Ch] [ebp-14Ch]
  float v215; // [esp+Ch] [ebp-14Ch]
  float v216; // [esp+Ch] [ebp-14Ch]
  float v217; // [esp+Ch] [ebp-14Ch]
  float v218; // [esp+Ch] [ebp-14Ch]
  float v219; // [esp+Ch] [ebp-14Ch]
  float v220; // [esp+Ch] [ebp-14Ch]
  float v221; // [esp+Ch] [ebp-14Ch]
  float v222; // [esp+Ch] [ebp-14Ch]
  float v223; // [esp+10h] [ebp-148h]
  float v224; // [esp+10h] [ebp-148h]
  float v225; // [esp+10h] [ebp-148h]
  float v226; // [esp+10h] [ebp-148h]
  float v227; // [esp+10h] [ebp-148h]
  float v228; // [esp+10h] [ebp-148h]
  float v229; // [esp+10h] [ebp-148h]
  float v230; // [esp+10h] [ebp-148h]
  float v231; // [esp+10h] [ebp-148h]
  float v232; // [esp+10h] [ebp-148h]
  float v233; // [esp+10h] [ebp-148h]
  float v234; // [esp+10h] [ebp-148h]
  float v235; // [esp+10h] [ebp-148h]
  float v236; // [esp+10h] [ebp-148h]
  float v237; // [esp+10h] [ebp-148h]
  float v238; // [esp+10h] [ebp-148h]
  float v239; // [esp+10h] [ebp-148h]
  float v240; // [esp+14h] [ebp-144h]
  float v241; // [esp+14h] [ebp-144h]
  float v242; // [esp+14h] [ebp-144h]
  float v243; // [esp+14h] [ebp-144h]
  float v244; // [esp+14h] [ebp-144h]
  float v245; // [esp+14h] [ebp-144h]
  float v246; // [esp+14h] [ebp-144h]
  float v247; // [esp+14h] [ebp-144h]
  float v248; // [esp+14h] [ebp-144h]
  float v249; // [esp+14h] [ebp-144h]
  float v250; // [esp+14h] [ebp-144h]
  float v251; // [esp+14h] [ebp-144h]
  float v252; // [esp+14h] [ebp-144h]
  float v253; // [esp+14h] [ebp-144h]
  float v254; // [esp+14h] [ebp-144h]
  float v255; // [esp+14h] [ebp-144h]
  float v256; // [esp+14h] [ebp-144h]
  float v257; // [esp+14h] [ebp-144h]
  float v258; // [esp+14h] [ebp-144h]
  float v259; // [esp+14h] [ebp-144h]
  float v260; // [esp+14h] [ebp-144h]
  float v261; // [esp+14h] [ebp-144h]
  float v262; // [esp+18h] [ebp-140h]
  float v263; // [esp+18h] [ebp-140h]
  float v264; // [esp+18h] [ebp-140h]
  float v265; // [esp+18h] [ebp-140h]
  float v266; // [esp+18h] [ebp-140h]
  float v267; // [esp+18h] [ebp-140h]
  float v268; // [esp+18h] [ebp-140h]
  float v269; // [esp+18h] [ebp-140h]
  float v270; // [esp+1Ch] [ebp-13Ch]
  float v271; // [esp+1Ch] [ebp-13Ch]
  float v272; // [esp+1Ch] [ebp-13Ch]
  float v273; // [esp+1Ch] [ebp-13Ch]
  float v274; // [esp+1Ch] [ebp-13Ch]
  float v275; // [esp+1Ch] [ebp-13Ch]
  float v276; // [esp+1Ch] [ebp-13Ch]
  float v277; // [esp+1Ch] [ebp-13Ch]
  float v278; // [esp+1Ch] [ebp-13Ch]
  float v279; // [esp+1Ch] [ebp-13Ch]
  float v280; // [esp+1Ch] [ebp-13Ch]
  float v281; // [esp+1Ch] [ebp-13Ch]
  float v282; // [esp+1Ch] [ebp-13Ch]
  float v283; // [esp+1Ch] [ebp-13Ch]
  float v284; // [esp+1Ch] [ebp-13Ch]
  float v285; // [esp+1Ch] [ebp-13Ch]
  float v286; // [esp+1Ch] [ebp-13Ch]
  float v287; // [esp+1Ch] [ebp-13Ch]
  float v288; // [esp+20h] [ebp-138h]
  float v289; // [esp+20h] [ebp-138h]
  float v290; // [esp+20h] [ebp-138h]
  float v291; // [esp+20h] [ebp-138h]
  float v292; // [esp+20h] [ebp-138h]
  float v293; // [esp+24h] [ebp-134h]
  float v294; // [esp+24h] [ebp-134h]
  float v295; // [esp+24h] [ebp-134h]
  float v296; // [esp+24h] [ebp-134h]
  float v297; // [esp+24h] [ebp-134h]
  float v298; // [esp+24h] [ebp-134h]
  float v299; // [esp+24h] [ebp-134h]
  float v300; // [esp+24h] [ebp-134h]
  float v301; // [esp+24h] [ebp-134h]
  float v302; // [esp+28h] [ebp-130h]
  float v303; // [esp+28h] [ebp-130h]
  float v304; // [esp+28h] [ebp-130h]
  float v305; // [esp+28h] [ebp-130h]
  float v306; // [esp+28h] [ebp-130h]
  float v307; // [esp+2Ch] [ebp-12Ch]
  float v308; // [esp+2Ch] [ebp-12Ch]
  float v309; // [esp+2Ch] [ebp-12Ch]
  float v310; // [esp+2Ch] [ebp-12Ch]
  float v311; // [esp+2Ch] [ebp-12Ch]
  float v312; // [esp+30h] [ebp-128h]
  double v313; // [esp+30h] [ebp-128h]
  float v314; // [esp+30h] [ebp-128h]
  double v315; // [esp+30h] [ebp-128h]
  double v316; // [esp+30h] [ebp-128h]
  float v317; // [esp+34h] [ebp-124h]
  float v318; // [esp+34h] [ebp-124h]
  float v319; // [esp+38h] [ebp-120h]
  float v320; // [esp+38h] [ebp-120h]
  float v321; // [esp+38h] [ebp-120h]
  float v322; // [esp+44h] [ebp-114h]
  NiPoint3 out; // [esp+48h] [ebp-110h] BYREF
  double v324; // [esp+58h] [ebp-100h]
  float v325; // [esp+60h] [ebp-F8h]
  double y; // [esp+68h] [ebp-F0h]
  float v327; // [esp+70h] [ebp-E8h]
  NiPoint3 v328; // [esp+78h] [ebp-E0h] BYREF
  double v329; // [esp+88h] [ebp-D0h]
  float v330; // [esp+90h] [ebp-C8h]
  double x; // [esp+98h] [ebp-C0h]
  double v332; // [esp+A0h] [ebp-B8h]
  double v333; // [esp+A8h] [ebp-B0h]
  double z; // [esp+B0h] [ebp-A8h]
  double v335; // [esp+B8h] [ebp-A0h]
  double v336; // [esp+C0h] [ebp-98h]
  float v337; // [esp+C8h] [ebp-90h]
  double v338; // [esp+D0h] [ebp-88h]
  double v339; // [esp+D8h] [ebp-80h]
  float v340; // [esp+E4h] [ebp-74h] BYREF
  float v341; // [esp+E8h] [ebp-70h]
  float v342; // [esp+ECh] [ebp-6Ch]
  double v343; // [esp+F0h] [ebp-68h]
  double v344; // [esp+F8h] [ebp-60h]
  double v345; // [esp+100h] [ebp-58h]
  NiPoint3 v346; // [esp+108h] [ebp-50h] BYREF
  float v347; // [esp+11Ch] [ebp-3Ch]
  NiPoint3 v348; // [esp+120h] [ebp-38h] BYREF
  NiPoint3 other; // [esp+134h] [ebp-24h] BYREF
  NiPoint3 v350; // [esp+140h] [ebp-18h] BYREF
  float v351[3]; // [esp+14Ch] [ebp-Ch] BYREF

  v340 = *a7 - *a3; /*0x962e4b*/
  v341 = a7[1] - a3[1]; /*0x962e58*/
  v342 = a7[2] - a3[2]; /*0x962e6b*/
  v7 = *a4; /*0x962e72*/
  v328.x = *a5 - v7; /*0x962e78*/
  v8 = a4[1]; /*0x962e7c*/
  v328.y = a5[1] - v8; /*0x962e84*/
  v9 = a4[2]; /*0x962e88*/
  v328.z = a5[2] - v9; /*0x962ea6*/
  other = v328; /*0x962eb4*/
  *(float *)&v324 = *a6 - v7; /*0x962ec2*/
  v10 = a6[1]; /*0x962eca*/
  v350.x = *(float *)&v324; /*0x962ecd*/
  *((float *)&v324 + 1) = v10 - v8; /*0x962ed6*/
  v11 = a6[2] - v9; /*0x962ee1*/
  v350.y = *((float *)&v324 + 1); /*0x962ee3*/
  v325 = v11; /*0x962eea*/
  v350.z = v325; /*0x962ef6*/
  v338 = v325; /*0x962efd*/
  y = v328.y; /*0x962f08*/
  *(double *)&v348.x = *((float *)&v324 + 1); /*0x962f10*/
  z = v328.z; /*0x962f1e*/
  v312 = v328.y * v325 - v328.z * *((float *)&v324 + 1); /*0x962f2f*/
  v339 = *(float *)&v324; /*0x962f37*/
  x = v328.x; /*0x962f42*/
  v317 = *(float *)&v324 * v328.z - v325 * v328.x; /*0x962f5a*/
  v319 = *((float *)&v324 + 1) * v328.x - v328.y * *(float *)&v324; /*0x962f70*/
  v12 = (NiPoint3 *)(a2 + 0xA); /*0x962f7e*/
  *(float *)&v329 = v7 - a2[1]; /*0x962f81*/
  v351[0] = *(float *)&v329; /*0x962f8f*/
  *((float *)&v329 + 1) = v8 - a2[2]; /*0x962f99*/
  v351[1] = *((float *)&v329 + 1); /*0x962fa7*/
  v330 = v9 - a2[3]; /*0x962fb1*/
  v13 = v317; /*0x962fbf*/
  v351[2] = v330; /*0x962fc3*/
  v14 = a2[4]; /*0x962fca*/
  v15 = v312; /*0x962fcd*/
  v16 = v319; /*0x962fd1*/
  v307 = a2[5] * v317 + v312 * v14 + a2[6] * v319; /*0x962fe7*/
  v302 = a2[8] * v317 + a2[7] * v312 + a2[9] * v319; /*0x962ffd*/
  v322 = a2[0xB] * v317 + a2[0xA] * v312 + a2[0xC] * v319; /*0x963013*/
  v344 = a2[0xE]; /*0x96301a*/
  v324 = v302; /*0x963025*/
  v345 = a2[0xD]; /*0x96302c*/
  v313 = v307; /*0x963037*/
  v336 = a2[0xF]; /*0x96303e*/
  *(double *)&v328.x = v322; /*0x963049*/
  v193 = v307 * v345; /*0x963053*/
  v194 = fabs(v193); /*0x96305d*/
  v17 = v194; /*0x963065*/
  v195 = v344 * v302; /*0x96306b*/
  *(double *)&v346.x = v17; /*0x963075*/
  v196 = fabs(v195); /*0x96307e*/
  v18 = v196 + v17; /*0x963086*/
  v197 = v322 * v336; /*0x963098*/
  v198 = fabs(v197); /*0x9630a2*/
  v223 = v18 + v198; /*0x9630aa*/
  v335 = *((float *)&v329 + 1); /*0x9630b5*/
  v333 = *(float *)&v329; /*0x9630c3*/
  v332 = v330; /*0x9630d1*/
  v199 = *(float *)&v329 * v15 + *((float *)&v329 + 1) * v13 + v330 * v319; /*0x9630e6*/
  v19 = v199; /*0x9630ea*/
  if ( v223 >= (double)v199 ) /*0x963100*/
  {
    *(double *)&out.x = -v223; /*0x96314e*/
    if ( *(double *)&out.x <= v19 ) /*0x963159*/
    {
      v23 = v341; /*0x9631ae*/
      v25 = v345; /*0x9631b0*/
    }
    else
    {
      v22 = v13 * v341; /*0x963168*/
      v23 = v341; /*0x963168*/
      v24 = v199; /*0x963175*/
      v201 = v16 * v342 + v15 * v340 + v22; /*0x96317b*/
      v25 = v345; /*0x963188*/
      if ( v24 + v201 * a1 < *(double *)&out.x ) /*0x963193*/
        return 0; /*0x9631a2*/
    }
    v27 = v25; /*0x9631b4*/
    v26 = v23; /*0x9631b4*/
    v20 = v27; /*0x9631b4*/
  }
  else
  {
    v200 = v16 * v342 + v15 * v340 + v13 * v341; /*0x963120*/
    v20 = v345; /*0x963133*/
    if ( v19 + v200 * a1 > v223 ) /*0x963138*/
      return 0; /*0x963145*/
    v26 = v341; /*0x9631a3*/
  }
  v28 = a2[5]; /*0x9631b6*/
  v29 = a2[6]; /*0x9631b9*/
  v270 = v335 * v28 + v333 * v14 + v332 * v29; /*0x9631db*/
  v240 = y * v28 + x * v14 + z * v29; /*0x9631fb*/
  v202 = *(double *)&v348.x * v28 + v339 * v14 + v338 * v29; /*0x96321e*/
  *(double *)&v346.x = v26; /*0x963224*/
  v343 = v340; /*0x963232*/
  v329 = v342; /*0x963240*/
  v224 = v29 * v342 + v340 * v14 + v28 * v26; /*0x963259*/
  v30 = v270; /*0x96325d*/
  v31 = v240; /*0x963265*/
  v32 = v202; /*0x96326c*/
  if ( v270 > v20 ) /*0x963272*/
  {
    if ( v31 <= 0.0 ) /*0x96327f*/
    {
      if ( v32 > v31 ) /*0x963310*/
        v37 = v30 + v31; /*0x96331a*/
      else
        v37 = v30 + v32; /*0x963314*/
    }
    else
    {
      if ( v32 >= 0.0 ) /*0x963290*/
      {
        v33 = v30 + v224 * a1; /*0x9632a3*/
        v34 = v33 < v20; /*0x9632a5*/
        v35 = v33 == v20; /*0x9632a5*/
        v36 = a1; /*0x9632a9*/
        if ( !v34 && !v35 ) /*0x9632ab*/
          return 0; /*0x9632c1*/
        goto LABEL_35; /*0x9632ae*/
      }
      v37 = v30 + v32; /*0x9632c2*/
    }
    v262 = v37; /*0x9632c4*/
    if ( v262 > v20 ) /*0x9632d3*/
    {
      v38 = v262 + v224 * a1; /*0x9632e8*/
      v39 = v38 < v20; /*0x9632ea*/
      v40 = v38 == v20; /*0x9632ea*/
      v36 = a1; /*0x9632ee*/
      if ( !v39 && !v40 ) /*0x9632f0*/
        return 0; /*0x963306*/
      goto LABEL_35; /*0x9632f3*/
    }
LABEL_34:
    v36 = a1; /*0x9633d6*/
    goto LABEL_35; /*0x9633dd*/
  }
  v41 = -a2[0xD]; /*0x963323*/
  if ( v41 <= v30 ) /*0x96332c*/
    goto LABEL_34; /*0x96332c*/
  v42 = v41; /*0x963332*/
  v43 = v240; /*0x963332*/
  v44 = v42; /*0x963332*/
  if ( v240 > 0.0 ) /*0x96333b*/
  {
    v45 = v44; /*0x9633c2*/
    if ( v32 < v43 ) /*0x9633be*/
      v46 = v30 + v43; /*0x9633cc*/
    else
      v46 = v30 + v32; /*0x9633c4*/
  }
  else
  {
    if ( v32 <= 0.0 ) /*0x963348*/
    {
      v36 = a1; /*0x963361*/
      if ( v30 + v224 * a1 < v44 ) /*0x963366*/
        return 0; /*0x963375*/
      goto LABEL_35; /*0x963366*/
    }
    v45 = v44; /*0x963376*/
    v46 = v30 + v32; /*0x963378*/
  }
  v263 = v46; /*0x96337a*/
  if ( v263 >= v45 ) /*0x963389*/
    goto LABEL_34; /*0x963389*/
  v47 = v263 + v224 * a1 < v45; /*0x96339c*/
  v36 = a1; /*0x9633a0*/
  if ( v47 ) /*0x9633a5*/
    return 0; /*0x9633b4*/
LABEL_35:
  out.x = a2[8] * v335 + a2[7] * v333 + a2[9] * v332; /*0x9633df*/
  v293 = a2[8] * y + a2[7] * x + a2[9] * z; /*0x963422*/
  v271 = a2[8] * *(double *)&v348.x + a2[7] * v339 + a2[9] * v338; /*0x963447*/
  v225 = a2[8] * v26 + a2[7] * v343 + a2[9] * v329; /*0x963467*/
  v48 = out.x; /*0x96346b*/
  v49 = v293; /*0x96347a*/
  v50 = v271; /*0x963481*/
  if ( v344 < out.x ) /*0x963485*/
  {
    if ( v49 <= 0.0 ) /*0x963494*/
    {
      if ( v50 > v49 ) /*0x96350b*/
        v51 = v48 + v49; /*0x963515*/
      else
        v51 = v48 + v50; /*0x96350f*/
    }
    else
    {
      if ( v271 >= 0.0 ) /*0x9634a1*/
      {
        if ( v344 < v48 + v225 * v36 ) /*0x9634b4*/
          return 0; /*0x9634c7*/
        goto LABEL_59; /*0x9634b4*/
      }
      v51 = v48 + v271; /*0x9634c8*/
    }
    v52 = v51; /*0x9634ca*/
    v53 = v344; /*0x9634ca*/
    v264 = v52; /*0x9634cc*/
    if ( v264 <= v344 ) /*0x9634db*/
      goto LABEL_59; /*0x9634db*/
    v54 = v264 + v225 * v36; /*0x9634e7*/
    goto LABEL_43; /*0x9634e7*/
  }
  v55 = -a2[0xE]; /*0x96351e*/
  if ( v55 <= v48 ) /*0x963527*/
    goto LABEL_59; /*0x963527*/
  if ( v49 > 0.0 ) /*0x963532*/
  {
    v56 = v55; /*0x963583*/
    if ( v271 < v49 ) /*0x96358c*/
      v57 = v48 + v49; /*0x963596*/
    else
      v57 = v48 + v271; /*0x963590*/
  }
  else
  {
    if ( v271 <= 0.0 ) /*0x96353f*/
    {
      v54 = v55; /*0x963541*/
      v53 = v48 + v225 * v36; /*0x963549*/
LABEL_43:
      if ( v54 > v53 ) /*0x9634f0*/
        return 0; /*0x963503*/
      goto LABEL_59; /*0x9634f0*/
    }
    v56 = v55; /*0x96354d*/
    v57 = v48 + v271; /*0x96354f*/
  }
  v58 = v56; /*0x963551*/
  v59 = v57; /*0x963551*/
  v60 = v58; /*0x963551*/
  v265 = v59; /*0x963553*/
  if ( v265 < v58 && v265 + v225 * v36 < v60 ) /*0x963573*/
    return 0; /*0x963582*/
LABEL_59:
  v288 = a2[0xB] * v335 + a2[0xA] * v333 + a2[0xC] * v332; /*0x9635a2*/
  v347 = a2[0xB] * y + a2[0xA] * x + a2[0xC] * z; /*0x9635e5*/
  out.x = a2[0xB] * *(double *)&v348.x + a2[0xA] * v339 + a2[0xC] * v338; /*0x96360d*/
  v226 = v26 * a2[0xB] + a2[0xA] * v343 + a2[0xC] * v329; /*0x96362b*/
  v61 = v288; /*0x96362f*/
  v62 = v347; /*0x96363e*/
  v63 = out.x; /*0x963648*/
  if ( v336 >= v288 ) /*0x96364c*/
  {
    v74 = -a2[0xF]; /*0x9636e7*/
    if ( v74 > v61 ) /*0x9636f0*/
    {
      if ( v62 > 0.0 ) /*0x9636fb*/
      {
        if ( out.x < v62 ) /*0x963749*/
        {
          v75 = v74; /*0x963755*/
          v81 = v61 + v347; /*0x963757*/
        }
        else
        {
          v75 = v74; /*0x96374d*/
          v81 = v61 + out.x; /*0x96374f*/
        }
      }
      else
      {
        v75 = v74; /*0x9636fd*/
        if ( v63 <= 0.0 ) /*0x963708*/
        {
          v77 = v61 + v226 * v36; /*0x963712*/
          v78 = v74 < v77; /*0x963714*/
          v79 = 0; /*0x963714*/
          v80 = v74 == v77; /*0x963714*/
          v73 = v76; /*0x963716*/
          v65 = v336; /*0x963718*/
          goto LABEL_68; /*0x96371a*/
        }
        v81 = v61 + v63; /*0x96371c*/
      }
      v82 = v75; /*0x96371e*/
      v83 = v81; /*0x96371e*/
      v84 = v82; /*0x96371e*/
      v267 = v83; /*0x963720*/
      if ( v267 < v82 ) /*0x96372f*/
      {
        v64 = v267 + v226 * v36 < v84; /*0x963739*/
LABEL_63:
        v65 = v336; /*0x963676*/
        if ( v64 ) /*0x96367d*/
          return 0; /*0x963690*/
        goto LABEL_85; /*0x96367d*/
      }
    }
    v65 = v336; /*0x963769*/
    goto LABEL_85; /*0x963769*/
  }
  if ( v62 <= 0.0 ) /*0x96365b*/
  {
    if ( v63 > v62 ) /*0x9636d6*/
      v66 = v61 + v62; /*0x9636e0*/
    else
      v66 = v61 + v63; /*0x9636da*/
  }
  else
  {
    if ( v63 >= 0.0 ) /*0x963668*/
    {
      v64 = v336 < v61 + v226 * v36; /*0x963674*/
      goto LABEL_63; /*0x963674*/
    }
    v66 = v61 + v63; /*0x963691*/
  }
  v67 = v66; /*0x963693*/
  v65 = v336; /*0x963693*/
  v266 = v67; /*0x963695*/
  if ( v266 <= v336 ) /*0x9636a4*/
    goto LABEL_85; /*0x9636a4*/
  v69 = v266 + v226 * v36; /*0x9636b0*/
  v70 = v69 < v336; /*0x9636b2*/
  v71 = 0; /*0x9636b2*/
  v72 = v69 == v336; /*0x9636b2*/
  v73 = v68; /*0x9636b4*/
LABEL_68:
  if ( (v73 & 0x41) == 0 ) /*0x9636b9*/
    return 0; /*0x9636cc*/
LABEL_85:
  v85 = a2[5]; /*0x96376b*/
  v86 = a2[6]; /*0x96376e*/
  v87 = y; /*0x963784*/
  *(float *)&y = z * v85 - y * v86; /*0x963786*/
  *((float *)&y + 1) = v86 * x - z * v14; /*0x9637a2*/
  v327 = v87 * v14 - v85 * x; /*0x9637ae*/
  v268 = v335 * *((float *)&y + 1) + v333 * *(float *)&y + v332 * v327; /*0x9637dd*/
  v289 = *(float *)&y * v343 + *((float *)&y + 1) * *(double *)&v346.x + v327 * v329; /*0x963800*/
  y = v347; /*0x96380b*/
  x = v293; /*0x963813*/
  v294 = v344 * v347; /*0x963823*/
  v295 = fabs(v294); /*0x96382d*/
  v88 = v295; /*0x963835*/
  v296 = x * v65; /*0x963839*/
  v297 = fabs(v296); /*0x963843*/
  v227 = v88 + v297; /*0x96384b*/
  v89 = v268; /*0x96384f*/
  if ( v227 < (double)v268 ) /*0x963864*/
  {
    if ( v307 >= 0.0 ) /*0x963873*/
    {
      v90 = v36 * v289; /*0x963879*/
      v91 = v227; /*0x963879*/
      v92 = v90 + v89; /*0x96387b*/
      goto LABEL_88; /*0x96387b*/
    }
    v96 = v227; /*0x96389c*/
    v298 = v313 + v89; /*0x9638a4*/
    if ( v298 > (double)v227 ) /*0x9638b3*/
    {
      v97 = v36 * v289 + v298; /*0x9638bb*/
      goto LABEL_92; /*0x9638bb*/
    }
LABEL_99:
    v95 = v268; /*0x96392a*/
    goto LABEL_100; /*0x96392c*/
  }
  v99 = -v227; /*0x9638dc*/
  if ( v99 <= v89 ) /*0x9638e5*/
    goto LABEL_99; /*0x9638e5*/
  if ( v307 > 0.0 ) /*0x9638f2*/
  {
    v92 = v99; /*0x9638fe*/
    v299 = v313 + v89; /*0x963906*/
    if ( v299 < v99 ) /*0x963915*/
    {
      v91 = v36 * v289 + v299; /*0x96391d*/
LABEL_88:
      v93 = v92 < v91; /*0x96387d*/
      v94 = v92 == v91; /*0x96387d*/
      v95 = v268; /*0x963881*/
      if ( !v93 && !v94 ) /*0x963883*/
        return 0; /*0x96389b*/
      goto LABEL_100; /*0x963886*/
    }
    goto LABEL_99; /*0x963915*/
  }
  v100 = v36 * v289; /*0x9638f8*/
  v97 = v99; /*0x9638f8*/
  v96 = v100 + v89; /*0x9638fa*/
LABEL_92:
  v98 = v96 < v97; /*0x9638bd*/
  v95 = v268; /*0x9638c1*/
  if ( v98 ) /*0x9638c6*/
    return 0; /*0x9638d7*/
LABEL_100:
  v101 = a2[5]; /*0x96392e*/
  v102 = a2[6]; /*0x963931*/
  v314 = v338 * v101 - *(double *)&v348.x * v102; /*0x963948*/
  v318 = v102 * v339 - v338 * v14; /*0x963964*/
  v320 = v14 * *(double *)&v348.x - v101 * v339; /*0x963977*/
  v300 = v335 * v318 + v333 * v314 + v332 * v320; /*0x9639a6*/
  v269 = v314 * v343 + v318 * *(double *)&v346.x + v320 * v329; /*0x9639c9*/
  v103 = out.x; /*0x9639cd*/
  *(double *)&v348.x = out.x; /*0x9639d1*/
  v104 = v271; /*0x9639d8*/
  v339 = v104; /*0x9639dc*/
  v272 = v344 * out.x; /*0x9639ec*/
  v273 = fabs(v272); /*0x9639f6*/
  v105 = v273; /*0x9639fa*/
  v274 = v104 * v65; /*0x963a02*/
  v275 = fabs(v274); /*0x963a0c*/
  v228 = v105 + v275; /*0x963a14*/
  v106 = v300; /*0x963a18*/
  if ( v228 < (double)v300 ) /*0x963a27*/
  {
    v107 = v228; /*0x963a29*/
    v229 = -v307; /*0x963a31*/
    if ( v229 < 0.0 ) /*0x963a44*/
    {
      v276 = v229 + v106; /*0x963a74*/
      if ( v276 <= v107 ) /*0x963a87*/
      {
        v111 = v300; /*0x963b3b*/
LABEL_115:
        v112 = y; /*0x963b3d*/
        goto LABEL_117; /*0x963b41*/
      }
      v108 = v269 * a1 + v276; /*0x963a94*/
    }
    else
    {
      v108 = v269 * a1 + v106; /*0x963a4f*/
    }
    v109 = v108 < v107; /*0x963a51*/
    v110 = v108 == v107; /*0x963a51*/
    v111 = v300; /*0x963a55*/
    if ( !v109 && !v110 ) /*0x963a57*/
      return 0; /*0x963a71*/
    goto LABEL_115; /*0x963a5a*/
  }
  *(double *)&out.x = -v228; /*0x963aa2*/
  if ( *(double *)&out.x > v106 ) /*0x963aad*/
  {
    v230 = -v307; /*0x963ab9*/
    if ( v230 > 0.0 ) /*0x963acc*/
    {
      v277 = v230 + v106; /*0x963afa*/
      if ( v277 < *(double *)&out.x && v269 * a1 + v277 < *(double *)&out.x ) /*0x963b25*/
        return 0; /*0x963b3a*/
    }
    else if ( v269 * a1 + v106 < *(double *)&out.x ) /*0x963ae2*/
    {
      return 0; /*0x963af7*/
    }
  }
  v112 = v347; /*0x963b43*/
  v111 = v300; /*0x963b43*/
LABEL_117:
  out.x = v104 - x; /*0x963b45*/
  v278 = v103 - v112; /*0x963b54*/
  v301 = v111 - v95; /*0x963b5e*/
  v290 = v269 - v289; /*0x963b6a*/
  v338 = v278; /*0x963b72*/
  z = out.x; /*0x963b7d*/
  v279 = v278 * v344; /*0x963b8f*/
  v280 = fabs(v279); /*0x963b99*/
  v113 = v280; /*0x963ba1*/
  v281 = out.x * v65; /*0x963ba5*/
  v282 = fabs(v281); /*0x963baf*/
  v231 = v113 + v282; /*0x963bb7*/
  v114 = v301; /*0x963bbb*/
  if ( v231 >= (double)v301 ) /*0x963bcc*/
  {
    v119 = -v231; /*0x963c44*/
    if ( v119 > v114 ) /*0x963c4d*/
    {
      v233 = -v307; /*0x963c55*/
      if ( v233 > 0.0 ) /*0x963c68*/
      {
        v120 = v119; /*0x963c88*/
        v121 = v114 + v233; /*0x963c88*/
        v122 = v120; /*0x963c88*/
        v284 = v121; /*0x963c8a*/
        if ( v284 < v120 && v284 + v290 * a1 < v122 ) /*0x963cab*/
          return 0; /*0x963cb4*/
      }
      else if ( v119 > v114 + v290 * a1 ) /*0x963c7c*/
      {
        return 0; /*0x963c85*/
      }
    }
  }
  else
  {
    v115 = v231; /*0x963bce*/
    v232 = -v307; /*0x963bd6*/
    if ( v232 < 0.0 ) /*0x963be9*/
    {
      v116 = v115; /*0x963c0d*/
      v117 = v114 + v232; /*0x963c0d*/
      v118 = v116; /*0x963c0d*/
      v283 = v117; /*0x963c0f*/
      if ( v283 > v116 && v283 + v290 * a1 > v118 ) /*0x963c34*/
        return 0; /*0x963c41*/
    }
    else if ( v115 < v114 + v290 * a1 ) /*0x963bfd*/
    {
      return 0; /*0x963c0a*/
    }
  }
  v123 = NiPoint3_CrossProduct((NiPoint3 *)(a2 + 7), &out, &other); /*0x963ccc*/
  v124 = v123->y; /*0x963cd1*/
  v125 = v123->x; /*0x963cd4*/
  v321 = v123->z; /*0x963ce9*/
  out.x = v333 * v123->x + v335 * v124 + v332 * v321; /*0x963d10*/
  v285 = v124 * *(double *)&v346.x + v125 * v343 + v321 * v329; /*0x963d33*/
  v315 = v240; /*0x963d3b*/
  v241 = v345 * y; /*0x963d4a*/
  v242 = fabs(v241); /*0x963d54*/
  v126 = v242; /*0x963d5c*/
  v243 = v315 * v336; /*0x963d65*/
  v244 = fabs(v243); /*0x963d6f*/
  v234 = v126 + v244; /*0x963d77*/
  v127 = out.x; /*0x963d7b*/
  y = out.x; /*0x963d7f*/
  if ( v234 >= (double)out.x ) /*0x963d94*/
  {
    v129 = v285; /*0x963dfa*/
    v130 = -v234; /*0x963dfc*/
    if ( v130 > v127 ) /*0x963e05*/
    {
      if ( v302 > 0.0 ) /*0x963e12*/
      {
        v131 = v130; /*0x963e34*/
        v132 = v127 + v324; /*0x963e34*/
        v133 = v131; /*0x963e34*/
        v246 = v132; /*0x963e36*/
        if ( v246 < v131 && v129 * a1 + v246 < v133 ) /*0x963e55*/
          return 0; /*0x963e5e*/
      }
      else if ( v130 > v127 + v129 * a1 ) /*0x963e24*/
      {
        return 0; /*0x963e2d*/
      }
    }
  }
  else
  {
    v128 = v285; /*0x963d96*/
    if ( v302 < 0.0 ) /*0x963da3*/
    {
      v245 = v127 + v324; /*0x963dcb*/
      if ( v245 > (double)v234 && v128 * a1 + v245 > v234 ) /*0x963dee*/
        return 0; /*0x963df7*/
    }
    else if ( v234 < v127 + v128 * a1 ) /*0x963db5*/
    {
      return 0; /*0x963dc2*/
    }
  }
  v134 = NiPoint3_CrossProduct((NiPoint3 *)(a2 + 7), &out, &v350); /*0x963e78*/
  v135 = v134->y; /*0x963e7d*/
  v136 = v134->x; /*0x963e80*/
  v325 = v134->z; /*0x963e95*/
  v247 = v333 * v136 + v335 * v135 + v332 * v325; /*0x963ebc*/
  out.x = v135 * *(double *)&v346.x + v136 * v343 + v325 * v329; /*0x963edf*/
  v137 = v202; /*0x963ee3*/
  v324 = v137; /*0x963ee7*/
  v203 = v345 * *(double *)&v348.x; /*0x963ef9*/
  v204 = fabs(v203); /*0x963f03*/
  v138 = v204; /*0x963f07*/
  v205 = v137 * v336; /*0x963f14*/
  v206 = fabs(v205); /*0x963f1e*/
  v235 = v138 + v206; /*0x963f26*/
  v139 = v247; /*0x963f2a*/
  v140 = v235; /*0x963f32*/
  if ( v235 < (double)v247 ) /*0x963f3f*/
  {
    v141 = out.x; /*0x963f41*/
    v308 = -v302; /*0x963f49*/
    if ( v308 >= 0.0 ) /*0x963f5c*/
    {
      v142 = a1; /*0x963f69*/
      v143 = v141 * a1 + v139; /*0x963f6b*/
      goto LABEL_148; /*0x963f6b*/
    }
    v207 = v308 + v139; /*0x963f8e*/
    if ( v207 > v140 ) /*0x963f9d*/
    {
      v143 = v207 + v141 * a1; /*0x963fb0*/
      v142 = a1; /*0x963fb0*/
LABEL_148:
      v144 = v143 < v140; /*0x963f6d*/
      v145 = v143 == v140; /*0x963f6d*/
      v146 = v142; /*0x963f71*/
      if ( !v144 && !v145 ) /*0x963f73*/
        return 0; /*0x963f8b*/
      goto LABEL_160; /*0x963f76*/
    }
LABEL_159:
    v146 = a1; /*0x96404b*/
    goto LABEL_160; /*0x96404d*/
  }
  v141 = out.x; /*0x963fb6*/
  v147 = -v235; /*0x963fb8*/
  if ( v147 <= v139 ) /*0x963fc1*/
    goto LABEL_159; /*0x963fc1*/
  v309 = -v302; /*0x963fcd*/
  if ( v309 > 0.0 ) /*0x963fe0*/
  {
    v208 = v309 + v139; /*0x96400e*/
    if ( v208 >= v147 ) /*0x96401d*/
      goto LABEL_159; /*0x96401d*/
    v149 = v208 + v141 * a1 < v147; /*0x96402e*/
    v146 = a1; /*0x964032*/
    if ( v149 ) /*0x964037*/
      return 0; /*0x964048*/
  }
  else
  {
    v148 = v141 * a1 + v139 < v147; /*0x963ff1*/
    v146 = a1; /*0x963ff5*/
    if ( v148 ) /*0x963ffa*/
      return 0; /*0x96400b*/
  }
LABEL_160:
  v150 = v146; /*0x964050*/
  v151 = v137; /*0x964050*/
  v152 = v150; /*0x964050*/
  v209 = v151 - v315; /*0x964056*/
  v248 = v139 - y; /*0x964060*/
  v291 = v141 - v285; /*0x964068*/
  y = v209; /*0x964070*/
  v210 = v345 * v338; /*0x964082*/
  v211 = fabs(v210); /*0x96408c*/
  v153 = v211; /*0x96409d*/
  v212 = y * v336; /*0x96409f*/
  v213 = fabs(v212); /*0x9640a9*/
  v236 = v153 + v213; /*0x9640b1*/
  v154 = v248; /*0x9640b5*/
  if ( v236 >= (double)v248 ) /*0x9640c6*/
  {
    v155 = -v236; /*0x96413e*/
    if ( v155 > v154 ) /*0x964147*/
    {
      v311 = -v302; /*0x96414f*/
      if ( v311 > 0.0 ) /*0x964162*/
      {
        v156 = v155; /*0x964183*/
        v157 = v154 + v311; /*0x964183*/
        v158 = v156; /*0x964183*/
        v215 = v157; /*0x964185*/
        if ( v215 < v156 && v158 > v152 * v291 + v215 ) /*0x9641a5*/
          return 0; /*0x9641ae*/
      }
      else if ( v154 + v152 * v291 < v155 ) /*0x964177*/
      {
        return 0; /*0x964180*/
      }
    }
  }
  else
  {
    v310 = -v302; /*0x9640d0*/
    if ( v310 < 0.0 ) /*0x9640e3*/
    {
      v214 = v154 + v310; /*0x96410a*/
      if ( v214 > (double)v236 && v236 < v152 * v291 + v214 ) /*0x96412e*/
        return 0; /*0x96413b*/
    }
    else if ( v154 + v152 * v291 > v236 ) /*0x9640f8*/
    {
      return 0; /*0x964105*/
    }
  }
  v159 = NiPoint3_CrossProduct(v12, &v348, &other); /*0x9641cb*/
  v160 = v159->y; /*0x9641d0*/
  v161 = v159->x; /*0x9641d3*/
  v162 = v159->z; /*0x9641d5*/
  v336 = COERCE_DOUBLE(__PAIR64__(LODWORD(v160), LODWORD(v161))); /*0x9641e6*/
  v337 = v162; /*0x9641f4*/
  v286 = v333 * v161 + v335 * v160 + v332 * v162; /*0x964221*/
  v216 = v160 * *(double *)&v346.x + v161 * v343 + v162 * v329; /*0x964244*/
  v249 = x * v345; /*0x964256*/
  v250 = fabs(v249); /*0x964260*/
  v163 = v250; /*0x964264*/
  v251 = v315 * v344; /*0x964273*/
  v252 = fabs(v251); /*0x96427d*/
  v237 = v163 + v252; /*0x964285*/
  v164 = v286; /*0x964289*/
  v316 = v286; /*0x96428d*/
  if ( v237 >= (double)v286 ) /*0x9642a2*/
  {
    v166 = v216; /*0x964308*/
    v167 = -v237; /*0x96430a*/
    if ( v167 > v164 ) /*0x964313*/
    {
      if ( v322 > 0.0 ) /*0x964320*/
      {
        v168 = v167; /*0x964342*/
        v169 = v164 + *(double *)&v328.x; /*0x964342*/
        v170 = v168; /*0x964342*/
        v254 = v169; /*0x964344*/
        if ( v254 < v168 && v166 * a1 + v254 < v170 ) /*0x964363*/
          return 0; /*0x96436c*/
      }
      else if ( v167 > v164 + v166 * a1 ) /*0x964332*/
      {
        return 0; /*0x96433b*/
      }
    }
  }
  else
  {
    v165 = v216; /*0x9642a4*/
    if ( v322 < 0.0 ) /*0x9642b1*/
    {
      v253 = v164 + *(double *)&v328.x; /*0x9642d9*/
      if ( v253 > (double)v237 && v165 * a1 + v253 > v237 ) /*0x9642fc*/
        return 0; /*0x964305*/
    }
    else if ( v237 < v164 + v165 * a1 ) /*0x9642c3*/
    {
      return 0; /*0x9642d0*/
    }
  }
  v171 = NiPoint3_CrossProduct(v12, &v346, &v350); /*0x964389*/
  v172 = v171->x; /*0x96438e*/
  v173 = v171->y; /*0x964390*/
  v174 = v171->z; /*0x964393*/
  *(_QWORD *)&v328.x = __PAIR64__(LODWORD(v173), LODWORD(v172)); /*0x964396*/
  v328.z = v174; /*0x9643ad*/
  v287 = sub_47D9E0(&v328.x, v351); /*0x9643b9*/
  out.x = sub_47D9E0(&v328.x, &v340); /*0x9643ce*/
  v255 = v339 * v345; /*0x9643e0*/
  v256 = fabs(v255); /*0x9643ea*/
  v175 = v256; /*0x9643ee*/
  v257 = v324 * v344; /*0x964401*/
  v258 = fabs(v257); /*0x96440b*/
  v238 = v175 + v258; /*0x964417*/
  v176 = v287; /*0x96441b*/
  v177 = v238; /*0x964423*/
  if ( v238 < (double)v287 ) /*0x964430*/
  {
    v178 = out.x; /*0x964432*/
    v303 = -v322; /*0x96443a*/
    if ( v303 >= 0.0 ) /*0x96444d*/
    {
      v179 = a1; /*0x96445a*/
      v180 = v178 * a1 + v176; /*0x96445c*/
      goto LABEL_191; /*0x96445c*/
    }
    v259 = v303 + v176; /*0x96447f*/
    if ( v259 > v177 ) /*0x96448e*/
    {
      v180 = v259 + v178 * a1; /*0x9644a1*/
      v179 = a1; /*0x9644a1*/
LABEL_191:
      v181 = v180 < v177; /*0x96445e*/
      v182 = v180 == v177; /*0x96445e*/
      v183 = v179; /*0x964462*/
      if ( !v181 && !v182 ) /*0x964464*/
        return 0; /*0x96447c*/
      goto LABEL_203; /*0x964467*/
    }
LABEL_202:
    v183 = a1; /*0x96453c*/
    goto LABEL_203; /*0x96453e*/
  }
  v178 = out.x; /*0x9644a7*/
  v184 = -v238; /*0x9644a9*/
  if ( v184 <= v176 ) /*0x9644b2*/
    goto LABEL_202; /*0x9644b2*/
  v304 = -v322; /*0x9644be*/
  if ( v304 > 0.0 ) /*0x9644d1*/
  {
    v260 = v304 + v176; /*0x9644ff*/
    if ( v260 >= v184 ) /*0x96450e*/
      goto LABEL_202; /*0x96450e*/
    v186 = v260 + v178 * a1 < v184; /*0x96451f*/
    v183 = a1; /*0x964523*/
    if ( v186 ) /*0x964528*/
      return 0; /*0x964539*/
  }
  else
  {
    v185 = v178 * a1 + v176 < v184; /*0x9644e2*/
    v183 = a1; /*0x9644e6*/
    if ( v185 ) /*0x9644eb*/
      return 0; /*0x9644fc*/
  }
LABEL_203:
  v261 = v176 - v316; /*0x964541*/
  v292 = v178 - v216; /*0x96454f*/
  v217 = v345 * z; /*0x964561*/
  v218 = fabs(v217); /*0x96456b*/
  v187 = v218; /*0x964573*/
  v219 = v344 * y; /*0x964579*/
  v220 = fabs(v219); /*0x964583*/
  v239 = v187 + v220; /*0x96458f*/
  v188 = v261; /*0x964593*/
  if ( v239 >= (double)v261 ) /*0x9645a4*/
  {
    v189 = -v239; /*0x96461c*/
    if ( v189 <= v188 ) /*0x964625*/
      return 1; /*0x96469a*/
    v306 = -v322; /*0x96462d*/
    if ( v306 > 0.0 ) /*0x964640*/
    {
      v190 = v189; /*0x964661*/
      v191 = v188 + v306; /*0x964661*/
      v192 = v190; /*0x964661*/
      v222 = v191; /*0x964663*/
      if ( v222 < v190 && v192 > v183 * v292 + v222 ) /*0x964683*/
        return 0; /*0x96468c*/
    }
    else if ( v188 + v183 * v292 < v189 ) /*0x964655*/
    {
      return 0; /*0x96465e*/
    }
  }
  else
  {
    v305 = -v322; /*0x9645ae*/
    if ( v305 < 0.0 ) /*0x9645c1*/
    {
      v221 = v188 + v305; /*0x9645e8*/
      if ( v221 > (double)v239 && v239 < v183 * v292 + v221 ) /*0x96460c*/
        return 0; /*0x964619*/
    }
    else if ( v188 + v183 * v292 > v239 ) /*0x9645d6*/
    {
      return 0; /*0x9645e3*/
    }
  }
  return 1; /*0x963140*/
}
