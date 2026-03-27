void __thiscall sub_884D50(_DWORD *this)
{
  NiD3DPass *v1; // esi
  NiD3DTextureStage *v2; // edi
  int v3; // eax
  bool v4; // zf
  unsigned int *v5; // eax
  NiD3DTextureStage *v6; // eax
  unsigned int **v7; // ebx
  NiD3DTextureStage *v8; // eax
  unsigned int **v9; // ebx
  NiD3DTextureStage *v10; // eax
  unsigned int **v11; // ebx
  NiD3DTextureStage *v12; // eax
  unsigned int **v13; // ebx
  NiD3DTextureStage *v14; // eax
  unsigned int **v15; // ebx
  NiD3DTextureStage *v16; // eax
  unsigned int **v17; // ebx
  NiD3DTextureStage *v18; // eax
  volatile LONG *v19; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  NiD3DPixelShader *PixelShader; // ebp
  int v22; // ebx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
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
  volatile LONG *v40; // ebx
  NiD3DVertexShader *v41; // ebp
  NiD3DPixelShader *v42; // ebp
  int v43; // ebx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  unsigned int **v47; // ebp
  NiD3DTextureStage *v48; // eax
  unsigned int **v49; // ebp
  NiD3DTextureStage *v50; // eax
  unsigned int **v51; // ebp
  NiD3DTextureStage *v52; // eax
  unsigned int **v53; // ebp
  NiD3DTextureStage *v54; // eax
  unsigned int **v55; // ebp
  NiD3DTextureStage *v56; // eax
  unsigned int **v57; // ebp
  NiD3DTextureStage *v58; // eax
  unsigned int **v59; // ebp
  NiD3DTextureStage *v60; // eax
  volatile LONG *v61; // ebx
  NiD3DVertexShader *v62; // ebp
  NiD3DPixelShader *v63; // ebp
  int v64; // ebx
  int v65; // edx
  int v66; // eax
  int v67; // ecx
  unsigned int **v68; // ebp
  NiD3DTextureStage *v69; // eax
  unsigned int **v70; // ebp
  NiD3DTextureStage *v71; // eax
  unsigned int **v72; // ebp
  NiD3DTextureStage *v73; // eax
  unsigned int **v74; // ebp
  NiD3DTextureStage *v75; // eax
  unsigned int **v76; // ebp
  NiD3DTextureStage *v77; // eax
  unsigned int **v78; // ebp
  NiD3DTextureStage *v79; // eax
  unsigned int **v80; // ebp
  NiD3DTextureStage *v81; // eax
  volatile LONG *v82; // ebx
  NiD3DVertexShader *v83; // ebp
  NiD3DPixelShader *v84; // ebp
  int v85; // ebx
  int v86; // edx
  int v87; // eax
  int v88; // ecx
  unsigned int **v89; // ebp
  NiD3DTextureStage *v90; // eax
  unsigned int **v91; // ebp
  NiD3DTextureStage *v92; // eax
  unsigned int **v93; // ebp
  NiD3DTextureStage *v94; // eax
  unsigned int **v95; // ebp
  NiD3DTextureStage *v96; // eax
  unsigned int **v97; // ebp
  NiD3DTextureStage *v98; // eax
  unsigned int **v99; // ebp
  NiD3DTextureStage *v100; // eax
  unsigned int **v101; // ebp
  NiD3DTextureStage *v102; // eax
  unsigned int **v103; // ebp
  NiD3DTextureStage *v104; // eax
  NiD3DPixelShader *v105; // eax
  int v106; // ecx
  int v107; // edx
  int v108; // eax
  unsigned int *v109; // eax
  NiD3DTextureStage *v110; // eax
  unsigned int *v111; // edi
  unsigned int *v112; // eax
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // edi
  unsigned int *v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  unsigned int *v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  unsigned int *v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  unsigned int *v124; // eax
  NiD3DTextureStage *v125; // eax
  unsigned int *v126; // edi
  unsigned int *v127; // eax
  NiD3DTextureStage *v128; // eax
  unsigned int *v129; // edi
  unsigned int *v130; // eax
  NiD3DTextureStage *v131; // eax
  NiD3DPixelShader *v132; // eax
  int v133; // eax
  int v134; // ecx
  int v135; // edx
  unsigned int *v136; // eax
  NiD3DTextureStage *v137; // eax
  unsigned int *v138; // edi
  unsigned int *v139; // eax
  NiD3DTextureStage *v140; // eax
  unsigned int *v141; // edi
  unsigned int *v142; // eax
  NiD3DTextureStage *v143; // eax
  unsigned int *v144; // edi
  unsigned int *v145; // eax
  NiD3DTextureStage *v146; // eax
  unsigned int *v147; // edi
  unsigned int *v148; // eax
  NiD3DTextureStage *v149; // eax
  unsigned int *v150; // edi
  unsigned int *v151; // eax
  NiD3DTextureStage *v152; // eax
  unsigned int *v153; // edi
  unsigned int *v154; // eax
  NiD3DTextureStage *v155; // eax
  unsigned int *v156; // edi
  unsigned int *v157; // eax
  NiD3DTextureStage *v158; // eax
  NiD3DPixelShader *v159; // eax
  int v160; // edx
  int v161; // eax
  int v162; // ecx
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
  unsigned int *v174; // edi
  unsigned int *v175; // eax
  NiD3DTextureStage *v176; // eax
  unsigned int *v177; // edi
  unsigned int *v178; // eax
  NiD3DTextureStage *v179; // eax
  unsigned int *v180; // edi
  unsigned int *v181; // eax
  NiD3DTextureStage *v182; // eax
  unsigned int *v183; // edi
  unsigned int *v184; // eax
  NiD3DTextureStage *v185; // eax
  NiD3DPixelShader *v186; // eax
  int v187; // ecx
  int v188; // edx
  int v189; // eax
  unsigned int *v190; // eax
  NiD3DTextureStage *v191; // eax
  unsigned int *v192; // edi
  unsigned int *v193; // eax
  NiD3DTextureStage *v194; // eax
  unsigned int *v195; // edi
  unsigned int *v196; // eax
  NiD3DTextureStage *v197; // eax
  unsigned int *v198; // edi
  unsigned int *v199; // eax
  NiD3DTextureStage *v200; // eax
  unsigned int *v201; // edi
  unsigned int *v202; // eax
  NiD3DTextureStage *v203; // eax
  unsigned int *v204; // edi
  unsigned int *v205; // eax
  NiD3DTextureStage *v206; // eax
  unsigned int *v207; // edi
  unsigned int *v208; // eax
  NiD3DTextureStage *v209; // eax
  unsigned int *v210; // edi
  unsigned int *v211; // eax
  NiD3DTextureStage *v212; // eax
  NiD3DPixelShader *v213; // eax
  int v214; // eax
  int v215; // ecx
  int v216; // edx
  unsigned int *v217; // eax
  NiD3DTextureStage *v218; // eax
  unsigned int *v219; // edi
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
  NiD3DPixelShader *v240; // eax
  int v241; // edx
  int v242; // eax
  int v243; // ecx
  unsigned int *v244; // eax
  NiD3DTextureStage *v245; // eax
  unsigned int *v246; // edi
  unsigned int *v247; // eax
  NiD3DTextureStage *v248; // eax
  unsigned int *v249; // edi
  unsigned int *v250; // eax
  NiD3DTextureStage *v251; // eax
  unsigned int *v252; // edi
  unsigned int *v253; // eax
  NiD3DTextureStage *v254; // eax
  unsigned int *v255; // edi
  unsigned int *v256; // eax
  NiD3DTextureStage *v257; // eax
  unsigned int *v258; // edi
  unsigned int *v259; // eax
  NiD3DTextureStage *v260; // eax
  unsigned int *v261; // edi
  unsigned int *v262; // eax
  NiD3DTextureStage *v263; // eax
  unsigned int *v264; // edi
  unsigned int *v265; // eax
  NiD3DTextureStage *v266; // eax
  NiD3DPixelShader *v267; // eax
  int v268; // ecx
  int v269; // edx
  int v270; // eax
  unsigned int *v271; // eax
  NiD3DTextureStage *v272; // eax
  unsigned int *v273; // edi
  unsigned int *v274; // eax
  NiD3DTextureStage *v275; // eax
  unsigned int *v276; // edi
  unsigned int *v277; // eax
  NiD3DTextureStage *v278; // eax
  unsigned int *v279; // edi
  unsigned int *v280; // eax
  NiD3DTextureStage *v281; // eax
  unsigned int *v282; // edi
  unsigned int *v283; // eax
  NiD3DTextureStage *v284; // eax
  unsigned int *v285; // edi
  unsigned int *v286; // eax
  NiD3DTextureStage *v287; // eax
  unsigned int *v288; // edi
  unsigned int *v289; // eax
  NiD3DTextureStage *v290; // eax
  unsigned int *v291; // edi
  unsigned int *v292; // eax
  NiD3DTextureStage *v293; // eax
  NiD3DPixelShader *v294; // eax
  int v295; // eax
  int v296; // ecx
  int v297; // edx
  unsigned int *v298; // eax
  NiD3DTextureStage *v299; // eax
  unsigned int *v300; // edi
  unsigned int *v301; // eax
  NiD3DTextureStage *v302; // eax
  unsigned int *v303; // edi
  unsigned int *v304; // eax
  NiD3DTextureStage *v305; // eax
  unsigned int *v306; // edi
  unsigned int *v307; // eax
  NiD3DTextureStage *v308; // eax
  NiD3DPixelShader *v309; // eax
  int v310; // ecx
  int v311; // edx
  int v312; // eax
  unsigned int *v313; // eax
  NiD3DTextureStage *v314; // eax
  unsigned int *v315; // edi
  unsigned int *v316; // eax
  NiD3DTextureStage *v317; // eax
  unsigned int *v318; // edi
  unsigned int *v319; // eax
  NiD3DTextureStage *v320; // eax
  unsigned int *v321; // edi
  unsigned int *v322; // eax
  NiD3DTextureStage *v323; // eax
  NiD3DPixelShader *v324; // eax
  int v325; // edx
  int v326; // eax
  NiD3DPass *v327; // esi
  unsigned int *v328; // eax
  NiD3DTextureStage *v329; // eax
  unsigned int *v330; // edi
  unsigned int *v331; // eax
  NiD3DTextureStage *v332; // eax
  unsigned int *v333; // edi
  unsigned int *v334; // eax
  NiD3DTextureStage *v335; // eax
  unsigned int *v336; // edi
  unsigned int *v337; // eax
  NiD3DTextureStage *v338; // eax
  unsigned int *v339; // edi
  unsigned int *v340; // eax
  NiD3DTextureStage *v341; // eax
  unsigned int *v342; // edi
  unsigned int *v343; // eax
  NiD3DTextureStage *v344; // eax
  NiD3DPixelShader *v345; // eax
  int v346; // ecx
  int v347; // eax
  int v348; // edx
  NiD3DPass *v349; // esi
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
  unsigned int *v361; // edi
  unsigned int *v362; // eax
  NiD3DTextureStage *v363; // eax
  unsigned int *v364; // edi
  unsigned int *v365; // eax
  NiD3DTextureStage *v366; // eax
  NiD3DPixelShader *v367; // eax
  int v368; // ecx
  int v369; // edx
  int v370; // eax
  NiD3DPass *v371; // esi
  unsigned int *v372; // eax
  NiD3DTextureStage *v373; // eax
  unsigned int *v374; // edi
  unsigned int *v375; // eax
  NiD3DTextureStage *v376; // eax
  unsigned int *v377; // edi
  unsigned int *v378; // eax
  NiD3DTextureStage *v379; // eax
  unsigned int *v380; // edi
  unsigned int *v381; // eax
  NiD3DTextureStage *v382; // eax
  unsigned int *v383; // edi
  unsigned int *v384; // eax
  NiD3DTextureStage *v385; // eax
  unsigned int *v386; // edi
  unsigned int *v387; // eax
  NiD3DTextureStage *v388; // eax
  NiD3DPixelShader *v389; // eax
  int v390; // edx
  int v391; // eax
  NiD3DPass *v392; // esi
  unsigned int *v393; // eax
  NiD3DTextureStage *v394; // eax
  unsigned int *v395; // edi
  unsigned int *v396; // eax
  NiD3DTextureStage *v397; // eax
  unsigned int *v398; // edi
  unsigned int *v399; // eax
  NiD3DTextureStage *v400; // eax
  unsigned int *v401; // edi
  unsigned int *v402; // eax
  NiD3DTextureStage *v403; // eax
  unsigned int *v404; // edi
  unsigned int *v405; // eax
  NiD3DTextureStage *v406; // eax
  unsigned int *v407; // edi
  unsigned int *v408; // eax
  NiD3DTextureStage *v409; // eax
  unsigned int *v410; // edi
  unsigned int *v411; // eax
  NiD3DTextureStage *v412; // eax
  unsigned int *v413; // edi
  unsigned int *v414; // eax
  NiD3DTextureStage *v415; // eax
  NiD3DPixelShader *v416; // eax
  int v417; // ecx
  int v418; // edx
  int v419; // eax
  unsigned int *a3; // [esp+20h] [ebp-1Ch] BYREF
  NiD3DPassVtbl **v421; // [esp+24h] [ebp-18h] BYREF
  _DWORD *v422; // [esp+28h] [ebp-14h]
  NiD3DTextureStage *v423; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v424; // [esp+38h] [ebp-4h]

  v422 = this;
  v1 = 0;
  v423 = 0;
  v421 = 0;
  v2 = 0;
  v424 = 0;
  a3 = 0;
  v3 = dword_B477B8;
  v4 = dword_B477B8 == 0;
  LOBYTE(v424) = 1;
  if ( !v4 )
  {
    v1 = (NiD3DPass *)v3;
    v421 = (NiD3DPassVtbl **)v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 0x60);
  }
  if ( v1->StageCount < 7 )
  {
    v5 = (unsigned int *)*sub_772630(&v423);
    if ( v5 )
    {
      v2 = (NiD3DTextureStage *)v5;
      ++v5[0x17];
      a3 = v5;
    }
    v6 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v7 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v7;
    LOBYTE(v424) = 3;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v7;
      a3 = *v7;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v8 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v9 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v9;
    LOBYTE(v424) = 4;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v9;
      a3 = *v9;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v10 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v11 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v11;
    LOBYTE(v424) = 5;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v11;
      a3 = *v11;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v12 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v13 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v13;
    LOBYTE(v424) = 6;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v13;
      a3 = *v13;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v14 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v14[7].Unk08 )
        sub_772560(v14);
    }
    sub_801110((int)v2, 4, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v15 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v15;
    LOBYTE(v424) = 7;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v15;
      a3 = *v15;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v16 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v16[7].Unk08 )
        sub_772560(v16);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v17 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v17;
    LOBYTE(v424) = 8;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v17;
      a3 = *v17;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v18 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v18[7].Unk08 )
        sub_772560(v18);
    }
    sub_801110((int)v2, 6, 3, 2);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v19 = (volatile LONG *)v422[0x31];
  VertexShader = v1->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v19 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v19;
    if ( v19 )
      InterlockedIncrement(v19 + 1);
  }
  PixelShader = v1->PixelShader;
  v22 = dword_B451B0;
  if ( PixelShader != (NiD3DPixelShader *)dword_B451B0 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)(v22 + 4));
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v23 = dword_B442D8;
  v24 = dword_B435B8;
  dword_B43C70 = dword_B43C48;
  v25 = dword_B44968;
  v4 = v1 == (NiD3DPass *)dword_B477BC;
  dword_B44300 = v23;
  dword_B435E0 = v24;
  dword_B44990 = v25;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477BC;
    v421 = (NiD3DPassVtbl **)dword_B477BC;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v26 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v26;
    LOBYTE(v424) = 9;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v26;
      a3 = *v26;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v27 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v27[7].Unk08 )
        sub_772560(v27);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v28 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v28;
    LOBYTE(v424) = 0xA;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v28;
      a3 = *v28;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v29 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v29[7].Unk08 )
        sub_772560(v29);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v30 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v30;
    LOBYTE(v424) = 0xB;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v30;
      a3 = *v30;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v31 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v31[7].Unk08 )
        sub_772560(v31);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v32 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v32;
    LOBYTE(v424) = 0xC;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v32;
      a3 = *v32;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v33 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v33[7].Unk08 )
        sub_772560(v33);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v34 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v34;
    LOBYTE(v424) = 0xD;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v34;
      a3 = *v34;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v35 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v35[7].Unk08 )
        sub_772560(v35);
    }
    sub_801110((int)v2, 4, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v36 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v36;
    LOBYTE(v424) = 0xE;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v36;
      a3 = *v36;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v37 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v37[7].Unk08 )
        sub_772560(v37);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v38 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v38;
    LOBYTE(v424) = 0xF;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v38;
      a3 = *v38;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v39 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v39[7].Unk08 )
        sub_772560(v39);
    }
    sub_801110((int)v2, 6, 3, 2);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v40 = (volatile LONG *)v422[0x32];
  v41 = v1->VertexShader;
  if ( v41 != (NiD3DVertexShader *)v40 )
  {
    if ( v41 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v41 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v41)(v41, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v40;
    if ( v40 )
      InterlockedIncrement(v40 + 1);
  }
  v42 = v1->PixelShader;
  v43 = dword_B451B8;
  if ( v42 != (NiD3DPixelShader *)dword_B451B8 )
  {
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v43;
    if ( v43 )
      InterlockedIncrement((volatile LONG *)(v43 + 4));
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v44 = dword_B44304;
  v45 = dword_B435E4;
  dword_B43C9C = dword_B43C74;
  v46 = dword_B44994;
  v4 = v1 == (NiD3DPass *)dword_B477C0;
  dword_B4432C = v44;
  dword_B4360C = v45;
  dword_B449BC = v46;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477C0;
    v421 = (NiD3DPassVtbl **)dword_B477C0;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v47 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v47;
    LOBYTE(v424) = 0x10;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v47;
      a3 = *v47;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v48 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v48[7].Unk08 )
        sub_772560(v48);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v49 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v49;
    LOBYTE(v424) = 0x11;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v49;
      a3 = *v49;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v50 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v50[7].Unk08 )
        sub_772560(v50);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v51 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v51;
    LOBYTE(v424) = 0x12;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v51;
      a3 = *v51;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v52 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v52[7].Unk08 )
        sub_772560(v52);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v53 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v53;
    LOBYTE(v424) = 0x13;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v53;
      a3 = *v53;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v54 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v54[7].Unk08 )
        sub_772560(v54);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v55 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v55;
    LOBYTE(v424) = 0x14;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v55;
      a3 = *v55;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v56 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v56[7].Unk08 )
        sub_772560(v56);
    }
    sub_801110((int)v2, 4, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v57 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v57;
    LOBYTE(v424) = 0x15;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v57;
      a3 = *v57;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v58 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v58[7].Unk08 )
        sub_772560(v58);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v59 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v59;
    LOBYTE(v424) = 0x16;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v59;
      a3 = *v59;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v60 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v60[7].Unk08 )
        sub_772560(v60);
    }
    sub_801110((int)v2, 6, 3, 2);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v61 = (volatile LONG *)v422[0x33];
  v62 = v1->VertexShader;
  if ( v62 != (NiD3DVertexShader *)v61 )
  {
    if ( v62 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v62)(v62, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v61;
    if ( v61 )
      InterlockedIncrement(v61 + 1);
  }
  v63 = v1->PixelShader;
  v64 = dword_B451C0;
  if ( v63 != (NiD3DPixelShader *)dword_B451C0 )
  {
    if ( v63 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v63 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v63)(v63, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v64;
    if ( v64 )
      InterlockedIncrement((volatile LONG *)(v64 + 4));
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v65 = dword_B44330;
  v66 = dword_B43610;
  dword_B43CC8 = dword_B43CA0;
  v67 = dword_B449C0;
  v4 = v1 == (NiD3DPass *)dword_B477C4;
  dword_B44358 = v65;
  dword_B43638 = v66;
  dword_B449E8 = v67;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477C4;
    v421 = (NiD3DPassVtbl **)dword_B477C4;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v68 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v68;
    LOBYTE(v424) = 0x17;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v68;
      a3 = *v68;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v69 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v69[7].Unk08 )
        sub_772560(v69);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v70 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v70;
    LOBYTE(v424) = 0x18;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v70;
      a3 = *v70;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v71 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v71[7].Unk08 )
        sub_772560(v71);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v72 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v72;
    LOBYTE(v424) = 0x19;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v72;
      a3 = *v72;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v73 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v73[7].Unk08 )
        sub_772560(v73);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v74 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v74;
    LOBYTE(v424) = 0x1A;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v74;
      a3 = *v74;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v75 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v75[7].Unk08 )
        sub_772560(v75);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v76 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v76;
    LOBYTE(v424) = 0x1B;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v76;
      a3 = *v76;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v77 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v77[7].Unk08 )
        sub_772560(v77);
    }
    sub_801110((int)v2, 4, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v78 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v78;
    LOBYTE(v424) = 0x1C;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v78;
      a3 = *v78;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v79 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v79[7].Unk08 )
        sub_772560(v79);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v80 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v80;
    LOBYTE(v424) = 0x1D;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v80;
      a3 = *v80;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v81 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v81[7].Unk08 )
        sub_772560(v81);
    }
    sub_801110((int)v2, 6, 3, 2);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v82 = (volatile LONG *)v422[0x34];
  v83 = v1->VertexShader;
  if ( v83 != (NiD3DVertexShader *)v82 )
  {
    if ( v83 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v83 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v83)(v83, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v82;
    if ( v82 )
      InterlockedIncrement(v82 + 1);
  }
  v84 = v1->PixelShader;
  v85 = dword_B451C8;
  if ( v84 != (NiD3DPixelShader *)dword_B451C8 )
  {
    if ( v84 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v85;
    if ( v85 )
      InterlockedIncrement((volatile LONG *)(v85 + 4));
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v86 = dword_B4435C;
  v87 = dword_B4363C;
  dword_B43CF4 = dword_B43CCC;
  v88 = dword_B449EC;
  v4 = v1 == (NiD3DPass *)dword_B477C8;
  dword_B44384 = v86;
  dword_B43664 = v87;
  dword_B44A14 = v88;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477C8;
    v421 = (NiD3DPassVtbl **)dword_B477C8;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v89 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v89;
    LOBYTE(v424) = 0x1E;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v89;
      a3 = *v89;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v90 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v90[7].Unk08 )
        sub_772560(v90);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v91 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v91;
    LOBYTE(v424) = 0x1F;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v91;
      a3 = *v91;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v92 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v92[7].Unk08 )
        sub_772560(v92);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v93 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v93;
    LOBYTE(v424) = 0x20;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v93;
      a3 = *v93;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v94 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v94[7].Unk08 )
        sub_772560(v94);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v95 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v95;
    LOBYTE(v424) = 0x21;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v95;
      a3 = *v95;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v96 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v96[7].Unk08 )
        sub_772560(v96);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v97 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v97;
    LOBYTE(v424) = 0x22;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v97;
      a3 = *v97;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v98 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v98[7].Unk08 )
        sub_772560(v98);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, 4u, &v2->Stage);
    v99 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v99;
    LOBYTE(v424) = 0x23;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v99;
      a3 = *v99;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v100 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v100[7].Unk08 )
        sub_772560(v100);
    }
    sub_801110((int)v2, 5, 3, 2);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, &v2->Stage);
    v101 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v101;
    LOBYTE(v424) = 0x24;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v101;
      a3 = *v101;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v102 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v102[7].Unk08 )
        sub_772560(v102);
    }
    sub_801110((int)v2, 6, 1, 2);
    sub_760010(v1, 6u, &v2->Stage);
    v103 = (unsigned int **)sub_772630(&v423);
    v4 = v2 == (NiD3DTextureStage *)*v103;
    LOBYTE(v424) = 0x25;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v103;
      a3 = *v103;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v104 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v104[7].Unk08 )
        sub_772560(v104);
    }
    sub_801110((int)v2, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x35]);
  v105 = (NiD3DPixelShader *)sub_883130(0x2Fu);
  sub_7AEC60(&v1->__vftable, v105);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477CC;
  v106 = dword_B44388;
  v107 = dword_B43668;
  dword_B43D28 = dword_B43CF8;
  v108 = dword_B44A18;
  dword_B443B8 = v106;
  dword_B43698 = v107;
  dword_B44A48 = v108;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477CC;
    v421 = (NiD3DPassVtbl **)dword_B477CC;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v109 = sub_772630(&v423);
    LOBYTE(v424) = 0x26;
    sub_75FAE0((NiD3DTextureStage **)&a3, v109);
    v110 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v110[7].Unk08 )
        sub_772560(v110);
    }
    v111 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v111);
    v112 = sub_772630(&v423);
    LOBYTE(v424) = 0x27;
    sub_75FAE0((NiD3DTextureStage **)&a3, v112);
    v113 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v113[7].Unk08 )
        sub_772560(v113);
    }
    v114 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v114);
    v115 = sub_772630(&v423);
    LOBYTE(v424) = 0x28;
    sub_75FAE0((NiD3DTextureStage **)&a3, v115);
    v116 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v116[7].Unk08 )
        sub_772560(v116);
    }
    v117 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v117);
    v118 = sub_772630(&v423);
    LOBYTE(v424) = 0x29;
    sub_75FAE0((NiD3DTextureStage **)&a3, v118);
    v119 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v119[7].Unk08 )
        sub_772560(v119);
    }
    v120 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v120);
    v121 = sub_772630(&v423);
    LOBYTE(v424) = 0x2A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v121);
    v122 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v122[7].Unk08 )
        sub_772560(v122);
    }
    v123 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v123);
    v124 = sub_772630(&v423);
    LOBYTE(v424) = 0x2B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v124);
    v125 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v125[7].Unk08 )
        sub_772560(v125);
    }
    v126 = a3;
    sub_801110((int)a3, 5, 3, 2);
    sub_76C910(v126, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v126);
    v127 = sub_772630(&v423);
    LOBYTE(v424) = 0x2C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v127);
    v128 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v128[7].Unk08 )
        sub_772560(v128);
    }
    v129 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v129);
    v130 = sub_772630(&v423);
    LOBYTE(v424) = 0x2D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v130);
    v131 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v131[7].Unk08 )
        sub_772560(v131);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x36]);
  v132 = (NiD3DPixelShader *)sub_883130(0x32u);
  sub_7AEC60(&v1->__vftable, v132);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477D0;
  v133 = dword_B443C0;
  v134 = dword_B436A0;
  dword_B43D60 = dword_B43D30;
  v135 = dword_B44A50;
  dword_B443F0 = v133;
  dword_B436D0 = v134;
  dword_B44A80 = v135;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477D0;
    v421 = (NiD3DPassVtbl **)dword_B477D0;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v136 = sub_772630(&v423);
    LOBYTE(v424) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v136);
    v137 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v137[7].Unk08 )
        sub_772560(v137);
    }
    v138 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v138);
    v139 = sub_772630(&v423);
    LOBYTE(v424) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v139);
    v140 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v140[7].Unk08 )
        sub_772560(v140);
    }
    v141 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v141);
    v142 = sub_772630(&v423);
    LOBYTE(v424) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v142);
    v143 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v143[7].Unk08 )
        sub_772560(v143);
    }
    v144 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v144);
    v145 = sub_772630(&v423);
    LOBYTE(v424) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v145);
    v146 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v146[7].Unk08 )
        sub_772560(v146);
    }
    v147 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v147);
    v148 = sub_772630(&v423);
    LOBYTE(v424) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v148);
    v149 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v149[7].Unk08 )
        sub_772560(v149);
    }
    v150 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v150);
    v151 = sub_772630(&v423);
    LOBYTE(v424) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v151);
    v152 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v152[7].Unk08 )
        sub_772560(v152);
    }
    v153 = a3;
    sub_801110((int)a3, 5, 3, 2);
    sub_76C910(v153, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v153);
    v154 = sub_772630(&v423);
    LOBYTE(v424) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v154);
    v155 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v155[7].Unk08 )
        sub_772560(v155);
    }
    v156 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v156);
    v157 = sub_772630(&v423);
    LOBYTE(v424) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v157);
    v158 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v158[7].Unk08 )
        sub_772560(v158);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x37]);
  v159 = (NiD3DPixelShader *)sub_883130(0x38u);
  sub_7AEC60(&v1->__vftable, v159);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477D4;
  v160 = dword_B443F8;
  v161 = dword_B436D8;
  dword_B43D94 = dword_B43D68;
  v162 = dword_B44A88;
  dword_B44424 = v160;
  dword_B43704 = v161;
  dword_B44AB4 = v162;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477D4;
    v421 = (NiD3DPassVtbl **)dword_B477D4;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v163 = sub_772630(&v423);
    LOBYTE(v424) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v163);
    v164 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v164[7].Unk08 )
        sub_772560(v164);
    }
    v165 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v165);
    v166 = sub_772630(&v423);
    LOBYTE(v424) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v166);
    v167 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v167[7].Unk08 )
        sub_772560(v167);
    }
    v168 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v168);
    v169 = sub_772630(&v423);
    LOBYTE(v424) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v169);
    v170 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v170[7].Unk08 )
        sub_772560(v170);
    }
    v171 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v171);
    v172 = sub_772630(&v423);
    LOBYTE(v424) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v172);
    v173 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v173[7].Unk08 )
        sub_772560(v173);
    }
    v174 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v174);
    v175 = sub_772630(&v423);
    LOBYTE(v424) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v175);
    v176 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v176[7].Unk08 )
        sub_772560(v176);
    }
    v177 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v177);
    v178 = sub_772630(&v423);
    LOBYTE(v424) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v178);
    v179 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v179[7].Unk08 )
        sub_772560(v179);
    }
    v180 = a3;
    sub_801110((int)a3, 5, 3, 2);
    sub_76C910(v180, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v180);
    v181 = sub_772630(&v423);
    LOBYTE(v424) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v181);
    v182 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v182[7].Unk08 )
        sub_772560(v182);
    }
    v183 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v183);
    v184 = sub_772630(&v423);
    LOBYTE(v424) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v184);
    v185 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v185[7].Unk08 )
        sub_772560(v185);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x38]);
  v186 = (NiD3DPixelShader *)sub_883130(0x3Bu);
  sub_7AEC60(&v1->__vftable, v186);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477D8;
  v187 = dword_B4442C;
  v188 = dword_B4370C;
  dword_B43DC8 = dword_B43D9C;
  v189 = dword_B44ABC;
  dword_B44458 = v187;
  dword_B43738 = v188;
  dword_B44AE8 = v189;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477D8;
    v421 = (NiD3DPassVtbl **)dword_B477D8;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v190 = sub_772630(&v423);
    LOBYTE(v424) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v190);
    v191 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v191[7].Unk08 )
        sub_772560(v191);
    }
    v192 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v192);
    v193 = sub_772630(&v423);
    LOBYTE(v424) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v193);
    v194 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v194[7].Unk08 )
        sub_772560(v194);
    }
    v195 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v195);
    v196 = sub_772630(&v423);
    LOBYTE(v424) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v196);
    v197 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v197[7].Unk08 )
        sub_772560(v197);
    }
    v198 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v198);
    v199 = sub_772630(&v423);
    LOBYTE(v424) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v199);
    v200 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v200[7].Unk08 )
        sub_772560(v200);
    }
    v201 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v201);
    v202 = sub_772630(&v423);
    LOBYTE(v424) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v202);
    v203 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v203[7].Unk08 )
        sub_772560(v203);
    }
    v204 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v204);
    v205 = sub_772630(&v423);
    LOBYTE(v424) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v205);
    v206 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v206[7].Unk08 )
        sub_772560(v206);
    }
    v207 = a3;
    sub_801110((int)a3, 5, 3, 2);
    sub_76C910(v207, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v207);
    v208 = sub_772630(&v423);
    LOBYTE(v424) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v208);
    v209 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v209[7].Unk08 )
        sub_772560(v209);
    }
    v210 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v210);
    v211 = sub_772630(&v423);
    LOBYTE(v424) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v211);
    v212 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v212[7].Unk08 )
        sub_772560(v212);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x39]);
  v213 = (NiD3DPixelShader *)sub_883130(0x3Eu);
  sub_7AEC60(&v1->__vftable, v213);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477DC;
  v214 = dword_B44460;
  v215 = dword_B43740;
  dword_B43E00 = dword_B43DD0;
  v216 = dword_B44AF0;
  dword_B44490 = v214;
  dword_B43770 = v215;
  dword_B44B20 = v216;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477DC;
    v421 = (NiD3DPassVtbl **)dword_B477DC;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v217 = sub_772630(&v423);
    LOBYTE(v424) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v217);
    v218 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v218[7].Unk08 )
        sub_772560(v218);
    }
    v219 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v219);
    v220 = sub_772630(&v423);
    LOBYTE(v424) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v220);
    v221 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v221[7].Unk08 )
        sub_772560(v221);
    }
    v222 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v222);
    v223 = sub_772630(&v423);
    LOBYTE(v424) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v223);
    v224 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v224[7].Unk08 )
        sub_772560(v224);
    }
    v225 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v225);
    v226 = sub_772630(&v423);
    LOBYTE(v424) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v226);
    v227 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v227[7].Unk08 )
        sub_772560(v227);
    }
    v228 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v228);
    v229 = sub_772630(&v423);
    LOBYTE(v424) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v229);
    v230 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v230[7].Unk08 )
        sub_772560(v230);
    }
    v231 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v231);
    v232 = sub_772630(&v423);
    LOBYTE(v424) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v232);
    v233 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v233[7].Unk08 )
        sub_772560(v233);
    }
    v234 = a3;
    sub_801110((int)a3, 5, 3, 2);
    sub_76C910(v234, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v234);
    v235 = sub_772630(&v423);
    LOBYTE(v424) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v235);
    v236 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v236[7].Unk08 )
        sub_772560(v236);
    }
    v237 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v237);
    v238 = sub_772630(&v423);
    LOBYTE(v424) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v238);
    v239 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v239[7].Unk08 )
        sub_772560(v239);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x3A]);
  v240 = (NiD3DPixelShader *)sub_883130(0x41u);
  sub_7AEC60(&v1->__vftable, v240);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477E0;
  v241 = dword_B44494;
  v242 = dword_B43774;
  dword_B43E34 = dword_B43E04;
  v243 = dword_B44B24;
  dword_B444C4 = v241;
  dword_B437A4 = v242;
  dword_B44B54 = v243;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477E0;
    v421 = (NiD3DPassVtbl **)dword_B477E0;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v244 = sub_772630(&v423);
    LOBYTE(v424) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v244);
    v245 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v245[7].Unk08 )
        sub_772560(v245);
    }
    v246 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v246);
    v247 = sub_772630(&v423);
    LOBYTE(v424) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v247);
    v248 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v248[7].Unk08 )
        sub_772560(v248);
    }
    v249 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v249);
    v250 = sub_772630(&v423);
    LOBYTE(v424) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v250);
    v251 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v251[7].Unk08 )
        sub_772560(v251);
    }
    v252 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v252);
    v253 = sub_772630(&v423);
    LOBYTE(v424) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v253);
    v254 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v254[7].Unk08 )
        sub_772560(v254);
    }
    v255 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v255);
    v256 = sub_772630(&v423);
    LOBYTE(v424) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v256);
    v257 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v257[7].Unk08 )
        sub_772560(v257);
    }
    v258 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v258);
    v259 = sub_772630(&v423);
    LOBYTE(v424) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v259);
    v260 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v260[7].Unk08 )
        sub_772560(v260);
    }
    v261 = a3;
    sub_801110((int)a3, 5, 3, 2);
    sub_76C910(v261, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v261);
    v262 = sub_772630(&v423);
    LOBYTE(v424) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v262);
    v263 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v263[7].Unk08 )
        sub_772560(v263);
    }
    v264 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v264);
    v265 = sub_772630(&v423);
    LOBYTE(v424) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v265);
    v266 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v266[7].Unk08 )
        sub_772560(v266);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x3B]);
  v267 = (NiD3DPixelShader *)sub_883130(0x44u);
  sub_7AEC60(&v1->__vftable, v267);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477E4;
  v268 = dword_B444C8;
  v269 = dword_B437A8;
  dword_B43E68 = dword_B43E38;
  v270 = dword_B44B58;
  dword_B444F8 = v268;
  dword_B437D8 = v269;
  dword_B44B88 = v270;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477E4;
    v421 = (NiD3DPassVtbl **)dword_B477E4;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v271 = sub_772630(&v423);
    LOBYTE(v424) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v271);
    v272 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v272[7].Unk08 )
        sub_772560(v272);
    }
    v273 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v273);
    v274 = sub_772630(&v423);
    LOBYTE(v424) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v274);
    v275 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v275[7].Unk08 )
        sub_772560(v275);
    }
    v276 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v276);
    v277 = sub_772630(&v423);
    LOBYTE(v424) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v277);
    v278 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v278[7].Unk08 )
        sub_772560(v278);
    }
    v279 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v279);
    v280 = sub_772630(&v423);
    LOBYTE(v424) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v280);
    v281 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v281[7].Unk08 )
        sub_772560(v281);
    }
    v282 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v282);
    v283 = sub_772630(&v423);
    LOBYTE(v424) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v283);
    v284 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v284[7].Unk08 )
        sub_772560(v284);
    }
    v285 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v285);
    v286 = sub_772630(&v423);
    LOBYTE(v424) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v286);
    v287 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v287[7].Unk08 )
        sub_772560(v287);
    }
    v288 = a3;
    sub_801110((int)a3, 5, 3, 2);
    sub_76C910(v288, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v288);
    v289 = sub_772630(&v423);
    LOBYTE(v424) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v289);
    v290 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v290[7].Unk08 )
        sub_772560(v290);
    }
    v291 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v291);
    v292 = sub_772630(&v423);
    LOBYTE(v424) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v292);
    v293 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v293[7].Unk08 )
        sub_772560(v293);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 2);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x3C]);
  v294 = (NiD3DPixelShader *)sub_883130(0x47u);
  sub_7AEC60(&v1->__vftable, v294);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477E8;
  v295 = dword_B444FC;
  v296 = dword_B437DC;
  dword_B43E9C = dword_B43E6C;
  v297 = dword_B44B8C;
  dword_B4452C = v295;
  dword_B4380C = v296;
  dword_B44BBC = v297;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477E8;
    v421 = (NiD3DPassVtbl **)dword_B477E8;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v298 = sub_772630(&v423);
    LOBYTE(v424) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v298);
    v299 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v299[7].Unk08 )
        sub_772560(v299);
    }
    v300 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v300);
    v301 = sub_772630(&v423);
    LOBYTE(v424) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v301);
    v302 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v302[7].Unk08 )
        sub_772560(v302);
    }
    v303 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v303);
    v304 = sub_772630(&v423);
    LOBYTE(v424) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v304);
    v305 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v305[7].Unk08 )
        sub_772560(v305);
    }
    v306 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v306);
    v307 = sub_772630(&v423);
    LOBYTE(v424) = 0x61;
    sub_75FAE0((NiD3DTextureStage **)&a3, v307);
    v308 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v308[7].Unk08 )
        sub_772560(v308);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 2);
    sub_760010(v1, 3u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x3D]);
  v309 = (NiD3DPixelShader *)sub_883130(0x52u);
  sub_7AEC60(&v1->__vftable, v309);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v4 = v1 == (NiD3DPass *)dword_B477EC;
  v310 = dword_B44550;
  v311 = dword_B43830;
  dword_B43ED8 = dword_B43EC0;
  v312 = dword_B44BE0;
  dword_B44568 = v310;
  dword_B43848 = v311;
  dword_B44BF8 = v312;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B477EC;
    v421 = (NiD3DPassVtbl **)dword_B477EC;
    if ( v421 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 4 )
  {
    v313 = sub_772630(&v423);
    LOBYTE(v424) = 0x62;
    sub_75FAE0((NiD3DTextureStage **)&a3, v313);
    v314 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v314[7].Unk08 )
        sub_772560(v314);
    }
    v315 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v315);
    v316 = sub_772630(&v423);
    LOBYTE(v424) = 0x63;
    sub_75FAE0((NiD3DTextureStage **)&a3, v316);
    v317 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v317[7].Unk08 )
        sub_772560(v317);
    }
    v318 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v318);
    v319 = sub_772630(&v423);
    LOBYTE(v424) = 0x64;
    sub_75FAE0((NiD3DTextureStage **)&a3, v319);
    v320 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v320[7].Unk08 )
        sub_772560(v320);
    }
    v321 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v321);
    v322 = sub_772630(&v423);
    LOBYTE(v424) = 0x65;
    sub_75FAE0((NiD3DTextureStage **)&a3, v322);
    v323 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v323[7].Unk08 )
        sub_772560(v323);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 2);
    sub_760010(v1, 3u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v422[0x3E]);
  v324 = (NiD3DPixelShader *)sub_883130(0x53u);
  sub_7AEC60(&v1->__vftable, v324);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 7, 1, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0);
  v325 = dword_B44588;
  v326 = dword_B43868;
  dword_B43F10 = dword_B43EF8;
  dword_B44C30 = dword_B44C18;
  dword_B445A0 = v325;
  dword_B43880 = v326;
  sub_76C890((NiD3DPass **)&v421, &dword_B477F0);
  v327 = (NiD3DPass *)v421;
  if ( (unsigned int)v421[6] < 6 )
  {
    v328 = sub_772630(&v423);
    LOBYTE(v424) = 0x66;
    sub_75FAE0((NiD3DTextureStage **)&a3, v328);
    v329 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v329[7].Unk08 )
        sub_772560(v329);
    }
    v330 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v327, v327->CurrentStage, v330);
    v331 = sub_772630(&v423);
    LOBYTE(v424) = 0x67;
    sub_75FAE0((NiD3DTextureStage **)&a3, v331);
    v332 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v332[7].Unk08 )
        sub_772560(v332);
    }
    v333 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v327, 1u, v333);
    v334 = sub_772630(&v423);
    LOBYTE(v424) = 0x68;
    sub_75FAE0((NiD3DTextureStage **)&a3, v334);
    v335 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v335[7].Unk08 )
        sub_772560(v335);
    }
    v336 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v327, 2u, v336);
    v337 = sub_772630(&v423);
    LOBYTE(v424) = 0x69;
    sub_75FAE0((NiD3DTextureStage **)&a3, v337);
    v338 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v338[7].Unk08 )
        sub_772560(v338);
    }
    v339 = a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v339, 3, 3, 2);
    sub_760010(v327, 3u, v339);
    v340 = sub_772630(&v423);
    LOBYTE(v424) = 0x6A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v340);
    v341 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v341[7].Unk08 )
        sub_772560(v341);
    }
    v342 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v327, 4u, v342);
    v343 = sub_772630(&v423);
    LOBYTE(v424) = 0x6B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v343);
    v344 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v344[7].Unk08 )
        sub_772560(v344);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v327, 5u, &v2->Stage);
  }
  sub_7AECB0(v327, (NiD3DVertexShader *)v422[0x3F]);
  v345 = (NiD3DPixelShader *)sub_883130(0x54u);
  sub_7AEC60(&v327->__vftable, v345);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 0x1B, 1, 0);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 0x13, 2, 0);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 0x14, 2, 0);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 0xF, 0, 0);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 7, 1, 0);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 0x17, 3, 0);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 0xE, 0, 0);
  if ( !v327->RenderStateGroup )
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v327->RenderStateGroup, 0x34, 0, 0);
  v346 = dword_B438E4;
  v347 = dword_B44604;
  dword_B43F8C = dword_B43F74;
  v348 = dword_B44C94;
  dword_B438FC = v346;
  dword_B4461C = v347;
  dword_B44CAC = v348;
  sub_76C890((NiD3DPass **)&v421, &dword_B477F4);
  v349 = (NiD3DPass *)v421;
  if ( (unsigned int)v421[6] < 6 )
  {
    v350 = sub_772630(&v423);
    LOBYTE(v424) = 0x6C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v350);
    v351 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v351[7].Unk08 )
        sub_772560(v351);
    }
    v352 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v349, v349->CurrentStage, v352);
    v353 = sub_772630(&v423);
    LOBYTE(v424) = 0x6D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v353);
    v354 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v354[7].Unk08 )
        sub_772560(v354);
    }
    v355 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v349, 1u, v355);
    v356 = sub_772630(&v423);
    LOBYTE(v424) = 0x6E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v356);
    v357 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v357[7].Unk08 )
        sub_772560(v357);
    }
    v358 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v349, 2u, v358);
    v359 = sub_772630(&v423);
    LOBYTE(v424) = 0x6F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v359);
    v360 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v360[7].Unk08 )
        sub_772560(v360);
    }
    v361 = a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v361, 3, 3, 2);
    sub_760010(v349, 3u, v361);
    v362 = sub_772630(&v423);
    LOBYTE(v424) = 0x70;
    sub_75FAE0((NiD3DTextureStage **)&a3, v362);
    v363 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v363[7].Unk08 )
        sub_772560(v363);
    }
    v364 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v349, 4u, v364);
    v365 = sub_772630(&v423);
    LOBYTE(v424) = 0x71;
    sub_75FAE0((NiD3DTextureStage **)&a3, v365);
    v366 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v366[7].Unk08 )
        sub_772560(v366);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v349, 5u, &v2->Stage);
  }
  sub_7AECB0(v349, (NiD3DVertexShader *)v422[0x40]);
  v367 = (NiD3DPixelShader *)sub_883130(0x56u);
  sub_7AEC60(&v349->__vftable, v367);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 0x1B, 1, 0);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 0x13, 2, 0);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 0x14, 2, 0);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 0xF, 0, 0);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 7, 1, 0);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 0x17, 3, 0);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 0xE, 0, 0);
  if ( !v349->RenderStateGroup )
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v349->RenderStateGroup, 0x34, 0, 0);
  v368 = dword_B44620;
  v369 = dword_B43900;
  dword_B43FA8 = dword_B43F90;
  v370 = dword_B44CB0;
  dword_B44638 = v368;
  dword_B43918 = v369;
  dword_B44CC8 = v370;
  sub_76C890((NiD3DPass **)&v421, &dword_B477F8);
  v371 = (NiD3DPass *)v421;
  if ( (unsigned int)v421[6] < 6 )
  {
    v372 = sub_772630(&v423);
    LOBYTE(v424) = 0x72;
    sub_75FAE0((NiD3DTextureStage **)&a3, v372);
    v373 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v373[7].Unk08 )
        sub_772560(v373);
    }
    v374 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v371, v371->CurrentStage, v374);
    v375 = sub_772630(&v423);
    LOBYTE(v424) = 0x73;
    sub_75FAE0((NiD3DTextureStage **)&a3, v375);
    v376 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v376[7].Unk08 )
        sub_772560(v376);
    }
    v377 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v371, 1u, v377);
    v378 = sub_772630(&v423);
    LOBYTE(v424) = 0x74;
    sub_75FAE0((NiD3DTextureStage **)&a3, v378);
    v379 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v379[7].Unk08 )
        sub_772560(v379);
    }
    v380 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v371, 2u, v380);
    v381 = sub_772630(&v423);
    LOBYTE(v424) = 0x75;
    sub_75FAE0((NiD3DTextureStage **)&a3, v381);
    v382 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v382[7].Unk08 )
        sub_772560(v382);
    }
    v383 = a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v383, 3, 3, 2);
    sub_760010(v371, 3u, v383);
    v384 = sub_772630(&v423);
    LOBYTE(v424) = 0x76;
    sub_75FAE0((NiD3DTextureStage **)&a3, v384);
    v385 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v385[7].Unk08 )
        sub_772560(v385);
    }
    v386 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v371, 4u, v386);
    v387 = sub_772630(&v423);
    LOBYTE(v424) = 0x77;
    sub_75FAE0((NiD3DTextureStage **)&a3, v387);
    v388 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v388[7].Unk08 )
        sub_772560(v388);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v371, 5u, &v2->Stage);
  }
  sub_7AECB0(v371, (NiD3DVertexShader *)v422[0x41]);
  v389 = (NiD3DPixelShader *)sub_883130(0x58u);
  sub_7AEC60(&v371->__vftable, v389);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 0x1B, 1, 0);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 0x13, 2, 0);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 0x14, 2, 0);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 0xF, 0, 0);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 7, 1, 0);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 0x17, 3, 0);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 0xE, 0, 0);
  if ( !v371->RenderStateGroup )
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v371->RenderStateGroup, 0x34, 0, 0);
  v390 = dword_B4463C;
  v391 = dword_B4391C;
  dword_B43FC4 = dword_B43FAC;
  dword_B44CE4 = dword_B44CCC;
  dword_B44654 = v390;
  dword_B43934 = v391;
  sub_76C890((NiD3DPass **)&v421, &dword_B477FC);
  v392 = (NiD3DPass *)v421;
  if ( (unsigned int)v421[6] < 8 )
  {
    v393 = sub_772630(&v423);
    LOBYTE(v424) = 0x78;
    sub_75FAE0((NiD3DTextureStage **)&a3, v393);
    v394 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v394[7].Unk08 )
        sub_772560(v394);
    }
    v395 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v392, 0, v395);
    v396 = sub_772630(&v423);
    LOBYTE(v424) = 0x79;
    sub_75FAE0((NiD3DTextureStage **)&a3, v396);
    v397 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v397[7].Unk08 )
        sub_772560(v397);
    }
    v398 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v392, 1u, v398);
    v399 = sub_772630(&v423);
    LOBYTE(v424) = 0x7A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v399);
    v400 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v400[7].Unk08 )
        sub_772560(v400);
    }
    v401 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v392, 2u, v401);
    v402 = sub_772630(&v423);
    LOBYTE(v424) = 0x7B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v402);
    v403 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v403[7].Unk08 )
        sub_772560(v403);
    }
    v404 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v392, 3u, v404);
    v405 = sub_772630(&v423);
    LOBYTE(v424) = 0x7C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v405);
    v406 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v406[7].Unk08 )
        sub_772560(v406);
    }
    v407 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v392, 4u, v407);
    v408 = sub_772630(&v423);
    LOBYTE(v424) = 0x7D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v408);
    v409 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v409[7].Unk08 )
        sub_772560(v409);
    }
    v410 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v410, (NiRenderedTexture *)dword_B43110);
    sub_760010(v392, 5u, v410);
    v411 = sub_772630(&v423);
    LOBYTE(v424) = 0x7E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v411);
    v412 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v412[7].Unk08 )
        sub_772560(v412);
    }
    v413 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v392, 6u, v413);
    v414 = sub_772630(&v423);
    LOBYTE(v424) = 0x7F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v414);
    v415 = v423;
    LOBYTE(v424) = 1;
    if ( v423 )
    {
      --v423[7].Unk08;
      if ( !v415[7].Unk08 )
        sub_772560(v415);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v392, 7u, &v2->Stage);
  }
  sub_7AECB0(v392, (NiD3DVertexShader *)v422[0x42]);
  v416 = (NiD3DPixelShader *)sub_883130(0x7Bu);
  sub_7AEC60(&v392->__vftable, v416);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 0x1B, 1, 0);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 0x13, 9, 0);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 0x14, 1, 0);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 0xF, 0, 0);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 7, 1, 0);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 0x17, 4, 0);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 0xE, 0, 0);
  if ( !v392->RenderStateGroup )
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v392->RenderStateGroup, 0x34, 0, 0);
  v417 = dword_B4478C;
  v418 = dword_B43A6C;
  dword_B44108 = dword_B440FC;
  v419 = dword_B44E1C;
  dword_B44798 = v417;
  dword_B43A78 = v418;
  dword_B44E28 = v419;
  LOBYTE(v424) = 0;
  if ( v2 )
  {
    v4 = v2[7].Unk08-- == 1;
    if ( v4 )
      sub_772560(v2);
  }
  v4 = v392->RefCount-- == 1;
  v424 = 0xFFFFFFFF;
  if ( v4 )
    sub_7604D0(v392);
}
