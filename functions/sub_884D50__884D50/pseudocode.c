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
  NiD3DTextureStage **v109; // eax
  NiD3DTextureStage *v110; // eax
  unsigned int *v111; // edi
  NiD3DTextureStage **v112; // eax
  NiD3DTextureStage *v113; // eax
  unsigned int *v114; // edi
  NiD3DTextureStage **v115; // eax
  NiD3DTextureStage *v116; // eax
  unsigned int *v117; // edi
  NiD3DTextureStage **v118; // eax
  NiD3DTextureStage *v119; // eax
  unsigned int *v120; // edi
  NiD3DTextureStage **v121; // eax
  NiD3DTextureStage *v122; // eax
  unsigned int *v123; // edi
  NiD3DTextureStage **v124; // eax
  NiD3DTextureStage *v125; // eax
  NiD3DTextureStage *v126; // edi
  NiD3DTextureStage **v127; // eax
  NiD3DTextureStage *v128; // eax
  unsigned int *v129; // edi
  NiD3DTextureStage **v130; // eax
  NiD3DTextureStage *v131; // eax
  NiD3DPixelShader *v132; // eax
  int v133; // eax
  int v134; // ecx
  int v135; // edx
  NiD3DTextureStage **v136; // eax
  NiD3DTextureStage *v137; // eax
  unsigned int *v138; // edi
  NiD3DTextureStage **v139; // eax
  NiD3DTextureStage *v140; // eax
  unsigned int *v141; // edi
  NiD3DTextureStage **v142; // eax
  NiD3DTextureStage *v143; // eax
  unsigned int *v144; // edi
  NiD3DTextureStage **v145; // eax
  NiD3DTextureStage *v146; // eax
  unsigned int *v147; // edi
  NiD3DTextureStage **v148; // eax
  NiD3DTextureStage *v149; // eax
  unsigned int *v150; // edi
  NiD3DTextureStage **v151; // eax
  NiD3DTextureStage *v152; // eax
  NiD3DTextureStage *v153; // edi
  NiD3DTextureStage **v154; // eax
  NiD3DTextureStage *v155; // eax
  unsigned int *v156; // edi
  NiD3DTextureStage **v157; // eax
  NiD3DTextureStage *v158; // eax
  NiD3DPixelShader *v159; // eax
  int v160; // edx
  int v161; // eax
  int v162; // ecx
  NiD3DTextureStage **v163; // eax
  NiD3DTextureStage *v164; // eax
  unsigned int *v165; // edi
  NiD3DTextureStage **v166; // eax
  NiD3DTextureStage *v167; // eax
  unsigned int *v168; // edi
  NiD3DTextureStage **v169; // eax
  NiD3DTextureStage *v170; // eax
  unsigned int *v171; // edi
  NiD3DTextureStage **v172; // eax
  NiD3DTextureStage *v173; // eax
  unsigned int *v174; // edi
  NiD3DTextureStage **v175; // eax
  NiD3DTextureStage *v176; // eax
  unsigned int *v177; // edi
  NiD3DTextureStage **v178; // eax
  NiD3DTextureStage *v179; // eax
  NiD3DTextureStage *v180; // edi
  NiD3DTextureStage **v181; // eax
  NiD3DTextureStage *v182; // eax
  unsigned int *v183; // edi
  NiD3DTextureStage **v184; // eax
  NiD3DTextureStage *v185; // eax
  NiD3DPixelShader *v186; // eax
  int v187; // ecx
  int v188; // edx
  int v189; // eax
  NiD3DTextureStage **v190; // eax
  NiD3DTextureStage *v191; // eax
  unsigned int *v192; // edi
  NiD3DTextureStage **v193; // eax
  NiD3DTextureStage *v194; // eax
  unsigned int *v195; // edi
  NiD3DTextureStage **v196; // eax
  NiD3DTextureStage *v197; // eax
  unsigned int *v198; // edi
  NiD3DTextureStage **v199; // eax
  NiD3DTextureStage *v200; // eax
  unsigned int *v201; // edi
  NiD3DTextureStage **v202; // eax
  NiD3DTextureStage *v203; // eax
  unsigned int *v204; // edi
  NiD3DTextureStage **v205; // eax
  NiD3DTextureStage *v206; // eax
  NiD3DTextureStage *v207; // edi
  NiD3DTextureStage **v208; // eax
  NiD3DTextureStage *v209; // eax
  unsigned int *v210; // edi
  NiD3DTextureStage **v211; // eax
  NiD3DTextureStage *v212; // eax
  NiD3DPixelShader *v213; // eax
  int v214; // eax
  int v215; // ecx
  int v216; // edx
  NiD3DTextureStage **v217; // eax
  NiD3DTextureStage *v218; // eax
  unsigned int *v219; // edi
  NiD3DTextureStage **v220; // eax
  NiD3DTextureStage *v221; // eax
  unsigned int *v222; // edi
  NiD3DTextureStage **v223; // eax
  NiD3DTextureStage *v224; // eax
  unsigned int *v225; // edi
  NiD3DTextureStage **v226; // eax
  NiD3DTextureStage *v227; // eax
  unsigned int *v228; // edi
  NiD3DTextureStage **v229; // eax
  NiD3DTextureStage *v230; // eax
  unsigned int *v231; // edi
  NiD3DTextureStage **v232; // eax
  NiD3DTextureStage *v233; // eax
  NiD3DTextureStage *v234; // edi
  NiD3DTextureStage **v235; // eax
  NiD3DTextureStage *v236; // eax
  unsigned int *v237; // edi
  NiD3DTextureStage **v238; // eax
  NiD3DTextureStage *v239; // eax
  NiD3DPixelShader *v240; // eax
  int v241; // edx
  int v242; // eax
  int v243; // ecx
  NiD3DTextureStage **v244; // eax
  NiD3DTextureStage *v245; // eax
  unsigned int *v246; // edi
  NiD3DTextureStage **v247; // eax
  NiD3DTextureStage *v248; // eax
  unsigned int *v249; // edi
  NiD3DTextureStage **v250; // eax
  NiD3DTextureStage *v251; // eax
  unsigned int *v252; // edi
  NiD3DTextureStage **v253; // eax
  NiD3DTextureStage *v254; // eax
  unsigned int *v255; // edi
  NiD3DTextureStage **v256; // eax
  NiD3DTextureStage *v257; // eax
  unsigned int *v258; // edi
  NiD3DTextureStage **v259; // eax
  NiD3DTextureStage *v260; // eax
  NiD3DTextureStage *v261; // edi
  NiD3DTextureStage **v262; // eax
  NiD3DTextureStage *v263; // eax
  unsigned int *v264; // edi
  NiD3DTextureStage **v265; // eax
  NiD3DTextureStage *v266; // eax
  NiD3DPixelShader *v267; // eax
  int v268; // ecx
  int v269; // edx
  int v270; // eax
  NiD3DTextureStage **v271; // eax
  NiD3DTextureStage *v272; // eax
  unsigned int *v273; // edi
  NiD3DTextureStage **v274; // eax
  NiD3DTextureStage *v275; // eax
  unsigned int *v276; // edi
  NiD3DTextureStage **v277; // eax
  NiD3DTextureStage *v278; // eax
  unsigned int *v279; // edi
  NiD3DTextureStage **v280; // eax
  NiD3DTextureStage *v281; // eax
  unsigned int *v282; // edi
  NiD3DTextureStage **v283; // eax
  NiD3DTextureStage *v284; // eax
  unsigned int *v285; // edi
  NiD3DTextureStage **v286; // eax
  NiD3DTextureStage *v287; // eax
  NiD3DTextureStage *v288; // edi
  NiD3DTextureStage **v289; // eax
  NiD3DTextureStage *v290; // eax
  unsigned int *v291; // edi
  NiD3DTextureStage **v292; // eax
  NiD3DTextureStage *v293; // eax
  NiD3DPixelShader *v294; // eax
  int v295; // eax
  int v296; // ecx
  int v297; // edx
  NiD3DTextureStage **v298; // eax
  NiD3DTextureStage *v299; // eax
  unsigned int *v300; // edi
  NiD3DTextureStage **v301; // eax
  NiD3DTextureStage *v302; // eax
  unsigned int *v303; // edi
  NiD3DTextureStage **v304; // eax
  NiD3DTextureStage *v305; // eax
  unsigned int *v306; // edi
  NiD3DTextureStage **v307; // eax
  NiD3DTextureStage *v308; // eax
  NiD3DPixelShader *v309; // eax
  int v310; // ecx
  int v311; // edx
  int v312; // eax
  NiD3DTextureStage **v313; // eax
  NiD3DTextureStage *v314; // eax
  unsigned int *v315; // edi
  NiD3DTextureStage **v316; // eax
  NiD3DTextureStage *v317; // eax
  unsigned int *v318; // edi
  NiD3DTextureStage **v319; // eax
  NiD3DTextureStage *v320; // eax
  unsigned int *v321; // edi
  NiD3DTextureStage **v322; // eax
  NiD3DTextureStage *v323; // eax
  NiD3DPixelShader *v324; // eax
  int v325; // edx
  int v326; // eax
  NiD3DPass *v327; // esi
  NiD3DTextureStage **v328; // eax
  NiD3DTextureStage *v329; // eax
  unsigned int *v330; // edi
  NiD3DTextureStage **v331; // eax
  NiD3DTextureStage *v332; // eax
  unsigned int *v333; // edi
  NiD3DTextureStage **v334; // eax
  NiD3DTextureStage *v335; // eax
  unsigned int *v336; // edi
  NiD3DTextureStage **v337; // eax
  NiD3DTextureStage *v338; // eax
  unsigned int *v339; // edi
  NiD3DTextureStage **v340; // eax
  NiD3DTextureStage *v341; // eax
  unsigned int *v342; // edi
  NiD3DTextureStage **v343; // eax
  NiD3DTextureStage *v344; // eax
  NiD3DPixelShader *v345; // eax
  int v346; // ecx
  int v347; // eax
  int v348; // edx
  NiD3DPass *v349; // esi
  NiD3DTextureStage **v350; // eax
  NiD3DTextureStage *v351; // eax
  unsigned int *v352; // edi
  NiD3DTextureStage **v353; // eax
  NiD3DTextureStage *v354; // eax
  unsigned int *v355; // edi
  NiD3DTextureStage **v356; // eax
  NiD3DTextureStage *v357; // eax
  unsigned int *v358; // edi
  NiD3DTextureStage **v359; // eax
  NiD3DTextureStage *v360; // eax
  unsigned int *v361; // edi
  NiD3DTextureStage **v362; // eax
  NiD3DTextureStage *v363; // eax
  unsigned int *v364; // edi
  NiD3DTextureStage **v365; // eax
  NiD3DTextureStage *v366; // eax
  NiD3DPixelShader *v367; // eax
  int v368; // ecx
  int v369; // edx
  int v370; // eax
  NiD3DPass *v371; // esi
  NiD3DTextureStage **v372; // eax
  NiD3DTextureStage *v373; // eax
  unsigned int *v374; // edi
  NiD3DTextureStage **v375; // eax
  NiD3DTextureStage *v376; // eax
  unsigned int *v377; // edi
  NiD3DTextureStage **v378; // eax
  NiD3DTextureStage *v379; // eax
  unsigned int *v380; // edi
  NiD3DTextureStage **v381; // eax
  NiD3DTextureStage *v382; // eax
  unsigned int *v383; // edi
  NiD3DTextureStage **v384; // eax
  NiD3DTextureStage *v385; // eax
  unsigned int *v386; // edi
  NiD3DTextureStage **v387; // eax
  NiD3DTextureStage *v388; // eax
  NiD3DPixelShader *v389; // eax
  int v390; // edx
  int v391; // eax
  NiD3DPass *v392; // esi
  NiD3DTextureStage **v393; // eax
  NiD3DTextureStage *v394; // eax
  unsigned int *v395; // edi
  NiD3DTextureStage **v396; // eax
  NiD3DTextureStage *v397; // eax
  unsigned int *v398; // edi
  NiD3DTextureStage **v399; // eax
  NiD3DTextureStage *v400; // eax
  unsigned int *v401; // edi
  NiD3DTextureStage **v402; // eax
  NiD3DTextureStage *v403; // eax
  unsigned int *v404; // edi
  NiD3DTextureStage **v405; // eax
  NiD3DTextureStage *v406; // eax
  unsigned int *v407; // edi
  NiD3DTextureStage **v408; // eax
  NiD3DTextureStage *v409; // eax
  NiD3DTextureStage *v410; // edi
  NiD3DTextureStage **v411; // eax
  NiD3DTextureStage *v412; // eax
  unsigned int *v413; // edi
  NiD3DTextureStage **v414; // eax
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

  v422 = this; /*0x884d77*/
  v1 = 0; /*0x884d7d*/
  v423 = 0; /*0x884d7f*/
  v421 = 0; /*0x884d83*/
  v2 = 0; /*0x884d87*/
  v424 = 0; /*0x884d89*/
  a3 = 0; /*0x884d8d*/
  v3 = unk_B477B8; /*0x884d91*/
  v4 = unk_B477B8 == 0; /*0x884d96*/
  LOBYTE(v424) = 1; /*0x884d9d*/
  if ( !v4 ) /*0x884da1*/
  {
    v1 = (NiD3DPass *)v3; /*0x884da3*/
    v421 = (NiD3DPassVtbl **)v3; /*0x884da7*/
    if ( v3 ) /*0x884dab*/
      ++*(_DWORD *)(v3 + 0x60); /*0x884dad*/
  }
  if ( v1->StageCount < 7 ) /*0x884db6*/
  {
    v5 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v423); /*0x884dc9*/
    if ( v5 ) /*0x884dcd*/
    {
      v2 = (NiD3DTextureStage *)v5; /*0x884dcf*/
      ++v5[0x17]; /*0x884dd1*/
      a3 = v5; /*0x884dd4*/
    }
    v6 = v423; /*0x884dd8*/
    LOBYTE(v424) = 1; /*0x884dde*/
    if ( v423 ) /*0x884de3*/
    {
      --v423[7].Unk08; /*0x884de5*/
      if ( !v6[7].Unk08 ) /*0x884dee*/
        sub_772560(v6); /*0x884df2*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x884dfd*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x884e09*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x884e1b*/
    v4 = v2 == (NiD3DTextureStage *)*v7; /*0x884e1d*/
    LOBYTE(v424) = 3; /*0x884e1f*/
    if ( !v4 ) /*0x884e24*/
    {
      if ( v2 ) /*0x884e28*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884e2a*/
        if ( v4 ) /*0x884e2e*/
          sub_772560(v2); /*0x884e32*/
      }
      v2 = (NiD3DTextureStage *)*v7; /*0x884e37*/
      a3 = *v7; /*0x884e3b*/
      if ( a3 ) /*0x884e3f*/
        ++v2[7].Unk08; /*0x884e41*/
    }
    v8 = v423; /*0x884e45*/
    LOBYTE(v424) = 1; /*0x884e4b*/
    if ( v423 ) /*0x884e50*/
    {
      --v423[7].Unk08; /*0x884e52*/
      if ( !v8[7].Unk08 ) /*0x884e5b*/
        sub_772560(v8); /*0x884e5f*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x884e6b*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x884e78*/
    v9 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x884e8a*/
    v4 = v2 == (NiD3DTextureStage *)*v9; /*0x884e8c*/
    LOBYTE(v424) = 4; /*0x884e8e*/
    if ( !v4 ) /*0x884e93*/
    {
      if ( v2 ) /*0x884e97*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884e99*/
        if ( v4 ) /*0x884e9d*/
          sub_772560(v2); /*0x884ea1*/
      }
      v2 = (NiD3DTextureStage *)*v9; /*0x884ea6*/
      a3 = *v9; /*0x884eaa*/
      if ( a3 ) /*0x884eae*/
        ++v2[7].Unk08; /*0x884eb0*/
    }
    v10 = v423; /*0x884eb4*/
    LOBYTE(v424) = 1; /*0x884eba*/
    if ( v423 ) /*0x884ebf*/
    {
      --v423[7].Unk08; /*0x884ec1*/
      if ( !v10[7].Unk08 ) /*0x884eca*/
        sub_772560(v10); /*0x884ece*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x884eda*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x884ee7*/
    v11 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x884ef9*/
    v4 = v2 == (NiD3DTextureStage *)*v11; /*0x884efb*/
    LOBYTE(v424) = 5; /*0x884efd*/
    if ( !v4 ) /*0x884f02*/
    {
      if ( v2 ) /*0x884f06*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884f08*/
        if ( v4 ) /*0x884f0c*/
          sub_772560(v2); /*0x884f10*/
      }
      v2 = (NiD3DTextureStage *)*v11; /*0x884f15*/
      a3 = *v11; /*0x884f19*/
      if ( a3 ) /*0x884f1d*/
        ++v2[7].Unk08; /*0x884f1f*/
    }
    v12 = v423; /*0x884f23*/
    LOBYTE(v424) = 1; /*0x884f29*/
    if ( v423 ) /*0x884f2e*/
    {
      --v423[7].Unk08; /*0x884f30*/
      if ( !v12[7].Unk08 ) /*0x884f39*/
        sub_772560(v12); /*0x884f3d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x884f49*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x884f56*/
    v13 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x884f68*/
    v4 = v2 == (NiD3DTextureStage *)*v13; /*0x884f6a*/
    LOBYTE(v424) = 6; /*0x884f6c*/
    if ( !v4 ) /*0x884f71*/
    {
      if ( v2 ) /*0x884f75*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884f77*/
        if ( v4 ) /*0x884f7b*/
          sub_772560(v2); /*0x884f7f*/
      }
      v2 = (NiD3DTextureStage *)*v13; /*0x884f84*/
      a3 = *v13; /*0x884f88*/
      if ( a3 ) /*0x884f8c*/
        ++v2[7].Unk08; /*0x884f8e*/
    }
    v14 = v423; /*0x884f92*/
    LOBYTE(v424) = 1; /*0x884f98*/
    if ( v423 ) /*0x884f9d*/
    {
      --v423[7].Unk08; /*0x884f9f*/
      if ( !v14[7].Unk08 ) /*0x884fa8*/
        sub_772560(v14); /*0x884fac*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 2); /*0x884fb8*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x884fc9*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x884fd3*/
    v15 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x884fe5*/
    v4 = v2 == (NiD3DTextureStage *)*v15; /*0x884fe7*/
    LOBYTE(v424) = 7; /*0x884fe9*/
    if ( !v4 ) /*0x884fee*/
    {
      if ( v2 ) /*0x884ff2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x884ff4*/
        if ( v4 ) /*0x884ff8*/
          sub_772560(v2); /*0x884ffc*/
      }
      v2 = (NiD3DTextureStage *)*v15; /*0x885001*/
      a3 = *v15; /*0x885005*/
      if ( a3 ) /*0x885009*/
        ++v2[7].Unk08; /*0x88500b*/
    }
    v16 = v423; /*0x88500f*/
    LOBYTE(v424) = 1; /*0x885015*/
    if ( v423 ) /*0x88501a*/
    {
      --v423[7].Unk08; /*0x88501c*/
      if ( !v16[7].Unk08 ) /*0x885025*/
        sub_772560(v16); /*0x885029*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x885035*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x885042*/
    v17 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885054*/
    v4 = v2 == (NiD3DTextureStage *)*v17; /*0x885056*/
    LOBYTE(v424) = 8; /*0x885058*/
    if ( !v4 ) /*0x88505d*/
    {
      if ( v2 ) /*0x885061*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885063*/
        if ( v4 ) /*0x885067*/
          sub_772560(v2); /*0x88506b*/
      }
      v2 = (NiD3DTextureStage *)*v17; /*0x885070*/
      a3 = *v17; /*0x885074*/
      if ( a3 ) /*0x885078*/
        ++v2[7].Unk08; /*0x88507a*/
    }
    v18 = v423; /*0x88507e*/
    LOBYTE(v424) = 1; /*0x885084*/
    if ( v423 ) /*0x885089*/
    {
      --v423[7].Unk08; /*0x88508b*/
      if ( !v18[7].Unk08 ) /*0x885094*/
        sub_772560(v18); /*0x885098*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 2); /*0x8850a4*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x8850b1*/
  }
  v19 = (volatile LONG *)v422[0x31]; /*0x8850ba*/
  VertexShader = v1->VertexShader; /*0x8850c0*/
  if ( VertexShader != (NiD3DVertexShader *)v19 ) /*0x8850c5*/
  {
    if ( VertexShader ) /*0x8850c9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)VertexShader + 1) ) /*0x8850cf*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))VertexShader)(VertexShader, 1); /*0x8850e6*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v19; /*0x8850ea*/
    if ( v19 ) /*0x8850ed*/
      InterlockedIncrement(v19 + 1); /*0x8850f3*/
  }
  PixelShader = v1->PixelShader; /*0x8850fe*/
  v22 = unk_B451B0; /*0x885103*/
  if ( PixelShader != (NiD3DPixelShader *)unk_B451B0 ) /*0x885105*/
  {
    if ( PixelShader ) /*0x885109*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x88510f*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x885126*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v22; /*0x88512a*/
    if ( v22 ) /*0x88512d*/
      InterlockedIncrement((volatile LONG *)(v22 + 4)); /*0x885133*/
  }
  if ( !v1->RenderStateGroup ) /*0x885139*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885144*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x885150*/
  if ( !v1->RenderStateGroup ) /*0x885155*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885160*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x88516c*/
  if ( !v1->RenderStateGroup ) /*0x885171*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88517c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x885188*/
  if ( !v1->RenderStateGroup ) /*0x88518d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885198*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x8851a4*/
  if ( !v1->RenderStateGroup ) /*0x8851a9*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8851b4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x8851c0*/
  if ( !v1->RenderStateGroup ) /*0x8851c5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8851d0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x8851dc*/
  v23 = unk_B442D8; /*0x8851e7*/
  v24 = unk_B435B8; /*0x8851ed*/
  unk_B43C70 = unk_B43C48; /*0x8851f2*/
  v25 = unk_B44968; /*0x8851f8*/
  v4 = v1 == (NiD3DPass *)unk_B477BC; /*0x885201*/
  unk_B44300 = v23; /*0x885207*/
  unk_B435E0 = v24; /*0x88520d*/
  unk_B44990 = v25; /*0x885212*/
  if ( !v4 ) /*0x885218*/
  {
    v4 = v1->RefCount-- == 1; /*0x88521a*/
    if ( v4 ) /*0x88521d*/
      NiD3DPass_ReleaseToPool(v1); /*0x885221*/
    v1 = (NiD3DPass *)unk_B477BC; /*0x885226*/
    v421 = (NiD3DPassVtbl **)unk_B477BC; /*0x88522e*/
    if ( v421 ) /*0x885232*/
      ++v1->RefCount; /*0x885234*/
  }
  if ( v1->StageCount < 7 ) /*0x88523e*/
  {
    v26 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885251*/
    v4 = v2 == (NiD3DTextureStage *)*v26; /*0x885253*/
    LOBYTE(v424) = 9; /*0x885256*/
    if ( !v4 ) /*0x88525b*/
    {
      if ( v2 ) /*0x88525f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885261*/
        if ( v4 ) /*0x885264*/
          sub_772560(v2); /*0x885268*/
      }
      v2 = (NiD3DTextureStage *)*v26; /*0x88526d*/
      a3 = *v26; /*0x885272*/
      if ( a3 ) /*0x885276*/
        ++v2[7].Unk08; /*0x885278*/
    }
    v27 = v423; /*0x88527c*/
    LOBYTE(v424) = 1; /*0x885282*/
    if ( v423 ) /*0x885287*/
    {
      --v423[7].Unk08; /*0x885289*/
      if ( !v27[7].Unk08 ) /*0x885291*/
        sub_772560(v27); /*0x885296*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8852a2*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x8852af*/
    v28 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8852c1*/
    v4 = v2 == (NiD3DTextureStage *)*v28; /*0x8852c3*/
    LOBYTE(v424) = 0xA; /*0x8852c6*/
    if ( !v4 ) /*0x8852cb*/
    {
      if ( v2 ) /*0x8852cf*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8852d1*/
        if ( v4 ) /*0x8852d4*/
          sub_772560(v2); /*0x8852d8*/
      }
      v2 = (NiD3DTextureStage *)*v28; /*0x8852dd*/
      a3 = *v28; /*0x8852e2*/
      if ( a3 ) /*0x8852e6*/
        ++v2[7].Unk08; /*0x8852e8*/
    }
    v29 = v423; /*0x8852ec*/
    LOBYTE(v424) = 1; /*0x8852f2*/
    if ( v423 ) /*0x8852f7*/
    {
      --v423[7].Unk08; /*0x8852f9*/
      if ( !v29[7].Unk08 ) /*0x885301*/
        sub_772560(v29); /*0x885306*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x885312*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x88531f*/
    v30 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885331*/
    v4 = v2 == (NiD3DTextureStage *)*v30; /*0x885333*/
    LOBYTE(v424) = 0xB; /*0x885336*/
    if ( !v4 ) /*0x88533b*/
    {
      if ( v2 ) /*0x88533f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885341*/
        if ( v4 ) /*0x885344*/
          sub_772560(v2); /*0x885348*/
      }
      v2 = (NiD3DTextureStage *)*v30; /*0x88534d*/
      a3 = *v30; /*0x885352*/
      if ( a3 ) /*0x885356*/
        ++v2[7].Unk08; /*0x885358*/
    }
    v31 = v423; /*0x88535c*/
    LOBYTE(v424) = 1; /*0x885362*/
    if ( v423 ) /*0x885367*/
    {
      --v423[7].Unk08; /*0x885369*/
      if ( !v31[7].Unk08 ) /*0x885371*/
        sub_772560(v31); /*0x885376*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x885382*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x88538f*/
    v32 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8853a1*/
    v4 = v2 == (NiD3DTextureStage *)*v32; /*0x8853a3*/
    LOBYTE(v424) = 0xC; /*0x8853a6*/
    if ( !v4 ) /*0x8853ab*/
    {
      if ( v2 ) /*0x8853af*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8853b1*/
        if ( v4 ) /*0x8853b4*/
          sub_772560(v2); /*0x8853b8*/
      }
      v2 = (NiD3DTextureStage *)*v32; /*0x8853bd*/
      a3 = *v32; /*0x8853c2*/
      if ( a3 ) /*0x8853c6*/
        ++v2[7].Unk08; /*0x8853c8*/
    }
    v33 = v423; /*0x8853cc*/
    LOBYTE(v424) = 1; /*0x8853d2*/
    if ( v423 ) /*0x8853d7*/
    {
      --v423[7].Unk08; /*0x8853d9*/
      if ( !v33[7].Unk08 ) /*0x8853e1*/
        sub_772560(v33); /*0x8853e6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x8853f2*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x8853ff*/
    v34 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885411*/
    v4 = v2 == (NiD3DTextureStage *)*v34; /*0x885413*/
    LOBYTE(v424) = 0xD; /*0x885416*/
    if ( !v4 ) /*0x88541b*/
    {
      if ( v2 ) /*0x88541f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885421*/
        if ( v4 ) /*0x885424*/
          sub_772560(v2); /*0x885428*/
      }
      v2 = (NiD3DTextureStage *)*v34; /*0x88542d*/
      a3 = *v34; /*0x885432*/
      if ( a3 ) /*0x885436*/
        ++v2[7].Unk08; /*0x885438*/
    }
    v35 = v423; /*0x88543c*/
    LOBYTE(v424) = 1; /*0x885442*/
    if ( v423 ) /*0x885447*/
    {
      --v423[7].Unk08; /*0x885449*/
      if ( !v35[7].Unk08 ) /*0x885451*/
        sub_772560(v35); /*0x885456*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 2); /*0x885462*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x885473*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x88547d*/
    v36 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x88548f*/
    v4 = v2 == (NiD3DTextureStage *)*v36; /*0x885491*/
    LOBYTE(v424) = 0xE; /*0x885494*/
    if ( !v4 ) /*0x885499*/
    {
      if ( v2 ) /*0x88549d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88549f*/
        if ( v4 ) /*0x8854a2*/
          sub_772560(v2); /*0x8854a6*/
      }
      v2 = (NiD3DTextureStage *)*v36; /*0x8854ab*/
      a3 = *v36; /*0x8854b0*/
      if ( a3 ) /*0x8854b4*/
        ++v2[7].Unk08; /*0x8854b6*/
    }
    v37 = v423; /*0x8854ba*/
    LOBYTE(v424) = 1; /*0x8854c0*/
    if ( v423 ) /*0x8854c5*/
    {
      --v423[7].Unk08; /*0x8854c7*/
      if ( !v37[7].Unk08 ) /*0x8854cf*/
        sub_772560(v37); /*0x8854d4*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x8854e0*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x8854ed*/
    v38 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8854ff*/
    v4 = v2 == (NiD3DTextureStage *)*v38; /*0x885501*/
    LOBYTE(v424) = 0xF; /*0x885504*/
    if ( !v4 ) /*0x885509*/
    {
      if ( v2 ) /*0x88550d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88550f*/
        if ( v4 ) /*0x885512*/
          sub_772560(v2); /*0x885516*/
      }
      v2 = (NiD3DTextureStage *)*v38; /*0x88551b*/
      a3 = *v38; /*0x885520*/
      if ( a3 ) /*0x885524*/
        ++v2[7].Unk08; /*0x885526*/
    }
    v39 = v423; /*0x88552a*/
    LOBYTE(v424) = 1; /*0x885530*/
    if ( v423 ) /*0x885535*/
    {
      --v423[7].Unk08; /*0x885537*/
      if ( !v39[7].Unk08 ) /*0x88553f*/
        sub_772560(v39); /*0x885544*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 2); /*0x885550*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x88555d*/
  }
  v40 = (volatile LONG *)v422[0x32]; /*0x885566*/
  v41 = v1->VertexShader; /*0x88556c*/
  if ( v41 != (NiD3DVertexShader *)v40 ) /*0x885571*/
  {
    if ( v41 ) /*0x885575*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v41 + 1) ) /*0x88557b*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v41)(v41, 1); /*0x885592*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v40; /*0x885596*/
    if ( v40 ) /*0x885599*/
      InterlockedIncrement(v40 + 1); /*0x88559f*/
  }
  v42 = v1->PixelShader; /*0x8855aa*/
  v43 = unk_B451B8; /*0x8855af*/
  if ( v42 != (NiD3DPixelShader *)unk_B451B8 ) /*0x8855b1*/
  {
    if ( v42 ) /*0x8855b5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v42 + 1) ) /*0x8855bb*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v42)(v42, 1); /*0x8855d2*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v43; /*0x8855d6*/
    if ( v43 ) /*0x8855d9*/
      InterlockedIncrement((volatile LONG *)(v43 + 4)); /*0x8855df*/
  }
  if ( !v1->RenderStateGroup ) /*0x8855e5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8855f0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x8855fc*/
  if ( !v1->RenderStateGroup ) /*0x885601*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88560c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x885618*/
  if ( !v1->RenderStateGroup ) /*0x88561d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885628*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x885634*/
  if ( !v1->RenderStateGroup ) /*0x885639*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885644*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x885650*/
  if ( !v1->RenderStateGroup ) /*0x885655*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885660*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x88566c*/
  if ( !v1->RenderStateGroup ) /*0x885671*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88567c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x885688*/
  v44 = unk_B44304; /*0x885693*/
  v45 = unk_B435E4; /*0x885699*/
  unk_B43C9C = unk_B43C74; /*0x88569e*/
  v46 = unk_B44994; /*0x8856a4*/
  v4 = v1 == (NiD3DPass *)unk_B477C0; /*0x8856ad*/
  unk_B4432C = v44; /*0x8856b3*/
  unk_B4360C = v45; /*0x8856b9*/
  unk_B449BC = v46; /*0x8856be*/
  if ( !v4 ) /*0x8856c4*/
  {
    v4 = v1->RefCount-- == 1; /*0x8856c6*/
    if ( v4 ) /*0x8856c9*/
      NiD3DPass_ReleaseToPool(v1); /*0x8856cd*/
    v1 = (NiD3DPass *)unk_B477C0; /*0x8856d2*/
    v421 = (NiD3DPassVtbl **)unk_B477C0; /*0x8856da*/
    if ( v421 ) /*0x8856de*/
      ++v1->RefCount; /*0x8856e0*/
  }
  if ( v1->StageCount < 7 ) /*0x8856ea*/
  {
    v47 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8856fd*/
    v4 = v2 == (NiD3DTextureStage *)*v47; /*0x8856ff*/
    LOBYTE(v424) = 0x10; /*0x885702*/
    if ( !v4 ) /*0x885707*/
    {
      if ( v2 ) /*0x88570b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88570d*/
        if ( v4 ) /*0x885710*/
          sub_772560(v2); /*0x885714*/
      }
      v2 = (NiD3DTextureStage *)*v47; /*0x885719*/
      a3 = *v47; /*0x88571e*/
      if ( a3 ) /*0x885722*/
        ++v2[7].Unk08; /*0x885724*/
    }
    v48 = v423; /*0x885728*/
    LOBYTE(v424) = 1; /*0x88572e*/
    if ( v423 ) /*0x885733*/
    {
      --v423[7].Unk08; /*0x885735*/
      if ( !v48[7].Unk08 ) /*0x88573d*/
        sub_772560(v48); /*0x885742*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x88574e*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x88575b*/
    v49 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x88576d*/
    v4 = v2 == (NiD3DTextureStage *)*v49; /*0x88576f*/
    LOBYTE(v424) = 0x11; /*0x885772*/
    if ( !v4 ) /*0x885777*/
    {
      if ( v2 ) /*0x88577b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88577d*/
        if ( v4 ) /*0x885780*/
          sub_772560(v2); /*0x885784*/
      }
      v2 = (NiD3DTextureStage *)*v49; /*0x885789*/
      a3 = *v49; /*0x88578e*/
      if ( a3 ) /*0x885792*/
        ++v2[7].Unk08; /*0x885794*/
    }
    v50 = v423; /*0x885798*/
    LOBYTE(v424) = 1; /*0x88579e*/
    if ( v423 ) /*0x8857a3*/
    {
      --v423[7].Unk08; /*0x8857a5*/
      if ( !v50[7].Unk08 ) /*0x8857ad*/
        sub_772560(v50); /*0x8857b2*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x8857be*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x8857cb*/
    v51 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8857dd*/
    v4 = v2 == (NiD3DTextureStage *)*v51; /*0x8857df*/
    LOBYTE(v424) = 0x12; /*0x8857e2*/
    if ( !v4 ) /*0x8857e7*/
    {
      if ( v2 ) /*0x8857eb*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8857ed*/
        if ( v4 ) /*0x8857f0*/
          sub_772560(v2); /*0x8857f4*/
      }
      v2 = (NiD3DTextureStage *)*v51; /*0x8857f9*/
      a3 = *v51; /*0x8857fe*/
      if ( a3 ) /*0x885802*/
        ++v2[7].Unk08; /*0x885804*/
    }
    v52 = v423; /*0x885808*/
    LOBYTE(v424) = 1; /*0x88580e*/
    if ( v423 ) /*0x885813*/
    {
      --v423[7].Unk08; /*0x885815*/
      if ( !v52[7].Unk08 ) /*0x88581d*/
        sub_772560(v52); /*0x885822*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x88582e*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x88583b*/
    v53 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x88584d*/
    v4 = v2 == (NiD3DTextureStage *)*v53; /*0x88584f*/
    LOBYTE(v424) = 0x13; /*0x885852*/
    if ( !v4 ) /*0x885857*/
    {
      if ( v2 ) /*0x88585b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88585d*/
        if ( v4 ) /*0x885860*/
          sub_772560(v2); /*0x885864*/
      }
      v2 = (NiD3DTextureStage *)*v53; /*0x885869*/
      a3 = *v53; /*0x88586e*/
      if ( a3 ) /*0x885872*/
        ++v2[7].Unk08; /*0x885874*/
    }
    v54 = v423; /*0x885878*/
    LOBYTE(v424) = 1; /*0x88587e*/
    if ( v423 ) /*0x885883*/
    {
      --v423[7].Unk08; /*0x885885*/
      if ( !v54[7].Unk08 ) /*0x88588d*/
        sub_772560(v54); /*0x885892*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x88589e*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x8858ab*/
    v55 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8858bd*/
    v4 = v2 == (NiD3DTextureStage *)*v55; /*0x8858bf*/
    LOBYTE(v424) = 0x14; /*0x8858c2*/
    if ( !v4 ) /*0x8858c7*/
    {
      if ( v2 ) /*0x8858cb*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8858cd*/
        if ( v4 ) /*0x8858d0*/
          sub_772560(v2); /*0x8858d4*/
      }
      v2 = (NiD3DTextureStage *)*v55; /*0x8858d9*/
      a3 = *v55; /*0x8858de*/
      if ( a3 ) /*0x8858e2*/
        ++v2[7].Unk08; /*0x8858e4*/
    }
    v56 = v423; /*0x8858e8*/
    LOBYTE(v424) = 1; /*0x8858ee*/
    if ( v423 ) /*0x8858f3*/
    {
      --v423[7].Unk08; /*0x8858f5*/
      if ( !v56[7].Unk08 ) /*0x8858fd*/
        sub_772560(v56); /*0x885902*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 2); /*0x88590e*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x88591f*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x885929*/
    v57 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x88593b*/
    v4 = v2 == (NiD3DTextureStage *)*v57; /*0x88593d*/
    LOBYTE(v424) = 0x15; /*0x885940*/
    if ( !v4 ) /*0x885945*/
    {
      if ( v2 ) /*0x885949*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x88594b*/
        if ( v4 ) /*0x88594e*/
          sub_772560(v2); /*0x885952*/
      }
      v2 = (NiD3DTextureStage *)*v57; /*0x885957*/
      a3 = *v57; /*0x88595c*/
      if ( a3 ) /*0x885960*/
        ++v2[7].Unk08; /*0x885962*/
    }
    v58 = v423; /*0x885966*/
    LOBYTE(v424) = 1; /*0x88596c*/
    if ( v423 ) /*0x885971*/
    {
      --v423[7].Unk08; /*0x885973*/
      if ( !v58[7].Unk08 ) /*0x88597b*/
        sub_772560(v58); /*0x885980*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x88598c*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x885999*/
    v59 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8859ab*/
    v4 = v2 == (NiD3DTextureStage *)*v59; /*0x8859ad*/
    LOBYTE(v424) = 0x16; /*0x8859b0*/
    if ( !v4 ) /*0x8859b5*/
    {
      if ( v2 ) /*0x8859b9*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8859bb*/
        if ( v4 ) /*0x8859be*/
          sub_772560(v2); /*0x8859c2*/
      }
      v2 = (NiD3DTextureStage *)*v59; /*0x8859c7*/
      a3 = *v59; /*0x8859cc*/
      if ( a3 ) /*0x8859d0*/
        ++v2[7].Unk08; /*0x8859d2*/
    }
    v60 = v423; /*0x8859d6*/
    LOBYTE(v424) = 1; /*0x8859dc*/
    if ( v423 ) /*0x8859e1*/
    {
      --v423[7].Unk08; /*0x8859e3*/
      if ( !v60[7].Unk08 ) /*0x8859eb*/
        sub_772560(v60); /*0x8859f0*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 2); /*0x8859fc*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x885a09*/
  }
  v61 = (volatile LONG *)v422[0x33]; /*0x885a12*/
  v62 = v1->VertexShader; /*0x885a18*/
  if ( v62 != (NiD3DVertexShader *)v61 ) /*0x885a1d*/
  {
    if ( v62 ) /*0x885a21*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v62 + 1) ) /*0x885a27*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v62)(v62, 1); /*0x885a3e*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v61; /*0x885a42*/
    if ( v61 ) /*0x885a45*/
      InterlockedIncrement(v61 + 1); /*0x885a4b*/
  }
  v63 = v1->PixelShader; /*0x885a56*/
  v64 = unk_B451C0; /*0x885a5b*/
  if ( v63 != (NiD3DPixelShader *)unk_B451C0 ) /*0x885a5d*/
  {
    if ( v63 ) /*0x885a61*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v63 + 1) ) /*0x885a67*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v63)(v63, 1); /*0x885a7e*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v64; /*0x885a82*/
    if ( v64 ) /*0x885a85*/
      InterlockedIncrement((volatile LONG *)(v64 + 4)); /*0x885a8b*/
  }
  if ( !v1->RenderStateGroup ) /*0x885a91*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885a9c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x885aa8*/
  if ( !v1->RenderStateGroup ) /*0x885aad*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885ab8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x885ac4*/
  if ( !v1->RenderStateGroup ) /*0x885ac9*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885ad4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x885ae0*/
  if ( !v1->RenderStateGroup ) /*0x885ae5*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885af0*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x885afc*/
  if ( !v1->RenderStateGroup ) /*0x885b01*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885b0c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x885b18*/
  if ( !v1->RenderStateGroup ) /*0x885b1d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885b28*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x885b34*/
  v65 = unk_B44330; /*0x885b3f*/
  v66 = unk_B43610; /*0x885b45*/
  unk_B43CC8 = unk_B43CA0; /*0x885b4a*/
  v67 = unk_B449C0; /*0x885b50*/
  v4 = v1 == (NiD3DPass *)unk_B477C4; /*0x885b59*/
  unk_B44358 = v65; /*0x885b5f*/
  unk_B43638 = v66; /*0x885b65*/
  unk_B449E8 = v67; /*0x885b6a*/
  if ( !v4 ) /*0x885b70*/
  {
    v4 = v1->RefCount-- == 1; /*0x885b72*/
    if ( v4 ) /*0x885b75*/
      NiD3DPass_ReleaseToPool(v1); /*0x885b79*/
    v1 = (NiD3DPass *)unk_B477C4; /*0x885b7e*/
    v421 = (NiD3DPassVtbl **)unk_B477C4; /*0x885b86*/
    if ( v421 ) /*0x885b8a*/
      ++v1->RefCount; /*0x885b8c*/
  }
  if ( v1->StageCount < 7 ) /*0x885b94*/
  {
    v68 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885ba7*/
    v4 = v2 == (NiD3DTextureStage *)*v68; /*0x885ba9*/
    LOBYTE(v424) = 0x17; /*0x885bac*/
    if ( !v4 ) /*0x885bb1*/
    {
      if ( v2 ) /*0x885bb5*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885bb7*/
        if ( v4 ) /*0x885bba*/
          sub_772560(v2); /*0x885bbe*/
      }
      v2 = (NiD3DTextureStage *)*v68; /*0x885bc3*/
      a3 = *v68; /*0x885bc8*/
      if ( a3 ) /*0x885bcc*/
        ++v2[7].Unk08; /*0x885bce*/
    }
    v69 = v423; /*0x885bd2*/
    LOBYTE(v424) = 1; /*0x885bd8*/
    if ( v423 ) /*0x885bdd*/
    {
      --v423[7].Unk08; /*0x885bdf*/
      if ( !v69[7].Unk08 ) /*0x885be7*/
        sub_772560(v69); /*0x885bec*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x885bf8*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x885c05*/
    v70 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885c17*/
    v4 = v2 == (NiD3DTextureStage *)*v70; /*0x885c19*/
    LOBYTE(v424) = 0x18; /*0x885c1c*/
    if ( !v4 ) /*0x885c21*/
    {
      if ( v2 ) /*0x885c25*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885c27*/
        if ( v4 ) /*0x885c2a*/
          sub_772560(v2); /*0x885c2e*/
      }
      v2 = (NiD3DTextureStage *)*v70; /*0x885c33*/
      a3 = *v70; /*0x885c38*/
      if ( a3 ) /*0x885c3c*/
        ++v2[7].Unk08; /*0x885c3e*/
    }
    v71 = v423; /*0x885c42*/
    LOBYTE(v424) = 1; /*0x885c48*/
    if ( v423 ) /*0x885c4d*/
    {
      --v423[7].Unk08; /*0x885c4f*/
      if ( !v71[7].Unk08 ) /*0x885c57*/
        sub_772560(v71); /*0x885c5c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x885c68*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x885c75*/
    v72 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885c87*/
    v4 = v2 == (NiD3DTextureStage *)*v72; /*0x885c89*/
    LOBYTE(v424) = 0x19; /*0x885c8c*/
    if ( !v4 ) /*0x885c91*/
    {
      if ( v2 ) /*0x885c95*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885c97*/
        if ( v4 ) /*0x885c9a*/
          sub_772560(v2); /*0x885c9e*/
      }
      v2 = (NiD3DTextureStage *)*v72; /*0x885ca3*/
      a3 = *v72; /*0x885ca8*/
      if ( a3 ) /*0x885cac*/
        ++v2[7].Unk08; /*0x885cae*/
    }
    v73 = v423; /*0x885cb2*/
    LOBYTE(v424) = 1; /*0x885cb8*/
    if ( v423 ) /*0x885cbd*/
    {
      --v423[7].Unk08; /*0x885cbf*/
      if ( !v73[7].Unk08 ) /*0x885cc7*/
        sub_772560(v73); /*0x885ccc*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x885cd8*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x885ce5*/
    v74 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885cf7*/
    v4 = v2 == (NiD3DTextureStage *)*v74; /*0x885cf9*/
    LOBYTE(v424) = 0x1A; /*0x885cfc*/
    if ( !v4 ) /*0x885d01*/
    {
      if ( v2 ) /*0x885d05*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885d07*/
        if ( v4 ) /*0x885d0a*/
          sub_772560(v2); /*0x885d0e*/
      }
      v2 = (NiD3DTextureStage *)*v74; /*0x885d13*/
      a3 = *v74; /*0x885d18*/
      if ( a3 ) /*0x885d1c*/
        ++v2[7].Unk08; /*0x885d1e*/
    }
    v75 = v423; /*0x885d22*/
    LOBYTE(v424) = 1; /*0x885d28*/
    if ( v423 ) /*0x885d2d*/
    {
      --v423[7].Unk08; /*0x885d2f*/
      if ( !v75[7].Unk08 ) /*0x885d37*/
        sub_772560(v75); /*0x885d3c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x885d48*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x885d55*/
    v76 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885d67*/
    v4 = v2 == (NiD3DTextureStage *)*v76; /*0x885d69*/
    LOBYTE(v424) = 0x1B; /*0x885d6c*/
    if ( !v4 ) /*0x885d71*/
    {
      if ( v2 ) /*0x885d75*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885d77*/
        if ( v4 ) /*0x885d7a*/
          sub_772560(v2); /*0x885d7e*/
      }
      v2 = (NiD3DTextureStage *)*v76; /*0x885d83*/
      a3 = *v76; /*0x885d88*/
      if ( a3 ) /*0x885d8c*/
        ++v2[7].Unk08; /*0x885d8e*/
    }
    v77 = v423; /*0x885d92*/
    LOBYTE(v424) = 1; /*0x885d98*/
    if ( v423 ) /*0x885d9d*/
    {
      --v423[7].Unk08; /*0x885d9f*/
      if ( !v77[7].Unk08 ) /*0x885da7*/
        sub_772560(v77); /*0x885dac*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 2); /*0x885db8*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x885dc9*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x885dd3*/
    v78 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885de5*/
    v4 = v2 == (NiD3DTextureStage *)*v78; /*0x885de7*/
    LOBYTE(v424) = 0x1C; /*0x885dea*/
    if ( !v4 ) /*0x885def*/
    {
      if ( v2 ) /*0x885df3*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885df5*/
        if ( v4 ) /*0x885df8*/
          sub_772560(v2); /*0x885dfc*/
      }
      v2 = (NiD3DTextureStage *)*v78; /*0x885e01*/
      a3 = *v78; /*0x885e06*/
      if ( a3 ) /*0x885e0a*/
        ++v2[7].Unk08; /*0x885e0c*/
    }
    v79 = v423; /*0x885e10*/
    LOBYTE(v424) = 1; /*0x885e16*/
    if ( v423 ) /*0x885e1b*/
    {
      --v423[7].Unk08; /*0x885e1d*/
      if ( !v79[7].Unk08 ) /*0x885e25*/
        sub_772560(v79); /*0x885e2a*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x885e36*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x885e43*/
    v80 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x885e55*/
    v4 = v2 == (NiD3DTextureStage *)*v80; /*0x885e57*/
    LOBYTE(v424) = 0x1D; /*0x885e5a*/
    if ( !v4 ) /*0x885e5f*/
    {
      if ( v2 ) /*0x885e63*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x885e65*/
        if ( v4 ) /*0x885e68*/
          sub_772560(v2); /*0x885e6c*/
      }
      v2 = (NiD3DTextureStage *)*v80; /*0x885e71*/
      a3 = *v80; /*0x885e76*/
      if ( a3 ) /*0x885e7a*/
        ++v2[7].Unk08; /*0x885e7c*/
    }
    v81 = v423; /*0x885e80*/
    LOBYTE(v424) = 1; /*0x885e86*/
    if ( v423 ) /*0x885e8b*/
    {
      --v423[7].Unk08; /*0x885e8d*/
      if ( !v81[7].Unk08 ) /*0x885e95*/
        sub_772560(v81); /*0x885e9a*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 2); /*0x885ea6*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x885eb3*/
  }
  v82 = (volatile LONG *)v422[0x34]; /*0x885ebc*/
  v83 = v1->VertexShader; /*0x885ec2*/
  if ( v83 != (NiD3DVertexShader *)v82 ) /*0x885ec7*/
  {
    if ( v83 ) /*0x885ecb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v83 + 1) ) /*0x885ed1*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v83)(v83, 1); /*0x885ee8*/
    }
    v1->VertexShader = (NiD3DVertexShader *)v82; /*0x885eec*/
    if ( v82 ) /*0x885eef*/
      InterlockedIncrement(v82 + 1); /*0x885ef5*/
  }
  v84 = v1->PixelShader; /*0x885f00*/
  v85 = unk_B451C8; /*0x885f05*/
  if ( v84 != (NiD3DPixelShader *)unk_B451C8 ) /*0x885f07*/
  {
    if ( v84 ) /*0x885f0b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v84 + 1) ) /*0x885f11*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v84)(v84, 1); /*0x885f28*/
    }
    v1->PixelShader = (NiD3DPixelShader *)v85; /*0x885f2c*/
    if ( v85 ) /*0x885f2f*/
      InterlockedIncrement((volatile LONG *)(v85 + 4)); /*0x885f35*/
  }
  if ( !v1->RenderStateGroup ) /*0x885f3b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885f46*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x885f52*/
  if ( !v1->RenderStateGroup ) /*0x885f57*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885f62*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x885f6e*/
  if ( !v1->RenderStateGroup ) /*0x885f73*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885f7e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x885f8e*/
  if ( !v1->RenderStateGroup ) /*0x885f93*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885f9e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x885faa*/
  if ( !v1->RenderStateGroup ) /*0x885faf*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885fba*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x885fc5*/
  if ( !v1->RenderStateGroup ) /*0x885fca*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x885fd5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x885fe1*/
  v86 = unk_B4435C; /*0x885fec*/
  v87 = unk_B4363C; /*0x885ff2*/
  unk_B43CF4 = unk_B43CCC; /*0x885ff7*/
  v88 = unk_B449EC; /*0x885ffd*/
  v4 = v1 == (NiD3DPass *)unk_B477C8; /*0x886006*/
  unk_B44384 = v86; /*0x88600c*/
  unk_B43664 = v87; /*0x886012*/
  unk_B44A14 = v88; /*0x886017*/
  if ( !v4 ) /*0x88601d*/
  {
    v4 = v1->RefCount-- == 1; /*0x88601f*/
    if ( v4 ) /*0x886022*/
      NiD3DPass_ReleaseToPool(v1); /*0x886026*/
    v1 = (NiD3DPass *)unk_B477C8; /*0x88602b*/
    v421 = (NiD3DPassVtbl **)unk_B477C8; /*0x886033*/
    if ( v421 ) /*0x886037*/
      ++v1->RefCount; /*0x886039*/
  }
  if ( v1->StageCount < 8 ) /*0x886040*/
  {
    v89 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x886053*/
    v4 = v2 == (NiD3DTextureStage *)*v89; /*0x886055*/
    LOBYTE(v424) = 0x1E; /*0x886058*/
    if ( !v4 ) /*0x88605d*/
    {
      if ( v2 ) /*0x886061*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x886063*/
        if ( v4 ) /*0x886067*/
          sub_772560(v2); /*0x88606b*/
      }
      v2 = (NiD3DTextureStage *)*v89; /*0x886070*/
      a3 = *v89; /*0x886075*/
      if ( a3 ) /*0x886079*/
        ++v2[7].Unk08; /*0x88607b*/
    }
    v90 = v423; /*0x88607e*/
    LOBYTE(v424) = 1; /*0x886084*/
    if ( v423 ) /*0x886089*/
    {
      --v423[7].Unk08; /*0x88608b*/
      if ( !v90[7].Unk08 ) /*0x886094*/
        sub_772560(v90); /*0x886099*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8860a4*/
    NiD3DPass_SetTextureStage(v1, 0, &v2->Stage); /*0x8860b1*/
    v91 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8860c3*/
    v4 = v2 == (NiD3DTextureStage *)*v91; /*0x8860c5*/
    LOBYTE(v424) = 0x1F; /*0x8860c8*/
    if ( !v4 ) /*0x8860cd*/
    {
      if ( v2 ) /*0x8860d1*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8860d3*/
        if ( v4 ) /*0x8860d7*/
          sub_772560(v2); /*0x8860db*/
      }
      v2 = (NiD3DTextureStage *)*v91; /*0x8860e0*/
      a3 = *v91; /*0x8860e5*/
      if ( a3 ) /*0x8860e9*/
        ++v2[7].Unk08; /*0x8860eb*/
    }
    v92 = v423; /*0x8860ee*/
    LOBYTE(v424) = 1; /*0x8860f4*/
    if ( v423 ) /*0x8860f9*/
    {
      --v423[7].Unk08; /*0x8860fb*/
      if ( !v92[7].Unk08 ) /*0x886104*/
        sub_772560(v92); /*0x886109*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x886113*/
    NiD3DPass_SetTextureStage(v1, 1u, &v2->Stage); /*0x88611f*/
    v93 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x886131*/
    v4 = v2 == (NiD3DTextureStage *)*v93; /*0x886133*/
    LOBYTE(v424) = 0x20; /*0x886136*/
    if ( !v4 ) /*0x88613b*/
    {
      if ( v2 ) /*0x88613f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x886141*/
        if ( v4 ) /*0x886145*/
          sub_772560(v2); /*0x886149*/
      }
      v2 = (NiD3DTextureStage *)*v93; /*0x88614e*/
      a3 = *v93; /*0x886153*/
      if ( a3 ) /*0x886157*/
        ++v2[7].Unk08; /*0x886159*/
    }
    v94 = v423; /*0x88615c*/
    LOBYTE(v424) = 1; /*0x886162*/
    if ( v423 ) /*0x886167*/
    {
      --v423[7].Unk08; /*0x886169*/
      if ( !v94[7].Unk08 ) /*0x886172*/
        sub_772560(v94); /*0x886177*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x886182*/
    NiD3DPass_SetTextureStage(v1, 2u, &v2->Stage); /*0x88618f*/
    v95 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x8861a1*/
    v4 = v2 == (NiD3DTextureStage *)*v95; /*0x8861a3*/
    LOBYTE(v424) = 0x21; /*0x8861a6*/
    if ( !v4 ) /*0x8861ab*/
    {
      if ( v2 ) /*0x8861af*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8861b1*/
        if ( v4 ) /*0x8861b5*/
          sub_772560(v2); /*0x8861b9*/
      }
      v2 = (NiD3DTextureStage *)*v95; /*0x8861be*/
      a3 = *v95; /*0x8861c3*/
      if ( a3 ) /*0x8861c7*/
        ++v2[7].Unk08; /*0x8861c9*/
    }
    v96 = v423; /*0x8861cc*/
    LOBYTE(v424) = 1; /*0x8861d2*/
    if ( v423 ) /*0x8861d7*/
    {
      --v423[7].Unk08; /*0x8861d9*/
      if ( !v96[7].Unk08 ) /*0x8861e2*/
        sub_772560(v96); /*0x8861e7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x8861f2*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x8861ff*/
    v97 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x886211*/
    v4 = v2 == (NiD3DTextureStage *)*v97; /*0x886213*/
    LOBYTE(v424) = 0x22; /*0x886216*/
    if ( !v4 ) /*0x88621b*/
    {
      if ( v2 ) /*0x88621f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x886221*/
        if ( v4 ) /*0x886225*/
          sub_772560(v2); /*0x886229*/
      }
      v2 = (NiD3DTextureStage *)*v97; /*0x88622e*/
      a3 = *v97; /*0x886233*/
      if ( a3 ) /*0x886237*/
        ++v2[7].Unk08; /*0x886239*/
    }
    v98 = v423; /*0x88623c*/
    LOBYTE(v424) = 1; /*0x886242*/
    if ( v423 ) /*0x886247*/
    {
      --v423[7].Unk08; /*0x886249*/
      if ( !v98[7].Unk08 ) /*0x886252*/
        sub_772560(v98); /*0x886257*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 1, 2); /*0x886262*/
    NiD3DPass_SetTextureStage(v1, 4u, &v2->Stage); /*0x88626f*/
    v99 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x886281*/
    v4 = v2 == (NiD3DTextureStage *)*v99; /*0x886283*/
    LOBYTE(v424) = 0x23; /*0x886286*/
    if ( !v4 ) /*0x88628b*/
    {
      if ( v2 ) /*0x88628f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x886291*/
        if ( v4 ) /*0x886295*/
          sub_772560(v2); /*0x886299*/
      }
      v2 = (NiD3DTextureStage *)*v99; /*0x88629e*/
      a3 = *v99; /*0x8862a3*/
      if ( a3 ) /*0x8862a7*/
        ++v2[7].Unk08; /*0x8862a9*/
    }
    v100 = v423; /*0x8862ac*/
    LOBYTE(v424) = 1; /*0x8862b2*/
    if ( v423 ) /*0x8862b7*/
    {
      --v423[7].Unk08; /*0x8862b9*/
      if ( !v100[7].Unk08 ) /*0x8862c2*/
        sub_772560(v100); /*0x8862c7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 3, 2); /*0x8862d3*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8862e4*/
    NiD3DPass_SetTextureStage(v1, 5u, &v2->Stage); /*0x8862ee*/
    v101 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x886300*/
    v4 = v2 == (NiD3DTextureStage *)*v101; /*0x886302*/
    LOBYTE(v424) = 0x24; /*0x886305*/
    if ( !v4 ) /*0x88630a*/
    {
      if ( v2 ) /*0x88630e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x886310*/
        if ( v4 ) /*0x886314*/
          sub_772560(v2); /*0x886318*/
      }
      v2 = (NiD3DTextureStage *)*v101; /*0x88631d*/
      a3 = *v101; /*0x886322*/
      if ( a3 ) /*0x886326*/
        ++v2[7].Unk08; /*0x886328*/
    }
    v102 = v423; /*0x88632b*/
    LOBYTE(v424) = 1; /*0x886331*/
    if ( v423 ) /*0x886336*/
    {
      --v423[7].Unk08; /*0x886338*/
      if ( !v102[7].Unk08 ) /*0x886341*/
        sub_772560(v102); /*0x886346*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 1, 2); /*0x886351*/
    NiD3DPass_SetTextureStage(v1, 6u, &v2->Stage); /*0x88635e*/
    v103 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v423); /*0x886370*/
    v4 = v2 == (NiD3DTextureStage *)*v103; /*0x886372*/
    LOBYTE(v424) = 0x25; /*0x886375*/
    if ( !v4 ) /*0x88637a*/
    {
      if ( v2 ) /*0x88637e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x886380*/
        if ( v4 ) /*0x886384*/
          sub_772560(v2); /*0x886388*/
      }
      v2 = (NiD3DTextureStage *)*v103; /*0x88638d*/
      a3 = *v103; /*0x886392*/
      if ( a3 ) /*0x886396*/
        ++v2[7].Unk08; /*0x886398*/
    }
    v104 = v423; /*0x88639b*/
    LOBYTE(v424) = 1; /*0x8863a1*/
    if ( v423 ) /*0x8863a6*/
    {
      --v423[7].Unk08; /*0x8863a8*/
      if ( !v104[7].Unk08 ) /*0x8863b1*/
        sub_772560(v104); /*0x8863b6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 7, 3, 2); /*0x8863c2*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x8863cf*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x35]); /*0x8863e4*/
  v105 = (NiD3DPixelShader *)sub_883130(0x2Fu); /*0x8863eb*/
  NiD3DPass_SetPixelShader(v1, v105); /*0x8863f6*/
  if ( !v1->RenderStateGroup ) /*0x8863fb*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886406*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x886412*/
  if ( !v1->RenderStateGroup ) /*0x886417*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886422*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x88642e*/
  if ( !v1->RenderStateGroup ) /*0x886433*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88643e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x886449*/
  if ( !v1->RenderStateGroup ) /*0x88644e*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886459*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x886465*/
  if ( !v1->RenderStateGroup ) /*0x88646a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886475*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x886480*/
  if ( !v1->RenderStateGroup ) /*0x886485*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886490*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x88649c*/
  v4 = v1 == (NiD3DPass *)unk_B477CC; /*0x8864a1*/
  v106 = unk_B44388; /*0x8864ac*/
  v107 = unk_B43668; /*0x8864b2*/
  unk_B43D28 = unk_B43CF8; /*0x8864b8*/
  v108 = unk_B44A18; /*0x8864bd*/
  unk_B443B8 = v106; /*0x8864c2*/
  unk_B43698 = v107; /*0x8864c8*/
  unk_B44A48 = v108; /*0x8864ce*/
  if ( !v4 ) /*0x8864d3*/
  {
    v4 = v1->RefCount-- == 1; /*0x8864d5*/
    if ( v4 ) /*0x8864d8*/
      NiD3DPass_ReleaseToPool(v1); /*0x8864dc*/
    v1 = (NiD3DPass *)unk_B477CC; /*0x8864e1*/
    v421 = (NiD3DPassVtbl **)unk_B477CC; /*0x8864e9*/
    if ( v421 ) /*0x8864ed*/
      ++v1->RefCount; /*0x8864ef*/
  }
  if ( v1->StageCount < 8 ) /*0x8864f6*/
  {
    v109 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886501*/
    LOBYTE(v424) = 0x26; /*0x88650e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v109); /*0x886513*/
    v110 = v423; /*0x886518*/
    LOBYTE(v424) = 1; /*0x88651e*/
    if ( v423 ) /*0x886523*/
    {
      --v423[7].Unk08; /*0x886525*/
      if ( !v110[7].Unk08 ) /*0x88652d*/
        sub_772560(v110); /*0x886532*/
    }
    v111 = a3; /*0x886537*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x886541*/
    NiD3DPass_SetTextureStage(v1, 0, v111); /*0x88654e*/
    v112 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886558*/
    LOBYTE(v424) = 0x27; /*0x886565*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v112); /*0x88656a*/
    v113 = v423; /*0x88656f*/
    LOBYTE(v424) = 1; /*0x886575*/
    if ( v423 ) /*0x88657a*/
    {
      --v423[7].Unk08; /*0x88657c*/
      if ( !v113[7].Unk08 ) /*0x886584*/
        sub_772560(v113); /*0x886589*/
    }
    v114 = a3; /*0x88658e*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x886597*/
    NiD3DPass_SetTextureStage(v1, 1u, v114); /*0x8865a3*/
    v115 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8865ad*/
    LOBYTE(v424) = 0x28; /*0x8865ba*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v115); /*0x8865bf*/
    v116 = v423; /*0x8865c4*/
    LOBYTE(v424) = 1; /*0x8865ca*/
    if ( v423 ) /*0x8865cf*/
    {
      --v423[7].Unk08; /*0x8865d1*/
      if ( !v116[7].Unk08 ) /*0x8865d9*/
        sub_772560(v116); /*0x8865de*/
    }
    v117 = a3; /*0x8865e3*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8865ed*/
    NiD3DPass_SetTextureStage(v1, 2u, v117); /*0x8865fa*/
    v118 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886604*/
    LOBYTE(v424) = 0x29; /*0x886611*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v118); /*0x886616*/
    v119 = v423; /*0x88661b*/
    LOBYTE(v424) = 1; /*0x886621*/
    if ( v423 ) /*0x886626*/
    {
      --v423[7].Unk08; /*0x886628*/
      if ( !v119[7].Unk08 ) /*0x886630*/
        sub_772560(v119); /*0x886635*/
    }
    v120 = a3; /*0x88663a*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x886644*/
    NiD3DPass_SetTextureStage(v1, 3u, v120); /*0x886651*/
    v121 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88665b*/
    LOBYTE(v424) = 0x2A; /*0x886668*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v121); /*0x88666d*/
    v122 = v423; /*0x886672*/
    LOBYTE(v424) = 1; /*0x886678*/
    if ( v423 ) /*0x88667d*/
    {
      --v423[7].Unk08; /*0x88667f*/
      if ( !v122[7].Unk08 ) /*0x886687*/
        sub_772560(v122); /*0x88668c*/
    }
    v123 = a3; /*0x886691*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x88669b*/
    NiD3DPass_SetTextureStage(v1, 4u, v123); /*0x8866a8*/
    v124 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8866b2*/
    LOBYTE(v424) = 0x2B; /*0x8866bf*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v124); /*0x8866c4*/
    v125 = v423; /*0x8866c9*/
    LOBYTE(v424) = 1; /*0x8866cf*/
    if ( v423 ) /*0x8866d4*/
    {
      --v423[7].Unk08; /*0x8866d6*/
      if ( !v125[7].Unk08 ) /*0x8866de*/
        sub_772560(v125); /*0x8866e3*/
    }
    v126 = (NiD3DTextureStage *)a3; /*0x8866e8*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 2); /*0x8866f3*/
    NiD3DTextureStage_SetTexture(v126, (NiTexture *)LODWORD(flt_B43110[0])); /*0x886704*/
    NiD3DPass_SetTextureStage(v1, 5u, &v126->Stage); /*0x88670e*/
    v127 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886718*/
    LOBYTE(v424) = 0x2C; /*0x886725*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v127); /*0x88672a*/
    v128 = v423; /*0x88672f*/
    LOBYTE(v424) = 1; /*0x886735*/
    if ( v423 ) /*0x88673a*/
    {
      --v423[7].Unk08; /*0x88673c*/
      if ( !v128[7].Unk08 ) /*0x886744*/
        sub_772560(v128); /*0x886749*/
    }
    v129 = a3; /*0x88674e*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x886758*/
    NiD3DPass_SetTextureStage(v1, 6u, v129); /*0x886765*/
    v130 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88676f*/
    LOBYTE(v424) = 0x2D; /*0x88677c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v130); /*0x886781*/
    v131 = v423; /*0x886786*/
    LOBYTE(v424) = 1; /*0x88678c*/
    if ( v423 ) /*0x886791*/
    {
      --v423[7].Unk08; /*0x886793*/
      if ( !v131[7].Unk08 ) /*0x88679b*/
        sub_772560(v131); /*0x8867a0*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8867a5*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 2); /*0x8867b0*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x8867bd*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x36]); /*0x8867cf*/
  v132 = (NiD3DPixelShader *)sub_883130(0x32u); /*0x8867d6*/
  NiD3DPass_SetPixelShader(v1, v132); /*0x8867e1*/
  if ( !v1->RenderStateGroup ) /*0x8867e6*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8867f1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x8867fd*/
  if ( !v1->RenderStateGroup ) /*0x886802*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88680d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x886819*/
  if ( !v1->RenderStateGroup ) /*0x88681e*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886829*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x886834*/
  if ( !v1->RenderStateGroup ) /*0x886839*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886844*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x886850*/
  if ( !v1->RenderStateGroup ) /*0x886855*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886860*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x88686b*/
  if ( !v1->RenderStateGroup ) /*0x886870*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88687b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x886887*/
  v4 = v1 == (NiD3DPass *)unk_B477D0; /*0x88688c*/
  v133 = unk_B443C0; /*0x886898*/
  v134 = unk_B436A0; /*0x88689d*/
  unk_B43D60 = unk_B43D30; /*0x8868a3*/
  v135 = unk_B44A50; /*0x8868a9*/
  unk_B443F0 = v133; /*0x8868af*/
  unk_B436D0 = v134; /*0x8868b4*/
  unk_B44A80 = v135; /*0x8868ba*/
  if ( !v4 ) /*0x8868c0*/
  {
    v4 = v1->RefCount-- == 1; /*0x8868c2*/
    if ( v4 ) /*0x8868c5*/
      NiD3DPass_ReleaseToPool(v1); /*0x8868c9*/
    v1 = (NiD3DPass *)unk_B477D0; /*0x8868ce*/
    v421 = (NiD3DPassVtbl **)unk_B477D0; /*0x8868d6*/
    if ( v421 ) /*0x8868da*/
      ++v1->RefCount; /*0x8868dc*/
  }
  if ( v1->StageCount < 8 ) /*0x8868e3*/
  {
    v136 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8868ee*/
    LOBYTE(v424) = 0x2E; /*0x8868fb*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v136); /*0x886900*/
    v137 = v423; /*0x886905*/
    LOBYTE(v424) = 1; /*0x88690b*/
    if ( v423 ) /*0x886910*/
    {
      --v423[7].Unk08; /*0x886912*/
      if ( !v137[7].Unk08 ) /*0x88691a*/
        sub_772560(v137); /*0x88691f*/
    }
    v138 = a3; /*0x886924*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x88692e*/
    NiD3DPass_SetTextureStage(v1, 0, v138); /*0x88693b*/
    v139 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886945*/
    LOBYTE(v424) = 0x2F; /*0x886952*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v139); /*0x886957*/
    v140 = v423; /*0x88695c*/
    LOBYTE(v424) = 1; /*0x886962*/
    if ( v423 ) /*0x886967*/
    {
      --v423[7].Unk08; /*0x886969*/
      if ( !v140[7].Unk08 ) /*0x886971*/
        sub_772560(v140); /*0x886976*/
    }
    v141 = a3; /*0x88697b*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x886984*/
    NiD3DPass_SetTextureStage(v1, 1u, v141); /*0x886990*/
    v142 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88699a*/
    LOBYTE(v424) = 0x30; /*0x8869a7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v142); /*0x8869ac*/
    v143 = v423; /*0x8869b1*/
    LOBYTE(v424) = 1; /*0x8869b7*/
    if ( v423 ) /*0x8869bc*/
    {
      --v423[7].Unk08; /*0x8869be*/
      if ( !v143[7].Unk08 ) /*0x8869c6*/
        sub_772560(v143); /*0x8869cb*/
    }
    v144 = a3; /*0x8869d0*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8869da*/
    NiD3DPass_SetTextureStage(v1, 2u, v144); /*0x8869e7*/
    v145 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8869f1*/
    LOBYTE(v424) = 0x31; /*0x8869fe*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v145); /*0x886a03*/
    v146 = v423; /*0x886a08*/
    LOBYTE(v424) = 1; /*0x886a0e*/
    if ( v423 ) /*0x886a13*/
    {
      --v423[7].Unk08; /*0x886a15*/
      if ( !v146[7].Unk08 ) /*0x886a1d*/
        sub_772560(v146); /*0x886a22*/
    }
    v147 = a3; /*0x886a27*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x886a31*/
    NiD3DPass_SetTextureStage(v1, 3u, v147); /*0x886a3e*/
    v148 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886a48*/
    LOBYTE(v424) = 0x32; /*0x886a55*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v148); /*0x886a5a*/
    v149 = v423; /*0x886a5f*/
    LOBYTE(v424) = 1; /*0x886a65*/
    if ( v423 ) /*0x886a6a*/
    {
      --v423[7].Unk08; /*0x886a6c*/
      if ( !v149[7].Unk08 ) /*0x886a74*/
        sub_772560(v149); /*0x886a79*/
    }
    v150 = a3; /*0x886a7e*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x886a88*/
    NiD3DPass_SetTextureStage(v1, 4u, v150); /*0x886a95*/
    v151 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886a9f*/
    LOBYTE(v424) = 0x33; /*0x886aac*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v151); /*0x886ab1*/
    v152 = v423; /*0x886ab6*/
    LOBYTE(v424) = 1; /*0x886abc*/
    if ( v423 ) /*0x886ac1*/
    {
      --v423[7].Unk08; /*0x886ac3*/
      if ( !v152[7].Unk08 ) /*0x886acb*/
        sub_772560(v152); /*0x886ad0*/
    }
    v153 = (NiD3DTextureStage *)a3; /*0x886ad5*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 2); /*0x886ae0*/
    NiD3DTextureStage_SetTexture(v153, (NiTexture *)LODWORD(flt_B43110[0])); /*0x886af0*/
    NiD3DPass_SetTextureStage(v1, 5u, &v153->Stage); /*0x886afa*/
    v154 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886b04*/
    LOBYTE(v424) = 0x34; /*0x886b11*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v154); /*0x886b16*/
    v155 = v423; /*0x886b1b*/
    LOBYTE(v424) = 1; /*0x886b21*/
    if ( v423 ) /*0x886b26*/
    {
      --v423[7].Unk08; /*0x886b28*/
      if ( !v155[7].Unk08 ) /*0x886b30*/
        sub_772560(v155); /*0x886b35*/
    }
    v156 = a3; /*0x886b3a*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x886b44*/
    NiD3DPass_SetTextureStage(v1, 6u, v156); /*0x886b51*/
    v157 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886b5b*/
    LOBYTE(v424) = 0x35; /*0x886b68*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v157); /*0x886b6d*/
    v158 = v423; /*0x886b72*/
    LOBYTE(v424) = 1; /*0x886b78*/
    if ( v423 ) /*0x886b7d*/
    {
      --v423[7].Unk08; /*0x886b7f*/
      if ( !v158[7].Unk08 ) /*0x886b87*/
        sub_772560(v158); /*0x886b8c*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x886b91*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 2); /*0x886b9c*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x886ba9*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x37]); /*0x886bbb*/
  v159 = (NiD3DPixelShader *)sub_883130(0x38u); /*0x886bc2*/
  NiD3DPass_SetPixelShader(v1, v159); /*0x886bcd*/
  if ( !v1->RenderStateGroup ) /*0x886bd2*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886bdd*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x886be9*/
  if ( !v1->RenderStateGroup ) /*0x886bee*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886bf9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x886c05*/
  if ( !v1->RenderStateGroup ) /*0x886c0a*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886c15*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x886c20*/
  if ( !v1->RenderStateGroup ) /*0x886c25*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886c30*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x886c3c*/
  if ( !v1->RenderStateGroup ) /*0x886c41*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886c4c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x886c57*/
  if ( !v1->RenderStateGroup ) /*0x886c5c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886c67*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x886c73*/
  v4 = v1 == (NiD3DPass *)unk_B477D4; /*0x886c78*/
  v160 = unk_B443F8; /*0x886c84*/
  v161 = unk_B436D8; /*0x886c8a*/
  unk_B43D94 = unk_B43D68; /*0x886c8f*/
  v162 = unk_B44A88; /*0x886c95*/
  unk_B44424 = v160; /*0x886c9b*/
  unk_B43704 = v161; /*0x886ca1*/
  unk_B44AB4 = v162; /*0x886ca6*/
  if ( !v4 ) /*0x886cac*/
  {
    v4 = v1->RefCount-- == 1; /*0x886cae*/
    if ( v4 ) /*0x886cb1*/
      NiD3DPass_ReleaseToPool(v1); /*0x886cb5*/
    v1 = (NiD3DPass *)unk_B477D4; /*0x886cba*/
    v421 = (NiD3DPassVtbl **)unk_B477D4; /*0x886cc2*/
    if ( v421 ) /*0x886cc6*/
      ++v1->RefCount; /*0x886cc8*/
  }
  if ( v1->StageCount < 8 ) /*0x886cd1*/
  {
    v163 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886cdc*/
    LOBYTE(v424) = 0x36; /*0x886ce9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v163); /*0x886cee*/
    v164 = v423; /*0x886cf3*/
    LOBYTE(v424) = 1; /*0x886cf9*/
    if ( v423 ) /*0x886cfe*/
    {
      --v423[7].Unk08; /*0x886d00*/
      if ( !v164[7].Unk08 ) /*0x886d08*/
        sub_772560(v164); /*0x886d0d*/
    }
    v165 = a3; /*0x886d12*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x886d1c*/
    NiD3DPass_SetTextureStage(v1, 0, v165); /*0x886d29*/
    v166 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886d33*/
    LOBYTE(v424) = 0x37; /*0x886d40*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v166); /*0x886d45*/
    v167 = v423; /*0x886d4a*/
    LOBYTE(v424) = 1; /*0x886d50*/
    if ( v423 ) /*0x886d55*/
    {
      --v423[7].Unk08; /*0x886d57*/
      if ( !v167[7].Unk08 ) /*0x886d5f*/
        sub_772560(v167); /*0x886d64*/
    }
    v168 = a3; /*0x886d69*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x886d72*/
    NiD3DPass_SetTextureStage(v1, 1u, v168); /*0x886d7e*/
    v169 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886d88*/
    LOBYTE(v424) = 0x38; /*0x886d95*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v169); /*0x886d9a*/
    v170 = v423; /*0x886d9f*/
    LOBYTE(v424) = 1; /*0x886da5*/
    if ( v423 ) /*0x886daa*/
    {
      --v423[7].Unk08; /*0x886dac*/
      if ( !v170[7].Unk08 ) /*0x886db4*/
        sub_772560(v170); /*0x886db9*/
    }
    v171 = a3; /*0x886dbe*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x886dc8*/
    NiD3DPass_SetTextureStage(v1, 2u, v171); /*0x886dd5*/
    v172 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886ddf*/
    LOBYTE(v424) = 0x39; /*0x886dec*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v172); /*0x886df1*/
    v173 = v423; /*0x886df6*/
    LOBYTE(v424) = 1; /*0x886dfc*/
    if ( v423 ) /*0x886e01*/
    {
      --v423[7].Unk08; /*0x886e03*/
      if ( !v173[7].Unk08 ) /*0x886e0b*/
        sub_772560(v173); /*0x886e10*/
    }
    v174 = a3; /*0x886e15*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x886e1f*/
    NiD3DPass_SetTextureStage(v1, 3u, v174); /*0x886e2c*/
    v175 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886e36*/
    LOBYTE(v424) = 0x3A; /*0x886e43*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v175); /*0x886e48*/
    v176 = v423; /*0x886e4d*/
    LOBYTE(v424) = 1; /*0x886e53*/
    if ( v423 ) /*0x886e58*/
    {
      --v423[7].Unk08; /*0x886e5a*/
      if ( !v176[7].Unk08 ) /*0x886e62*/
        sub_772560(v176); /*0x886e67*/
    }
    v177 = a3; /*0x886e6c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x886e76*/
    NiD3DPass_SetTextureStage(v1, 4u, v177); /*0x886e83*/
    v178 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886e8d*/
    LOBYTE(v424) = 0x3B; /*0x886e9a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v178); /*0x886e9f*/
    v179 = v423; /*0x886ea4*/
    LOBYTE(v424) = 1; /*0x886eaa*/
    if ( v423 ) /*0x886eaf*/
    {
      --v423[7].Unk08; /*0x886eb1*/
      if ( !v179[7].Unk08 ) /*0x886eb9*/
        sub_772560(v179); /*0x886ebe*/
    }
    v180 = (NiD3DTextureStage *)a3; /*0x886ec3*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 2); /*0x886ece*/
    NiD3DTextureStage_SetTexture(v180, (NiTexture *)LODWORD(flt_B43110[0])); /*0x886edf*/
    NiD3DPass_SetTextureStage(v1, 5u, &v180->Stage); /*0x886ee9*/
    v181 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886ef3*/
    LOBYTE(v424) = 0x3C; /*0x886f00*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v181); /*0x886f05*/
    v182 = v423; /*0x886f0a*/
    LOBYTE(v424) = 1; /*0x886f10*/
    if ( v423 ) /*0x886f15*/
    {
      --v423[7].Unk08; /*0x886f17*/
      if ( !v182[7].Unk08 ) /*0x886f1f*/
        sub_772560(v182); /*0x886f24*/
    }
    v183 = a3; /*0x886f29*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x886f33*/
    NiD3DPass_SetTextureStage(v1, 6u, v183); /*0x886f40*/
    v184 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x886f4a*/
    LOBYTE(v424) = 0x3D; /*0x886f57*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v184); /*0x886f5c*/
    v185 = v423; /*0x886f61*/
    LOBYTE(v424) = 1; /*0x886f67*/
    if ( v423 ) /*0x886f6c*/
    {
      --v423[7].Unk08; /*0x886f6e*/
      if ( !v185[7].Unk08 ) /*0x886f76*/
        sub_772560(v185); /*0x886f7b*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x886f80*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 2); /*0x886f8b*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x886f98*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x38]); /*0x886faa*/
  v186 = (NiD3DPixelShader *)sub_883130(0x3Bu); /*0x886fb1*/
  NiD3DPass_SetPixelShader(v1, v186); /*0x886fbc*/
  if ( !v1->RenderStateGroup ) /*0x886fc1*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886fcc*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x886fd8*/
  if ( !v1->RenderStateGroup ) /*0x886fdd*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x886fe8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x886ff4*/
  if ( !v1->RenderStateGroup ) /*0x886ff9*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887004*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x88700f*/
  if ( !v1->RenderStateGroup ) /*0x887014*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88701f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x88702b*/
  if ( !v1->RenderStateGroup ) /*0x887030*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88703b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x887046*/
  if ( !v1->RenderStateGroup ) /*0x88704b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887056*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x887062*/
  v4 = v1 == (NiD3DPass *)unk_B477D8; /*0x887067*/
  v187 = unk_B4442C; /*0x887072*/
  v188 = unk_B4370C; /*0x887078*/
  unk_B43DC8 = unk_B43D9C; /*0x88707e*/
  v189 = unk_B44ABC; /*0x887083*/
  unk_B44458 = v187; /*0x887088*/
  unk_B43738 = v188; /*0x88708e*/
  unk_B44AE8 = v189; /*0x887094*/
  if ( !v4 ) /*0x887099*/
  {
    v4 = v1->RefCount-- == 1; /*0x88709b*/
    if ( v4 ) /*0x88709e*/
      NiD3DPass_ReleaseToPool(v1); /*0x8870a2*/
    v1 = (NiD3DPass *)unk_B477D8; /*0x8870a7*/
    v421 = (NiD3DPassVtbl **)unk_B477D8; /*0x8870af*/
    if ( v421 ) /*0x8870b3*/
      ++v1->RefCount; /*0x8870b5*/
  }
  if ( v1->StageCount < 8 ) /*0x8870be*/
  {
    v190 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8870c9*/
    LOBYTE(v424) = 0x3E; /*0x8870d6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v190); /*0x8870db*/
    v191 = v423; /*0x8870e0*/
    LOBYTE(v424) = 1; /*0x8870e6*/
    if ( v423 ) /*0x8870eb*/
    {
      --v423[7].Unk08; /*0x8870ed*/
      if ( !v191[7].Unk08 ) /*0x8870f5*/
        sub_772560(v191); /*0x8870fa*/
    }
    v192 = a3; /*0x8870ff*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x887109*/
    NiD3DPass_SetTextureStage(v1, 0, v192); /*0x887116*/
    v193 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887120*/
    LOBYTE(v424) = 0x3F; /*0x88712d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v193); /*0x887132*/
    v194 = v423; /*0x887137*/
    LOBYTE(v424) = 1; /*0x88713d*/
    if ( v423 ) /*0x887142*/
    {
      --v423[7].Unk08; /*0x887144*/
      if ( !v194[7].Unk08 ) /*0x88714c*/
        sub_772560(v194); /*0x887151*/
    }
    v195 = a3; /*0x887156*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x88715f*/
    NiD3DPass_SetTextureStage(v1, 1u, v195); /*0x88716b*/
    v196 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887175*/
    LOBYTE(v424) = 0x40; /*0x887182*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v196); /*0x887187*/
    v197 = v423; /*0x88718c*/
    LOBYTE(v424) = 1; /*0x887192*/
    if ( v423 ) /*0x887197*/
    {
      --v423[7].Unk08; /*0x887199*/
      if ( !v197[7].Unk08 ) /*0x8871a1*/
        sub_772560(v197); /*0x8871a6*/
    }
    v198 = a3; /*0x8871ab*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8871b5*/
    NiD3DPass_SetTextureStage(v1, 2u, v198); /*0x8871c2*/
    v199 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8871cc*/
    LOBYTE(v424) = 0x41; /*0x8871d9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v199); /*0x8871de*/
    v200 = v423; /*0x8871e3*/
    LOBYTE(v424) = 1; /*0x8871e9*/
    if ( v423 ) /*0x8871ee*/
    {
      --v423[7].Unk08; /*0x8871f0*/
      if ( !v200[7].Unk08 ) /*0x8871f8*/
        sub_772560(v200); /*0x8871fd*/
    }
    v201 = a3; /*0x887202*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x88720c*/
    NiD3DPass_SetTextureStage(v1, 3u, v201); /*0x887219*/
    v202 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887223*/
    LOBYTE(v424) = 0x42; /*0x887230*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v202); /*0x887235*/
    v203 = v423; /*0x88723a*/
    LOBYTE(v424) = 1; /*0x887240*/
    if ( v423 ) /*0x887245*/
    {
      --v423[7].Unk08; /*0x887247*/
      if ( !v203[7].Unk08 ) /*0x88724f*/
        sub_772560(v203); /*0x887254*/
    }
    v204 = a3; /*0x887259*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x887263*/
    NiD3DPass_SetTextureStage(v1, 4u, v204); /*0x887270*/
    v205 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88727a*/
    LOBYTE(v424) = 0x43; /*0x887287*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v205); /*0x88728c*/
    v206 = v423; /*0x887291*/
    LOBYTE(v424) = 1; /*0x887297*/
    if ( v423 ) /*0x88729c*/
    {
      --v423[7].Unk08; /*0x88729e*/
      if ( !v206[7].Unk08 ) /*0x8872a6*/
        sub_772560(v206); /*0x8872ab*/
    }
    v207 = (NiD3DTextureStage *)a3; /*0x8872b0*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 2); /*0x8872bb*/
    NiD3DTextureStage_SetTexture(v207, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8872cc*/
    NiD3DPass_SetTextureStage(v1, 5u, &v207->Stage); /*0x8872d6*/
    v208 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8872e0*/
    LOBYTE(v424) = 0x44; /*0x8872ed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v208); /*0x8872f2*/
    v209 = v423; /*0x8872f7*/
    LOBYTE(v424) = 1; /*0x8872fd*/
    if ( v423 ) /*0x887302*/
    {
      --v423[7].Unk08; /*0x887304*/
      if ( !v209[7].Unk08 ) /*0x88730c*/
        sub_772560(v209); /*0x887311*/
    }
    v210 = a3; /*0x887316*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x887320*/
    NiD3DPass_SetTextureStage(v1, 6u, v210); /*0x88732d*/
    v211 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887337*/
    LOBYTE(v424) = 0x45; /*0x887344*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v211); /*0x887349*/
    v212 = v423; /*0x88734e*/
    LOBYTE(v424) = 1; /*0x887354*/
    if ( v423 ) /*0x887359*/
    {
      --v423[7].Unk08; /*0x88735b*/
      if ( !v212[7].Unk08 ) /*0x887363*/
        sub_772560(v212); /*0x887368*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x88736d*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 2); /*0x887378*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x887385*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x39]); /*0x887397*/
  v213 = (NiD3DPixelShader *)sub_883130(0x3Eu); /*0x88739e*/
  NiD3DPass_SetPixelShader(v1, v213); /*0x8873a9*/
  if ( !v1->RenderStateGroup ) /*0x8873ae*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8873b9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x8873c5*/
  if ( !v1->RenderStateGroup ) /*0x8873ca*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8873d5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x8873e1*/
  if ( !v1->RenderStateGroup ) /*0x8873e6*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8873f1*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x8873fc*/
  if ( !v1->RenderStateGroup ) /*0x887401*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88740c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x887418*/
  if ( !v1->RenderStateGroup ) /*0x88741d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887428*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x887433*/
  if ( !v1->RenderStateGroup ) /*0x887438*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887443*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x88744f*/
  v4 = v1 == (NiD3DPass *)unk_B477DC; /*0x887454*/
  v214 = unk_B44460; /*0x887460*/
  v215 = unk_B43740; /*0x887465*/
  unk_B43E00 = unk_B43DD0; /*0x88746b*/
  v216 = unk_B44AF0; /*0x887471*/
  unk_B44490 = v214; /*0x887477*/
  unk_B43770 = v215; /*0x88747c*/
  unk_B44B20 = v216; /*0x887482*/
  if ( !v4 ) /*0x887488*/
  {
    v4 = v1->RefCount-- == 1; /*0x88748a*/
    if ( v4 ) /*0x88748d*/
      NiD3DPass_ReleaseToPool(v1); /*0x887491*/
    v1 = (NiD3DPass *)unk_B477DC; /*0x887496*/
    v421 = (NiD3DPassVtbl **)unk_B477DC; /*0x88749e*/
    if ( v421 ) /*0x8874a2*/
      ++v1->RefCount; /*0x8874a4*/
  }
  if ( v1->StageCount < 8 ) /*0x8874ad*/
  {
    v217 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8874b8*/
    LOBYTE(v424) = 0x46; /*0x8874c5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v217); /*0x8874ca*/
    v218 = v423; /*0x8874cf*/
    LOBYTE(v424) = 1; /*0x8874d5*/
    if ( v423 ) /*0x8874da*/
    {
      --v423[7].Unk08; /*0x8874dc*/
      if ( !v218[7].Unk08 ) /*0x8874e4*/
        sub_772560(v218); /*0x8874e9*/
    }
    v219 = a3; /*0x8874ee*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8874f8*/
    NiD3DPass_SetTextureStage(v1, 0, v219); /*0x887505*/
    v220 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88750f*/
    LOBYTE(v424) = 0x47; /*0x88751c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v220); /*0x887521*/
    v221 = v423; /*0x887526*/
    LOBYTE(v424) = 1; /*0x88752c*/
    if ( v423 ) /*0x887531*/
    {
      --v423[7].Unk08; /*0x887533*/
      if ( !v221[7].Unk08 ) /*0x88753b*/
        sub_772560(v221); /*0x887540*/
    }
    v222 = a3; /*0x887545*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x88754e*/
    NiD3DPass_SetTextureStage(v1, 1u, v222); /*0x88755a*/
    v223 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887564*/
    LOBYTE(v424) = 0x48; /*0x887571*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v223); /*0x887576*/
    v224 = v423; /*0x88757b*/
    LOBYTE(v424) = 1; /*0x887581*/
    if ( v423 ) /*0x887586*/
    {
      --v423[7].Unk08; /*0x887588*/
      if ( !v224[7].Unk08 ) /*0x887590*/
        sub_772560(v224); /*0x887595*/
    }
    v225 = a3; /*0x88759a*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8875a4*/
    NiD3DPass_SetTextureStage(v1, 2u, v225); /*0x8875b1*/
    v226 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8875bb*/
    LOBYTE(v424) = 0x49; /*0x8875c8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v226); /*0x8875cd*/
    v227 = v423; /*0x8875d2*/
    LOBYTE(v424) = 1; /*0x8875d8*/
    if ( v423 ) /*0x8875dd*/
    {
      --v423[7].Unk08; /*0x8875df*/
      if ( !v227[7].Unk08 ) /*0x8875e7*/
        sub_772560(v227); /*0x8875ec*/
    }
    v228 = a3; /*0x8875f1*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8875fb*/
    NiD3DPass_SetTextureStage(v1, 3u, v228); /*0x887608*/
    v229 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887612*/
    LOBYTE(v424) = 0x4A; /*0x88761f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v229); /*0x887624*/
    v230 = v423; /*0x887629*/
    LOBYTE(v424) = 1; /*0x88762f*/
    if ( v423 ) /*0x887634*/
    {
      --v423[7].Unk08; /*0x887636*/
      if ( !v230[7].Unk08 ) /*0x88763e*/
        sub_772560(v230); /*0x887643*/
    }
    v231 = a3; /*0x887648*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x887652*/
    NiD3DPass_SetTextureStage(v1, 4u, v231); /*0x88765f*/
    v232 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887669*/
    LOBYTE(v424) = 0x4B; /*0x887676*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v232); /*0x88767b*/
    v233 = v423; /*0x887680*/
    LOBYTE(v424) = 1; /*0x887686*/
    if ( v423 ) /*0x88768b*/
    {
      --v423[7].Unk08; /*0x88768d*/
      if ( !v233[7].Unk08 ) /*0x887695*/
        sub_772560(v233); /*0x88769a*/
    }
    v234 = (NiD3DTextureStage *)a3; /*0x88769f*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 2); /*0x8876aa*/
    NiD3DTextureStage_SetTexture(v234, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8876ba*/
    NiD3DPass_SetTextureStage(v1, 5u, &v234->Stage); /*0x8876c4*/
    v235 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8876ce*/
    LOBYTE(v424) = 0x4C; /*0x8876db*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v235); /*0x8876e0*/
    v236 = v423; /*0x8876e5*/
    LOBYTE(v424) = 1; /*0x8876eb*/
    if ( v423 ) /*0x8876f0*/
    {
      --v423[7].Unk08; /*0x8876f2*/
      if ( !v236[7].Unk08 ) /*0x8876fa*/
        sub_772560(v236); /*0x8876ff*/
    }
    v237 = a3; /*0x887704*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x88770e*/
    NiD3DPass_SetTextureStage(v1, 6u, v237); /*0x88771b*/
    v238 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887725*/
    LOBYTE(v424) = 0x4D; /*0x887732*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v238); /*0x887737*/
    v239 = v423; /*0x88773c*/
    LOBYTE(v424) = 1; /*0x887742*/
    if ( v423 ) /*0x887747*/
    {
      --v423[7].Unk08; /*0x887749*/
      if ( !v239[7].Unk08 ) /*0x887751*/
        sub_772560(v239); /*0x887756*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x88775b*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 2); /*0x887766*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x887773*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x3A]); /*0x887785*/
  v240 = (NiD3DPixelShader *)sub_883130(0x41u); /*0x88778c*/
  NiD3DPass_SetPixelShader(v1, v240); /*0x887797*/
  if ( !v1->RenderStateGroup ) /*0x88779c*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8877a7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x8877b3*/
  if ( !v1->RenderStateGroup ) /*0x8877b8*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8877c3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x8877cf*/
  if ( !v1->RenderStateGroup ) /*0x8877d4*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8877df*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x8877ea*/
  if ( !v1->RenderStateGroup ) /*0x8877ef*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8877fa*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x887806*/
  if ( !v1->RenderStateGroup ) /*0x88780b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887816*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x887821*/
  if ( !v1->RenderStateGroup ) /*0x887826*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887831*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x88783d*/
  v4 = v1 == (NiD3DPass *)unk_B477E0; /*0x887842*/
  v241 = unk_B44494; /*0x88784e*/
  v242 = unk_B43774; /*0x887854*/
  unk_B43E34 = unk_B43E04; /*0x887859*/
  v243 = unk_B44B24; /*0x88785f*/
  unk_B444C4 = v241; /*0x887865*/
  unk_B437A4 = v242; /*0x88786b*/
  unk_B44B54 = v243; /*0x887870*/
  if ( !v4 ) /*0x887876*/
  {
    v4 = v1->RefCount-- == 1; /*0x887878*/
    if ( v4 ) /*0x88787b*/
      NiD3DPass_ReleaseToPool(v1); /*0x88787f*/
    v1 = (NiD3DPass *)unk_B477E0; /*0x887884*/
    v421 = (NiD3DPassVtbl **)unk_B477E0; /*0x88788c*/
    if ( v421 ) /*0x887890*/
      ++v1->RefCount; /*0x887892*/
  }
  if ( v1->StageCount < 8 ) /*0x88789b*/
  {
    v244 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8878a6*/
    LOBYTE(v424) = 0x4E; /*0x8878b3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v244); /*0x8878b8*/
    v245 = v423; /*0x8878bd*/
    LOBYTE(v424) = 1; /*0x8878c3*/
    if ( v423 ) /*0x8878c8*/
    {
      --v423[7].Unk08; /*0x8878ca*/
      if ( !v245[7].Unk08 ) /*0x8878d2*/
        sub_772560(v245); /*0x8878d7*/
    }
    v246 = a3; /*0x8878dc*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8878e6*/
    NiD3DPass_SetTextureStage(v1, 0, v246); /*0x8878f3*/
    v247 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8878fd*/
    LOBYTE(v424) = 0x4F; /*0x88790a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v247); /*0x88790f*/
    v248 = v423; /*0x887914*/
    LOBYTE(v424) = 1; /*0x88791a*/
    if ( v423 ) /*0x88791f*/
    {
      --v423[7].Unk08; /*0x887921*/
      if ( !v248[7].Unk08 ) /*0x887929*/
        sub_772560(v248); /*0x88792e*/
    }
    v249 = a3; /*0x887933*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x88793c*/
    NiD3DPass_SetTextureStage(v1, 1u, v249); /*0x887948*/
    v250 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887952*/
    LOBYTE(v424) = 0x50; /*0x88795f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v250); /*0x887964*/
    v251 = v423; /*0x887969*/
    LOBYTE(v424) = 1; /*0x88796f*/
    if ( v423 ) /*0x887974*/
    {
      --v423[7].Unk08; /*0x887976*/
      if ( !v251[7].Unk08 ) /*0x88797e*/
        sub_772560(v251); /*0x887983*/
    }
    v252 = a3; /*0x887988*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x887992*/
    NiD3DPass_SetTextureStage(v1, 2u, v252); /*0x88799f*/
    v253 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8879a9*/
    LOBYTE(v424) = 0x51; /*0x8879b6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v253); /*0x8879bb*/
    v254 = v423; /*0x8879c0*/
    LOBYTE(v424) = 1; /*0x8879c6*/
    if ( v423 ) /*0x8879cb*/
    {
      --v423[7].Unk08; /*0x8879cd*/
      if ( !v254[7].Unk08 ) /*0x8879d5*/
        sub_772560(v254); /*0x8879da*/
    }
    v255 = a3; /*0x8879df*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8879e9*/
    NiD3DPass_SetTextureStage(v1, 3u, v255); /*0x8879f6*/
    v256 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887a00*/
    LOBYTE(v424) = 0x52; /*0x887a0d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v256); /*0x887a12*/
    v257 = v423; /*0x887a17*/
    LOBYTE(v424) = 1; /*0x887a1d*/
    if ( v423 ) /*0x887a22*/
    {
      --v423[7].Unk08; /*0x887a24*/
      if ( !v257[7].Unk08 ) /*0x887a2c*/
        sub_772560(v257); /*0x887a31*/
    }
    v258 = a3; /*0x887a36*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x887a40*/
    NiD3DPass_SetTextureStage(v1, 4u, v258); /*0x887a4d*/
    v259 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887a57*/
    LOBYTE(v424) = 0x53; /*0x887a64*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v259); /*0x887a69*/
    v260 = v423; /*0x887a6e*/
    LOBYTE(v424) = 1; /*0x887a74*/
    if ( v423 ) /*0x887a79*/
    {
      --v423[7].Unk08; /*0x887a7b*/
      if ( !v260[7].Unk08 ) /*0x887a83*/
        sub_772560(v260); /*0x887a88*/
    }
    v261 = (NiD3DTextureStage *)a3; /*0x887a8d*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 2); /*0x887a98*/
    NiD3DTextureStage_SetTexture(v261, (NiTexture *)LODWORD(flt_B43110[0])); /*0x887aa9*/
    NiD3DPass_SetTextureStage(v1, 5u, &v261->Stage); /*0x887ab3*/
    v262 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887abd*/
    LOBYTE(v424) = 0x54; /*0x887aca*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v262); /*0x887acf*/
    v263 = v423; /*0x887ad4*/
    LOBYTE(v424) = 1; /*0x887ada*/
    if ( v423 ) /*0x887adf*/
    {
      --v423[7].Unk08; /*0x887ae1*/
      if ( !v263[7].Unk08 ) /*0x887ae9*/
        sub_772560(v263); /*0x887aee*/
    }
    v264 = a3; /*0x887af3*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x887afd*/
    NiD3DPass_SetTextureStage(v1, 6u, v264); /*0x887b0a*/
    v265 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887b14*/
    LOBYTE(v424) = 0x55; /*0x887b21*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v265); /*0x887b26*/
    v266 = v423; /*0x887b2b*/
    LOBYTE(v424) = 1; /*0x887b31*/
    if ( v423 ) /*0x887b36*/
    {
      --v423[7].Unk08; /*0x887b38*/
      if ( !v266[7].Unk08 ) /*0x887b40*/
        sub_772560(v266); /*0x887b45*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x887b4a*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 2); /*0x887b55*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x887b62*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x3B]); /*0x887b74*/
  v267 = (NiD3DPixelShader *)sub_883130(0x44u); /*0x887b7b*/
  NiD3DPass_SetPixelShader(v1, v267); /*0x887b86*/
  if ( !v1->RenderStateGroup ) /*0x887b8b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887b96*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x887ba2*/
  if ( !v1->RenderStateGroup ) /*0x887ba7*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887bb2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x887bbe*/
  if ( !v1->RenderStateGroup ) /*0x887bc3*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887bce*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x887bd9*/
  if ( !v1->RenderStateGroup ) /*0x887bde*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887be9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x887bf5*/
  if ( !v1->RenderStateGroup ) /*0x887bfa*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887c05*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x887c10*/
  if ( !v1->RenderStateGroup ) /*0x887c15*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887c20*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x887c2c*/
  v4 = v1 == (NiD3DPass *)unk_B477E4; /*0x887c31*/
  v268 = unk_B444C8; /*0x887c3c*/
  v269 = unk_B437A8; /*0x887c42*/
  unk_B43E68 = unk_B43E38; /*0x887c48*/
  v270 = unk_B44B58; /*0x887c4d*/
  unk_B444F8 = v268; /*0x887c52*/
  unk_B437D8 = v269; /*0x887c58*/
  unk_B44B88 = v270; /*0x887c5e*/
  if ( !v4 ) /*0x887c63*/
  {
    v4 = v1->RefCount-- == 1; /*0x887c65*/
    if ( v4 ) /*0x887c68*/
      NiD3DPass_ReleaseToPool(v1); /*0x887c6c*/
    v1 = (NiD3DPass *)unk_B477E4; /*0x887c71*/
    v421 = (NiD3DPassVtbl **)unk_B477E4; /*0x887c79*/
    if ( v421 ) /*0x887c7d*/
      ++v1->RefCount; /*0x887c7f*/
  }
  if ( v1->StageCount < 8 ) /*0x887c88*/
  {
    v271 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887c93*/
    LOBYTE(v424) = 0x56; /*0x887ca0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v271); /*0x887ca5*/
    v272 = v423; /*0x887caa*/
    LOBYTE(v424) = 1; /*0x887cb0*/
    if ( v423 ) /*0x887cb5*/
    {
      --v423[7].Unk08; /*0x887cb7*/
      if ( !v272[7].Unk08 ) /*0x887cbf*/
        sub_772560(v272); /*0x887cc4*/
    }
    v273 = a3; /*0x887cc9*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x887cd3*/
    NiD3DPass_SetTextureStage(v1, 0, v273); /*0x887ce0*/
    v274 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887cea*/
    LOBYTE(v424) = 0x57; /*0x887cf7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v274); /*0x887cfc*/
    v275 = v423; /*0x887d01*/
    LOBYTE(v424) = 1; /*0x887d07*/
    if ( v423 ) /*0x887d0c*/
    {
      --v423[7].Unk08; /*0x887d0e*/
      if ( !v275[7].Unk08 ) /*0x887d16*/
        sub_772560(v275); /*0x887d1b*/
    }
    v276 = a3; /*0x887d20*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x887d29*/
    NiD3DPass_SetTextureStage(v1, 1u, v276); /*0x887d35*/
    v277 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887d3f*/
    LOBYTE(v424) = 0x58; /*0x887d4c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v277); /*0x887d51*/
    v278 = v423; /*0x887d56*/
    LOBYTE(v424) = 1; /*0x887d5c*/
    if ( v423 ) /*0x887d61*/
    {
      --v423[7].Unk08; /*0x887d63*/
      if ( !v278[7].Unk08 ) /*0x887d6b*/
        sub_772560(v278); /*0x887d70*/
    }
    v279 = a3; /*0x887d75*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x887d7f*/
    NiD3DPass_SetTextureStage(v1, 2u, v279); /*0x887d8c*/
    v280 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887d96*/
    LOBYTE(v424) = 0x59; /*0x887da3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v280); /*0x887da8*/
    v281 = v423; /*0x887dad*/
    LOBYTE(v424) = 1; /*0x887db3*/
    if ( v423 ) /*0x887db8*/
    {
      --v423[7].Unk08; /*0x887dba*/
      if ( !v281[7].Unk08 ) /*0x887dc2*/
        sub_772560(v281); /*0x887dc7*/
    }
    v282 = a3; /*0x887dcc*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x887dd6*/
    NiD3DPass_SetTextureStage(v1, 3u, v282); /*0x887de3*/
    v283 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887ded*/
    LOBYTE(v424) = 0x5A; /*0x887dfa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v283); /*0x887dff*/
    v284 = v423; /*0x887e04*/
    LOBYTE(v424) = 1; /*0x887e0a*/
    if ( v423 ) /*0x887e0f*/
    {
      --v423[7].Unk08; /*0x887e11*/
      if ( !v284[7].Unk08 ) /*0x887e19*/
        sub_772560(v284); /*0x887e1e*/
    }
    v285 = a3; /*0x887e23*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x887e2d*/
    NiD3DPass_SetTextureStage(v1, 4u, v285); /*0x887e3a*/
    v286 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887e44*/
    LOBYTE(v424) = 0x5B; /*0x887e51*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v286); /*0x887e56*/
    v287 = v423; /*0x887e5b*/
    LOBYTE(v424) = 1; /*0x887e61*/
    if ( v423 ) /*0x887e66*/
    {
      --v423[7].Unk08; /*0x887e68*/
      if ( !v287[7].Unk08 ) /*0x887e70*/
        sub_772560(v287); /*0x887e75*/
    }
    v288 = (NiD3DTextureStage *)a3; /*0x887e7a*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 2); /*0x887e85*/
    NiD3DTextureStage_SetTexture(v288, (NiTexture *)LODWORD(flt_B43110[0])); /*0x887e96*/
    NiD3DPass_SetTextureStage(v1, 5u, &v288->Stage); /*0x887ea0*/
    v289 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887eaa*/
    LOBYTE(v424) = 0x5C; /*0x887eb7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v289); /*0x887ebc*/
    v290 = v423; /*0x887ec1*/
    LOBYTE(v424) = 1; /*0x887ec7*/
    if ( v423 ) /*0x887ecc*/
    {
      --v423[7].Unk08; /*0x887ece*/
      if ( !v290[7].Unk08 ) /*0x887ed6*/
        sub_772560(v290); /*0x887edb*/
    }
    v291 = a3; /*0x887ee0*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x887eea*/
    NiD3DPass_SetTextureStage(v1, 6u, v291); /*0x887ef7*/
    v292 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x887f01*/
    LOBYTE(v424) = 0x5D; /*0x887f0e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v292); /*0x887f13*/
    v293 = v423; /*0x887f18*/
    LOBYTE(v424) = 1; /*0x887f1e*/
    if ( v423 ) /*0x887f23*/
    {
      --v423[7].Unk08; /*0x887f25*/
      if ( !v293[7].Unk08 ) /*0x887f2d*/
        sub_772560(v293); /*0x887f32*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x887f37*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 2); /*0x887f42*/
    NiD3DPass_SetTextureStage(v1, 7u, &v2->Stage); /*0x887f4f*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x3C]); /*0x887f61*/
  v294 = (NiD3DPixelShader *)sub_883130(0x47u); /*0x887f68*/
  NiD3DPass_SetPixelShader(v1, v294); /*0x887f73*/
  if ( !v1->RenderStateGroup ) /*0x887f78*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887f83*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 0, 0); /*0x887f8f*/
  if ( !v1->RenderStateGroup ) /*0x887f94*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887f9f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x887fab*/
  if ( !v1->RenderStateGroup ) /*0x887fb0*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887fbb*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x887fc6*/
  if ( !v1->RenderStateGroup ) /*0x887fcb*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887fd6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 4, 0); /*0x887fe2*/
  if ( !v1->RenderStateGroup ) /*0x887fe7*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x887ff2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 1, 0); /*0x887ffd*/
  if ( !v1->RenderStateGroup ) /*0x888002*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88800d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x888019*/
  v4 = v1 == (NiD3DPass *)unk_B477E8; /*0x88801e*/
  v295 = unk_B444FC; /*0x88802a*/
  v296 = unk_B437DC; /*0x88802f*/
  unk_B43E9C = unk_B43E6C; /*0x888035*/
  v297 = unk_B44B8C; /*0x88803b*/
  unk_B4452C = v295; /*0x888041*/
  unk_B4380C = v296; /*0x888046*/
  unk_B44BBC = v297; /*0x88804c*/
  if ( !v4 ) /*0x888052*/
  {
    v4 = v1->RefCount-- == 1; /*0x888054*/
    if ( v4 ) /*0x888057*/
      NiD3DPass_ReleaseToPool(v1); /*0x88805b*/
    v1 = (NiD3DPass *)unk_B477E8; /*0x888060*/
    v421 = (NiD3DPassVtbl **)unk_B477E8; /*0x888068*/
    if ( v421 ) /*0x88806c*/
      ++v1->RefCount; /*0x88806e*/
  }
  if ( v1->StageCount < 4 ) /*0x888075*/
  {
    v298 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888080*/
    LOBYTE(v424) = 0x5E; /*0x88808d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v298); /*0x888092*/
    v299 = v423; /*0x888097*/
    LOBYTE(v424) = 1; /*0x88809d*/
    if ( v423 ) /*0x8880a2*/
    {
      --v423[7].Unk08; /*0x8880a4*/
      if ( !v299[7].Unk08 ) /*0x8880ac*/
        sub_772560(v299); /*0x8880b1*/
    }
    v300 = a3; /*0x8880b6*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8880c0*/
    NiD3DPass_SetTextureStage(v1, 0, v300); /*0x8880cd*/
    v301 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8880d7*/
    LOBYTE(v424) = 0x5F; /*0x8880e4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v301); /*0x8880e9*/
    v302 = v423; /*0x8880ee*/
    LOBYTE(v424) = 1; /*0x8880f4*/
    if ( v423 ) /*0x8880f9*/
    {
      --v423[7].Unk08; /*0x8880fb*/
      if ( !v302[7].Unk08 ) /*0x888103*/
        sub_772560(v302); /*0x888108*/
    }
    v303 = a3; /*0x88810d*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x888116*/
    NiD3DPass_SetTextureStage(v1, 1u, v303); /*0x888122*/
    v304 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88812c*/
    LOBYTE(v424) = 0x60; /*0x888139*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v304); /*0x88813e*/
    v305 = v423; /*0x888143*/
    LOBYTE(v424) = 1; /*0x888149*/
    if ( v423 ) /*0x88814e*/
    {
      --v423[7].Unk08; /*0x888150*/
      if ( !v305[7].Unk08 ) /*0x888158*/
        sub_772560(v305); /*0x88815d*/
    }
    v306 = a3; /*0x888162*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x88816c*/
    NiD3DPass_SetTextureStage(v1, 2u, v306); /*0x888179*/
    v307 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888183*/
    LOBYTE(v424) = 0x61; /*0x888190*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v307); /*0x888195*/
    v308 = v423; /*0x88819a*/
    LOBYTE(v424) = 1; /*0x8881a0*/
    if ( v423 ) /*0x8881a5*/
    {
      --v423[7].Unk08; /*0x8881a7*/
      if ( !v308[7].Unk08 ) /*0x8881af*/
        sub_772560(v308); /*0x8881b4*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8881bf*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8881c6*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 2); /*0x8881d2*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x8881df*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x3D]); /*0x8881f1*/
  v309 = (NiD3DPixelShader *)sub_883130(0x52u); /*0x8881f8*/
  NiD3DPass_SetPixelShader(v1, v309); /*0x888203*/
  if ( !v1->RenderStateGroup ) /*0x888208*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888213*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x88821e*/
  if ( !v1->RenderStateGroup ) /*0x888223*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88822e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0); /*0x88823a*/
  if ( !v1->RenderStateGroup ) /*0x88823f*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88824a*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0); /*0x888256*/
  if ( !v1->RenderStateGroup ) /*0x88825b*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888266*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x888272*/
  if ( !v1->RenderStateGroup ) /*0x888277*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888282*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x88828d*/
  if ( !v1->RenderStateGroup ) /*0x888292*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88829d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x8882a9*/
  if ( !v1->RenderStateGroup ) /*0x8882ae*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8882b9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x8882c5*/
  if ( !v1->RenderStateGroup ) /*0x8882ca*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8882d5*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x8882e1*/
  v4 = v1 == (NiD3DPass *)unk_B477EC; /*0x8882e6*/
  v310 = unk_B44550; /*0x8882f1*/
  v311 = unk_B43830; /*0x8882f7*/
  unk_B43ED8 = unk_B43EC0; /*0x8882fd*/
  v312 = unk_B44BE0; /*0x888302*/
  unk_B44568 = v310; /*0x888307*/
  unk_B43848 = v311; /*0x88830d*/
  unk_B44BF8 = v312; /*0x888313*/
  if ( !v4 ) /*0x888318*/
  {
    v4 = v1->RefCount-- == 1; /*0x88831a*/
    if ( v4 ) /*0x88831d*/
      NiD3DPass_ReleaseToPool(v1); /*0x888321*/
    v1 = (NiD3DPass *)unk_B477EC; /*0x888326*/
    v421 = (NiD3DPassVtbl **)unk_B477EC; /*0x88832e*/
    if ( v421 ) /*0x888332*/
      ++v1->RefCount; /*0x888334*/
  }
  if ( v1->StageCount < 4 ) /*0x88833b*/
  {
    v313 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888346*/
    LOBYTE(v424) = 0x62; /*0x888353*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v313); /*0x888358*/
    v314 = v423; /*0x88835d*/
    LOBYTE(v424) = 1; /*0x888363*/
    if ( v423 ) /*0x888368*/
    {
      --v423[7].Unk08; /*0x88836a*/
      if ( !v314[7].Unk08 ) /*0x888372*/
        sub_772560(v314); /*0x888377*/
    }
    v315 = a3; /*0x88837c*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x888386*/
    NiD3DPass_SetTextureStage(v1, 0, v315); /*0x888393*/
    v316 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88839d*/
    LOBYTE(v424) = 0x63; /*0x8883aa*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v316); /*0x8883af*/
    v317 = v423; /*0x8883b4*/
    LOBYTE(v424) = 1; /*0x8883ba*/
    if ( v423 ) /*0x8883bf*/
    {
      --v423[7].Unk08; /*0x8883c1*/
      if ( !v317[7].Unk08 ) /*0x8883c9*/
        sub_772560(v317); /*0x8883ce*/
    }
    v318 = a3; /*0x8883d3*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8883dc*/
    NiD3DPass_SetTextureStage(v1, 1u, v318); /*0x8883e8*/
    v319 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8883f2*/
    LOBYTE(v424) = 0x64; /*0x8883ff*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v319); /*0x888404*/
    v320 = v423; /*0x888409*/
    LOBYTE(v424) = 1; /*0x88840f*/
    if ( v423 ) /*0x888414*/
    {
      --v423[7].Unk08; /*0x888416*/
      if ( !v320[7].Unk08 ) /*0x88841e*/
        sub_772560(v320); /*0x888423*/
    }
    v321 = a3; /*0x888428*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x888432*/
    NiD3DPass_SetTextureStage(v1, 2u, v321); /*0x88843f*/
    v322 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888449*/
    LOBYTE(v424) = 0x65; /*0x888456*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v322); /*0x88845b*/
    v323 = v423; /*0x888460*/
    LOBYTE(v424) = 1; /*0x888466*/
    if ( v423 ) /*0x88846b*/
    {
      --v423[7].Unk08; /*0x88846d*/
      if ( !v323[7].Unk08 ) /*0x888475*/
        sub_772560(v323); /*0x88847a*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x888485*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiTexture *)LODWORD(flt_B43110[0])); /*0x88848c*/
    BSShader_ConfigureTextureStageSampler(v2, 3, 3, 2); /*0x888498*/
    NiD3DPass_SetTextureStage(v1, 3u, &v2->Stage); /*0x8884a5*/
  }
  NiD3DPass_SetVertexShader(v1, (NiD3DVertexShader *)v422[0x3E]); /*0x8884b7*/
  v324 = (NiD3DPixelShader *)sub_883130(0x53u); /*0x8884be*/
  NiD3DPass_SetPixelShader(v1, v324); /*0x8884c9*/
  if ( !v1->RenderStateGroup ) /*0x8884ce*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8884d9*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x1B, 1, 0); /*0x8884e4*/
  if ( !v1->RenderStateGroup ) /*0x8884e9*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8884f4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x13, 2, 0); /*0x888500*/
  if ( !v1->RenderStateGroup ) /*0x888505*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888510*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x14, 2, 0); /*0x88851c*/
  if ( !v1->RenderStateGroup ) /*0x888521*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88852c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xF, 0, 0); /*0x888538*/
  if ( !v1->RenderStateGroup ) /*0x88853d*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888548*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 7, 1, 0); /*0x888553*/
  if ( !v1->RenderStateGroup ) /*0x888558*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888563*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x17, 3, 0); /*0x88856f*/
  if ( !v1->RenderStateGroup ) /*0x888574*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88857f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0xE, 0, 0); /*0x88858b*/
  if ( !v1->RenderStateGroup ) /*0x888590*/
    v1->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88859b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v1->RenderStateGroup, 0x34, 0, 0); /*0x8885a7*/
  v325 = unk_B44588; /*0x8885b2*/
  v326 = unk_B43868; /*0x8885b8*/
  unk_B43F10 = unk_B43EF8; /*0x8885bd*/
  unk_B44C30 = unk_B44C18; /*0x8885c9*/
  unk_B445A0 = v325; /*0x8885d8*/
  unk_B43880 = v326; /*0x8885de*/
  sub_76C890((NiD3DPass **)&v421, &dword_B477F0); /*0x8885e3*/
  v327 = (NiD3DPass *)v421; /*0x8885e8*/
  if ( (unsigned int)v421[6] < 6 ) /*0x8885f0*/
  {
    v328 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8885fb*/
    LOBYTE(v424) = 0x66; /*0x888608*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v328); /*0x88860d*/
    v329 = v423; /*0x888612*/
    LOBYTE(v424) = 1; /*0x888618*/
    if ( v423 ) /*0x88861d*/
    {
      --v423[7].Unk08; /*0x88861f*/
      if ( !v329[7].Unk08 ) /*0x888627*/
        sub_772560(v329); /*0x88862c*/
    }
    v330 = a3; /*0x888631*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x88863b*/
    NiD3DPass_SetTextureStage(v327, v327->CurrentStage, v330); /*0x88864a*/
    v331 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888654*/
    LOBYTE(v424) = 0x67; /*0x888661*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v331); /*0x888666*/
    v332 = v423; /*0x88866b*/
    LOBYTE(v424) = 1; /*0x888671*/
    if ( v423 ) /*0x888676*/
    {
      --v423[7].Unk08; /*0x888678*/
      if ( !v332[7].Unk08 ) /*0x888680*/
        sub_772560(v332); /*0x888685*/
    }
    v333 = a3; /*0x88868a*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x888693*/
    NiD3DPass_SetTextureStage(v327, 1u, v333); /*0x88869f*/
    v334 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8886a9*/
    LOBYTE(v424) = 0x68; /*0x8886b6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v334); /*0x8886bb*/
    v335 = v423; /*0x8886c0*/
    LOBYTE(v424) = 1; /*0x8886c6*/
    if ( v423 ) /*0x8886cb*/
    {
      --v423[7].Unk08; /*0x8886cd*/
      if ( !v335[7].Unk08 ) /*0x8886d5*/
        sub_772560(v335); /*0x8886da*/
    }
    v336 = a3; /*0x8886df*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8886e9*/
    NiD3DPass_SetTextureStage(v327, 2u, v336); /*0x8886f6*/
    v337 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888700*/
    LOBYTE(v424) = 0x69; /*0x88870d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v337); /*0x888712*/
    v338 = v423; /*0x888717*/
    LOBYTE(v424) = 1; /*0x88871d*/
    if ( v423 ) /*0x888722*/
    {
      --v423[7].Unk08; /*0x888724*/
      if ( !v338[7].Unk08 ) /*0x88872c*/
        sub_772560(v338); /*0x888731*/
    }
    v339 = a3; /*0x88873c*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiTexture *)LODWORD(flt_B43110[0])); /*0x888743*/
    BSShader_ConfigureTextureStageSampler(v339, 3, 3, 2); /*0x88874f*/
    NiD3DPass_SetTextureStage(v327, 3u, v339); /*0x88875c*/
    v340 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888766*/
    LOBYTE(v424) = 0x6A; /*0x888773*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v340); /*0x888778*/
    v341 = v423; /*0x88877d*/
    LOBYTE(v424) = 1; /*0x888783*/
    if ( v423 ) /*0x888788*/
    {
      --v423[7].Unk08; /*0x88878a*/
      if ( !v341[7].Unk08 ) /*0x888792*/
        sub_772560(v341); /*0x888797*/
    }
    v342 = a3; /*0x88879c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8887a6*/
    NiD3DPass_SetTextureStage(v327, 4u, v342); /*0x8887b3*/
    v343 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8887bd*/
    LOBYTE(v424) = 0x6B; /*0x8887ca*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v343); /*0x8887cf*/
    v344 = v423; /*0x8887d4*/
    LOBYTE(v424) = 1; /*0x8887da*/
    if ( v423 ) /*0x8887df*/
    {
      --v423[7].Unk08; /*0x8887e1*/
      if ( !v344[7].Unk08 ) /*0x8887e9*/
        sub_772560(v344); /*0x8887ee*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8887f3*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x8887fd*/
    NiD3DPass_SetTextureStage(v327, 5u, &v2->Stage); /*0x88880a*/
  }
  NiD3DPass_SetVertexShader(v327, (NiD3DVertexShader *)v422[0x3F]); /*0x88881c*/
  v345 = (NiD3DPixelShader *)sub_883130(0x54u); /*0x888823*/
  NiD3DPass_SetPixelShader(v327, v345); /*0x88882e*/
  if ( !v327->RenderStateGroup ) /*0x888833*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88883e*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 0x1B, 1, 0); /*0x888849*/
  if ( !v327->RenderStateGroup ) /*0x88884e*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888859*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 0x13, 2, 0); /*0x888865*/
  if ( !v327->RenderStateGroup ) /*0x88886a*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888875*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 0x14, 2, 0); /*0x888881*/
  if ( !v327->RenderStateGroup ) /*0x888886*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888891*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 0xF, 0, 0); /*0x88889d*/
  if ( !v327->RenderStateGroup ) /*0x8888a2*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8888ad*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 7, 1, 0); /*0x8888b8*/
  if ( !v327->RenderStateGroup ) /*0x8888bd*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8888c8*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 0x17, 3, 0); /*0x8888d4*/
  if ( !v327->RenderStateGroup ) /*0x8888d9*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8888e4*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 0xE, 0, 0); /*0x8888f0*/
  if ( !v327->RenderStateGroup ) /*0x8888f5*/
    v327->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888900*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v327->RenderStateGroup, 0x34, 0, 0); /*0x88890c*/
  v346 = unk_B438E4; /*0x888917*/
  v347 = unk_B44604; /*0x88891d*/
  unk_B43F8C = unk_B43F74; /*0x888922*/
  v348 = unk_B44C94; /*0x888928*/
  unk_B438FC = v346; /*0x88892e*/
  unk_B4461C = v347; /*0x88893d*/
  unk_B44CAC = v348; /*0x888942*/
  sub_76C890((NiD3DPass **)&v421, &dword_B477F4); /*0x888948*/
  v349 = (NiD3DPass *)v421; /*0x88894d*/
  if ( (unsigned int)v421[6] < 6 ) /*0x888955*/
  {
    v350 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888960*/
    LOBYTE(v424) = 0x6C; /*0x88896d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v350); /*0x888972*/
    v351 = v423; /*0x888977*/
    LOBYTE(v424) = 1; /*0x88897d*/
    if ( v423 ) /*0x888982*/
    {
      --v423[7].Unk08; /*0x888984*/
      if ( !v351[7].Unk08 ) /*0x88898c*/
        sub_772560(v351); /*0x888991*/
    }
    v352 = a3; /*0x888996*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8889a0*/
    NiD3DPass_SetTextureStage(v349, v349->CurrentStage, v352); /*0x8889af*/
    v353 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8889b9*/
    LOBYTE(v424) = 0x6D; /*0x8889c6*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v353); /*0x8889cb*/
    v354 = v423; /*0x8889d0*/
    LOBYTE(v424) = 1; /*0x8889d6*/
    if ( v423 ) /*0x8889db*/
    {
      --v423[7].Unk08; /*0x8889dd*/
      if ( !v354[7].Unk08 ) /*0x8889e5*/
        sub_772560(v354); /*0x8889ea*/
    }
    v355 = a3; /*0x8889ef*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8889f8*/
    NiD3DPass_SetTextureStage(v349, 1u, v355); /*0x888a04*/
    v356 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888a0e*/
    LOBYTE(v424) = 0x6E; /*0x888a1b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v356); /*0x888a20*/
    v357 = v423; /*0x888a25*/
    LOBYTE(v424) = 1; /*0x888a2b*/
    if ( v423 ) /*0x888a30*/
    {
      --v423[7].Unk08; /*0x888a32*/
      if ( !v357[7].Unk08 ) /*0x888a3a*/
        sub_772560(v357); /*0x888a3f*/
    }
    v358 = a3; /*0x888a44*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x888a4e*/
    NiD3DPass_SetTextureStage(v349, 2u, v358); /*0x888a5b*/
    v359 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888a65*/
    LOBYTE(v424) = 0x6F; /*0x888a72*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v359); /*0x888a77*/
    v360 = v423; /*0x888a7c*/
    LOBYTE(v424) = 1; /*0x888a82*/
    if ( v423 ) /*0x888a87*/
    {
      --v423[7].Unk08; /*0x888a89*/
      if ( !v360[7].Unk08 ) /*0x888a91*/
        sub_772560(v360); /*0x888a96*/
    }
    v361 = a3; /*0x888aa1*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiTexture *)LODWORD(flt_B43110[0])); /*0x888aa8*/
    BSShader_ConfigureTextureStageSampler(v361, 3, 3, 2); /*0x888ab4*/
    NiD3DPass_SetTextureStage(v349, 3u, v361); /*0x888ac1*/
    v362 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888acb*/
    LOBYTE(v424) = 0x70; /*0x888ad8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v362); /*0x888add*/
    v363 = v423; /*0x888ae2*/
    LOBYTE(v424) = 1; /*0x888ae8*/
    if ( v423 ) /*0x888aed*/
    {
      --v423[7].Unk08; /*0x888aef*/
      if ( !v363[7].Unk08 ) /*0x888af7*/
        sub_772560(v363); /*0x888afc*/
    }
    v364 = a3; /*0x888b01*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x888b0b*/
    NiD3DPass_SetTextureStage(v349, 4u, v364); /*0x888b18*/
    v365 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888b22*/
    LOBYTE(v424) = 0x71; /*0x888b2f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v365); /*0x888b34*/
    v366 = v423; /*0x888b39*/
    LOBYTE(v424) = 1; /*0x888b3f*/
    if ( v423 ) /*0x888b44*/
    {
      --v423[7].Unk08; /*0x888b46*/
      if ( !v366[7].Unk08 ) /*0x888b4e*/
        sub_772560(v366); /*0x888b53*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x888b58*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x888b62*/
    NiD3DPass_SetTextureStage(v349, 5u, &v2->Stage); /*0x888b6f*/
  }
  NiD3DPass_SetVertexShader(v349, (NiD3DVertexShader *)v422[0x40]); /*0x888b81*/
  v367 = (NiD3DPixelShader *)sub_883130(0x56u); /*0x888b88*/
  NiD3DPass_SetPixelShader(v349, v367); /*0x888b93*/
  if ( !v349->RenderStateGroup ) /*0x888b98*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888ba3*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 0x1B, 1, 0); /*0x888bae*/
  if ( !v349->RenderStateGroup ) /*0x888bb3*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888bbe*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 0x13, 2, 0); /*0x888bca*/
  if ( !v349->RenderStateGroup ) /*0x888bcf*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888bda*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 0x14, 2, 0); /*0x888be6*/
  if ( !v349->RenderStateGroup ) /*0x888beb*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888bf6*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 0xF, 0, 0); /*0x888c02*/
  if ( !v349->RenderStateGroup ) /*0x888c07*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888c12*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 7, 1, 0); /*0x888c1d*/
  if ( !v349->RenderStateGroup ) /*0x888c22*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888c2d*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 0x17, 3, 0); /*0x888c39*/
  if ( !v349->RenderStateGroup ) /*0x888c3e*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888c49*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 0xE, 0, 0); /*0x888c55*/
  if ( !v349->RenderStateGroup ) /*0x888c5a*/
    v349->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888c65*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v349->RenderStateGroup, 0x34, 0, 0); /*0x888c71*/
  v368 = unk_B44620; /*0x888c7b*/
  v369 = unk_B43900; /*0x888c81*/
  unk_B43FA8 = unk_B43F90; /*0x888c87*/
  v370 = unk_B44CB0; /*0x888c8c*/
  unk_B44638 = v368; /*0x888c91*/
  unk_B43918 = v369; /*0x888ca0*/
  unk_B44CC8 = v370; /*0x888ca6*/
  sub_76C890((NiD3DPass **)&v421, &dword_B477F8); /*0x888cab*/
  v371 = (NiD3DPass *)v421; /*0x888cb0*/
  if ( (unsigned int)v421[6] < 6 ) /*0x888cb8*/
  {
    v372 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888cc3*/
    LOBYTE(v424) = 0x72; /*0x888cd0*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v372); /*0x888cd5*/
    v373 = v423; /*0x888cda*/
    LOBYTE(v424) = 1; /*0x888ce0*/
    if ( v423 ) /*0x888ce5*/
    {
      --v423[7].Unk08; /*0x888ce7*/
      if ( !v373[7].Unk08 ) /*0x888cef*/
        sub_772560(v373); /*0x888cf4*/
    }
    v374 = a3; /*0x888cf9*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x888d03*/
    NiD3DPass_SetTextureStage(v371, v371->CurrentStage, v374); /*0x888d12*/
    v375 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888d1c*/
    LOBYTE(v424) = 0x73; /*0x888d29*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v375); /*0x888d2e*/
    v376 = v423; /*0x888d33*/
    LOBYTE(v424) = 1; /*0x888d39*/
    if ( v423 ) /*0x888d3e*/
    {
      --v423[7].Unk08; /*0x888d40*/
      if ( !v376[7].Unk08 ) /*0x888d48*/
        sub_772560(v376); /*0x888d4d*/
    }
    v377 = a3; /*0x888d52*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x888d5b*/
    NiD3DPass_SetTextureStage(v371, 1u, v377); /*0x888d67*/
    v378 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888d71*/
    LOBYTE(v424) = 0x74; /*0x888d7e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v378); /*0x888d83*/
    v379 = v423; /*0x888d88*/
    LOBYTE(v424) = 1; /*0x888d8e*/
    if ( v423 ) /*0x888d93*/
    {
      --v423[7].Unk08; /*0x888d95*/
      if ( !v379[7].Unk08 ) /*0x888d9d*/
        sub_772560(v379); /*0x888da2*/
    }
    v380 = a3; /*0x888da7*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x888db1*/
    NiD3DPass_SetTextureStage(v371, 2u, v380); /*0x888dbe*/
    v381 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888dc8*/
    LOBYTE(v424) = 0x75; /*0x888dd5*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v381); /*0x888dda*/
    v382 = v423; /*0x888ddf*/
    LOBYTE(v424) = 1; /*0x888de5*/
    if ( v423 ) /*0x888dea*/
    {
      --v423[7].Unk08; /*0x888dec*/
      if ( !v382[7].Unk08 ) /*0x888df4*/
        sub_772560(v382); /*0x888df9*/
    }
    v383 = a3; /*0x888e03*/
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)a3, (NiTexture *)LODWORD(flt_B43110[0])); /*0x888e0a*/
    BSShader_ConfigureTextureStageSampler(v383, 3, 3, 2); /*0x888e16*/
    NiD3DPass_SetTextureStage(v371, 3u, v383); /*0x888e23*/
    v384 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888e2d*/
    LOBYTE(v424) = 0x76; /*0x888e3a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v384); /*0x888e3f*/
    v385 = v423; /*0x888e44*/
    LOBYTE(v424) = 1; /*0x888e4a*/
    if ( v423 ) /*0x888e4f*/
    {
      --v423[7].Unk08; /*0x888e51*/
      if ( !v385[7].Unk08 ) /*0x888e59*/
        sub_772560(v385); /*0x888e5e*/
    }
    v386 = a3; /*0x888e63*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x888e6d*/
    NiD3DPass_SetTextureStage(v371, 4u, v386); /*0x888e7a*/
    v387 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x888e84*/
    LOBYTE(v424) = 0x77; /*0x888e91*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v387); /*0x888e96*/
    v388 = v423; /*0x888e9b*/
    LOBYTE(v424) = 1; /*0x888ea1*/
    if ( v423 ) /*0x888ea6*/
    {
      --v423[7].Unk08; /*0x888ea8*/
      if ( !v388[7].Unk08 ) /*0x888eb0*/
        sub_772560(v388); /*0x888eb5*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x888eba*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x888ec4*/
    NiD3DPass_SetTextureStage(v371, 5u, &v2->Stage); /*0x888ed1*/
  }
  NiD3DPass_SetVertexShader(v371, (NiD3DVertexShader *)v422[0x41]); /*0x888ee3*/
  v389 = (NiD3DPixelShader *)sub_883130(0x58u); /*0x888eea*/
  NiD3DPass_SetPixelShader(v371, v389); /*0x888ef5*/
  if ( !v371->RenderStateGroup ) /*0x888efa*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888f05*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 0x1B, 1, 0); /*0x888f10*/
  if ( !v371->RenderStateGroup ) /*0x888f15*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888f20*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 0x13, 2, 0); /*0x888f2c*/
  if ( !v371->RenderStateGroup ) /*0x888f31*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888f3c*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 0x14, 2, 0); /*0x888f48*/
  if ( !v371->RenderStateGroup ) /*0x888f4d*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888f58*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 0xF, 0, 0); /*0x888f64*/
  if ( !v371->RenderStateGroup ) /*0x888f69*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888f74*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 7, 1, 0); /*0x888f7f*/
  if ( !v371->RenderStateGroup ) /*0x888f84*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888f8f*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 0x17, 3, 0); /*0x888f9b*/
  if ( !v371->RenderStateGroup ) /*0x888fa0*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888fab*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 0xE, 0, 0); /*0x888fb7*/
  if ( !v371->RenderStateGroup ) /*0x888fbc*/
    v371->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x888fc7*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v371->RenderStateGroup, 0x34, 0, 0); /*0x888fd3*/
  v390 = unk_B4463C; /*0x888fde*/
  v391 = unk_B4391C; /*0x888fe4*/
  unk_B43FC4 = unk_B43FAC; /*0x888fe9*/
  unk_B44CE4 = unk_B44CCC; /*0x888ff5*/
  unk_B44654 = v390; /*0x889004*/
  unk_B43934 = v391; /*0x88900a*/
  sub_76C890((NiD3DPass **)&v421, &dword_B477FC); /*0x88900f*/
  v392 = (NiD3DPass *)v421; /*0x889014*/
  if ( (unsigned int)v421[6] < 8 ) /*0x88901e*/
  {
    v393 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x889029*/
    LOBYTE(v424) = 0x78; /*0x889036*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v393); /*0x88903b*/
    v394 = v423; /*0x889040*/
    LOBYTE(v424) = 1; /*0x889046*/
    if ( v423 ) /*0x88904b*/
    {
      --v423[7].Unk08; /*0x88904d*/
      if ( !v394[7].Unk08 ) /*0x889055*/
        sub_772560(v394); /*0x88905a*/
    }
    v395 = a3; /*0x88905f*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x889069*/
    NiD3DPass_SetTextureStage(v392, 0, v395); /*0x889076*/
    v396 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x889080*/
    LOBYTE(v424) = 0x79; /*0x88908d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v396); /*0x889092*/
    v397 = v423; /*0x889097*/
    LOBYTE(v424) = 1; /*0x88909d*/
    if ( v423 ) /*0x8890a2*/
    {
      --v423[7].Unk08; /*0x8890a4*/
      if ( !v397[7].Unk08 ) /*0x8890ac*/
        sub_772560(v397); /*0x8890b1*/
    }
    v398 = a3; /*0x8890b6*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x8890bf*/
    NiD3DPass_SetTextureStage(v392, 1u, v398); /*0x8890cb*/
    v399 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8890d5*/
    LOBYTE(v424) = 0x7A; /*0x8890e2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v399); /*0x8890e7*/
    v400 = v423; /*0x8890ec*/
    LOBYTE(v424) = 1; /*0x8890f2*/
    if ( v423 ) /*0x8890f7*/
    {
      --v423[7].Unk08; /*0x8890f9*/
      if ( !v400[7].Unk08 ) /*0x889101*/
        sub_772560(v400); /*0x889106*/
    }
    v401 = a3; /*0x88910b*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x889115*/
    NiD3DPass_SetTextureStage(v392, 2u, v401); /*0x889122*/
    v402 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x88912c*/
    LOBYTE(v424) = 0x7B; /*0x889139*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v402); /*0x88913e*/
    v403 = v423; /*0x889143*/
    LOBYTE(v424) = 1; /*0x889149*/
    if ( v423 ) /*0x88914e*/
    {
      --v423[7].Unk08; /*0x889150*/
      if ( !v403[7].Unk08 ) /*0x889158*/
        sub_772560(v403); /*0x88915d*/
    }
    v404 = a3; /*0x889162*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x88916c*/
    NiD3DPass_SetTextureStage(v392, 3u, v404); /*0x889179*/
    v405 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x889183*/
    LOBYTE(v424) = 0x7C; /*0x889190*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v405); /*0x889195*/
    v406 = v423; /*0x88919a*/
    LOBYTE(v424) = 1; /*0x8891a0*/
    if ( v423 ) /*0x8891a5*/
    {
      --v423[7].Unk08; /*0x8891a7*/
      if ( !v406[7].Unk08 ) /*0x8891af*/
        sub_772560(v406); /*0x8891b4*/
    }
    v407 = a3; /*0x8891b9*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 1, 2); /*0x8891c3*/
    NiD3DPass_SetTextureStage(v392, 4u, v407); /*0x8891d0*/
    v408 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x8891da*/
    LOBYTE(v424) = 0x7D; /*0x8891e7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v408); /*0x8891ec*/
    v409 = v423; /*0x8891f1*/
    LOBYTE(v424) = 1; /*0x8891f7*/
    if ( v423 ) /*0x8891fc*/
    {
      --v423[7].Unk08; /*0x8891fe*/
      if ( !v409[7].Unk08 ) /*0x889206*/
        sub_772560(v409); /*0x88920b*/
    }
    v410 = (NiD3DTextureStage *)a3; /*0x889210*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 3, 0); /*0x88921b*/
    NiD3DTextureStage_SetTexture(v410, (NiTexture *)LODWORD(flt_B43110[0])); /*0x88922c*/
    NiD3DPass_SetTextureStage(v392, 5u, &v410->Stage); /*0x889236*/
    v411 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x889240*/
    LOBYTE(v424) = 0x7E; /*0x88924d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v411); /*0x889252*/
    v412 = v423; /*0x889257*/
    LOBYTE(v424) = 1; /*0x88925d*/
    if ( v423 ) /*0x889262*/
    {
      --v423[7].Unk08; /*0x889264*/
      if ( !v412[7].Unk08 ) /*0x88926c*/
        sub_772560(v412); /*0x889271*/
    }
    v413 = a3; /*0x889276*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 1, 2); /*0x889280*/
    NiD3DPass_SetTextureStage(v392, 6u, v413); /*0x88928d*/
    v414 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v423); /*0x889297*/
    LOBYTE(v424) = 0x7F; /*0x8892a4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v414); /*0x8892a9*/
    v415 = v423; /*0x8892ae*/
    LOBYTE(v424) = 1; /*0x8892b4*/
    if ( v423 ) /*0x8892b9*/
    {
      --v423[7].Unk08; /*0x8892bb*/
      if ( !v415[7].Unk08 ) /*0x8892c3*/
        sub_772560(v415); /*0x8892c8*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8892cd*/
    BSShader_ConfigureTextureStageSampler(a3, 7, 3, 0); /*0x8892d8*/
    NiD3DPass_SetTextureStage(v392, 7u, &v2->Stage); /*0x8892e5*/
  }
  NiD3DPass_SetVertexShader(v392, (NiD3DVertexShader *)v422[0x42]); /*0x8892f7*/
  v416 = (NiD3DPixelShader *)sub_883130(0x7Bu); /*0x8892fe*/
  NiD3DPass_SetPixelShader(v392, v416); /*0x889309*/
  if ( !v392->RenderStateGroup ) /*0x88930e*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x889319*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 0x1B, 1, 0); /*0x889324*/
  if ( !v392->RenderStateGroup ) /*0x889329*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x889334*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 0x13, 9, 0); /*0x889340*/
  if ( !v392->RenderStateGroup ) /*0x889345*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x889350*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 0x14, 1, 0); /*0x88935b*/
  if ( !v392->RenderStateGroup ) /*0x889360*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x88936b*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 0xF, 0, 0); /*0x889377*/
  if ( !v392->RenderStateGroup ) /*0x88937c*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x889387*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 7, 1, 0); /*0x889392*/
  if ( !v392->RenderStateGroup ) /*0x889397*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8893a2*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 0x17, 4, 0); /*0x8893ae*/
  if ( !v392->RenderStateGroup ) /*0x8893b3*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8893be*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 0xE, 0, 0); /*0x8893ca*/
  if ( !v392->RenderStateGroup ) /*0x8893cf*/
    v392->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x8893da*/
  NiD3DRenderStateGroup_SetRenderState((_DWORD *)v392->RenderStateGroup, 0x34, 0, 0); /*0x8893e6*/
  v417 = unk_B4478C; /*0x8893f2*/
  v418 = unk_B43A6C; /*0x8893f8*/
  unk_B44108 = unk_B440FC; /*0x8893fe*/
  v419 = unk_B44E1C; /*0x889403*/
  unk_B44798 = v417; /*0x889408*/
  unk_B43A78 = v418; /*0x88940e*/
  unk_B44E28 = v419; /*0x889414*/
  LOBYTE(v424) = 0; /*0x889419*/
  if ( v2 ) /*0x88941e*/
  {
    v4 = v2[7].Unk08-- == 1; /*0x889420*/
    if ( v4 ) /*0x889423*/
      sub_772560(v2); /*0x889427*/
  }
  v4 = v392->RefCount-- == 1; /*0x88942c*/
  v424 = 0xFFFFFFFF; /*0x88942f*/
  if ( v4 ) /*0x889433*/
    NiD3DPass_ReleaseToPool(v392); /*0x889437*/
}
