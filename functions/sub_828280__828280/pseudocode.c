void sub_828280()
{
  NiD3DPass *v0; // esi
  NiD3DTextureStage *v1; // edi
  int v2; // eax
  bool v3; // zf
  unsigned int *v4; // eax
  NiD3DTextureStage *v5; // eax
  unsigned int **v6; // ebp
  NiD3DTextureStage *v7; // eax
  unsigned int **v8; // ebp
  NiD3DTextureStage *v9; // eax
  unsigned int **v10; // ebp
  NiD3DTextureStage *v11; // eax
  unsigned int **v12; // ebp
  NiD3DTextureStage *v13; // eax
  unsigned int **v14; // ebp
  NiD3DTextureStage *v15; // eax
  unsigned int **v16; // ebp
  NiD3DTextureStage *v17; // eax
  unsigned int **v18; // ebp
  NiD3DTextureStage *v19; // eax
  NiD3DVertexShader *VertexShader; // ebp
  int v21; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  int v23; // ebx
  unsigned int **v24; // ebp
  NiD3DTextureStage *v25; // eax
  unsigned int **v26; // ebp
  NiD3DTextureStage *v27; // eax
  unsigned int **v28; // ebp
  NiD3DTextureStage *v29; // eax
  unsigned int **v30; // ebp
  NiD3DTextureStage *v31; // eax
  unsigned int **v32; // ebp
  NiD3DTextureStage *v33; // eax
  unsigned int **v34; // ebp
  NiD3DTextureStage *v35; // eax
  unsigned int **v36; // ebp
  NiD3DTextureStage *v37; // eax
  unsigned int **v38; // ebp
  NiD3DTextureStage *v39; // eax
  NiD3DVertexShader *v40; // ebp
  int v41; // ebx
  NiD3DPixelShader *v42; // ebp
  int v43; // ebx
  unsigned int **v44; // ebp
  NiD3DTextureStage *v45; // eax
  unsigned int **v46; // ebp
  NiD3DTextureStage *v47; // eax
  unsigned int **v48; // ebp
  NiD3DTextureStage *v49; // eax
  unsigned int **v50; // ebp
  NiD3DTextureStage *v51; // eax
  unsigned int **v52; // ebp
  NiD3DTextureStage *v53; // eax
  unsigned int **v54; // ebp
  NiD3DTextureStage *v55; // eax
  unsigned int **v56; // ebp
  NiD3DTextureStage *v57; // eax
  unsigned int **v58; // ebp
  NiD3DTextureStage *v59; // eax
  NiD3DVertexShader *v60; // ebp
  int v61; // ebx
  NiD3DPixelShader *v62; // ebp
  int v63; // ebx
  unsigned int **v64; // ebp
  NiD3DTextureStage *v65; // eax
  unsigned int **v66; // ebp
  NiD3DTextureStage *v67; // eax
  unsigned int **v68; // ebp
  NiD3DTextureStage *v69; // eax
  unsigned int **v70; // ebp
  NiD3DTextureStage *v71; // eax
  unsigned int **v72; // ebp
  NiD3DTextureStage *v73; // eax
  unsigned int *v74; // eax
  NiD3DTextureStage *v75; // eax
  unsigned int *v76; // edi
  unsigned int *v77; // eax
  NiD3DTextureStage *v78; // eax
  unsigned int *v79; // edi
  unsigned int *v80; // eax
  NiD3DTextureStage *v81; // eax
  unsigned int *v82; // eax
  NiD3DTextureStage *v83; // eax
  unsigned int *v84; // edi
  unsigned int *v85; // eax
  NiD3DTextureStage *v86; // eax
  unsigned int *v87; // edi
  unsigned int *v88; // eax
  NiD3DTextureStage *v89; // eax
  unsigned int *v90; // edi
  unsigned int *v91; // eax
  NiD3DTextureStage *v92; // eax
  unsigned int *v93; // edi
  unsigned int *v94; // eax
  NiD3DTextureStage *v95; // eax
  unsigned int *v96; // edi
  unsigned int *v97; // eax
  NiD3DTextureStage *v98; // eax
  unsigned int *v99; // edi
  unsigned int *v100; // eax
  NiD3DTextureStage *v101; // eax
  unsigned int *v102; // edi
  unsigned int *v103; // eax
  NiD3DTextureStage *v104; // eax
  unsigned int *v105; // eax
  NiD3DTextureStage *v106; // eax
  unsigned int *v107; // edi
  unsigned int *v108; // eax
  NiD3DTextureStage *v109; // eax
  unsigned int *v110; // edi
  unsigned int *v111; // eax
  NiD3DTextureStage *v112; // eax
  unsigned int *v113; // edi
  unsigned int *v114; // eax
  NiD3DTextureStage *v115; // eax
  unsigned int *v116; // edi
  unsigned int *v117; // eax
  NiD3DTextureStage *v118; // eax
  unsigned int *v119; // edi
  unsigned int *v120; // eax
  NiD3DTextureStage *v121; // eax
  unsigned int *v122; // edi
  unsigned int *v123; // eax
  NiD3DTextureStage *v124; // eax
  unsigned int *v125; // edi
  unsigned int *v126; // eax
  NiD3DTextureStage *v127; // eax
  unsigned int *v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // edi
  unsigned int *v131; // eax
  NiD3DTextureStage *v132; // eax
  unsigned int *v133; // edi
  unsigned int *v134; // eax
  NiD3DTextureStage *v135; // eax
  unsigned int *v136; // edi
  unsigned int *v137; // eax
  NiD3DTextureStage *v138; // eax
  unsigned int *v139; // edi
  unsigned int *v140; // eax
  NiD3DTextureStage *v141; // eax
  unsigned int *v142; // edi
  unsigned int *v143; // eax
  NiD3DTextureStage *v144; // eax
  unsigned int *v145; // edi
  unsigned int *v146; // eax
  NiD3DTextureStage *v147; // eax
  unsigned int *v148; // edi
  unsigned int *v149; // eax
  NiD3DTextureStage *v150; // eax
  unsigned int *v151; // eax
  NiD3DTextureStage *v152; // eax
  unsigned int *v153; // edi
  unsigned int *v154; // eax
  NiD3DTextureStage *v155; // eax
  unsigned int *v156; // edi
  unsigned int *v157; // eax
  NiD3DTextureStage *v158; // eax
  unsigned int *v159; // edi
  unsigned int *v160; // eax
  NiD3DTextureStage *v161; // eax
  unsigned int *v162; // edi
  unsigned int *v163; // eax
  NiD3DTextureStage *v164; // eax
  unsigned int *v165; // edi
  unsigned int *v166; // eax
  NiD3DTextureStage *v167; // eax
  unsigned int *v168; // edi
  unsigned int *v169; // eax
  NiD3DTextureStage *v170; // eax
  unsigned int *v171; // edi
  unsigned int *v172; // eax
  NiD3DTextureStage *v173; // eax
  unsigned int *v174; // eax
  NiD3DTextureStage *v175; // eax
  unsigned int *v176; // edi
  unsigned int *v177; // eax
  NiD3DTextureStage *v178; // eax
  unsigned int *v179; // edi
  unsigned int *v180; // eax
  NiD3DTextureStage *v181; // eax
  unsigned int *v182; // edi
  unsigned int *v183; // eax
  NiD3DTextureStage *v184; // eax
  unsigned int *v185; // edi
  unsigned int *v186; // eax
  NiD3DTextureStage *v187; // eax
  unsigned int *v188; // edi
  unsigned int *v189; // eax
  NiD3DTextureStage *v190; // eax
  unsigned int *v191; // edi
  unsigned int *v192; // eax
  NiD3DTextureStage *v193; // eax
  unsigned int *v194; // edi
  unsigned int *v195; // eax
  NiD3DTextureStage *v196; // eax
  unsigned int *v197; // eax
  NiD3DTextureStage *v198; // eax
  unsigned int *v199; // edi
  unsigned int *v200; // eax
  NiD3DTextureStage *v201; // eax
  unsigned int *v202; // edi
  unsigned int *v203; // eax
  NiD3DTextureStage *v204; // eax
  unsigned int *v205; // edi
  unsigned int *v206; // eax
  NiD3DTextureStage *v207; // eax
  unsigned int *v208; // edi
  unsigned int *v209; // eax
  NiD3DTextureStage *v210; // eax
  unsigned int *v211; // edi
  unsigned int *v212; // eax
  NiD3DTextureStage *v213; // eax
  unsigned int *v214; // edi
  unsigned int *v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  unsigned int *v218; // eax
  NiD3DTextureStage *v219; // eax
  unsigned int *v220; // eax
  NiD3DTextureStage *v221; // eax
  unsigned int *v222; // edi
  unsigned int *v223; // eax
  NiD3DTextureStage *v224; // eax
  unsigned int *v225; // edi
  unsigned int *v226; // eax
  NiD3DTextureStage *v227; // eax
  unsigned int *v228; // edi
  unsigned int *v229; // eax
  NiD3DTextureStage *v230; // eax
  unsigned int *v231; // edi
  unsigned int *v232; // eax
  NiD3DTextureStage *v233; // eax
  unsigned int *v234; // edi
  unsigned int *v235; // eax
  NiD3DTextureStage *v236; // eax
  unsigned int *v237; // edi
  unsigned int *v238; // eax
  NiD3DTextureStage *v239; // eax
  unsigned int *v240; // edi
  unsigned int *v241; // eax
  NiD3DTextureStage *v242; // eax
  unsigned int *v243; // eax
  NiD3DTextureStage *v244; // eax
  unsigned int *v245; // edi
  unsigned int *v246; // eax
  NiD3DTextureStage *v247; // eax
  unsigned int *v248; // edi
  unsigned int *v249; // eax
  NiD3DTextureStage *v250; // eax
  unsigned int *v251; // edi
  unsigned int *v252; // eax
  NiD3DTextureStage *v253; // eax
  unsigned int *v254; // edi
  unsigned int *v255; // eax
  NiD3DTextureStage *v256; // eax
  unsigned int *v257; // edi
  unsigned int *v258; // eax
  NiD3DTextureStage *v259; // eax
  unsigned int *v260; // edi
  unsigned int *v261; // eax
  NiD3DTextureStage *v262; // eax
  unsigned int *v263; // edi
  unsigned int *v264; // eax
  NiD3DTextureStage *v265; // eax
  unsigned int *v266; // eax
  NiD3DTextureStage *v267; // eax
  unsigned int *v268; // edi
  unsigned int *v269; // eax
  NiD3DTextureStage *v270; // eax
  unsigned int *v271; // edi
  unsigned int *v272; // eax
  NiD3DTextureStage *v273; // eax
  unsigned int *v274; // edi
  unsigned int *v275; // eax
  NiD3DTextureStage *v276; // eax
  unsigned int *v277; // edi
  unsigned int *v278; // eax
  NiD3DTextureStage *v279; // eax
  unsigned int *v280; // edi
  unsigned int *v281; // eax
  NiD3DTextureStage *v282; // eax
  unsigned int *v283; // edi
  unsigned int *v284; // eax
  NiD3DTextureStage *v285; // eax
  unsigned int *v286; // edi
  unsigned int *v287; // eax
  NiD3DTextureStage *v288; // eax
  NiD3DPass *v289; // esi
  unsigned int *v290; // eax
  NiD3DTextureStage *v291; // eax
  unsigned int *v292; // edi
  unsigned int *v293; // eax
  NiD3DTextureStage *v294; // eax
  unsigned int *v295; // edi
  unsigned int *v296; // eax
  NiD3DTextureStage *v297; // eax
  unsigned int *v298; // edi
  unsigned int *v299; // eax
  NiD3DTextureStage *v300; // eax
  unsigned int *v301; // edi
  unsigned int *v302; // eax
  NiD3DTextureStage *v303; // eax
  unsigned int *v304; // edi
  unsigned int *v305; // eax
  NiD3DTextureStage *v306; // eax
  unsigned int *v307; // edi
  unsigned int *v308; // eax
  NiD3DTextureStage *v309; // eax
  unsigned int *v310; // edi
  unsigned int *v311; // eax
  NiD3DTextureStage *v312; // eax
  NiD3DPass *v313; // esi
  unsigned int *v314; // eax
  NiD3DTextureStage *v315; // eax
  unsigned int *v316; // edi
  unsigned int *v317; // eax
  NiD3DTextureStage *v318; // eax
  unsigned int *v319; // edi
  unsigned int *v320; // eax
  NiD3DTextureStage *v321; // eax
  unsigned int *v322; // edi
  unsigned int *v323; // eax
  NiD3DTextureStage *v324; // eax
  unsigned int *v325; // edi
  unsigned int *v326; // eax
  NiD3DTextureStage *v327; // eax
  unsigned int *v328; // edi
  unsigned int *v329; // eax
  NiD3DTextureStage *v330; // eax
  unsigned int *v331; // edi
  unsigned int *v332; // eax
  NiD3DTextureStage *v333; // eax
  unsigned int *v334; // edi
  unsigned int *v335; // eax
  NiD3DTextureStage *v336; // eax
  NiD3DPass *v337; // esi
  unsigned int *v338; // eax
  NiD3DTextureStage *v339; // eax
  unsigned int *v340; // edi
  unsigned int *v341; // eax
  NiD3DTextureStage *v342; // eax
  unsigned int *v343; // edi
  unsigned int *v344; // eax
  NiD3DTextureStage *v345; // eax
  unsigned int *v346; // edi
  unsigned int *v347; // eax
  NiD3DTextureStage *v348; // eax
  unsigned int *v349; // edi
  unsigned int *v350; // eax
  NiD3DTextureStage *v351; // eax
  unsigned int *v352; // edi
  unsigned int *v353; // eax
  NiD3DTextureStage *v354; // eax
  unsigned int *v355; // edi
  unsigned int *v356; // eax
  NiD3DTextureStage *v357; // eax
  unsigned int *v358; // edi
  unsigned int *v359; // eax
  NiD3DTextureStage *v360; // eax
  NiD3DPass *v361; // esi
  unsigned int *v362; // eax
  NiD3DTextureStage *v363; // eax
  unsigned int *v364; // edi
  unsigned int *v365; // eax
  NiD3DTextureStage *v366; // eax
  unsigned int *v367; // edi
  unsigned int *v368; // eax
  NiD3DTextureStage *v369; // eax
  unsigned int *v370; // edi
  unsigned int *v371; // eax
  NiD3DTextureStage *v372; // eax
  unsigned int *v373; // edi
  unsigned int *v374; // eax
  NiD3DTextureStage *v375; // eax
  unsigned int *v376; // edi
  unsigned int *v377; // eax
  NiD3DTextureStage *v378; // eax
  unsigned int *v379; // edi
  unsigned int *v380; // eax
  NiD3DTextureStage *v381; // eax
  unsigned int *v382; // edi
  unsigned int *v383; // eax
  NiD3DTextureStage *v384; // eax
  NiD3DPass *v385; // esi
  unsigned int *v386; // eax
  NiD3DTextureStage *v387; // eax
  unsigned int *v388; // edi
  unsigned int *v389; // eax
  NiD3DTextureStage *v390; // eax
  unsigned int *v391; // edi
  unsigned int *v392; // eax
  NiD3DTextureStage *v393; // eax
  unsigned int *v394; // edi
  unsigned int *v395; // eax
  NiD3DTextureStage *v396; // eax
  unsigned int *v397; // edi
  unsigned int *v398; // eax
  NiD3DTextureStage *v399; // eax
  unsigned int *v400; // edi
  unsigned int *v401; // eax
  NiD3DTextureStage *v402; // eax
  unsigned int *v403; // edi
  unsigned int *v404; // eax
  NiD3DTextureStage *v405; // eax
  unsigned int *v406; // edi
  unsigned int *v407; // eax
  NiD3DTextureStage *v408; // eax
  NiD3DPass *v409; // esi
  unsigned int *v410; // eax
  NiD3DTextureStage *v411; // eax
  unsigned int *v412; // edi
  unsigned int *v413; // eax
  NiD3DTextureStage *v414; // eax
  unsigned int *v415; // edi
  unsigned int *v416; // eax
  NiD3DTextureStage *v417; // eax
  unsigned int *v418; // edi
  unsigned int *v419; // eax
  NiD3DTextureStage *v420; // eax
  unsigned int *v421; // edi
  unsigned int *v422; // eax
  NiD3DTextureStage *v423; // eax
  unsigned int *v424; // edi
  unsigned int *v425; // eax
  NiD3DTextureStage *v426; // eax
  unsigned int *v427; // edi
  unsigned int *v428; // eax
  NiD3DTextureStage *v429; // eax
  unsigned int *v430; // edi
  unsigned int *v431; // eax
  NiD3DTextureStage *v432; // eax
  NiD3DPass *v433; // esi
  unsigned int *v434; // eax
  NiD3DTextureStage *v435; // eax
  unsigned int *v436; // edi
  unsigned int *v437; // eax
  NiD3DTextureStage *v438; // eax
  unsigned int *v439; // edi
  unsigned int *v440; // eax
  NiD3DTextureStage *v441; // eax
  unsigned int *v442; // edi
  unsigned int *v443; // eax
  NiD3DTextureStage *v444; // eax
  unsigned int *v445; // edi
  unsigned int *v446; // eax
  NiD3DTextureStage *v447; // eax
  unsigned int *v448; // edi
  unsigned int *v449; // eax
  NiD3DTextureStage *v450; // eax
  unsigned int *v451; // edi
  unsigned int *v452; // eax
  NiD3DTextureStage *v453; // eax
  unsigned int *v454; // edi
  unsigned int *v455; // eax
  NiD3DTextureStage *v456; // eax
  NiD3DPass *v457; // esi
  unsigned int *v458; // eax
  NiD3DTextureStage *v459; // eax
  unsigned int *v460; // edi
  unsigned int *v461; // eax
  NiD3DTextureStage *v462; // eax
  unsigned int *v463; // edi
  unsigned int *v464; // eax
  NiD3DTextureStage *v465; // eax
  unsigned int *v466; // edi
  unsigned int *v467; // eax
  NiD3DTextureStage *v468; // eax
  unsigned int *v469; // edi
  unsigned int *v470; // eax
  NiD3DTextureStage *v471; // eax
  unsigned int *v472; // edi
  unsigned int *v473; // eax
  NiD3DTextureStage *v474; // eax
  unsigned int *v475; // edi
  unsigned int *v476; // eax
  NiD3DTextureStage *v477; // eax
  unsigned int *v478; // edi
  unsigned int *v479; // eax
  NiD3DTextureStage *v480; // eax
  unsigned int *a3; // [esp+18h] [ebp-18h] BYREF
  NiD3DPassVtbl **v482; // [esp+1Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v483; // [esp+20h] [ebp-10h] BYREF
  unsigned int v484; // [esp+2Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v482 = 0;
  v484 = 0;
  a3 = 0;
  v2 = dword_B45850;
  v3 = dword_B45850 == 0;
  LOBYTE(v484) = 1;
  if ( !v3 )
  {
    v0 = (NiD3DPass *)v2;
    v482 = (NiD3DPassVtbl **)v2;
    if ( v2 )
      ++*(_DWORD *)(v2 + 0x60);
  }
  if ( v0->StageCount < 8 )
  {
    v4 = (unsigned int *)*sub_772630(&v483);
    if ( v4 )
    {
      v1 = (NiD3DTextureStage *)v4;
      ++v4[0x17];
      a3 = v4;
    }
    v5 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v5[7].Unk08 )
        sub_772560(v5);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v6 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v6;
    LOBYTE(v484) = 3;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v6;
      a3 = *v6;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v7 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v8 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v8;
    LOBYTE(v484) = 4;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v8;
      a3 = *v8;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v9 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v9[7].Unk08 )
        sub_772560(v9);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v10 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v10;
    LOBYTE(v484) = 5;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v10;
      a3 = *v10;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v11 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v11[7].Unk08 )
        sub_772560(v11);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v12 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v12;
    LOBYTE(v484) = 6;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v12;
      a3 = *v12;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v13 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v13[7].Unk08 )
        sub_772560(v13);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v14 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v14;
    LOBYTE(v484) = 7;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v14;
      a3 = *v14;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v15 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v15[7].Unk08 )
        sub_772560(v15);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, &v1->Stage);
    v16 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v16;
    LOBYTE(v484) = 8;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v16;
      a3 = *v16;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v17 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v17[7].Unk08 )
        sub_772560(v17);
    }
    sub_801110((int)v1, 6, 1, 2);
    sub_760010(v0, 6u, &v1->Stage);
    v18 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v18;
    LOBYTE(v484) = 9;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v18;
      a3 = *v18;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v19 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v19[7].Unk08 )
        sub_772560(v19);
    }
    sub_801110((int)v1, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  VertexShader = v0->VertexShader;
  v21 = dword_B45390;
  if ( VertexShader != (NiD3DVertexShader *)dword_B45390 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v21;
    if ( v21 )
      InterlockedIncrement((volatile LONG *)(v21 + 4));
  }
  PixelShader = v0->PixelShader;
  v23 = dword_B45180;
  if ( PixelShader != (NiD3DPixelShader *)dword_B45180 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v23;
    if ( v23 )
      InterlockedIncrement((volatile LONG *)(v23 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45854;
  dword_B43DD0 = 0x38082;
  dword_B44460 = 0x10C;
  dword_B43740 = 0x18000;
  dword_B44AF0 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45854;
    v482 = (NiD3DPassVtbl **)dword_B45854;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v24 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v24;
    LOBYTE(v484) = 0xA;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v24;
      a3 = *v24;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v25 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v25[7].Unk08 )
        sub_772560(v25);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v26 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v26;
    LOBYTE(v484) = 0xB;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v26;
      a3 = *v26;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v27 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v27[7].Unk08 )
        sub_772560(v27);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v28 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v28;
    LOBYTE(v484) = 0xC;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v28;
      a3 = *v28;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v29 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v30 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v30;
    LOBYTE(v484) = 0xD;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v30;
      a3 = *v30;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v31 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v32 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v32;
    LOBYTE(v484) = 0xE;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v32;
      a3 = *v32;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v33 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v34 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v34;
    LOBYTE(v484) = 0xF;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v34;
      a3 = *v34;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v35 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v35[7].Unk08 )
        sub_772560(v35);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, &v1->Stage);
    v36 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v36;
    LOBYTE(v484) = 0x10;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v36;
      a3 = *v36;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v37 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v37[7].Unk08 )
        sub_772560(v37);
    }
    sub_801110((int)v1, 6, 1, 2);
    sub_760010(v0, 6u, &v1->Stage);
    v38 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v38;
    LOBYTE(v484) = 0x11;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v38;
      a3 = *v38;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v39 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    sub_801110((int)v1, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  v40 = v0->VertexShader;
  v41 = dword_B45390;
  if ( v40 != (NiD3DVertexShader *)dword_B45390 )
  {
    if ( v40 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v40)(v40, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v41;
    if ( v41 )
      InterlockedIncrement((volatile LONG *)(v41 + 4));
  }
  v42 = v0->PixelShader;
  v43 = dword_B45184;
  if ( v42 != (NiD3DPixelShader *)dword_B45184 )
  {
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v43;
    if ( v43 )
      InterlockedIncrement((volatile LONG *)(v43 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45858;
  dword_B43DD4 = 0x38082;
  dword_B44464 = 0x18C;
  dword_B43744 = 0x18000;
  dword_B44AF4 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45858;
    v482 = (NiD3DPassVtbl **)dword_B45858;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v44 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v44;
    LOBYTE(v484) = 0x12;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v44;
      a3 = *v44;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v45 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v45[7].Unk08 )
        sub_772560(v45);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v46 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v46;
    LOBYTE(v484) = 0x13;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v46;
      a3 = *v46;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v47 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v47[7].Unk08 )
        sub_772560(v47);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v48 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v48;
    LOBYTE(v484) = 0x14;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v48;
      a3 = *v48;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v49 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v49[7].Unk08 )
        sub_772560(v49);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v50 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v50;
    LOBYTE(v484) = 0x15;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v50;
      a3 = *v50;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v51 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v51[7].Unk08 )
        sub_772560(v51);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v52 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v52;
    LOBYTE(v484) = 0x16;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v52;
      a3 = *v52;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v53 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v53[7].Unk08 )
        sub_772560(v53);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v54 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v54;
    LOBYTE(v484) = 0x17;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v54;
      a3 = *v54;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v55 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v55[7].Unk08 )
        sub_772560(v55);
    }
    sub_801110((int)v1, 5, 3, 0);
    sub_76C910(v1, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, &v1->Stage);
    v56 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v56;
    LOBYTE(v484) = 0x18;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v56;
      a3 = *v56;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v57 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v57[7].Unk08 )
        sub_772560(v57);
    }
    sub_801110((int)v1, 6, 1, 2);
    sub_760010(v0, 6u, &v1->Stage);
    v58 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v58;
    LOBYTE(v484) = 0x19;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v58;
      a3 = *v58;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v59 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v59[7].Unk08 )
        sub_772560(v59);
    }
    sub_801110((int)v1, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  v60 = v0->VertexShader;
  v61 = dword_B45390;
  if ( v60 != (NiD3DVertexShader *)dword_B45390 )
  {
    if ( v60 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v60 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v60)(v60, 1);
    }
    v0->VertexShader = (NiD3DVertexShader *)v61;
    if ( v61 )
      InterlockedIncrement((volatile LONG *)(v61 + 4));
  }
  v62 = v0->PixelShader;
  v63 = dword_B45188;
  if ( v62 != (NiD3DPixelShader *)dword_B45188 )
  {
    if ( v62 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v62)(v62, 1);
    }
    v0->PixelShader = (NiD3DPixelShader *)v63;
    if ( v63 )
      InterlockedIncrement((volatile LONG *)(v63 + 4));
  }
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45868;
  dword_B43DD8 = 0x38082;
  dword_B44468 = 0x18C;
  dword_B43748 = 0x18000;
  dword_B44AF8 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45868;
    v482 = (NiD3DPassVtbl **)dword_B45868;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v64 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v64;
    LOBYTE(v484) = 0x1A;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v64;
      a3 = *v64;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v65 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v65[7].Unk08 )
        sub_772560(v65);
    }
    sub_801110((int)v1, 0, 1, 2);
    sub_760010(v0, 0, &v1->Stage);
    v66 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v66;
    LOBYTE(v484) = 0x1B;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v66;
      a3 = *v66;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v67 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v67[7].Unk08 )
        sub_772560(v67);
    }
    sub_801110((int)v1, 1, 1, 2);
    sub_760010(v0, 1u, &v1->Stage);
    v68 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v68;
    LOBYTE(v484) = 0x1C;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v68;
      a3 = *v68;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v69 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v69[7].Unk08 )
        sub_772560(v69);
    }
    sub_801110((int)v1, 2, 1, 2);
    sub_760010(v0, 2u, &v1->Stage);
    v70 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v70;
    LOBYTE(v484) = 0x1D;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v70;
      a3 = *v70;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v71 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v71[7].Unk08 )
        sub_772560(v71);
    }
    sub_801110((int)v1, 3, 1, 2);
    sub_760010(v0, 3u, &v1->Stage);
    v72 = (unsigned int **)sub_772630(&v483);
    v3 = v1 == (NiD3DTextureStage *)*v72;
    LOBYTE(v484) = 0x1E;
    if ( !v3 )
    {
      if ( v1 )
      {
        v3 = v1[7].Unk08-- == 1;
        if ( v3 )
          sub_772560(v1);
      }
      v1 = (NiD3DTextureStage *)*v72;
      a3 = *v72;
      if ( a3 )
        ++v1[7].Unk08;
    }
    v73 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v73[7].Unk08 )
        sub_772560(v73);
    }
    sub_801110((int)v1, 4, 1, 2);
    sub_760010(v0, 4u, &v1->Stage);
    v74 = sub_772630(&v483);
    LOBYTE(v484) = 0x1F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v74);
    v75 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v75[7].Unk08 )
        sub_772560(v75);
    }
    v76 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v76, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v76);
    v77 = sub_772630(&v483);
    LOBYTE(v484) = 0x20;
    sub_75FAE0((NiD3DTextureStage **)&a3, v77);
    v78 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v78[7].Unk08 )
        sub_772560(v78);
    }
    v79 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v79);
    v80 = sub_772630(&v483);
    LOBYTE(v484) = 0x21;
    sub_75FAE0((NiD3DTextureStage **)&a3, v80);
    v81 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v81[7].Unk08 )
        sub_772560(v81);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45394);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45180);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B4586C;
  dword_B43DE8 = 0x78088;
  dword_B44478 = 0x10C;
  dword_B43758 = 0x18000;
  dword_B44B08 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4586C;
    v482 = (NiD3DPassVtbl **)dword_B4586C;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v82 = sub_772630(&v483);
    LOBYTE(v484) = 0x22;
    sub_75FAE0((NiD3DTextureStage **)&a3, v82);
    v83 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v83[7].Unk08 )
        sub_772560(v83);
    }
    v84 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v84);
    v85 = sub_772630(&v483);
    LOBYTE(v484) = 0x23;
    sub_75FAE0((NiD3DTextureStage **)&a3, v85);
    v86 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v86[7].Unk08 )
        sub_772560(v86);
    }
    v87 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v87);
    v88 = sub_772630(&v483);
    LOBYTE(v484) = 0x24;
    sub_75FAE0((NiD3DTextureStage **)&a3, v88);
    v89 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v89[7].Unk08 )
        sub_772560(v89);
    }
    v90 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v90);
    v91 = sub_772630(&v483);
    LOBYTE(v484) = 0x25;
    sub_75FAE0((NiD3DTextureStage **)&a3, v91);
    v92 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v92[7].Unk08 )
        sub_772560(v92);
    }
    v93 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v93);
    v94 = sub_772630(&v483);
    LOBYTE(v484) = 0x26;
    sub_75FAE0((NiD3DTextureStage **)&a3, v94);
    v95 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v95[7].Unk08 )
        sub_772560(v95);
    }
    v96 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v96);
    v97 = sub_772630(&v483);
    LOBYTE(v484) = 0x27;
    sub_75FAE0((NiD3DTextureStage **)&a3, v97);
    v98 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v98[7].Unk08 )
        sub_772560(v98);
    }
    v99 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v99, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v99);
    v100 = sub_772630(&v483);
    LOBYTE(v484) = 0x28;
    sub_75FAE0((NiD3DTextureStage **)&a3, v100);
    v101 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v101[7].Unk08 )
        sub_772560(v101);
    }
    v102 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v102);
    v103 = sub_772630(&v483);
    LOBYTE(v484) = 0x29;
    sub_75FAE0((NiD3DTextureStage **)&a3, v103);
    v104 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v104[7].Unk08 )
        sub_772560(v104);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45394);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45184);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45870;
  dword_B43DEC = 0x78088;
  dword_B4447C = 0x18C;
  dword_B4375C = 0x18000;
  dword_B44B0C = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45870;
    v482 = (NiD3DPassVtbl **)dword_B45870;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v105 = sub_772630(&v483);
    LOBYTE(v484) = 0x2A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v105);
    v106 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v106[7].Unk08 )
        sub_772560(v106);
    }
    v107 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v107);
    v108 = sub_772630(&v483);
    LOBYTE(v484) = 0x2B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v108);
    v109 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v109[7].Unk08 )
        sub_772560(v109);
    }
    v110 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v110);
    v111 = sub_772630(&v483);
    LOBYTE(v484) = 0x2C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v111);
    v112 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v112[7].Unk08 )
        sub_772560(v112);
    }
    v113 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v113);
    v114 = sub_772630(&v483);
    LOBYTE(v484) = 0x2D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v114);
    v115 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v115[7].Unk08 )
        sub_772560(v115);
    }
    v116 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v116);
    v117 = sub_772630(&v483);
    LOBYTE(v484) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v117);
    v118 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v118[7].Unk08 )
        sub_772560(v118);
    }
    v119 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v119);
    v120 = sub_772630(&v483);
    LOBYTE(v484) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v120);
    v121 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v121[7].Unk08 )
        sub_772560(v121);
    }
    v122 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v122, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v122);
    v123 = sub_772630(&v483);
    LOBYTE(v484) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v123);
    v124 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v124[7].Unk08 )
        sub_772560(v124);
    }
    v125 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v125);
    v126 = sub_772630(&v483);
    LOBYTE(v484) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v126);
    v127 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v127[7].Unk08 )
        sub_772560(v127);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45394);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45188);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45884;
  dword_B43DF0 = 0x78088;
  dword_B44480 = 0x18C;
  dword_B43760 = 0x18000;
  dword_B44B10 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45884;
    v482 = (NiD3DPassVtbl **)dword_B45884;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v128 = sub_772630(&v483);
    LOBYTE(v484) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v128);
    v129 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v129[7].Unk08 )
        sub_772560(v129);
    }
    v130 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v130);
    v131 = sub_772630(&v483);
    LOBYTE(v484) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v131);
    v132 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v132[7].Unk08 )
        sub_772560(v132);
    }
    v133 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v133);
    v134 = sub_772630(&v483);
    LOBYTE(v484) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v134);
    v135 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v135[7].Unk08 )
        sub_772560(v135);
    }
    v136 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v136);
    v137 = sub_772630(&v483);
    LOBYTE(v484) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v137);
    v138 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v138[7].Unk08 )
        sub_772560(v138);
    }
    v139 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v139);
    v140 = sub_772630(&v483);
    LOBYTE(v484) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v140);
    v141 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v141[7].Unk08 )
        sub_772560(v141);
    }
    v142 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v142);
    v143 = sub_772630(&v483);
    LOBYTE(v484) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v143);
    v144 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v144[7].Unk08 )
        sub_772560(v144);
    }
    v145 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v145, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v145);
    v146 = sub_772630(&v483);
    LOBYTE(v484) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v146);
    v147 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v147[7].Unk08 )
        sub_772560(v147);
    }
    v148 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v148);
    v149 = sub_772630(&v483);
    LOBYTE(v484) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v149);
    v150 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v150[7].Unk08 )
        sub_772560(v150);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45398);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B4518C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B45888;
  dword_B43E04 = 0x380F2;
  dword_B44494 = 0x10C;
  dword_B43774 = 0x18060;
  dword_B44B24 = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B45888;
    v482 = (NiD3DPassVtbl **)dword_B45888;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v151 = sub_772630(&v483);
    LOBYTE(v484) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v151);
    v152 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v152[7].Unk08 )
        sub_772560(v152);
    }
    v153 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v153);
    v154 = sub_772630(&v483);
    LOBYTE(v484) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v154);
    v155 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v155[7].Unk08 )
        sub_772560(v155);
    }
    v156 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v156);
    v157 = sub_772630(&v483);
    LOBYTE(v484) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v157);
    v158 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v158[7].Unk08 )
        sub_772560(v158);
    }
    v159 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v159);
    v160 = sub_772630(&v483);
    LOBYTE(v484) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v160);
    v161 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v161[7].Unk08 )
        sub_772560(v161);
    }
    v162 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v162);
    v163 = sub_772630(&v483);
    LOBYTE(v484) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v163);
    v164 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v164[7].Unk08 )
        sub_772560(v164);
    }
    v165 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v165);
    v166 = sub_772630(&v483);
    LOBYTE(v484) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v166);
    v167 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v167[7].Unk08 )
        sub_772560(v167);
    }
    v168 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v168, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v168);
    v169 = sub_772630(&v483);
    LOBYTE(v484) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v169);
    v170 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v170[7].Unk08 )
        sub_772560(v170);
    }
    v171 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v171);
    v172 = sub_772630(&v483);
    LOBYTE(v484) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v172);
    v173 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v173[7].Unk08 )
        sub_772560(v173);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45398);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45190);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B4588C;
  dword_B43E08 = 0x380F2;
  dword_B44498 = 0x18C;
  dword_B43778 = 0x18060;
  dword_B44B28 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4588C;
    v482 = (NiD3DPassVtbl **)dword_B4588C;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v174 = sub_772630(&v483);
    LOBYTE(v484) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v174);
    v175 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v175[7].Unk08 )
        sub_772560(v175);
    }
    v176 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v176);
    v177 = sub_772630(&v483);
    LOBYTE(v484) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v177);
    v178 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v178[7].Unk08 )
        sub_772560(v178);
    }
    v179 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v179);
    v180 = sub_772630(&v483);
    LOBYTE(v484) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v180);
    v181 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v181[7].Unk08 )
        sub_772560(v181);
    }
    v182 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v182);
    v183 = sub_772630(&v483);
    LOBYTE(v484) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v183);
    v184 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v184[7].Unk08 )
        sub_772560(v184);
    }
    v185 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v185);
    v186 = sub_772630(&v483);
    LOBYTE(v484) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v186);
    v187 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v187[7].Unk08 )
        sub_772560(v187);
    }
    v188 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v188);
    v189 = sub_772630(&v483);
    LOBYTE(v484) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v189);
    v190 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v190[7].Unk08 )
        sub_772560(v190);
    }
    v191 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v191, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v191);
    v192 = sub_772630(&v483);
    LOBYTE(v484) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v192);
    v193 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v193[7].Unk08 )
        sub_772560(v193);
    }
    v194 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v194);
    v195 = sub_772630(&v483);
    LOBYTE(v484) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v195);
    v196 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v196[7].Unk08 )
        sub_772560(v196);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B45398);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45194);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B4589C;
  dword_B43E0C = 0x380F2;
  dword_B4449C = 0x18C;
  dword_B4377C = 0x18060;
  dword_B44B2C = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B4589C;
    v482 = (NiD3DPassVtbl **)dword_B4589C;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v197 = sub_772630(&v483);
    LOBYTE(v484) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v197);
    v198 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v198[7].Unk08 )
        sub_772560(v198);
    }
    v199 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v199);
    v200 = sub_772630(&v483);
    LOBYTE(v484) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v200);
    v201 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v201[7].Unk08 )
        sub_772560(v201);
    }
    v202 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v202);
    v203 = sub_772630(&v483);
    LOBYTE(v484) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v203);
    v204 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v204[7].Unk08 )
        sub_772560(v204);
    }
    v205 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v205);
    v206 = sub_772630(&v483);
    LOBYTE(v484) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v206);
    v207 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v207[7].Unk08 )
        sub_772560(v207);
    }
    v208 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v208);
    v209 = sub_772630(&v483);
    LOBYTE(v484) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v209);
    v210 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v210[7].Unk08 )
        sub_772560(v210);
    }
    v211 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v211);
    v212 = sub_772630(&v483);
    LOBYTE(v484) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v212);
    v213 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v213[7].Unk08 )
        sub_772560(v213);
    }
    v214 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v214, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v214);
    v215 = sub_772630(&v483);
    LOBYTE(v484) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v215);
    v216 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v216[7].Unk08 )
        sub_772560(v216);
    }
    v217 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v217);
    v218 = sub_772630(&v483);
    LOBYTE(v484) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v218);
    v219 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v219[7].Unk08 )
        sub_772560(v219);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4539C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B4518C);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B458A0;
  dword_B43E1C = 0x780F8;
  dword_B444AC = 0x10C;
  dword_B4378C = 0x18060;
  dword_B44B3C = 8;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B458A0;
    v482 = (NiD3DPassVtbl **)dword_B458A0;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v220 = sub_772630(&v483);
    LOBYTE(v484) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v220);
    v221 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v221[7].Unk08 )
        sub_772560(v221);
    }
    v222 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v222);
    v223 = sub_772630(&v483);
    LOBYTE(v484) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v223);
    v224 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v224[7].Unk08 )
        sub_772560(v224);
    }
    v225 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v225);
    v226 = sub_772630(&v483);
    LOBYTE(v484) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v226);
    v227 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v227[7].Unk08 )
        sub_772560(v227);
    }
    v228 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v228);
    v229 = sub_772630(&v483);
    LOBYTE(v484) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v229);
    v230 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v230[7].Unk08 )
        sub_772560(v230);
    }
    v231 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v231);
    v232 = sub_772630(&v483);
    LOBYTE(v484) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v232);
    v233 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v233[7].Unk08 )
        sub_772560(v233);
    }
    v234 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v234);
    v235 = sub_772630(&v483);
    LOBYTE(v484) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v235);
    v236 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v236[7].Unk08 )
        sub_772560(v236);
    }
    v237 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v237, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v237);
    v238 = sub_772630(&v483);
    LOBYTE(v484) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v238);
    v239 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v239[7].Unk08 )
        sub_772560(v239);
    }
    v240 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v240);
    v241 = sub_772630(&v483);
    LOBYTE(v484) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v241);
    v242 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v242[7].Unk08 )
        sub_772560(v242);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4539C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45190);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B458A4;
  dword_B43E20 = 0x780F8;
  dword_B444B0 = 0x18C;
  dword_B43790 = 0x18060;
  dword_B44B40 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B458A4;
    v482 = (NiD3DPassVtbl **)dword_B458A4;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v243 = sub_772630(&v483);
    LOBYTE(v484) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v243);
    v244 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v244[7].Unk08 )
        sub_772560(v244);
    }
    v245 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v245);
    v246 = sub_772630(&v483);
    LOBYTE(v484) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v246);
    v247 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v247[7].Unk08 )
        sub_772560(v247);
    }
    v248 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v248);
    v249 = sub_772630(&v483);
    LOBYTE(v484) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v249);
    v250 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v250[7].Unk08 )
        sub_772560(v250);
    }
    v251 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v251);
    v252 = sub_772630(&v483);
    LOBYTE(v484) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v252);
    v253 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v253[7].Unk08 )
        sub_772560(v253);
    }
    v254 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v254);
    v255 = sub_772630(&v483);
    LOBYTE(v484) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v255);
    v256 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v256[7].Unk08 )
        sub_772560(v256);
    }
    v257 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v257);
    v258 = sub_772630(&v483);
    LOBYTE(v484) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v258);
    v259 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v259[7].Unk08 )
        sub_772560(v259);
    }
    v260 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v260, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v260);
    v261 = sub_772630(&v483);
    LOBYTE(v484) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v261);
    v262 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v262[7].Unk08 )
        sub_772560(v262);
    }
    v263 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v263);
    v264 = sub_772630(&v483);
    LOBYTE(v484) = 0x61;
    sub_75FAE0((NiD3DTextureStage **)&a3, v264);
    v265 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v265[7].Unk08 )
        sub_772560(v265);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B4539C);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45194);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  v3 = v0 == (NiD3DPass *)dword_B458B8;
  dword_B43E24 = 0x780F8;
  dword_B444B4 = 0x18C;
  dword_B43794 = 0x18060;
  dword_B44B44 = 0xC;
  if ( !v3 )
  {
    v3 = v0->RefCount-- == 1;
    if ( v3 )
      sub_7604D0(v0);
    v0 = (NiD3DPass *)dword_B458B8;
    v482 = (NiD3DPassVtbl **)dword_B458B8;
    if ( v482 )
      ++v0->RefCount;
  }
  if ( v0->StageCount < 8 )
  {
    v266 = sub_772630(&v483);
    LOBYTE(v484) = 0x62;
    sub_75FAE0((NiD3DTextureStage **)&a3, v266);
    v267 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v267[7].Unk08 )
        sub_772560(v267);
    }
    v268 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v0, 0, v268);
    v269 = sub_772630(&v483);
    LOBYTE(v484) = 0x63;
    sub_75FAE0((NiD3DTextureStage **)&a3, v269);
    v270 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v270[7].Unk08 )
        sub_772560(v270);
    }
    v271 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v0, 1u, v271);
    v272 = sub_772630(&v483);
    LOBYTE(v484) = 0x64;
    sub_75FAE0((NiD3DTextureStage **)&a3, v272);
    v273 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v273[7].Unk08 )
        sub_772560(v273);
    }
    v274 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v0, 2u, v274);
    v275 = sub_772630(&v483);
    LOBYTE(v484) = 0x65;
    sub_75FAE0((NiD3DTextureStage **)&a3, v275);
    v276 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v276[7].Unk08 )
        sub_772560(v276);
    }
    v277 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v0, 3u, v277);
    v278 = sub_772630(&v483);
    LOBYTE(v484) = 0x66;
    sub_75FAE0((NiD3DTextureStage **)&a3, v278);
    v279 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v279[7].Unk08 )
        sub_772560(v279);
    }
    v280 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v0, 4u, v280);
    v281 = sub_772630(&v483);
    LOBYTE(v484) = 0x67;
    sub_75FAE0((NiD3DTextureStage **)&a3, v281);
    v282 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v282[7].Unk08 )
        sub_772560(v282);
    }
    v283 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v283, (NiRenderedTexture *)dword_B43110);
    sub_760010(v0, 5u, v283);
    v284 = sub_772630(&v483);
    LOBYTE(v484) = 0x68;
    sub_75FAE0((NiD3DTextureStage **)&a3, v284);
    v285 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v285[7].Unk08 )
        sub_772560(v285);
    }
    v286 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v0, 6u, v286);
    v287 = sub_772630(&v483);
    LOBYTE(v484) = 0x69;
    sub_75FAE0((NiD3DTextureStage **)&a3, v287);
    v288 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v288[7].Unk08 )
        sub_772560(v288);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v0, 7u, &v1->Stage);
  }
  sub_7AECB0(v0, (NiD3DVertexShader *)dword_B453A0);
  sub_7AEC60(&v0->__vftable, (NiD3DPixelShader *)dword_B45198);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x1B, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xF, 0, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 7, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x17, 4, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0xE, 1, 0);
  if ( !v0->RenderStateGroup )
    v0->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v0->RenderStateGroup, 0x34, 0, 0);
  dword_B43E38 = 0x39082;
  dword_B444C8 = 0x11C;
  dword_B437A8 = 0x18000;
  dword_B44B58 = 8;
  sub_76C890((NiD3DPass **)&v482, &dword_B458BC);
  v289 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v290 = sub_772630(&v483);
    LOBYTE(v484) = 0x6A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v290);
    v291 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v291[7].Unk08 )
        sub_772560(v291);
    }
    v292 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v289, 0, v292);
    v293 = sub_772630(&v483);
    LOBYTE(v484) = 0x6B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v293);
    v294 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v294[7].Unk08 )
        sub_772560(v294);
    }
    v295 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v289, 1u, v295);
    v296 = sub_772630(&v483);
    LOBYTE(v484) = 0x6C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v296);
    v297 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v297[7].Unk08 )
        sub_772560(v297);
    }
    v298 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v289, 2u, v298);
    v299 = sub_772630(&v483);
    LOBYTE(v484) = 0x6D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v299);
    v300 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v300[7].Unk08 )
        sub_772560(v300);
    }
    v301 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v289, 3u, v301);
    v302 = sub_772630(&v483);
    LOBYTE(v484) = 0x6E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v302);
    v303 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v303[7].Unk08 )
        sub_772560(v303);
    }
    v304 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v289, 4u, v304);
    v305 = sub_772630(&v483);
    LOBYTE(v484) = 0x6F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v305);
    v306 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v306[7].Unk08 )
        sub_772560(v306);
    }
    v307 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v307, (NiRenderedTexture *)dword_B43110);
    sub_760010(v289, 5u, v307);
    v308 = sub_772630(&v483);
    LOBYTE(v484) = 0x70;
    sub_75FAE0((NiD3DTextureStage **)&a3, v308);
    v309 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v309[7].Unk08 )
        sub_772560(v309);
    }
    v310 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v289, 6u, v310);
    v311 = sub_772630(&v483);
    LOBYTE(v484) = 0x71;
    sub_75FAE0((NiD3DTextureStage **)&a3, v311);
    v312 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v312[7].Unk08 )
        sub_772560(v312);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v289, 7u, &v1->Stage);
  }
  sub_7AECB0(v289, (NiD3DVertexShader *)dword_B453A0);
  sub_7AEC60(&v289->__vftable, (NiD3DPixelShader *)dword_B4519C);
  if ( !v289->RenderStateGroup )
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v289->RenderStateGroup, 0x1B, 0, 0);
  if ( !v289->RenderStateGroup )
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v289->RenderStateGroup, 0xF, 0, 0);
  if ( !v289->RenderStateGroup )
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v289->RenderStateGroup, 7, 1, 0);
  if ( !v289->RenderStateGroup )
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v289->RenderStateGroup, 0x17, 4, 0);
  if ( !v289->RenderStateGroup )
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v289->RenderStateGroup, 0xE, 1, 0);
  if ( !v289->RenderStateGroup )
    v289->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v289->RenderStateGroup, 0x34, 0, 0);
  dword_B43E3C = 0x39082;
  dword_B444CC = 0x19C;
  dword_B437AC = 0x18000;
  dword_B44B5C = 0xC;
  sub_76C890((NiD3DPass **)&v482, &dword_B458C0);
  v313 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v314 = sub_772630(&v483);
    LOBYTE(v484) = 0x72;
    sub_75FAE0((NiD3DTextureStage **)&a3, v314);
    v315 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v315[7].Unk08 )
        sub_772560(v315);
    }
    v316 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v313, 0, v316);
    v317 = sub_772630(&v483);
    LOBYTE(v484) = 0x73;
    sub_75FAE0((NiD3DTextureStage **)&a3, v317);
    v318 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v318[7].Unk08 )
        sub_772560(v318);
    }
    v319 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v313, 1u, v319);
    v320 = sub_772630(&v483);
    LOBYTE(v484) = 0x74;
    sub_75FAE0((NiD3DTextureStage **)&a3, v320);
    v321 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v321[7].Unk08 )
        sub_772560(v321);
    }
    v322 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v313, 2u, v322);
    v323 = sub_772630(&v483);
    LOBYTE(v484) = 0x75;
    sub_75FAE0((NiD3DTextureStage **)&a3, v323);
    v324 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v324[7].Unk08 )
        sub_772560(v324);
    }
    v325 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v313, 3u, v325);
    v326 = sub_772630(&v483);
    LOBYTE(v484) = 0x76;
    sub_75FAE0((NiD3DTextureStage **)&a3, v326);
    v327 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v327[7].Unk08 )
        sub_772560(v327);
    }
    v328 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v313, 4u, v328);
    v329 = sub_772630(&v483);
    LOBYTE(v484) = 0x77;
    sub_75FAE0((NiD3DTextureStage **)&a3, v329);
    v330 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v330[7].Unk08 )
        sub_772560(v330);
    }
    v331 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v331, (NiRenderedTexture *)dword_B43110);
    sub_760010(v313, 5u, v331);
    v332 = sub_772630(&v483);
    LOBYTE(v484) = 0x78;
    sub_75FAE0((NiD3DTextureStage **)&a3, v332);
    v333 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v333[7].Unk08 )
        sub_772560(v333);
    }
    v334 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v313, 6u, v334);
    v335 = sub_772630(&v483);
    LOBYTE(v484) = 0x79;
    sub_75FAE0((NiD3DTextureStage **)&a3, v335);
    v336 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v336[7].Unk08 )
        sub_772560(v336);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v313, 7u, &v1->Stage);
  }
  sub_7AECB0(v313, (NiD3DVertexShader *)dword_B453A0);
  sub_7AEC60(&v313->__vftable, (NiD3DPixelShader *)dword_B451A0);
  if ( !v313->RenderStateGroup )
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v313->RenderStateGroup, 0x1B, 0, 0);
  if ( !v313->RenderStateGroup )
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v313->RenderStateGroup, 0xF, 0, 0);
  if ( !v313->RenderStateGroup )
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v313->RenderStateGroup, 7, 1, 0);
  if ( !v313->RenderStateGroup )
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v313->RenderStateGroup, 0x17, 4, 0);
  if ( !v313->RenderStateGroup )
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v313->RenderStateGroup, 0xE, 1, 0);
  if ( !v313->RenderStateGroup )
    v313->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v313->RenderStateGroup, 0x34, 0, 0);
  dword_B43E40 = 0x39082;
  dword_B444D0 = 0x19C;
  dword_B437B0 = 0x18000;
  dword_B44B60 = 0xC;
  sub_76C890((NiD3DPass **)&v482, &dword_B458D0);
  v337 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v338 = sub_772630(&v483);
    LOBYTE(v484) = 0x7A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v338);
    v339 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v339[7].Unk08 )
        sub_772560(v339);
    }
    v340 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v337, 0, v340);
    v341 = sub_772630(&v483);
    LOBYTE(v484) = 0x7B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v341);
    v342 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v342[7].Unk08 )
        sub_772560(v342);
    }
    v343 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v337, 1u, v343);
    v344 = sub_772630(&v483);
    LOBYTE(v484) = 0x7C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v344);
    v345 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v345[7].Unk08 )
        sub_772560(v345);
    }
    v346 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v337, 2u, v346);
    v347 = sub_772630(&v483);
    LOBYTE(v484) = 0x7D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v347);
    v348 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v348[7].Unk08 )
        sub_772560(v348);
    }
    v349 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v337, 3u, v349);
    v350 = sub_772630(&v483);
    LOBYTE(v484) = 0x7E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v350);
    v351 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v351[7].Unk08 )
        sub_772560(v351);
    }
    v352 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v337, 4u, v352);
    v353 = sub_772630(&v483);
    LOBYTE(v484) = 0x7F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v353);
    v354 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v354[7].Unk08 )
        sub_772560(v354);
    }
    v355 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v355, (NiRenderedTexture *)dword_B43110);
    sub_760010(v337, 5u, v355);
    v356 = sub_772630(&v483);
    LOBYTE(v484) = 0x80;
    sub_75FAE0((NiD3DTextureStage **)&a3, v356);
    v357 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v357[7].Unk08 )
        sub_772560(v357);
    }
    v358 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v337, 6u, v358);
    v359 = sub_772630(&v483);
    LOBYTE(v484) = 0x81;
    sub_75FAE0((NiD3DTextureStage **)&a3, v359);
    v360 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v360[7].Unk08 )
        sub_772560(v360);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v337, 7u, &v1->Stage);
  }
  sub_7AECB0(v337, (NiD3DVertexShader *)dword_B453A4);
  sub_7AEC60(&v337->__vftable, (NiD3DPixelShader *)dword_B45198);
  if ( !v337->RenderStateGroup )
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v337->RenderStateGroup, 0x1B, 0, 0);
  if ( !v337->RenderStateGroup )
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v337->RenderStateGroup, 0xF, 0, 0);
  if ( !v337->RenderStateGroup )
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v337->RenderStateGroup, 7, 1, 0);
  if ( !v337->RenderStateGroup )
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v337->RenderStateGroup, 0x17, 4, 0);
  if ( !v337->RenderStateGroup )
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v337->RenderStateGroup, 0xE, 1, 0);
  if ( !v337->RenderStateGroup )
    v337->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v337->RenderStateGroup, 0x34, 0, 0);
  dword_B444E0 = 0x11C;
  dword_B43E50 = 0x79088;
  dword_B437C0 = 0x18000;
  dword_B44B70 = 8;
  sub_76C890((NiD3DPass **)&v482, &dword_B458D4);
  v361 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v362 = sub_772630(&v483);
    LOBYTE(v484) = 0x82;
    sub_75FAE0((NiD3DTextureStage **)&a3, v362);
    v363 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v363[7].Unk08 )
        sub_772560(v363);
    }
    v364 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v361, 0, v364);
    v365 = sub_772630(&v483);
    LOBYTE(v484) = 0x83;
    sub_75FAE0((NiD3DTextureStage **)&a3, v365);
    v366 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v366[7].Unk08 )
        sub_772560(v366);
    }
    v367 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v361, 1u, v367);
    v368 = sub_772630(&v483);
    LOBYTE(v484) = 0x84;
    sub_75FAE0((NiD3DTextureStage **)&a3, v368);
    v369 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v369[7].Unk08 )
        sub_772560(v369);
    }
    v370 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v361, 2u, v370);
    v371 = sub_772630(&v483);
    LOBYTE(v484) = 0x85;
    sub_75FAE0((NiD3DTextureStage **)&a3, v371);
    v372 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v372[7].Unk08 )
        sub_772560(v372);
    }
    v373 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v361, 3u, v373);
    v374 = sub_772630(&v483);
    LOBYTE(v484) = 0x86;
    sub_75FAE0((NiD3DTextureStage **)&a3, v374);
    v375 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v375[7].Unk08 )
        sub_772560(v375);
    }
    v376 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v361, 4u, v376);
    v377 = sub_772630(&v483);
    LOBYTE(v484) = 0x87;
    sub_75FAE0((NiD3DTextureStage **)&a3, v377);
    v378 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v378[7].Unk08 )
        sub_772560(v378);
    }
    v379 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v379, (NiRenderedTexture *)dword_B43110);
    sub_760010(v361, 5u, v379);
    v380 = sub_772630(&v483);
    LOBYTE(v484) = 0x88;
    sub_75FAE0((NiD3DTextureStage **)&a3, v380);
    v381 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v381[7].Unk08 )
        sub_772560(v381);
    }
    v382 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v361, 6u, v382);
    v383 = sub_772630(&v483);
    LOBYTE(v484) = 0x89;
    sub_75FAE0((NiD3DTextureStage **)&a3, v383);
    v384 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v384[7].Unk08 )
        sub_772560(v384);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v361, 7u, &v1->Stage);
  }
  sub_7AECB0(v361, (NiD3DVertexShader *)dword_B453A4);
  sub_7AEC60(&v361->__vftable, (NiD3DPixelShader *)dword_B4519C);
  if ( !v361->RenderStateGroup )
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v361->RenderStateGroup, 0x1B, 0, 0);
  if ( !v361->RenderStateGroup )
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v361->RenderStateGroup, 0xF, 0, 0);
  if ( !v361->RenderStateGroup )
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v361->RenderStateGroup, 7, 1, 0);
  if ( !v361->RenderStateGroup )
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v361->RenderStateGroup, 0x17, 4, 0);
  if ( !v361->RenderStateGroup )
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v361->RenderStateGroup, 0xE, 1, 0);
  if ( !v361->RenderStateGroup )
    v361->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v361->RenderStateGroup, 0x34, 0, 0);
  dword_B43E54 = 0x79088;
  dword_B444E4 = 0x19C;
  dword_B437C4 = 0x18000;
  dword_B44B74 = 0xC;
  sub_76C890((NiD3DPass **)&v482, &dword_B458D8);
  v385 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v386 = sub_772630(&v483);
    LOBYTE(v484) = 0x8A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v386);
    v387 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v387[7].Unk08 )
        sub_772560(v387);
    }
    v388 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v385, 0, v388);
    v389 = sub_772630(&v483);
    LOBYTE(v484) = 0x8B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v389);
    v390 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v390[7].Unk08 )
        sub_772560(v390);
    }
    v391 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v385, 1u, v391);
    v392 = sub_772630(&v483);
    LOBYTE(v484) = 0x8C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v392);
    v393 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v393[7].Unk08 )
        sub_772560(v393);
    }
    v394 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v385, 2u, v394);
    v395 = sub_772630(&v483);
    LOBYTE(v484) = 0x8D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v395);
    v396 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v396[7].Unk08 )
        sub_772560(v396);
    }
    v397 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v385, 3u, v397);
    v398 = sub_772630(&v483);
    LOBYTE(v484) = 0x8E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v398);
    v399 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v399[7].Unk08 )
        sub_772560(v399);
    }
    v400 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v385, 4u, v400);
    v401 = sub_772630(&v483);
    LOBYTE(v484) = 0x8F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v401);
    v402 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v402[7].Unk08 )
        sub_772560(v402);
    }
    v403 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v403, (NiRenderedTexture *)dword_B43110);
    sub_760010(v385, 5u, v403);
    v404 = sub_772630(&v483);
    LOBYTE(v484) = 0x90;
    sub_75FAE0((NiD3DTextureStage **)&a3, v404);
    v405 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v405[7].Unk08 )
        sub_772560(v405);
    }
    v406 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v385, 6u, v406);
    v407 = sub_772630(&v483);
    LOBYTE(v484) = 0x91;
    sub_75FAE0((NiD3DTextureStage **)&a3, v407);
    v408 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v408[7].Unk08 )
        sub_772560(v408);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v385, 7u, &v1->Stage);
  }
  sub_7AECB0(v385, (NiD3DVertexShader *)dword_B453A4);
  sub_7AEC60(&v385->__vftable, (NiD3DPixelShader *)dword_B451A0);
  if ( !v385->RenderStateGroup )
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v385->RenderStateGroup, 0x1B, 0, 0);
  if ( !v385->RenderStateGroup )
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v385->RenderStateGroup, 0xF, 0, 0);
  if ( !v385->RenderStateGroup )
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v385->RenderStateGroup, 7, 1, 0);
  if ( !v385->RenderStateGroup )
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v385->RenderStateGroup, 0x17, 4, 0);
  if ( !v385->RenderStateGroup )
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v385->RenderStateGroup, 0xE, 1, 0);
  if ( !v385->RenderStateGroup )
    v385->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v385->RenderStateGroup, 0x34, 0, 0);
  dword_B43E58 = 0x79088;
  dword_B444E8 = 0x19C;
  dword_B437C8 = 0x18000;
  dword_B44B78 = 0xC;
  sub_76C890((NiD3DPass **)&v482, &dword_B45B7C);
  v409 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v410 = sub_772630(&v483);
    LOBYTE(v484) = 0x92;
    sub_75FAE0((NiD3DTextureStage **)&a3, v410);
    v411 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v411[7].Unk08 )
        sub_772560(v411);
    }
    v412 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v409, 0, v412);
    v413 = sub_772630(&v483);
    LOBYTE(v484) = 0x93;
    sub_75FAE0((NiD3DTextureStage **)&a3, v413);
    v414 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v414[7].Unk08 )
        sub_772560(v414);
    }
    v415 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v409, 1u, v415);
    v416 = sub_772630(&v483);
    LOBYTE(v484) = 0x94;
    sub_75FAE0((NiD3DTextureStage **)&a3, v416);
    v417 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v417[7].Unk08 )
        sub_772560(v417);
    }
    v418 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v409, 2u, v418);
    v419 = sub_772630(&v483);
    LOBYTE(v484) = 0x95;
    sub_75FAE0((NiD3DTextureStage **)&a3, v419);
    v420 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v420[7].Unk08 )
        sub_772560(v420);
    }
    v421 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v409, 3u, v421);
    v422 = sub_772630(&v483);
    LOBYTE(v484) = 0x96;
    sub_75FAE0((NiD3DTextureStage **)&a3, v422);
    v423 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v423[7].Unk08 )
        sub_772560(v423);
    }
    v424 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v409, 4u, v424);
    v425 = sub_772630(&v483);
    LOBYTE(v484) = 0x97;
    sub_75FAE0((NiD3DTextureStage **)&a3, v425);
    v426 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v426[7].Unk08 )
        sub_772560(v426);
    }
    v427 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v427, (NiRenderedTexture *)dword_B43110);
    sub_760010(v409, 5u, v427);
    v428 = sub_772630(&v483);
    LOBYTE(v484) = 0x98;
    sub_75FAE0((NiD3DTextureStage **)&a3, v428);
    v429 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v429[7].Unk08 )
        sub_772560(v429);
    }
    v430 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v409, 6u, v430);
    v431 = sub_772630(&v483);
    LOBYTE(v484) = 0x99;
    sub_75FAE0((NiD3DTextureStage **)&a3, v431);
    v432 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v432[7].Unk08 )
        sub_772560(v432);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v409, 7u, &v1->Stage);
  }
  sub_7AECB0(v409, (NiD3DVertexShader *)dword_B45488);
  sub_7AEC60(&v409->__vftable, (NiD3DPixelShader *)dword_B45274[0]);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0x1B, 1, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0x13, 9, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0x14, 1, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0xF, 0, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 7, 1, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0x17, 4, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0xE, 0, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0x34, 0, 0);
  if ( !v409->RenderStateGroup )
    v409->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v409->RenderStateGroup, 0x98, 0x3F, 1u);
  dword_B440FC = 0x8806;
  dword_B4478C = 8;
  dword_B43A6C = 0x8000;
  sub_76C890((NiD3DPass **)&v482, &dword_B45B80);
  v433 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v434 = sub_772630(&v483);
    LOBYTE(v484) = 0x9A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v434);
    v435 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v435[7].Unk08 )
        sub_772560(v435);
    }
    v436 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v433, 0, v436);
    v437 = sub_772630(&v483);
    LOBYTE(v484) = 0x9B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v437);
    v438 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v438[7].Unk08 )
        sub_772560(v438);
    }
    v439 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v433, 1u, v439);
    v440 = sub_772630(&v483);
    LOBYTE(v484) = 0x9C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v440);
    v441 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v441[7].Unk08 )
        sub_772560(v441);
    }
    v442 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v433, 2u, v442);
    v443 = sub_772630(&v483);
    LOBYTE(v484) = 0x9D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v443);
    v444 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v444[7].Unk08 )
        sub_772560(v444);
    }
    v445 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v433, 3u, v445);
    v446 = sub_772630(&v483);
    LOBYTE(v484) = 0x9E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v446);
    v447 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v447[7].Unk08 )
        sub_772560(v447);
    }
    v448 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v433, 4u, v448);
    v449 = sub_772630(&v483);
    LOBYTE(v484) = 0x9F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v449);
    v450 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v450[7].Unk08 )
        sub_772560(v450);
    }
    v451 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v451, (NiRenderedTexture *)dword_B43110);
    sub_760010(v433, 5u, v451);
    v452 = sub_772630(&v483);
    LOBYTE(v484) = 0xA0;
    sub_75FAE0((NiD3DTextureStage **)&a3, v452);
    v453 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v453[7].Unk08 )
        sub_772560(v453);
    }
    v454 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v433, 6u, v454);
    v455 = sub_772630(&v483);
    LOBYTE(v484) = 0xA1;
    sub_75FAE0((NiD3DTextureStage **)&a3, v455);
    v456 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v456[7].Unk08 )
        sub_772560(v456);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v433, 7u, &v1->Stage);
  }
  sub_7AECB0(v433, (NiD3DVertexShader *)dword_B4548C);
  sub_7AEC60(&v433->__vftable, (NiD3DPixelShader *)dword_B45274[0]);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0x1B, 1, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0x13, 9, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0x14, 1, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0xF, 0, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 7, 1, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0x17, 4, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0xE, 0, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0x34, 0, 0);
  if ( !v433->RenderStateGroup )
    v433->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v433->RenderStateGroup, 0x98, 0x3F, 1u);
  dword_B44100 = 0x4880C;
  dword_B44790 = 8;
  dword_B43A70 = 0x8000;
  sub_76C890((NiD3DPass **)&v482, &dword_B45B84);
  v457 = (NiD3DPass *)v482;
  if ( (unsigned int)v482[6] < 8 )
  {
    v458 = sub_772630(&v483);
    LOBYTE(v484) = 0xA2;
    sub_75FAE0((NiD3DTextureStage **)&a3, v458);
    v459 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v459[7].Unk08 )
        sub_772560(v459);
    }
    v460 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v457, 0, v460);
    v461 = sub_772630(&v483);
    LOBYTE(v484) = 0xA3;
    sub_75FAE0((NiD3DTextureStage **)&a3, v461);
    v462 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v462[7].Unk08 )
        sub_772560(v462);
    }
    v463 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v457, 1u, v463);
    v464 = sub_772630(&v483);
    LOBYTE(v484) = 0xA4;
    sub_75FAE0((NiD3DTextureStage **)&a3, v464);
    v465 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v465[7].Unk08 )
        sub_772560(v465);
    }
    v466 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v457, 2u, v466);
    v467 = sub_772630(&v483);
    LOBYTE(v484) = 0xA5;
    sub_75FAE0((NiD3DTextureStage **)&a3, v467);
    v468 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v468[7].Unk08 )
        sub_772560(v468);
    }
    v469 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v457, 3u, v469);
    v470 = sub_772630(&v483);
    LOBYTE(v484) = 0xA6;
    sub_75FAE0((NiD3DTextureStage **)&a3, v470);
    v471 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v471[7].Unk08 )
        sub_772560(v471);
    }
    v472 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v457, 4u, v472);
    v473 = sub_772630(&v483);
    LOBYTE(v484) = 0xA7;
    sub_75FAE0((NiD3DTextureStage **)&a3, v473);
    v474 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v474[7].Unk08 )
        sub_772560(v474);
    }
    v475 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v475, (NiRenderedTexture *)dword_B43110);
    sub_760010(v457, 5u, v475);
    v476 = sub_772630(&v483);
    LOBYTE(v484) = 0xA8;
    sub_75FAE0((NiD3DTextureStage **)&a3, v476);
    v477 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v477[7].Unk08 )
        sub_772560(v477);
    }
    v478 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v457, 6u, v478);
    v479 = sub_772630(&v483);
    LOBYTE(v484) = 0xA9;
    sub_75FAE0((NiD3DTextureStage **)&a3, v479);
    v480 = v483;
    LOBYTE(v484) = 1;
    if ( v483 )
    {
      --v483[7].Unk08;
      if ( !v480[7].Unk08 )
        sub_772560(v480);
    }
    v1 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v457, 7u, &v1->Stage);
  }
  sub_7AECB0(v457, (NiD3DVertexShader *)dword_B45490);
  sub_7AEC60(&v457->__vftable, (NiD3DPixelShader *)dword_B45274[0]);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0x1B, 1, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0x13, 9, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0x14, 1, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0xF, 0, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 7, 1, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0x17, 4, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0xE, 0, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0x34, 0, 0);
  if ( !v457->RenderStateGroup )
    v457->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v457->RenderStateGroup, 0x98, 0x3F, 1u);
  dword_B44104 = 0x8806;
  dword_B44794 = 8;
  dword_B43A74 = 0x8000;
  LOBYTE(v484) = 0;
  if ( v1 )
  {
    v3 = v1[7].Unk08-- == 1;
    if ( v3 )
      sub_772560(v1);
  }
  v3 = v457->RefCount-- == 1;
  v484 = 0xFFFFFFFF;
  if ( v3 )
    sub_7604D0(v457);
}
