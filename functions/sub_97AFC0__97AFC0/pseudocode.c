BOOL __thiscall sub_97AFC0(int this, int a2)
{
  double v4; // st7
  float *v5; // ecx
  float *v6; // eax
  float *v7; // edx
  double v8; // st7
  float *v9; // ecx
  double v10; // st7
  double v11; // st6
  double v12; // st5
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
  float v223; // [esp+24h] [ebp-54h] BYREF
  float v224; // [esp+28h] [ebp-50h]
  float v225; // [esp+2Ch] [ebp-4Ch]
  float v226; // [esp+30h] [ebp-48h]
  float v227; // [esp+34h] [ebp-44h]
  float v228; // [esp+38h] [ebp-40h]
  float v229; // [esp+3Ch] [ebp-3Ch] BYREF
  float v230; // [esp+40h] [ebp-38h]
  float v231; // [esp+44h] [ebp-34h]
  float v232; // [esp+48h] [ebp-30h] BYREF
  float v233; // [esp+4Ch] [ebp-2Ch]
  float v234; // [esp+50h] [ebp-28h]
  float v235; // [esp+54h] [ebp-24h]
  float v236; // [esp+58h] [ebp-20h]
  float v237; // [esp+5Ch] [ebp-1Ch]
  float v238; // [esp+60h] [ebp-18h]
  float v239; // [esp+64h] [ebp-14h]
  float v240; // [esp+68h] [ebp-10h]
  float v241; // [esp+6Ch] [ebp-Ch]
  float v242; // [esp+70h] [ebp-8h]
  float v243; // [esp+74h] [ebp-4h]
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
  float v451; // [esp+7Ch] [ebp+4h]
  float v452; // [esp+7Ch] [ebp+4h]
  float v453; // [esp+7Ch] [ebp+4h]
  float v454; // [esp+7Ch] [ebp+4h]
  float v455; // [esp+7Ch] [ebp+4h]
  float v456; // [esp+7Ch] [ebp+4h]

  v4 = *(float *)(a2 + 0x3C) - *(float *)(this + 0x3C);
  v5 = *(float **)(this + 0x78);
  v6 = (float *)(*(_DWORD *)(a2 + 0x78) + 0x10);
  v232 = v4;
  v7 = (float *)(a2 + 0x60);
  v180 = (float *)(a2 + 0x60);
  v233 = *(float *)(a2 + 0x40) - *(float *)(this + 0x40);
  v234 = *(float *)(a2 + 0x44) - *(float *)(this + 0x44);
  v229 = *v6 - v5[4];
  v230 = v6[1] - v5[5];
  v231 = v6[2] - v5[6];
  v8 = v5[1];
  v9 = (float *)(a2 + 0x54);
  v175 = v8;
  v204 = (float *)(a2 + 0x54);
  v235 = *(float *)(a2 + 0x4C) * *(float *)(this + 0x4C)
       + *(float *)(a2 + 0x48) * *(float *)(this + 0x48)
       + *(float *)(a2 + 0x50) * *(float *)(this + 0x50);
  v236 = *(float *)(a2 + 0x58) * *(float *)(this + 0x4C)
       + *(float *)(a2 + 0x54) * *(float *)(this + 0x48)
       + *(float *)(a2 + 0x5C) * *(float *)(this + 0x50);
  v237 = *(float *)(a2 + 0x64) * *(float *)(this + 0x4C)
       + *(float *)(a2 + 0x60) * *(float *)(this + 0x48)
       + *(float *)(a2 + 0x68) * *(float *)(this + 0x50);
  v10 = v233;
  v11 = v232;
  v12 = v234;
  v223 = *(float *)(this + 0x50) * v234 + *(float *)(this + 0x48) * v232 + v233 * *(float *)(this + 0x4C);
  v13 = v230;
  v14 = v229;
  v244 = *(float *)(this + 0x48) * v229 + v230 * *(float *)(this + 0x4C) + *(float *)(this + 0x50) * v231;
  v226 = v244 * v175 + v223;
  v245 = *(float *)(a2 + 0x6C) * v235;
  v246 = fabs(v245);
  v15 = v246;
  v247 = *(float *)(a2 + 0x70) * v236;
  v248 = fabs(v247);
  v16 = v15 + v248;
  v249 = v237 * *(float *)(a2 + 0x74);
  v250 = fabs(v249);
  v251 = v16 + v250;
  v17 = v251;
  v252 = fabs(*(float *)(this + 0x6C));
  v253 = v17 + v252;
  v18 = v253;
  if ( v253 < (double)v223 && v226 > v18 )
    return 0;
  v254 = -v18;
  if ( v254 > (double)v223 && v226 < (double)v254 )
    return 0;
  v178 = (float *)(this + 0x54);
  v238 = *(float *)(this + 0x58) * *(float *)(a2 + 0x4C)
       + *(float *)(a2 + 0x48) * *(float *)(this + 0x54)
       + *(float *)(this + 0x5C) * *(float *)(a2 + 0x50);
  v239 = v9[1] * *(float *)(this + 0x58) + *v9 * *(float *)(this + 0x54) + v9[2] * *(float *)(this + 0x5C);
  v240 = v7[1] * *(float *)(this + 0x58) + *v7 * *(float *)(this + 0x54) + v7[2] * *(float *)(this + 0x5C);
  v224 = *(float *)(this + 0x58) * v10 + *(float *)(this + 0x54) * v11 + *(float *)(this + 0x5C) * v12;
  v255 = *(float *)(this + 0x58) * v13 + v14 * *(float *)(this + 0x54) + *(float *)(this + 0x5C) * v231;
  v227 = v255 * v175 + v224;
  v256 = *(float *)(a2 + 0x6C) * v238;
  v257 = fabs(v256);
  v20 = v257;
  v258 = *(float *)(a2 + 0x70) * v239;
  v259 = fabs(v258);
  v21 = v20 + v259;
  v260 = v240 * *(float *)(a2 + 0x74);
  v261 = fabs(v260);
  v262 = v21 + v261;
  v22 = v262;
  v263 = fabs(*(float *)(this + 0x70));
  v264 = v22 + v263;
  v23 = v264;
  if ( v264 < (double)v224 && v227 > v23 )
    return 0;
  v265 = -v23;
  if ( v265 > (double)v224 && v227 < (double)v265 )
    return 0;
  v241 = *(float *)(this + 0x64) * *(float *)(a2 + 0x4C)
       + *(float *)(this + 0x60) * *(float *)(a2 + 0x48)
       + *(float *)(this + 0x68) * *(float *)(a2 + 0x50);
  v242 = v9[1] * *(float *)(this + 0x64) + *v9 * *(float *)(this + 0x60) + v9[2] * *(float *)(this + 0x68);
  v243 = v7[1] * *(float *)(this + 0x64) + *v7 * *(float *)(this + 0x60) + v7[2] * *(float *)(this + 0x68);
  v225 = *(float *)(this + 0x64) * v10 + *(float *)(this + 0x60) * v11 + *(float *)(this + 0x68) * v12;
  v266 = *(float *)(this + 0x64) * v13 + *(float *)(this + 0x60) * v14 + *(float *)(this + 0x68) * v231;
  v228 = v266 * v175 + v225;
  v267 = *(float *)(a2 + 0x6C) * v241;
  v268 = fabs(v267);
  v24 = v268;
  v269 = *(float *)(a2 + 0x70) * v242;
  v270 = fabs(v269);
  v25 = v24 + v270;
  v271 = v243 * *(float *)(a2 + 0x74);
  v272 = fabs(v271);
  v273 = v25 + v272;
  v26 = v273;
  v274 = fabs(*(float *)(this + 0x74));
  v275 = v26 + v274;
  v27 = v275;
  if ( v275 < (double)v225 && v228 > v27 )
    return 0;
  v276 = -v27;
  if ( v276 > (double)v225 && v228 < (double)v276 )
    return 0;
  v277 = *(float *)(this + 0x6C) * v235;
  v278 = fabs(v277);
  v28 = v278;
  v279 = *(float *)(this + 0x70) * v238;
  v280 = fabs(v279);
  v29 = v28 + v280;
  v281 = *(float *)(this + 0x74) * v241;
  v282 = fabs(v281);
  v283 = v29 + v282;
  v30 = v283;
  v284 = fabs(*(float *)(a2 + 0x6C));
  v285 = v30 + v284;
  v159 = v10 * *(float *)(a2 + 0x4C) + *(float *)(a2 + 0x48) * v11 + *(float *)(a2 + 0x50) * v12;
  v181 = v13 * *(float *)(a2 + 0x4C) + *(float *)(a2 + 0x48) * v14 + *(float *)(a2 + 0x50) * v231;
  v31 = v159;
  v160 = v181 * v175 + v159;
  if ( v285 < v31 && v285 < (double)v160 )
    return 0;
  v286 = -v285;
  if ( v286 > v31 && v160 < (double)v286 )
    return 0;
  v287 = *(float *)(this + 0x6C) * v236;
  v288 = fabs(v287);
  v32 = v288;
  v289 = *(float *)(this + 0x70) * v239;
  v290 = fabs(v289);
  v33 = v32 + v290;
  v291 = *(float *)(this + 0x74) * v242;
  v292 = fabs(v291);
  v293 = v33 + v292;
  v34 = v293;
  v294 = fabs(*(float *)(a2 + 0x70));
  v295 = v34 + v294;
  v161 = v9[1] * v10 + v11 * *v9 + v9[2] * v12;
  v182 = v9[1] * v13 + v14 * *v9 + v9[2] * v231;
  v35 = v161;
  v162 = v182 * v175 + v161;
  if ( v295 < v35 && v295 < (double)v162 )
    return 0;
  v296 = -v295;
  if ( v296 > v35 && v162 < (double)v296 )
    return 0;
  v297 = *(float *)(this + 0x6C) * v237;
  v298 = fabs(v297);
  v36 = v298;
  v299 = *(float *)(this + 0x70) * v240;
  v300 = fabs(v299);
  v37 = v36 + v300;
  v301 = *(float *)(this + 0x74) * v243;
  v302 = fabs(v301);
  v303 = v37 + v302;
  v38 = v303;
  v304 = fabs(*(float *)(a2 + 0x74));
  v305 = v38 + v304;
  v163 = v12 * v7[2] + v11 * *v7 + v10 * v7[1];
  v183 = v229 * *v7 + v230 * v7[1] + v7[2] * v231;
  v39 = v163;
  v164 = v183 * v175 + v163;
  if ( v305 < v39 && v164 > (double)v305 )
    return 0;
  v306 = -v305;
  if ( v306 > v39 && v164 < (double)v306 )
    return 0;
  v307 = *(float *)(a2 + 0x70) * v237;
  v308 = fabs(v307);
  v40 = v308;
  v309 = v236 * *(float *)(a2 + 0x74);
  v310 = fabs(v309);
  v311 = v40 + v310;
  v41 = v311;
  v42 = v241;
  v312 = *(float *)(this + 0x70) * v241;
  v313 = fabs(v312);
  v43 = v313;
  v314 = *(float *)(this + 0x74) * v238;
  v315 = fabs(v314);
  v316 = v43 + v315;
  v44 = v41 + v316;
  v45 = v238;
  v317 = v44;
  v165 = v225 * v238 - v241 * v224;
  if ( v317 >= (double)v165 )
  {
    v319 = -v317;
    if ( v319 <= (double)v165 )
    {
      v47 = v228;
    }
    else
    {
      v50 = v45 * v228;
      v47 = v228;
      v51 = v50 - v42 * v227;
      v52 = v319;
      v320 = v51;
      if ( v320 < v52 )
        return 0;
    }
  }
  else
  {
    v46 = v45 * v228;
    v47 = v228;
    v48 = v46 - v42 * v227;
    v49 = v317;
    v318 = v48;
    if ( v318 > v49 )
      return 0;
  }
  v53 = v47;
  v321 = v237 * *(float *)(a2 + 0x6C);
  v322 = fabs(v321);
  v54 = v322;
  v323 = v235 * *(float *)(a2 + 0x74);
  v324 = fabs(v323);
  v55 = v54 + v324;
  v56 = v235;
  v325 = v55;
  v57 = v325;
  v58 = v242;
  v326 = *(float *)(this + 0x70) * v242;
  v327 = fabs(v326);
  v59 = v327;
  v328 = *(float *)(this + 0x74) * v239;
  v329 = fabs(v328);
  v330 = v59 + v329;
  v60 = v57 + v330;
  v61 = v239;
  v331 = v60;
  v166 = v225 * v239 - v242 * v224;
  if ( v331 >= (double)v166 )
  {
    v333 = -v331;
    if ( v333 > (double)v166 )
    {
      v64 = v61 * v53;
      v65 = v333;
      v334 = v64 - v58 * v227;
      if ( v334 < v65 )
        return 0;
    }
  }
  else
  {
    v62 = v61 * v53;
    v63 = v331;
    v332 = v62 - v58 * v227;
    if ( v332 > v63 )
      return 0;
  }
  v335 = *(float *)(a2 + 0x6C) * v236;
  v336 = fabs(v335);
  v66 = v336;
  v337 = *(float *)(a2 + 0x70) * v56;
  v338 = fabs(v337);
  v339 = v66 + v338;
  v67 = v339;
  v68 = v243;
  v340 = *(float *)(this + 0x70) * v243;
  v341 = fabs(v340);
  v69 = v341;
  v342 = *(float *)(this + 0x74) * v240;
  v343 = fabs(v342);
  v344 = v69 + v343;
  v70 = v67 + v344;
  v71 = v240;
  v345 = v70;
  v167 = v225 * v240 - v243 * v224;
  v72 = v167;
  if ( v345 >= (double)v167 )
  {
    v347 = -v345;
    v74 = v347 < v72;
    v75 = v347 == v72;
    v76 = v347;
    if ( !v74 && !v75 )
    {
      v348 = v53 * v71 - v68 * v227;
      if ( v348 < v76 )
        return 0;
    }
  }
  else
  {
    v73 = v345;
    v346 = v53 * v71 - v68 * v227;
    if ( v346 > v73 )
      return 0;
  }
  v349 = *(float *)(this + 0x6C) * v241;
  v350 = fabs(v349);
  v77 = v350;
  v351 = *(float *)(this + 0x74) * v56;
  v352 = fabs(v351);
  v353 = v77 + v352;
  v78 = v353;
  v354 = *(float *)(a2 + 0x70) * v71;
  v355 = fabs(v354);
  v79 = v355;
  v356 = v239 * *(float *)(a2 + 0x74);
  v357 = fabs(v356);
  v358 = v79 + v357;
  v359 = v78 + v358;
  v80 = v241;
  v168 = v241 * v223 - v225 * v56;
  if ( v359 >= (double)v168 )
  {
    v360 = -v359;
    if ( v360 <= (double)v168 )
    {
      v82 = v226;
      goto LABEL_58;
    }
    v83 = v80 * v226 - v53 * v56;
    v82 = v226;
    v185 = v83;
    if ( v360 <= (double)v185 )
      goto LABEL_58;
    return 0;
  }
  v81 = v80 * v226 - v53 * v56;
  v82 = v226;
  v184 = v81;
  if ( v359 < (double)v184 )
    return 0;
LABEL_58:
  v84 = v82;
  v85 = v71 * *(float *)(a2 + 0x6C);
  v86 = v84;
  v361 = v85;
  v362 = fabs(v361);
  v87 = v362;
  v363 = v238 * *(float *)(a2 + 0x74);
  v364 = fabs(v363);
  v365 = v87 + v364;
  v88 = v365;
  v366 = *(float *)(this + 0x6C) * v242;
  v367 = fabs(v366);
  v89 = v367;
  v368 = *(float *)(this + 0x74) * v236;
  v369 = fabs(v368);
  v370 = v89 + v369;
  v371 = v88 + v370;
  v90 = v242;
  v169 = v242 * v223 - v225 * v236;
  if ( v371 >= (double)v169 )
  {
    v373 = -v371;
    if ( v373 > (double)v169 )
    {
      v93 = v90 * v86 - v53 * v236;
      v94 = v373;
      v374 = v93;
      if ( v374 < v94 )
        return 0;
    }
  }
  else
  {
    v91 = v90 * v86 - v53 * v236;
    v92 = v371;
    v372 = v91;
    if ( v372 > v92 )
      return 0;
  }
  v375 = *(float *)(a2 + 0x6C) * v239;
  v376 = fabs(v375);
  v95 = v376;
  v377 = *(float *)(a2 + 0x70) * v238;
  v378 = fabs(v377);
  v379 = v95 + v378;
  v96 = v379;
  v380 = *(float *)(this + 0x6C) * v68;
  v381 = fabs(v380);
  v97 = v381;
  v382 = *(float *)(this + 0x74) * v237;
  v383 = fabs(v382);
  v384 = v97 + v383;
  v385 = v96 + v384;
  v98 = v237;
  v170 = v68 * v223 - v225 * v237;
  if ( v385 >= (double)v170 )
  {
    v387 = -v385;
    if ( v387 <= (double)v170 )
    {
      v100 = v243;
    }
    else
    {
      v101 = v387;
      v388 = v68 * v86 - v98 * v53;
      v100 = v243;
      if ( v388 < v101 )
        return 0;
    }
  }
  else
  {
    v99 = v385;
    v386 = v68 * v86 - v98 * v53;
    v100 = v243;
    if ( v386 > v99 )
      return 0;
  }
  v389 = *(float *)(a2 + 0x70) * v100;
  v390 = fabs(v389);
  v102 = v390;
  v391 = v242 * *(float *)(a2 + 0x74);
  v392 = fabs(v391);
  v393 = v102 + v392;
  v103 = v393;
  v394 = *(float *)(this + 0x6C) * v238;
  v395 = fabs(v394);
  v104 = v395;
  v396 = *(float *)(this + 0x70) * v56;
  v397 = fabs(v396);
  v398 = v104 + v397;
  v105 = v103 + v398;
  v106 = v238;
  v399 = v105;
  v171 = v224 * v56 - v238 * v223;
  if ( v399 >= (double)v171 )
  {
    v401 = -v399;
    if ( v401 <= (double)v171 )
    {
      v108 = v227;
    }
    else
    {
      v111 = v56 * v227;
      v108 = v227;
      v112 = v111 - v106 * v86;
      v113 = v401;
      v402 = v112;
      if ( v402 < v113 )
        return 0;
    }
  }
  else
  {
    v107 = v56 * v227;
    v108 = v227;
    v109 = v107 - v106 * v86;
    v110 = v399;
    v400 = v109;
    if ( v400 > v110 )
      return 0;
  }
  v114 = v86;
  v115 = v100 * *(float *)(a2 + 0x6C);
  v116 = v114;
  v403 = v115;
  v404 = fabs(v403);
  v117 = v404;
  v405 = v241 * *(float *)(a2 + 0x74);
  v406 = fabs(v405);
  v407 = v117 + v406;
  v118 = v407;
  v119 = v239;
  v408 = *(float *)(this + 0x6C) * v239;
  v409 = fabs(v408);
  v120 = v409;
  v410 = *(float *)(this + 0x70) * v236;
  v411 = fabs(v410);
  v412 = v120 + v411;
  v121 = v118 + v412;
  v122 = v236;
  v413 = v121;
  v172 = v224 * v236 - v239 * v223;
  if ( v413 >= (double)v172 )
  {
    v415 = -v413;
    if ( v415 > (double)v172 )
    {
      v125 = v122 * v108;
      v126 = v415;
      v416 = v125 - v119 * v116;
      if ( v416 < v126 )
        return 0;
    }
  }
  else
  {
    v123 = v122 * v108;
    v124 = v413;
    v414 = v123 - v119 * v116;
    if ( v414 > v124 )
      return 0;
  }
  v417 = *(float *)(a2 + 0x6C) * v242;
  v418 = fabs(v417);
  v127 = v418;
  v419 = *(float *)(a2 + 0x70) * v241;
  v420 = fabs(v419);
  v421 = v127 + v420;
  v128 = v421;
  v129 = v240;
  v422 = *(float *)(this + 0x6C) * v240;
  v423 = fabs(v422);
  v130 = v423;
  v424 = *(float *)(this + 0x70) * v237;
  v425 = fabs(v424);
  v426 = v130 + v425;
  v131 = v128 + v426;
  v132 = v237;
  v427 = v131;
  v173 = v224 * v237 - v240 * v223;
  v133 = v427;
  if ( v427 >= (double)v173 )
  {
    v429 = -v133;
    if ( v429 > (double)v173 )
    {
      v134 = v132 * v108 - v116 * v129;
      v135 = v429;
      v430 = v134;
      if ( v430 < v135 )
        return 0;
    }
  }
  else
  {
    v428 = v132 * v108 - v116 * v129;
    if ( v428 > v133 )
      return 0;
  }
  sub_498FE0(&v229, &v223, &v232);
  v227 = sub_47D9E0(&v229, v178);
  v228 = sub_47D9E0(&v229, (float *)(this + 0x60));
  v431 = fabs(v228);
  v176 = fabs(v227);
  v186 = fabs(sub_47D9E0((float *)(this + 0x48), &v223));
  v136 = v186;
  v187 = v228 * v239 - v227 * v242;
  v188 = fabs(v187);
  v137 = v188 * *(float *)(a2 + 0x70);
  v189 = v228 * v238 - v227 * v241;
  v190 = fabs(v189);
  v138 = v137 + v190 * *(float *)(a2 + 0x6C);
  v191 = v228 * v240 - v227 * v243;
  v192 = fabs(v191);
  v193 = v138 + v192 * *(float *)(a2 + 0x74);
  v139 = v193;
  v194 = v431 * *(float *)(this + 0x70) + *(float *)(this + 0x74) * v176;
  v195 = v139 + v194;
  if ( v195 < v136 )
    return 0;
  v226 = sub_47D9E0(&v229, (float *)(this + 0x48));
  v174 = fabs(v226);
  v196 = fabs(sub_47D9E0(v178, &v223));
  v140 = v196;
  v197 = v226 * v242 - v228 * v236;
  v198 = fabs(v197);
  v141 = v198 * *(float *)(a2 + 0x70);
  v199 = v226 * v241 - v228 * v235;
  v200 = fabs(v199);
  v142 = v141 + v200 * *(float *)(a2 + 0x6C);
  v201 = v226 * v243 - v228 * v237;
  v202 = fabs(v201);
  v203 = v142 + v202 * *(float *)(a2 + 0x74);
  v432 = *(float *)(this + 0x6C) * v431 + v174 * *(float *)(this + 0x74);
  v433 = v203 + v432;
  if ( v433 < v140 )
    return 0;
  v434 = fabs(sub_47D9E0((float *)(this + 0x60), &v223));
  v143 = v434;
  v435 = v227 * v236 - v226 * v239;
  v436 = fabs(v435);
  v144 = v436 * *(float *)(a2 + 0x70);
  v437 = v227 * v235 - v226 * v238;
  v438 = fabs(v437);
  v145 = v144 + v438 * *(float *)(a2 + 0x6C);
  v439 = v227 * v237 - v226 * v240;
  v440 = fabs(v439);
  v441 = v145 + v440 * *(float *)(a2 + 0x74);
  v146 = v441;
  v442 = *(float *)(this + 0x6C) * v176 + v174 * *(float *)(this + 0x70);
  v443 = v146 + v442;
  if ( v443 < v143 )
    return 0;
  v147 = v204;
  v227 = sub_47D9E0(&v229, v204);
  v228 = sub_47D9E0(&v229, v180);
  v444 = fabs(v228);
  v177 = fabs(v227);
  v205 = fabs(sub_47D9E0((float *)(a2 + 0x48), &v223));
  v148 = v205;
  v206 = v228 * v236 - v227 * v237;
  v207 = fabs(v206);
  v149 = v207 * *(float *)(this + 0x6C);
  v208 = v228 * v239 - v227 * v240;
  v209 = fabs(v208);
  v150 = v149 + v209 * *(float *)(this + 0x70);
  v210 = v228 * v242 - v227 * v243;
  v211 = fabs(v210);
  v212 = v150 + v211 * *(float *)(this + 0x74);
  v151 = v212;
  v213 = v177 * *(float *)(a2 + 0x74) + v444 * *(float *)(a2 + 0x70);
  v214 = v151 + v213;
  if ( v214 < v148 )
    return 0;
  v226 = sub_47D9E0(&v229, (float *)(a2 + 0x48));
  v179 = fabs(v226);
  v215 = fabs(sub_47D9E0(v147, &v223));
  v152 = v215;
  v216 = v226 * v237 - v228 * v235;
  v217 = fabs(v216);
  v153 = v217 * *(float *)(this + 0x6C);
  v218 = v226 * v240 - v228 * v238;
  v219 = fabs(v218);
  v154 = v153 + v219 * *(float *)(this + 0x70);
  v220 = v226 * v243 - v228 * v241;
  v221 = fabs(v220);
  v222 = v154 + v221 * *(float *)(this + 0x74);
  v445 = v179 * *(float *)(a2 + 0x74) + *(float *)(a2 + 0x6C) * v444;
  v446 = v222 + v445;
  if ( v446 < v152 )
    return 0;
  v447 = fabs(sub_47D9E0(v180, &v223));
  v155 = v447;
  v448 = v227 * v235 - v226 * v236;
  v449 = fabs(v448);
  v156 = v449 * *(float *)(this + 0x6C);
  v450 = v227 * v238 - v226 * v239;
  v451 = fabs(v450);
  v157 = v156 + v451 * *(float *)(this + 0x70);
  v452 = v227 * v241 - v226 * v242;
  v453 = fabs(v452);
  v454 = v157 + v453 * *(float *)(this + 0x74);
  v158 = v454;
  v455 = v179 * *(float *)(a2 + 0x70) + *(float *)(a2 + 0x6C) * v177;
  v456 = v158 + v455;
  return v456 >= v155;
}
