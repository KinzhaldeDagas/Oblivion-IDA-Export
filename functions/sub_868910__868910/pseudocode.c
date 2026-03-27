void __thiscall sub_868910(int *this)
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
  unsigned int **v19; // ebx
  NiD3DTextureStage *v20; // eax
  volatile LONG *v21; // ebx
  NiD3DVertexShader *VertexShader; // ebp
  volatile LONG *v23; // ebx
  NiD3DPixelShader *PixelShader; // ebp
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
  unsigned int **v37; // ebp
  NiD3DTextureStage *v38; // eax
  unsigned int **v39; // ebp
  NiD3DTextureStage *v40; // eax
  volatile LONG *v41; // ebx
  NiD3DVertexShader *v42; // ebp
  volatile LONG *v43; // ebx
  NiD3DPixelShader *v44; // ebp
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
  unsigned int **v55; // ebp
  NiD3DTextureStage *v56; // eax
  unsigned int **v57; // ebp
  NiD3DTextureStage *v58; // eax
  unsigned int **v59; // ebp
  NiD3DTextureStage *v60; // eax
  volatile LONG *v61; // ebx
  NiD3DVertexShader *v62; // ebp
  volatile LONG *v63; // ebx
  NiD3DPixelShader *v64; // ebp
  unsigned int **v65; // ebp
  NiD3DTextureStage *v66; // eax
  unsigned int **v67; // ebp
  NiD3DTextureStage *v68; // eax
  unsigned int **v69; // ebp
  NiD3DTextureStage *v70; // eax
  unsigned int **v71; // ebp
  NiD3DTextureStage *v72; // eax
  unsigned int **v73; // ebp
  NiD3DTextureStage *v74; // eax
  unsigned int **v75; // ebp
  NiD3DTextureStage *v76; // eax
  unsigned int **v77; // ebp
  NiD3DTextureStage *v78; // eax
  unsigned int **v79; // ebp
  NiD3DTextureStage *v80; // eax
  volatile LONG *v81; // ebx
  NiD3DVertexShader *v82; // ebp
  volatile LONG *v83; // ebx
  NiD3DPixelShader *v84; // ebp
  unsigned int **v85; // ebp
  NiD3DTextureStage *v86; // eax
  unsigned int **v87; // ebp
  NiD3DTextureStage *v88; // eax
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
  unsigned int **v105; // ebp
  NiD3DTextureStage *v106; // eax
  unsigned int *v107; // eax
  NiD3DTextureStage *v108; // eax
  unsigned int *v109; // edi
  unsigned int *v110; // eax
  NiD3DTextureStage *v111; // eax
  unsigned int *v112; // edi
  unsigned int *v113; // eax
  NiD3DTextureStage *v114; // eax
  unsigned int *v115; // edi
  unsigned int *v116; // eax
  NiD3DTextureStage *v117; // eax
  unsigned int *v118; // edi
  unsigned int *v119; // eax
  NiD3DTextureStage *v120; // eax
  NiD3DVertexShader **v121; // ebp
  unsigned int *v122; // eax
  NiD3DTextureStage *v123; // eax
  unsigned int *v124; // edi
  unsigned int *v125; // eax
  NiD3DTextureStage *v126; // eax
  unsigned int *v127; // edi
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
  unsigned int *v159; // edi
  unsigned int *v160; // eax
  NiD3DTextureStage *v161; // eax
  unsigned int *v162; // edi
  unsigned int *v163; // eax
  NiD3DTextureStage *v164; // eax
  unsigned int *v165; // edi
  unsigned int *v166; // eax
  NiD3DTextureStage *v167; // eax
  unsigned int *v168; // eax
  NiD3DTextureStage *v169; // eax
  unsigned int *v170; // edi
  unsigned int *v171; // eax
  NiD3DTextureStage *v172; // eax
  unsigned int *v173; // edi
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
  int *v191; // ebp
  unsigned int *v192; // eax
  NiD3DTextureStage *v193; // eax
  unsigned int *v194; // edi
  unsigned int *v195; // eax
  NiD3DTextureStage *v196; // eax
  unsigned int *v197; // edi
  unsigned int *v198; // eax
  NiD3DTextureStage *v199; // eax
  unsigned int *v200; // edi
  unsigned int *v201; // eax
  NiD3DTextureStage *v202; // eax
  unsigned int *v203; // edi
  unsigned int *v204; // eax
  NiD3DTextureStage *v205; // eax
  unsigned int *v206; // edi
  unsigned int *v207; // eax
  NiD3DTextureStage *v208; // eax
  unsigned int *v209; // edi
  unsigned int *v210; // eax
  NiD3DTextureStage *v211; // eax
  unsigned int *v212; // edi
  unsigned int *v213; // eax
  NiD3DTextureStage *v214; // eax
  unsigned int *v215; // eax
  NiD3DTextureStage *v216; // eax
  unsigned int *v217; // edi
  unsigned int *v218; // eax
  NiD3DTextureStage *v219; // eax
  unsigned int *v220; // edi
  unsigned int *v221; // eax
  NiD3DTextureStage *v222; // eax
  unsigned int *v223; // edi
  unsigned int *v224; // eax
  NiD3DTextureStage *v225; // eax
  unsigned int *v226; // edi
  unsigned int *v227; // eax
  NiD3DTextureStage *v228; // eax
  unsigned int *v229; // edi
  unsigned int *v230; // eax
  NiD3DTextureStage *v231; // eax
  unsigned int *v232; // edi
  unsigned int *v233; // eax
  NiD3DTextureStage *v234; // eax
  unsigned int *v235; // edi
  unsigned int *v236; // eax
  NiD3DTextureStage *v237; // eax
  int *v238; // ebp
  unsigned int *v239; // eax
  NiD3DTextureStage *v240; // eax
  unsigned int *v241; // edi
  unsigned int *v242; // eax
  NiD3DTextureStage *v243; // eax
  unsigned int *v244; // edi
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
  unsigned int *v262; // eax
  NiD3DTextureStage *v263; // eax
  unsigned int *v264; // edi
  unsigned int *v265; // eax
  NiD3DTextureStage *v266; // eax
  unsigned int *v267; // edi
  unsigned int *v268; // eax
  NiD3DTextureStage *v269; // eax
  unsigned int *v270; // edi
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
  int *v285; // ebp
  unsigned int *v286; // eax
  NiD3DTextureStage *v287; // eax
  unsigned int *v288; // edi
  unsigned int *v289; // eax
  NiD3DTextureStage *v290; // eax
  unsigned int *v291; // edi
  unsigned int *v292; // eax
  NiD3DTextureStage *v293; // eax
  unsigned int *v294; // edi
  unsigned int *v295; // eax
  NiD3DTextureStage *v296; // eax
  unsigned int *v297; // edi
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
  NiD3DPass *v309; // esi
  unsigned int *v310; // eax
  NiD3DTextureStage *v311; // eax
  unsigned int *v312; // edi
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
  unsigned int *v324; // edi
  unsigned int *v325; // eax
  NiD3DTextureStage *v326; // eax
  unsigned int *v327; // edi
  unsigned int *v328; // eax
  NiD3DTextureStage *v329; // eax
  unsigned int *v330; // edi
  unsigned int *v331; // eax
  NiD3DTextureStage *v332; // eax
  int *v333; // ebp
  NiD3DPass *v334; // esi
  unsigned int *v335; // eax
  NiD3DTextureStage *v336; // eax
  unsigned int *v337; // edi
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
  unsigned int *a3; // [esp+20h] [ebp-1Ch] BYREF
  int *v359; // [esp+24h] [ebp-18h]
  NiD3DPassVtbl **v360; // [esp+28h] [ebp-14h] BYREF
  NiD3DTextureStage *v361; // [esp+2Ch] [ebp-10h] BYREF
  unsigned int v362; // [esp+38h] [ebp-4h]

  v359 = this;
  v1 = 0;
  v2 = 0;
  v360 = 0;
  v362 = 0;
  a3 = 0;
  v3 = dword_B47660;
  v4 = dword_B47660 == 0;
  LOBYTE(v362) = 1;
  if ( !v4 )
  {
    v1 = (NiD3DPass *)v3;
    v360 = (NiD3DPassVtbl **)v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 0x60);
  }
  if ( v1->StageCount < 8 )
  {
    v5 = (unsigned int *)*sub_772630(&v361);
    if ( v5 )
    {
      v2 = (NiD3DTextureStage *)v5;
      ++v5[0x17];
      a3 = v5;
    }
    v6 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v6[7].Unk08 )
        sub_772560(v6);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v7 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v7;
    LOBYTE(v362) = 3;
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
    v8 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v9 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v9;
    LOBYTE(v362) = 4;
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
    v10 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v10[7].Unk08 )
        sub_772560(v10);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v11 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v11;
    LOBYTE(v362) = 5;
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
    v12 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v12[7].Unk08 )
        sub_772560(v12);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v13 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v13;
    LOBYTE(v362) = 6;
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
    v14 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v14[7].Unk08 )
        sub_772560(v14);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, 4u, &v2->Stage);
    v15 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v15;
    LOBYTE(v362) = 7;
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
    v16 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v16[7].Unk08 )
        sub_772560(v16);
    }
    sub_801110((int)v2, 5, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, &v2->Stage);
    v17 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v17;
    LOBYTE(v362) = 8;
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
    v18 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v18[7].Unk08 )
        sub_772560(v18);
    }
    sub_801110((int)v2, 6, 1, 2);
    sub_760010(v1, 6u, &v2->Stage);
    v19 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v19;
    LOBYTE(v362) = 9;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v19;
      a3 = *v19;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v20 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v20[7].Unk08 )
        sub_772560(v20);
    }
    sub_801110((int)v2, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v21 = (volatile LONG *)v359[0x27];
  VertexShader = v1->VertexShader;
  if ( VertexShader != (NiD3DVertexShader *)v21 )
  {
    if ( VertexShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v21;
    if ( v21 )
      InterlockedIncrement(v21 + 1);
  }
  v23 = (volatile LONG *)v359[0x4B];
  PixelShader = v1->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v23 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v23;
    if ( v23 )
      InterlockedIncrement(v23 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B47664;
  dword_B43D08 = 0x38082;
  dword_B44398 = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47664;
    v360 = (NiD3DPassVtbl **)dword_B47664;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v25 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v25;
    LOBYTE(v362) = 0xA;
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
    v26 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v26[7].Unk08 )
        sub_772560(v26);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v27 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v27;
    LOBYTE(v362) = 0xB;
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
    v28 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v28[7].Unk08 )
        sub_772560(v28);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v29 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v29;
    LOBYTE(v362) = 0xC;
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
    v30 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v30[7].Unk08 )
        sub_772560(v30);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v31 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v31;
    LOBYTE(v362) = 0xD;
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
    v32 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v32[7].Unk08 )
        sub_772560(v32);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v33 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v33;
    LOBYTE(v362) = 0xE;
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
    v34 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v34[7].Unk08 )
        sub_772560(v34);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, 4u, &v2->Stage);
    v35 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v35;
    LOBYTE(v362) = 0xF;
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
    v36 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v36[7].Unk08 )
        sub_772560(v36);
    }
    sub_801110((int)v2, 5, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, &v2->Stage);
    v37 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v37;
    LOBYTE(v362) = 0x10;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v37;
      a3 = *v37;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v38 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v38[7].Unk08 )
        sub_772560(v38);
    }
    sub_801110((int)v2, 6, 1, 2);
    sub_760010(v1, 6u, &v2->Stage);
    v39 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v39;
    LOBYTE(v362) = 0x11;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v39;
      a3 = *v39;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v40 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v40[7].Unk08 )
        sub_772560(v40);
    }
    sub_801110((int)v2, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v41 = (volatile LONG *)v359[0x27];
  v42 = v1->VertexShader;
  if ( v42 != (NiD3DVertexShader *)v41 )
  {
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v42)(v42, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v41;
    if ( v41 )
      InterlockedIncrement(v41 + 1);
  }
  v43 = (volatile LONG *)v359[0x4C];
  v44 = v1->PixelShader;
  if ( v44 != (NiD3DPixelShader *)v43 )
  {
    if ( v44 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v44 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v44)(v44, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v43;
    if ( v43 )
      InterlockedIncrement(v43 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B47668;
  dword_B43D0C = 0x38082;
  dword_B4439C = 0x18C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47668;
    v360 = (NiD3DPassVtbl **)dword_B47668;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v45 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v45;
    LOBYTE(v362) = 0x12;
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
    v46 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v46[7].Unk08 )
        sub_772560(v46);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v47 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v47;
    LOBYTE(v362) = 0x13;
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
    v48 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v48[7].Unk08 )
        sub_772560(v48);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v49 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v49;
    LOBYTE(v362) = 0x14;
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
    v50 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v50[7].Unk08 )
        sub_772560(v50);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v51 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v51;
    LOBYTE(v362) = 0x15;
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
    v52 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v52[7].Unk08 )
        sub_772560(v52);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v53 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v53;
    LOBYTE(v362) = 0x16;
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
    v54 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v54[7].Unk08 )
        sub_772560(v54);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, 4u, &v2->Stage);
    v55 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v55;
    LOBYTE(v362) = 0x17;
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
    v56 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v56[7].Unk08 )
        sub_772560(v56);
    }
    sub_801110((int)v2, 5, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, &v2->Stage);
    v57 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v57;
    LOBYTE(v362) = 0x18;
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
    v58 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v58[7].Unk08 )
        sub_772560(v58);
    }
    sub_801110((int)v2, 6, 1, 2);
    sub_760010(v1, 6u, &v2->Stage);
    v59 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v59;
    LOBYTE(v362) = 0x19;
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
    v60 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v60[7].Unk08 )
        sub_772560(v60);
    }
    sub_801110((int)v2, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v61 = (volatile LONG *)v359[0x28];
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
  v63 = (volatile LONG *)v359[0x4B];
  v64 = v1->PixelShader;
  if ( v64 != (NiD3DPixelShader *)v63 )
  {
    if ( v64 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v64 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v64)(v64, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v63;
    if ( v63 )
      InterlockedIncrement(v63 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B4766C;
  dword_B43D20 = 0x78088;
  dword_B443B0 = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4766C;
    v360 = (NiD3DPassVtbl **)dword_B4766C;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v65 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v65;
    LOBYTE(v362) = 0x1A;
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
    v66 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v66[7].Unk08 )
        sub_772560(v66);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v67 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v67;
    LOBYTE(v362) = 0x1B;
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
    v68 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v68[7].Unk08 )
        sub_772560(v68);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v69 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v69;
    LOBYTE(v362) = 0x1C;
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
    v70 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v70[7].Unk08 )
        sub_772560(v70);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v71 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v71;
    LOBYTE(v362) = 0x1D;
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
    v72 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v72[7].Unk08 )
        sub_772560(v72);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v73 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v73;
    LOBYTE(v362) = 0x1E;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v73;
      a3 = *v73;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v74 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v74[7].Unk08 )
        sub_772560(v74);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, 4u, &v2->Stage);
    v75 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v75;
    LOBYTE(v362) = 0x1F;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v75;
      a3 = *v75;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v76 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v76[7].Unk08 )
        sub_772560(v76);
    }
    sub_801110((int)v2, 5, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, &v2->Stage);
    v77 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v77;
    LOBYTE(v362) = 0x20;
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
    v78 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v78[7].Unk08 )
        sub_772560(v78);
    }
    sub_801110((int)v2, 6, 1, 2);
    sub_760010(v1, 6u, &v2->Stage);
    v79 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v79;
    LOBYTE(v362) = 0x21;
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
    v80 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v80[7].Unk08 )
        sub_772560(v80);
    }
    sub_801110((int)v2, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v81 = (volatile LONG *)v359[0x28];
  v82 = v1->VertexShader;
  if ( v82 != (NiD3DVertexShader *)v81 )
  {
    if ( v82 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v82)(v82, 1);
    }
    v1->VertexShader = (NiD3DVertexShader *)v81;
    if ( v81 )
      InterlockedIncrement(v81 + 1);
  }
  v83 = (volatile LONG *)v359[0x4C];
  v84 = v1->PixelShader;
  if ( v84 != (NiD3DPixelShader *)v83 )
  {
    if ( v84 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1);
    }
    v1->PixelShader = (NiD3DPixelShader *)v83;
    if ( v83 )
      InterlockedIncrement(v83 + 1);
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
  v4 = v1 == (NiD3DPass *)dword_B47670;
  dword_B43D24 = 0x78088;
  dword_B443B4 = 0x18C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47670;
    v360 = (NiD3DPassVtbl **)dword_B47670;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v85 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v85;
    LOBYTE(v362) = 0x22;
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
    v86 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v86[7].Unk08 )
        sub_772560(v86);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v87 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v87;
    LOBYTE(v362) = 0x23;
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
    v88 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v88[7].Unk08 )
        sub_772560(v88);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v89 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v89;
    LOBYTE(v362) = 0x24;
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
    v90 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v90[7].Unk08 )
        sub_772560(v90);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v91 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v91;
    LOBYTE(v362) = 0x25;
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
    v92 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v92[7].Unk08 )
        sub_772560(v92);
    }
    sub_801110((int)v2, 3, 1, 2);
    sub_760010(v1, 3u, &v2->Stage);
    v93 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v93;
    LOBYTE(v362) = 0x26;
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
    v94 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v94[7].Unk08 )
        sub_772560(v94);
    }
    sub_801110((int)v2, 4, 1, 2);
    sub_760010(v1, 4u, &v2->Stage);
    v95 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v95;
    LOBYTE(v362) = 0x27;
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
    v96 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v96[7].Unk08 )
        sub_772560(v96);
    }
    sub_801110((int)v2, 5, 3, 0);
    sub_76C910(v2, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, &v2->Stage);
    v97 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v97;
    LOBYTE(v362) = 0x28;
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
    v98 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v98[7].Unk08 )
        sub_772560(v98);
    }
    sub_801110((int)v2, 6, 1, 2);
    sub_760010(v1, 6u, &v2->Stage);
    v99 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v99;
    LOBYTE(v362) = 0x29;
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
    v100 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v100[7].Unk08 )
        sub_772560(v100);
    }
    sub_801110((int)v2, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x29]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v359[0x4D]);
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
  v4 = v1 == (NiD3DPass *)dword_B47674;
  dword_B43D40 = 0x380F2;
  dword_B443D0 = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47674;
    v360 = (NiD3DPassVtbl **)dword_B47674;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v101 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v101;
    LOBYTE(v362) = 0x2A;
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
    v102 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v102[7].Unk08 )
        sub_772560(v102);
    }
    sub_801110((int)v2, 0, 1, 2);
    sub_760010(v1, 0, &v2->Stage);
    v103 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v103;
    LOBYTE(v362) = 0x2B;
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
    v104 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v104[7].Unk08 )
        sub_772560(v104);
    }
    sub_801110((int)v2, 1, 1, 2);
    sub_760010(v1, 1u, &v2->Stage);
    v105 = (unsigned int **)sub_772630(&v361);
    v4 = v2 == (NiD3DTextureStage *)*v105;
    LOBYTE(v362) = 0x2C;
    if ( !v4 )
    {
      if ( v2 )
      {
        v4 = v2[7].Unk08-- == 1;
        if ( v4 )
          sub_772560(v2);
      }
      v2 = (NiD3DTextureStage *)*v105;
      a3 = *v105;
      if ( a3 )
        ++v2[7].Unk08;
    }
    v106 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v106[7].Unk08 )
        sub_772560(v106);
    }
    sub_801110((int)v2, 2, 1, 2);
    sub_760010(v1, 2u, &v2->Stage);
    v107 = sub_772630(&v361);
    LOBYTE(v362) = 0x2D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v107);
    v108 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v108[7].Unk08 )
        sub_772560(v108);
    }
    v109 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v109);
    v110 = sub_772630(&v361);
    LOBYTE(v362) = 0x2E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v110);
    v111 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v111[7].Unk08 )
        sub_772560(v111);
    }
    v112 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v112);
    v113 = sub_772630(&v361);
    LOBYTE(v362) = 0x2F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v113);
    v114 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v114[7].Unk08 )
        sub_772560(v114);
    }
    v115 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v115, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v115);
    v116 = sub_772630(&v361);
    LOBYTE(v362) = 0x30;
    sub_75FAE0((NiD3DTextureStage **)&a3, v116);
    v117 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v117[7].Unk08 )
        sub_772560(v117);
    }
    v118 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v118);
    v119 = sub_772630(&v361);
    LOBYTE(v362) = 0x31;
    sub_75FAE0((NiD3DTextureStage **)&a3, v119);
    v120 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v120[7].Unk08 )
        sub_772560(v120);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v121 = (NiD3DVertexShader **)v359;
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x29]);
  sub_7AEC60(&v1->__vftable, v121[0x4E]);
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
  v4 = v1 == (NiD3DPass *)dword_B47678;
  dword_B43D44 = 0x380F2;
  dword_B443D4 = 0x18C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47678;
    v360 = (NiD3DPassVtbl **)dword_B47678;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v122 = sub_772630(&v361);
    LOBYTE(v362) = 0x32;
    sub_75FAE0((NiD3DTextureStage **)&a3, v122);
    v123 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v123[7].Unk08 )
        sub_772560(v123);
    }
    v124 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v124);
    v125 = sub_772630(&v361);
    LOBYTE(v362) = 0x33;
    sub_75FAE0((NiD3DTextureStage **)&a3, v125);
    v126 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v126[7].Unk08 )
        sub_772560(v126);
    }
    v127 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v127);
    v128 = sub_772630(&v361);
    LOBYTE(v362) = 0x34;
    sub_75FAE0((NiD3DTextureStage **)&a3, v128);
    v129 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v129[7].Unk08 )
        sub_772560(v129);
    }
    v130 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v130);
    v131 = sub_772630(&v361);
    LOBYTE(v362) = 0x35;
    sub_75FAE0((NiD3DTextureStage **)&a3, v131);
    v132 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v132[7].Unk08 )
        sub_772560(v132);
    }
    v133 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v133);
    v134 = sub_772630(&v361);
    LOBYTE(v362) = 0x36;
    sub_75FAE0((NiD3DTextureStage **)&a3, v134);
    v135 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v135[7].Unk08 )
        sub_772560(v135);
    }
    v136 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v136);
    v137 = sub_772630(&v361);
    LOBYTE(v362) = 0x37;
    sub_75FAE0((NiD3DTextureStage **)&a3, v137);
    v138 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v138[7].Unk08 )
        sub_772560(v138);
    }
    v139 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v139, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v139);
    v140 = sub_772630(&v361);
    LOBYTE(v362) = 0x38;
    sub_75FAE0((NiD3DTextureStage **)&a3, v140);
    v141 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v141[7].Unk08 )
        sub_772560(v141);
    }
    v142 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v142);
    v143 = sub_772630(&v361);
    LOBYTE(v362) = 0x39;
    sub_75FAE0((NiD3DTextureStage **)&a3, v143);
    v144 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v144[7].Unk08 )
        sub_772560(v144);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, v121[0x2A]);
  sub_7AEC60(&v1->__vftable, v121[0x4D]);
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
  v4 = v1 == (NiD3DPass *)dword_B4767C;
  dword_B43D44 = 0x780F8;
  dword_B443D4 = 0x10C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4767C;
    v360 = (NiD3DPassVtbl **)dword_B4767C;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v145 = sub_772630(&v361);
    LOBYTE(v362) = 0x3A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v145);
    v146 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v146[7].Unk08 )
        sub_772560(v146);
    }
    v147 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v147);
    v148 = sub_772630(&v361);
    LOBYTE(v362) = 0x3B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v148);
    v149 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v149[7].Unk08 )
        sub_772560(v149);
    }
    v150 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v150);
    v151 = sub_772630(&v361);
    LOBYTE(v362) = 0x3C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v151);
    v152 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v152[7].Unk08 )
        sub_772560(v152);
    }
    v153 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v153);
    v154 = sub_772630(&v361);
    LOBYTE(v362) = 0x3D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v154);
    v155 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v155[7].Unk08 )
        sub_772560(v155);
    }
    v156 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v156);
    v157 = sub_772630(&v361);
    LOBYTE(v362) = 0x3E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v157);
    v158 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v158[7].Unk08 )
        sub_772560(v158);
    }
    v159 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v159);
    v160 = sub_772630(&v361);
    LOBYTE(v362) = 0x3F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v160);
    v161 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v161[7].Unk08 )
        sub_772560(v161);
    }
    v162 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v162, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v162);
    v163 = sub_772630(&v361);
    LOBYTE(v362) = 0x40;
    sub_75FAE0((NiD3DTextureStage **)&a3, v163);
    v164 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v164[7].Unk08 )
        sub_772560(v164);
    }
    v165 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v165);
    v166 = sub_772630(&v361);
    LOBYTE(v362) = 0x41;
    sub_75FAE0((NiD3DTextureStage **)&a3, v166);
    v167 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v167[7].Unk08 )
        sub_772560(v167);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x2A]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v359[0x4E]);
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
  v4 = v1 == (NiD3DPass *)dword_B47680;
  dword_B43D5C = 0x780F8;
  dword_B443EC = 0x18C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47680;
    v360 = (NiD3DPassVtbl **)dword_B47680;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v168 = sub_772630(&v361);
    LOBYTE(v362) = 0x42;
    sub_75FAE0((NiD3DTextureStage **)&a3, v168);
    v169 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v169[7].Unk08 )
        sub_772560(v169);
    }
    v170 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v170);
    v171 = sub_772630(&v361);
    LOBYTE(v362) = 0x43;
    sub_75FAE0((NiD3DTextureStage **)&a3, v171);
    v172 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v172[7].Unk08 )
        sub_772560(v172);
    }
    v173 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v173);
    v174 = sub_772630(&v361);
    LOBYTE(v362) = 0x44;
    sub_75FAE0((NiD3DTextureStage **)&a3, v174);
    v175 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v175[7].Unk08 )
        sub_772560(v175);
    }
    v176 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v176);
    v177 = sub_772630(&v361);
    LOBYTE(v362) = 0x45;
    sub_75FAE0((NiD3DTextureStage **)&a3, v177);
    v178 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v178[7].Unk08 )
        sub_772560(v178);
    }
    v179 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v179);
    v180 = sub_772630(&v361);
    LOBYTE(v362) = 0x46;
    sub_75FAE0((NiD3DTextureStage **)&a3, v180);
    v181 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v181[7].Unk08 )
        sub_772560(v181);
    }
    v182 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v182);
    v183 = sub_772630(&v361);
    LOBYTE(v362) = 0x47;
    sub_75FAE0((NiD3DTextureStage **)&a3, v183);
    v184 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v184[7].Unk08 )
        sub_772560(v184);
    }
    v185 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v185, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v185);
    v186 = sub_772630(&v361);
    LOBYTE(v362) = 0x48;
    sub_75FAE0((NiD3DTextureStage **)&a3, v186);
    v187 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v187[7].Unk08 )
        sub_772560(v187);
    }
    v188 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v188);
    v189 = sub_772630(&v361);
    LOBYTE(v362) = 0x49;
    sub_75FAE0((NiD3DTextureStage **)&a3, v189);
    v190 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v190[7].Unk08 )
        sub_772560(v190);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v191 = v359;
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x2B]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v191[0x4F]);
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
  v4 = v1 == (NiD3DPass *)dword_B47684;
  dword_B43D74 = 0x39082;
  dword_B44404 = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47684;
    v360 = (NiD3DPassVtbl **)dword_B47684;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v192 = sub_772630(&v361);
    LOBYTE(v362) = 0x4A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v192);
    v193 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v193[7].Unk08 )
        sub_772560(v193);
    }
    v194 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v194);
    v195 = sub_772630(&v361);
    LOBYTE(v362) = 0x4B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v195);
    v196 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v196[7].Unk08 )
        sub_772560(v196);
    }
    v197 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v197);
    v198 = sub_772630(&v361);
    LOBYTE(v362) = 0x4C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v198);
    v199 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v199[7].Unk08 )
        sub_772560(v199);
    }
    v200 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v200);
    v201 = sub_772630(&v361);
    LOBYTE(v362) = 0x4D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v201);
    v202 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v202[7].Unk08 )
        sub_772560(v202);
    }
    v203 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v203);
    v204 = sub_772630(&v361);
    LOBYTE(v362) = 0x4E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v204);
    v205 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v205[7].Unk08 )
        sub_772560(v205);
    }
    v206 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v206);
    v207 = sub_772630(&v361);
    LOBYTE(v362) = 0x4F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v207);
    v208 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v208[7].Unk08 )
        sub_772560(v208);
    }
    v209 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v209, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v209);
    v210 = sub_772630(&v361);
    LOBYTE(v362) = 0x50;
    sub_75FAE0((NiD3DTextureStage **)&a3, v210);
    v211 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v211[7].Unk08 )
        sub_772560(v211);
    }
    v212 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v212);
    v213 = sub_772630(&v361);
    LOBYTE(v362) = 0x51;
    sub_75FAE0((NiD3DTextureStage **)&a3, v213);
    v214 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v214[7].Unk08 )
        sub_772560(v214);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x2B]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v359[0x50]);
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
  v4 = v1 == (NiD3DPass *)dword_B47688;
  dword_B43D78 = 0x39082;
  dword_B44408 = 0x19C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47688;
    v360 = (NiD3DPassVtbl **)dword_B47688;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v215 = sub_772630(&v361);
    LOBYTE(v362) = 0x52;
    sub_75FAE0((NiD3DTextureStage **)&a3, v215);
    v216 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v216[7].Unk08 )
        sub_772560(v216);
    }
    v217 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v217);
    v218 = sub_772630(&v361);
    LOBYTE(v362) = 0x53;
    sub_75FAE0((NiD3DTextureStage **)&a3, v218);
    v219 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v219[7].Unk08 )
        sub_772560(v219);
    }
    v220 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v220);
    v221 = sub_772630(&v361);
    LOBYTE(v362) = 0x54;
    sub_75FAE0((NiD3DTextureStage **)&a3, v221);
    v222 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v222[7].Unk08 )
        sub_772560(v222);
    }
    v223 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v223);
    v224 = sub_772630(&v361);
    LOBYTE(v362) = 0x55;
    sub_75FAE0((NiD3DTextureStage **)&a3, v224);
    v225 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v225[7].Unk08 )
        sub_772560(v225);
    }
    v226 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v226);
    v227 = sub_772630(&v361);
    LOBYTE(v362) = 0x56;
    sub_75FAE0((NiD3DTextureStage **)&a3, v227);
    v228 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v228[7].Unk08 )
        sub_772560(v228);
    }
    v229 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v229);
    v230 = sub_772630(&v361);
    LOBYTE(v362) = 0x57;
    sub_75FAE0((NiD3DTextureStage **)&a3, v230);
    v231 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v231[7].Unk08 )
        sub_772560(v231);
    }
    v232 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v232, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v232);
    v233 = sub_772630(&v361);
    LOBYTE(v362) = 0x58;
    sub_75FAE0((NiD3DTextureStage **)&a3, v233);
    v234 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v234[7].Unk08 )
        sub_772560(v234);
    }
    v235 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v235);
    v236 = sub_772630(&v361);
    LOBYTE(v362) = 0x59;
    sub_75FAE0((NiD3DTextureStage **)&a3, v236);
    v237 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v237[7].Unk08 )
        sub_772560(v237);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v238 = v359;
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x2C]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v238[0x4F]);
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
  v4 = v1 == (NiD3DPass *)dword_B4768C;
  dword_B43D8C = 0x79088;
  dword_B4441C = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B4768C;
    v360 = (NiD3DPassVtbl **)dword_B4768C;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v239 = sub_772630(&v361);
    LOBYTE(v362) = 0x5A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v239);
    v240 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v240[7].Unk08 )
        sub_772560(v240);
    }
    v241 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v241);
    v242 = sub_772630(&v361);
    LOBYTE(v362) = 0x5B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v242);
    v243 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v243[7].Unk08 )
        sub_772560(v243);
    }
    v244 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v244);
    v245 = sub_772630(&v361);
    LOBYTE(v362) = 0x5C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v245);
    v246 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v246[7].Unk08 )
        sub_772560(v246);
    }
    v247 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v247);
    v248 = sub_772630(&v361);
    LOBYTE(v362) = 0x5D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v248);
    v249 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v249[7].Unk08 )
        sub_772560(v249);
    }
    v250 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v250);
    v251 = sub_772630(&v361);
    LOBYTE(v362) = 0x5E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v251);
    v252 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v252[7].Unk08 )
        sub_772560(v252);
    }
    v253 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v253);
    v254 = sub_772630(&v361);
    LOBYTE(v362) = 0x5F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v254);
    v255 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v255[7].Unk08 )
        sub_772560(v255);
    }
    v256 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v256, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v256);
    v257 = sub_772630(&v361);
    LOBYTE(v362) = 0x60;
    sub_75FAE0((NiD3DTextureStage **)&a3, v257);
    v258 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v258[7].Unk08 )
        sub_772560(v258);
    }
    v259 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v259);
    v260 = sub_772630(&v361);
    LOBYTE(v362) = 0x61;
    sub_75FAE0((NiD3DTextureStage **)&a3, v260);
    v261 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v261[7].Unk08 )
        sub_772560(v261);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x2C]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v359[0x50]);
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
  v4 = v1 == (NiD3DPass *)dword_B47690;
  dword_B43D90 = 0x79088;
  dword_B44420 = 0x19C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47690;
    v360 = (NiD3DPassVtbl **)dword_B47690;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v262 = sub_772630(&v361);
    LOBYTE(v362) = 0x62;
    sub_75FAE0((NiD3DTextureStage **)&a3, v262);
    v263 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v263[7].Unk08 )
        sub_772560(v263);
    }
    v264 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v264);
    v265 = sub_772630(&v361);
    LOBYTE(v362) = 0x63;
    sub_75FAE0((NiD3DTextureStage **)&a3, v265);
    v266 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v266[7].Unk08 )
        sub_772560(v266);
    }
    v267 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v267);
    v268 = sub_772630(&v361);
    LOBYTE(v362) = 0x64;
    sub_75FAE0((NiD3DTextureStage **)&a3, v268);
    v269 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v269[7].Unk08 )
        sub_772560(v269);
    }
    v270 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v270);
    v271 = sub_772630(&v361);
    LOBYTE(v362) = 0x65;
    sub_75FAE0((NiD3DTextureStage **)&a3, v271);
    v272 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v272[7].Unk08 )
        sub_772560(v272);
    }
    v273 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v273);
    v274 = sub_772630(&v361);
    LOBYTE(v362) = 0x66;
    sub_75FAE0((NiD3DTextureStage **)&a3, v274);
    v275 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v275[7].Unk08 )
        sub_772560(v275);
    }
    v276 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v276);
    v277 = sub_772630(&v361);
    LOBYTE(v362) = 0x67;
    sub_75FAE0((NiD3DTextureStage **)&a3, v277);
    v278 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v278[7].Unk08 )
        sub_772560(v278);
    }
    v279 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v279, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v279);
    v280 = sub_772630(&v361);
    LOBYTE(v362) = 0x68;
    sub_75FAE0((NiD3DTextureStage **)&a3, v280);
    v281 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v281[7].Unk08 )
        sub_772560(v281);
    }
    v282 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v282);
    v283 = sub_772630(&v361);
    LOBYTE(v362) = 0x69;
    sub_75FAE0((NiD3DTextureStage **)&a3, v283);
    v284 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v284[7].Unk08 )
        sub_772560(v284);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  v285 = v359;
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x2D]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v285[0x51]);
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
  v4 = v1 == (NiD3DPass *)dword_B47694;
  dword_B43DA8 = 0x390F2;
  dword_B44438 = 0x11C;
  if ( !v4 )
  {
    v4 = v1->RefCount-- == 1;
    if ( v4 )
      sub_7604D0(v1);
    v1 = (NiD3DPass *)dword_B47694;
    v360 = (NiD3DPassVtbl **)dword_B47694;
    if ( v360 )
      ++v1->RefCount;
  }
  if ( v1->StageCount < 8 )
  {
    v286 = sub_772630(&v361);
    LOBYTE(v362) = 0x6A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v286);
    v287 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v287[7].Unk08 )
        sub_772560(v287);
    }
    v288 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v1, 0, v288);
    v289 = sub_772630(&v361);
    LOBYTE(v362) = 0x6B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v289);
    v290 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v290[7].Unk08 )
        sub_772560(v290);
    }
    v291 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v1, 1u, v291);
    v292 = sub_772630(&v361);
    LOBYTE(v362) = 0x6C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v292);
    v293 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v293[7].Unk08 )
        sub_772560(v293);
    }
    v294 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v1, 2u, v294);
    v295 = sub_772630(&v361);
    LOBYTE(v362) = 0x6D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v295);
    v296 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v296[7].Unk08 )
        sub_772560(v296);
    }
    v297 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v1, 3u, v297);
    v298 = sub_772630(&v361);
    LOBYTE(v362) = 0x6E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v298);
    v299 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v299[7].Unk08 )
        sub_772560(v299);
    }
    v300 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v1, 4u, v300);
    v301 = sub_772630(&v361);
    LOBYTE(v362) = 0x6F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v301);
    v302 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v302[7].Unk08 )
        sub_772560(v302);
    }
    v303 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v303, (NiRenderedTexture *)dword_B43110);
    sub_760010(v1, 5u, v303);
    v304 = sub_772630(&v361);
    LOBYTE(v362) = 0x70;
    sub_75FAE0((NiD3DTextureStage **)&a3, v304);
    v305 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v305[7].Unk08 )
        sub_772560(v305);
    }
    v306 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v1, 6u, v306);
    v307 = sub_772630(&v361);
    LOBYTE(v362) = 0x71;
    sub_75FAE0((NiD3DTextureStage **)&a3, v307);
    v308 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v308[7].Unk08 )
        sub_772560(v308);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v1, 7u, &v2->Stage);
  }
  sub_7AECB0(v1, (NiD3DVertexShader *)v359[0x2D]);
  sub_7AEC60(&v1->__vftable, (NiD3DPixelShader *)v359[0x52]);
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
  dword_B43DAC = 0x390F2;
  dword_B4443C = 0x19C;
  sub_76C890((NiD3DPass **)&v360, &dword_B47698);
  v309 = (NiD3DPass *)v360;
  if ( (unsigned int)v360[6] < 8 )
  {
    v310 = sub_772630(&v361);
    LOBYTE(v362) = 0x72;
    sub_75FAE0((NiD3DTextureStage **)&a3, v310);
    v311 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v311[7].Unk08 )
        sub_772560(v311);
    }
    v312 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v309, 0, v312);
    v313 = sub_772630(&v361);
    LOBYTE(v362) = 0x73;
    sub_75FAE0((NiD3DTextureStage **)&a3, v313);
    v314 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v314[7].Unk08 )
        sub_772560(v314);
    }
    v315 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v309, 1u, v315);
    v316 = sub_772630(&v361);
    LOBYTE(v362) = 0x74;
    sub_75FAE0((NiD3DTextureStage **)&a3, v316);
    v317 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v317[7].Unk08 )
        sub_772560(v317);
    }
    v318 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v309, 2u, v318);
    v319 = sub_772630(&v361);
    LOBYTE(v362) = 0x75;
    sub_75FAE0((NiD3DTextureStage **)&a3, v319);
    v320 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v320[7].Unk08 )
        sub_772560(v320);
    }
    v321 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v309, 3u, v321);
    v322 = sub_772630(&v361);
    LOBYTE(v362) = 0x76;
    sub_75FAE0((NiD3DTextureStage **)&a3, v322);
    v323 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v323[7].Unk08 )
        sub_772560(v323);
    }
    v324 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v309, 4u, v324);
    v325 = sub_772630(&v361);
    LOBYTE(v362) = 0x77;
    sub_75FAE0((NiD3DTextureStage **)&a3, v325);
    v326 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v326[7].Unk08 )
        sub_772560(v326);
    }
    v327 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v327, (NiRenderedTexture *)dword_B43110);
    sub_760010(v309, 5u, v327);
    v328 = sub_772630(&v361);
    LOBYTE(v362) = 0x78;
    sub_75FAE0((NiD3DTextureStage **)&a3, v328);
    v329 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v329[7].Unk08 )
        sub_772560(v329);
    }
    v330 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v309, 6u, v330);
    v331 = sub_772630(&v361);
    LOBYTE(v362) = 0x79;
    sub_75FAE0((NiD3DTextureStage **)&a3, v331);
    v332 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v332[7].Unk08 )
        sub_772560(v332);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v309, 7u, &v2->Stage);
  }
  v333 = v359;
  sub_7AECB0(v309, (NiD3DVertexShader *)v359[0x2E]);
  sub_7AEC60(&v309->__vftable, (NiD3DPixelShader *)v333[0x51]);
  if ( !v309->RenderStateGroup )
    v309->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v309->RenderStateGroup, 0x1B, 0, 0);
  if ( !v309->RenderStateGroup )
    v309->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v309->RenderStateGroup, 0xF, 0, 0);
  if ( !v309->RenderStateGroup )
    v309->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v309->RenderStateGroup, 7, 1, 0);
  if ( !v309->RenderStateGroup )
    v309->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v309->RenderStateGroup, 0x17, 4, 0);
  if ( !v309->RenderStateGroup )
    v309->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v309->RenderStateGroup, 0xE, 1, 0);
  if ( !v309->RenderStateGroup )
    v309->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v309->RenderStateGroup, 0x34, 0, 0);
  dword_B43DC0 = 0x790F8;
  dword_B44450 = 0x11C;
  sub_76C890((NiD3DPass **)&v360, &dword_B4769C);
  v334 = (NiD3DPass *)v360;
  if ( (unsigned int)v360[6] < 8 )
  {
    v335 = sub_772630(&v361);
    LOBYTE(v362) = 0x7A;
    sub_75FAE0((NiD3DTextureStage **)&a3, v335);
    v336 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v336[7].Unk08 )
        sub_772560(v336);
    }
    v337 = a3;
    sub_801110((int)a3, 0, 1, 2);
    sub_760010(v334, 0, v337);
    v338 = sub_772630(&v361);
    LOBYTE(v362) = 0x7B;
    sub_75FAE0((NiD3DTextureStage **)&a3, v338);
    v339 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v339[7].Unk08 )
        sub_772560(v339);
    }
    v340 = a3;
    sub_801110((int)a3, 1, 1, 2);
    sub_760010(v334, 1u, v340);
    v341 = sub_772630(&v361);
    LOBYTE(v362) = 0x7C;
    sub_75FAE0((NiD3DTextureStage **)&a3, v341);
    v342 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v342[7].Unk08 )
        sub_772560(v342);
    }
    v343 = a3;
    sub_801110((int)a3, 2, 1, 2);
    sub_760010(v334, 2u, v343);
    v344 = sub_772630(&v361);
    LOBYTE(v362) = 0x7D;
    sub_75FAE0((NiD3DTextureStage **)&a3, v344);
    v345 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v345[7].Unk08 )
        sub_772560(v345);
    }
    v346 = a3;
    sub_801110((int)a3, 3, 1, 2);
    sub_760010(v334, 3u, v346);
    v347 = sub_772630(&v361);
    LOBYTE(v362) = 0x7E;
    sub_75FAE0((NiD3DTextureStage **)&a3, v347);
    v348 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v348[7].Unk08 )
        sub_772560(v348);
    }
    v349 = a3;
    sub_801110((int)a3, 4, 1, 2);
    sub_760010(v334, 4u, v349);
    v350 = sub_772630(&v361);
    LOBYTE(v362) = 0x7F;
    sub_75FAE0((NiD3DTextureStage **)&a3, v350);
    v351 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v351[7].Unk08 )
        sub_772560(v351);
    }
    v352 = a3;
    sub_801110((int)a3, 5, 3, 0);
    sub_76C910(v352, (NiRenderedTexture *)dword_B43110);
    sub_760010(v334, 5u, v352);
    v353 = sub_772630(&v361);
    LOBYTE(v362) = 0x80;
    sub_75FAE0((NiD3DTextureStage **)&a3, v353);
    v354 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v354[7].Unk08 )
        sub_772560(v354);
    }
    v355 = a3;
    sub_801110((int)a3, 6, 1, 2);
    sub_760010(v334, 6u, v355);
    v356 = sub_772630(&v361);
    LOBYTE(v362) = 0x81;
    sub_75FAE0((NiD3DTextureStage **)&a3, v356);
    v357 = v361;
    LOBYTE(v362) = 1;
    if ( v361 )
    {
      --v361[7].Unk08;
      if ( !v357[7].Unk08 )
        sub_772560(v357);
    }
    v2 = (NiD3DTextureStage *)a3;
    sub_801110((int)a3, 7, 3, 0);
    sub_760010(v334, 7u, &v2->Stage);
  }
  sub_7AECB0(v334, (NiD3DVertexShader *)v359[0x2E]);
  sub_7AEC60(&v334->__vftable, (NiD3DPixelShader *)v359[0x52]);
  if ( !v334->RenderStateGroup )
    v334->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v334->RenderStateGroup, 0x1B, 0, 0);
  if ( !v334->RenderStateGroup )
    v334->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v334->RenderStateGroup, 0xF, 0, 0);
  if ( !v334->RenderStateGroup )
    v334->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v334->RenderStateGroup, 7, 1, 0);
  if ( !v334->RenderStateGroup )
    v334->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v334->RenderStateGroup, 0x17, 4, 0);
  if ( !v334->RenderStateGroup )
    v334->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v334->RenderStateGroup, 0xE, 1, 0);
  if ( !v334->RenderStateGroup )
    v334->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v334->RenderStateGroup, 0x34, 0, 0);
  dword_B43DC4 = 0x790F8;
  dword_B44454 = 0x19C;
  LOBYTE(v362) = 0;
  if ( v2 )
  {
    v4 = v2[7].Unk08-- == 1;
    if ( v4 )
      sub_772560(v2);
  }
  v4 = v334->RefCount-- == 1;
  v362 = 0xFFFFFFFF;
  if ( v4 )
    sub_7604D0(v334);
}
