char __cdecl sub_964AB0(
        float a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9)
{
  float *v9; // edx
  NiPoint3 *v10; // ebx
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st4
  double v15; // st4
  int v16; // edi
  double v17; // st7
  int v18; // ecx
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st3
  double v23; // rtt
  double v24; // st4
  double v25; // st1
  double v26; // st7
  double v28; // st6
  double v29; // st1
  double v30; // st7
  float *v31; // eax
  double v32; // st6
  double v33; // st5
  double v34; // st4
  double v35; // st3
  float *v36; // eax
  double v37; // st2
  double v38; // st1
  double v39; // st5
  double v40; // rt2
  double v41; // st2
  double v42; // st6
  double v43; // rtt
  double v44; // st3
  double v45; // st4
  double v46; // st6
  double v47; // st5
  double v48; // st5
  double v49; // st5
  double v50; // st6
  double v51; // st5
  double v52; // st2
  double v53; // st4
  double v54; // st6
  double v55; // st4
  double v56; // st4
  double v57; // st6
  double v58; // st5
  double v59; // st2
  double v60; // st6
  double v61; // st4
  double v62; // st5
  double v63; // st3
  double v64; // st3
  double v65; // st2
  double v66; // st4
  double v67; // st3
  double v68; // st1
  double v69; // st4
  double v70; // st2
  double v71; // st3
  double v72; // st1
  double v73; // st7
  double v74; // st1
  double v75; // st7
  double v76; // st3
  double v77; // st6
  double v78; // st4
  double v79; // st5
  double v80; // st5
  double v81; // st5
  double v82; // st4
  double v83; // rt1
  double v84; // st4
  double v85; // st6
  double v86; // st4
  double v87; // st6
  double v88; // st5
  double v89; // st2
  double v90; // st6
  double v91; // st4
  double v92; // st5
  double v93; // st3
  double v94; // st3
  double v95; // st2
  double v96; // st4
  double v97; // st3
  double v98; // st1
  double v99; // st4
  double v100; // st2
  double v101; // st3
  double v102; // st1
  double v103; // st7
  double v104; // st1
  double v105; // st7
  double v106; // st3
  double v107; // st6
  double v108; // st4
  double v109; // st5
  double v110; // st5
  double v111; // st5
  double v112; // st4
  double v113; // rt2
  double v114; // st4
  double v115; // st6
  double v116; // st4
  double v117; // st6
  double v118; // st5
  double v119; // st2
  double v120; // st6
  double v121; // st4
  double v122; // st5
  double v123; // st3
  double v124; // st3
  double v125; // st2
  double v126; // st4
  double v127; // st3
  double v128; // st1
  double v129; // st4
  double v130; // st2
  double v131; // st3
  double v132; // st1
  double v133; // st7
  double v134; // st1
  double v135; // st5
  double v136; // st6
  double v137; // st5
  double v138; // st4
  double v139; // st6
  double v140; // st7
  double v141; // st3
  double v142; // st6
  double v143; // st3
  double z; // st7
  double v145; // st5
  double v146; // st4
  double v147; // st4
  double v148; // st2
  double v149; // st2
  double v150; // rtt
  float *v151; // eax
  float *v152; // eax
  float *v153; // eax
  float *v154; // eax
  float *v155; // eax
  float *v156; // ecx
  double v157; // st7
  double v158; // st7
  float *v159; // edx
  double v160; // st6
  double v161; // st5
  float *v162; // eax
  float *v163; // eax
  float *v164; // eax
  float v165; // edx
  double v166; // st7
  float *v167; // eax
  float *v168; // eax
  float *v169; // ecx
  double v170; // st7
  float *v171; // eax
  NiPoint3 *v172; // eax
  float v173; // ecx
  float v174; // edx
  float v175; // eax
  double v176; // st5
  double v177; // st7
  double v178; // st6
  double v179; // st7
  double v180; // st7
  double v181; // st5
  float *v182; // edx
  double v183; // st7
  float *v184; // eax
  NiPoint3 *v185; // eax
  float v186; // ecx
  float v187; // edx
  double v188; // st5
  double v189; // st7
  NiPoint3 *v190; // eax
  double v191; // st7
  float *v192; // eax
  NiPoint3 *v193; // eax
  float v194; // ecx
  float v195; // edx
  float v196; // eax
  double v197; // st5
  double v198; // st7
  double v199; // st7
  float *v200; // eax
  NiPoint3 *v201; // eax
  float v202; // ecx
  float v203; // edx
  double v204; // st5
  double v205; // st7
  double v206; // st6
  double v207; // st7
  double v208; // st7
  double v209; // st5
  float *v210; // edx
  double v211; // st7
  float *v212; // eax
  NiPoint3 *v213; // eax
  float v214; // ecx
  float v215; // edx
  float v216; // eax
  double v217; // st5
  double v218; // st7
  NiPoint3 *v219; // eax
  double v220; // st7
  float *v221; // eax
  NiPoint3 *v222; // eax
  float v223; // ecx
  float v224; // edx
  float v225; // eax
  double v226; // st5
  double v227; // st7
  double v228; // st7
  float *v229; // eax
  NiPoint3 *v230; // eax
  float v231; // ecx
  float v232; // edx
  double v233; // st5
  double v234; // st7
  double v235; // st6
  double v236; // st7
  double v237; // st7
  double v238; // st5
  float *v239; // edx
  double v240; // st7
  float *v241; // eax
  NiPoint3 *v242; // eax
  float v243; // ecx
  float v244; // edx
  float v245; // eax
  double v246; // st5
  double v247; // st7
  NiPoint3 *v248; // eax
  double v249; // st7
  float *v250; // eax
  NiPoint3 *v251; // eax
  float v252; // ecx
  float v253; // edx
  float v254; // eax
  double v255; // st5
  double v256; // st7
  float *v257; // [esp+Ch] [ebp-23Ch]
  int v258; // [esp+1Ch] [ebp-22Ch]
  int v259; // [esp+1Ch] [ebp-22Ch]
  float v260; // [esp+1Ch] [ebp-22Ch]
  float v261; // [esp+1Ch] [ebp-22Ch]
  float v262; // [esp+1Ch] [ebp-22Ch]
  float v263; // [esp+1Ch] [ebp-22Ch]
  float v264; // [esp+1Ch] [ebp-22Ch]
  float v265; // [esp+1Ch] [ebp-22Ch]
  int v266; // [esp+1Ch] [ebp-22Ch]
  float v267; // [esp+1Ch] [ebp-22Ch]
  float v268; // [esp+1Ch] [ebp-22Ch]
  float v269; // [esp+1Ch] [ebp-22Ch]
  float v270; // [esp+1Ch] [ebp-22Ch]
  int v271; // [esp+1Ch] [ebp-22Ch]
  int v272; // [esp+1Ch] [ebp-22Ch]
  float v273; // [esp+1Ch] [ebp-22Ch]
  float v274; // [esp+1Ch] [ebp-22Ch]
  int v275; // [esp+1Ch] [ebp-22Ch]
  float v276; // [esp+1Ch] [ebp-22Ch]
  float v277; // [esp+1Ch] [ebp-22Ch]
  int v278; // [esp+1Ch] [ebp-22Ch]
  int v279; // [esp+1Ch] [ebp-22Ch]
  float v280; // [esp+1Ch] [ebp-22Ch]
  float v281; // [esp+1Ch] [ebp-22Ch]
  int v282; // [esp+1Ch] [ebp-22Ch]
  float v283; // [esp+1Ch] [ebp-22Ch]
  float v284; // [esp+1Ch] [ebp-22Ch]
  int v285; // [esp+1Ch] [ebp-22Ch]
  float v286; // [esp+1Ch] [ebp-22Ch]
  float v287; // [esp+1Ch] [ebp-22Ch]
  float v288; // [esp+1Ch] [ebp-22Ch]
  float v289; // [esp+1Ch] [ebp-22Ch]
  int v290; // [esp+1Ch] [ebp-22Ch]
  int v291; // [esp+1Ch] [ebp-22Ch]
  float v292; // [esp+1Ch] [ebp-22Ch]
  float v293; // [esp+1Ch] [ebp-22Ch]
  int v294; // [esp+1Ch] [ebp-22Ch]
  float v295; // [esp+1Ch] [ebp-22Ch]
  float v296; // [esp+1Ch] [ebp-22Ch]
  int v297; // [esp+1Ch] [ebp-22Ch]
  int v298; // [esp+1Ch] [ebp-22Ch]
  float v299; // [esp+1Ch] [ebp-22Ch]
  float v300; // [esp+1Ch] [ebp-22Ch]
  int v301; // [esp+1Ch] [ebp-22Ch]
  float v302; // [esp+1Ch] [ebp-22Ch]
  float v303; // [esp+1Ch] [ebp-22Ch]
  int v304; // [esp+1Ch] [ebp-22Ch]
  float v305; // [esp+1Ch] [ebp-22Ch]
  float v306; // [esp+1Ch] [ebp-22Ch]
  float v307; // [esp+1Ch] [ebp-22Ch]
  float v308; // [esp+1Ch] [ebp-22Ch]
  int v309; // [esp+1Ch] [ebp-22Ch]
  int v310; // [esp+1Ch] [ebp-22Ch]
  float v311; // [esp+1Ch] [ebp-22Ch]
  float v312; // [esp+1Ch] [ebp-22Ch]
  int v313; // [esp+1Ch] [ebp-22Ch]
  float v314; // [esp+1Ch] [ebp-22Ch]
  float v315; // [esp+1Ch] [ebp-22Ch]
  int v316; // [esp+1Ch] [ebp-22Ch]
  int v317; // [esp+1Ch] [ebp-22Ch]
  float v318; // [esp+1Ch] [ebp-22Ch]
  float v319; // [esp+1Ch] [ebp-22Ch]
  int v320; // [esp+1Ch] [ebp-22Ch]
  float v321; // [esp+1Ch] [ebp-22Ch]
  float v322; // [esp+1Ch] [ebp-22Ch]
  int v323; // [esp+20h] [ebp-228h]
  int v324; // [esp+20h] [ebp-228h]
  float *v325; // [esp+24h] [ebp-224h]
  float v326; // [esp+24h] [ebp-224h]
  float v327; // [esp+24h] [ebp-224h]
  float v328; // [esp+24h] [ebp-224h]
  float v329; // [esp+24h] [ebp-224h]
  float v330; // [esp+24h] [ebp-224h]
  float v331; // [esp+24h] [ebp-224h]
  float v332; // [esp+24h] [ebp-224h]
  float v333; // [esp+24h] [ebp-224h]
  float v334; // [esp+24h] [ebp-224h]
  char *v335; // [esp+28h] [ebp-220h]
  float v336; // [esp+28h] [ebp-220h]
  float v337; // [esp+28h] [ebp-220h]
  float v338; // [esp+28h] [ebp-220h]
  float v339; // [esp+28h] [ebp-220h]
  float v340; // [esp+28h] [ebp-220h]
  float v341; // [esp+28h] [ebp-220h]
  float v342; // [esp+28h] [ebp-220h]
  float v343; // [esp+28h] [ebp-220h]
  float v344; // [esp+28h] [ebp-220h]
  float v345; // [esp+28h] [ebp-220h]
  float v346; // [esp+28h] [ebp-220h]
  float v347; // [esp+28h] [ebp-220h]
  float v348; // [esp+28h] [ebp-220h]
  float v349; // [esp+28h] [ebp-220h]
  float v350; // [esp+28h] [ebp-220h]
  float v351; // [esp+28h] [ebp-220h]
  float v352; // [esp+28h] [ebp-220h]
  float v353; // [esp+28h] [ebp-220h]
  float v354; // [esp+28h] [ebp-220h]
  float v355; // [esp+28h] [ebp-220h]
  float v356; // [esp+28h] [ebp-220h]
  float v357; // [esp+28h] [ebp-220h]
  float v358; // [esp+28h] [ebp-220h]
  float v359; // [esp+28h] [ebp-220h]
  float v360; // [esp+28h] [ebp-220h]
  float v361; // [esp+28h] [ebp-220h]
  float v362; // [esp+28h] [ebp-220h]
  float v363; // [esp+28h] [ebp-220h]
  float v364; // [esp+28h] [ebp-220h]
  float v365; // [esp+28h] [ebp-220h]
  double v366; // [esp+28h] [ebp-220h]
  double v367; // [esp+28h] [ebp-220h]
  int v368; // [esp+30h] [ebp-218h]
  int v369; // [esp+34h] [ebp-214h]
  float v370; // [esp+34h] [ebp-214h]
  int v371; // [esp+34h] [ebp-214h]
  float v372; // [esp+34h] [ebp-214h]
  float v373; // [esp+34h] [ebp-214h]
  float v374; // [esp+34h] [ebp-214h]
  float v375; // [esp+34h] [ebp-214h]
  float v376; // [esp+34h] [ebp-214h]
  float v377; // [esp+34h] [ebp-214h]
  float v378; // [esp+34h] [ebp-214h]
  float v379; // [esp+34h] [ebp-214h]
  float v380; // [esp+34h] [ebp-214h]
  int v381; // [esp+34h] [ebp-214h]
  int v382; // [esp+34h] [ebp-214h]
  int v383; // [esp+34h] [ebp-214h]
  int v384; // [esp+34h] [ebp-214h]
  int v385; // [esp+34h] [ebp-214h]
  double v386; // [esp+38h] [ebp-210h] BYREF
  float v387; // [esp+40h] [ebp-208h]
  NiPoint3 v388; // [esp+4Ch] [ebp-1FCh] BYREF
  double v389; // [esp+58h] [ebp-1F0h]
  double v390; // [esp+60h] [ebp-1E8h]
  NiPoint3 v391; // [esp+6Ch] [ebp-1DCh] BYREF
  float *v392; // [esp+78h] [ebp-1D0h]
  float v393; // [esp+7Ch] [ebp-1CCh]
  float v394; // [esp+80h] [ebp-1C8h] BYREF
  int v395; // [esp+84h] [ebp-1C4h]
  float v396; // [esp+88h] [ebp-1C0h]
  float v397; // [esp+8Ch] [ebp-1BCh]
  int v398; // [esp+90h] [ebp-1B8h]
  float v399; // [esp+94h] [ebp-1B4h]
  float v400; // [esp+98h] [ebp-1B0h]
  int v401; // [esp+9Ch] [ebp-1ACh]
  double v402; // [esp+A0h] [ebp-1A8h] BYREF
  int v403; // [esp+A8h] [ebp-1A0h]
  NiPoint3 v404; // [esp+B0h] [ebp-198h] BYREF
  NiPoint3 other; // [esp+C4h] [ebp-184h] BYREF
  NiPoint3 v406; // [esp+D0h] [ebp-178h] BYREF
  NiPoint3 v407; // [esp+DCh] [ebp-16Ch] BYREF
  int x_low; // [esp+E8h] [ebp-160h] BYREF
  int y_low; // [esp+ECh] [ebp-15Ch]
  int z_low; // [esp+F0h] [ebp-158h]
  NiPoint3 v411; // [esp+F4h] [ebp-154h] BYREF
  double x; // [esp+100h] [ebp-148h]
  int v413; // [esp+10Ch] [ebp-13Ch] BYREF
  float v414; // [esp+110h] [ebp-138h]
  float v415; // [esp+114h] [ebp-134h]
  NiPoint3 v416; // [esp+118h] [ebp-130h] BYREF
  double y; // [esp+128h] [ebp-120h]
  double v418; // [esp+130h] [ebp-118h]
  NiPoint3 v419; // [esp+138h] [ebp-110h] BYREF
  double v420; // [esp+148h] [ebp-100h] BYREF
  int v421; // [esp+150h] [ebp-F8h]
  int v422[3]; // [esp+158h] [ebp-F0h] BYREF
  NiPoint3 v423; // [esp+164h] [ebp-E4h] BYREF
  NiPoint3 out; // [esp+170h] [ebp-D8h] BYREF
  NiPoint3 v425; // [esp+180h] [ebp-C8h] BYREF
  float v426; // [esp+18Ch] [ebp-BCh]
  int v427; // [esp+190h] [ebp-B8h]
  int v428; // [esp+194h] [ebp-B4h]
  double v429; // [esp+198h] [ebp-B0h] BYREF
  int v430; // [esp+1A0h] [ebp-A8h]
  NiPoint3 v431; // [esp+1A8h] [ebp-A0h] BYREF
  NiPoint3 v432; // [esp+1B8h] [ebp-90h] BYREF
  double v433[2]; // [esp+1C8h] [ebp-80h] BYREF
  double v434[2]; // [esp+1D8h] [ebp-70h] BYREF
  double v435[2]; // [esp+1E8h] [ebp-60h] BYREF
  double v436[2]; // [esp+1F8h] [ebp-50h] BYREF
  double v437[2]; // [esp+208h] [ebp-40h] BYREF
  double v438[2]; // [esp+218h] [ebp-30h] BYREF
  double v439[2]; // [esp+228h] [ebp-20h] BYREF
  double v440[2]; // [esp+238h] [ebp-10h] BYREF

  v9 = a2 + 0xD; /*0x964acb*/
  v10 = (NiPoint3 *)(a2 + 4); /*0x964acf*/
  *(float *)&v413 = *a7 - *a3; /*0x964ad2*/
  v325 = a2 + 0xD; /*0x964ad9*/
  v414 = a7[1] - a3[1]; /*0x964ae3*/
  v415 = a7[2] - a3[2]; /*0x964af6*/
  v11 = *a4; /*0x964afd*/
  *(float *)&x_low = *a5 - v11; /*0x964b03*/
  v12 = a4[1]; /*0x964b0a*/
  *(float *)&y_low = a5[1] - v12; /*0x964b12*/
  v13 = a4[2]; /*0x964b19*/
  v14 = a5[2]; /*0x964b23*/
  LODWORD(other.x) = x_low; /*0x964b26*/
  LODWORD(other.y) = y_low; /*0x964b36*/
  *(float *)&z_low = v14 - v13; /*0x964b3d*/
  LODWORD(other.z) = z_low; /*0x964b4b*/
  v388.x = *a6 - v11; /*0x964b59*/
  v388.y = a6[1] - v12; /*0x964b62*/
  v388.z = a6[2] - v13; /*0x964b81*/
  v406 = v388; /*0x964b8d*/
  *(double *)&v431.x = v388.z; /*0x964b94*/
  v435[0] = *(float *)&y_low; /*0x964ba2*/
  y = v388.y; /*0x964bad*/
  v434[0] = *(float *)&z_low; /*0x964bbb*/
  v426 = *(float *)&y_low * v388.z - *(float *)&z_low * v388.y; /*0x964bcc*/
  x = v388.x; /*0x964bd7*/
  v418 = *(float *)&x_low; /*0x964be5*/
  *(float *)&v427 = v388.x * *(float *)&z_low - v388.z * *(float *)&x_low; /*0x964bfd*/
  *(float *)v422 = v426; /*0x964c23*/
  v422[1] = v427; /*0x964c31*/
  *(float *)&v428 = v388.y * *(float *)&x_low - *(float *)&y_low * v388.x; /*0x964c38*/
  v15 = a2[1]; /*0x964c46*/
  v392 = a2 + 1; /*0x964c48*/
  v422[2] = v428; /*0x964c4e*/
  v16 = 0; /*0x964c57*/
  v368 = 0; /*0x964c59*/
  v388.x = v11 - v15; /*0x964c5d*/
  v388.y = v12 - a2[2]; /*0x964c64*/
  v411.y = v388.y; /*0x964c6c*/
  v17 = v13 - a2[3]; /*0x964c73*/
  v411.x = v388.x; /*0x964c7a*/
  v18 = 0; /*0x964c81*/
  v388.z = v17; /*0x964c83*/
  v411.z = v388.z; /*0x964c8d*/
  *a8 = 0.0; /*0x964c94*/
  v19 = *(float *)&v427; /*0x964c96*/
  v20 = v426; /*0x964c9d*/
  v21 = *(float *)&v428; /*0x964ca4*/
  v391.x = a2[4] * v426 + a2[5] * *(float *)&v427 + a2[6] * *(float *)&v428; /*0x964cbd*/
  v391.y = a2[8] * *(float *)&v427 + a2[7] * v426 + a2[9] * *(float *)&v428; /*0x964cd4*/
  v391.z = a2[0xB] * *(float *)&v427 + a2[0xA] * v426 + a2[0xC] * *(float *)&v428; /*0x964ceb*/
  v440[0] = v391.y; /*0x964cf3*/
  *(double *)&v416.x = v391.x; /*0x964cfe*/
  *(double *)&out.x = v391.z; /*0x964d09*/
  *(float *)&v389 = fabs(v391.y); /*0x964d14*/
  v22 = *(float *)&v389 * a2[0xE]; /*0x964d1f*/
  *(float *)&v389 = fabs(v391.x); /*0x964d23*/
  v23 = v22 + *(float *)&v389 * a2[0xD]; /*0x964d2f*/
  *(float *)&v389 = fabs(v391.z); /*0x964d33*/
  *(float *)&v258 = v23 + *(float *)&v389 * a2[0xF]; /*0x964d40*/
  v438[0] = v388.y; /*0x964d48*/
  v436[0] = v388.x; /*0x964d53*/
  v439[0] = v388.z; /*0x964d5e*/
  *(float *)&v389 = v388.x * v426 + v388.y * *(float *)&v427 + v388.z * *(float *)&v428; /*0x964d73*/
  v24 = *(float *)&v389; /*0x964d77*/
  if ( *(float *)&v258 >= (double)*(float *)&v389 ) /*0x964d96*/
  {
    v433[0] = -*(float *)&v258; /*0x964e13*/
    if ( v433[0] <= v24 ) /*0x964e21*/
    {
      v28 = v414; /*0x964e8e*/
      v26 = v415; /*0x964e92*/
    }
    else
    {
      v29 = v19 * v414; /*0x964e30*/
      v26 = v415; /*0x964e30*/
      *(float *)&v371 = v21 * v415 + v20 * *(float *)&v413 + v29; /*0x964e3e*/
      if ( a1 * *(float *)&v371 + v24 < v433[0] ) /*0x964e59*/
        return 0; /*0x964e59*/
      v28 = v414; /*0x964e65*/
      v372 = -((v24 + *(float *)&v258) / *(float *)&v371); /*0x964e69*/
      if ( v372 > 0.0 ) /*0x964e7c*/
      {
        *a8 = v372; /*0x964e7e*/
        v18 = 1; /*0x964e80*/
        v16 = 0xFFFFFFFF; /*0x964e85*/
      }
    }
  }
  else
  {
    v25 = v19 * v414; /*0x964da7*/
    v26 = v415; /*0x964da7*/
    *(float *)&v369 = v21 * v415 + v20 * *(float *)&v413 + v25; /*0x964db5*/
    if ( a1 * *(float *)&v369 + v24 > *(float *)&v258 ) /*0x964dcb*/
      return 0; /*0x964ddf*/
    v28 = v414; /*0x964de6*/
    v370 = (*(float *)&v258 - v24) / *(float *)&v369; /*0x964de8*/
    if ( v370 > 0.0 ) /*0x964dfb*/
    {
      v18 = 1; /*0x964e01*/
      *a8 = v370; /*0x964e06*/
      v16 = 1; /*0x964e08*/
    }
  }
  *(double *)&v432.x = v28; /*0x964e9c*/
  LODWORD(v390) = &v394; /*0x964eaa*/
  v437[0] = *(float *)&v413; /*0x964eb1*/
  LODWORD(v389) = a2 + 6; /*0x964eb8*/
  v433[0] = v26; /*0x964ec0*/
  v30 = a1; /*0x964ec7*/
  v335 = (char *)((char *)&v388 - (char *)v9); /*0x964ecc*/
  v31 = a2 + 6; /*0x964ed0*/
  v323 = 2; /*0x964ed4*/
  while ( 1 ) /*0x964ee2*/
  {
    v32 = v31[0xFFFFFFFF]; /*0x964ee2*/
    v33 = v31[0xFFFFFFFE]; /*0x964ee5*/
    v34 = *v31; /*0x964ee8*/
    v373 = v436[0] * v33 + v438[0] * v32 + v439[0] * v34; /*0x964f0d*/
    v35 = v373; /*0x964f11*/
    *(float *)((char *)v9 + (_DWORD)v335) = v373; /*0x964f15*/
    v36 = (float *)LODWORD(v390); /*0x964f18*/
    v374 = v418 * v33 + v435[0] * v32 + v434[0] * v34; /*0x964f3b*/
    v37 = v374; /*0x964f3f*/
    *(float *)(LODWORD(v390) - 4) = v374; /*0x964f43*/
    v375 = x * v33 + y * v32 + *(double *)&v431.x * v34; /*0x964f65*/
    *v36 = v375; /*0x964f6d*/
    v38 = v33 * v437[0]; /*0x964f81*/
    v39 = v375; /*0x964f81*/
    v40 = v37; /*0x964f8e*/
    v41 = v32 * *(double *)&v432.x + v38; /*0x964f8e*/
    v42 = v40; /*0x964f8e*/
    v43 = v35; /*0x964f92*/
    v44 = v34 * v433[0] + v41; /*0x964f92*/
    v45 = v43; /*0x964f92*/
    *(float *)&v259 = v44; /*0x964f94*/
    if ( *v9 >= v43 ) /*0x964fa1*/
    {
      v52 = -*v9; /*0x9650ea*/
      if ( v52 <= v45 ) /*0x9650f3*/
        goto LABEL_49; /*0x9650f3*/
      if ( v42 <= 0.0 ) /*0x965102*/
      {
        if ( v39 <= 0.0 ) /*0x965113*/
        {
          if ( v30 * *(float *)&v259 + v45 < v52 ) /*0x96512a*/
            return 0; /*0x96512a*/
          v263 = -((*v9 + v45) / *(float *)&v259); /*0x965136*/
          if ( *a8 < (double)v263 ) /*0x965147*/
          {
            v18 = v323; /*0x96514d*/
            *a8 = v263; /*0x965151*/
            v368 = 0; /*0x965153*/
            v16 = 0xFFFFFFFF; /*0x96515b*/
          }
          goto LABEL_49; /*0x96515e*/
        }
        v378 = v45 + v39; /*0x965167*/
        v53 = v378; /*0x96516b*/
        if ( v378 >= v52 ) /*0x965176*/
          goto LABEL_49; /*0x965176*/
        if ( v30 * *(float *)&v259 + v53 < v52 ) /*0x96518f*/
          return 0; /*0x96540b*/
        v54 = (*v9 + v53) / *(float *)&v259; /*0x965197*/
LABEL_43:
        v264 = -v54; /*0x9651e0*/
        if ( *a8 < (double)v264 ) /*0x9651f3*/
        {
          v18 = v323; /*0x9651f9*/
          *a8 = v264; /*0x9651fd*/
          v368 = 2; /*0x9651ff*/
          v16 = 0xFFFFFFFF; /*0x965207*/
        }
        goto LABEL_49; /*0x96520a*/
      }
      if ( v375 >= v42 ) /*0x9651a6*/
      {
        v379 = v45 + v375; /*0x9651ae*/
        v55 = v379; /*0x9651b2*/
        if ( v379 >= v52 ) /*0x9651bd*/
          goto LABEL_49; /*0x9651bd*/
        if ( v30 * *(float *)&v259 + v55 < v52 ) /*0x9651d6*/
          return 0; /*0x9651d6*/
        v54 = (*v9 + v55) / *(float *)&v259; /*0x9651de*/
        goto LABEL_43; /*0x9651de*/
      }
      v380 = v45 + v42; /*0x965212*/
      v56 = v380; /*0x965216*/
      if ( v380 < v52 ) /*0x965221*/
      {
        if ( v30 * *(float *)&v259 + v56 < v52 ) /*0x965236*/
          return 0; /*0x965236*/
        v265 = -((*v9 + v56) / *(float *)&v259); /*0x965242*/
        if ( *a8 < (double)v265 ) /*0x965253*/
        {
          v18 = v323; /*0x965255*/
          *a8 = v265; /*0x965259*/
          v368 = 1; /*0x96525b*/
          v16 = 0xFFFFFFFF; /*0x965263*/
        }
      }
    }
    else
    {
      if ( v42 > 0.0 ) /*0x964fb0*/
      {
        v46 = *v9; /*0x964fb4*/
        if ( v39 >= 0.0 ) /*0x964fbd*/
        {
          if ( v30 * *(float *)&v259 + v45 > v46 ) /*0x964fd2*/
            return 0; /*0x964fd2*/
          v260 = (v46 - v45) / *(float *)&v259; /*0x964fde*/
          if ( *a8 < (double)v260 ) /*0x964fef*/
          {
            v18 = v323; /*0x964ff5*/
            *a8 = v260; /*0x964ff9*/
            v368 = 0; /*0x964ffb*/
            v16 = 1; /*0x965003*/
          }
          goto LABEL_49; /*0x965008*/
        }
        v47 = v39 + v45; /*0x96500d*/
        goto LABEL_22; /*0x96500f*/
      }
      if ( v39 <= v42 ) /*0x96501c*/
      {
        v47 = v39 + v45; /*0x965022*/
        v46 = *v9; /*0x965022*/
LABEL_22:
        v376 = v47; /*0x965024*/
        v48 = v376; /*0x965028*/
        if ( v376 > v46 ) /*0x965033*/
        {
          if ( v30 * *(float *)&v259 + v48 > v46 ) /*0x96504a*/
            return 0; /*0x96504a*/
          v261 = (v46 - v48) / *(float *)&v259; /*0x965056*/
          if ( *a8 < (double)v261 ) /*0x965067*/
          {
            v18 = v323; /*0x96506d*/
            *a8 = v261; /*0x965071*/
            v368 = 2; /*0x965073*/
            v16 = 1; /*0x96507b*/
          }
        }
        goto LABEL_49; /*0x965080*/
      }
      v49 = v42 + v45; /*0x965089*/
      v50 = *v9; /*0x965089*/
      v377 = v49; /*0x96508b*/
      v51 = v377; /*0x96508f*/
      if ( v377 > v50 ) /*0x96509a*/
      {
        if ( v30 * *(float *)&v259 + v51 > v50 ) /*0x9650b1*/
          return 0; /*0x9650b1*/
        v262 = (v50 - v51) / *(float *)&v259; /*0x9650bd*/
        if ( *a8 < (double)v262 ) /*0x9650ce*/
        {
          v18 = v323; /*0x9650d4*/
          *a8 = v262; /*0x9650d8*/
          v16 = 1; /*0x9650da*/
          v368 = 1; /*0x9650df*/
        }
      }
    }
LABEL_49:
    LODWORD(v390) += 0xC; /*0x965282*/
    ++v323; /*0x965295*/
    v31 = (float *)(LODWORD(v389) + 0xC); /*0x965299*/
    LODWORD(v389) += 0xC; /*0x9652a2*/
    if ( v323 - 2 >= 3 ) /*0x9652a6*/
      break; /*0x9652a6*/
    ++v9; /*0x964ede*/
  }
  v57 = a2[5]; /*0x9652ac*/
  v324 = v16; /*0x9652af*/
  v58 = a2[6]; /*0x9652b3*/
  v388.x = v434[0] * v57 - v435[0] * v58; /*0x9652d0*/
  v59 = v10->x; /*0x9652d8*/
  v388.y = v58 * v418 - v434[0] * v59; /*0x9652f6*/
  v388.z = v59 * v435[0] - v57 * v418; /*0x965311*/
  v425 = v388; /*0x96531d*/
  *(float *)&v390 = v436[0] * v388.x + v438[0] * v388.y + v439[0] * v388.z; /*0x96534b*/
  *(float *)&v389 = v388.y * *(double *)&v432.x + v388.x * v437[0] + v388.z * v433[0]; /*0x96536e*/
  v336 = fabs(v396); /*0x965378*/
  v402 = v336; /*0x965380*/
  v337 = fabs(v399); /*0x965390*/
  *(double *)&v419.x = v337; /*0x965398*/
  *(float *)&v266 = v402 * a2[0xF] + v337 * a2[0xE]; /*0x9653a9*/
  v60 = *(float *)&v390; /*0x9653ad*/
  v61 = *(float *)&v266; /*0x9653b5*/
  if ( *(float *)&v266 >= (double)*(float *)&v390 ) /*0x9653c2*/
  {
    v62 = *(float *)&v389; /*0x9654c4*/
    v64 = -*(float *)&v266; /*0x9654c6*/
    if ( v64 <= v60 ) /*0x9654cf*/
      goto LABEL_72; /*0x9654cf*/
    if ( v391.x <= 0.0 ) /*0x9654e0*/
    {
      if ( v30 * v62 + v60 >= v64 ) /*0x9654f3*/
      {
        v269 = -((v61 + v60) / v62); /*0x965501*/
        if ( *a8 < (double)v269 ) /*0x965512*/
        {
          v16 = 0xFFFFFFFF; /*0x965518*/
          *a8 = v269; /*0x96551b*/
          v18 = 5; /*0x96551d*/
          v368 = 0; /*0x965522*/
          v324 = 0xFFFFFFFF; /*0x96552a*/
        }
        goto LABEL_72; /*0x96552e*/
      }
      return 0; /*0x9654f3*/
    }
    v339 = *(double *)&v416.x + v60; /*0x965539*/
    v65 = v339; /*0x96553d*/
    if ( v339 >= v64 ) /*0x965548*/
      goto LABEL_72; /*0x965548*/
    if ( v30 * v62 + v65 >= v64 ) /*0x96555b*/
    {
      v270 = -((v61 + v65) / v62); /*0x965578*/
      if ( *a8 < (double)v270 ) /*0x965589*/
      {
        *a8 = v270; /*0x965590*/
        v16 = 0xFFFFFFFF; /*0x965592*/
        v18 = 5; /*0x965595*/
        v368 = 1; /*0x96559a*/
        v324 = 0xFFFFFFFF; /*0x96559e*/
      }
      goto LABEL_72; /*0x96559e*/
    }
    return 0; /*0x96555b*/
  }
  v62 = *(float *)&v389; /*0x9653c8*/
  if ( v391.x < 0.0 ) /*0x9653d5*/
  {
    v338 = *(double *)&v416.x + v60; /*0x965451*/
    v63 = v338; /*0x965455*/
    if ( v338 <= v61 ) /*0x965460*/
      goto LABEL_72; /*0x965460*/
    if ( v30 * v62 + v63 <= v61 ) /*0x965475*/
    {
      v268 = (v61 - v63) / v62; /*0x965492*/
      if ( *a8 < (double)v268 ) /*0x9654a3*/
      {
        *a8 = v268; /*0x9654ae*/
        v16 = 1; /*0x9654b0*/
        v18 = 5; /*0x9654b2*/
        v368 = 1; /*0x9654b7*/
        v324 = 1; /*0x9654bb*/
      }
      goto LABEL_72; /*0x9654bf*/
    }
    return 0; /*0x965475*/
  }
  if ( v30 * v62 + v60 > v61 ) /*0x9653e6*/
    return 0; /*0x9653e6*/
  v267 = (v61 - v60) / v62; /*0x965412*/
  if ( *a8 < (double)v267 ) /*0x965423*/
  {
    *a8 = v267; /*0x96542e*/
    v16 = 1; /*0x965430*/
    v18 = 5; /*0x965432*/
    v368 = 0; /*0x965437*/
    v324 = 1; /*0x96543f*/
  }
LABEL_72:
  v66 = a2[5]; /*0x9655b3*/
  v67 = a2[6]; /*0x9655b6*/
  v388.x = *(double *)&v431.x * v66 - y * v67; /*0x9655cf*/
  v68 = v10->x; /*0x9655d7*/
  x_low = SLODWORD(v388.x); /*0x9655d9*/
  v388.y = v67 * x - *(double *)&v431.x * v68; /*0x9655f1*/
  y_low = SLODWORD(v388.y); /*0x9655f9*/
  v388.z = v68 * y - v66 * x; /*0x965612*/
  z_low = SLODWORD(v388.z); /*0x96561e*/
  *(float *)&v390 = v436[0] * v388.x + v438[0] * v388.y + v439[0] * v388.z; /*0x965650*/
  *(float *)&v381 = v388.y * *(double *)&v432.x + v388.x * v437[0] + v388.z * v433[0]; /*0x965673*/
  v340 = fabs(v397); /*0x96567d*/
  v386 = v340; /*0x965685*/
  v341 = fabs(v400); /*0x965692*/
  *(double *)&v416.x = v341; /*0x96569a*/
  *(float *)&v271 = v386 * a2[0xF] + v341 * a2[0xE]; /*0x9656ab*/
  v69 = *(float *)&v390; /*0x9656af*/
  v70 = *(float *)&v271; /*0x9656b7*/
  if ( *(float *)&v271 >= (double)*(float *)&v390 ) /*0x9656c4*/
  {
    v71 = *(float *)&v381; /*0x9657bf*/
    v74 = -*(float *)&v271; /*0x9657c1*/
    if ( v74 <= v69 ) /*0x9657ca*/
      goto LABEL_95; /*0x9657ca*/
    *(float *)&v275 = -v391.x; /*0x9657d8*/
    if ( *(float *)&v275 > 0.0 ) /*0x9657eb*/
    {
      v343 = *(float *)&v275 + v69; /*0x965859*/
      if ( v343 >= v74 ) /*0x965868*/
      {
        v30 = a1; /*0x9659f1*/
        goto LABEL_95; /*0x9659f3*/
      }
      if ( a1 * v71 + v343 >= v74 ) /*0x965882*/
      {
        v75 = *(float *)&v390; /*0x96589f*/
        v277 = -((v343 + v70) / v71); /*0x9658a3*/
        if ( *a8 < (double)v277 ) /*0x9658b4*/
        {
          v16 = 0xFFFFFFFF; /*0x9658ba*/
          *a8 = v277; /*0x9658bd*/
          v18 = 6; /*0x9658bf*/
          v368 = 1; /*0x9658c4*/
          v324 = 0xFFFFFFFF; /*0x9658c8*/
        }
        v76 = v75; /*0x9658d5*/
        v30 = a1; /*0x9658d5*/
        v69 = v76; /*0x9658d7*/
        v71 = *(float *)&v381; /*0x9658d9*/
        v62 = *(float *)&v389; /*0x9658d9*/
        goto LABEL_95; /*0x9658d9*/
      }
      return 0; /*0x965882*/
    }
    if ( a1 * v71 + v69 < v74 ) /*0x965801*/
      return 0; /*0x965817*/
    v73 = *(float *)&v381; /*0x96581c*/
    v276 = -((v70 + v69) / v71); /*0x965820*/
    if ( *a8 < (double)v276 ) /*0x965831*/
    {
      *a8 = v276; /*0x965837*/
      v16 = 0xFFFFFFFF; /*0x965839*/
      v18 = 6; /*0x96583f*/
      v368 = 0; /*0x965844*/
      v30 = a1; /*0x96584c*/
      v324 = 0xFFFFFFFF; /*0x96584e*/
      goto LABEL_95; /*0x965852*/
    }
LABEL_101:
    v71 = v73; /*0x9659dc*/
    v30 = a1; /*0x9659e1*/
    goto LABEL_95; /*0x9659e3*/
  }
  v71 = *(float *)&v381; /*0x9656ca*/
  *(float *)&v272 = -v391.x; /*0x9656d2*/
  if ( *(float *)&v272 < 0.0 ) /*0x9656e5*/
  {
    v342 = *(float *)&v272 + v69; /*0x96574a*/
    v72 = v342; /*0x96574e*/
    if ( v342 <= v70 ) /*0x965759*/
      goto LABEL_95; /*0x965759*/
    if ( v30 * v71 + v72 > v70 ) /*0x96576e*/
      return 0; /*0x965786*/
    v73 = *(float *)&v381; /*0x96578b*/
    v274 = (v70 - v72) / v71; /*0x96578d*/
    if ( *a8 < (double)v274 ) /*0x96579e*/
    {
      *a8 = v274; /*0x9657a4*/
      v16 = 1; /*0x9657a6*/
      v18 = 6; /*0x9657ab*/
      v368 = 1; /*0x9657b0*/
      v30 = a1; /*0x9657b4*/
      v324 = 1; /*0x9657b6*/
      goto LABEL_95; /*0x9657ba*/
    }
    goto LABEL_101; /*0x96579e*/
  }
  if ( v30 * *(float *)&v381 + v69 > v70 ) /*0x9656f8*/
    return 0; /*0x965710*/
  v273 = (v70 - v69) / v71; /*0x965717*/
  if ( *a8 < (double)v273 ) /*0x965728*/
  {
    v16 = 1; /*0x96572e*/
    *a8 = v273; /*0x965730*/
    v18 = 6; /*0x965732*/
    v368 = 0; /*0x965737*/
    v324 = 1; /*0x96573f*/
  }
LABEL_95:
  *(float *)&v398 = v397 - v396; /*0x9658db*/
  *(float *)&v401 = v400 - v399; /*0x9658fc*/
  *(float *)&v389 = v69 - v60; /*0x965909*/
  *(float *)&v382 = v71 - v62; /*0x96590f*/
  v344 = fabs(*(float *)&v401); /*0x96591c*/
  v420 = v344; /*0x965924*/
  v345 = fabs(*(float *)&v398); /*0x965934*/
  *(double *)&v404.x = v345; /*0x96593c*/
  *(float *)&v278 = v420 * a2[0xE] + v345 * a2[0xF]; /*0x96594d*/
  v77 = *(float *)&v389; /*0x965951*/
  v78 = *(float *)&v278; /*0x965959*/
  if ( *(float *)&v278 >= (double)*(float *)&v389 ) /*0x965962*/
  {
    v81 = *(float *)&v278; /*0x965a71*/
    v82 = -*(float *)&v278; /*0x965a73*/
    if ( v82 <= v77 ) /*0x965a7c*/
      goto LABEL_119; /*0x965a7c*/
    *(float *)&v282 = -v391.x; /*0x965a88*/
    if ( *(float *)&v282 > 0.0 ) /*0x965a9b*/
    {
      v83 = v82; /*0x965af1*/
      v84 = v77 + *(float *)&v282; /*0x965af1*/
      v85 = v83; /*0x965af1*/
      v347 = v84; /*0x965af3*/
      v86 = v347; /*0x965af7*/
      if ( v347 >= v83 ) /*0x965b02*/
        goto LABEL_119; /*0x965b02*/
      if ( v30 * *(float *)&v382 + v86 < v85 ) /*0x965b17*/
        return 0; /*0x965b17*/
      v284 = -((v81 + v86) / *(float *)&v382); /*0x965b30*/
      if ( *a8 < (double)v284 ) /*0x965b41*/
      {
        v16 = 0xFFFFFFFF; /*0x965b43*/
        *a8 = v284; /*0x965b46*/
        v18 = 7; /*0x965b48*/
        v368 = 1; /*0x965b4d*/
        v324 = 0xFFFFFFFF; /*0x965b51*/
      }
    }
    else
    {
      if ( v30 * *(float *)&v382 + v77 < v82 ) /*0x965ab2*/
        return 0; /*0x965ab2*/
      v283 = -((v77 + v81) / *(float *)&v382); /*0x965ac0*/
      if ( *a8 < (double)v283 ) /*0x965ad1*/
      {
        v16 = 0xFFFFFFFF; /*0x965ad7*/
        *a8 = v283; /*0x965ada*/
        v18 = 7; /*0x965adc*/
        v368 = 0; /*0x965ae1*/
        v324 = 0xFFFFFFFF; /*0x965ae9*/
      }
    }
LABEL_119:
    v87 = a2[8]; /*0x965b61*/
    v88 = a2[9]; /*0x965b64*/
    v388.x = v434[0] * v87 - v435[0] * v88; /*0x965b81*/
    v89 = a2[7]; /*0x965b89*/
    v388.y = v88 * v418 - v434[0] * v89; /*0x965ba6*/
    v388.z = v89 * v435[0] - v87 * v418; /*0x965bbb*/
    v423 = v388; /*0x965bc7*/
    *(float *)&v390 = v436[0] * v388.x + v438[0] * v388.y + v439[0] * v388.z; /*0x965bf9*/
    *(float *)&v389 = v388.y * *(double *)&v432.x + v388.x * v437[0] + v388.z * v433[0]; /*0x965c1c*/
    v348 = fabs(v393); /*0x965c26*/
    v429 = v348; /*0x965c2e*/
    *(float *)&v285 = v348 * a2[0xF] + a2[0xD] * *(double *)&v419.x; /*0x965c43*/
    v90 = *(float *)&v390; /*0x965c47*/
    v91 = *(float *)&v285; /*0x965c4f*/
    if ( *(float *)&v285 >= (double)*(float *)&v390 ) /*0x965c5c*/
    {
      v92 = *(float *)&v389; /*0x965d23*/
      v94 = -*(float *)&v285; /*0x965d25*/
      if ( v94 > v90 ) /*0x965d2e*/
      {
        if ( v391.y > 0.0 ) /*0x965d3f*/
        {
          v350 = v440[0] + v90; /*0x965d94*/
          v95 = v350; /*0x965d98*/
          if ( v350 < v94 ) /*0x965da3*/
          {
            if ( v30 * v92 + v95 < v94 ) /*0x965db6*/
              return 0; /*0x965db6*/
            v289 = -((v91 + v95) / v92); /*0x965dc2*/
            if ( *a8 < (double)v289 ) /*0x965dd3*/
            {
              v16 = 0xFFFFFFFF; /*0x965dd5*/
              *a8 = v289; /*0x965dd8*/
              v18 = 8; /*0x965dda*/
              v368 = 1; /*0x965ddf*/
              v324 = 0xFFFFFFFF; /*0x965de3*/
            }
          }
        }
        else
        {
          if ( v30 * v92 + v90 < v94 ) /*0x965d52*/
            return 0; /*0x965d52*/
          v288 = -((v91 + v90) / v92); /*0x965d60*/
          if ( *a8 < (double)v288 ) /*0x965d71*/
          {
            v16 = 0xFFFFFFFF; /*0x965d73*/
            *a8 = v288; /*0x965d76*/
            v18 = 8; /*0x965d78*/
            v368 = 0; /*0x965d7d*/
            v324 = 0xFFFFFFFF; /*0x965d85*/
          }
        }
      }
    }
    else
    {
      v92 = *(float *)&v389; /*0x965c62*/
      if ( v391.y < 0.0 ) /*0x965c6f*/
      {
        v349 = v440[0] + v90; /*0x965cc6*/
        v93 = v349; /*0x965cca*/
        if ( v349 > v91 ) /*0x965cd5*/
        {
          if ( v30 * v92 + v93 > v91 ) /*0x965cea*/
            return 0; /*0x965cea*/
          v287 = (v91 - v93) / v92; /*0x965cf6*/
          if ( *a8 < (double)v287 ) /*0x965d07*/
          {
            v16 = 1; /*0x965d0d*/
            *a8 = v287; /*0x965d0f*/
            v18 = 8; /*0x965d11*/
            v368 = 1; /*0x965d16*/
            v324 = 1; /*0x965d1a*/
          }
        }
      }
      else
      {
        if ( v30 * v92 + v90 > v91 ) /*0x965c80*/
          return 0; /*0x965c80*/
        v286 = (v91 - v90) / v92; /*0x965c8c*/
        if ( *a8 < (double)v286 ) /*0x965c9d*/
        {
          v16 = 1; /*0x965ca3*/
          *a8 = v286; /*0x965ca5*/
          v18 = 8; /*0x965ca7*/
          v368 = 0; /*0x965cac*/
          v324 = 1; /*0x965cb4*/
        }
      }
    }
    v96 = a2[8]; /*0x965df3*/
    v97 = a2[9]; /*0x965df6*/
    v419.x = *(double *)&v431.x * v96 - y * v97; /*0x965e0f*/
    v98 = a2[7]; /*0x965e1d*/
    v419.y = v97 * x - *(double *)&v431.x * v98; /*0x965e33*/
    v419.z = v98 * y - v96 * x; /*0x965e57*/
    v388 = v419; /*0x965e6c*/
    *(float *)&v390 = v436[0] * v419.x + v438[0] * v419.y + v439[0] * v419.z; /*0x965ea1*/
    *(float *)&v383 = v419.y * *(double *)&v432.x + v419.x * v437[0] + v419.z * v433[0]; /*0x965ec4*/
    v351 = fabs(v394); /*0x965ece*/
    *(double *)&v419.x = v351; /*0x965ed6*/
    *(float *)&v290 = v351 * a2[0xF] + a2[0xD] * *(double *)&v416.x; /*0x965eeb*/
    v99 = *(float *)&v390; /*0x965eef*/
    v100 = *(float *)&v290; /*0x965ef7*/
    if ( *(float *)&v290 >= (double)*(float *)&v390 ) /*0x965f04*/
    {
      v101 = *(float *)&v383; /*0x965fff*/
      v104 = -*(float *)&v290; /*0x966001*/
      if ( v104 <= v99 ) /*0x96600a*/
        goto LABEL_160; /*0x96600a*/
      *(float *)&v294 = -v391.y; /*0x966018*/
      if ( *(float *)&v294 > 0.0 ) /*0x96602b*/
      {
        v353 = *(float *)&v294 + v99; /*0x966099*/
        if ( v353 >= v104 ) /*0x9660a8*/
        {
          v30 = a1; /*0x966204*/
        }
        else
        {
          if ( a1 * v101 + v353 < v104 ) /*0x9660c2*/
            return 0; /*0x9660c2*/
          v105 = *(float *)&v390; /*0x9660df*/
          v296 = -((v353 + v100) / v101); /*0x9660e3*/
          if ( *a8 < (double)v296 ) /*0x9660f4*/
          {
            v16 = 0xFFFFFFFF; /*0x9660fa*/
            *a8 = v296; /*0x9660fd*/
            v18 = 9; /*0x9660ff*/
            v368 = 1; /*0x966104*/
            v324 = 0xFFFFFFFF; /*0x966108*/
          }
          v106 = v105; /*0x966115*/
          v30 = a1; /*0x966115*/
          v99 = v106; /*0x966117*/
          v101 = *(float *)&v383; /*0x966119*/
          v92 = *(float *)&v389; /*0x966119*/
        }
LABEL_160:
        *(float *)&v395 = v394 - v393; /*0x96611b*/
        *(float *)&v389 = v99 - v90; /*0x966131*/
        *(float *)&v384 = v101 - v92; /*0x966137*/
        v354 = fabs(*(float *)&v395); /*0x966141*/
        v440[0] = v354; /*0x966149*/
        *(float *)&v297 = v354 * a2[0xF] + a2[0xD] * v420; /*0x966160*/
        v107 = *(float *)&v389; /*0x966164*/
        v108 = *(float *)&v297; /*0x96616c*/
        if ( *(float *)&v297 < (double)*(float *)&v389 ) /*0x966175*/
        {
          v109 = *(float *)&v297; /*0x96617b*/
          *(float *)&v298 = -v391.y; /*0x966183*/
          if ( *(float *)&v298 < 0.0 ) /*0x966196*/
          {
            v355 = v107 + *(float *)&v298; /*0x966218*/
            v110 = v355; /*0x96621c*/
            if ( v355 > v108 ) /*0x966227*/
            {
              if ( v30 * *(float *)&v384 + v110 > v108 ) /*0x96623e*/
                return 0; /*0x965a3d*/
              v300 = (v108 - v110) / *(float *)&v384; /*0x96624a*/
              if ( *a8 < (double)v300 ) /*0x96625b*/
              {
                v16 = 1; /*0x966261*/
                *a8 = v300; /*0x966263*/
                v18 = 0xA; /*0x966265*/
                v368 = 1; /*0x96626a*/
                v324 = 1; /*0x96626e*/
              }
            }
          }
          else
          {
            if ( v30 * *(float *)&v384 + v107 > v109 ) /*0x9661ab*/
              return 0; /*0x9661ab*/
            v299 = (v109 - v107) / *(float *)&v384; /*0x9661b7*/
            if ( *a8 < (double)v299 ) /*0x9661c8*/
            {
              v16 = 1; /*0x9661ce*/
              *a8 = v299; /*0x9661d0*/
              v18 = 0xA; /*0x9661d2*/
              v368 = 0; /*0x9661d7*/
              v324 = 1; /*0x9661df*/
            }
          }
          goto LABEL_182; /*0x9661e3*/
        }
        v111 = *(float *)&v297; /*0x966277*/
        v112 = -*(float *)&v297; /*0x966279*/
        if ( v112 <= v107 ) /*0x966282*/
          goto LABEL_182; /*0x966282*/
        *(float *)&v301 = -v391.y; /*0x96628e*/
        if ( *(float *)&v301 <= 0.0 ) /*0x9662a1*/
        {
          if ( v30 * *(float *)&v384 + v107 < v112 ) /*0x9662b8*/
            return 0; /*0x9662b8*/
          v302 = -((v107 + v111) / *(float *)&v384); /*0x9662c6*/
          if ( *a8 < (double)v302 ) /*0x9662d7*/
          {
            v16 = 0xFFFFFFFF; /*0x9662d9*/
            *a8 = v302; /*0x9662dc*/
            v18 = 0xA; /*0x9662de*/
            v368 = 0; /*0x9662e3*/
            v324 = 0xFFFFFFFF; /*0x9662eb*/
          }
          goto LABEL_182; /*0x9662ef*/
        }
        v113 = v112; /*0x9662f3*/
        v114 = v107 + *(float *)&v301; /*0x9662f3*/
        v115 = v113; /*0x9662f3*/
        v356 = v114; /*0x9662f5*/
        v116 = v356; /*0x9662f9*/
        if ( v356 >= v113 ) /*0x966304*/
        {
LABEL_182:
          v117 = a2[0xB]; /*0x966356*/
          v118 = a2[0xC]; /*0x966359*/
          v416.x = v434[0] * v117 - v435[0] * v118; /*0x966376*/
          v119 = a2[0xA]; /*0x966384*/
          v416.y = v118 * v418 - v434[0] * v119; /*0x9663a1*/
          v420 = *(double *)&v416.x; /*0x9663af*/
          v416.z = v119 * v435[0] - v117 * v418; /*0x9663bc*/
          v421 = LODWORD(v416.z); /*0x9663d1*/
          v357 = v436[0] * v416.x + v438[0] * v416.y + v439[0] * v416.z; /*0x966409*/
          *(float *)&v389 = v416.y * *(double *)&v432.x + v416.x * v437[0] + v416.z * v433[0]; /*0x96642c*/
          *(float *)&v304 = a2[0xE] * v429 + a2[0xD] * v402; /*0x966445*/
          v120 = v357; /*0x966449*/
          v121 = *(float *)&v304; /*0x966451*/
          if ( *(float *)&v304 < (double)v357 ) /*0x96645e*/
          {
            v122 = *(float *)&v389; /*0x966464*/
            if ( v391.z >= 0.0 ) /*0x966471*/
            {
              if ( v30 * v122 + v120 <= v121 ) /*0x966482*/
              {
                v305 = (v121 - v120) / v122; /*0x96648e*/
                if ( *a8 < (double)v305 ) /*0x96649f*/
                {
                  v16 = 1; /*0x9664a5*/
                  *a8 = v305; /*0x9664a7*/
                  v18 = 0xB; /*0x9664a9*/
                  v368 = 0; /*0x9664ae*/
                  v324 = 1; /*0x9664b6*/
                }
                goto LABEL_200; /*0x9664ba*/
              }
              return 0; /*0x9653fa*/
            }
            v358 = *(double *)&out.x + v120; /*0x9664c8*/
            v123 = v358; /*0x9664cc*/
            if ( v358 > v121 ) /*0x9664d7*/
            {
              if ( v30 * v122 + v123 <= v121 ) /*0x9664ec*/
              {
                v306 = (v121 - v123) / v122; /*0x9664f8*/
                if ( *a8 < (double)v306 ) /*0x966509*/
                {
                  v16 = 1; /*0x96650f*/
                  *a8 = v306; /*0x966511*/
                  v18 = 0xB; /*0x966513*/
                  v368 = 1; /*0x966518*/
                  v324 = 1; /*0x96651c*/
                }
                goto LABEL_200; /*0x966520*/
              }
              return 0; /*0x96548b*/
            }
LABEL_200:
            v126 = a2[0xB]; /*0x9665f5*/
            v127 = a2[0xC]; /*0x9665f8*/
            *(float *)&v429 = *(double *)&v431.x * v126 - y * v127; /*0x966611*/
            v128 = a2[0xA]; /*0x96661f*/
            *((float *)&v429 + 1) = v127 * x - *(double *)&v431.x * v128; /*0x966638*/
            v402 = v429; /*0x966646*/
            *(float *)&v430 = v128 * y - v126 * x; /*0x96665f*/
            v403 = v430; /*0x966674*/
            v360 = v436[0] * *(float *)&v429 + v438[0] * *((float *)&v429 + 1) + v439[0] * *(float *)&v430; /*0x9666ac*/
            *(float *)&v390 = *((float *)&v429 + 1) * *(double *)&v432.x /*0x9666cf*/
                            + *(float *)&v429 * v437[0]
                            + *(float *)&v430 * v433[0];
            *(float *)&v309 = a2[0xE] * *(double *)&v419.x + a2[0xD] * v386; /*0x9666e5*/
            v129 = v360; /*0x9666e9*/
            v130 = *(float *)&v309; /*0x9666f1*/
            if ( *(float *)&v309 < (double)v360 ) /*0x9666fe*/
            {
              v131 = *(float *)&v390; /*0x966704*/
              *(float *)&v310 = -v391.z; /*0x96670c*/
              if ( *(float *)&v310 >= 0.0 ) /*0x96671f*/
              {
                if ( v30 * *(float *)&v390 + v129 > v130 ) /*0x966732*/
                  return 0; /*0x966732*/
                v311 = (v130 - v129) / v131; /*0x96673e*/
                if ( *a8 < (double)v311 ) /*0x96674f*/
                {
                  v16 = 1; /*0x966755*/
                  *a8 = v311; /*0x966757*/
                  v18 = 0xC; /*0x966759*/
                  v368 = 0; /*0x96675e*/
                  v324 = 1; /*0x966766*/
                }
LABEL_219:
                v363 = v129 - v120; /*0x9668ca*/
                *(float *)&v385 = v131 - v122; /*0x9668da*/
                *(float *)&v316 = a2[0xE] * v440[0] + a2[0xD] * *(double *)&v404.x; /*0x9668f3*/
                v136 = v363; /*0x9668f7*/
                if ( *(float *)&v316 >= (double)v363 ) /*0x966908*/
                {
                  v145 = *(float *)&v316; /*0x966a32*/
                  v146 = -*(float *)&v316; /*0x966a34*/
                  if ( v146 <= v136 ) /*0x966a3d*/
                  {
                    z = v391.z; /*0x966b3c*/
                    v142 = 0.0; /*0x966b40*/
                  }
                  else
                  {
                    *(float *)&v320 = -v391.z; /*0x966a4b*/
                    if ( *(float *)&v320 > 0.0 ) /*0x966a5c*/
                    {
                      v148 = v136 + *(float *)&v320; /*0x966ac8*/
                      v142 = 0.0; /*0x966ac8*/
                      v365 = v148; /*0x966aca*/
                      v149 = v365; /*0x966ace*/
                      if ( v365 >= v146 ) /*0x966ad9*/
                      {
                        z = v391.z; /*0x966b56*/
                      }
                      else
                      {
                        if ( v30 * *(float *)&v385 + v149 < v146 ) /*0x966aee*/
                          return 0; /*0x966b02*/
                        z = v391.z; /*0x966b09*/
                        v322 = -((v149 + v145) / *(float *)&v385); /*0x966b0d*/
                        if ( *a8 < (double)v322 ) /*0x966b1e*/
                        {
                          v16 = 0xFFFFFFFF; /*0x966b20*/
                          *a8 = v322; /*0x966b23*/
                          v18 = 0xD; /*0x966b25*/
                          v368 = 1; /*0x966b2a*/
                          v324 = 0xFFFFFFFF; /*0x966b2e*/
                        }
                      }
                    }
                    else
                    {
                      if ( v30 * *(float *)&v385 + v136 < v146 ) /*0x966a73*/
                        return 0; /*0x966a87*/
                      v147 = v136 + v145; /*0x966a8c*/
                      v142 = 0.0; /*0x966a8c*/
                      z = v391.z; /*0x966a90*/
                      v321 = -(v147 / *(float *)&v385); /*0x966a94*/
                      if ( *a8 < (double)v321 ) /*0x966aa5*/
                      {
                        v16 = 0xFFFFFFFF; /*0x966aab*/
                        *a8 = v321; /*0x966aae*/
                        v18 = 0xD; /*0x966ab0*/
                        v368 = 0; /*0x966ab5*/
                        v324 = 0xFFFFFFFF; /*0x966abd*/
                      }
                    }
                  }
                }
                else
                {
                  v137 = *(float *)&v316; /*0x96690e*/
                  *(float *)&v317 = -v391.z; /*0x966918*/
                  if ( *(float *)&v317 >= 0.0 ) /*0x966929*/
                  {
                    if ( v30 * *(float *)&v385 + v136 > v137 ) /*0x966942*/
                      return 0; /*0x966956*/
                    v138 = v137 - v136; /*0x966987*/
                    v139 = v391.z; /*0x966987*/
                    v140 = 0.0; /*0x96698b*/
                    v318 = v138 / *(float *)&v385; /*0x96698d*/
                    if ( *a8 < (double)v318 ) /*0x96699e*/
                    {
                      v16 = 1; /*0x9669a4*/
                      *a8 = v318; /*0x9669a6*/
                      v18 = 0xD; /*0x9669a8*/
                      v368 = 0; /*0x9669ad*/
                      v324 = 1; /*0x9669b5*/
                    }
                    goto LABEL_250; /*0x9669b9*/
                  }
                  v141 = v136 + *(float *)&v317; /*0x9669c0*/
                  v142 = 0.0; /*0x9669c0*/
                  v364 = v141; /*0x9669c2*/
                  v143 = v364; /*0x9669c6*/
                  if ( v364 <= v137 ) /*0x9669d1*/
                  {
                    z = v391.z; /*0x966b4c*/
                  }
                  else
                  {
                    if ( v30 * *(float *)&v385 + v143 > v137 ) /*0x9669e8*/
                      return 0; /*0x9669fc*/
                    z = v391.z; /*0x966a03*/
                    v319 = (v137 - v143) / *(float *)&v385; /*0x966a05*/
                    if ( *a8 < (double)v319 ) /*0x966a16*/
                    {
                      v16 = 1; /*0x966a1c*/
                      *a8 = v319; /*0x966a1e*/
                      v18 = 0xD; /*0x966a20*/
                      v368 = 1; /*0x966a25*/
                      v324 = 1; /*0x966a29*/
                    }
                  }
                }
                v150 = v142; /*0x966b5c*/
                v139 = z; /*0x966b5c*/
                v140 = v150; /*0x966b5c*/
LABEL_250:
                switch ( v18 ) /*0x966b67*/
                {
                  case 0: /*0x966b67*/
                    v257 = v392; /*0x966b79*/
                    v151 = sub_47D9B0(a4, &v423.x, a5); /*0x966b97*/
                    v152 = sub_47D9B0(v151, (float *)&x_low, a6); /*0x966b9e*/
                    v153 = sub_47DA10(&v425.x, flt_B307F0, v152); /*0x966bb6*/
                    v154 = sub_47D9B0(v153, &v388.x, v257); /*0x966bc0*/
                    v155 = sub_47DA10((float *)v422, kHeadBodyNormalMatchRadius, v154); /*0x966bd8*/
                    goto LABEL_252; /*0x966bd8*/
                  case 1: /*0x966b67*/
                    if ( v391.x <= v140 ) /*0x966c03*/
                    {
                      v156 = a2 + 0xD; /*0x966c2c*/
                      if ( v391.x >= v140 ) /*0x966c1e*/
                        *(float *)&v386 = v140; /*0x966c3e*/
                      else
                        *(float *)&v386 = (double)-v16 * *v325; /*0x966c32*/
                    }
                    else
                    {
                      v156 = a2 + 0xD; /*0x966c05*/
                      *(float *)&v386 = (double)v324 * *v325; /*0x966c11*/
                    }
                    if ( v391.y <= v140 ) /*0x966c4f*/
                    {
                      if ( v391.y >= v140 ) /*0x966c67*/
                        *((float *)&v386 + 1) = v140; /*0x966c80*/
                      else
                        *((float *)&v386 + 1) = (double)-v16 * v156[1]; /*0x966c78*/
                    }
                    else
                    {
                      *((float *)&v386 + 1) = (double)v324 * v156[1]; /*0x966c5a*/
                    }
                    if ( v139 <= v140 ) /*0x966c8d*/
                    {
                      if ( v139 >= v140 ) /*0x966ca0*/
                      {
LABEL_268:
                        v387 = v140; /*0x966cb1*/
                        v158 = *(float *)&v386; /*0x966cb8*/
                        v159 = v392; /*0x966cbc*/
                        v160 = *((float *)&v386 + 1); /*0x966cc0*/
                        v161 = v387; /*0x966cc7*/
                        *a9 = *a8 * *a3 /*0x966ce5*/
                            + *v392
                            + a2[4] * *(float *)&v386
                            + a2[7] * *((float *)&v386 + 1)
                            + a2[0xA] * v387;
                        a9[1] = *a8 * a3[1] + v159[1] + a2[5] * v158 + a2[8] * v160 + a2[0xB] * v161; /*0x966d04*/
                        a9[2] = v161 * a2[0xC] + v160 * a2[9] + v158 * a2[6] + *a8 * a3[2] + v159[2]; /*0x966d26*/
                        goto LABEL_395; /*0x966d29*/
                      }
                      v157 = (double)-v16; /*0x966caa*/
                    }
                    else
                    {
                      v157 = (double)v324; /*0x966c93*/
                    }
                    v140 = v157 * v156[2]; /*0x966cae*/
                    goto LABEL_268; /*0x966cae*/
                  case 2: /*0x966b67*/
                  case 3: /*0x966b67*/
                  case 4: /*0x966b67*/
                    if ( !v368 ) /*0x966d3a*/
                    {
                      v162 = sub_47DA10((float *)&v413, *a8, a7); /*0x966d4c*/
                      v155 = sub_47D9B0(a4, &v391.x, v162); /*0x966d5d*/
LABEL_252:
                      *a9 = *v155; /*0x966be0*/
                      a9[1] = v155[1]; /*0x966bea*/
                      a9[2] = v155[2]; /*0x966bf0*/
                      goto LABEL_395; /*0x966bf3*/
                    }
                    if ( v368 != 1 ) /*0x966d6d*/
                    {
                      v167 = sub_47DA10((float *)&v429, *a8, a7); /*0x966df4*/
                      v168 = sub_47D9B0(a4, (float *)&v420, v167); /*0x966e08*/
                      v155 = sub_47D9B0(v168, (float *)&v402, &v406.x); /*0x966e0f*/
                      goto LABEL_252; /*0x966e14*/
                    }
                    v163 = sub_47DA10(&v404.x, *a8, a7); /*0x966d7c*/
                    v164 = sub_47D9B0(a4, (float *)&v386, v163); /*0x966d8d*/
                    v388.x = *v164 + v418; /*0x966d9b*/
                    v388.y = v164[1] + v435[0]; /*0x966dad*/
                    v165 = v388.y; /*0x966db1*/
                    v166 = v164[2] + v434[0]; /*0x966dbb*/
                    *a9 = v388.x; /*0x966dc2*/
                    a9[1] = v165; /*0x966dc4*/
                    v388.z = v166; /*0x966dc7*/
                    a9[2] = v388.z; /*0x966dcf*/
                    goto LABEL_395; /*0x966dd2*/
                  case 5: /*0x966b67*/
                    if ( v399 <= v140 ) /*0x966e29*/
                    {
                      v169 = a2 + 0xD; /*0x966e46*/
                      if ( v399 >= v140 ) /*0x966e51*/
                        *((float *)&v386 + 1) = v140; /*0x966e60*/
                      else
                        *((float *)&v386 + 1) = (double)v324 * a2[0xE]; /*0x966e5a*/
                    }
                    else
                    {
                      v169 = a2 + 0xD; /*0x966e39*/
                      *((float *)&v386 + 1) = (double)-v16 * a2[0xE]; /*0x966e40*/
                    }
                    if ( v396 <= v140 ) /*0x966e6f*/
                    {
                      if ( v396 >= v140 ) /*0x966e82*/
                      {
LABEL_284:
                        v387 = v140; /*0x966e93*/
                        v171 = sub_47DA10(&v419.x, *a8, (float *)&v413); /*0x966ead*/
                        sub_4121D0(&v411.x, v171); /*0x966ebd*/
                        v172 = NiPoint3_CrossProduct(&v411, &out, &other); /*0x966ed9*/
                        v173 = v172->x; /*0x966ede*/
                        v174 = v172->y; /*0x966ee0*/
                        v175 = v172->z; /*0x966ee3*/
                        other.x = v173; /*0x966ee6*/
                        other.y = v174; /*0x966ef5*/
                        other.z = v175; /*0x966efc*/
                        v393 = sub_47D9E0(&v425.x, &v425.x); /*0x966f08*/
                        v396 = sub_47D9E0(&v425.x, &v423.x); /*0x966f20*/
                        v399 = sub_47D9E0(&v425.x, (float *)&v420); /*0x966f38*/
                        v390 = *((float *)&v386 + 1); /*0x966f4a*/
                        v366 = v387; /*0x966f5a*/
                        v176 = sub_47D9E0(&v425.x, &other.x); /*0x966f72*/
                        v177 = v390; /*0x966f72*/
                        v178 = v387; /*0x966f83*/
                        v326 = v176 - v396 * v390 - v399 * v387; /*0x966f87*/
                        if ( !v368 ) /*0x966f8b*/
                        {
                          *(float *)&v386 = v326 / v393; /*0x966f95*/
LABEL_288:
                          v181 = *(float *)&v386; /*0x966fd5*/
                          v182 = v392; /*0x966fde*/
                          *a9 = *a8 * *a3 + *v392 + a2[4] * *(float *)&v386 + a2[7] * v177 + a2[0xA] * v178; /*0x966ffd*/
                          a9[1] = *a8 * a3[1] + v182[1] + a2[5] * v181 + a2[8] * v177 + a2[0xB] * v178; /*0x96701c*/
                          a9[2] = v177 * a2[9] + v181 * a2[6] + *a8 * a3[2] + v182[2] + v178 * a2[0xC]; /*0x96703a*/
                          goto LABEL_395; /*0x96703d*/
                        }
                        *(double *)&v404.x = v326; /*0x966fb2*/
                        v179 = sub_47D9E0(&v425.x, (float *)v422); /*0x966fb9*/
                        v180 = (*(double *)&v404.x - v179) / v393; /*0x966fc5*/
LABEL_287:
                        *(float *)&v386 = v180; /*0x966fc9*/
                        v177 = v390; /*0x966fcd*/
                        v178 = v366; /*0x966fd1*/
                        goto LABEL_288; /*0x966fd1*/
                      }
                      v170 = (double)-v16; /*0x966e8c*/
                    }
                    else
                    {
                      v170 = (double)v324; /*0x966e75*/
                    }
                    v140 = v170 * v169[2]; /*0x966e90*/
                    goto LABEL_284; /*0x966e90*/
                  case 6: /*0x966b67*/
                    if ( v400 <= v140 ) /*0x967056*/
                    {
                      if ( v400 >= v140 ) /*0x967076*/
                        *((float *)&v386 + 1) = v140; /*0x967085*/
                      else
                        *((float *)&v386 + 1) = (double)v324 * a2[0xE]; /*0x96707f*/
                    }
                    else
                    {
                      *((float *)&v386 + 1) = (double)-v16 * a2[0xE]; /*0x967069*/
                    }
                    if ( v397 <= v140 ) /*0x967094*/
                    {
                      if ( v397 >= v140 ) /*0x9670a7*/
                      {
LABEL_299:
                        v387 = v140; /*0x9670b8*/
                        v184 = sub_47DA10((float *)v440, *a8, (float *)&v413); /*0x9670d2*/
                        sub_4121D0(&v411.x, v184); /*0x9670e2*/
                        v185 = NiPoint3_CrossProduct(&v411, &out, &v406); /*0x9670fe*/
                        v186 = v185->y; /*0x967105*/
                        v406.x = v185->x; /*0x967108*/
                        v187 = v185->z; /*0x96710f*/
                        v406.y = v186; /*0x967119*/
                        v406.z = v187; /*0x967123*/
                        v394 = sub_47D9E0((float *)&x_low, (float *)&x_low); /*0x96712f*/
                        v397 = sub_47D9E0((float *)&x_low, &v388.x); /*0x967144*/
                        v400 = sub_47D9E0((float *)&x_low, (float *)&v402); /*0x96715c*/
                        v390 = *((float *)&v386 + 1); /*0x96716e*/
                        v366 = v387; /*0x96717e*/
                        v188 = sub_47D9E0((float *)&x_low, &v406.x); /*0x967196*/
                        v177 = v390; /*0x967196*/
                        v178 = v387; /*0x9671a7*/
                        v327 = v188 - v397 * v390 - v400 * v387; /*0x9671ab*/
                        if ( !v368 ) /*0x9671af*/
                        {
                          *(float *)&v386 = v327 / v394; /*0x9671b9*/
                          goto LABEL_288; /*0x9671bd*/
                        }
                        v189 = sub_47D9E0((float *)&x_low, (float *)v422); /*0x9671d5*/
                        v180 = (v189 + v327) / v394; /*0x9671de*/
                        goto LABEL_287; /*0x9671e2*/
                      }
                      v183 = (double)-v16; /*0x9670b1*/
                    }
                    else
                    {
                      v183 = (double)v324; /*0x96709a*/
                    }
                    v140 = v183 * a2[0xF]; /*0x9670b5*/
                    goto LABEL_299; /*0x9670b5*/
                  case 7: /*0x966b67*/
                    v388.x = x - v418; /*0x9671f9*/
                    v388.y = y - v435[0]; /*0x96721e*/
                    v388.z = *(double *)&v431.x - v434[0]; /*0x967243*/
                    v407 = v388; /*0x96724b*/
                    v391 = *NiPoint3_CrossProduct(v10, &out, &v407); /*0x96725b*/
                    v404 = *NiPoint3_CrossProduct((NiPoint3 *)(a2 + 7), &v416, &v407); /*0x967287*/
                    v190 = NiPoint3_CrossProduct((NiPoint3 *)(a2 + 0xA), &v431, &v407); /*0x9672b5*/
                    v191 = 0.0; /*0x9672ba*/
                    v402 = *(double *)&v190->x; /*0x9672c5*/
                    v403 = LODWORD(v190->z); /*0x9672db*/
                    if ( *(float *)&v401 <= 0.0 ) /*0x9672e7*/
                    {
                      if ( *(float *)&v401 >= 0.0 ) /*0x96730b*/
                        *((float *)&v386 + 1) = 0.0; /*0x96731e*/
                      else
                        *((float *)&v386 + 1) = (double)v324 * a2[0xE]; /*0x967318*/
                    }
                    else
                    {
                      *((float *)&v386 + 1) = (double)-v16 * a2[0xE]; /*0x9672fe*/
                    }
                    if ( *(float *)&v398 <= 0.0 ) /*0x967330*/
                    {
                      if ( *(float *)&v398 < 0.0 ) /*0x96734a*/
                        v191 = (double)-v16 * a2[0xF]; /*0x96735c*/
                    }
                    else
                    {
                      v191 = (double)v324 * a2[0xF]; /*0x96733e*/
                    }
                    v387 = v191; /*0x967366*/
                    v192 = sub_47DA10((float *)v433, *a8, (float *)&v413); /*0x967379*/
                    sub_4121D0(&v411.x, v192); /*0x967389*/
                    v193 = NiPoint3_CrossProduct(&v411, &v432, &v407); /*0x9673a5*/
                    v194 = v193->x; /*0x9673aa*/
                    v195 = v193->y; /*0x9673ac*/
                    v196 = v193->z; /*0x9673af*/
                    v407.x = v194; /*0x9673b2*/
                    v407.y = v195; /*0x9673be*/
                    v407.z = v196; /*0x9673c5*/
                    *(float *)&v395 = sub_47D9E0(&v391.x, &v391.x); /*0x9673d1*/
                    *(float *)&v398 = sub_47D9E0(&v391.x, &v404.x); /*0x9673e6*/
                    *(float *)&v401 = sub_47D9E0(&v391.x, (float *)&v402); /*0x9673fe*/
                    v390 = *((float *)&v386 + 1); /*0x967410*/
                    v366 = v387; /*0x96741d*/
                    v197 = sub_47D9E0(&v391.x, &v407.x); /*0x967438*/
                    v177 = v390; /*0x967438*/
                    v178 = v387; /*0x967449*/
                    v328 = v197 - *(float *)&v398 * v390 - *(float *)&v401 * v387; /*0x96744d*/
                    if ( !v368 ) /*0x967451*/
                    {
                      *(float *)&v386 = v328 / *(float *)&v395; /*0x96745b*/
                      goto LABEL_288; /*0x96745f*/
                    }
                    v198 = sub_47D9E0(&v391.x, (float *)v422); /*0x967474*/
                    v180 = (v198 + v328) / *(float *)&v395; /*0x96747d*/
                    goto LABEL_287; /*0x967481*/
                  case 8: /*0x966b67*/
                    if ( v399 <= v140 ) /*0x96749a*/
                    {
                      if ( v399 >= v140 ) /*0x9674b1*/
                        *(float *)&v386 = v140; /*0x9674c7*/
                      else
                        *(float *)&v386 = (double)-v16 * *v325; /*0x9674c1*/
                    }
                    else
                    {
                      *(float *)&v386 = (double)v324 * *v325; /*0x9674a4*/
                    }
                    if ( v393 <= v140 ) /*0x9674d6*/
                    {
                      if ( v393 >= v140 ) /*0x9674ef*/
                      {
LABEL_324:
                        v387 = v140; /*0x9674fa*/
                        v200 = sub_47DA10((float *)v437, *a8, (float *)&v413); /*0x967514*/
                        sub_4121D0(&v411.x, v200); /*0x967524*/
                        v201 = NiPoint3_CrossProduct(&v411, &out, &other); /*0x967540*/
                        v202 = v201->y; /*0x967547*/
                        other.x = v201->x; /*0x96754a*/
                        v203 = v201->z; /*0x967551*/
                        other.y = v202; /*0x96755b*/
                        other.z = v203; /*0x96756a*/
                        v393 = sub_47D9E0(&v423.x, &v425.x); /*0x967576*/
                        v396 = sub_47D9E0(&v423.x, &v423.x); /*0x967587*/
                        v399 = sub_47D9E0(&v423.x, (float *)&v420); /*0x96759f*/
                        v389 = *(float *)&v386; /*0x9675b1*/
                        v367 = v387; /*0x9675c1*/
                        v204 = sub_47D9E0(&v423.x, &other.x); /*0x9675d9*/
                        v205 = v389; /*0x9675d9*/
                        v206 = v387; /*0x9675ea*/
                        v329 = v204 - v393 * v389 - v399 * v387; /*0x9675ee*/
                        if ( !v368 ) /*0x9675f2*/
                        {
                          *((float *)&v386 + 1) = v329 / v396; /*0x9675fc*/
LABEL_328:
                          v209 = *((float *)&v386 + 1); /*0x96763c*/
                          v210 = v392; /*0x967645*/
                          *a9 = *a8 * *a3 + *v392 + a2[4] * v205 + a2[7] * *((float *)&v386 + 1) + a2[0xA] * v206; /*0x967664*/
                          a9[1] = *a8 * a3[1] + v210[1] + a2[5] * v205 + a2[8] * v209 + a2[0xB] * v206; /*0x967683*/
                          a9[2] = v205 * a2[6] + *a8 * a3[2] + v210[2] + v209 * a2[9] + v206 * a2[0xC]; /*0x96769f*/
                          goto LABEL_395; /*0x9676a2*/
                        }
                        *(double *)&v404.x = v329; /*0x967619*/
                        v207 = sub_47D9E0(&v423.x, (float *)v422); /*0x967620*/
                        v208 = (*(double *)&v404.x - v207) / v396; /*0x96762c*/
LABEL_327:
                        *((float *)&v386 + 1) = v208; /*0x967630*/
                        v205 = v389; /*0x967634*/
                        v206 = v367; /*0x967638*/
                        goto LABEL_328; /*0x967638*/
                      }
                      v199 = (double)v324; /*0x9674f3*/
                    }
                    else
                    {
                      v199 = (double)-v16; /*0x9674e2*/
                    }
                    v140 = v199 * a2[0xF]; /*0x9674f7*/
                    goto LABEL_324; /*0x9674f7*/
                  case 9: /*0x966b67*/
                    if ( v400 <= v140 ) /*0x9676bb*/
                    {
                      if ( v400 >= v140 ) /*0x9676d2*/
                        *(float *)&v386 = v140; /*0x9676e8*/
                      else
                        *(float *)&v386 = (double)-v16 * *v325; /*0x9676e2*/
                    }
                    else
                    {
                      *(float *)&v386 = (double)v324 * *v325; /*0x9676c5*/
                    }
                    if ( v394 <= v140 ) /*0x9676f7*/
                    {
                      if ( v394 >= v140 ) /*0x967710*/
                      {
LABEL_339:
                        v387 = v140; /*0x96771b*/
                        v212 = sub_47DA10((float *)v439, *a8, (float *)&v413); /*0x967735*/
                        sub_4121D0(&v411.x, v212); /*0x967745*/
                        v213 = NiPoint3_CrossProduct(&v411, &out, &v406); /*0x967761*/
                        v214 = v213->x; /*0x967766*/
                        v215 = v213->y; /*0x967768*/
                        v216 = v213->z; /*0x96776b*/
                        v406.x = v214; /*0x96776e*/
                        v406.y = v215; /*0x967781*/
                        v406.z = v216; /*0x967788*/
                        v394 = sub_47D9E0(&v388.x, (float *)&x_low); /*0x967794*/
                        v397 = sub_47D9E0(&v388.x, &v388.x); /*0x9677a4*/
                        v400 = sub_47D9E0(&v388.x, (float *)&v402); /*0x9677b9*/
                        v389 = *(float *)&v386; /*0x9677cb*/
                        v367 = v387; /*0x9677d8*/
                        v217 = sub_47D9E0(&v388.x, &v406.x); /*0x9677f0*/
                        v205 = v389; /*0x9677f0*/
                        v206 = v387; /*0x967801*/
                        v330 = v217 - v394 * v389 - v400 * v387; /*0x967805*/
                        if ( !v368 ) /*0x967809*/
                        {
                          *((float *)&v386 + 1) = v330 / v397; /*0x967813*/
                          goto LABEL_328; /*0x967817*/
                        }
                        v218 = sub_47D9E0(&v388.x, (float *)v422); /*0x96782c*/
                        v208 = (v218 + v330) / v397; /*0x967835*/
                        goto LABEL_327; /*0x967839*/
                      }
                      v211 = (double)v324; /*0x967714*/
                    }
                    else
                    {
                      v211 = (double)-v16; /*0x967703*/
                    }
                    v140 = v211 * a2[0xF]; /*0x967718*/
                    goto LABEL_339; /*0x967718*/
                  case 0xA: /*0x966b67*/
                    v388.x = x - v418; /*0x967850*/
                    v388.y = y - v435[0]; /*0x967875*/
                    v388.z = *(double *)&v431.x - v434[0]; /*0x96789c*/
                    v407 = v388; /*0x9678a4*/
                    v391 = *NiPoint3_CrossProduct(v10, &out, &v407); /*0x9678b2*/
                    v404 = *NiPoint3_CrossProduct((NiPoint3 *)(a2 + 7), &v416, &v407); /*0x9678de*/
                    v219 = NiPoint3_CrossProduct((NiPoint3 *)(a2 + 0xA), &v431, &v407); /*0x96790c*/
                    v220 = 0.0; /*0x967911*/
                    v402 = *(double *)&v219->x; /*0x96791c*/
                    v403 = LODWORD(v219->z); /*0x967932*/
                    if ( *(float *)&v401 <= 0.0 ) /*0x96793e*/
                    {
                      if ( *(float *)&v401 >= 0.0 ) /*0x967959*/
                        *(float *)&v386 = 0.0; /*0x967973*/
                      else
                        *(float *)&v386 = (double)-v16 * *v325; /*0x96796d*/
                    }
                    else
                    {
                      *(float *)&v386 = (double)v324 * *v325; /*0x96794c*/
                    }
                    if ( *(float *)&v395 <= 0.0 ) /*0x967982*/
                    {
                      if ( *(float *)&v395 < 0.0 ) /*0x9679a2*/
                        v220 = (double)v324 * a2[0xF]; /*0x9679ae*/
                    }
                    else
                    {
                      v220 = (double)-v16 * a2[0xF]; /*0x967996*/
                    }
                    v387 = v220; /*0x9679b8*/
                    v221 = sub_47DA10((float *)v438, *a8, (float *)&v413); /*0x9679cb*/
                    sub_4121D0(&v411.x, v221); /*0x9679db*/
                    v222 = NiPoint3_CrossProduct(&v411, &v432, &v407); /*0x9679f7*/
                    v223 = v222->x; /*0x9679fc*/
                    v224 = v222->y; /*0x9679fe*/
                    v225 = v222->z; /*0x967a01*/
                    v407.x = v223; /*0x967a04*/
                    v407.y = v224; /*0x967a17*/
                    v407.z = v225; /*0x967a1e*/
                    *(float *)&v395 = sub_47D9E0(&v404.x, &v391.x); /*0x967a2a*/
                    *(float *)&v398 = sub_47D9E0(&v404.x, &v404.x); /*0x967a3d*/
                    *(float *)&v401 = sub_47D9E0(&v404.x, (float *)&v402); /*0x967a58*/
                    v389 = *(float *)&v386; /*0x967a6a*/
                    v367 = v387; /*0x967a7a*/
                    v226 = sub_47D9E0(&v404.x, &v407.x); /*0x967a92*/
                    v205 = v389; /*0x967a92*/
                    v206 = v387; /*0x967aa3*/
                    v331 = v226 - *(float *)&v395 * v389 - *(float *)&v401 * v387; /*0x967aa7*/
                    if ( !v368 ) /*0x967aab*/
                    {
                      *((float *)&v386 + 1) = v331 / *(float *)&v398; /*0x967ab8*/
                      goto LABEL_328; /*0x967abc*/
                    }
                    v227 = sub_47D9E0(&v404.x, (float *)v422); /*0x967ad4*/
                    v208 = (v227 + v331) / *(float *)&v398; /*0x967add*/
                    goto LABEL_327; /*0x967ae4*/
                  case 0xB: /*0x966b67*/
                    if ( v396 <= v140 ) /*0x967afa*/
                    {
                      if ( v396 >= v140 ) /*0x967b19*/
                        *(float *)&v386 = v140; /*0x967b27*/
                      else
                        *(float *)&v386 = (double)v324 * *v325; /*0x967b21*/
                    }
                    else
                    {
                      *(float *)&v386 = (double)-v16 * *v325; /*0x967b0c*/
                    }
                    if ( v393 <= v140 ) /*0x967b36*/
                    {
                      if ( v393 >= v140 ) /*0x967b49*/
                      {
LABEL_364:
                        *((float *)&v386 + 1) = v140; /*0x967b5a*/
                        v229 = sub_47DA10((float *)v436, *a8, (float *)&v413); /*0x967b74*/
                        sub_4121D0(&v411.x, v229); /*0x967b84*/
                        v230 = NiPoint3_CrossProduct(&v411, &out, &other); /*0x967ba0*/
                        v231 = v230->y; /*0x967ba7*/
                        other.x = v230->x; /*0x967baa*/
                        v232 = v230->z; /*0x967bb1*/
                        other.y = v231; /*0x967bbb*/
                        other.z = v232; /*0x967bca*/
                        v393 = sub_47D9E0((float *)&v420, &v425.x); /*0x967bd6*/
                        v396 = sub_47D9E0((float *)&v420, &v423.x); /*0x967bee*/
                        v399 = sub_47D9E0((float *)&v420, (float *)&v420); /*0x967c01*/
                        v389 = *(float *)&v386; /*0x967c13*/
                        v390 = *((float *)&v386 + 1); /*0x967c23*/
                        v233 = sub_47D9E0((float *)&v420, &other.x); /*0x967c3b*/
                        v234 = v389; /*0x967c3b*/
                        v235 = v390; /*0x967c49*/
                        v332 = v233 - v393 * v389 - v396 * v390; /*0x967c4d*/
                        if ( !v368 ) /*0x967c51*/
                        {
                          v387 = v332 / v399; /*0x967c5e*/
LABEL_368:
                          v238 = v387; /*0x967ca1*/
                          v239 = v392; /*0x967caa*/
                          *a9 = *a8 * *a3 + *v392 + a2[4] * v234 + a2[7] * v235 + a2[0xA] * v387; /*0x967cc9*/
                          a9[1] = *a8 * a3[1] + v239[1] + a2[5] * v234 + a2[8] * v235 + a2[0xB] * v238; /*0x967ce8*/
                          a9[2] = v238 * a2[0xC] + v235 * a2[9] + v234 * a2[6] + *a8 * a3[2] + v239[2]; /*0x967d0a*/
LABEL_395:
                          JUMPOUT(0x968164); /*0x968164*/
                        }
                        *(double *)&v404.x = v332; /*0x967c7b*/
                        v236 = sub_47D9E0((float *)&v420, (float *)v422); /*0x967c82*/
                        v237 = (*(double *)&v404.x - v236) / v399; /*0x967c8e*/
LABEL_367:
                        v387 = v237; /*0x967c95*/
                        v234 = v389; /*0x967c99*/
                        v235 = v390; /*0x967c9d*/
                        goto LABEL_368; /*0x967c9d*/
                      }
                      v228 = (double)-v16; /*0x967b53*/
                    }
                    else
                    {
                      v228 = (double)v324; /*0x967b3c*/
                    }
                    v140 = v228 * a2[0xE]; /*0x967b57*/
                    goto LABEL_364; /*0x967b57*/
                  case 0xC: /*0x966b67*/
                    if ( v397 <= v140 ) /*0x967d23*/
                    {
                      if ( v397 >= v140 ) /*0x967d42*/
                        *(float *)&v386 = v140; /*0x967d50*/
                      else
                        *(float *)&v386 = (double)v324 * *v325; /*0x967d4a*/
                    }
                    else
                    {
                      *(float *)&v386 = (double)-v16 * *v325; /*0x967d35*/
                    }
                    if ( v394 <= v140 ) /*0x967d5f*/
                    {
                      if ( v394 >= v140 ) /*0x967d72*/
                      {
LABEL_379:
                        *((float *)&v386 + 1) = v140; /*0x967d83*/
                        v241 = sub_47DA10((float *)v435, *a8, (float *)&v413); /*0x967d9d*/
                        sub_4121D0(&v411.x, v241); /*0x967dad*/
                        v242 = NiPoint3_CrossProduct(&v411, &out, &v406); /*0x967dc9*/
                        v243 = v242->x; /*0x967dce*/
                        v244 = v242->y; /*0x967dd0*/
                        v245 = v242->z; /*0x967dd3*/
                        v406.x = v243; /*0x967dd6*/
                        v406.y = v244; /*0x967dec*/
                        v406.z = v245; /*0x967df3*/
                        v394 = sub_47D9E0((float *)&v402, (float *)&x_low); /*0x967dff*/
                        v397 = sub_47D9E0((float *)&v402, &v388.x); /*0x967e14*/
                        v400 = sub_47D9E0((float *)&v402, (float *)&v402); /*0x967e27*/
                        v389 = *(float *)&v386; /*0x967e39*/
                        v390 = *((float *)&v386 + 1); /*0x967e49*/
                        v246 = sub_47D9E0((float *)&v402, &v406.x); /*0x967e61*/
                        v234 = v389; /*0x967e61*/
                        v235 = v390; /*0x967e6f*/
                        v333 = v246 - v394 * v389 - v397 * v390; /*0x967e73*/
                        if ( !v368 ) /*0x967e77*/
                        {
                          v387 = v333 / v400; /*0x967e84*/
                          goto LABEL_368; /*0x967e88*/
                        }
                        v247 = sub_47D9E0((float *)&v402, (float *)v422); /*0x967ea0*/
                        v237 = (v247 + v333) / v400; /*0x967ea9*/
                        goto LABEL_367; /*0x967eb0*/
                      }
                      v240 = (double)-v16; /*0x967d7c*/
                    }
                    else
                    {
                      v240 = (double)v324; /*0x967d65*/
                    }
                    v140 = v240 * a2[0xE]; /*0x967d80*/
                    goto LABEL_379; /*0x967d80*/
                  case 0xD: /*0x966b67*/
                    v388.x = x - v418; /*0x967ec7*/
                    v388.y = y - v435[0]; /*0x967eec*/
                    v388.z = *(double *)&v431.x - v434[0]; /*0x967f13*/
                    v407 = v388; /*0x967f1b*/
                    v391 = *NiPoint3_CrossProduct(v10, &out, &v407); /*0x967f29*/
                    v404 = *NiPoint3_CrossProduct((NiPoint3 *)(a2 + 7), &v416, &v407); /*0x967f55*/
                    v248 = NiPoint3_CrossProduct((NiPoint3 *)(a2 + 0xA), &v431, &v407); /*0x967f83*/
                    v249 = 0.0; /*0x967f88*/
                    v402 = *(double *)&v248->x; /*0x967f93*/
                    v403 = LODWORD(v248->z); /*0x967fa9*/
                    if ( *(float *)&v398 <= 0.0 ) /*0x967fb5*/
                    {
                      if ( *(float *)&v398 >= 0.0 ) /*0x967fd8*/
                        *(float *)&v386 = 0.0; /*0x967fea*/
                      else
                        *(float *)&v386 = (double)v324 * *v325; /*0x967fe4*/
                    }
                    else
                    {
                      *(float *)&v386 = (double)-v16 * *v325; /*0x967fcb*/
                    }
                    if ( *(float *)&v395 <= 0.0 ) /*0x967ff9*/
                    {
                      if ( *(float *)&v395 < 0.0 ) /*0x968013*/
                        v249 = (double)-v16 * a2[0xE]; /*0x968025*/
                    }
                    else
                    {
                      v249 = (double)v324 * a2[0xE]; /*0x968007*/
                    }
                    *((float *)&v386 + 1) = v249; /*0x96802f*/
                    v250 = sub_47DA10((float *)v434, *a8, (float *)&v413); /*0x968042*/
                    sub_4121D0(&v411.x, v250); /*0x968052*/
                    v251 = NiPoint3_CrossProduct(&v411, &v432, &v407); /*0x96806e*/
                    v252 = v251->x; /*0x968073*/
                    v253 = v251->y; /*0x968075*/
                    v254 = v251->z; /*0x968078*/
                    v407.x = v252; /*0x96807b*/
                    v407.y = v253; /*0x96808e*/
                    v407.z = v254; /*0x968095*/
                    *(float *)&v395 = sub_47D9E0((float *)&v402, &v391.x); /*0x9680a1*/
                    *(float *)&v398 = sub_47D9E0((float *)&v402, &v404.x); /*0x9680b9*/
                    *(float *)&v401 = sub_47D9E0((float *)&v402, (float *)&v402); /*0x9680cf*/
                    v389 = *(float *)&v386; /*0x9680e1*/
                    v390 = *((float *)&v386 + 1); /*0x9680f1*/
                    v255 = sub_47D9E0((float *)&v402, &v407.x); /*0x968109*/
                    v234 = v389; /*0x968109*/
                    v235 = v390; /*0x96811a*/
                    v334 = v255 - *(float *)&v395 * v389 - *(float *)&v398 * v390; /*0x96811e*/
                    if ( !v368 ) /*0x968122*/
                    {
                      v387 = v334 / *(float *)&v401; /*0x96812f*/
                      goto LABEL_368; /*0x968133*/
                    }
                    v256 = sub_47D9E0((float *)&v402, (float *)v422); /*0x96814b*/
                    v237 = (v256 + v334) / *(float *)&v401; /*0x968154*/
                    goto LABEL_367; /*0x96815b*/
                  default:
                    JUMPOUT(0x968160); /*0x968160*/
                }
              }
              v361 = *(float *)&v310 + v129; /*0x966771*/
              v132 = v361; /*0x966775*/
              if ( v361 <= v130 ) /*0x966780*/
                goto LABEL_219; /*0x966780*/
              if ( v30 * v131 + v132 <= v130 ) /*0x966795*/
              {
                v133 = *(float *)&v390; /*0x96679f*/
                v312 = (v130 - v132) / v131; /*0x9667a1*/
                if ( *a8 < (double)v312 ) /*0x9667b2*/
                {
                  *a8 = v312; /*0x9667b8*/
                  v16 = 1; /*0x9667ba*/
                  v18 = 0xC; /*0x9667bf*/
                  v368 = 1; /*0x9667c4*/
                  v30 = a1; /*0x9667c8*/
                  v324 = 1; /*0x9667ca*/
                  goto LABEL_219; /*0x9667ce*/
                }
LABEL_224:
                v131 = v133; /*0x96695e*/
                v30 = a1; /*0x966963*/
                goto LABEL_219; /*0x966965*/
              }
              return 0; /*0x965fc6*/
            }
            v131 = *(float *)&v390; /*0x9667d3*/
            v134 = -*(float *)&v309; /*0x9667d5*/
            if ( v134 <= v129 ) /*0x9667de*/
              goto LABEL_219; /*0x9667de*/
            *(float *)&v313 = -v391.z; /*0x9667ec*/
            if ( *(float *)&v313 <= 0.0 ) /*0x9667ff*/
            {
              if ( a1 * v131 + v129 >= v134 ) /*0x966815*/
              {
                v133 = *(float *)&v390; /*0x96681f*/
                v314 = -((v130 + v129) / v131); /*0x966823*/
                if ( *a8 < (double)v314 ) /*0x966834*/
                {
                  *a8 = v314; /*0x96683a*/
                  v16 = 0xFFFFFFFF; /*0x96683c*/
                  v18 = 0xC; /*0x966842*/
                  v368 = 0; /*0x966847*/
                  v30 = a1; /*0x96684f*/
                  v324 = 0xFFFFFFFF; /*0x966851*/
                  goto LABEL_219; /*0x966855*/
                }
                goto LABEL_224; /*0x966834*/
              }
              return 0; /*0x966057*/
            }
            v362 = *(float *)&v313 + v129; /*0x966859*/
            if ( v362 >= v134 ) /*0x966868*/
            {
              v30 = a1; /*0x966973*/
              goto LABEL_219; /*0x966975*/
            }
            if ( a1 * v131 + v362 >= v134 ) /*0x966882*/
            {
              v135 = *(float *)&v390; /*0x96688a*/
              v315 = -((v362 + v130) / v131); /*0x966892*/
              if ( *a8 < (double)v315 ) /*0x9668a3*/
              {
                v16 = 0xFFFFFFFF; /*0x9668a9*/
                *a8 = v315; /*0x9668ac*/
                v18 = 0xC; /*0x9668ae*/
                v368 = 1; /*0x9668b3*/
                v324 = 0xFFFFFFFF; /*0x9668b7*/
              }
              v30 = a1; /*0x9668c4*/
              v131 = v135; /*0x9668c8*/
              v122 = *(float *)&v389; /*0x9668c8*/
              goto LABEL_219; /*0x9668c8*/
            }
            return 0; /*0x9660d8*/
          }
          v122 = *(float *)&v389; /*0x966525*/
          v124 = -*(float *)&v304; /*0x966527*/
          if ( v124 <= v120 ) /*0x966530*/
            goto LABEL_200; /*0x966530*/
          if ( v391.z <= 0.0 ) /*0x966541*/
          {
            if ( v30 * v122 + v120 >= v124 ) /*0x966554*/
            {
              v307 = -((v121 + v120) / v122); /*0x966562*/
              if ( *a8 < (double)v307 ) /*0x966573*/
              {
                v16 = 0xFFFFFFFF; /*0x966575*/
                *a8 = v307; /*0x966578*/
                v18 = 0xB; /*0x96657a*/
                v368 = 0; /*0x96657f*/
                v324 = 0xFFFFFFFF; /*0x966587*/
              }
              goto LABEL_200; /*0x96658b*/
            }
            return 0; /*0x966554*/
          }
          v359 = *(double *)&out.x + v120; /*0x966596*/
          v125 = v359; /*0x96659a*/
          if ( v359 >= v124 ) /*0x9665a5*/
            goto LABEL_200; /*0x9665a5*/
          if ( v30 * v122 + v125 >= v124 ) /*0x9665b8*/
          {
            v308 = -((v121 + v125) / v122); /*0x9665c4*/
            if ( *a8 < (double)v308 ) /*0x9665d5*/
            {
              v16 = 0xFFFFFFFF; /*0x9665d7*/
              *a8 = v308; /*0x9665da*/
              v18 = 0xB; /*0x9665dc*/
              v368 = 1; /*0x9665e1*/
              v324 = 0xFFFFFFFF; /*0x9665e5*/
            }
            goto LABEL_200; /*0x9665e5*/
          }
          return 0; /*0x965571*/
        }
        if ( v30 * *(float *)&v384 + v116 >= v115 ) /*0x966319*/
        {
          v303 = -((v111 + v116) / *(float *)&v384); /*0x966325*/
          if ( *a8 < (double)v303 ) /*0x966336*/
          {
            v16 = 0xFFFFFFFF; /*0x966338*/
            *a8 = v303; /*0x96633b*/
            v18 = 0xA; /*0x96633d*/
            v368 = 1; /*0x966342*/
            v324 = 0xFFFFFFFF; /*0x966346*/
          }
          goto LABEL_182; /*0x966346*/
        }
        return 0; /*0x965b29*/
      }
      if ( a1 * v101 + v99 < v104 ) /*0x966041*/
        return 0; /*0x966041*/
      v103 = *(float *)&v383; /*0x96605c*/
      v295 = -((v100 + v99) / v101); /*0x966060*/
      if ( *a8 < (double)v295 ) /*0x966071*/
      {
        *a8 = v295; /*0x966077*/
        v16 = 0xFFFFFFFF; /*0x966079*/
        v18 = 9; /*0x96607f*/
        v368 = 0; /*0x966084*/
        v30 = a1; /*0x96608c*/
        v324 = 0xFFFFFFFF; /*0x96608e*/
        goto LABEL_160; /*0x966092*/
      }
    }
    else
    {
      v101 = *(float *)&v383; /*0x965f0a*/
      *(float *)&v291 = -v391.y; /*0x965f12*/
      if ( *(float *)&v291 >= 0.0 ) /*0x965f25*/
      {
        if ( v30 * *(float *)&v383 + v99 > v100 ) /*0x965f38*/
          return 0; /*0x965f50*/
        v292 = (v100 - v99) / v101; /*0x965f57*/
        if ( *a8 < (double)v292 ) /*0x965f68*/
        {
          v16 = 1; /*0x965f6e*/
          *a8 = v292; /*0x965f70*/
          v18 = 9; /*0x965f72*/
          v368 = 0; /*0x965f77*/
          v324 = 1; /*0x965f7f*/
        }
        goto LABEL_160; /*0x965f83*/
      }
      v352 = *(float *)&v291 + v99; /*0x965f8a*/
      v102 = v352; /*0x965f8e*/
      if ( v352 <= v100 ) /*0x965f99*/
        goto LABEL_160; /*0x965f99*/
      if ( v30 * v101 + v102 > v100 ) /*0x965fae*/
        return 0; /*0x965fae*/
      v103 = *(float *)&v383; /*0x965fcb*/
      v293 = (v100 - v102) / v101; /*0x965fcd*/
      if ( *a8 < (double)v293 ) /*0x965fde*/
      {
        *a8 = v293; /*0x965fe4*/
        v16 = 1; /*0x965fe6*/
        v18 = 9; /*0x965feb*/
        v368 = 1; /*0x965ff0*/
        v30 = a1; /*0x965ff4*/
        v324 = 1; /*0x965ff6*/
        goto LABEL_160; /*0x965ffa*/
      }
    }
    v101 = v103; /*0x9661f4*/
    v30 = a1; /*0x9661f4*/
    goto LABEL_160; /*0x9661f6*/
  }
  v79 = *(float *)&v278; /*0x965968*/
  *(float *)&v279 = -v391.x; /*0x965970*/
  if ( *(float *)&v279 < 0.0 ) /*0x965983*/
  {
    v346 = v77 + *(float *)&v279; /*0x965a05*/
    v80 = v346; /*0x965a09*/
    if ( v346 <= v78 ) /*0x965a14*/
      goto LABEL_119; /*0x965a14*/
    if ( v30 * *(float *)&v382 + v80 > v78 ) /*0x965a2b*/
      return 0; /*0x965a2b*/
    v281 = (v78 - v80) / *(float *)&v382; /*0x965a44*/
    if ( *a8 < (double)v281 ) /*0x965a55*/
    {
      v16 = 1; /*0x965a5b*/
      *a8 = v281; /*0x965a5d*/
      v18 = 7; /*0x965a5f*/
      v368 = 1; /*0x965a64*/
      v324 = 1; /*0x965a68*/
    }
    goto LABEL_119; /*0x965a6c*/
  }
  if ( v30 * *(float *)&v382 + v77 <= v79 ) /*0x965998*/
  {
    v280 = (v79 - v77) / *(float *)&v382; /*0x9659a4*/
    if ( *a8 < (double)v280 ) /*0x9659b5*/
    {
      v16 = 1; /*0x9659bb*/
      *a8 = v280; /*0x9659bd*/
      v18 = 7; /*0x9659bf*/
      v368 = 0; /*0x9659c4*/
      v324 = 1; /*0x9659cc*/
    }
    goto LABEL_119; /*0x9659d0*/
  }
  return 0; /*0x964dd9*/
}
