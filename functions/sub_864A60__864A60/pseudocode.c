// MoonSugarEffect decode: ParallaxShader pass population slot +0xC4. Populates first 16 pooled passes dword_B47620..B4765C, binding object-local PAR2 vertex/pixel variants plus TES4 texture stages/render states.
void __thiscall sub_864A60(_DWORD *this)
{
  int v1; // esi
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
  int v19; // ebx
  int v20; // ebp
  int v21; // ebx
  int v22; // ebp
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
  int v37; // ebx
  int v38; // ebp
  int v39; // ebx
  int v40; // ebp
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
  int v55; // ebx
  int v56; // ebp
  int v57; // ebx
  int v58; // ebp
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
  int v73; // ebx
  int v74; // ebp
  int v75; // ebx
  int v76; // ebp
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
  int v91; // ebx
  int v92; // ebp
  int v93; // ebx
  int v94; // ebp
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
  unsigned int **v107; // ebp
  NiD3DTextureStage *v108; // eax
  _DWORD *v109; // ebp
  unsigned int **v110; // ebp
  NiD3DTextureStage *v111; // eax
  unsigned int **v112; // ebp
  NiD3DTextureStage *v113; // eax
  NiD3DTextureStage **v114; // eax
  NiD3DTextureStage *v115; // eax
  unsigned int *v116; // edi
  NiD3DTextureStage **v117; // eax
  NiD3DTextureStage *v118; // eax
  unsigned int *v119; // edi
  NiD3DTextureStage **v120; // eax
  NiD3DTextureStage *v121; // eax
  NiD3DTextureStage *v122; // edi
  NiD3DTextureStage **v123; // eax
  NiD3DTextureStage *v124; // eax
  unsigned int *v125; // edi
  NiD3DTextureStage **v126; // eax
  NiD3DTextureStage *v127; // eax
  NiD3DTextureStage **v128; // eax
  NiD3DTextureStage *v129; // eax
  unsigned int *v130; // edi
  NiD3DTextureStage **v131; // eax
  NiD3DTextureStage *v132; // eax
  unsigned int *v133; // edi
  NiD3DTextureStage **v134; // eax
  NiD3DTextureStage *v135; // eax
  unsigned int *v136; // edi
  NiD3DTextureStage **v137; // eax
  NiD3DTextureStage *v138; // eax
  unsigned int *v139; // edi
  NiD3DTextureStage **v140; // eax
  NiD3DTextureStage *v141; // eax
  NiD3DTextureStage *v142; // edi
  NiD3DTextureStage **v143; // eax
  NiD3DTextureStage *v144; // eax
  unsigned int *v145; // edi
  NiD3DTextureStage **v146; // eax
  NiD3DTextureStage *v147; // eax
  NiD3DTextureStage **v148; // eax
  NiD3DTextureStage *v149; // eax
  unsigned int *v150; // edi
  NiD3DTextureStage **v151; // eax
  NiD3DTextureStage *v152; // eax
  unsigned int *v153; // edi
  NiD3DTextureStage **v154; // eax
  NiD3DTextureStage *v155; // eax
  unsigned int *v156; // edi
  NiD3DTextureStage **v157; // eax
  NiD3DTextureStage *v158; // eax
  unsigned int *v159; // edi
  NiD3DTextureStage **v160; // eax
  NiD3DTextureStage *v161; // eax
  NiD3DTextureStage *v162; // edi
  NiD3DTextureStage **v163; // eax
  NiD3DTextureStage *v164; // eax
  unsigned int *v165; // edi
  NiD3DTextureStage **v166; // eax
  NiD3DTextureStage *v167; // eax
  _DWORD *v168; // ebp
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
  unsigned int *v180; // edi
  NiD3DTextureStage **v181; // eax
  NiD3DTextureStage *v182; // eax
  NiD3DTextureStage *v183; // edi
  NiD3DTextureStage **v184; // eax
  NiD3DTextureStage *v185; // eax
  unsigned int *v186; // edi
  NiD3DTextureStage **v187; // eax
  NiD3DTextureStage *v188; // eax
  NiD3DTextureStage **v189; // eax
  NiD3DTextureStage *v190; // eax
  unsigned int *v191; // edi
  NiD3DTextureStage **v192; // eax
  NiD3DTextureStage *v193; // eax
  unsigned int *v194; // edi
  NiD3DTextureStage **v195; // eax
  NiD3DTextureStage *v196; // eax
  unsigned int *v197; // edi
  NiD3DTextureStage **v198; // eax
  NiD3DTextureStage *v199; // eax
  unsigned int *v200; // edi
  NiD3DTextureStage **v201; // eax
  NiD3DTextureStage *v202; // eax
  NiD3DTextureStage *v203; // edi
  NiD3DTextureStage **v204; // eax
  NiD3DTextureStage *v205; // eax
  unsigned int *v206; // edi
  NiD3DTextureStage **v207; // eax
  NiD3DTextureStage *v208; // eax
  _DWORD *v209; // ebp
  NiD3DTextureStage **v210; // eax
  NiD3DTextureStage *v211; // eax
  unsigned int *v212; // edi
  NiD3DTextureStage **v213; // eax
  NiD3DTextureStage *v214; // eax
  unsigned int *v215; // edi
  NiD3DTextureStage **v216; // eax
  NiD3DTextureStage *v217; // eax
  unsigned int *v218; // edi
  NiD3DTextureStage **v219; // eax
  NiD3DTextureStage *v220; // eax
  unsigned int *v221; // edi
  NiD3DTextureStage **v222; // eax
  NiD3DTextureStage *v223; // eax
  NiD3DTextureStage *v224; // edi
  NiD3DTextureStage **v225; // eax
  NiD3DTextureStage *v226; // eax
  unsigned int *v227; // edi
  NiD3DTextureStage **v228; // eax
  NiD3DTextureStage *v229; // eax
  NiD3DTextureStage **v230; // eax
  NiD3DTextureStage *v231; // eax
  unsigned int *v232; // edi
  NiD3DTextureStage **v233; // eax
  NiD3DTextureStage *v234; // eax
  unsigned int *v235; // edi
  NiD3DTextureStage **v236; // eax
  NiD3DTextureStage *v237; // eax
  unsigned int *v238; // edi
  NiD3DTextureStage **v239; // eax
  NiD3DTextureStage *v240; // eax
  unsigned int *v241; // edi
  NiD3DTextureStage **v242; // eax
  NiD3DTextureStage *v243; // eax
  NiD3DTextureStage *v244; // edi
  NiD3DTextureStage **v245; // eax
  NiD3DTextureStage *v246; // eax
  unsigned int *v247; // edi
  NiD3DTextureStage **v248; // eax
  NiD3DTextureStage *v249; // eax
  _DWORD *v250; // ebp
  NiD3DTextureStage **v251; // eax
  NiD3DTextureStage *v252; // eax
  unsigned int *v253; // edi
  NiD3DTextureStage **v254; // eax
  NiD3DTextureStage *v255; // eax
  unsigned int *v256; // edi
  NiD3DTextureStage **v257; // eax
  NiD3DTextureStage *v258; // eax
  unsigned int *v259; // edi
  NiD3DTextureStage **v260; // eax
  NiD3DTextureStage *v261; // eax
  unsigned int *v262; // edi
  NiD3DTextureStage **v263; // eax
  NiD3DTextureStage *v264; // eax
  NiD3DTextureStage *v265; // edi
  NiD3DTextureStage **v266; // eax
  NiD3DTextureStage *v267; // eax
  unsigned int *v268; // edi
  NiD3DTextureStage **v269; // eax
  NiD3DTextureStage *v270; // eax
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
  NiD3DTextureStage *v285; // edi
  NiD3DTextureStage **v286; // eax
  NiD3DTextureStage *v287; // eax
  unsigned int *v288; // edi
  NiD3DTextureStage **v289; // eax
  NiD3DTextureStage *v290; // eax
  _DWORD *v291; // ebp
  NiD3DTextureStage **v292; // eax
  NiD3DTextureStage *v293; // eax
  unsigned int *v294; // edi
  NiD3DTextureStage **v295; // eax
  NiD3DTextureStage *v296; // eax
  unsigned int *v297; // edi
  NiD3DTextureStage **v298; // eax
  NiD3DTextureStage *v299; // eax
  unsigned int *v300; // edi
  NiD3DTextureStage **v301; // eax
  NiD3DTextureStage *v302; // eax
  unsigned int *v303; // edi
  NiD3DTextureStage **v304; // eax
  NiD3DTextureStage *v305; // eax
  NiD3DTextureStage *v306; // edi
  NiD3DTextureStage **v307; // eax
  NiD3DTextureStage *v308; // eax
  unsigned int *v309; // edi
  NiD3DTextureStage **v310; // eax
  NiD3DTextureStage *v311; // eax
  unsigned int *a3; // [esp+28h] [ebp-1Ch] BYREF
  _DWORD *v313; // [esp+2Ch] [ebp-18h]
  int v314; // [esp+30h] [ebp-14h]
  NiD3DTextureStage *v315; // [esp+34h] [ebp-10h] BYREF
  unsigned int v316; // [esp+40h] [ebp-4h]

  v313 = this; /*0x864a87*/
  v1 = 0; /*0x864a8b*/
  v2 = 0; /*0x864a8d*/
  v314 = 0; /*0x864a8f*/
  v316 = 0; /*0x864a93*/
  a3 = 0; /*0x864a97*/
  v3 = unk_B47620[0]; /*0x864a9b*/
  v4 = unk_B47620[0] == 0; /*0x864aa0*/
  LOBYTE(v316) = 1; /*0x864aa7*/
  if ( !v4 ) /*0x864aab*/
  {
    v1 = v3; /*0x864aad*/
    v314 = v3; /*0x864ab1*/
    if ( v3 ) /*0x864ab5*/
      ++*(_DWORD *)(v3 + 0x60); /*0x864ab7*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x864ac3*/
  {
    v5 = (unsigned int *)*NiD3DTextureStagePool_Acquire(&v315); /*0x864ad6*/
    if ( v5 ) /*0x864ada*/
    {
      v2 = (NiD3DTextureStage *)v5; /*0x864adc*/
      ++v5[0x17]; /*0x864ade*/
      a3 = v5; /*0x864ae1*/
    }
    v6 = v315; /*0x864ae5*/
    LOBYTE(v316) = 1; /*0x864aeb*/
    if ( v315 ) /*0x864af0*/
    {
      --v315[7].Unk08; /*0x864af2*/
      if ( !v6[7].Unk08 ) /*0x864afa*/
        sub_772560(v6); /*0x864aff*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x864b0b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x864b18*/
    v7 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864b2a*/
    v4 = v2 == (NiD3DTextureStage *)*v7; /*0x864b2c*/
    LOBYTE(v316) = 3; /*0x864b2e*/
    if ( !v4 ) /*0x864b33*/
    {
      if ( v2 ) /*0x864b37*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864b39*/
        if ( v4 ) /*0x864b3c*/
          sub_772560(v2); /*0x864b40*/
      }
      v2 = (NiD3DTextureStage *)*v7; /*0x864b45*/
      a3 = *v7; /*0x864b49*/
      if ( a3 ) /*0x864b4d*/
        ++v2[7].Unk08; /*0x864b4f*/
    }
    v8 = v315; /*0x864b53*/
    LOBYTE(v316) = 1; /*0x864b59*/
    if ( v315 ) /*0x864b5e*/
    {
      --v315[7].Unk08; /*0x864b60*/
      if ( !v8[7].Unk08 ) /*0x864b68*/
        sub_772560(v8); /*0x864b6d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x864b79*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x864b86*/
    v9 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864b98*/
    v4 = v2 == (NiD3DTextureStage *)*v9; /*0x864b9a*/
    LOBYTE(v316) = 4; /*0x864b9c*/
    if ( !v4 ) /*0x864ba1*/
    {
      if ( v2 ) /*0x864ba5*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864ba7*/
        if ( v4 ) /*0x864baa*/
          sub_772560(v2); /*0x864bae*/
      }
      v2 = (NiD3DTextureStage *)*v9; /*0x864bb3*/
      a3 = *v9; /*0x864bb7*/
      if ( a3 ) /*0x864bbb*/
        ++v2[7].Unk08; /*0x864bbd*/
    }
    v10 = v315; /*0x864bc1*/
    LOBYTE(v316) = 1; /*0x864bc7*/
    if ( v315 ) /*0x864bcc*/
    {
      --v315[7].Unk08; /*0x864bce*/
      if ( !v10[7].Unk08 ) /*0x864bd6*/
        sub_772560(v10); /*0x864bdb*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x864be7*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x864bf4*/
    v11 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864c06*/
    v4 = v2 == (NiD3DTextureStage *)*v11; /*0x864c08*/
    LOBYTE(v316) = 5; /*0x864c0a*/
    if ( !v4 ) /*0x864c0f*/
    {
      if ( v2 ) /*0x864c13*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864c15*/
        if ( v4 ) /*0x864c18*/
          sub_772560(v2); /*0x864c1c*/
      }
      v2 = (NiD3DTextureStage *)*v11; /*0x864c21*/
      a3 = *v11; /*0x864c25*/
      if ( a3 ) /*0x864c29*/
        ++v2[7].Unk08; /*0x864c2b*/
    }
    v12 = v315; /*0x864c2f*/
    LOBYTE(v316) = 1; /*0x864c35*/
    if ( v315 ) /*0x864c3a*/
    {
      --v315[7].Unk08; /*0x864c3c*/
      if ( !v12[7].Unk08 ) /*0x864c44*/
        sub_772560(v12); /*0x864c49*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x864c55*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x864c62*/
    v13 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864c74*/
    v4 = v2 == (NiD3DTextureStage *)*v13; /*0x864c76*/
    LOBYTE(v316) = 6; /*0x864c78*/
    if ( !v4 ) /*0x864c7d*/
    {
      if ( v2 ) /*0x864c81*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864c83*/
        if ( v4 ) /*0x864c86*/
          sub_772560(v2); /*0x864c8a*/
      }
      v2 = (NiD3DTextureStage *)*v13; /*0x864c8f*/
      a3 = *v13; /*0x864c93*/
      if ( a3 ) /*0x864c97*/
        ++v2[7].Unk08; /*0x864c99*/
    }
    v14 = v315; /*0x864c9d*/
    LOBYTE(v316) = 1; /*0x864ca3*/
    if ( v315 ) /*0x864ca8*/
    {
      --v315[7].Unk08; /*0x864caa*/
      if ( !v14[7].Unk08 ) /*0x864cb2*/
        sub_772560(v14); /*0x864cb7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x864cc3*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x864cd4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x864cde*/
    v15 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864cf0*/
    v4 = v2 == (NiD3DTextureStage *)*v15; /*0x864cf2*/
    LOBYTE(v316) = 7; /*0x864cf4*/
    if ( !v4 ) /*0x864cf9*/
    {
      if ( v2 ) /*0x864cfd*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864cff*/
        if ( v4 ) /*0x864d02*/
          sub_772560(v2); /*0x864d06*/
      }
      v2 = (NiD3DTextureStage *)*v15; /*0x864d0b*/
      a3 = *v15; /*0x864d0f*/
      if ( a3 ) /*0x864d13*/
        ++v2[7].Unk08; /*0x864d15*/
    }
    v16 = v315; /*0x864d19*/
    LOBYTE(v316) = 1; /*0x864d1f*/
    if ( v315 ) /*0x864d24*/
    {
      --v315[7].Unk08; /*0x864d26*/
      if ( !v16[7].Unk08 ) /*0x864d2e*/
        sub_772560(v16); /*0x864d33*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x864d3f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x864d4c*/
    v17 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864d5e*/
    v4 = v2 == (NiD3DTextureStage *)*v17; /*0x864d60*/
    LOBYTE(v316) = 8; /*0x864d62*/
    if ( !v4 ) /*0x864d67*/
    {
      if ( v2 ) /*0x864d6b*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864d6d*/
        if ( v4 ) /*0x864d70*/
          sub_772560(v2); /*0x864d74*/
      }
      v2 = (NiD3DTextureStage *)*v17; /*0x864d79*/
      a3 = *v17; /*0x864d7d*/
      if ( a3 ) /*0x864d81*/
        ++v2[7].Unk08; /*0x864d83*/
    }
    v18 = v315; /*0x864d87*/
    LOBYTE(v316) = 1; /*0x864d8d*/
    if ( v315 ) /*0x864d92*/
    {
      --v315[7].Unk08; /*0x864d94*/
      if ( !v18[7].Unk08 ) /*0x864d9c*/
        sub_772560(v18); /*0x864da1*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x864dad*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x864dba*/
  }
  v19 = v313[0x37];                             // MoonSugar build51: Parallax pass 0 binds vertex shader from this+0xDC (PAR2016.vso, vs_2_0); exact gate requires current pass B47620[0] and this pointer value. /*0x864dc3*/
  v20 = *(_DWORD *)(v1 + 0x58); /*0x864dc9*/
  if ( v20 != v19 ) /*0x864dce*/
  {
    if ( v20 ) /*0x864dd2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x864dd8*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x864def*/
    }
    *(_DWORD *)(v1 + 0x58) = v19; /*0x864df3*/
    if ( v19 ) /*0x864df6*/
      InterlockedIncrement((volatile LONG *)(v19 + 4)); /*0x864dfc*/
  }
  v21 = v313[0x57];                             // MoonSugar build51: Parallax pass 0 binds pixel shader from this+0x15C (PAR2012.pso, ps_2_x); exact gate requires current pass B47620[0] and this pointer value. /*0x864e06*/
  v22 = *(_DWORD *)(v1 + 0x44); /*0x864e0c*/
  if ( v22 != v21 ) /*0x864e11*/
  {
    if ( v22 ) /*0x864e15*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x864e1b*/
        (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x864e32*/
    }
    *(_DWORD *)(v1 + 0x44) = v21; /*0x864e36*/
    if ( v21 ) /*0x864e39*/
      InterlockedIncrement((volatile LONG *)(v21 + 4)); /*0x864e3f*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x864e45*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x864e50*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x864e5c*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x864e61*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x864e6c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x864e78*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x864e7d*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x864e88*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x864e94*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x864e99*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x864ea4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x864eb0*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x864eb5*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x864ec0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x864ecc*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x864ed1*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x864edc*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x864ee8*/
  v4 = v1 == unk_B47624; /*0x864ef0*/
  unk_B43C50 = 0x39082; /*0x864ef6*/
  unk_B442E0 = 0x11C; /*0x864f00*/
  if ( !v4 ) /*0x864f0a*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x864f0c*/
    if ( v4 ) /*0x864f0f*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x864f13*/
    v1 = unk_B47624; /*0x864f18*/
    v314 = unk_B47624; /*0x864f20*/
    if ( v314 ) /*0x864f24*/
      ++*(_DWORD *)(v1 + 0x60); /*0x864f26*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x864f2e*/
  {
    v23 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864f41*/
    v4 = v2 == (NiD3DTextureStage *)*v23; /*0x864f43*/
    LOBYTE(v316) = 9; /*0x864f46*/
    if ( !v4 ) /*0x864f4b*/
    {
      if ( v2 ) /*0x864f4f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864f51*/
        if ( v4 ) /*0x864f54*/
          sub_772560(v2); /*0x864f58*/
      }
      v2 = (NiD3DTextureStage *)*v23; /*0x864f5d*/
      a3 = *v23; /*0x864f62*/
      if ( a3 ) /*0x864f66*/
        ++v2[7].Unk08; /*0x864f68*/
    }
    v24 = v315; /*0x864f6c*/
    LOBYTE(v316) = 1; /*0x864f72*/
    if ( v315 ) /*0x864f77*/
    {
      --v315[7].Unk08; /*0x864f79*/
      if ( !v24[7].Unk08 ) /*0x864f81*/
        sub_772560(v24); /*0x864f86*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x864f92*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x864f9f*/
    v25 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x864fb1*/
    v4 = v2 == (NiD3DTextureStage *)*v25; /*0x864fb3*/
    LOBYTE(v316) = 0xA; /*0x864fb6*/
    if ( !v4 ) /*0x864fbb*/
    {
      if ( v2 ) /*0x864fbf*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x864fc1*/
        if ( v4 ) /*0x864fc4*/
          sub_772560(v2); /*0x864fc8*/
      }
      v2 = (NiD3DTextureStage *)*v25; /*0x864fcd*/
      a3 = *v25; /*0x864fd2*/
      if ( a3 ) /*0x864fd6*/
        ++v2[7].Unk08; /*0x864fd8*/
    }
    v26 = v315; /*0x864fdc*/
    LOBYTE(v316) = 1; /*0x864fe2*/
    if ( v315 ) /*0x864fe7*/
    {
      --v315[7].Unk08; /*0x864fe9*/
      if ( !v26[7].Unk08 ) /*0x864ff1*/
        sub_772560(v26); /*0x864ff6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x865002*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86500f*/
    v27 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865021*/
    v4 = v2 == (NiD3DTextureStage *)*v27; /*0x865023*/
    LOBYTE(v316) = 0xB; /*0x865026*/
    if ( !v4 ) /*0x86502b*/
    {
      if ( v2 ) /*0x86502f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865031*/
        if ( v4 ) /*0x865034*/
          sub_772560(v2); /*0x865038*/
      }
      v2 = (NiD3DTextureStage *)*v27; /*0x86503d*/
      a3 = *v27; /*0x865042*/
      if ( a3 ) /*0x865046*/
        ++v2[7].Unk08; /*0x865048*/
    }
    v28 = v315; /*0x86504c*/
    LOBYTE(v316) = 1; /*0x865052*/
    if ( v315 ) /*0x865057*/
    {
      --v315[7].Unk08; /*0x865059*/
      if ( !v28[7].Unk08 ) /*0x865061*/
        sub_772560(v28); /*0x865066*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x865072*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x86507f*/
    v29 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865091*/
    v4 = v2 == (NiD3DTextureStage *)*v29; /*0x865093*/
    LOBYTE(v316) = 0xC; /*0x865096*/
    if ( !v4 ) /*0x86509b*/
    {
      if ( v2 ) /*0x86509f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8650a1*/
        if ( v4 ) /*0x8650a4*/
          sub_772560(v2); /*0x8650a8*/
      }
      v2 = (NiD3DTextureStage *)*v29; /*0x8650ad*/
      a3 = *v29; /*0x8650b2*/
      if ( a3 ) /*0x8650b6*/
        ++v2[7].Unk08; /*0x8650b8*/
    }
    v30 = v315; /*0x8650bc*/
    LOBYTE(v316) = 1; /*0x8650c2*/
    if ( v315 ) /*0x8650c7*/
    {
      --v315[7].Unk08; /*0x8650c9*/
      if ( !v30[7].Unk08 ) /*0x8650d1*/
        sub_772560(v30); /*0x8650d6*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x8650e2*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x8650ef*/
    v31 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865101*/
    v4 = v2 == (NiD3DTextureStage *)*v31; /*0x865103*/
    LOBYTE(v316) = 0xD; /*0x865106*/
    if ( !v4 ) /*0x86510b*/
    {
      if ( v2 ) /*0x86510f*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865111*/
        if ( v4 ) /*0x865114*/
          sub_772560(v2); /*0x865118*/
      }
      v2 = (NiD3DTextureStage *)*v31; /*0x86511d*/
      a3 = *v31; /*0x865122*/
      if ( a3 ) /*0x865126*/
        ++v2[7].Unk08; /*0x865128*/
    }
    v32 = v315; /*0x86512c*/
    LOBYTE(v316) = 1; /*0x865132*/
    if ( v315 ) /*0x865137*/
    {
      --v315[7].Unk08; /*0x865139*/
      if ( !v32[7].Unk08 ) /*0x865141*/
        sub_772560(v32); /*0x865146*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x865152*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x865163*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x86516d*/
    v33 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x86517f*/
    v4 = v2 == (NiD3DTextureStage *)*v33; /*0x865181*/
    LOBYTE(v316) = 0xE; /*0x865184*/
    if ( !v4 ) /*0x865189*/
    {
      if ( v2 ) /*0x86518d*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86518f*/
        if ( v4 ) /*0x865192*/
          sub_772560(v2); /*0x865196*/
      }
      v2 = (NiD3DTextureStage *)*v33; /*0x86519b*/
      a3 = *v33; /*0x8651a0*/
      if ( a3 ) /*0x8651a4*/
        ++v2[7].Unk08; /*0x8651a6*/
    }
    v34 = v315; /*0x8651aa*/
    LOBYTE(v316) = 1; /*0x8651b0*/
    if ( v315 ) /*0x8651b5*/
    {
      --v315[7].Unk08; /*0x8651b7*/
      if ( !v34[7].Unk08 ) /*0x8651bf*/
        sub_772560(v34); /*0x8651c4*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x8651d0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x8651dd*/
    v35 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8651ef*/
    v4 = v2 == (NiD3DTextureStage *)*v35; /*0x8651f1*/
    LOBYTE(v316) = 0xF; /*0x8651f4*/
    if ( !v4 ) /*0x8651f9*/
    {
      if ( v2 ) /*0x8651fd*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8651ff*/
        if ( v4 ) /*0x865202*/
          sub_772560(v2); /*0x865206*/
      }
      v2 = (NiD3DTextureStage *)*v35; /*0x86520b*/
      a3 = *v35; /*0x865210*/
      if ( a3 ) /*0x865214*/
        ++v2[7].Unk08; /*0x865216*/
    }
    v36 = v315; /*0x86521a*/
    LOBYTE(v316) = 1; /*0x865220*/
    if ( v315 ) /*0x865225*/
    {
      --v315[7].Unk08; /*0x865227*/
      if ( !v36[7].Unk08 ) /*0x86522f*/
        sub_772560(v36); /*0x865234*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x865240*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86524d*/
  }
  v37 = v313[0x37]; /*0x865256*/
  v38 = *(_DWORD *)(v1 + 0x58); /*0x86525c*/
  if ( v38 != v37 ) /*0x865261*/
  {
    if ( v38 ) /*0x865265*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v38 + 4)) ) /*0x86526b*/
        (**(void (__thiscall ***)(int, int))v38)(v38, 1); /*0x865282*/
    }
    *(_DWORD *)(v1 + 0x58) = v37; /*0x865286*/
    if ( v37 ) /*0x865289*/
      InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x86528f*/
  }
  v39 = v313[0x58]; /*0x865299*/
  v40 = *(_DWORD *)(v1 + 0x44); /*0x86529f*/
  if ( v40 != v39 ) /*0x8652a4*/
  {
    if ( v40 ) /*0x8652a8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v40 + 4)) ) /*0x8652ae*/
        (**(void (__thiscall ***)(int, int))v40)(v40, 1); /*0x8652c5*/
    }
    *(_DWORD *)(v1 + 0x44) = v39; /*0x8652c9*/
    if ( v39 ) /*0x8652cc*/
      InterlockedIncrement((volatile LONG *)(v39 + 4)); /*0x8652d2*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8652d8*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8652e3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x8652ef*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8652f4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8652ff*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86530b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865310*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86531b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x865327*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86532c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865337*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x865343*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865348*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865353*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86535f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865364*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86536f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86537b*/
  v4 = v1 == unk_B47628; /*0x865383*/
  unk_B43C54 = 0x39082; /*0x865389*/
  unk_B442E4 = 0x19C; /*0x865393*/
  if ( !v4 ) /*0x86539d*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86539f*/
    if ( v4 ) /*0x8653a2*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x8653a6*/
    v1 = unk_B47628; /*0x8653ab*/
    v314 = unk_B47628; /*0x8653b3*/
    if ( v314 ) /*0x8653b7*/
      ++*(_DWORD *)(v1 + 0x60); /*0x8653b9*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x8653c1*/
  {
    v41 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8653d4*/
    v4 = v2 == (NiD3DTextureStage *)*v41; /*0x8653d6*/
    LOBYTE(v316) = 0x10; /*0x8653d9*/
    if ( !v4 ) /*0x8653de*/
    {
      if ( v2 ) /*0x8653e2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8653e4*/
        if ( v4 ) /*0x8653e7*/
          sub_772560(v2); /*0x8653eb*/
      }
      v2 = (NiD3DTextureStage *)*v41; /*0x8653f0*/
      a3 = *v41; /*0x8653f5*/
      if ( a3 ) /*0x8653f9*/
        ++v2[7].Unk08; /*0x8653fb*/
    }
    v42 = v315; /*0x8653ff*/
    LOBYTE(v316) = 1; /*0x865405*/
    if ( v315 ) /*0x86540a*/
    {
      --v315[7].Unk08; /*0x86540c*/
      if ( !v42[7].Unk08 ) /*0x865414*/
        sub_772560(v42); /*0x865419*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x865425*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x865432*/
    v43 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865444*/
    v4 = v2 == (NiD3DTextureStage *)*v43; /*0x865446*/
    LOBYTE(v316) = 0x11; /*0x865449*/
    if ( !v4 ) /*0x86544e*/
    {
      if ( v2 ) /*0x865452*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865454*/
        if ( v4 ) /*0x865457*/
          sub_772560(v2); /*0x86545b*/
      }
      v2 = (NiD3DTextureStage *)*v43; /*0x865460*/
      a3 = *v43; /*0x865465*/
      if ( a3 ) /*0x865469*/
        ++v2[7].Unk08; /*0x86546b*/
    }
    v44 = v315; /*0x86546f*/
    LOBYTE(v316) = 1; /*0x865475*/
    if ( v315 ) /*0x86547a*/
    {
      --v315[7].Unk08; /*0x86547c*/
      if ( !v44[7].Unk08 ) /*0x865484*/
        sub_772560(v44); /*0x865489*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x865495*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x8654a2*/
    v45 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8654b4*/
    v4 = v2 == (NiD3DTextureStage *)*v45; /*0x8654b6*/
    LOBYTE(v316) = 0x12; /*0x8654b9*/
    if ( !v4 ) /*0x8654be*/
    {
      if ( v2 ) /*0x8654c2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8654c4*/
        if ( v4 ) /*0x8654c7*/
          sub_772560(v2); /*0x8654cb*/
      }
      v2 = (NiD3DTextureStage *)*v45; /*0x8654d0*/
      a3 = *v45; /*0x8654d5*/
      if ( a3 ) /*0x8654d9*/
        ++v2[7].Unk08; /*0x8654db*/
    }
    v46 = v315; /*0x8654df*/
    LOBYTE(v316) = 1; /*0x8654e5*/
    if ( v315 ) /*0x8654ea*/
    {
      --v315[7].Unk08; /*0x8654ec*/
      if ( !v46[7].Unk08 ) /*0x8654f4*/
        sub_772560(v46); /*0x8654f9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x865505*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x865512*/
    v47 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865524*/
    v4 = v2 == (NiD3DTextureStage *)*v47; /*0x865526*/
    LOBYTE(v316) = 0x13; /*0x865529*/
    if ( !v4 ) /*0x86552e*/
    {
      if ( v2 ) /*0x865532*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865534*/
        if ( v4 ) /*0x865537*/
          sub_772560(v2); /*0x86553b*/
      }
      v2 = (NiD3DTextureStage *)*v47; /*0x865540*/
      a3 = *v47; /*0x865545*/
      if ( a3 ) /*0x865549*/
        ++v2[7].Unk08; /*0x86554b*/
    }
    v48 = v315; /*0x86554f*/
    LOBYTE(v316) = 1; /*0x865555*/
    if ( v315 ) /*0x86555a*/
    {
      --v315[7].Unk08; /*0x86555c*/
      if ( !v48[7].Unk08 ) /*0x865564*/
        sub_772560(v48); /*0x865569*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x865575*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x865582*/
    v49 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865594*/
    v4 = v2 == (NiD3DTextureStage *)*v49; /*0x865596*/
    LOBYTE(v316) = 0x14; /*0x865599*/
    if ( !v4 ) /*0x86559e*/
    {
      if ( v2 ) /*0x8655a2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8655a4*/
        if ( v4 ) /*0x8655a7*/
          sub_772560(v2); /*0x8655ab*/
      }
      v2 = (NiD3DTextureStage *)*v49; /*0x8655b0*/
      a3 = *v49; /*0x8655b5*/
      if ( a3 ) /*0x8655b9*/
        ++v2[7].Unk08; /*0x8655bb*/
    }
    v50 = v315; /*0x8655bf*/
    LOBYTE(v316) = 1; /*0x8655c5*/
    if ( v315 ) /*0x8655ca*/
    {
      --v315[7].Unk08; /*0x8655cc*/
      if ( !v50[7].Unk08 ) /*0x8655d4*/
        sub_772560(v50); /*0x8655d9*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x8655e5*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8655f6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x865600*/
    v51 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865612*/
    v4 = v2 == (NiD3DTextureStage *)*v51; /*0x865614*/
    LOBYTE(v316) = 0x15; /*0x865617*/
    if ( !v4 ) /*0x86561c*/
    {
      if ( v2 ) /*0x865620*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865622*/
        if ( v4 ) /*0x865625*/
          sub_772560(v2); /*0x865629*/
      }
      v2 = (NiD3DTextureStage *)*v51; /*0x86562e*/
      a3 = *v51; /*0x865633*/
      if ( a3 ) /*0x865637*/
        ++v2[7].Unk08; /*0x865639*/
    }
    v52 = v315; /*0x86563d*/
    LOBYTE(v316) = 1; /*0x865643*/
    if ( v315 ) /*0x865648*/
    {
      --v315[7].Unk08; /*0x86564a*/
      if ( !v52[7].Unk08 ) /*0x865652*/
        sub_772560(v52); /*0x865657*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x865663*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x865670*/
    v53 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865682*/
    v4 = v2 == (NiD3DTextureStage *)*v53; /*0x865684*/
    LOBYTE(v316) = 0x16; /*0x865687*/
    if ( !v4 ) /*0x86568c*/
    {
      if ( v2 ) /*0x865690*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865692*/
        if ( v4 ) /*0x865695*/
          sub_772560(v2); /*0x865699*/
      }
      v2 = (NiD3DTextureStage *)*v53; /*0x86569e*/
      a3 = *v53; /*0x8656a3*/
      if ( a3 ) /*0x8656a7*/
        ++v2[7].Unk08; /*0x8656a9*/
    }
    v54 = v315; /*0x8656ad*/
    LOBYTE(v316) = 1; /*0x8656b3*/
    if ( v315 ) /*0x8656b8*/
    {
      --v315[7].Unk08; /*0x8656ba*/
      if ( !v54[7].Unk08 ) /*0x8656c2*/
        sub_772560(v54); /*0x8656c7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x8656d3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x8656e0*/
  }
  v55 = v313[0x38]; /*0x8656e9*/
  v56 = *(_DWORD *)(v1 + 0x58); /*0x8656ef*/
  if ( v56 != v55 ) /*0x8656f4*/
  {
    if ( v56 ) /*0x8656f8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) ) /*0x8656fe*/
        (**(void (__thiscall ***)(int, int))v56)(v56, 1); /*0x865715*/
    }
    *(_DWORD *)(v1 + 0x58) = v55; /*0x865719*/
    if ( v55 ) /*0x86571c*/
      InterlockedIncrement((volatile LONG *)(v55 + 4)); /*0x865722*/
  }
  v57 = v313[0x57]; /*0x86572c*/
  v58 = *(_DWORD *)(v1 + 0x44); /*0x865732*/
  if ( v58 != v57 ) /*0x865737*/
  {
    if ( v58 ) /*0x86573b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v58 + 4)) ) /*0x865741*/
        (**(void (__thiscall ***)(int, int))v58)(v58, 1); /*0x865758*/
    }
    *(_DWORD *)(v1 + 0x44) = v57; /*0x86575c*/
    if ( v57 ) /*0x86575f*/
      InterlockedIncrement((volatile LONG *)(v57 + 4)); /*0x865765*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86576b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865776*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x865782*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865787*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865792*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86579e*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8657a3*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8657ae*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8657ba*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8657bf*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8657ca*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x8657d6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8657db*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8657e6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x8657f2*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8657f7*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865802*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86580e*/
  v4 = v1 == unk_B4762C; /*0x865816*/
  unk_B43C60 = 0x79088; /*0x86581c*/
  unk_B442F0 = 0x11C; /*0x865826*/
  if ( !v4 ) /*0x865830*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x865832*/
    if ( v4 ) /*0x865835*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x865839*/
    v1 = unk_B4762C; /*0x86583e*/
    v314 = unk_B4762C; /*0x865846*/
    if ( v314 ) /*0x86584a*/
      ++*(_DWORD *)(v1 + 0x60); /*0x86584c*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x865854*/
  {
    v59 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865867*/
    v4 = v2 == (NiD3DTextureStage *)*v59; /*0x865869*/
    LOBYTE(v316) = 0x17; /*0x86586c*/
    if ( !v4 ) /*0x865871*/
    {
      if ( v2 ) /*0x865875*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865877*/
        if ( v4 ) /*0x86587a*/
          sub_772560(v2); /*0x86587e*/
      }
      v2 = (NiD3DTextureStage *)*v59; /*0x865883*/
      a3 = *v59; /*0x865888*/
      if ( a3 ) /*0x86588c*/
        ++v2[7].Unk08; /*0x86588e*/
    }
    v60 = v315; /*0x865892*/
    LOBYTE(v316) = 1; /*0x865898*/
    if ( v315 ) /*0x86589d*/
    {
      --v315[7].Unk08; /*0x86589f*/
      if ( !v60[7].Unk08 ) /*0x8658a7*/
        sub_772560(v60); /*0x8658ac*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8658b8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x8658c5*/
    v61 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8658d7*/
    v4 = v2 == (NiD3DTextureStage *)*v61; /*0x8658d9*/
    LOBYTE(v316) = 0x18; /*0x8658dc*/
    if ( !v4 ) /*0x8658e1*/
    {
      if ( v2 ) /*0x8658e5*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8658e7*/
        if ( v4 ) /*0x8658ea*/
          sub_772560(v2); /*0x8658ee*/
      }
      v2 = (NiD3DTextureStage *)*v61; /*0x8658f3*/
      a3 = *v61; /*0x8658f8*/
      if ( a3 ) /*0x8658fc*/
        ++v2[7].Unk08; /*0x8658fe*/
    }
    v62 = v315; /*0x865902*/
    LOBYTE(v316) = 1; /*0x865908*/
    if ( v315 ) /*0x86590d*/
    {
      --v315[7].Unk08; /*0x86590f*/
      if ( !v62[7].Unk08 ) /*0x865917*/
        sub_772560(v62); /*0x86591c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x865928*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x865935*/
    v63 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865947*/
    v4 = v2 == (NiD3DTextureStage *)*v63; /*0x865949*/
    LOBYTE(v316) = 0x19; /*0x86594c*/
    if ( !v4 ) /*0x865951*/
    {
      if ( v2 ) /*0x865955*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865957*/
        if ( v4 ) /*0x86595a*/
          sub_772560(v2); /*0x86595e*/
      }
      v2 = (NiD3DTextureStage *)*v63; /*0x865963*/
      a3 = *v63; /*0x865968*/
      if ( a3 ) /*0x86596c*/
        ++v2[7].Unk08; /*0x86596e*/
    }
    v64 = v315; /*0x865972*/
    LOBYTE(v316) = 1; /*0x865978*/
    if ( v315 ) /*0x86597d*/
    {
      --v315[7].Unk08; /*0x86597f*/
      if ( !v64[7].Unk08 ) /*0x865987*/
        sub_772560(v64); /*0x86598c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x865998*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x8659a5*/
    v65 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8659b7*/
    v4 = v2 == (NiD3DTextureStage *)*v65; /*0x8659b9*/
    LOBYTE(v316) = 0x1A; /*0x8659bc*/
    if ( !v4 ) /*0x8659c1*/
    {
      if ( v2 ) /*0x8659c5*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8659c7*/
        if ( v4 ) /*0x8659ca*/
          sub_772560(v2); /*0x8659ce*/
      }
      v2 = (NiD3DTextureStage *)*v65; /*0x8659d3*/
      a3 = *v65; /*0x8659d8*/
      if ( a3 ) /*0x8659dc*/
        ++v2[7].Unk08; /*0x8659de*/
    }
    v66 = v315; /*0x8659e2*/
    LOBYTE(v316) = 1; /*0x8659e8*/
    if ( v315 ) /*0x8659ed*/
    {
      --v315[7].Unk08; /*0x8659ef*/
      if ( !v66[7].Unk08 ) /*0x8659f7*/
        sub_772560(v66); /*0x8659fc*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x865a08*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x865a15*/
    v67 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865a27*/
    v4 = v2 == (NiD3DTextureStage *)*v67; /*0x865a29*/
    LOBYTE(v316) = 0x1B; /*0x865a2c*/
    if ( !v4 ) /*0x865a31*/
    {
      if ( v2 ) /*0x865a35*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865a37*/
        if ( v4 ) /*0x865a3a*/
          sub_772560(v2); /*0x865a3e*/
      }
      v2 = (NiD3DTextureStage *)*v67; /*0x865a43*/
      a3 = *v67; /*0x865a48*/
      if ( a3 ) /*0x865a4c*/
        ++v2[7].Unk08; /*0x865a4e*/
    }
    v68 = v315; /*0x865a52*/
    LOBYTE(v316) = 1; /*0x865a58*/
    if ( v315 ) /*0x865a5d*/
    {
      --v315[7].Unk08; /*0x865a5f*/
      if ( !v68[7].Unk08 ) /*0x865a67*/
        sub_772560(v68); /*0x865a6c*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x865a78*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x865a89*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x865a93*/
    v69 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865aa5*/
    v4 = v2 == (NiD3DTextureStage *)*v69; /*0x865aa7*/
    LOBYTE(v316) = 0x1C; /*0x865aaa*/
    if ( !v4 ) /*0x865aaf*/
    {
      if ( v2 ) /*0x865ab3*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865ab5*/
        if ( v4 ) /*0x865ab8*/
          sub_772560(v2); /*0x865abc*/
      }
      v2 = (NiD3DTextureStage *)*v69; /*0x865ac1*/
      a3 = *v69; /*0x865ac6*/
      if ( a3 ) /*0x865aca*/
        ++v2[7].Unk08; /*0x865acc*/
    }
    v70 = v315; /*0x865ad0*/
    LOBYTE(v316) = 1; /*0x865ad6*/
    if ( v315 ) /*0x865adb*/
    {
      --v315[7].Unk08; /*0x865add*/
      if ( !v70[7].Unk08 ) /*0x865ae5*/
        sub_772560(v70); /*0x865aea*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x865af6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x865b03*/
    v71 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865b15*/
    v4 = v2 == (NiD3DTextureStage *)*v71; /*0x865b17*/
    LOBYTE(v316) = 0x1D; /*0x865b1a*/
    if ( !v4 ) /*0x865b1f*/
    {
      if ( v2 ) /*0x865b23*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865b25*/
        if ( v4 ) /*0x865b28*/
          sub_772560(v2); /*0x865b2c*/
      }
      v2 = (NiD3DTextureStage *)*v71; /*0x865b31*/
      a3 = *v71; /*0x865b36*/
      if ( a3 ) /*0x865b3a*/
        ++v2[7].Unk08; /*0x865b3c*/
    }
    v72 = v315; /*0x865b40*/
    LOBYTE(v316) = 1; /*0x865b46*/
    if ( v315 ) /*0x865b4b*/
    {
      --v315[7].Unk08; /*0x865b4d*/
      if ( !v72[7].Unk08 ) /*0x865b55*/
        sub_772560(v72); /*0x865b5a*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x865b66*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x865b73*/
  }
  v73 = v313[0x38]; /*0x865b7c*/
  v74 = *(_DWORD *)(v1 + 0x58); /*0x865b82*/
  if ( v74 != v73 ) /*0x865b87*/
  {
    if ( v74 ) /*0x865b8b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v74 + 4)) ) /*0x865b91*/
        (**(void (__thiscall ***)(int, int))v74)(v74, 1); /*0x865ba8*/
    }
    *(_DWORD *)(v1 + 0x58) = v73; /*0x865bac*/
    if ( v73 ) /*0x865baf*/
      InterlockedIncrement((volatile LONG *)(v73 + 4)); /*0x865bb5*/
  }
  v75 = v313[0x58]; /*0x865bbf*/
  v76 = *(_DWORD *)(v1 + 0x44); /*0x865bc5*/
  if ( v76 != v75 ) /*0x865bca*/
  {
    if ( v76 ) /*0x865bce*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v76 + 4)) ) /*0x865bd4*/
        (**(void (__thiscall ***)(int, int))v76)(v76, 1); /*0x865beb*/
    }
    *(_DWORD *)(v1 + 0x44) = v75; /*0x865bef*/
    if ( v75 ) /*0x865bf2*/
      InterlockedIncrement((volatile LONG *)(v75 + 4)); /*0x865bf8*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865bfe*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865c09*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x865c15*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865c1a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865c25*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x865c31*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865c36*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865c41*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x865c4d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865c52*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865c5d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x865c69*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865c6e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865c79*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x865c85*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x865c8a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x865c95*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x865ca1*/
  v4 = v1 == unk_B47630; /*0x865ca9*/
  unk_B43C68 = 0x79088; /*0x865caf*/
  unk_B442F8 = 0x19C; /*0x865cb9*/
  if ( !v4 ) /*0x865cc3*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x865cc5*/
    if ( v4 ) /*0x865cc8*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x865ccc*/
    v1 = unk_B47630; /*0x865cd1*/
    v314 = unk_B47630; /*0x865cd9*/
    if ( v314 ) /*0x865cdd*/
      ++*(_DWORD *)(v1 + 0x60); /*0x865cdf*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x865ce7*/
  {
    v77 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865cfa*/
    v4 = v2 == (NiD3DTextureStage *)*v77; /*0x865cfc*/
    LOBYTE(v316) = 0x1E; /*0x865cff*/
    if ( !v4 ) /*0x865d04*/
    {
      if ( v2 ) /*0x865d08*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865d0a*/
        if ( v4 ) /*0x865d0d*/
          sub_772560(v2); /*0x865d11*/
      }
      v2 = (NiD3DTextureStage *)*v77; /*0x865d16*/
      a3 = *v77; /*0x865d1b*/
      if ( a3 ) /*0x865d1f*/
        ++v2[7].Unk08; /*0x865d21*/
    }
    v78 = v315; /*0x865d25*/
    LOBYTE(v316) = 1; /*0x865d2b*/
    if ( v315 ) /*0x865d30*/
    {
      --v315[7].Unk08; /*0x865d32*/
      if ( !v78[7].Unk08 ) /*0x865d3a*/
        sub_772560(v78); /*0x865d3f*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x865d4b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x865d58*/
    v79 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865d6a*/
    v4 = v2 == (NiD3DTextureStage *)*v79; /*0x865d6c*/
    LOBYTE(v316) = 0x1F; /*0x865d6f*/
    if ( !v4 ) /*0x865d74*/
    {
      if ( v2 ) /*0x865d78*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865d7a*/
        if ( v4 ) /*0x865d7d*/
          sub_772560(v2); /*0x865d81*/
      }
      v2 = (NiD3DTextureStage *)*v79; /*0x865d86*/
      a3 = *v79; /*0x865d8b*/
      if ( a3 ) /*0x865d8f*/
        ++v2[7].Unk08; /*0x865d91*/
    }
    v80 = v315; /*0x865d95*/
    LOBYTE(v316) = 1; /*0x865d9b*/
    if ( v315 ) /*0x865da0*/
    {
      --v315[7].Unk08; /*0x865da2*/
      if ( !v80[7].Unk08 ) /*0x865daa*/
        sub_772560(v80); /*0x865daf*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x865dbb*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x865dc8*/
    v81 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865dda*/
    v4 = v2 == (NiD3DTextureStage *)*v81; /*0x865ddc*/
    LOBYTE(v316) = 0x20; /*0x865ddf*/
    if ( !v4 ) /*0x865de4*/
    {
      if ( v2 ) /*0x865de8*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865dea*/
        if ( v4 ) /*0x865ded*/
          sub_772560(v2); /*0x865df1*/
      }
      v2 = (NiD3DTextureStage *)*v81; /*0x865df6*/
      a3 = *v81; /*0x865dfb*/
      if ( a3 ) /*0x865dff*/
        ++v2[7].Unk08; /*0x865e01*/
    }
    v82 = v315; /*0x865e05*/
    LOBYTE(v316) = 1; /*0x865e0b*/
    if ( v315 ) /*0x865e10*/
    {
      --v315[7].Unk08; /*0x865e12*/
      if ( !v82[7].Unk08 ) /*0x865e1a*/
        sub_772560(v82); /*0x865e1f*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x865e2b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x865e38*/
    v83 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865e4a*/
    v4 = v2 == (NiD3DTextureStage *)*v83; /*0x865e4c*/
    LOBYTE(v316) = 0x21; /*0x865e4f*/
    if ( !v4 ) /*0x865e54*/
    {
      if ( v2 ) /*0x865e58*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865e5a*/
        if ( v4 ) /*0x865e5d*/
          sub_772560(v2); /*0x865e61*/
      }
      v2 = (NiD3DTextureStage *)*v83; /*0x865e66*/
      a3 = *v83; /*0x865e6b*/
      if ( a3 ) /*0x865e6f*/
        ++v2[7].Unk08; /*0x865e71*/
    }
    v84 = v315; /*0x865e75*/
    LOBYTE(v316) = 1; /*0x865e7b*/
    if ( v315 ) /*0x865e80*/
    {
      --v315[7].Unk08; /*0x865e82*/
      if ( !v84[7].Unk08 ) /*0x865e8a*/
        sub_772560(v84); /*0x865e8f*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x865e9b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x865ea8*/
    v85 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865eba*/
    v4 = v2 == (NiD3DTextureStage *)*v85; /*0x865ebc*/
    LOBYTE(v316) = 0x22; /*0x865ebf*/
    if ( !v4 ) /*0x865ec4*/
    {
      if ( v2 ) /*0x865ec8*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865eca*/
        if ( v4 ) /*0x865ecd*/
          sub_772560(v2); /*0x865ed1*/
      }
      v2 = (NiD3DTextureStage *)*v85; /*0x865ed6*/
      a3 = *v85; /*0x865edb*/
      if ( a3 ) /*0x865edf*/
        ++v2[7].Unk08; /*0x865ee1*/
    }
    v86 = v315; /*0x865ee5*/
    LOBYTE(v316) = 1; /*0x865eeb*/
    if ( v315 ) /*0x865ef0*/
    {
      --v315[7].Unk08; /*0x865ef2*/
      if ( !v86[7].Unk08 ) /*0x865efa*/
        sub_772560(v86); /*0x865eff*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x865f0b*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x865f1c*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x865f26*/
    v87 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865f38*/
    v4 = v2 == (NiD3DTextureStage *)*v87; /*0x865f3a*/
    LOBYTE(v316) = 0x23; /*0x865f3d*/
    if ( !v4 ) /*0x865f42*/
    {
      if ( v2 ) /*0x865f46*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865f48*/
        if ( v4 ) /*0x865f4b*/
          sub_772560(v2); /*0x865f4f*/
      }
      v2 = (NiD3DTextureStage *)*v87; /*0x865f54*/
      a3 = *v87; /*0x865f59*/
      if ( a3 ) /*0x865f5d*/
        ++v2[7].Unk08; /*0x865f5f*/
    }
    v88 = v315; /*0x865f63*/
    LOBYTE(v316) = 1; /*0x865f69*/
    if ( v315 ) /*0x865f6e*/
    {
      --v315[7].Unk08; /*0x865f70*/
      if ( !v88[7].Unk08 ) /*0x865f78*/
        sub_772560(v88); /*0x865f7d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x865f89*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x865f96*/
    v89 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x865fa8*/
    v4 = v2 == (NiD3DTextureStage *)*v89; /*0x865faa*/
    LOBYTE(v316) = 0x24; /*0x865fad*/
    if ( !v4 ) /*0x865fb2*/
    {
      if ( v2 ) /*0x865fb6*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x865fb8*/
        if ( v4 ) /*0x865fbb*/
          sub_772560(v2); /*0x865fbf*/
      }
      v2 = (NiD3DTextureStage *)*v89; /*0x865fc4*/
      a3 = *v89; /*0x865fc9*/
      if ( a3 ) /*0x865fcd*/
        ++v2[7].Unk08; /*0x865fcf*/
    }
    v90 = v315; /*0x865fd3*/
    LOBYTE(v316) = 1; /*0x865fd9*/
    if ( v315 ) /*0x865fde*/
    {
      --v315[7].Unk08; /*0x865fe0*/
      if ( !v90[7].Unk08 ) /*0x865fe8*/
        sub_772560(v90); /*0x865fed*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x865ff9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x866006*/
  }
  v91 = v313[0x39]; /*0x86600f*/
  v92 = *(_DWORD *)(v1 + 0x58); /*0x866015*/
  if ( v92 != v91 ) /*0x86601a*/
  {
    if ( v92 ) /*0x86601e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v92 + 4)) ) /*0x866024*/
        (**(void (__thiscall ***)(int, int))v92)(v92, 1); /*0x86603b*/
    }
    *(_DWORD *)(v1 + 0x58) = v91; /*0x86603f*/
    if ( v91 ) /*0x866042*/
      InterlockedIncrement((volatile LONG *)(v91 + 4)); /*0x866048*/
  }
  v93 = v313[0x59]; /*0x866052*/
  v94 = *(_DWORD *)(v1 + 0x44); /*0x866058*/
  if ( v94 != v93 ) /*0x86605d*/
  {
    if ( v94 ) /*0x866061*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v94 + 4)) ) /*0x866067*/
        (**(void (__thiscall ***)(int, int))v94)(v94, 1); /*0x86607e*/
    }
    *(_DWORD *)(v1 + 0x44) = v93; /*0x866082*/
    if ( v93 ) /*0x866085*/
      InterlockedIncrement((volatile LONG *)(v93 + 4)); /*0x86608b*/
  }
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866091*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86609c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x8660a8*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8660ad*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8660b8*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8660c4*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8660c9*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8660d4*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8660e0*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8660e5*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8660f0*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x8660fc*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866101*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86610c*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x866118*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86611d*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866128*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x866134*/
  v4 = v1 == unk_B47634; /*0x866139*/
  unk_B43C7C = 0x390F2; /*0x866144*/
  unk_B4430C = 0x11C; /*0x86614a*/
  if ( !v4 ) /*0x866154*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x866156*/
    if ( v4 ) /*0x86615a*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x86615e*/
    v1 = unk_B47634; /*0x866163*/
    v314 = unk_B47634; /*0x86616b*/
    if ( v314 ) /*0x86616f*/
      ++*(_DWORD *)(v1 + 0x60); /*0x866171*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x866179*/
  {
    v95 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x86618c*/
    v4 = v2 == (NiD3DTextureStage *)*v95; /*0x86618e*/
    LOBYTE(v316) = 0x25; /*0x866191*/
    if ( !v4 ) /*0x866196*/
    {
      if ( v2 ) /*0x86619a*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86619c*/
        if ( v4 ) /*0x8661a0*/
          sub_772560(v2); /*0x8661a4*/
      }
      v2 = (NiD3DTextureStage *)*v95; /*0x8661a9*/
      a3 = *v95; /*0x8661ae*/
      if ( a3 ) /*0x8661b2*/
        ++v2[7].Unk08; /*0x8661b4*/
    }
    v96 = v315; /*0x8661b8*/
    LOBYTE(v316) = 1; /*0x8661be*/
    if ( v315 ) /*0x8661c3*/
    {
      --v315[7].Unk08; /*0x8661c5*/
      if ( !v96[7].Unk08 ) /*0x8661ce*/
        sub_772560(v96); /*0x8661d3*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x8661df*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x8661ec*/
    v97 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8661fe*/
    v4 = v2 == (NiD3DTextureStage *)*v97; /*0x866200*/
    LOBYTE(v316) = 0x26; /*0x866203*/
    if ( !v4 ) /*0x866208*/
    {
      if ( v2 ) /*0x86620c*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x86620e*/
        if ( v4 ) /*0x866212*/
          sub_772560(v2); /*0x866216*/
      }
      v2 = (NiD3DTextureStage *)*v97; /*0x86621b*/
      a3 = *v97; /*0x866220*/
      if ( a3 ) /*0x866224*/
        ++v2[7].Unk08; /*0x866226*/
    }
    v98 = v315; /*0x86622a*/
    LOBYTE(v316) = 1; /*0x866230*/
    if ( v315 ) /*0x866235*/
    {
      --v315[7].Unk08; /*0x866237*/
      if ( !v98[7].Unk08 ) /*0x866240*/
        sub_772560(v98); /*0x866245*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x866251*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x86625e*/
    v99 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x866270*/
    v4 = v2 == (NiD3DTextureStage *)*v99; /*0x866272*/
    LOBYTE(v316) = 0x27; /*0x866275*/
    if ( !v4 ) /*0x86627a*/
    {
      if ( v2 ) /*0x86627e*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x866280*/
        if ( v4 ) /*0x866284*/
          sub_772560(v2); /*0x866288*/
      }
      v2 = (NiD3DTextureStage *)*v99; /*0x86628d*/
      a3 = *v99; /*0x866292*/
      if ( a3 ) /*0x866296*/
        ++v2[7].Unk08; /*0x866298*/
    }
    v100 = v315; /*0x86629c*/
    LOBYTE(v316) = 1; /*0x8662a2*/
    if ( v315 ) /*0x8662a7*/
    {
      --v315[7].Unk08; /*0x8662a9*/
      if ( !v100[7].Unk08 ) /*0x8662b2*/
        sub_772560(v100); /*0x8662b7*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 2, 1, 2); /*0x8662c3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, &v2->Stage); /*0x8662d0*/
    v101 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8662e2*/
    v4 = v2 == (NiD3DTextureStage *)*v101; /*0x8662e4*/
    LOBYTE(v316) = 0x28; /*0x8662e7*/
    if ( !v4 ) /*0x8662ec*/
    {
      if ( v2 ) /*0x8662f0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8662f2*/
        if ( v4 ) /*0x8662f6*/
          sub_772560(v2); /*0x8662fa*/
      }
      v2 = (NiD3DTextureStage *)*v101; /*0x8662ff*/
      a3 = *v101; /*0x866304*/
      if ( a3 ) /*0x866308*/
        ++v2[7].Unk08; /*0x86630a*/
    }
    v102 = v315; /*0x86630e*/
    LOBYTE(v316) = 1; /*0x866314*/
    if ( v315 ) /*0x866319*/
    {
      --v315[7].Unk08; /*0x86631b*/
      if ( !v102[7].Unk08 ) /*0x866324*/
        sub_772560(v102); /*0x866329*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 3, 1, 2); /*0x866335*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, &v2->Stage); /*0x866342*/
    v103 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x866354*/
    v4 = v2 == (NiD3DTextureStage *)*v103; /*0x866356*/
    LOBYTE(v316) = 0x29; /*0x866359*/
    if ( !v4 ) /*0x86635e*/
    {
      if ( v2 ) /*0x866362*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x866364*/
        if ( v4 ) /*0x866368*/
          sub_772560(v2); /*0x86636c*/
      }
      v2 = (NiD3DTextureStage *)*v103; /*0x866371*/
      a3 = *v103; /*0x866376*/
      if ( a3 ) /*0x86637a*/
        ++v2[7].Unk08; /*0x86637c*/
    }
    v104 = v315; /*0x866380*/
    LOBYTE(v316) = 1; /*0x866386*/
    if ( v315 ) /*0x86638b*/
    {
      --v315[7].Unk08; /*0x86638d*/
      if ( !v104[7].Unk08 ) /*0x866396*/
        sub_772560(v104); /*0x86639b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 4, 3, 0); /*0x8663a7*/
    NiD3DTextureStage_SetTexture(v2, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8663b8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v2->Stage); /*0x8663c2*/
    v105 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8663d4*/
    v4 = v2 == (NiD3DTextureStage *)*v105; /*0x8663d6*/
    LOBYTE(v316) = 0x2A; /*0x8663d9*/
    if ( !v4 ) /*0x8663de*/
    {
      if ( v2 ) /*0x8663e2*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8663e4*/
        if ( v4 ) /*0x8663e8*/
          sub_772560(v2); /*0x8663ec*/
      }
      v2 = (NiD3DTextureStage *)*v105; /*0x8663f1*/
      a3 = *v105; /*0x8663f6*/
      if ( a3 ) /*0x8663fa*/
        ++v2[7].Unk08; /*0x8663fc*/
    }
    v106 = v315; /*0x866400*/
    LOBYTE(v316) = 1; /*0x866406*/
    if ( v315 ) /*0x86640b*/
    {
      --v315[7].Unk08; /*0x86640d*/
      if ( !v106[7].Unk08 ) /*0x866416*/
        sub_772560(v106); /*0x86641b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 5, 1, 2); /*0x866427*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, &v2->Stage); /*0x866434*/
    v107 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x866446*/
    v4 = v2 == (NiD3DTextureStage *)*v107; /*0x866448*/
    LOBYTE(v316) = 0x2B; /*0x86644b*/
    if ( !v4 ) /*0x866450*/
    {
      if ( v2 ) /*0x866454*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x866456*/
        if ( v4 ) /*0x86645a*/
          sub_772560(v2); /*0x86645e*/
      }
      v2 = (NiD3DTextureStage *)*v107; /*0x866463*/
      a3 = *v107; /*0x866468*/
      if ( a3 ) /*0x86646c*/
        ++v2[7].Unk08; /*0x86646e*/
    }
    v108 = v315; /*0x866472*/
    LOBYTE(v316) = 1; /*0x866478*/
    if ( v315 ) /*0x86647d*/
    {
      --v315[7].Unk08; /*0x86647f*/
      if ( !v108[7].Unk08 ) /*0x866488*/
        sub_772560(v108); /*0x86648d*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 6, 3, 0); /*0x866499*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x8664a6*/
  }
  v109 = v313; /*0x8664ab*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x39]); /*0x8664b8*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v313[0x5A]); /*0x8664c6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8664cb*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8664d6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x8664e2*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8664e7*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8664f2*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8664fe*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866503*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86650e*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86651a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86651f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86652a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x866536*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86653b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866546*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x866552*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866557*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866562*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x86656e*/
  v4 = v1 == unk_B47638; /*0x866573*/
  unk_B43C80 = 0x390F2; /*0x866579*/
  unk_B44310 = 0x19C; /*0x866584*/
  if ( !v4 ) /*0x86658a*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86658c*/
    if ( v4 ) /*0x866590*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x866594*/
    v1 = unk_B47638; /*0x866599*/
    v314 = unk_B47638; /*0x8665a1*/
    if ( v314 ) /*0x8665a5*/
      ++*(_DWORD *)(v1 + 0x60); /*0x8665a7*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x8665af*/
  {
    v110 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x8665c2*/
    v4 = v2 == (NiD3DTextureStage *)*v110; /*0x8665c4*/
    LOBYTE(v316) = 0x2C; /*0x8665c7*/
    if ( !v4 ) /*0x8665cc*/
    {
      if ( v2 ) /*0x8665d0*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x8665d2*/
        if ( v4 ) /*0x8665d6*/
          sub_772560(v2); /*0x8665da*/
      }
      v2 = (NiD3DTextureStage *)*v110; /*0x8665df*/
      a3 = *v110; /*0x8665e4*/
      if ( a3 ) /*0x8665e8*/
        ++v2[7].Unk08; /*0x8665ea*/
    }
    v111 = v315; /*0x8665ee*/
    LOBYTE(v316) = 1; /*0x8665f4*/
    if ( v315 ) /*0x8665f9*/
    {
      --v315[7].Unk08; /*0x8665fb*/
      if ( !v111[7].Unk08 ) /*0x866604*/
        sub_772560(v111); /*0x866609*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 0, 1, 2); /*0x866615*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, &v2->Stage); /*0x866622*/
    v112 = (unsigned int **)NiD3DTextureStagePool_Acquire(&v315); /*0x866634*/
    v4 = v2 == (NiD3DTextureStage *)*v112; /*0x866636*/
    LOBYTE(v316) = 0x2D; /*0x866639*/
    if ( !v4 ) /*0x86663e*/
    {
      if ( v2 ) /*0x866642*/
      {
        v4 = v2[7].Unk08-- == 1; /*0x866644*/
        if ( v4 ) /*0x866648*/
          sub_772560(v2); /*0x86664c*/
      }
      v2 = (NiD3DTextureStage *)*v112; /*0x866651*/
      a3 = *v112; /*0x866656*/
      if ( a3 ) /*0x86665a*/
        ++v2[7].Unk08; /*0x86665c*/
    }
    v113 = v315; /*0x866660*/
    LOBYTE(v316) = 1; /*0x866666*/
    if ( v315 ) /*0x86666b*/
    {
      --v315[7].Unk08; /*0x86666d*/
      if ( !v113[7].Unk08 ) /*0x866676*/
        sub_772560(v113); /*0x86667b*/
    }
    BSShader_ConfigureTextureStageSampler(v2, 1, 1, 2); /*0x866687*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, &v2->Stage); /*0x866694*/
    v114 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86669e*/
    LOBYTE(v316) = 0x2E; /*0x8666ab*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v114); /*0x8666b0*/
    v115 = v315; /*0x8666b5*/
    LOBYTE(v316) = 1; /*0x8666bb*/
    if ( v315 ) /*0x8666c0*/
    {
      --v315[7].Unk08; /*0x8666c2*/
      if ( !v115[7].Unk08 ) /*0x8666cb*/
        sub_772560(v115); /*0x8666d0*/
    }
    v116 = a3; /*0x8666d5*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8666e0*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v116); /*0x8666ed*/
    v117 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8666f7*/
    LOBYTE(v316) = 0x2F; /*0x866704*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v117); /*0x866709*/
    v118 = v315; /*0x86670e*/
    LOBYTE(v316) = 1; /*0x866714*/
    if ( v315 ) /*0x866719*/
    {
      --v315[7].Unk08; /*0x86671b*/
      if ( !v118[7].Unk08 ) /*0x866724*/
        sub_772560(v118); /*0x866729*/
    }
    v119 = a3; /*0x86672e*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x866739*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v119); /*0x866746*/
    v120 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866750*/
    LOBYTE(v316) = 0x30; /*0x86675d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v120); /*0x866762*/
    v121 = v315; /*0x866767*/
    LOBYTE(v316) = 1; /*0x86676d*/
    if ( v315 ) /*0x866772*/
    {
      --v315[7].Unk08; /*0x866774*/
      if ( !v121[7].Unk08 ) /*0x86677d*/
        sub_772560(v121); /*0x866782*/
    }
    v122 = (NiD3DTextureStage *)a3; /*0x866787*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x866792*/
    NiD3DTextureStage_SetTexture(v122, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8667a3*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v122->Stage); /*0x8667ad*/
    v123 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8667b7*/
    LOBYTE(v316) = 0x31; /*0x8667c4*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v123); /*0x8667c9*/
    v124 = v315; /*0x8667ce*/
    LOBYTE(v316) = 1; /*0x8667d4*/
    if ( v315 ) /*0x8667d9*/
    {
      --v315[7].Unk08; /*0x8667db*/
      if ( !v124[7].Unk08 ) /*0x8667e4*/
        sub_772560(v124); /*0x8667e9*/
    }
    v125 = a3; /*0x8667ee*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x8667f9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v125); /*0x866806*/
    v126 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866810*/
    LOBYTE(v316) = 0x32; /*0x86681d*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v126); /*0x866822*/
    v127 = v315; /*0x866827*/
    LOBYTE(v316) = 1; /*0x86682d*/
    if ( v315 ) /*0x866832*/
    {
      --v315[7].Unk08; /*0x866834*/
      if ( !v127[7].Unk08 ) /*0x86683d*/
        sub_772560(v127); /*0x866842*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x866847*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x866852*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x86685f*/
    v109 = v313; /*0x866864*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v109[0x3A]); /*0x866871*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v109[0x59]); /*0x86687f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866884*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86688f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x86689b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8668a0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8668ab*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8668b7*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8668bc*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8668c7*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8668d3*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8668d8*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8668e3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x8668ef*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8668f4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8668ff*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86690b*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866910*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86691b*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x866927*/
  v4 = v1 == unk_B4763C; /*0x86692c*/
  unk_B43C8C = 0x790F8; /*0x866937*/
  unk_B4431C = 0x11C; /*0x86693d*/
  if ( !v4 ) /*0x866947*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x866949*/
    if ( v4 ) /*0x86694d*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x866951*/
    v1 = unk_B4763C; /*0x866956*/
    v314 = unk_B4763C; /*0x86695e*/
    if ( v314 ) /*0x866962*/
      ++*(_DWORD *)(v1 + 0x60); /*0x866964*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x86696c*/
  {
    v128 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866977*/
    LOBYTE(v316) = 0x33; /*0x866984*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v128); /*0x866989*/
    v129 = v315; /*0x86698e*/
    LOBYTE(v316) = 1; /*0x866994*/
    if ( v315 ) /*0x866999*/
    {
      --v315[7].Unk08; /*0x86699b*/
      if ( !v129[7].Unk08 ) /*0x8669a4*/
        sub_772560(v129); /*0x8669a9*/
    }
    v130 = a3; /*0x8669ae*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8669b9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v130); /*0x8669c6*/
    v131 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8669d0*/
    LOBYTE(v316) = 0x34; /*0x8669dd*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v131); /*0x8669e2*/
    v132 = v315; /*0x8669e7*/
    LOBYTE(v316) = 1; /*0x8669ed*/
    if ( v315 ) /*0x8669f2*/
    {
      --v315[7].Unk08; /*0x8669f4*/
      if ( !v132[7].Unk08 ) /*0x8669fd*/
        sub_772560(v132); /*0x866a02*/
    }
    v133 = a3; /*0x866a07*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x866a12*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v133); /*0x866a1f*/
    v134 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866a29*/
    LOBYTE(v316) = 0x35; /*0x866a36*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v134); /*0x866a3b*/
    v135 = v315; /*0x866a40*/
    LOBYTE(v316) = 1; /*0x866a46*/
    if ( v315 ) /*0x866a4b*/
    {
      --v315[7].Unk08; /*0x866a4d*/
      if ( !v135[7].Unk08 ) /*0x866a56*/
        sub_772560(v135); /*0x866a5b*/
    }
    v136 = a3; /*0x866a60*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x866a6b*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v136); /*0x866a78*/
    v137 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866a82*/
    LOBYTE(v316) = 0x36; /*0x866a8f*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v137); /*0x866a94*/
    v138 = v315; /*0x866a99*/
    LOBYTE(v316) = 1; /*0x866a9f*/
    if ( v315 ) /*0x866aa4*/
    {
      --v315[7].Unk08; /*0x866aa6*/
      if ( !v138[7].Unk08 ) /*0x866aaf*/
        sub_772560(v138); /*0x866ab4*/
    }
    v139 = a3; /*0x866ab9*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x866ac4*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v139); /*0x866ad1*/
    v140 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866adb*/
    LOBYTE(v316) = 0x37; /*0x866ae8*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v140); /*0x866aed*/
    v141 = v315; /*0x866af2*/
    LOBYTE(v316) = 1; /*0x866af8*/
    if ( v315 ) /*0x866afd*/
    {
      --v315[7].Unk08; /*0x866aff*/
      if ( !v141[7].Unk08 ) /*0x866b08*/
        sub_772560(v141); /*0x866b0d*/
    }
    v142 = (NiD3DTextureStage *)a3; /*0x866b12*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x866b1d*/
    NiD3DTextureStage_SetTexture(v142, (NiTexture *)LODWORD(flt_B43110[0])); /*0x866b2d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v142->Stage); /*0x866b37*/
    v143 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866b41*/
    LOBYTE(v316) = 0x38; /*0x866b4e*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v143); /*0x866b53*/
    v144 = v315; /*0x866b58*/
    LOBYTE(v316) = 1; /*0x866b5e*/
    if ( v315 ) /*0x866b63*/
    {
      --v315[7].Unk08; /*0x866b65*/
      if ( !v144[7].Unk08 ) /*0x866b6e*/
        sub_772560(v144); /*0x866b73*/
    }
    v145 = a3; /*0x866b78*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x866b83*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v145); /*0x866b90*/
    v146 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866b9a*/
    LOBYTE(v316) = 0x39; /*0x866ba7*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v146); /*0x866bac*/
    v147 = v315; /*0x866bb1*/
    LOBYTE(v316) = 1; /*0x866bb7*/
    if ( v315 ) /*0x866bbc*/
    {
      --v315[7].Unk08; /*0x866bbe*/
      if ( !v147[7].Unk08 ) /*0x866bc7*/
        sub_772560(v147); /*0x866bcc*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x866bd1*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x866bdc*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x866be9*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3A]); /*0x866bfb*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v313[0x5A]); /*0x866c0d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866c12*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866c1d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x866c29*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866c2e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866c39*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x866c45*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866c4a*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866c55*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x866c61*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866c66*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866c71*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x866c7d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866c82*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866c8d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x866c99*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866c9e*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866ca9*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x866cb5*/
  v4 = v1 == unk_B47640; /*0x866cba*/
  unk_B43C8C = 0x790F8; /*0x866cc0*/
  unk_B4431C = 0x19C; /*0x866cc6*/
  if ( !v4 ) /*0x866ccc*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x866cce*/
    if ( v4 ) /*0x866cd2*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x866cd6*/
    v1 = unk_B47640; /*0x866cdb*/
    v314 = unk_B47640; /*0x866ce3*/
    if ( v314 ) /*0x866cec*/
      ++*(_DWORD *)(v1 + 0x60); /*0x866cee*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x866cfc*/
  {
    v148 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866d07*/
    LOBYTE(v316) = 0x3A; /*0x866d14*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v148); /*0x866d19*/
    v149 = v315; /*0x866d1e*/
    LOBYTE(v316) = 1; /*0x866d24*/
    if ( v315 ) /*0x866d29*/
    {
      --v315[7].Unk08; /*0x866d2b*/
      if ( !v149[7].Unk08 ) /*0x866d34*/
        sub_772560(v149); /*0x866d39*/
    }
    v150 = a3; /*0x866d3e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x866d48*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v150); /*0x866d55*/
    v151 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866d5f*/
    LOBYTE(v316) = 0x3B; /*0x866d6c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v151); /*0x866d71*/
    v152 = v315; /*0x866d76*/
    LOBYTE(v316) = 1; /*0x866d7c*/
    if ( v315 ) /*0x866d81*/
    {
      --v315[7].Unk08; /*0x866d83*/
      if ( !v152[7].Unk08 ) /*0x866d8c*/
        sub_772560(v152); /*0x866d91*/
    }
    v153 = a3; /*0x866d96*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x866d9f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v153); /*0x866dab*/
    v154 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866db5*/
    LOBYTE(v316) = 0x3C; /*0x866dc2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v154); /*0x866dc7*/
    v155 = v315; /*0x866dcc*/
    LOBYTE(v316) = 1; /*0x866dd2*/
    if ( v315 ) /*0x866dd7*/
    {
      --v315[7].Unk08; /*0x866dd9*/
      if ( !v155[7].Unk08 ) /*0x866de2*/
        sub_772560(v155); /*0x866de7*/
    }
    v156 = a3; /*0x866dec*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x866df6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v156); /*0x866e03*/
    v157 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866e0d*/
    LOBYTE(v316) = 0x3D; /*0x866e1a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v157); /*0x866e1f*/
    v158 = v315; /*0x866e24*/
    LOBYTE(v316) = 1; /*0x866e2a*/
    if ( v315 ) /*0x866e2f*/
    {
      --v315[7].Unk08; /*0x866e31*/
      if ( !v158[7].Unk08 ) /*0x866e3a*/
        sub_772560(v158); /*0x866e3f*/
    }
    v159 = a3; /*0x866e44*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x866e4e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v159); /*0x866e5b*/
    v160 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866e65*/
    LOBYTE(v316) = 0x3E; /*0x866e72*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v160); /*0x866e77*/
    v161 = v315; /*0x866e7c*/
    LOBYTE(v316) = 1; /*0x866e82*/
    if ( v315 ) /*0x866e87*/
    {
      --v315[7].Unk08; /*0x866e89*/
      if ( !v161[7].Unk08 ) /*0x866e92*/
        sub_772560(v161); /*0x866e97*/
    }
    v162 = (NiD3DTextureStage *)a3; /*0x866e9c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x866ea7*/
    NiD3DTextureStage_SetTexture(v162, (NiTexture *)LODWORD(flt_B43110[0])); /*0x866eb8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v162->Stage); /*0x866ec2*/
    v163 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866ecc*/
    LOBYTE(v316) = 0x3F; /*0x866ed9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v163); /*0x866ede*/
    v164 = v315; /*0x866ee3*/
    LOBYTE(v316) = 1; /*0x866ee9*/
    if ( v315 ) /*0x866eee*/
    {
      --v315[7].Unk08; /*0x866ef0*/
      if ( !v164[7].Unk08 ) /*0x866ef9*/
        sub_772560(v164); /*0x866efe*/
    }
    v165 = a3; /*0x866f03*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x866f0d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v165); /*0x866f1a*/
    v166 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x866f24*/
    LOBYTE(v316) = 0x40; /*0x866f31*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v166); /*0x866f36*/
    v167 = v315; /*0x866f3b*/
    LOBYTE(v316) = 1; /*0x866f41*/
    if ( v315 ) /*0x866f46*/
    {
      --v315[7].Unk08; /*0x866f48*/
      if ( !v167[7].Unk08 ) /*0x866f51*/
        sub_772560(v167); /*0x866f56*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x866f5b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x866f66*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x866f73*/
  }
  v168 = v313; /*0x866f78*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3B]); /*0x866f85*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v168[0x5B]); /*0x866f93*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866f98*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866fa3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x866faf*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866fb4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866fbf*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x866fcb*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866fd0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866fdb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x866fe6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x866feb*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x866ff6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x867002*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867007*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867012*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86701d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867022*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86702d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x867039*/
  v4 = v1 == unk_B47644; /*0x86703e*/
  unk_B43CA8 = 0x3B082; /*0x867049*/
  unk_B44338 = 0x13C; /*0x86704f*/
  if ( !v4 ) /*0x867059*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86705b*/
    if ( v4 ) /*0x86705f*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x867063*/
    v1 = unk_B47644; /*0x867068*/
    v314 = unk_B47644; /*0x867070*/
    if ( v314 ) /*0x867074*/
      ++*(_DWORD *)(v1 + 0x60); /*0x867076*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x86707d*/
  {
    v169 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867088*/
    LOBYTE(v316) = 0x41; /*0x867095*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v169); /*0x86709a*/
    v170 = v315; /*0x86709f*/
    LOBYTE(v316) = 1; /*0x8670a5*/
    if ( v315 ) /*0x8670aa*/
    {
      --v315[7].Unk08; /*0x8670ac*/
      if ( !v170[7].Unk08 ) /*0x8670b5*/
        sub_772560(v170); /*0x8670ba*/
    }
    v171 = a3; /*0x8670bf*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8670c9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v171); /*0x8670d6*/
    v172 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8670e0*/
    LOBYTE(v316) = 0x42; /*0x8670ed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v172); /*0x8670f2*/
    v173 = v315; /*0x8670f7*/
    LOBYTE(v316) = 1; /*0x8670fd*/
    if ( v315 ) /*0x867102*/
    {
      --v315[7].Unk08; /*0x867104*/
      if ( !v173[7].Unk08 ) /*0x86710d*/
        sub_772560(v173); /*0x867112*/
    }
    v174 = a3; /*0x867117*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x867120*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v174); /*0x86712c*/
    v175 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867136*/
    LOBYTE(v316) = 0x43; /*0x867143*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v175); /*0x867148*/
    v176 = v315; /*0x86714d*/
    LOBYTE(v316) = 1; /*0x867153*/
    if ( v315 ) /*0x867158*/
    {
      --v315[7].Unk08; /*0x86715a*/
      if ( !v176[7].Unk08 ) /*0x867163*/
        sub_772560(v176); /*0x867168*/
    }
    v177 = a3; /*0x86716d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x867177*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v177); /*0x867184*/
    v178 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86718e*/
    LOBYTE(v316) = 0x44; /*0x86719b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v178); /*0x8671a0*/
    v179 = v315; /*0x8671a5*/
    LOBYTE(v316) = 1; /*0x8671ab*/
    if ( v315 ) /*0x8671b0*/
    {
      --v315[7].Unk08; /*0x8671b2*/
      if ( !v179[7].Unk08 ) /*0x8671bb*/
        sub_772560(v179); /*0x8671c0*/
    }
    v180 = a3; /*0x8671c5*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8671cf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v180); /*0x8671dc*/
    v181 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8671e6*/
    LOBYTE(v316) = 0x45; /*0x8671f3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v181); /*0x8671f8*/
    v182 = v315; /*0x8671fd*/
    LOBYTE(v316) = 1; /*0x867203*/
    if ( v315 ) /*0x867208*/
    {
      --v315[7].Unk08; /*0x86720a*/
      if ( !v182[7].Unk08 ) /*0x867213*/
        sub_772560(v182); /*0x867218*/
    }
    v183 = (NiD3DTextureStage *)a3; /*0x86721d*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x867228*/
    NiD3DTextureStage_SetTexture(v183, (NiTexture *)LODWORD(flt_B43110[0])); /*0x867238*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v183->Stage); /*0x867242*/
    v184 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86724c*/
    LOBYTE(v316) = 0x46; /*0x867259*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v184); /*0x86725e*/
    v185 = v315; /*0x867263*/
    LOBYTE(v316) = 1; /*0x867269*/
    if ( v315 ) /*0x86726e*/
    {
      --v315[7].Unk08; /*0x867270*/
      if ( !v185[7].Unk08 ) /*0x867279*/
        sub_772560(v185); /*0x86727e*/
    }
    v186 = a3; /*0x867283*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x86728d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v186); /*0x86729a*/
    v187 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8672a4*/
    LOBYTE(v316) = 0x47; /*0x8672b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v187); /*0x8672b6*/
    v188 = v315; /*0x8672bb*/
    LOBYTE(v316) = 1; /*0x8672c1*/
    if ( v315 ) /*0x8672c6*/
    {
      --v315[7].Unk08; /*0x8672c8*/
      if ( !v188[7].Unk08 ) /*0x8672d1*/
        sub_772560(v188); /*0x8672d6*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8672db*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x8672e6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x8672f3*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3B]); /*0x867305*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v313[0x5C]); /*0x867317*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86731c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867327*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x867333*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867338*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867343*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86734f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867354*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86735f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86736a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86736f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86737a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x867386*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86738b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867396*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x8673a1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8673a6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8673b1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x8673bd*/
  v4 = v1 == unk_B47648; /*0x8673c2*/
  unk_B43CAC = 0x3B082; /*0x8673c8*/
  unk_B4433C = 0x1BC; /*0x8673ce*/
  if ( !v4 ) /*0x8673d8*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x8673da*/
    if ( v4 ) /*0x8673de*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x8673e2*/
    v1 = unk_B47648; /*0x8673e7*/
    v314 = unk_B47648; /*0x8673ef*/
    if ( v314 ) /*0x8673f3*/
      ++*(_DWORD *)(v1 + 0x60); /*0x8673f5*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x8673fc*/
  {
    v189 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867407*/
    LOBYTE(v316) = 0x48; /*0x867414*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v189); /*0x867419*/
    v190 = v315; /*0x86741e*/
    LOBYTE(v316) = 1; /*0x867424*/
    if ( v315 ) /*0x867429*/
    {
      --v315[7].Unk08; /*0x86742b*/
      if ( !v190[7].Unk08 ) /*0x867434*/
        sub_772560(v190); /*0x867439*/
    }
    v191 = a3; /*0x86743e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x867448*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v191); /*0x867455*/
    v192 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86745f*/
    LOBYTE(v316) = 0x49; /*0x86746c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v192); /*0x867471*/
    v193 = v315; /*0x867476*/
    LOBYTE(v316) = 1; /*0x86747c*/
    if ( v315 ) /*0x867481*/
    {
      --v315[7].Unk08; /*0x867483*/
      if ( !v193[7].Unk08 ) /*0x86748c*/
        sub_772560(v193); /*0x867491*/
    }
    v194 = a3; /*0x867496*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86749f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v194); /*0x8674ab*/
    v195 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8674b5*/
    LOBYTE(v316) = 0x4A; /*0x8674c2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v195); /*0x8674c7*/
    v196 = v315; /*0x8674cc*/
    LOBYTE(v316) = 1; /*0x8674d2*/
    if ( v315 ) /*0x8674d7*/
    {
      --v315[7].Unk08; /*0x8674d9*/
      if ( !v196[7].Unk08 ) /*0x8674e2*/
        sub_772560(v196); /*0x8674e7*/
    }
    v197 = a3; /*0x8674ec*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8674f6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v197); /*0x867503*/
    v198 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86750d*/
    LOBYTE(v316) = 0x4B; /*0x86751a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v198); /*0x86751f*/
    v199 = v315; /*0x867524*/
    LOBYTE(v316) = 1; /*0x86752a*/
    if ( v315 ) /*0x86752f*/
    {
      --v315[7].Unk08; /*0x867531*/
      if ( !v199[7].Unk08 ) /*0x86753a*/
        sub_772560(v199); /*0x86753f*/
    }
    v200 = a3; /*0x867544*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86754e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v200); /*0x86755b*/
    v201 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867565*/
    LOBYTE(v316) = 0x4C; /*0x867572*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v201); /*0x867577*/
    v202 = v315; /*0x86757c*/
    LOBYTE(v316) = 1; /*0x867582*/
    if ( v315 ) /*0x867587*/
    {
      --v315[7].Unk08; /*0x867589*/
      if ( !v202[7].Unk08 ) /*0x867592*/
        sub_772560(v202); /*0x867597*/
    }
    v203 = (NiD3DTextureStage *)a3; /*0x86759c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x8675a7*/
    NiD3DTextureStage_SetTexture(v203, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8675b8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v203->Stage); /*0x8675c2*/
    v204 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8675cc*/
    LOBYTE(v316) = 0x4D; /*0x8675d9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v204); /*0x8675de*/
    v205 = v315; /*0x8675e3*/
    LOBYTE(v316) = 1; /*0x8675e9*/
    if ( v315 ) /*0x8675ee*/
    {
      --v315[7].Unk08; /*0x8675f0*/
      if ( !v205[7].Unk08 ) /*0x8675f9*/
        sub_772560(v205); /*0x8675fe*/
    }
    v206 = a3; /*0x867603*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x86760d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v206); /*0x86761a*/
    v207 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867624*/
    LOBYTE(v316) = 0x4E; /*0x867631*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v207); /*0x867636*/
    v208 = v315; /*0x86763b*/
    LOBYTE(v316) = 1; /*0x867641*/
    if ( v315 ) /*0x867646*/
    {
      --v315[7].Unk08; /*0x867648*/
      if ( !v208[7].Unk08 ) /*0x867651*/
        sub_772560(v208); /*0x867656*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86765b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x867666*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x867673*/
  }
  v209 = v313; /*0x867678*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3C]); /*0x867685*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v209[0x5B]); /*0x867693*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867698*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8676a3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x8676af*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8676b4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8676bf*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8676cb*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8676d0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8676db*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8676e6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8676eb*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8676f6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x867702*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867707*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867712*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86771d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867722*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86772d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x867739*/
  v4 = v1 == unk_B4764C; /*0x86773e*/
  unk_B43CB8 = 0x7B088; /*0x867749*/
  unk_B44348 = 0x13C; /*0x86774f*/
  if ( !v4 ) /*0x867759*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86775b*/
    if ( v4 ) /*0x86775f*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x867763*/
    v1 = unk_B4764C; /*0x867768*/
    v314 = unk_B4764C; /*0x867770*/
    if ( v314 ) /*0x867774*/
      ++*(_DWORD *)(v1 + 0x60); /*0x867776*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x86777d*/
  {
    v210 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867788*/
    LOBYTE(v316) = 0x4F; /*0x867795*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v210); /*0x86779a*/
    v211 = v315; /*0x86779f*/
    LOBYTE(v316) = 1; /*0x8677a5*/
    if ( v315 ) /*0x8677aa*/
    {
      --v315[7].Unk08; /*0x8677ac*/
      if ( !v211[7].Unk08 ) /*0x8677b5*/
        sub_772560(v211); /*0x8677ba*/
    }
    v212 = a3; /*0x8677bf*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8677c9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v212); /*0x8677d6*/
    v213 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8677e0*/
    LOBYTE(v316) = 0x50; /*0x8677ed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v213); /*0x8677f2*/
    v214 = v315; /*0x8677f7*/
    LOBYTE(v316) = 1; /*0x8677fd*/
    if ( v315 ) /*0x867802*/
    {
      --v315[7].Unk08; /*0x867804*/
      if ( !v214[7].Unk08 ) /*0x86780d*/
        sub_772560(v214); /*0x867812*/
    }
    v215 = a3; /*0x867817*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x867820*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v215); /*0x86782c*/
    v216 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867836*/
    LOBYTE(v316) = 0x51; /*0x867843*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v216); /*0x867848*/
    v217 = v315; /*0x86784d*/
    LOBYTE(v316) = 1; /*0x867853*/
    if ( v315 ) /*0x867858*/
    {
      --v315[7].Unk08; /*0x86785a*/
      if ( !v217[7].Unk08 ) /*0x867863*/
        sub_772560(v217); /*0x867868*/
    }
    v218 = a3; /*0x86786d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x867877*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v218); /*0x867884*/
    v219 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86788e*/
    LOBYTE(v316) = 0x52; /*0x86789b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v219); /*0x8678a0*/
    v220 = v315; /*0x8678a5*/
    LOBYTE(v316) = 1; /*0x8678ab*/
    if ( v315 ) /*0x8678b0*/
    {
      --v315[7].Unk08; /*0x8678b2*/
      if ( !v220[7].Unk08 ) /*0x8678bb*/
        sub_772560(v220); /*0x8678c0*/
    }
    v221 = a3; /*0x8678c5*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8678cf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v221); /*0x8678dc*/
    v222 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8678e6*/
    LOBYTE(v316) = 0x53; /*0x8678f3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v222); /*0x8678f8*/
    v223 = v315; /*0x8678fd*/
    LOBYTE(v316) = 1; /*0x867903*/
    if ( v315 ) /*0x867908*/
    {
      --v315[7].Unk08; /*0x86790a*/
      if ( !v223[7].Unk08 ) /*0x867913*/
        sub_772560(v223); /*0x867918*/
    }
    v224 = (NiD3DTextureStage *)a3; /*0x86791d*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x867928*/
    NiD3DTextureStage_SetTexture(v224, (NiTexture *)LODWORD(flt_B43110[0])); /*0x867938*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v224->Stage); /*0x867942*/
    v225 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86794c*/
    LOBYTE(v316) = 0x54; /*0x867959*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v225); /*0x86795e*/
    v226 = v315; /*0x867963*/
    LOBYTE(v316) = 1; /*0x867969*/
    if ( v315 ) /*0x86796e*/
    {
      --v315[7].Unk08; /*0x867970*/
      if ( !v226[7].Unk08 ) /*0x867979*/
        sub_772560(v226); /*0x86797e*/
    }
    v227 = a3; /*0x867983*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x86798d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v227); /*0x86799a*/
    v228 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8679a4*/
    LOBYTE(v316) = 0x55; /*0x8679b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v228); /*0x8679b6*/
    v229 = v315; /*0x8679bb*/
    LOBYTE(v316) = 1; /*0x8679c1*/
    if ( v315 ) /*0x8679c6*/
    {
      --v315[7].Unk08; /*0x8679c8*/
      if ( !v229[7].Unk08 ) /*0x8679d1*/
        sub_772560(v229); /*0x8679d6*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8679db*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x8679e6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x8679f3*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3C]); /*0x867a05*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v313[0x5C]); /*0x867a17*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867a1c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867a27*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x867a33*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867a38*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867a43*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x867a4f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867a54*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867a5f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x867a6a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867a6f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867a7a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x867a86*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867a8b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867a96*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x867aa1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867aa6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867ab1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x867abd*/
  v4 = v1 == unk_B47650; /*0x867ac2*/
  unk_B43CC0 = 0x7B088; /*0x867ac8*/
  unk_B44350 = 0x1BC; /*0x867ace*/
  if ( !v4 ) /*0x867ad8*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x867ada*/
    if ( v4 ) /*0x867ade*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x867ae2*/
    v1 = unk_B47650; /*0x867ae7*/
    v314 = unk_B47650; /*0x867aef*/
    if ( v314 ) /*0x867af3*/
      ++*(_DWORD *)(v1 + 0x60); /*0x867af5*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x867afc*/
  {
    v230 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867b07*/
    LOBYTE(v316) = 0x56; /*0x867b14*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v230); /*0x867b19*/
    v231 = v315; /*0x867b1e*/
    LOBYTE(v316) = 1; /*0x867b24*/
    if ( v315 ) /*0x867b29*/
    {
      --v315[7].Unk08; /*0x867b2b*/
      if ( !v231[7].Unk08 ) /*0x867b34*/
        sub_772560(v231); /*0x867b39*/
    }
    v232 = a3; /*0x867b3e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x867b48*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v232); /*0x867b55*/
    v233 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867b5f*/
    LOBYTE(v316) = 0x57; /*0x867b6c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v233); /*0x867b71*/
    v234 = v315; /*0x867b76*/
    LOBYTE(v316) = 1; /*0x867b7c*/
    if ( v315 ) /*0x867b81*/
    {
      --v315[7].Unk08; /*0x867b83*/
      if ( !v234[7].Unk08 ) /*0x867b8c*/
        sub_772560(v234); /*0x867b91*/
    }
    v235 = a3; /*0x867b96*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x867b9f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v235); /*0x867bab*/
    v236 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867bb5*/
    LOBYTE(v316) = 0x58; /*0x867bc2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v236); /*0x867bc7*/
    v237 = v315; /*0x867bcc*/
    LOBYTE(v316) = 1; /*0x867bd2*/
    if ( v315 ) /*0x867bd7*/
    {
      --v315[7].Unk08; /*0x867bd9*/
      if ( !v237[7].Unk08 ) /*0x867be2*/
        sub_772560(v237); /*0x867be7*/
    }
    v238 = a3; /*0x867bec*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x867bf6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v238); /*0x867c03*/
    v239 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867c0d*/
    LOBYTE(v316) = 0x59; /*0x867c1a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v239); /*0x867c1f*/
    v240 = v315; /*0x867c24*/
    LOBYTE(v316) = 1; /*0x867c2a*/
    if ( v315 ) /*0x867c2f*/
    {
      --v315[7].Unk08; /*0x867c31*/
      if ( !v240[7].Unk08 ) /*0x867c3a*/
        sub_772560(v240); /*0x867c3f*/
    }
    v241 = a3; /*0x867c44*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x867c4e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v241); /*0x867c5b*/
    v242 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867c65*/
    LOBYTE(v316) = 0x5A; /*0x867c72*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v242); /*0x867c77*/
    v243 = v315; /*0x867c7c*/
    LOBYTE(v316) = 1; /*0x867c82*/
    if ( v315 ) /*0x867c87*/
    {
      --v315[7].Unk08; /*0x867c89*/
      if ( !v243[7].Unk08 ) /*0x867c92*/
        sub_772560(v243); /*0x867c97*/
    }
    v244 = (NiD3DTextureStage *)a3; /*0x867c9c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x867ca7*/
    NiD3DTextureStage_SetTexture(v244, (NiTexture *)LODWORD(flt_B43110[0])); /*0x867cb8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v244->Stage); /*0x867cc2*/
    v245 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867ccc*/
    LOBYTE(v316) = 0x5B; /*0x867cd9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v245); /*0x867cde*/
    v246 = v315; /*0x867ce3*/
    LOBYTE(v316) = 1; /*0x867ce9*/
    if ( v315 ) /*0x867cee*/
    {
      --v315[7].Unk08; /*0x867cf0*/
      if ( !v246[7].Unk08 ) /*0x867cf9*/
        sub_772560(v246); /*0x867cfe*/
    }
    v247 = a3; /*0x867d03*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x867d0d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v247); /*0x867d1a*/
    v248 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867d24*/
    LOBYTE(v316) = 0x5C; /*0x867d31*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v248); /*0x867d36*/
    v249 = v315; /*0x867d3b*/
    LOBYTE(v316) = 1; /*0x867d41*/
    if ( v315 ) /*0x867d46*/
    {
      --v315[7].Unk08; /*0x867d48*/
      if ( !v249[7].Unk08 ) /*0x867d51*/
        sub_772560(v249); /*0x867d56*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x867d5b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x867d66*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x867d73*/
  }
  v250 = v313; /*0x867d78*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3D]); /*0x867d85*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v250[0x5D]); /*0x867d93*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867d98*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867da3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x867daf*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867db4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867dbf*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x867dcb*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867dd0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867ddb*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x867de6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867deb*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867df6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x867e02*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867e07*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867e12*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x867e1d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x867e22*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x867e2d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x867e39*/
  v4 = v1 == unk_B47654; /*0x867e3e*/
  unk_B43CD4 = 0x3B0F2; /*0x867e49*/
  unk_B44364 = 0x13C; /*0x867e4f*/
  if ( !v4 ) /*0x867e59*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x867e5b*/
    if ( v4 ) /*0x867e5f*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x867e63*/
    v1 = unk_B47654; /*0x867e68*/
    v314 = unk_B47654; /*0x867e70*/
    if ( v314 ) /*0x867e74*/
      ++*(_DWORD *)(v1 + 0x60); /*0x867e76*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x867e7d*/
  {
    v251 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867e88*/
    LOBYTE(v316) = 0x5D; /*0x867e95*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v251); /*0x867e9a*/
    v252 = v315; /*0x867e9f*/
    LOBYTE(v316) = 1; /*0x867ea5*/
    if ( v315 ) /*0x867eaa*/
    {
      --v315[7].Unk08; /*0x867eac*/
      if ( !v252[7].Unk08 ) /*0x867eb5*/
        sub_772560(v252); /*0x867eba*/
    }
    v253 = a3; /*0x867ebf*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x867ec9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v253); /*0x867ed6*/
    v254 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867ee0*/
    LOBYTE(v316) = 0x5E; /*0x867eed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v254); /*0x867ef2*/
    v255 = v315; /*0x867ef7*/
    LOBYTE(v316) = 1; /*0x867efd*/
    if ( v315 ) /*0x867f02*/
    {
      --v315[7].Unk08; /*0x867f04*/
      if ( !v255[7].Unk08 ) /*0x867f0d*/
        sub_772560(v255); /*0x867f12*/
    }
    v256 = a3; /*0x867f17*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x867f20*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v256); /*0x867f2c*/
    v257 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867f36*/
    LOBYTE(v316) = 0x5F; /*0x867f43*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v257); /*0x867f48*/
    v258 = v315; /*0x867f4d*/
    LOBYTE(v316) = 1; /*0x867f53*/
    if ( v315 ) /*0x867f58*/
    {
      --v315[7].Unk08; /*0x867f5a*/
      if ( !v258[7].Unk08 ) /*0x867f63*/
        sub_772560(v258); /*0x867f68*/
    }
    v259 = a3; /*0x867f6d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x867f77*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v259); /*0x867f84*/
    v260 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867f8e*/
    LOBYTE(v316) = 0x60; /*0x867f9b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v260); /*0x867fa0*/
    v261 = v315; /*0x867fa5*/
    LOBYTE(v316) = 1; /*0x867fab*/
    if ( v315 ) /*0x867fb0*/
    {
      --v315[7].Unk08; /*0x867fb2*/
      if ( !v261[7].Unk08 ) /*0x867fbb*/
        sub_772560(v261); /*0x867fc0*/
    }
    v262 = a3; /*0x867fc5*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x867fcf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v262); /*0x867fdc*/
    v263 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x867fe6*/
    LOBYTE(v316) = 0x61; /*0x867ff3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v263); /*0x867ff8*/
    v264 = v315; /*0x867ffd*/
    LOBYTE(v316) = 1; /*0x868003*/
    if ( v315 ) /*0x868008*/
    {
      --v315[7].Unk08; /*0x86800a*/
      if ( !v264[7].Unk08 ) /*0x868013*/
        sub_772560(v264); /*0x868018*/
    }
    v265 = (NiD3DTextureStage *)a3; /*0x86801d*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x868028*/
    NiD3DTextureStage_SetTexture(v265, (NiTexture *)LODWORD(flt_B43110[0])); /*0x868038*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v265->Stage); /*0x868042*/
    v266 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86804c*/
    LOBYTE(v316) = 0x62; /*0x868059*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v266); /*0x86805e*/
    v267 = v315; /*0x868063*/
    LOBYTE(v316) = 1; /*0x868069*/
    if ( v315 ) /*0x86806e*/
    {
      --v315[7].Unk08; /*0x868070*/
      if ( !v267[7].Unk08 ) /*0x868079*/
        sub_772560(v267); /*0x86807e*/
    }
    v268 = a3; /*0x868083*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x86808d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v268); /*0x86809a*/
    v269 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8680a4*/
    LOBYTE(v316) = 0x63; /*0x8680b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v269); /*0x8680b6*/
    v270 = v315; /*0x8680bb*/
    LOBYTE(v316) = 1; /*0x8680c1*/
    if ( v315 ) /*0x8680c6*/
    {
      --v315[7].Unk08; /*0x8680c8*/
      if ( !v270[7].Unk08 ) /*0x8680d1*/
        sub_772560(v270); /*0x8680d6*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8680db*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x8680e6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x8680f3*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3D]); /*0x868105*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v313[0x5E]); /*0x868117*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86811c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868127*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x868133*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868138*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868143*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86814f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868154*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86815f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86816a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86816f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86817a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x868186*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86818b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868196*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x8681a1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8681a6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8681b1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x8681bd*/
  v4 = v1 == unk_B47658; /*0x8681c2*/
  unk_B43CD8 = 0x3B0F2; /*0x8681c8*/
  unk_B44368 = 0x1BC; /*0x8681ce*/
  if ( !v4 ) /*0x8681d8*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x8681da*/
    if ( v4 ) /*0x8681de*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x8681e2*/
    v1 = unk_B47658; /*0x8681e7*/
    v314 = unk_B47658; /*0x8681ef*/
    if ( v314 ) /*0x8681f3*/
      ++*(_DWORD *)(v1 + 0x60); /*0x8681f5*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x8681fc*/
  {
    v271 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x868207*/
    LOBYTE(v316) = 0x64; /*0x868214*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v271); /*0x868219*/
    v272 = v315; /*0x86821e*/
    LOBYTE(v316) = 1; /*0x868224*/
    if ( v315 ) /*0x868229*/
    {
      --v315[7].Unk08; /*0x86822b*/
      if ( !v272[7].Unk08 ) /*0x868234*/
        sub_772560(v272); /*0x868239*/
    }
    v273 = a3; /*0x86823e*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x868248*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v273); /*0x868255*/
    v274 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86825f*/
    LOBYTE(v316) = 0x65; /*0x86826c*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v274); /*0x868271*/
    v275 = v315; /*0x868276*/
    LOBYTE(v316) = 1; /*0x86827c*/
    if ( v315 ) /*0x868281*/
    {
      --v315[7].Unk08; /*0x868283*/
      if ( !v275[7].Unk08 ) /*0x86828c*/
        sub_772560(v275); /*0x868291*/
    }
    v276 = a3; /*0x868296*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x86829f*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v276); /*0x8682ab*/
    v277 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8682b5*/
    LOBYTE(v316) = 0x66; /*0x8682c2*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v277); /*0x8682c7*/
    v278 = v315; /*0x8682cc*/
    LOBYTE(v316) = 1; /*0x8682d2*/
    if ( v315 ) /*0x8682d7*/
    {
      --v315[7].Unk08; /*0x8682d9*/
      if ( !v278[7].Unk08 ) /*0x8682e2*/
        sub_772560(v278); /*0x8682e7*/
    }
    v279 = a3; /*0x8682ec*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x8682f6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v279); /*0x868303*/
    v280 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86830d*/
    LOBYTE(v316) = 0x67; /*0x86831a*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v280); /*0x86831f*/
    v281 = v315; /*0x868324*/
    LOBYTE(v316) = 1; /*0x86832a*/
    if ( v315 ) /*0x86832f*/
    {
      --v315[7].Unk08; /*0x868331*/
      if ( !v281[7].Unk08 ) /*0x86833a*/
        sub_772560(v281); /*0x86833f*/
    }
    v282 = a3; /*0x868344*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x86834e*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v282); /*0x86835b*/
    v283 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x868365*/
    LOBYTE(v316) = 0x68; /*0x868372*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v283); /*0x868377*/
    v284 = v315; /*0x86837c*/
    LOBYTE(v316) = 1; /*0x868382*/
    if ( v315 ) /*0x868387*/
    {
      --v315[7].Unk08; /*0x868389*/
      if ( !v284[7].Unk08 ) /*0x868392*/
        sub_772560(v284); /*0x868397*/
    }
    v285 = (NiD3DTextureStage *)a3; /*0x86839c*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x8683a7*/
    NiD3DTextureStage_SetTexture(v285, (NiTexture *)LODWORD(flt_B43110[0])); /*0x8683b8*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v285->Stage); /*0x8683c2*/
    v286 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8683cc*/
    LOBYTE(v316) = 0x69; /*0x8683d9*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v286); /*0x8683de*/
    v287 = v315; /*0x8683e3*/
    LOBYTE(v316) = 1; /*0x8683e9*/
    if ( v315 ) /*0x8683ee*/
    {
      --v315[7].Unk08; /*0x8683f0*/
      if ( !v287[7].Unk08 ) /*0x8683f9*/
        sub_772560(v287); /*0x8683fe*/
    }
    v288 = a3; /*0x868403*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x86840d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v288); /*0x86841a*/
    v289 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x868424*/
    LOBYTE(v316) = 0x6A; /*0x868431*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v289); /*0x868436*/
    v290 = v315; /*0x86843b*/
    LOBYTE(v316) = 1; /*0x868441*/
    if ( v315 ) /*0x868446*/
    {
      --v315[7].Unk08; /*0x868448*/
      if ( !v290[7].Unk08 ) /*0x868451*/
        sub_772560(v290); /*0x868456*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x86845b*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x868466*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x868473*/
  }
  v291 = v313; /*0x868478*/
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3E]); /*0x868485*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v291[0x5D]); /*0x868493*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868498*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8684a3*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x8684af*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8684b4*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8684bf*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x8684cb*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8684d0*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8684db*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x8684e6*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8684eb*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8684f6*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x868502*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868507*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868512*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x86851d*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868522*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86852d*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x868539*/
  v4 = v1 == unk_B4765C; /*0x86853e*/
  unk_B43CE4 = 0x7B0F8; /*0x868549*/
  unk_B44374 = 0x13C; /*0x86854f*/
  if ( !v4 ) /*0x868559*/
  {
    v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x86855b*/
    if ( v4 ) /*0x86855f*/
      NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x868563*/
    v1 = unk_B4765C; /*0x868568*/
    v314 = unk_B4765C; /*0x868570*/
    if ( v314 ) /*0x868574*/
      ++*(_DWORD *)(v1 + 0x60); /*0x868576*/
  }
  if ( *(_DWORD *)(v1 + 0x18) < 7u ) /*0x86857d*/
  {
    v292 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x868588*/
    LOBYTE(v316) = 0x6B; /*0x868595*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v292); /*0x86859a*/
    v293 = v315; /*0x86859f*/
    LOBYTE(v316) = 1; /*0x8685a5*/
    if ( v315 ) /*0x8685aa*/
    {
      --v315[7].Unk08; /*0x8685ac*/
      if ( !v293[7].Unk08 ) /*0x8685b5*/
        sub_772560(v293); /*0x8685ba*/
    }
    v294 = a3; /*0x8685bf*/
    BSShader_ConfigureTextureStageSampler(a3, 0, 1, 2); /*0x8685c9*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 0, v294); /*0x8685d6*/
    v295 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8685e0*/
    LOBYTE(v316) = 0x6C; /*0x8685ed*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v295); /*0x8685f2*/
    v296 = v315; /*0x8685f7*/
    LOBYTE(v316) = 1; /*0x8685fd*/
    if ( v315 ) /*0x868602*/
    {
      --v315[7].Unk08; /*0x868604*/
      if ( !v296[7].Unk08 ) /*0x86860d*/
        sub_772560(v296); /*0x868612*/
    }
    v297 = a3; /*0x868617*/
    BSShader_ConfigureTextureStageSampler(a3, 1, 1, 2); /*0x868620*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 1u, v297); /*0x86862c*/
    v298 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x868636*/
    LOBYTE(v316) = 0x6D; /*0x868643*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v298); /*0x868648*/
    v299 = v315; /*0x86864d*/
    LOBYTE(v316) = 1; /*0x868653*/
    if ( v315 ) /*0x868658*/
    {
      --v315[7].Unk08; /*0x86865a*/
      if ( !v299[7].Unk08 ) /*0x868663*/
        sub_772560(v299); /*0x868668*/
    }
    v300 = a3; /*0x86866d*/
    BSShader_ConfigureTextureStageSampler(a3, 2, 1, 2); /*0x868677*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 2u, v300); /*0x868684*/
    v301 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86868e*/
    LOBYTE(v316) = 0x6E; /*0x86869b*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v301); /*0x8686a0*/
    v302 = v315; /*0x8686a5*/
    LOBYTE(v316) = 1; /*0x8686ab*/
    if ( v315 ) /*0x8686b0*/
    {
      --v315[7].Unk08; /*0x8686b2*/
      if ( !v302[7].Unk08 ) /*0x8686bb*/
        sub_772560(v302); /*0x8686c0*/
    }
    v303 = a3; /*0x8686c5*/
    BSShader_ConfigureTextureStageSampler(a3, 3, 1, 2); /*0x8686cf*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 3u, v303); /*0x8686dc*/
    v304 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8686e6*/
    LOBYTE(v316) = 0x6F; /*0x8686f3*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v304); /*0x8686f8*/
    v305 = v315; /*0x8686fd*/
    LOBYTE(v316) = 1; /*0x868703*/
    if ( v315 ) /*0x868708*/
    {
      --v315[7].Unk08; /*0x86870a*/
      if ( !v305[7].Unk08 ) /*0x868713*/
        sub_772560(v305); /*0x868718*/
    }
    v306 = (NiD3DTextureStage *)a3; /*0x86871d*/
    BSShader_ConfigureTextureStageSampler(a3, 4, 3, 0); /*0x868728*/
    NiD3DTextureStage_SetTexture(v306, (NiTexture *)LODWORD(flt_B43110[0])); /*0x868738*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 4u, &v306->Stage); /*0x868742*/
    v307 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x86874c*/
    LOBYTE(v316) = 0x70; /*0x868759*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v307); /*0x86875e*/
    v308 = v315; /*0x868763*/
    LOBYTE(v316) = 1; /*0x868769*/
    if ( v315 ) /*0x86876e*/
    {
      --v315[7].Unk08; /*0x868770*/
      if ( !v308[7].Unk08 ) /*0x868779*/
        sub_772560(v308); /*0x86877e*/
    }
    v309 = a3; /*0x868783*/
    BSShader_ConfigureTextureStageSampler(a3, 5, 1, 2); /*0x86878d*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 5u, v309); /*0x86879a*/
    v310 = (NiD3DTextureStage **)NiD3DTextureStagePool_Acquire(&v315); /*0x8687a4*/
    LOBYTE(v316) = 0x71; /*0x8687b1*/
    sub_75FAE0((NiD3DTextureStage **)&a3, v310); /*0x8687b6*/
    v311 = v315; /*0x8687bb*/
    LOBYTE(v316) = 1; /*0x8687c1*/
    if ( v315 ) /*0x8687c6*/
    {
      --v315[7].Unk08; /*0x8687c8*/
      if ( !v311[7].Unk08 ) /*0x8687d1*/
        sub_772560(v311); /*0x8687d6*/
    }
    v2 = (NiD3DTextureStage *)a3; /*0x8687db*/
    BSShader_ConfigureTextureStageSampler(a3, 6, 3, 0); /*0x8687e6*/
    NiD3DPass_SetTextureStage((NiD3DPass *)v1, 6u, &v2->Stage); /*0x8687f3*/
  }
  NiD3DPass_SetVertexShader((NiD3DPass *)v1, (NiD3DVertexShader *)v313[0x3E]); /*0x868805*/
  NiD3DPass_SetPixelShader((NiD3DPass *)v1, (NiD3DPixelShader *)v313[0x5E]); /*0x868817*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86881c*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868827*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x1Bu, 0, 0); /*0x868833*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868838*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868843*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xFu, 0, 0); /*0x86884f*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x868854*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86885f*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 7u, 1u, 0); /*0x86886a*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86886f*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x86887a*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x17u, 4u, 0); /*0x868886*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x86888b*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x868896*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0xEu, 1u, 0); /*0x8688a1*/
  if ( !*(_DWORD *)(v1 + 0x30) ) /*0x8688a6*/
    *(_DWORD *)(v1 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x8688b1*/
  NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v1 + 0x30), 0x34u, 0, 0); /*0x8688bd*/
  unk_B43CEC = 0x7B0F8; /*0x8688c7*/
  unk_B4437C = 0x1BC; /*0x8688cd*/
  LOBYTE(v316) = 0; /*0x8688d7*/
  if ( v2 ) /*0x8688dc*/
  {
    v4 = v2[7].Unk08-- == 1; /*0x8688de*/
    if ( v4 ) /*0x8688e1*/
      sub_772560(v2); /*0x8688e5*/
  }
  v4 = (*(_DWORD *)(v1 + 0x60))-- == 1; /*0x8688ea*/
  v316 = 0xFFFFFFFF; /*0x8688ed*/
  if ( v4 ) /*0x8688f1*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v1); /*0x8688f5*/
}
