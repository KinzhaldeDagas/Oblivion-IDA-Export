BOOL __thiscall sub_97AFC0(int this, int a2)
{
  double v4; // st7
  float *v5; // ecx
  float *v6; // eax
  float *v7; // edx
  double v8; // st7
  float *v9; // ecx
  double y; // st7
  double x; // st6
  double z; // st5
  double v13; // st4
  double v14; // st3
  double v15; // st2
  double v16; // st2
  double v17; // st2
  double v18; // st2
  double v20; // st2
  double v21; // st2
  double v22; // st2
  double v23; // st2
  double v24; // st2
  double v25; // st2
  double v26; // st2
  double v27; // st2
  double v28; // st2
  double v29; // st2
  double v30; // st2
  double v31; // st2
  double v32; // st2
  double v33; // st2
  double v34; // st2
  double v35; // st2
  double v36; // st2
  double v37; // st2
  double v38; // st2
  double v39; // st7
  double v40; // st6
  double v41; // st6
  double v42; // st5
  double v43; // st4
  double v44; // st4
  double v45; // st6
  double v46; // st3
  double v47; // st6
  double v48; // st4
  double v49; // st5
  double v50; // st3
  double v51; // st4
  double v52; // st5
  double v53; // st7
  double v54; // st6
  double v55; // st5
  double v56; // st6
  double v57; // st5
  double v58; // st4
  double v59; // st3
  double v60; // st3
  double v61; // st5
  double v62; // st3
  double v63; // st5
  double v64; // st3
  double v65; // st5
  double v66; // st5
  double v67; // st5
  double v68; // st4
  double v69; // st3
  double v70; // st3
  double v71; // st5
  double v72; // st3
  double v73; // st3
  bool v74; // c0
  bool v75; // c3
  double v76; // st3
  double v77; // st3
  double v78; // st3
  double v79; // st2
  double v80; // st3
  double v81; // st2
  double v82; // st3
  double v83; // st2
  double v84; // rt0
  double v85; // st3
  double v86; // st5
  double v87; // st3
  double v88; // st3
  double v89; // st2
  double v90; // st3
  double v91; // st2
  double v92; // st3
  double v93; // st2
  double v94; // st3
  double v95; // st3
  double v96; // st3
  double v97; // st2
  double v98; // st3
  double v99; // rt1
  double v100; // st7
  double v101; // rtt
  double v102; // st4
  double v103; // st4
  double v104; // st2
  double v105; // st3
  double v106; // st4
  double v107; // st2
  double v108; // st6
  double v109; // st3
  double v110; // st4
  double v111; // st2
  double v112; // st3
  double v113; // st4
  double v114; // rtt
  double v115; // st5
  double v116; // st7
  double v117; // st5
  double v118; // st5
  double v119; // st4
  double v120; // st3
  double v121; // st3
  double v122; // st5
  double v123; // st3
  double v124; // st5
  double v125; // st3
  double v126; // st5
  double v127; // st5
  double v128; // st5
  double v129; // st4
  double v130; // st3
  double v131; // st3
  double v132; // st5
  double v133; // st2
  double v134; // st6
  double v135; // st7
  double v136; // st7
  double v137; // st4
  double v138; // rtt
  double v139; // st6
  double v140; // st7
  double v141; // st4
  double v142; // rt1
  double v143; // st7
  double v144; // st4
  double v145; // rtt
  double v146; // st6
  float *v147; // ebp
  double v148; // st7
  double v149; // st4
  double v150; // rt1
  double v151; // st6
  double v152; // st7
  double v153; // st4
  double v154; // rtt
  double v155; // st7
  double v156; // st4
  double v157; // rt1
  double v158; // st6
  float v159; // [esp+Ch] [ebp-6Ch]
  float v160; // [esp+Ch] [ebp-6Ch]
  float v161; // [esp+Ch] [ebp-6Ch]
  float v162; // [esp+Ch] [ebp-6Ch]
  float v163; // [esp+Ch] [ebp-6Ch]
  float v164; // [esp+Ch] [ebp-6Ch]
  float v165; // [esp+Ch] [ebp-6Ch]
  float v166; // [esp+Ch] [ebp-6Ch]
  float v167; // [esp+Ch] [ebp-6Ch]
  float v168; // [esp+Ch] [ebp-6Ch]
  float v169; // [esp+Ch] [ebp-6Ch]
  float v170; // [esp+Ch] [ebp-6Ch]
  float v171; // [esp+Ch] [ebp-6Ch]
  float v172; // [esp+Ch] [ebp-6Ch]
  float v173; // [esp+Ch] [ebp-6Ch]
  float v174; // [esp+Ch] [ebp-6Ch]
  float v175; // [esp+10h] [ebp-68h]
  float v176; // [esp+10h] [ebp-68h]
  float v177; // [esp+10h] [ebp-68h]
  float *v178; // [esp+14h] [ebp-64h]
  float v179; // [esp+14h] [ebp-64h]
  float *v180; // [esp+18h] [ebp-60h]
  float v181; // [esp+1Ch] [ebp-5Ch]
  float v182; // [esp+1Ch] [ebp-5Ch]
  float v183; // [esp+1Ch] [ebp-5Ch]
  float v184; // [esp+1Ch] [ebp-5Ch]
  float v185; // [esp+1Ch] [ebp-5Ch]
  float v186; // [esp+1Ch] [ebp-5Ch]
  float v187; // [esp+1Ch] [ebp-5Ch]
  float v188; // [esp+1Ch] [ebp-5Ch]
  float v189; // [esp+1Ch] [ebp-5Ch]
  float v190; // [esp+1Ch] [ebp-5Ch]
  float v191; // [esp+1Ch] [ebp-5Ch]
  float v192; // [esp+1Ch] [ebp-5Ch]
  float v193; // [esp+1Ch] [ebp-5Ch]
  float v194; // [esp+1Ch] [ebp-5Ch]
  float v195; // [esp+1Ch] [ebp-5Ch]
  float v196; // [esp+1Ch] [ebp-5Ch]
  float v197; // [esp+1Ch] [ebp-5Ch]
  float v198; // [esp+1Ch] [ebp-5Ch]
  float v199; // [esp+1Ch] [ebp-5Ch]
  float v200; // [esp+1Ch] [ebp-5Ch]
  float v201; // [esp+1Ch] [ebp-5Ch]
  float v202; // [esp+1Ch] [ebp-5Ch]
  float v203; // [esp+1Ch] [ebp-5Ch]
  float *v204; // [esp+20h] [ebp-58h]
  float v205; // [esp+20h] [ebp-58h]
  float v206; // [esp+20h] [ebp-58h]
  float v207; // [esp+20h] [ebp-58h]
  float v208; // [esp+20h] [ebp-58h]
  float v209; // [esp+20h] [ebp-58h]
  float v210; // [esp+20h] [ebp-58h]
  float v211; // [esp+20h] [ebp-58h]
  float v212; // [esp+20h] [ebp-58h]
  float v213; // [esp+20h] [ebp-58h]
  float v214; // [esp+20h] [ebp-58h]
  float v215; // [esp+20h] [ebp-58h]
  float v216; // [esp+20h] [ebp-58h]
  float v217; // [esp+20h] [ebp-58h]
  float v218; // [esp+20h] [ebp-58h]
  float v219; // [esp+20h] [ebp-58h]
  float v220; // [esp+20h] [ebp-58h]
  float v221; // [esp+20h] [ebp-58h]
  float v222; // [esp+20h] [ebp-58h]
  NiPoint3 out; // [esp+24h] [ebp-54h] BYREF
  float v224; // [esp+30h] [ebp-48h]
  float v225; // [esp+34h] [ebp-44h]
  float v226; // [esp+38h] [ebp-40h]
  NiPoint3 v227; // [esp+3Ch] [ebp-3Ch] BYREF
  NiPoint3 other; // [esp+48h] [ebp-30h] BYREF
  float v229; // [esp+54h] [ebp-24h]
  float v230; // [esp+58h] [ebp-20h]
  float v231; // [esp+5Ch] [ebp-1Ch]
  float v232; // [esp+60h] [ebp-18h]
  float v233; // [esp+64h] [ebp-14h]
  float v234; // [esp+68h] [ebp-10h]
  float v235; // [esp+6Ch] [ebp-Ch]
  float v236; // [esp+70h] [ebp-8h]
  float v237; // [esp+74h] [ebp-4h]
  float v238; // [esp+7Ch] [ebp+4h]
  float v239; // [esp+7Ch] [ebp+4h]
  float v240; // [esp+7Ch] [ebp+4h]
  float v241; // [esp+7Ch] [ebp+4h]
  float v242; // [esp+7Ch] [ebp+4h]
  float v243; // [esp+7Ch] [ebp+4h]
  float v244; // [esp+7Ch] [ebp+4h]
  float v245; // [esp+7Ch] [ebp+4h]
  float v246; // [esp+7Ch] [ebp+4h]
  float v247; // [esp+7Ch] [ebp+4h]
  float v248; // [esp+7Ch] [ebp+4h]
  float v249; // [esp+7Ch] [ebp+4h]
  float v250; // [esp+7Ch] [ebp+4h]
  float v251; // [esp+7Ch] [ebp+4h]
  float v252; // [esp+7Ch] [ebp+4h]
  float v253; // [esp+7Ch] [ebp+4h]
  float v254; // [esp+7Ch] [ebp+4h]
  float v255; // [esp+7Ch] [ebp+4h]
  float v256; // [esp+7Ch] [ebp+4h]
  float v257; // [esp+7Ch] [ebp+4h]
  float v258; // [esp+7Ch] [ebp+4h]
  float v259; // [esp+7Ch] [ebp+4h]
  float v260; // [esp+7Ch] [ebp+4h]
  float v261; // [esp+7Ch] [ebp+4h]
  float v262; // [esp+7Ch] [ebp+4h]
  float v263; // [esp+7Ch] [ebp+4h]
  float v264; // [esp+7Ch] [ebp+4h]
  float v265; // [esp+7Ch] [ebp+4h]
  float v266; // [esp+7Ch] [ebp+4h]
  float v267; // [esp+7Ch] [ebp+4h]
  float v268; // [esp+7Ch] [ebp+4h]
  float v269; // [esp+7Ch] [ebp+4h]
  float v270; // [esp+7Ch] [ebp+4h]
  float v271; // [esp+7Ch] [ebp+4h]
  float v272; // [esp+7Ch] [ebp+4h]
  float v273; // [esp+7Ch] [ebp+4h]
  float v274; // [esp+7Ch] [ebp+4h]
  float v275; // [esp+7Ch] [ebp+4h]
  float v276; // [esp+7Ch] [ebp+4h]
  float v277; // [esp+7Ch] [ebp+4h]
  float v278; // [esp+7Ch] [ebp+4h]
  float v279; // [esp+7Ch] [ebp+4h]
  float v280; // [esp+7Ch] [ebp+4h]
  float v281; // [esp+7Ch] [ebp+4h]
  float v282; // [esp+7Ch] [ebp+4h]
  float v283; // [esp+7Ch] [ebp+4h]
  float v284; // [esp+7Ch] [ebp+4h]
  float v285; // [esp+7Ch] [ebp+4h]
  float v286; // [esp+7Ch] [ebp+4h]
  float v287; // [esp+7Ch] [ebp+4h]
  float v288; // [esp+7Ch] [ebp+4h]
  float v289; // [esp+7Ch] [ebp+4h]
  float v290; // [esp+7Ch] [ebp+4h]
  float v291; // [esp+7Ch] [ebp+4h]
  float v292; // [esp+7Ch] [ebp+4h]
  float v293; // [esp+7Ch] [ebp+4h]
  float v294; // [esp+7Ch] [ebp+4h]
  float v295; // [esp+7Ch] [ebp+4h]
  float v296; // [esp+7Ch] [ebp+4h]
  float v297; // [esp+7Ch] [ebp+4h]
  float v298; // [esp+7Ch] [ebp+4h]
  float v299; // [esp+7Ch] [ebp+4h]
  float v300; // [esp+7Ch] [ebp+4h]
  float v301; // [esp+7Ch] [ebp+4h]
  float v302; // [esp+7Ch] [ebp+4h]
  float v303; // [esp+7Ch] [ebp+4h]
  float v304; // [esp+7Ch] [ebp+4h]
  float v305; // [esp+7Ch] [ebp+4h]
  float v306; // [esp+7Ch] [ebp+4h]
  float v307; // [esp+7Ch] [ebp+4h]
  float v308; // [esp+7Ch] [ebp+4h]
  float v309; // [esp+7Ch] [ebp+4h]
  float v310; // [esp+7Ch] [ebp+4h]
  float v311; // [esp+7Ch] [ebp+4h]
  float v312; // [esp+7Ch] [ebp+4h]
  float v313; // [esp+7Ch] [ebp+4h]
  float v314; // [esp+7Ch] [ebp+4h]
  float v315; // [esp+7Ch] [ebp+4h]
  float v316; // [esp+7Ch] [ebp+4h]
  float v317; // [esp+7Ch] [ebp+4h]
  float v318; // [esp+7Ch] [ebp+4h]
  float v319; // [esp+7Ch] [ebp+4h]
  float v320; // [esp+7Ch] [ebp+4h]
  float v321; // [esp+7Ch] [ebp+4h]
  float v322; // [esp+7Ch] [ebp+4h]
  float v323; // [esp+7Ch] [ebp+4h]
  float v324; // [esp+7Ch] [ebp+4h]
  float v325; // [esp+7Ch] [ebp+4h]
  float v326; // [esp+7Ch] [ebp+4h]
  float v327; // [esp+7Ch] [ebp+4h]
  float v328; // [esp+7Ch] [ebp+4h]
  float v329; // [esp+7Ch] [ebp+4h]
  float v330; // [esp+7Ch] [ebp+4h]
  float v331; // [esp+7Ch] [ebp+4h]
  float v332; // [esp+7Ch] [ebp+4h]
  float v333; // [esp+7Ch] [ebp+4h]
  float v334; // [esp+7Ch] [ebp+4h]
  float v335; // [esp+7Ch] [ebp+4h]
  float v336; // [esp+7Ch] [ebp+4h]
  float v337; // [esp+7Ch] [ebp+4h]
  float v338; // [esp+7Ch] [ebp+4h]
  float v339; // [esp+7Ch] [ebp+4h]
  float v340; // [esp+7Ch] [ebp+4h]
  float v341; // [esp+7Ch] [ebp+4h]
  float v342; // [esp+7Ch] [ebp+4h]
  float v343; // [esp+7Ch] [ebp+4h]
  float v344; // [esp+7Ch] [ebp+4h]
  float v345; // [esp+7Ch] [ebp+4h]
  float v346; // [esp+7Ch] [ebp+4h]
  float v347; // [esp+7Ch] [ebp+4h]
  float v348; // [esp+7Ch] [ebp+4h]
  float v349; // [esp+7Ch] [ebp+4h]
  float v350; // [esp+7Ch] [ebp+4h]
  float v351; // [esp+7Ch] [ebp+4h]
  float v352; // [esp+7Ch] [ebp+4h]
  float v353; // [esp+7Ch] [ebp+4h]
  float v354; // [esp+7Ch] [ebp+4h]
  float v355; // [esp+7Ch] [ebp+4h]
  float v356; // [esp+7Ch] [ebp+4h]
  float v357; // [esp+7Ch] [ebp+4h]
  float v358; // [esp+7Ch] [ebp+4h]
  float v359; // [esp+7Ch] [ebp+4h]
  float v360; // [esp+7Ch] [ebp+4h]
  float v361; // [esp+7Ch] [ebp+4h]
  float v362; // [esp+7Ch] [ebp+4h]
  float v363; // [esp+7Ch] [ebp+4h]
  float v364; // [esp+7Ch] [ebp+4h]
  float v365; // [esp+7Ch] [ebp+4h]
  float v366; // [esp+7Ch] [ebp+4h]
  float v367; // [esp+7Ch] [ebp+4h]
  float v368; // [esp+7Ch] [ebp+4h]
  float v369; // [esp+7Ch] [ebp+4h]
  float v370; // [esp+7Ch] [ebp+4h]
  float v371; // [esp+7Ch] [ebp+4h]
  float v372; // [esp+7Ch] [ebp+4h]
  float v373; // [esp+7Ch] [ebp+4h]
  float v374; // [esp+7Ch] [ebp+4h]
  float v375; // [esp+7Ch] [ebp+4h]
  float v376; // [esp+7Ch] [ebp+4h]
  float v377; // [esp+7Ch] [ebp+4h]
  float v378; // [esp+7Ch] [ebp+4h]
  float v379; // [esp+7Ch] [ebp+4h]
  float v380; // [esp+7Ch] [ebp+4h]
  float v381; // [esp+7Ch] [ebp+4h]
  float v382; // [esp+7Ch] [ebp+4h]
  float v383; // [esp+7Ch] [ebp+4h]
  float v384; // [esp+7Ch] [ebp+4h]
  float v385; // [esp+7Ch] [ebp+4h]
  float v386; // [esp+7Ch] [ebp+4h]
  float v387; // [esp+7Ch] [ebp+4h]
  float v388; // [esp+7Ch] [ebp+4h]
  float v389; // [esp+7Ch] [ebp+4h]
  float v390; // [esp+7Ch] [ebp+4h]
  float v391; // [esp+7Ch] [ebp+4h]
  float v392; // [esp+7Ch] [ebp+4h]
  float v393; // [esp+7Ch] [ebp+4h]
  float v394; // [esp+7Ch] [ebp+4h]
  float v395; // [esp+7Ch] [ebp+4h]
  float v396; // [esp+7Ch] [ebp+4h]
  float v397; // [esp+7Ch] [ebp+4h]
  float v398; // [esp+7Ch] [ebp+4h]
  float v399; // [esp+7Ch] [ebp+4h]
  float v400; // [esp+7Ch] [ebp+4h]
  float v401; // [esp+7Ch] [ebp+4h]
  float v402; // [esp+7Ch] [ebp+4h]
  float v403; // [esp+7Ch] [ebp+4h]
  float v404; // [esp+7Ch] [ebp+4h]
  float v405; // [esp+7Ch] [ebp+4h]
  float v406; // [esp+7Ch] [ebp+4h]
  float v407; // [esp+7Ch] [ebp+4h]
  float v408; // [esp+7Ch] [ebp+4h]
  float v409; // [esp+7Ch] [ebp+4h]
  float v410; // [esp+7Ch] [ebp+4h]
  float v411; // [esp+7Ch] [ebp+4h]
  float v412; // [esp+7Ch] [ebp+4h]
  float v413; // [esp+7Ch] [ebp+4h]
  float v414; // [esp+7Ch] [ebp+4h]
  float v415; // [esp+7Ch] [ebp+4h]
  float v416; // [esp+7Ch] [ebp+4h]
  float v417; // [esp+7Ch] [ebp+4h]
  float v418; // [esp+7Ch] [ebp+4h]
  float v419; // [esp+7Ch] [ebp+4h]
  float v420; // [esp+7Ch] [ebp+4h]
  float v421; // [esp+7Ch] [ebp+4h]
  float v422; // [esp+7Ch] [ebp+4h]
  float v423; // [esp+7Ch] [ebp+4h]
  float v424; // [esp+7Ch] [ebp+4h]
  float v425; // [esp+7Ch] [ebp+4h]
  float v426; // [esp+7Ch] [ebp+4h]
  float v427; // [esp+7Ch] [ebp+4h]
  float v428; // [esp+7Ch] [ebp+4h]
  float v429; // [esp+7Ch] [ebp+4h]
  float v430; // [esp+7Ch] [ebp+4h]
  float v431; // [esp+7Ch] [ebp+4h]
  float v432; // [esp+7Ch] [ebp+4h]
  float v433; // [esp+7Ch] [ebp+4h]
  float v434; // [esp+7Ch] [ebp+4h]
  float v435; // [esp+7Ch] [ebp+4h]
  float v436; // [esp+7Ch] [ebp+4h]
  float v437; // [esp+7Ch] [ebp+4h]
  float v438; // [esp+7Ch] [ebp+4h]
  float v439; // [esp+7Ch] [ebp+4h]
  float v440; // [esp+7Ch] [ebp+4h]
  float v441; // [esp+7Ch] [ebp+4h]
  float v442; // [esp+7Ch] [ebp+4h]
  float v443; // [esp+7Ch] [ebp+4h]
  float v444; // [esp+7Ch] [ebp+4h]
  float v445; // [esp+7Ch] [ebp+4h]
  float v446; // [esp+7Ch] [ebp+4h]
  float v447; // [esp+7Ch] [ebp+4h]
  float v448; // [esp+7Ch] [ebp+4h]
  float v449; // [esp+7Ch] [ebp+4h]
  float v450; // [esp+7Ch] [ebp+4h]

  v4 = *(float *)(a2 + 0x3C) - *(float *)(this + 0x3C); /*0x97afd2*/
  v5 = *(float **)(this + 0x78); /*0x97afd5*/
  v6 = (float *)(*(_DWORD *)(a2 + 0x78) + 0x10); /*0x97afd8*/
  other.x = v4; /*0x97afde*/
  v7 = (float *)(a2 + 0x60); /*0x97afe2*/
  v180 = (float *)(a2 + 0x60); /*0x97afe8*/
  other.y = *(float *)(a2 + 0x40) - *(float *)(this + 0x40); /*0x97afef*/
  other.z = *(float *)(a2 + 0x44) - *(float *)(this + 0x44); /*0x97aff9*/
  v227.x = *v6 - v5[4]; /*0x97b002*/
  v227.y = v6[1] - v5[5]; /*0x97b00c*/
  v227.z = v6[2] - v5[6]; /*0x97b016*/
  v8 = v5[1]; /*0x97b01a*/
  v9 = (float *)(a2 + 0x54); /*0x97b01d*/
  v175 = v8; /*0x97b020*/
  v204 = (float *)(a2 + 0x54); /*0x97b024*/
  v229 = *(float *)(a2 + 0x4C) * *(float *)(this + 0x4C) /*0x97b03d*/
       + *(float *)(a2 + 0x48) * *(float *)(this + 0x48)
       + *(float *)(a2 + 0x50) * *(float *)(this + 0x50);
  v230 = *(float *)(a2 + 0x58) * *(float *)(this + 0x4C) /*0x97b055*/
       + *(float *)(a2 + 0x54) * *(float *)(this + 0x48)
       + *(float *)(a2 + 0x5C) * *(float *)(this + 0x50);
  v231 = *(float *)(a2 + 0x64) * *(float *)(this + 0x4C) /*0x97b06d*/
       + *(float *)(a2 + 0x60) * *(float *)(this + 0x48)
       + *(float *)(a2 + 0x68) * *(float *)(this + 0x50);
  y = other.y; /*0x97b071*/
  x = other.x; /*0x97b084*/
  z = other.z; /*0x97b093*/
  out.x = *(float *)(this + 0x50) * other.z + *(float *)(this + 0x48) * other.x + other.y * *(float *)(this + 0x4C); /*0x97b097*/
  v13 = v227.y; /*0x97b09b*/
  v14 = v227.x; /*0x97b0ae*/
  v238 = *(float *)(this + 0x48) * v227.x + v227.y * *(float *)(this + 0x4C) + *(float *)(this + 0x50) * v227.z; /*0x97b0bb*/
  v224 = v238 * v175 + out.x; /*0x97b0cb*/
  v239 = *(float *)(a2 + 0x6C) * v229; /*0x97b0d6*/
  v240 = fabs(v239); /*0x97b0e0*/
  v15 = v240; /*0x97b0e4*/
  v241 = *(float *)(a2 + 0x70) * v230; /*0x97b0ef*/
  v242 = fabs(v241); /*0x97b0f9*/
  v16 = v15 + v242; /*0x97b0fd*/
  v243 = v231 * *(float *)(a2 + 0x74); /*0x97b108*/
  v244 = fabs(v243); /*0x97b112*/
  v245 = v16 + v244; /*0x97b11a*/
  v17 = v245; /*0x97b11e*/
  v246 = fabs(*(float *)(this + 0x6C)); /*0x97b127*/
  v247 = v17 + v246; /*0x97b12f*/
  v18 = v247; /*0x97b13f*/
  if ( v247 < (double)out.x && v224 > v18 ) /*0x97b151*/
    return 0; /*0x97b151*/
  v248 = -v18; /*0x97b155*/
  if ( v248 > (double)out.x && v224 < (double)v248 ) /*0x97b177*/
    return 0; /*0x97b18b*/
  v178 = (float *)(this + 0x54); /*0x97b1b0*/
  v232 = *(float *)(this + 0x58) * *(float *)(a2 + 0x4C) /*0x97b1c3*/
       + *(float *)(a2 + 0x48) * *(float *)(this + 0x54)
       + *(float *)(this + 0x5C) * *(float *)(a2 + 0x50);
  v233 = v9[1] * *(float *)(this + 0x58) + *v9 * *(float *)(this + 0x54) + v9[2] * *(float *)(this + 0x5C); /*0x97b1db*/
  v234 = v7[1] * *(float *)(this + 0x58) + *v7 * *(float *)(this + 0x54) + v7[2] * *(float *)(this + 0x5C); /*0x97b1f3*/
  out.y = *(float *)(this + 0x58) * y + *(float *)(this + 0x54) * x + *(float *)(this + 0x5C) * z; /*0x97b209*/
  v249 = *(float *)(this + 0x58) * v13 + v14 * *(float *)(this + 0x54) + *(float *)(this + 0x5C) * v227.z; /*0x97b221*/
  v225 = v249 * v175 + out.y; /*0x97b231*/
  v250 = *(float *)(a2 + 0x6C) * v232; /*0x97b23c*/
  v251 = fabs(v250); /*0x97b246*/
  v20 = v251; /*0x97b24a*/
  v252 = *(float *)(a2 + 0x70) * v233; /*0x97b255*/
  v253 = fabs(v252); /*0x97b25f*/
  v21 = v20 + v253; /*0x97b263*/
  v254 = v234 * *(float *)(a2 + 0x74); /*0x97b26e*/
  v255 = fabs(v254); /*0x97b278*/
  v256 = v21 + v255; /*0x97b280*/
  v22 = v256; /*0x97b284*/
  v257 = fabs(*(float *)(this + 0x70)); /*0x97b28d*/
  v258 = v22 + v257; /*0x97b295*/
  v23 = v258; /*0x97b2a5*/
  if ( v258 < (double)out.y && v225 > v23 ) /*0x97b2b7*/
    return 0; /*0x97b2b7*/
  v259 = -v23; /*0x97b2bf*/
  if ( v259 > (double)out.y && v225 < (double)v259 ) /*0x97b2e1*/
    return 0; /*0x97b1a2*/
  v235 = *(float *)(this + 0x64) * *(float *)(a2 + 0x4C) /*0x97b304*/
       + *(float *)(this + 0x60) * *(float *)(a2 + 0x48)
       + *(float *)(this + 0x68) * *(float *)(a2 + 0x50);
  v236 = v9[1] * *(float *)(this + 0x64) + *v9 * *(float *)(this + 0x60) + v9[2] * *(float *)(this + 0x68); /*0x97b31d*/
  v237 = v7[1] * *(float *)(this + 0x64) + *v7 * *(float *)(this + 0x60) + v7[2] * *(float *)(this + 0x68); /*0x97b336*/
  out.z = *(float *)(this + 0x64) * y + *(float *)(this + 0x60) * x + *(float *)(this + 0x68) * z; /*0x97b34d*/
  v260 = *(float *)(this + 0x64) * v13 + *(float *)(this + 0x60) * v14 + *(float *)(this + 0x68) * v227.z; /*0x97b366*/
  v226 = v260 * v175 + out.z; /*0x97b37c*/
  v261 = *(float *)(a2 + 0x6C) * v235; /*0x97b387*/
  v262 = fabs(v261); /*0x97b397*/
  v24 = v262; /*0x97b39e*/
  v263 = *(float *)(a2 + 0x70) * v236; /*0x97b3ac*/
  v264 = fabs(v263); /*0x97b3bc*/
  v25 = v24 + v264; /*0x97b3c3*/
  v265 = v237 * *(float *)(a2 + 0x74); /*0x97b3d1*/
  v266 = fabs(v265); /*0x97b3e1*/
  v267 = v25 + v266; /*0x97b3ef*/
  v26 = v267; /*0x97b3f6*/
  v268 = fabs(*(float *)(this + 0x74)); /*0x97b402*/
  v269 = v26 + v268; /*0x97b410*/
  v27 = v269; /*0x97b426*/
  if ( v269 < (double)out.z && v226 > v27 ) /*0x97b438*/
    return 0; /*0x97b438*/
  v270 = -v27; /*0x97b440*/
  if ( v270 > (double)out.z && v226 < (double)v270 ) /*0x97b468*/
    return 0; /*0x97b47d*/
  v271 = *(float *)(this + 0x6C) * v229; /*0x97b489*/
  v272 = fabs(v271); /*0x97b499*/
  v28 = v272; /*0x97b4a0*/
  v273 = *(float *)(this + 0x70) * v232; /*0x97b4ae*/
  v274 = fabs(v273); /*0x97b4be*/
  v29 = v28 + v274; /*0x97b4c5*/
  v275 = *(float *)(this + 0x74) * v235; /*0x97b4d3*/
  v276 = fabs(v275); /*0x97b4e3*/
  v277 = v29 + v276; /*0x97b4f1*/
  v30 = v277; /*0x97b4f8*/
  v278 = fabs(*(float *)(a2 + 0x6C)); /*0x97b504*/
  v279 = v30 + v278; /*0x97b512*/
  v159 = y * *(float *)(a2 + 0x4C) + *(float *)(a2 + 0x48) * x + *(float *)(a2 + 0x50) * z; /*0x97b52c*/
  v181 = v13 * *(float *)(a2 + 0x4C) + *(float *)(a2 + 0x48) * v14 + *(float *)(a2 + 0x50) * v227.z; /*0x97b545*/
  v31 = v159; /*0x97b559*/
  v160 = v181 * v175 + v159; /*0x97b55b*/
  if ( v279 < v31 && v279 < (double)v160 ) /*0x97b581*/
    return 0; /*0x97b581*/
  v280 = -v279; /*0x97b590*/
  if ( v280 > v31 && v160 < (double)v280 ) /*0x97b5b4*/
    return 0; /*0x97b5c9*/
  v281 = *(float *)(this + 0x6C) * v230; /*0x97b5d5*/
  v282 = fabs(v281); /*0x97b5e5*/
  v32 = v282; /*0x97b5ec*/
  v283 = *(float *)(this + 0x70) * v233; /*0x97b5fa*/
  v284 = fabs(v283); /*0x97b60a*/
  v33 = v32 + v284; /*0x97b611*/
  v285 = *(float *)(this + 0x74) * v236; /*0x97b61f*/
  v286 = fabs(v285); /*0x97b62f*/
  v287 = v33 + v286; /*0x97b63d*/
  v34 = v287; /*0x97b644*/
  v288 = fabs(*(float *)(a2 + 0x70)); /*0x97b650*/
  v289 = v34 + v288; /*0x97b65e*/
  v161 = v9[1] * y + x * *v9 + v9[2] * z; /*0x97b677*/
  v182 = v9[1] * v13 + v14 * *v9 + v9[2] * v227.z; /*0x97b68f*/
  v35 = v161; /*0x97b6a3*/
  v162 = v182 * v175 + v161; /*0x97b6a5*/
  if ( v289 < v35 && v289 < (double)v162 ) /*0x97b6cb*/
    return 0; /*0x97b727*/
  v290 = -v289; /*0x97b6d6*/
  if ( v290 > v35 && v162 < (double)v290 ) /*0x97b6fa*/
    return 0; /*0x97b70f*/
  v291 = *(float *)(this + 0x6C) * v231; /*0x97b733*/
  v292 = fabs(v291); /*0x97b743*/
  v36 = v292; /*0x97b74a*/
  v293 = *(float *)(this + 0x70) * v234; /*0x97b758*/
  v294 = fabs(v293); /*0x97b768*/
  v37 = v36 + v294; /*0x97b76f*/
  v295 = *(float *)(this + 0x74) * v237; /*0x97b77d*/
  v296 = fabs(v295); /*0x97b78d*/
  v297 = v37 + v296; /*0x97b79b*/
  v38 = v297; /*0x97b7a2*/
  v298 = fabs(*(float *)(a2 + 0x74)); /*0x97b7ae*/
  v299 = v38 + v298; /*0x97b7bc*/
  v163 = z * v7[2] + x * *v7 + y * v7[1]; /*0x97b7d9*/
  v183 = v227.x * *v7 + v227.y * v7[1] + v7[2] * v227.z; /*0x97b7ef*/
  v39 = v163; /*0x97b803*/
  v164 = v183 * v175 + v163; /*0x97b805*/
  if ( v299 < v39 && v164 > (double)v299 ) /*0x97b824*/
    return 0; /*0x97b824*/
  v300 = -v299; /*0x97b82e*/
  if ( v300 > v39 && v164 < (double)v300 ) /*0x97b84e*/
    return 0; /*0x97b859*/
  v301 = *(float *)(a2 + 0x70) * v231; /*0x97b86d*/
  v302 = fabs(v301); /*0x97b87d*/
  v40 = v302; /*0x97b884*/
  v303 = v230 * *(float *)(a2 + 0x74); /*0x97b892*/
  v304 = fabs(v303); /*0x97b8a2*/
  v305 = v40 + v304; /*0x97b8b0*/
  v41 = v305; /*0x97b8b7*/
  v42 = v235; /*0x97b8c9*/
  v306 = *(float *)(this + 0x70) * v235; /*0x97b8cb*/
  v307 = fabs(v306); /*0x97b8db*/
  v43 = v307; /*0x97b8e2*/
  v308 = *(float *)(this + 0x74) * v232; /*0x97b8f6*/
  v309 = fabs(v308); /*0x97b906*/
  v310 = v43 + v309; /*0x97b918*/
  v44 = v41 + v310; /*0x97b928*/
  v45 = v232; /*0x97b928*/
  v311 = v44; /*0x97b92a*/
  v165 = out.z * v232 - v235 * out.y; /*0x97b93f*/
  if ( v311 >= (double)v165 ) /*0x97b955*/
  {
    v313 = -v311; /*0x97b996*/
    if ( v313 <= (double)v165 ) /*0x97b9ad*/
    {
      v47 = v226; /*0x97b9f0*/
    }
    else
    {
      v50 = v45 * v226; /*0x97b9bd*/
      v47 = v226; /*0x97b9bd*/
      v51 = v50 - v42 * v225; /*0x97b9c1*/
      v52 = v313; /*0x97b9c1*/
      v314 = v51; /*0x97b9c3*/
      if ( v314 < v52 ) /*0x97b9d8*/
        return 0; /*0x97b9e7*/
    }
  }
  else
  {
    v46 = v45 * v226; /*0x97b967*/
    v47 = v226; /*0x97b967*/
    v48 = v46 - v42 * v225; /*0x97b96b*/
    v49 = v311; /*0x97b96b*/
    v312 = v48; /*0x97b96d*/
    if ( v312 > v49 ) /*0x97b982*/
      return 0; /*0x97b991*/
  }
  v53 = v47; /*0x97b9f9*/
  v315 = v231 * *(float *)(a2 + 0x6C); /*0x97b9fb*/
  v316 = fabs(v315); /*0x97ba0b*/
  v54 = v316; /*0x97ba12*/
  v317 = v229 * *(float *)(a2 + 0x74); /*0x97ba22*/
  v318 = fabs(v317); /*0x97ba32*/
  v55 = v54 + v318; /*0x97ba42*/
  v56 = v229; /*0x97ba42*/
  v319 = v55; /*0x97ba44*/
  v57 = v319; /*0x97ba4b*/
  v58 = v236; /*0x97ba5d*/
  v320 = *(float *)(this + 0x70) * v236; /*0x97ba5f*/
  v321 = fabs(v320); /*0x97ba6f*/
  v59 = v321; /*0x97ba76*/
  v322 = *(float *)(this + 0x74) * v233; /*0x97ba8a*/
  v323 = fabs(v322); /*0x97ba9a*/
  v324 = v59 + v323; /*0x97baac*/
  v60 = v57 + v324; /*0x97babc*/
  v61 = v233; /*0x97babc*/
  v325 = v60; /*0x97babe*/
  v166 = out.z * v233 - v236 * out.y; /*0x97bad3*/
  if ( v325 >= (double)v166 ) /*0x97bae9*/
  {
    v327 = -v325; /*0x97bb24*/
    if ( v327 > (double)v166 ) /*0x97bb3b*/
    {
      v64 = v61 * v53; /*0x97bb47*/
      v65 = v327; /*0x97bb47*/
      v328 = v64 - v58 * v225; /*0x97bb4b*/
      if ( v328 < v65 ) /*0x97bb60*/
        return 0; /*0x97bb6f*/
    }
  }
  else
  {
    v62 = v61 * v53; /*0x97baf7*/
    v63 = v325; /*0x97baf7*/
    v326 = v62 - v58 * v225; /*0x97bafb*/
    if ( v326 > v63 ) /*0x97bb10*/
      return 0; /*0x97bb1f*/
  }
  v329 = *(float *)(a2 + 0x6C) * v230; /*0x97bb7f*/
  v330 = fabs(v329); /*0x97bb8f*/
  v66 = v330; /*0x97bb96*/
  v331 = *(float *)(a2 + 0x70) * v56; /*0x97bba2*/
  v332 = fabs(v331); /*0x97bbb2*/
  v333 = v66 + v332; /*0x97bbc0*/
  v67 = v333; /*0x97bbc7*/
  v68 = v237; /*0x97bbd9*/
  v334 = *(float *)(this + 0x70) * v237; /*0x97bbdb*/
  v335 = fabs(v334); /*0x97bbeb*/
  v69 = v335; /*0x97bbf2*/
  v336 = *(float *)(this + 0x74) * v234; /*0x97bc06*/
  v337 = fabs(v336); /*0x97bc16*/
  v338 = v69 + v337; /*0x97bc28*/
  v70 = v67 + v338; /*0x97bc38*/
  v71 = v234; /*0x97bc38*/
  v339 = v70; /*0x97bc3a*/
  v167 = out.z * v234 - v237 * out.y; /*0x97bc4f*/
  v72 = v167; /*0x97bc53*/
  if ( v339 >= (double)v167 ) /*0x97bc65*/
  {
    v341 = -v339; /*0x97bca2*/
    v74 = v341 < v72; /*0x97bcb0*/
    v75 = v341 == v72; /*0x97bcb0*/
    v76 = v341; /*0x97bcb4*/
    if ( !v74 && !v75 ) /*0x97bcb6*/
    {
      v342 = v53 * v71 - v68 * v225; /*0x97bcc7*/
      if ( v342 < v76 ) /*0x97bcdc*/
        return 0; /*0x97bcef*/
    }
  }
  else
  {
    v73 = v339; /*0x97bc67*/
    v340 = v53 * v71 - v68 * v225; /*0x97bc75*/
    if ( v340 > v73 ) /*0x97bc8a*/
      return 0; /*0x97bc9d*/
  }
  v343 = *(float *)(this + 0x6C) * v235; /*0x97bcfb*/
  v344 = fabs(v343); /*0x97bd0b*/
  v77 = v344; /*0x97bd12*/
  v345 = *(float *)(this + 0x74) * v56; /*0x97bd1e*/
  v346 = fabs(v345); /*0x97bd2e*/
  v347 = v77 + v346; /*0x97bd3c*/
  v78 = v347; /*0x97bd43*/
  v348 = *(float *)(a2 + 0x70) * v71; /*0x97bd4f*/
  v349 = fabs(v348); /*0x97bd5f*/
  v79 = v349; /*0x97bd66*/
  v350 = v233 * *(float *)(a2 + 0x74); /*0x97bd74*/
  v351 = fabs(v350); /*0x97bd84*/
  v352 = v79 + v351; /*0x97bd92*/
  v353 = v78 + v352; /*0x97bda0*/
  v80 = v235; /*0x97bda7*/
  v168 = v235 * out.x - out.z * v56; /*0x97bdb9*/
  if ( v353 >= (double)v168 ) /*0x97bdcf*/
  {
    v354 = -v353; /*0x97be1a*/
    if ( v354 <= (double)v168 ) /*0x97be2f*/
    {
      v82 = v224; /*0x97be71*/
      goto LABEL_58; /*0x97be71*/
    }
    v83 = v80 * v224 - v53 * v56; /*0x97be3f*/
    v82 = v224; /*0x97be3f*/
    v185 = v83; /*0x97be41*/
    if ( v354 <= (double)v185 ) /*0x97be57*/
      goto LABEL_58; /*0x97be57*/
    return 0; /*0x97be6c*/
  }
  v81 = v80 * v224 - v53 * v56; /*0x97bde1*/
  v82 = v224; /*0x97bde1*/
  v184 = v81; /*0x97bde3*/
  if ( v353 < (double)v184 ) /*0x97bdf9*/
    return 0; /*0x97be0e*/
LABEL_58:
  v84 = v82; /*0x97be75*/
  v85 = v71 * *(float *)(a2 + 0x6C); /*0x97be7a*/
  v86 = v84; /*0x97be7a*/
  v355 = v85; /*0x97be7c*/
  v356 = fabs(v355); /*0x97be8c*/
  v87 = v356; /*0x97be93*/
  v357 = v232 * *(float *)(a2 + 0x74); /*0x97bea1*/
  v358 = fabs(v357); /*0x97beb1*/
  v359 = v87 + v358; /*0x97bebf*/
  v88 = v359; /*0x97bec6*/
  v360 = *(float *)(this + 0x6C) * v236; /*0x97bed4*/
  v361 = fabs(v360); /*0x97bee4*/
  v89 = v361; /*0x97beeb*/
  v362 = *(float *)(this + 0x74) * v230; /*0x97bef9*/
  v363 = fabs(v362); /*0x97bf09*/
  v364 = v89 + v363; /*0x97bf17*/
  v365 = v88 + v364; /*0x97bf25*/
  v90 = v236; /*0x97bf2c*/
  v169 = v236 * out.x - out.z * v230; /*0x97bf40*/
  if ( v365 >= (double)v169 ) /*0x97bf58*/
  {
    v367 = -v365; /*0x97bf95*/
    if ( v367 > (double)v169 ) /*0x97bfb0*/
    {
      v93 = v90 * v86 - v53 * v230; /*0x97bfbe*/
      v94 = v367; /*0x97bfbe*/
      v368 = v93; /*0x97bfc0*/
      if ( v368 < v94 ) /*0x97bfd5*/
        return 0; /*0x97bfe8*/
    }
  }
  else
  {
    v91 = v90 * v86 - v53 * v230; /*0x97bf66*/
    v92 = v365; /*0x97bf66*/
    v366 = v91; /*0x97bf68*/
    if ( v366 > v92 ) /*0x97bf7d*/
      return 0; /*0x97bf90*/
  }
  v369 = *(float *)(a2 + 0x6C) * v233; /*0x97bff6*/
  v370 = fabs(v369); /*0x97c006*/
  v95 = v370; /*0x97c00d*/
  v371 = *(float *)(a2 + 0x70) * v232; /*0x97c01b*/
  v372 = fabs(v371); /*0x97c02b*/
  v373 = v95 + v372; /*0x97c039*/
  v96 = v373; /*0x97c040*/
  v374 = *(float *)(this + 0x6C) * v68; /*0x97c04c*/
  v375 = fabs(v374); /*0x97c05c*/
  v97 = v375; /*0x97c063*/
  v376 = *(float *)(this + 0x74) * v231; /*0x97c071*/
  v377 = fabs(v376); /*0x97c081*/
  v378 = v97 + v377; /*0x97c08f*/
  v379 = v96 + v378; /*0x97c09d*/
  v98 = v231; /*0x97c0b6*/
  v170 = v68 * out.x - out.z * v231; /*0x97c0ba*/
  if ( v379 >= (double)v170 ) /*0x97c0d2*/
  {
    v381 = -v379; /*0x97c10d*/
    if ( v381 <= (double)v170 ) /*0x97c128*/
    {
      v100 = v237; /*0x97c165*/
    }
    else
    {
      v101 = v381; /*0x97c132*/
      v382 = v68 * v86 - v98 * v53; /*0x97c136*/
      v100 = v237; /*0x97c148*/
      if ( v382 < v101 ) /*0x97c14d*/
        return 0; /*0x97c15e*/
    }
  }
  else
  {
    v99 = v379; /*0x97c0dc*/
    v380 = v68 * v86 - v98 * v53; /*0x97c0e0*/
    v100 = v237; /*0x97c0f2*/
    if ( v380 > v99 ) /*0x97c0f7*/
      return 0; /*0x97c108*/
  }
  v383 = *(float *)(a2 + 0x70) * v100; /*0x97c16c*/
  v384 = fabs(v383); /*0x97c17c*/
  v102 = v384; /*0x97c183*/
  v385 = v236 * *(float *)(a2 + 0x74); /*0x97c191*/
  v386 = fabs(v385); /*0x97c1a1*/
  v387 = v102 + v386; /*0x97c1af*/
  v103 = v387; /*0x97c1b6*/
  v388 = *(float *)(this + 0x6C) * v232; /*0x97c1ca*/
  v389 = fabs(v388); /*0x97c1da*/
  v104 = v389; /*0x97c1e1*/
  v390 = *(float *)(this + 0x70) * v56; /*0x97c1ed*/
  v391 = fabs(v390); /*0x97c1fd*/
  v392 = v104 + v391; /*0x97c20b*/
  v105 = v103 + v392; /*0x97c21b*/
  v106 = v232; /*0x97c21b*/
  v393 = v105; /*0x97c21d*/
  v171 = out.y * v56 - v232 * out.x; /*0x97c232*/
  if ( v393 >= (double)v171 ) /*0x97c248*/
  {
    v395 = -v393; /*0x97c289*/
    if ( v395 <= (double)v171 ) /*0x97c2a0*/
    {
      v108 = v225; /*0x97c2e7*/
    }
    else
    {
      v111 = v56 * v225; /*0x97c2ae*/
      v108 = v225; /*0x97c2ae*/
      v112 = v111 - v106 * v86; /*0x97c2b2*/
      v113 = v395; /*0x97c2b2*/
      v396 = v112; /*0x97c2b4*/
      if ( v396 < v113 ) /*0x97c2c9*/
        return 0; /*0x97c2da*/
    }
  }
  else
  {
    v107 = v56 * v225; /*0x97c258*/
    v108 = v225; /*0x97c258*/
    v109 = v107 - v106 * v86; /*0x97c25c*/
    v110 = v393; /*0x97c25c*/
    v394 = v109; /*0x97c25e*/
    if ( v394 > v110 ) /*0x97c273*/
      return 0; /*0x97c284*/
  }
  v114 = v86; /*0x97c2ee*/
  v115 = v100 * *(float *)(a2 + 0x6C); /*0x97c2ee*/
  v116 = v114; /*0x97c2ee*/
  v397 = v115; /*0x97c2f0*/
  v398 = fabs(v397); /*0x97c300*/
  v117 = v398; /*0x97c307*/
  v399 = v235 * *(float *)(a2 + 0x74); /*0x97c315*/
  v400 = fabs(v399); /*0x97c325*/
  v401 = v117 + v400; /*0x97c333*/
  v118 = v401; /*0x97c33a*/
  v119 = v233; /*0x97c34c*/
  v402 = *(float *)(this + 0x6C) * v233; /*0x97c34e*/
  v403 = fabs(v402); /*0x97c35e*/
  v120 = v403; /*0x97c365*/
  v404 = *(float *)(this + 0x70) * v230; /*0x97c379*/
  v405 = fabs(v404); /*0x97c389*/
  v406 = v120 + v405; /*0x97c39b*/
  v121 = v118 + v406; /*0x97c3ab*/
  v122 = v230; /*0x97c3ab*/
  v407 = v121; /*0x97c3ad*/
  v172 = out.y * v230 - v233 * out.x; /*0x97c3c2*/
  if ( v407 >= (double)v172 ) /*0x97c3d8*/
  {
    v409 = -v407; /*0x97c411*/
    if ( v409 > (double)v172 ) /*0x97c428*/
    {
      v125 = v122 * v108; /*0x97c432*/
      v126 = v409; /*0x97c432*/
      v410 = v125 - v119 * v116; /*0x97c436*/
      if ( v410 < v126 ) /*0x97c44b*/
        return 0; /*0x97c45a*/
    }
  }
  else
  {
    v123 = v122 * v108; /*0x97c3e4*/
    v124 = v407; /*0x97c3e4*/
    v408 = v123 - v119 * v116; /*0x97c3e8*/
    if ( v408 > v124 ) /*0x97c3fd*/
      return 0; /*0x97c40c*/
  }
  v411 = *(float *)(a2 + 0x6C) * v236; /*0x97c46a*/
  v412 = fabs(v411); /*0x97c47a*/
  v127 = v412; /*0x97c481*/
  v413 = *(float *)(a2 + 0x70) * v235; /*0x97c48f*/
  v414 = fabs(v413); /*0x97c49f*/
  v415 = v127 + v414; /*0x97c4ad*/
  v128 = v415; /*0x97c4b4*/
  v129 = v234; /*0x97c4c6*/
  v416 = *(float *)(this + 0x6C) * v234; /*0x97c4c8*/
  v417 = fabs(v416); /*0x97c4d8*/
  v130 = v417; /*0x97c4df*/
  v418 = *(float *)(this + 0x70) * v231; /*0x97c4f3*/
  v419 = fabs(v418); /*0x97c503*/
  v420 = v130 + v419; /*0x97c515*/
  v131 = v128 + v420; /*0x97c525*/
  v132 = v231; /*0x97c525*/
  v421 = v131; /*0x97c527*/
  v173 = out.y * v231 - v234 * out.x; /*0x97c53c*/
  v133 = v421; /*0x97c544*/
  if ( v421 >= (double)v173 ) /*0x97c552*/
  {
    v423 = -v133; /*0x97c585*/
    if ( v423 > (double)v173 ) /*0x97c59c*/
    {
      v134 = v132 * v108 - v116 * v129; /*0x97c5a6*/
      v135 = v423; /*0x97c5a6*/
      v424 = v134; /*0x97c5a8*/
      if ( v424 < v135 ) /*0x97c5bd*/
        return 0; /*0x97c5bd*/
    }
  }
  else
  {
    v422 = v132 * v108 - v116 * v129; /*0x97c560*/
    if ( v422 > v133 ) /*0x97c575*/
      return 0; /*0x97c580*/
  }
  NiPoint3_CrossProduct(&v227, &out, &other); /*0x97c5e3*/
  v225 = sub_47D9E0(&v227.x, v178); /*0x97c5f6*/
  v226 = sub_47D9E0(&v227.x, (float *)(this + 0x60)); /*0x97c604*/
  v425 = fabs(v226); /*0x97c613*/
  v176 = fabs(v225); /*0x97c622*/
  v186 = fabs(sub_47D9E0((float *)(this + 0x48), &out.x)); /*0x97c62d*/
  v136 = v186; /*0x97c631*/
  v187 = v226 * v233 - v225 * v236; /*0x97c64d*/
  v188 = fabs(v187); /*0x97c657*/
  v137 = v188 * *(float *)(a2 + 0x70); /*0x97c65f*/
  v189 = v226 * v232 - v225 * v235; /*0x97c670*/
  v190 = fabs(v189); /*0x97c67a*/
  v138 = v137 + v190 * *(float *)(a2 + 0x6C); /*0x97c693*/
  v191 = v226 * v234 - v225 * v237; /*0x97c697*/
  v192 = fabs(v191); /*0x97c6a1*/
  v193 = v138 + v192 * *(float *)(a2 + 0x74); /*0x97c6ae*/
  v139 = v193; /*0x97c6b2*/
  v194 = v425 * *(float *)(this + 0x70) + *(float *)(this + 0x74) * v176; /*0x97c6c9*/
  v195 = v139 + v194; /*0x97c6d1*/
  if ( v195 < v136 ) /*0x97c6e0*/
    return 0; /*0x97c6e0*/
  v224 = sub_47D9E0(&v227.x, (float *)(this + 0x48)); /*0x97c6f0*/
  v174 = fabs(v224); /*0x97c703*/
  v196 = fabs(sub_47D9E0(v178, &out.x)); /*0x97c70e*/
  v140 = v196; /*0x97c712*/
  v197 = v224 * v236 - v226 * v230; /*0x97c72e*/
  v198 = fabs(v197); /*0x97c738*/
  v141 = v198 * *(float *)(a2 + 0x70); /*0x97c740*/
  v199 = v224 * v235 - v226 * v229; /*0x97c751*/
  v200 = fabs(v199); /*0x97c75b*/
  v142 = v141 + v200 * *(float *)(a2 + 0x6C); /*0x97c774*/
  v201 = v224 * v237 - v226 * v231; /*0x97c778*/
  v202 = fabs(v201); /*0x97c782*/
  v203 = v142 + v202 * *(float *)(a2 + 0x74); /*0x97c78f*/
  v426 = *(float *)(this + 0x6C) * v425 + v174 * *(float *)(this + 0x74); /*0x97c7aa*/
  v427 = v203 + v426; /*0x97c7b8*/
  if ( v427 < v140 ) /*0x97c7cd*/
    return 0; /*0x97c7cd*/
  v428 = fabs(sub_47D9E0((float *)(this + 0x60), &out.x)); /*0x97c7e1*/
  v143 = v428; /*0x97c7e8*/
  v429 = v225 * v230 - v224 * v233; /*0x97c807*/
  v430 = fabs(v429); /*0x97c817*/
  v144 = v430 * *(float *)(a2 + 0x70); /*0x97c825*/
  v431 = v225 * v229 - v224 * v232; /*0x97c836*/
  v432 = fabs(v431); /*0x97c846*/
  v145 = v144 + v432 * *(float *)(a2 + 0x6C); /*0x97c865*/
  v433 = v225 * v231 - v224 * v234; /*0x97c869*/
  v434 = fabs(v433); /*0x97c879*/
  v435 = v145 + v434 * *(float *)(a2 + 0x74); /*0x97c88c*/
  v146 = v435; /*0x97c893*/
  v436 = *(float *)(this + 0x6C) * v176 + v174 * *(float *)(this + 0x70); /*0x97c8aa*/
  v437 = v146 + v436; /*0x97c8b8*/
  if ( v437 < v143 ) /*0x97c8cd*/
    return 0; /*0x97c8cd*/
  v147 = v204; /*0x97c8d3*/
  v225 = sub_47D9E0(&v227.x, v204); /*0x97c8e1*/
  v226 = sub_47D9E0(&v227.x, v180); /*0x97c8f3*/
  v438 = fabs(v226); /*0x97c902*/
  v177 = fabs(v225); /*0x97c914*/
  v205 = fabs(sub_47D9E0((float *)(a2 + 0x48), &out.x)); /*0x97c91f*/
  v148 = v205; /*0x97c923*/
  v206 = v226 * v230 - v225 * v231; /*0x97c93f*/
  v207 = fabs(v206); /*0x97c949*/
  v149 = v207 * *(float *)(this + 0x6C); /*0x97c951*/
  v208 = v226 * v233 - v225 * v234; /*0x97c962*/
  v209 = fabs(v208); /*0x97c96c*/
  v150 = v149 + v209 * *(float *)(this + 0x70); /*0x97c985*/
  v210 = v226 * v236 - v225 * v237; /*0x97c989*/
  v211 = fabs(v210); /*0x97c993*/
  v212 = v150 + v211 * *(float *)(this + 0x74); /*0x97c9a0*/
  v151 = v212; /*0x97c9a4*/
  v213 = v177 * *(float *)(a2 + 0x74) + v438 * *(float *)(a2 + 0x70); /*0x97c9bb*/
  v214 = v151 + v213; /*0x97c9c3*/
  if ( v214 < v148 ) /*0x97c9d2*/
    return 0; /*0x97c9d2*/
  v224 = sub_47D9E0(&v227.x, (float *)(a2 + 0x48)); /*0x97c9e2*/
  v179 = fabs(v224); /*0x97c9f3*/
  v215 = fabs(sub_47D9E0(v147, &out.x)); /*0x97c9fe*/
  v152 = v215; /*0x97ca02*/
  v216 = v224 * v231 - v226 * v229; /*0x97ca1e*/
  v217 = fabs(v216); /*0x97ca28*/
  v153 = v217 * *(float *)(this + 0x6C); /*0x97ca30*/
  v218 = v224 * v234 - v226 * v232; /*0x97ca41*/
  v219 = fabs(v218); /*0x97ca4b*/
  v154 = v153 + v219 * *(float *)(this + 0x70); /*0x97ca64*/
  v220 = v224 * v237 - v226 * v235; /*0x97ca68*/
  v221 = fabs(v220); /*0x97ca72*/
  v222 = v154 + v221 * *(float *)(this + 0x74); /*0x97ca7f*/
  v439 = v179 * *(float *)(a2 + 0x74) + *(float *)(a2 + 0x6C) * v438; /*0x97ca9a*/
  v440 = v222 + v439; /*0x97caa8*/
  if ( v440 < v152 ) /*0x97cabd*/
    return 0; /*0x97cabd*/
  v441 = fabs(sub_47D9E0(v180, &out.x)); /*0x97cad3*/
  v155 = v441; /*0x97cada*/
  v442 = v225 * v229 - v224 * v230; /*0x97caf9*/
  v443 = fabs(v442); /*0x97cb09*/
  v156 = v443 * *(float *)(this + 0x6C); /*0x97cb17*/
  v444 = v225 * v232 - v224 * v233; /*0x97cb28*/
  v445 = fabs(v444); /*0x97cb38*/
  v157 = v156 + v445 * *(float *)(this + 0x70); /*0x97cb57*/
  v446 = v225 * v235 - v224 * v236; /*0x97cb5b*/
  v447 = fabs(v446); /*0x97cb6b*/
  v448 = v157 + v447 * *(float *)(this + 0x74); /*0x97cb7e*/
  v158 = v448; /*0x97cb85*/
  v449 = v179 * *(float *)(a2 + 0x70) + *(float *)(a2 + 0x6C) * v177; /*0x97cb9c*/
  v450 = v158 + v449; /*0x97cbaa*/
  return v450 >= v155; /*0x97cbbf*/
}
