void __thiscall sub_87AD10(int *this)
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
  volatile LONG *v21; // ebx
  NiD3DPixelShader *PixelShader; // ebp
  unsigned int **v23; // ebp
  NiD3DTextureStage *v24; // eax
  unsigned int **v25; // ebp
  NiD3DTextureStage *v26; // eax
  unsigned int **v27; // ebp
  NiD3DTextureStage *v28; // eax
  unsigned int **v29; // ebp
  NiD3DTextureStage *v30; // eax
  unsigned int **v31; // ebp
  NiD3DTextureStage *v32; // eax
  unsigned int **v33; // ebp
  NiD3DTextureStage *v34; // eax
  unsigned int **v35; // ebp
  NiD3DTextureStage *v36; // eax
  volatile LONG *v37; // ebx
  NiD3DVertexShader *v38; // ebp
  volatile LONG *v39; // ebx
  NiD3DPixelShader *v40; // ebp
  unsigned int **v41; // ebp
  NiD3DTextureStage *v42; // eax
  unsigned int **v43; // ebp
  NiD3DTextureStage *v44; // eax
  unsigned int **v45; // ebp
  NiD3DTextureStage *v46; // eax
  unsigned int **v47; // ebp
  NiD3DTextureStage *v48; // eax
  unsigned int **v49; // ebp
  NiD3DTextureStage *v50; // eax
  unsigned int **v51; // ebp
  NiD3DTextureStage *v52; // eax
  unsigned int **v53; // ebp
  NiD3DTextureStage *v54; // eax
  volatile LONG *v55; // ebx
  NiD3DVertexShader *v56; // ebp
  volatile LONG *v57; // ebx
  NiD3DPixelShader *v58; // ebp
  unsigned int **v59; // ebp
  NiD3DTextureStage *v60; // eax
  unsigned int **v61; // ebp
  NiD3DTextureStage *v62; // eax
  unsigned int **v63; // ebp
  NiD3DTextureStage *v64; // eax
  unsigned int **v65; // ebp
  NiD3DTextureStage *v66; // eax
  unsigned int **v67; // ebp
  NiD3DTextureStage *v68; // eax
  unsigned int **v69; // ebp
  NiD3DTextureStage *v70; // eax
  unsigned int **v71; // ebp
  NiD3DTextureStage *v72; // eax
  volatile LONG *v73; // ebx
  NiD3DVertexShader *v74; // ebp
  volatile LONG *v75; // ebx
  NiD3DPixelShader *v76; // ebp
  unsigned int **v77; // ebp
  NiD3DTextureStage *v78; // eax
  unsigned int **v79; // ebp
  NiD3DTextureStage *v80; // eax
  unsigned int **v81; // ebp
  NiD3DTextureStage *v82; // eax
  unsigned int **v83; // ebp
  NiD3DTextureStage *v84; // eax
  unsigned int **v85; // ebp
  NiD3DTextureStage *v86; // eax
  unsigned int **v87; // ebp
  NiD3DTextureStage *v88; // eax
  unsigned int **v89; // ebp
  NiD3DTextureStage *v90; // eax
  NiD3DVertexShader **v91; // ebp
  unsigned int *v92; // eax
  NiD3DTextureStage *v93; // eax
  unsigned int *v94; // edi
  unsigned int *v95; // eax
  NiD3DTextureStage *v96; // eax
  unsigned int *v97; // edi
  unsigned int *v98; // eax
  NiD3DTextureStage *v99; // eax
  unsigned int *v100; // edi
  unsigned int *v101; // eax
  NiD3DTextureStage *v102; // eax
  unsigned int *v103; // edi
  unsigned int *v104; // eax
  NiD3DTextureStage *v105; // eax
  unsigned int *v106; // edi
  unsigned int *v107; // eax
  NiD3DTextureStage *v108; // eax
  unsigned int *v109; // edi
  unsigned int *v110; // eax
  NiD3DTextureStage *v111; // eax
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
  unsigned int *v132; // eax
  NiD3DTextureStage *v133; // eax
  unsigned int *v134; // edi
  unsigned int *v135; // eax
  NiD3DTextureStage *v136; // eax
  unsigned int *v137; // edi
  unsigned int *v138; // eax
  NiD3DTextureStage *v139; // eax
  unsigned int *v140; // edi
  unsigned int *v141; // eax
  NiD3DTextureStage *v142; // eax
  unsigned int *v143; // edi
  unsigned int *v144; // eax
  NiD3DTextureStage *v145; // eax
  unsigned int *v146; // edi
  unsigned int *v147; // eax
  NiD3DTextureStage *v148; // eax
  unsigned int *v149; // edi
  unsigned int *v150; // eax
  NiD3DTextureStage *v151; // eax
  unsigned int *v152; // eax
  NiD3DTextureStage *v153; // eax
  unsigned int *v154; // edi
  unsigned int *v155; // eax
  NiD3DTextureStage *v156; // eax
  unsigned int *v157; // edi
  unsigned int *v158; // eax
  NiD3DTextureStage *v159; // eax
  unsigned int *v160; // edi
  unsigned int *v161; // eax
  NiD3DTextureStage *v162; // eax
  unsigned int *v163; // edi
  unsigned int *v164; // eax
  NiD3DTextureStage *v165; // eax
  unsigned int *v166; // edi
  unsigned int *v167; // eax
  NiD3DTextureStage *v168; // eax
  unsigned int *v169; // edi
  unsigned int *v170; // eax
  NiD3DTextureStage *v171; // eax
  unsigned int *v172; // edi
  unsigned int *v173; // eax
  NiD3DTextureStage *v174; // eax
  int *v175; // ebp
  unsigned int *v176; // eax
  NiD3DTextureStage *v177; // eax
  unsigned int *v178; // edi
  unsigned int *v179; // eax
  NiD3DTextureStage *v180; // eax
  unsigned int *v181; // edi
  unsigned int *v182; // eax
  NiD3DTextureStage *v183; // eax
  unsigned int *v184; // edi
  unsigned int *v185; // eax
  NiD3DTextureStage *v186; // eax
  unsigned int *v187; // edi
  unsigned int *v188; // eax
  NiD3DTextureStage *v189; // eax
  unsigned int *v190; // edi
  unsigned int *v191; // eax
  NiD3DTextureStage *v192; // eax
  unsigned int *v193; // edi
  unsigned int *v194; // eax
  NiD3DTextureStage *v195; // eax
  unsigned int *v196; // edi
  unsigned int *v197; // eax
  NiD3DTextureStage *v198; // eax
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
  unsigned int *v213; // edi
  unsigned int *v214; // eax
  NiD3DTextureStage *v215; // eax
  unsigned int *v216; // edi
  unsigned int *v217; // eax
  NiD3DTextureStage *v218; // eax
  unsigned int *v219; // edi
  unsigned int *v220; // eax
  NiD3DTextureStage *v221; // eax
  unsigned int *v222; // eax
  NiD3DTextureStage *v223; // eax
  unsigned int *v224; // edi
  unsigned int *v225; // eax
  NiD3DTextureStage *v226; // eax
  unsigned int *v227; // edi
  unsigned int *v228; // eax
  NiD3DTextureStage *v229; // eax
  unsigned int *v230; // edi
  unsigned int *v231; // eax
  NiD3DTextureStage *v232; // eax
  unsigned int *v233; // edi
  unsigned int *v234; // eax
  NiD3DTextureStage *v235; // eax
  unsigned int *v236; // edi
  unsigned int *v237; // eax
  NiD3DTextureStage *v238; // eax
  unsigned int *v239; // edi
  unsigned int *v240; // eax
  NiD3DTextureStage *v241; // eax
  unsigned int *v242; // edi
  unsigned int *v243; // eax
  NiD3DTextureStage *v244; // eax
  unsigned int *v245; // eax
  NiD3DTextureStage *v246; // eax
  unsigned int *v247; // edi
  unsigned int *v248; // eax
  NiD3DTextureStage *v249; // eax
  unsigned int *v250; // edi
  unsigned int *v251; // eax
  NiD3DTextureStage *v252; // eax
  unsigned int *v253; // edi
  unsigned int *v254; // eax
  NiD3DTextureStage *v255; // eax
  unsigned int *v256; // edi
  unsigned int *v257; // eax
  NiD3DTextureStage *v258; // eax
  unsigned int *v259; // edi
  unsigned int *v260; // eax
  NiD3DTextureStage *v261; // eax
  unsigned int *v262; // edi
  unsigned int *v263; // eax
  NiD3DTextureStage *v264; // eax
  unsigned int *v265; // edi
  unsigned int *v266; // eax
  NiD3DTextureStage *v267; // eax
  int *v268; // ebp
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
  unsigned int *v289; // edi
  unsigned int *v290; // eax
  NiD3DTextureStage *v291; // eax
  NiD3DPass *v292; // esi
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
  unsigned int *v313; // edi
  unsigned int *v314; // eax
  NiD3DTextureStage *v315; // eax
  NiD3DPass *v316; // esi
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
  unsigned int *v337; // edi
  unsigned int *v338; // eax
  NiD3DTextureStage *v339; // eax
  NiD3DVertexShader **v340; // ebx
  NiD3DPass *v341; // esi
  unsigned int *v342; // eax
  NiD3DTextureStage *v343; // eax
  unsigned int *v344; // edi
  unsigned int *v345; // eax
  NiD3DTextureStage *v346; // eax
  unsigned int *v347; // edi
  unsigned int *v348; // eax
  NiD3DTextureStage *v349; // eax
  unsigned int *v350; // edi
  unsigned int *v351; // eax
  NiD3DTextureStage *v352; // eax
  NiD3DPass *v353; // esi
  unsigned int *v354; // eax
  NiD3DTextureStage *v355; // eax
  unsigned int *v356; // edi
  unsigned int *v357; // eax
  NiD3DTextureStage *v358; // eax
  unsigned int *v359; // edi
  unsigned int *v360; // eax
  NiD3DTextureStage *v361; // eax
  unsigned int *v362; // edi
  unsigned int *v363; // eax
  NiD3DTextureStage *v364; // eax
  NiD3DPass *v365; // esi
  unsigned int *v366; // eax
  NiD3DTextureStage *v367; // eax
  unsigned int *v368; // edi
  unsigned int *v369; // eax
  NiD3DTextureStage *v370; // eax
  unsigned int *v371; // edi
  unsigned int *v372; // eax
  NiD3DTextureStage *v373; // eax
  unsigned int *v374; // edi
  unsigned int *v375; // eax
  NiD3DTextureStage *v376; // eax
  NiD3DPass *v377; // esi
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
  unsigned int *a3; // [esp+20h] [ebp-1Ch] BYREF
  NiD3DPassVtbl **v390; // [esp+24h] [ebp-18h] BYREF
  int *v391; // [esp+28h] [ebp-14h]
  NiD3DTextureStage *v392; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v393; // [esp+38h] [ebp-4h]

  v391 = this;
  v1 = 0;
  v2 = 0;
  v390 = 0;
  v393 = 0;
  a3 = 0;
  v3 = dword_B47718[0];
  v4 = dword_B47718[0] == 0;
  LOBYTE(v393) = 1;
  if ( !v4 )
  {
    v1 = (NiD3DPass *)v3;
    v390 = (NiD3DPassVtbl **)v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 0x60);
  }
  if ( v1->StageCount < 7 )
  {
    v5 = (unsigned int *)*sub_772630(&v392);
    if ( v5 )
    {
      v2 = (NiD3DTextureStage *)v5;
      ++v5[0x17];
      a3 = v5;
    }
    v6 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v7 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v7;
    LOBYTE(v393) = 3;
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
    v8 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v9 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v9;
    LOBYTE(v393) = 4;
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
    v10 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v11 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v11;
    LOBYTE(v393) = 5;
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
    v12 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v13 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v13;
    LOBYTE(v393) = 6;
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
    v14 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v14[7].Unk08 )
        sub_772560(v14);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v15 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v15;
    LOBYTE(v393) = 7;
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
    v16 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v16[7].Unk08 )
        sub_772560(v16);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v17 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v17;
    LOBYTE(v393) = 8;
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
    v18 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v18[7].Unk08 )
        sub_772560(v18);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v19 = (volatile LONG *)v391[0x2F];
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
  v21 = (volatile LONG *)v391[0x3F];
  PixelShader = v1->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v21 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v21;
    if ( v21 )
      InterlockedIncrement(v21 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B4771C;
  dword_B43C58 = 0x21082;
  dword_B442E8 = 0x1C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4771C;
    v390 = (NiD3DPassVtbl **)dword_B4771C;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v23 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v23;
    LOBYTE(v393) = 9;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v23;
      a3 = *v23;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v24 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v24[7].Unk08 )
        sub_772560(v24);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v25 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v25;
    LOBYTE(v393) = 0xA;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v25;
      a3 = *v25;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v26 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v26[7].Unk08 )
        sub_772560(v26);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v27 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v27;
    LOBYTE(v393) = 0xB;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v27;
      a3 = *v27;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v28 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v28[7].Unk08 )
        sub_772560(v28);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v29 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v29;
    LOBYTE(v393) = 0xC;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v29;
      a3 = *v29;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v30 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v30[7].Unk08 )
        sub_772560(v30);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v31 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v31;
    LOBYTE(v393) = 0xD;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v31;
      a3 = *v31;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v32 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v32[7].Unk08 )
        sub_772560(v32);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v33 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v33;
    LOBYTE(v393) = 0xE;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v33;
      a3 = *v33;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v34 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v34[7].Unk08 )
        sub_772560(v34);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v35 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v35;
    LOBYTE(v393) = 0xF;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v35;
      a3 = *v35;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v36 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v36[7].Unk08 )
        sub_772560(v36);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v37 = (volatile LONG *)v391[0x30];
  v38 = v1->VertexShader;
  if ( v38 != (NiD3DVertexShader *)v37 )
  {
    if ( v38 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v38 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v38)(v38, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v37;
    if ( v37 )
      InterlockedIncrement(v37 + 1);
  }
  v39 = (volatile LONG *)v391[0x3F];
  v40 = v1->PixelShader;
  if ( v40 != (NiD3DPixelShader *)v39 )
  {
    if ( v40 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v40 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v40)(v40, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v39;
    if ( v39 )
      InterlockedIncrement(v39 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47720;
  dword_B43C6C = 0x61088;
  dword_B442FC = 0x1C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47720;
    v390 = (NiD3DPassVtbl **)dword_B47720;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v41 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v41;
    LOBYTE(v393) = 0x10;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v41;
      a3 = *v41;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v42 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v42[7].Unk08 )
        sub_772560(v42);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v43 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v43;
    LOBYTE(v393) = 0x11;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v43;
      a3 = *v43;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v44 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v44[7].Unk08 )
        sub_772560(v44);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v45 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v45;
    LOBYTE(v393) = 0x12;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v45;
      a3 = *v45;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v46 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v46[7].Unk08 )
        sub_772560(v46);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v47 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v47;
    LOBYTE(v393) = 0x13;
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
    v48 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v48[7].Unk08 )
        sub_772560(v48);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v49 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v49;
    LOBYTE(v393) = 0x14;
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
    v50 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v50[7].Unk08 )
        sub_772560(v50);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v51 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v51;
    LOBYTE(v393) = 0x15;
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
    v52 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v52[7].Unk08 )
        sub_772560(v52);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v53 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v53;
    LOBYTE(v393) = 0x16;
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
    v54 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v54[7].Unk08 )
        sub_772560(v54);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v55 = (volatile LONG *)v391[0x31];
  v56 = v1->VertexShader;
  if ( v56 != (NiD3DVertexShader *)v55 )
  {
    if ( v56 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v56 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v56)(v56, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v55;
    if ( v55 )
      InterlockedIncrement(v55 + 1);
  }
  v57 = (volatile LONG *)v391[0x40];
  v58 = v1->PixelShader;
  if ( v58 != (NiD3DPixelShader *)v57 )
  {
    if ( v58 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v58 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v58)(v58, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v57;
    if ( v57 )
      InterlockedIncrement(v57 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47724;
  dword_B43C84 = 0x210F2;
  dword_B44314 = 0x1C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47724;
    v390 = (NiD3DPassVtbl **)dword_B47724;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v59 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v59;
    LOBYTE(v393) = 0x17;
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
    v60 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v60[7].Unk08 )
        sub_772560(v60);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v61 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v61;
    LOBYTE(v393) = 0x18;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v61;
      a3 = *v61;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v62 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v62[7].Unk08 )
        sub_772560(v62);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v63 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v63;
    LOBYTE(v393) = 0x19;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v63;
      a3 = *v63;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v64 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v64[7].Unk08 )
        sub_772560(v64);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v65 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v65;
    LOBYTE(v393) = 0x1A;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v65;
      a3 = *v65;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v66 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v66[7].Unk08 )
        sub_772560(v66);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v67 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v67;
    LOBYTE(v393) = 0x1B;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v67;
      a3 = *v67;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v68 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v68[7].Unk08 )
        sub_772560(v68);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v69 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v69;
    LOBYTE(v393) = 0x1C;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v69;
      a3 = *v69;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v70 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v70[7].Unk08 )
        sub_772560(v70);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v71 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v71;
    LOBYTE(v393) = 0x1D;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v71;
      a3 = *v71;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v72 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v72[7].Unk08 )
        sub_772560(v72);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v73 = (volatile LONG *)v391[0x32];
  v74 = v1->VertexShader;
  if ( v74 != (NiD3DVertexShader *)v73 )
  {
    if ( v74 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v74 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v74)(v74, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v73;
    if ( v73 )
      InterlockedIncrement(v73 + 1);
  }
  v75 = (volatile LONG *)v391[0x40];
  v76 = v1->PixelShader;
  if ( v76 != (NiD3DPixelShader *)v75 )
  {
    if ( v76 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v76 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v76)(v76, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v75;
    if ( v75 )
      InterlockedIncrement(v75 + 1);
  }
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47728;
  dword_B43C98 = 0x610F8;
  dword_B44328 = 0x1C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47728;
    v390 = (NiD3DPassVtbl **)dword_B47728;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v77 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v77;
    LOBYTE(v393) = 0x1E;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v77;
      a3 = *v77;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v78 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v78[7].Unk08 )
        sub_772560(v78);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v79 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v79;
    LOBYTE(v393) = 0x1F;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v79;
      a3 = *v79;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v80 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v80[7].Unk08 )
        sub_772560(v80);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v81 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v81;
    LOBYTE(v393) = 0x20;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v81;
      a3 = *v81;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v82 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v82[7].Unk08 )
        sub_772560(v82);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v83 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v83;
    LOBYTE(v393) = 0x21;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v83;
      a3 = *v83;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v84 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v84[7].Unk08 )
        sub_772560(v84);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v85 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v85;
    LOBYTE(v393) = 0x22;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v85;
      a3 = *v85;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v86 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v86[7].Unk08 )
        sub_772560(v86);
    }
    sub_801110((int)v2, 4, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, &v2->Stage);
    v87 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v87;
    LOBYTE(v393) = 0x23;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v87;
      a3 = *v87;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v88 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v88[7].Unk08 )
        sub_772560(v88);
    }
    sub_801110((int)v2, 5, 1, 2);
    sub_760010(v1, 5u, &v2->Stage);
    v89 = (unsigned int **)sub_772630(&v392);
    v4 = v2 == (NiD3DTextureStage *)*v89;
    LOBYTE(v393) = 0x24;
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
    v90 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v90[7].Unk08 )
        sub_772560(v90);
    }
    sub_801110((int)v2, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  v91 = (NiD3DVertexShader **)v391;
  sub_7AECB0(v1, (NiD3DVertexShader *)v391[0x33]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v391[0x41]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B4772C;
  dword_B43CB0 = 0x23082;
  dword_B44340 = 0x3C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4772C;
    v390 = (NiD3DPassVtbl **)dword_B4772C;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v92 = sub_772630(&v392);
    LOBYTE(v393) = 0x25;
    sub_75FAE0((NiD3DTextureStage **)&a3, v92);
    v93 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v93[7].Unk08 )
        sub_772560(v93);
    }
    v94 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v94);
    v95 = sub_772630(&v392);
    LOBYTE(v393) = 0x26;
    sub_75FAE0((NiD3DTextureStage **)&a3, v95);
    v96 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v96[7].Unk08 )
        sub_772560(v96);
    }
    v97 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v97);
    v98 = sub_772630(&v392);
    LOBYTE(v393) = 0x27;
    sub_75FAE0((NiD3DTextureStage **)&a3, v98);
    v99 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v99[7].Unk08 )
        sub_772560(v99);
    }
    v100 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v100);
    v101 = sub_772630(&v392);
    LOBYTE(v393) = 0x28;
    sub_75FAE0((NiD3DTextureStage **)&a3, v101);
    v102 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v102[7].Unk08 )
        sub_772560(v102);
    }
    v103 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v103);
    v104 = sub_772630(&v392);
    LOBYTE(v393) = 0x29;
    sub_75FAE0((NiD3DTextureStage **)&a3, v104);
    v105 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v105[7].Unk08 )
        sub_772560(v105);
    }
    v106 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v106, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v106);
    v107 = sub_772630(&v392);
    LOBYTE(v393) = 0x2A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v107);
    v108 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v108[7].Unk08 )
        sub_772560(v108);
    }
    v109 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v109);
    v110 = sub_772630(&v392);
    LOBYTE(v393) = 0x2B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v110);
    v111 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v111[7].Unk08 )
        sub_772560(v111);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, v91[0x34]);
  sub_7AEC60(&v1->__vftable, v91[0x41]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47730;
  dword_B43CC4 = 0x63088;
  dword_B44354 = 0x3C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47730;
    v390 = (NiD3DPassVtbl **)dword_B47730;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v112 = sub_772630(&v392);
    LOBYTE(v393) = 0x2C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v112);
    v113 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v113[7].Unk08 )
        sub_772560(v113);
    }
    v114 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v114);
    v115 = sub_772630(&v392);
    LOBYTE(v393) = 0x2D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v115);
    v116 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v116[7].Unk08 )
        sub_772560(v116);
    }
    v117 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v117);
    v118 = sub_772630(&v392);
    LOBYTE(v393) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v118);
    v119 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v119[7].Unk08 )
        sub_772560(v119);
    }
    v120 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v120);
    v121 = sub_772630(&v392);
    LOBYTE(v393) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v121);
    v122 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v122[7].Unk08 )
        sub_772560(v122);
    }
    v123 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v123);
    v124 = sub_772630(&v392);
    LOBYTE(v393) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v124);
    v125 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v125[7].Unk08 )
        sub_772560(v125);
    }
    v126 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v126, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v126);
    v127 = sub_772630(&v392);
    LOBYTE(v393) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v127);
    v128 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v128[7].Unk08 )
        sub_772560(v128);
    }
    v129 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v129);
    v130 = sub_772630(&v392);
    LOBYTE(v393) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v130);
    v131 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v131[7].Unk08 )
        sub_772560(v131);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, v91[0x35]);
  sub_7AEC60(&v1->__vftable, v91[0x42]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47734;
  dword_B43CDC = 0x230F2;
  dword_B4436C = 0x3C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47734;
    v390 = (NiD3DPassVtbl **)dword_B47734;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 7 )
  {
    v132 = sub_772630(&v392);
    LOBYTE(v393) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v132);
    v133 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v133[7].Unk08 )
        sub_772560(v133);
    }
    v134 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v134);
    v135 = sub_772630(&v392);
    LOBYTE(v393) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v135);
    v136 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v136[7].Unk08 )
        sub_772560(v136);
    }
    v137 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v137);
    v138 = sub_772630(&v392);
    LOBYTE(v393) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v138);
    v139 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v139[7].Unk08 )
        sub_772560(v139);
    }
    v140 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v140);
    v141 = sub_772630(&v392);
    LOBYTE(v393) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v141);
    v142 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v142[7].Unk08 )
        sub_772560(v142);
    }
    v143 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v143);
    v144 = sub_772630(&v392);
    LOBYTE(v393) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v144);
    v145 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v145[7].Unk08 )
        sub_772560(v145);
    }
    v146 = a3;
    sub_801110((int)a3, 4, 3, 0);
    sub_76C910(v146, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 4u, v146);
    v147 = sub_772630(&v392);
    LOBYTE(v393) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v147);
    v148 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v148[7].Unk08 )
        sub_772560(v148);
    }
    v149 = a3;
    sub_801110((int)a3, 5, 1, 2);
    sub_760010(v1, 5u, v149);
    v150 = sub_772630(&v392);
    LOBYTE(v393) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v150);
    v151 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v151[7].Unk08 )
        sub_772560(v151);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 6, 3, 0);
    sub_760010(v1, 6u, &v2->Stage);
  }
  sub_7AECB0(v1, v91[0x36]);
  sub_7AEC60(&v1->__vftable, v91[0x42]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47738;
  dword_B43CF0 = 0x630F8;
  dword_B44380 = 0x3C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47738;
    v390 = (NiD3DPassVtbl **)dword_B47738;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v152 = sub_772630(&v392);
    LOBYTE(v393) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v152);
    v153 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v153[7].Unk08 )
        sub_772560(v153);
    }
    v154 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v154);
    v155 = sub_772630(&v392);
    LOBYTE(v393) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v155);
    v156 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v156[7].Unk08 )
        sub_772560(v156);
    }
    v157 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v157);
    v158 = sub_772630(&v392);
    LOBYTE(v393) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v158);
    v159 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v159[7].Unk08 )
        sub_772560(v159);
    }
    v160 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v160);
    v161 = sub_772630(&v392);
    LOBYTE(v393) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v161);
    v162 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v162[7].Unk08 )
        sub_772560(v162);
    }
    v163 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v163);
    v164 = sub_772630(&v392);
    LOBYTE(v393) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v164);
    v165 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v165[7].Unk08 )
        sub_772560(v165);
    }
    v166 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v166);
    v167 = sub_772630(&v392);
    LOBYTE(v393) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v167);
    v168 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v168[7].Unk08 )
        sub_772560(v168);
    }
    v169 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v169, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v169);
    v170 = sub_772630(&v392);
    LOBYTE(v393) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v170);
    v171 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v171[7].Unk08 )
        sub_772560(v171);
    }
    v172 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v172);
    v173 = sub_772630(&v392);
    LOBYTE(v393) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v173);
    v174 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v174[7].Unk08 )
        sub_772560(v174);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v175 = v391;
  sub_7AECB0(v1, (NiD3DVertexShader *)v391[0x27]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v175[0x3B]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B4773C;
  dword_B43D04 = 0x38082;
  dword_B44394 = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4773C;
    v390 = (NiD3DPassVtbl **)dword_B4773C;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v176 = sub_772630(&v392);
    LOBYTE(v393) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v176);
    v177 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v177[7].Unk08 )
        sub_772560(v177);
    }
    v178 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v178);
    v179 = sub_772630(&v392);
    LOBYTE(v393) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v179);
    v180 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v180[7].Unk08 )
        sub_772560(v180);
    }
    v181 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v181);
    v182 = sub_772630(&v392);
    LOBYTE(v393) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v182);
    v183 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v183[7].Unk08 )
        sub_772560(v183);
    }
    v184 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v184);
    v185 = sub_772630(&v392);
    LOBYTE(v393) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v185);
    v186 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v186[7].Unk08 )
        sub_772560(v186);
    }
    v187 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v187);
    v188 = sub_772630(&v392);
    LOBYTE(v393) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v188);
    v189 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v189[7].Unk08 )
        sub_772560(v189);
    }
    v190 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v190);
    v191 = sub_772630(&v392);
    LOBYTE(v393) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v191);
    v192 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v192[7].Unk08 )
        sub_772560(v192);
    }
    v193 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v193, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v193);
    v194 = sub_772630(&v392);
    LOBYTE(v393) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v194);
    v195 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v195[7].Unk08 )
        sub_772560(v195);
    }
    v196 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v196);
    v197 = sub_772630(&v392);
    LOBYTE(v393) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v197);
    v198 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v198[7].Unk08 )
        sub_772560(v198);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v391[0x28]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v391[0x3B]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47740;
  dword_B43D1C = 0x78088;
  dword_B443AC = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47740;
    v390 = (NiD3DPassVtbl **)dword_B47740;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v199 = sub_772630(&v392);
    LOBYTE(v393) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v199);
    v200 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v200[7].Unk08 )
        sub_772560(v200);
    }
    v201 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v201);
    v202 = sub_772630(&v392);
    LOBYTE(v393) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v202);
    v203 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v203[7].Unk08 )
        sub_772560(v203);
    }
    v204 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v204);
    v205 = sub_772630(&v392);
    LOBYTE(v393) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v205);
    v206 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v206[7].Unk08 )
        sub_772560(v206);
    }
    v207 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v207);
    v208 = sub_772630(&v392);
    LOBYTE(v393) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v208);
    v209 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v209[7].Unk08 )
        sub_772560(v209);
    }
    v210 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v210);
    v211 = sub_772630(&v392);
    LOBYTE(v393) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v211);
    v212 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v212[7].Unk08 )
        sub_772560(v212);
    }
    v213 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v213);
    v214 = sub_772630(&v392);
    LOBYTE(v393) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v214);
    v215 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v215[7].Unk08 )
        sub_772560(v215);
    }
    v216 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v216, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v216);
    v217 = sub_772630(&v392);
    LOBYTE(v393) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v217);
    v218 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v218[7].Unk08 )
        sub_772560(v218);
    }
    v219 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v219);
    v220 = sub_772630(&v392);
    LOBYTE(v393) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v220);
    v221 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v221[7].Unk08 )
        sub_772560(v221);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v391[0x29]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v391[0x3C]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47744;
  dword_B43D3C = 0x380F2;
  dword_B443CC = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47744;
    v390 = (NiD3DPassVtbl **)dword_B47744;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v222 = sub_772630(&v392);
    LOBYTE(v393) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v222);
    v223 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v223[7].Unk08 )
        sub_772560(v223);
    }
    v224 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v224);
    v225 = sub_772630(&v392);
    LOBYTE(v393) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v225);
    v226 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v226[7].Unk08 )
        sub_772560(v226);
    }
    v227 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v227);
    v228 = sub_772630(&v392);
    LOBYTE(v393) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v228);
    v229 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v229[7].Unk08 )
        sub_772560(v229);
    }
    v230 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v230);
    v231 = sub_772630(&v392);
    LOBYTE(v393) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v231);
    v232 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v232[7].Unk08 )
        sub_772560(v232);
    }
    v233 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v233);
    v234 = sub_772630(&v392);
    LOBYTE(v393) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v234);
    v235 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v235[7].Unk08 )
        sub_772560(v235);
    }
    v236 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v236);
    v237 = sub_772630(&v392);
    LOBYTE(v393) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v237);
    v238 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v238[7].Unk08 )
        sub_772560(v238);
    }
    v239 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v239, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v239);
    v240 = sub_772630(&v392);
    LOBYTE(v393) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v240);
    v241 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v241[7].Unk08 )
        sub_772560(v241);
    }
    v242 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v242);
    v243 = sub_772630(&v392);
    LOBYTE(v393) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v243);
    v244 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v244[7].Unk08 )
        sub_772560(v244);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v391[0x2A]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v391[0x3C]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B47748;
  dword_B43D54 = 0x780F8;
  dword_B443E4 = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47748;
    v390 = (NiD3DPassVtbl **)dword_B47748;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v245 = sub_772630(&v392);
    LOBYTE(v393) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v245);
    v246 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v246[7].Unk08 )
        sub_772560(v246);
    }
    v247 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v247);
    v248 = sub_772630(&v392);
    LOBYTE(v393) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v248);
    v249 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v249[7].Unk08 )
        sub_772560(v249);
    }
    v250 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v250);
    v251 = sub_772630(&v392);
    LOBYTE(v393) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v251);
    v252 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v252[7].Unk08 )
        sub_772560(v252);
    }
    v253 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v253);
    v254 = sub_772630(&v392);
    LOBYTE(v393) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v254);
    v255 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v255[7].Unk08 )
        sub_772560(v255);
    }
    v256 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v256);
    v257 = sub_772630(&v392);
    LOBYTE(v393) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v257);
    v258 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v258[7].Unk08 )
        sub_772560(v258);
    }
    v259 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v259);
    v260 = sub_772630(&v392);
    LOBYTE(v393) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v260);
    v261 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v261[7].Unk08 )
        sub_772560(v261);
    }
    v262 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v262, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v262);
    v263 = sub_772630(&v392);
    LOBYTE(v393) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v263);
    v264 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v264[7].Unk08 )
        sub_772560(v264);
    }
    v265 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v265);
    v266 = sub_772630(&v392);
    LOBYTE(v393) = 0x61;
    sub_75FAE0((NiD3DTextureStage **)&a3, v266);
    v267 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v267[7].Unk08 )
        sub_772560(v267);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v268 = v391;
  sub_7AECB0(v1, (NiD3DVertexShader *)v391[0x2B]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v268[0x3D]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  v4 = v1 == (NiD3DPass *)dword_B4774C;
  dword_B43D70 = 0x39082;
  dword_B44400 = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4774C;
    v390 = (NiD3DPassVtbl **)dword_B4774C;
    if ( v390 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v269 = sub_772630(&v392);
    LOBYTE(v393) = 0x62;
    sub_75FAE0((NiD3DTextureStage **)&a3, v269);
    v270 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v270[7].Unk08 )
        sub_772560(v270);
    }
    v271 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v271);
    v272 = sub_772630(&v392);
    LOBYTE(v393) = 0x63;
    sub_75FAE0((NiD3DTextureStage **)&a3, v272);
    v273 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v273[7].Unk08 )
        sub_772560(v273);
    }
    v274 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v274);
    v275 = sub_772630(&v392);
    LOBYTE(v393) = 0x64;
    sub_75FAE0((NiD3DTextureStage **)&a3, v275);
    v276 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v276[7].Unk08 )
        sub_772560(v276);
    }
    v277 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v277);
    v278 = sub_772630(&v392);
    LOBYTE(v393) = 0x65;
    sub_75FAE0((NiD3DTextureStage **)&a3, v278);
    v279 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v279[7].Unk08 )
        sub_772560(v279);
    }
    v280 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v280);
    v281 = sub_772630(&v392);
    LOBYTE(v393) = 0x66;
    sub_75FAE0((NiD3DTextureStage **)&a3, v281);
    v282 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v282[7].Unk08 )
        sub_772560(v282);
    }
    v283 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v283);
    v284 = sub_772630(&v392);
    LOBYTE(v393) = 0x67;
    sub_75FAE0((NiD3DTextureStage **)&a3, v284);
    v285 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v285[7].Unk08 )
        sub_772560(v285);
    }
    v286 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v286, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v286);
    v287 = sub_772630(&v392);
    LOBYTE(v393) = 0x68;
    sub_75FAE0((NiD3DTextureStage **)&a3, v287);
    v288 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v288[7].Unk08 )
        sub_772560(v288);
    }
    v289 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v289);
    v290 = sub_772630(&v392);
    LOBYTE(v393) = 0x69;
    sub_75FAE0((NiD3DTextureStage **)&a3, v290);
    v291 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v291[7].Unk08 )
        sub_772560(v291);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v391[0x2C]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v391[0x3D]);
  if ( !v1->RenderStateGroup )
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v1->RenderStateGroup, 0xA8, 0xF, 0);
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
  dword_B43D88 = 0x79088;
  dword_B44418 = 0x11C;
  sub_76C890((NiD3DPass **)&v390, &dword_B47750);
  v292 = (NiD3DPass *)v390;
  if ( (unsigned int)v390[6] < 8 )
  {
    v293 = sub_772630(&v392);
    LOBYTE(v393) = 0x6A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v293);
    v294 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v294[7].Unk08 )
        sub_772560(v294);
    }
    v295 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v292, 0, v295);
    v296 = sub_772630(&v392);
    LOBYTE(v393) = 0x6B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v296);
    v297 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v297[7].Unk08 )
        sub_772560(v297);
    }
    v298 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v292, 1u, v298);
    v299 = sub_772630(&v392);
    LOBYTE(v393) = 0x6C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v299);
    v300 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v300[7].Unk08 )
        sub_772560(v300);
    }
    v301 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v292, 2u, v301);
    v302 = sub_772630(&v392);
    LOBYTE(v393) = 0x6D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v302);
    v303 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v303[7].Unk08 )
        sub_772560(v303);
    }
    v304 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v292, 3u, v304);
    v305 = sub_772630(&v392);
    LOBYTE(v393) = 0x6E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v305);
    v306 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v306[7].Unk08 )
        sub_772560(v306);
    }
    v307 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v292, 4u, v307);
    v308 = sub_772630(&v392);
    LOBYTE(v393) = 0x6F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v308);
    v309 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v309[7].Unk08 )
        sub_772560(v309);
    }
    v310 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v310, (NiRenderedTexture *)dword_B43110);
    sub_760010(v292, 5u, v310);
    v311 = sub_772630(&v392);
    LOBYTE(v393) = 0x70;
    sub_75FAE0((NiD3DTextureStage **)&a3, v311);
    v312 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v312[7].Unk08 )
        sub_772560(v312);
    }
    v313 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v292, 6u, v313);
    v314 = sub_772630(&v392);
    LOBYTE(v393) = 0x71;
    sub_75FAE0((NiD3DTextureStage **)&a3, v314);
    v315 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v315[7].Unk08 )
        sub_772560(v315);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v292, 7u, &v2->Stage);
  }
  sub_7AECB0(v292, (NiD3DVertexShader *)v391[0x2D]);
  sub_7AEC60(&v292->__vftable, (NiD3DPixelShader *)v391[0x3E]);
  if ( !v292->RenderStateGroup )
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v292->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v292->RenderStateGroup )
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v292->RenderStateGroup, 0x1B, 0, 0);
  if ( !v292->RenderStateGroup )
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v292->RenderStateGroup, 0xF, 0, 0);
  if ( !v292->RenderStateGroup )
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v292->RenderStateGroup, 7, 1, 0);
  if ( !v292->RenderStateGroup )
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v292->RenderStateGroup, 0x17, 4, 0);
  if ( !v292->RenderStateGroup )
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v292->RenderStateGroup, 0xE, 1, 0);
  if ( !v292->RenderStateGroup )
    v292->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v292->RenderStateGroup, 0x34, 0, 0);
  dword_B43DA4 = 0x390F2;
  dword_B44434 = 0x11C;
  sub_76C890((NiD3DPass **)&v390, &dword_B47754);
  v316 = (NiD3DPass *)v390;
  if ( (unsigned int)v390[6] < 8 )
  {
    v317 = sub_772630(&v392);
    LOBYTE(v393) = 0x72;
    sub_75FAE0((NiD3DTextureStage **)&a3, v317);
    v318 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v318[7].Unk08 )
        sub_772560(v318);
    }
    v319 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v316, 0, v319);
    v320 = sub_772630(&v392);
    LOBYTE(v393) = 0x73;
    sub_75FAE0((NiD3DTextureStage **)&a3, v320);
    v321 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v321[7].Unk08 )
        sub_772560(v321);
    }
    v322 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v316, 1u, v322);
    v323 = sub_772630(&v392);
    LOBYTE(v393) = 0x74;
    sub_75FAE0((NiD3DTextureStage **)&a3, v323);
    v324 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v324[7].Unk08 )
        sub_772560(v324);
    }
    v325 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v316, 2u, v325);
    v326 = sub_772630(&v392);
    LOBYTE(v393) = 0x75;
    sub_75FAE0((NiD3DTextureStage **)&a3, v326);
    v327 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v327[7].Unk08 )
        sub_772560(v327);
    }
    v328 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v316, 3u, v328);
    v329 = sub_772630(&v392);
    LOBYTE(v393) = 0x76;
    sub_75FAE0((NiD3DTextureStage **)&a3, v329);
    v330 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v330[7].Unk08 )
        sub_772560(v330);
    }
    v331 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v316, 4u, v331);
    v332 = sub_772630(&v392);
    LOBYTE(v393) = 0x77;
    sub_75FAE0((NiD3DTextureStage **)&a3, v332);
    v333 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v333[7].Unk08 )
        sub_772560(v333);
    }
    v334 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v334, (NiRenderedTexture *)dword_B43110);
    sub_760010(v316, 5u, v334);
    v335 = sub_772630(&v392);
    LOBYTE(v393) = 0x78;
    sub_75FAE0((NiD3DTextureStage **)&a3, v335);
    v336 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v336[7].Unk08 )
        sub_772560(v336);
    }
    v337 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v316, 6u, v337);
    v338 = sub_772630(&v392);
    LOBYTE(v393) = 0x79;
    sub_75FAE0((NiD3DTextureStage **)&a3, v338);
    v339 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v339[7].Unk08 )
        sub_772560(v339);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v316, 7u, &v2->Stage);
  }
  v340 = (NiD3DVertexShader **)v391;
  sub_7AECB0(v316, (NiD3DVertexShader *)v391[0x2E]);
  sub_7AEC60(&v316->__vftable, v340[0x3E]);
  if ( !v316->RenderStateGroup )
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v316->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v316->RenderStateGroup )
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v316->RenderStateGroup, 0x1B, 0, 0);
  if ( !v316->RenderStateGroup )
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v316->RenderStateGroup, 0xF, 0, 0);
  if ( !v316->RenderStateGroup )
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v316->RenderStateGroup, 7, 1, 0);
  if ( !v316->RenderStateGroup )
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v316->RenderStateGroup, 0x17, 4, 0);
  if ( !v316->RenderStateGroup )
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v316->RenderStateGroup, 0xE, 1, 0);
  if ( !v316->RenderStateGroup )
    v316->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v316->RenderStateGroup, 0x34, 0, 0);
  dword_B43DBC = 0x790F8;
  dword_B4444C = 0x11C;
  sub_76C890((NiD3DPass **)&v390, &dword_B47758);
  v341 = (NiD3DPass *)v390;
  if ( (unsigned int)v390[6] < 4 )
  {
    v342 = sub_772630(&v392);
    LOBYTE(v393) = 0x7A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v342);
    v343 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v343[7].Unk08 )
        sub_772560(v343);
    }
    v344 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v341, 0, v344);
    v345 = sub_772630(&v392);
    LOBYTE(v393) = 0x7B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v345);
    v346 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v346[7].Unk08 )
        sub_772560(v346);
    }
    v347 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v341, 1u, v347);
    v348 = sub_772630(&v392);
    LOBYTE(v393) = 0x7C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v348);
    v349 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v349[7].Unk08 )
        sub_772560(v349);
    }
    v350 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v341, 2u, v350);
    v351 = sub_772630(&v392);
    LOBYTE(v393) = 0x7D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v351);
    v352 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v352[7].Unk08 )
        sub_772560(v352);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v341, 3u, &v2->Stage);
  }
  sub_7AECB0(v341, v340[0x37]);
  sub_7AEC60(&v341->__vftable, v340[0x43]);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0x1B, 1, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0x13, 2, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0x14, 2, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0xF, 0, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 7, 1, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0x17, 3, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0xE, 0, 0);
  if ( !v341->RenderStateGroup )
    v341->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v341->RenderStateGroup, 0x34, 0, 0);
  dword_B43EC4 = 0x39802;
  dword_B44554 = 0x1C;
  sub_76C890((NiD3DPass **)&v390, &dword_B4775C);
  v353 = (NiD3DPass *)v390;
  if ( (unsigned int)v390[6] < 4 )
  {
    v354 = sub_772630(&v392);
    LOBYTE(v393) = 0x7E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v354);
    v355 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v355[7].Unk08 )
        sub_772560(v355);
    }
    v356 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v353, 0, v356);
    v357 = sub_772630(&v392);
    LOBYTE(v393) = 0x7F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v357);
    v358 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v358[7].Unk08 )
        sub_772560(v358);
    }
    v359 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v353, 1u, v359);
    v360 = sub_772630(&v392);
    LOBYTE(v393) = 0x80;
    sub_75FAE0((NiD3DTextureStage **)&a3, v360);
    v361 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v361[7].Unk08 )
        sub_772560(v361);
    }
    v362 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v353, 2u, v362);
    v363 = sub_772630(&v392);
    LOBYTE(v393) = 0x81;
    sub_75FAE0((NiD3DTextureStage **)&a3, v363);
    v364 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v364[7].Unk08 )
        sub_772560(v364);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v353, 3u, &v2->Stage);
  }
  sub_7AECB0(v353, v340[0x38]);
  sub_7AEC60(&v353->__vftable, v340[0x43]);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0x1B, 1, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0x13, 2, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0x14, 2, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0xF, 0, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 7, 1, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0x17, 3, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0xE, 0, 0);
  if ( !v353->RenderStateGroup )
    v353->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v353->RenderStateGroup, 0x34, 0, 0);
  dword_B43ED0 = 0x79808;
  dword_B44560 = 0x1C;
  sub_76C890((NiD3DPass **)&v390, &dword_B47760);
  v365 = (NiD3DPass *)v390;
  if ( (unsigned int)v390[6] < 4 )
  {
    v366 = sub_772630(&v392);
    LOBYTE(v393) = 0x82;
    sub_75FAE0((NiD3DTextureStage **)&a3, v366);
    v367 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v367[7].Unk08 )
        sub_772560(v367);
    }
    v368 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v365, 0, v368);
    v369 = sub_772630(&v392);
    LOBYTE(v393) = 0x83;
    sub_75FAE0((NiD3DTextureStage **)&a3, v369);
    v370 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v370[7].Unk08 )
        sub_772560(v370);
    }
    v371 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v365, 1u, v371);
    v372 = sub_772630(&v392);
    LOBYTE(v393) = 0x84;
    sub_75FAE0((NiD3DTextureStage **)&a3, v372);
    v373 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v373[7].Unk08 )
        sub_772560(v373);
    }
    v374 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v365, 2u, v374);
    v375 = sub_772630(&v392);
    LOBYTE(v393) = 0x85;
    sub_75FAE0((NiD3DTextureStage **)&a3, v375);
    v376 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v376[7].Unk08 )
        sub_772560(v376);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v365, 3u, &v2->Stage);
  }
  sub_7AECB0(v365, v340[0x39]);
  sub_7AEC60(&v365->__vftable, v340[0x44]);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0x1B, 1, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0x13, 2, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0x14, 2, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0xF, 0, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 7, 1, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0x17, 3, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0xE, 0, 0);
  if ( !v365->RenderStateGroup )
    v365->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v365->RenderStateGroup, 0x34, 0, 0);
  dword_B43EFC = 0x3B802;
  dword_B4458C = 0x3C;
  sub_76C890((NiD3DPass **)&v390, &dword_B47764);
  v377 = (NiD3DPass *)v390;
  if ( (unsigned int)v390[6] < 4 )
  {
    v378 = sub_772630(&v392);
    LOBYTE(v393) = 0x86;
    sub_75FAE0((NiD3DTextureStage **)&a3, v378);
    v379 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v379[7].Unk08 )
        sub_772560(v379);
    }
    v380 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v377, 0, v380);
    v381 = sub_772630(&v392);
    LOBYTE(v393) = 0x87;
    sub_75FAE0((NiD3DTextureStage **)&a3, v381);
    v382 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v382[7].Unk08 )
        sub_772560(v382);
    }
    v383 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v377, 1u, v383);
    v384 = sub_772630(&v392);
    LOBYTE(v393) = 0x88;
    sub_75FAE0((NiD3DTextureStage **)&a3, v384);
    v385 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v385[7].Unk08 )
        sub_772560(v385);
    }
    v386 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v377, 2u, v386);
    v387 = sub_772630(&v392);
    LOBYTE(v393) = 0x89;
    sub_75FAE0((NiD3DTextureStage **)&a3, v387);
    v388 = v392;
    LOBYTE(v393) = 1;
    if ( v392 )
    {
      --v392[7].Unk08;
      if ( !v388[7].Unk08 )
        sub_772560(v388);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_76C910(a3, (NiRenderedTexture *)dword_B43110);
    sub_801110((int)v2, 3, 3, 0);
    sub_760010(v377, 3u, &v2->Stage);
  }
  sub_7AECB0(v377, v340[0x3A]);
  sub_7AEC60(&v377->__vftable, v340[0x44]);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0xA8, 0xF, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0x1B, 1, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0x13, 2, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0x14, 2, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0xF, 0, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 7, 1, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0x17, 3, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0xE, 0, 0);
  if ( !v377->RenderStateGroup )
    v377->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v377->RenderStateGroup, 0x34, 0, 0);
  dword_B43F08 = 0x7B808;
  dword_B44598 = 0x3C;
  LOBYTE(v393) = 0;
  if ( v2 )
  {
    v4 = v2[7].Unk08-- == 1;
    if ( v4 )
      sub_772560(v2);
  }
  v4 = v377->RefCount-- == 1;
  v393 = 0xFFFFFFFF;
  if ( v4 )
    sub_7604D0(v377);
}
