// positive sp value has been detected, the output may be wrong!
void __usercall StatsMenu_MiscTab_HandleClick_::ShowSkillMasteryCounts(
        int a1@<ebx>,
        int a2@<edi>,
        int esi0@<esi>,
        double a4@<st0>)
{
  char **v6; // eax
  Tile *v7; // ebp
  double v8; // st4
  double v9; // st4
  char *value; // ebx
  int v11; // edi
  Tile *v12; // eax
  Tile *v13; // ebp
  double v14; // st7
  double v15; // st7
  int v16; // edi
  char *v17; // ebp
  Tile *v18; // ebx
  double v19; // st7
  int v20; // ecx
  double v21; // st7
  char *v22; // ebx
  Tile *v23; // eax
  double v24; // st7
  Tile *v25; // ebp
  double v26; // st7
  char *v27; // ebx
  int v28; // edi
  Tile *v29; // eax
  double v30; // st7
  Tile *v31; // ebp
  double v32; // st7
  int v33; // ebp
  int v34; // edi
  Tile *v35; // eax
  double v36; // st7
  Tile *v37; // ebx
  double v38; // st7
  GameSettingString **v39; // ebx
  int v40; // edi
  int i; // eax
  Tile *v42; // eax
  double v43; // st7
  Tile *v44; // ebp
  double v45; // st7
  int v46; // ebp
  Tile *v47; // eax
  double v48; // st7
  Tile *v49; // ebx
  double v50; // st7
  int v51; // ebp
  int v52; // edi
  Tile *v53; // eax
  double v54; // st7
  Tile *v55; // ebx
  double v56; // st7
  int v57; // ebp
  int v58; // edi
  Tile *v59; // ebx
  double v60; // st7
  double v61; // st7
  int v62; // ebp
  int v63; // edi
  Tile *v64; // eax
  double v65; // st7
  Tile *v66; // ebx
  double v67; // st7
  int v68; // ebp
  int v69; // edi
  Tile *v70; // eax
  double v71; // st7
  Tile *v72; // ebx
  double v73; // st7
  int v74; // ebp
  int v75; // edi
  Tile *v76; // ebx
  double v77; // st7
  double v78; // st7
  int v79; // ebp
  int v80; // edi
  Tile *v81; // eax
  double v82; // st7
  Tile *v83; // ebx
  double v84; // st7
  int v85; // ebp
  int v86; // edi
  Tile *v87; // eax
  double v88; // st7
  Tile *v89; // ebx
  double v90; // st7
  int v91; // ebp
  int v92; // edi
  Tile *v93; // ebx
  double v94; // st7
  double v95; // st7
  int v96; // ebp
  int v97; // edi
  Tile *v98; // eax
  double v99; // st7
  Tile *v100; // ebx
  double v101; // st7
  int v102; // ebp
  int v103; // edi
  Tile *v104; // eax
  double v105; // st7
  Tile *v106; // ebx
  double v107; // st7
  int v108; // ebp
  int v109; // edi
  Tile *v110; // ebx
  double v111; // st7
  double v112; // st7
  int v113; // ebp
  int v114; // edi
  Tile *v115; // eax
  double v116; // st7
  Tile *v117; // ebx
  double v118; // st7
  int v119; // ebp
  int v120; // edi
  Tile *v121; // eax
  double v122; // st7
  Tile *v123; // ebx
  double v124; // st7
  int v125; // ebp
  int v126; // edi
  Tile *v127; // ebx
  double v128; // st7
  double v129; // st7
  int v130; // ebp
  int v131; // edi
  Tile *v132; // eax
  double v133; // st7
  Tile *v134; // ebx
  double v135; // st7
  int v136; // ebp
  int v137; // edi
  Tile *v138; // eax
  double v139; // st7
  Tile *v140; // ebx
  double v141; // st7
  int v142; // ebp
  int v143; // edi
  Tile *v144; // ebx
  double v145; // st7
  double v146; // st7
  int v147; // ebp
  int v148; // edi
  Tile *v149; // eax
  double v150; // st7
  Tile *v151; // ebx
  double v152; // st7
  int v153; // ebp
  int v154; // edi
  Tile *v155; // eax
  double v156; // st7
  Tile *v157; // ebx
  double v158; // st7
  int v159; // ebp
  int v160; // edi
  Tile *v161; // ebx
  double v162; // st7
  double v163; // st7
  int v164; // ebp
  int v165; // edi
  Tile *v166; // eax
  double v167; // st7
  Tile *v168; // ebx
  double v169; // st7
  int v170; // ebp
  Tile *v171; // eax
  double v172; // st7
  Tile *v173; // ebx
  double v174; // st7
  float v175; // [esp-44h] [ebp-48h]
  float v176; // [esp-44h] [ebp-48h]
  float v177; // [esp-44h] [ebp-48h]
  float v178; // [esp-44h] [ebp-48h]
  float v179; // [esp-44h] [ebp-48h]
  float v180; // [esp-44h] [ebp-48h]
  float v181; // [esp-44h] [ebp-48h]
  float v182; // [esp-44h] [ebp-48h]
  float v183; // [esp-44h] [ebp-48h]
  float v184; // [esp-44h] [ebp-48h]
  float v185; // [esp-44h] [ebp-48h]
  float v186; // [esp-44h] [ebp-48h]
  float v187; // [esp-44h] [ebp-48h]
  float v188; // [esp-44h] [ebp-48h]
  float v189; // [esp-44h] [ebp-48h]
  float v190; // [esp-44h] [ebp-48h]
  float v191; // [esp-44h] [ebp-48h]
  float v192; // [esp-44h] [ebp-48h]
  float v193; // [esp-44h] [ebp-48h]
  float v194; // [esp-44h] [ebp-48h]
  float v195; // [esp-44h] [ebp-48h]
  float v196; // [esp-44h] [ebp-48h]
  float v197; // [esp-44h] [ebp-48h]
  float v198; // [esp-44h] [ebp-48h]
  float v199; // [esp-44h] [ebp-48h]
  float v200; // [esp-44h] [ebp-48h]
  float v201; // [esp-44h] [ebp-48h]
  float v202; // [esp-44h] [ebp-48h]
  float v203; // [esp-44h] [ebp-48h]
  float v204; // [esp-44h] [ebp-48h]
  float v205; // [esp-44h] [ebp-48h]
  float v206; // [esp-44h] [ebp-48h]
  float v207; // [esp-44h] [ebp-48h]
  float v208; // [esp-44h] [ebp-48h]
  float v209; // [esp-44h] [ebp-48h]
  float v210; // [esp-44h] [ebp-48h]
  float v211; // [esp-44h] [ebp-48h]
  float v212; // [esp-44h] [ebp-48h]
  float v213; // [esp-44h] [ebp-48h]
  float v214; // [esp-44h] [ebp-48h]
  float v215; // [esp-44h] [ebp-48h]
  float v216; // [esp-44h] [ebp-48h]
  float v217; // [esp-44h] [ebp-48h]
  float v218; // [esp-44h] [ebp-48h]
  float v219; // [esp-44h] [ebp-48h]
  float v220; // [esp-44h] [ebp-48h]
  float v221; // [esp-44h] [ebp-48h]
  float v222; // [esp-44h] [ebp-48h]
  float v223; // [esp-44h] [ebp-48h]
  float v224; // [esp-44h] [ebp-48h]
  float v225; // [esp-44h] [ebp-48h]
  float v226; // [esp-44h] [ebp-48h]
  float v227; // [esp-44h] [ebp-48h]
  float v228; // [esp-44h] [ebp-48h]
  float v229; // [esp-44h] [ebp-48h]
  float v230; // [esp-44h] [ebp-48h]
  float v231; // [esp-44h] [ebp-48h]
  float v232; // [esp-44h] [ebp-48h]
  float v233; // [esp-44h] [ebp-48h]
  float v234; // [esp-44h] [ebp-48h]
  float v235; // [esp-44h] [ebp-48h]
  char *v236; // [esp-30h] [ebp-34h]
  int v237; // [esp-2Ch] [ebp-30h]
  int v238; // [esp-2Ch] [ebp-30h]
  float v239; // [esp-2Ch] [ebp-30h]
  int v240; // [esp-2Ch] [ebp-30h]
  int v241; // [esp-2Ch] [ebp-30h]
  char *v242; // [esp-2Ch] [ebp-30h]
  char *v243; // [esp-2Ch] [ebp-30h]
  int v244; // [esp-28h] [ebp-2Ch]
  char *v245; // [esp-28h] [ebp-2Ch]
  char *v246; // [esp-28h] [ebp-2Ch]
  char *v247; // [esp-28h] [ebp-2Ch]
  char *v248; // [esp-28h] [ebp-2Ch]
  char *v249; // [esp-28h] [ebp-2Ch]
  char *v250; // [esp-28h] [ebp-2Ch]
  char *v251; // [esp-28h] [ebp-2Ch]
  char *v252; // [esp-28h] [ebp-2Ch]
  char *v253; // [esp-28h] [ebp-2Ch]
  char *v254; // [esp-28h] [ebp-2Ch]
  char *v255; // [esp-28h] [ebp-2Ch]
  char *v256; // [esp-28h] [ebp-2Ch]
  char *v257; // [esp-28h] [ebp-2Ch]
  char *v258; // [esp-28h] [ebp-2Ch]
  char *v259; // [esp-28h] [ebp-2Ch]
  char *v260; // [esp-28h] [ebp-2Ch]
  char *v261; // [esp-28h] [ebp-2Ch]
  char *v262; // [esp-28h] [ebp-2Ch]
  char *v263; // [esp-28h] [ebp-2Ch]
  char *v264; // [esp-28h] [ebp-2Ch]
  char *v265; // [esp-28h] [ebp-2Ch]
  char *v266; // [esp-28h] [ebp-2Ch]
  char *v267; // [esp-28h] [ebp-2Ch]
  int v268; // [esp-24h] [ebp-28h]
  _BYTE v269[16]; // [esp-10h] [ebp-14h]

  do /*0x5dab3d*/
  {
    v6 = *(char ***)((char *)off_B11E3C + a1); /*0x5daab2*/
    if ( v6 ) /*0x5daaba*/
      v236 = *v6; /*0x5daabe*/
    else
      v236 = 0; /*0x5daac4*/
    v7 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5daad9*/
    v8 = (double)a2; /*0x5daae3*/
    if ( a2 < 0 ) /*0x5daae7*/
      v8 = v8 + flt_A2FC78; /*0x5daae9*/
    v175 = v8; /*0x5daaf0*/
    Tile_SetFloat(v7, 0xFAAu, v175); /*0x5daafa*/
    Tile_SetString(v7, (_DWORD *)0xFAF, v236); /*0x5dab0b*/
    v9 = (double)*(int *)&v269[a1]; /*0x5dab10*/
    if ( *(int *)&v269[a1] < 0 ) /*0x5dab1a*/
      v9 = v9 + flt_A2FC78; /*0x5dab1c*/
    v176 = v9; /*0x5dab23*/
    Tile_SetFloat(v7, 0xFB0u, v176); /*0x5dab2d*/
    ++a2; /*0x5dab32*/
    a1 += 4; /*0x5dab35*/
    --v237; /*0x5dab38*/
  }
  while ( v237 ); /*0x5dab3d*/
  value = (char *)MEMORY[0xB38400].value; /*0x5dab49*/
  v11 = a2 + 1; /*0x5dab52*/
  ExtraDataList_GetCrimeGold(&reference->super.super.super.super.baseExtraList); /*0x5dab55*/
  v238 = (__int64)a4; /*0x5dab85*/
  v12 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5dab8d*/
  v13 = v12; /*0x5dab9a*/
  v14 = (double)v11; /*0x5dab9c*/
  if ( v11 < 0 ) /*0x5daba0*/
    v14 = v14 + flt_A2FC78; /*0x5daba2*/
  v177 = v14; /*0x5daba9*/
  Tile_SetFloat(v12, 0xFAAu, v177); /*0x5dabb3*/
  Tile_SetString(v13, (_DWORD *)0xFAF, value); /*0x5dabc0*/
  v15 = (double)v238; /*0x5dabc5*/
  if ( v238 < 0 ) /*0x5dabcf*/
    v15 = v15 + flt_A2FC78; /*0x5dabd1*/
  v178 = v15; /*0x5dabd8*/
  Tile_SetFloat(v13, 0xFB0u, v178); /*0x5dabe2*/
  v16 = v11 + 1; /*0x5dabec*/
  if ( sub_46B280("SEWorld") ) /*0x5dabef*/
  {
    v17 = (char *)MEMORY[0xB38408].value; /*0x5dac0e*/
    v239 = *(float *)&reference->unk700; /*0x5dac14*/
    v18 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5dac27*/
    v19 = (double)v16; /*0x5dac31*/
    if ( v16 < 0 ) /*0x5dac35*/
      v19 = v19 + flt_A2FC78; /*0x5dac37*/
    v179 = v19; /*0x5dac3e*/
    Tile_SetFloat(v18, 0xFAAu, v179); /*0x5dac48*/
    Tile_SetString(v18, (_DWORD *)0xFAF, v17); /*0x5dac55*/
    v20 = (__int64)v239; /*0x5dac78*/
    v21 = (double)v20; /*0x5dac82*/
    if ( v20 < 0 ) /*0x5dac86*/
      v21 = v21 + flt_A2FC78; /*0x5dac88*/
    v180 = v21; /*0x5dac8f*/
    Tile_SetFloat(v18, 0xFB0u, v180); /*0x5dac99*/
    ++v16; /*0x5dac9e*/
  }
  v22 = (char *)stru_B383F8.value; /*0x5dacaf*/
  v240 = reference->vtbl->super.GetFame((Actor *)reference); /*0x5dacc4*/
  v23 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5dacc8*/
  v24 = (double)v16; /*0x5dacd5*/
  v25 = v23; /*0x5dacd9*/
  if ( v16 < 0 ) /*0x5dacdb*/
    v24 = v24 + flt_A2FC78; /*0x5dacdd*/
  v181 = v24; /*0x5dace4*/
  Tile_SetFloat(v23, 0xFAAu, v181); /*0x5dacee*/
  Tile_SetString(v25, (_DWORD *)0xFAF, v22); /*0x5dacfb*/
  v26 = (double)v240; /*0x5dad00*/
  if ( v240 < 0 ) /*0x5dad0a*/
    v26 = v26 + flt_A2FC78; /*0x5dad0c*/
  v182 = v26; /*0x5dad13*/
  Tile_SetFloat(v25, 0xFB0u, v182); /*0x5dad1d*/
  v27 = (char *)stru_B383F0.value; /*0x5dad30*/
  v28 = v16 + 1; /*0x5dad36*/
  v241 = reference->vtbl->super.GetInfamy((Actor *)reference); /*0x5dad48*/
  v29 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5dad4c*/
  v30 = (double)v28; /*0x5dad59*/
  v31 = v29; /*0x5dad5d*/
  if ( v28 < 0 ) /*0x5dad5f*/
    v30 = v30 + flt_A2FC78; /*0x5dad61*/
  v183 = v30; /*0x5dad68*/
  Tile_SetFloat(v29, 0xFAAu, v183); /*0x5dad72*/
  Tile_SetString(v31, (_DWORD *)0xFAF, v27); /*0x5dad7f*/
  v32 = (double)v241; /*0x5dad84*/
  if ( v241 < 0 ) /*0x5dad8e*/
    v32 = v32 + flt_A2FC78; /*0x5dad90*/
  v184 = v32; /*0x5dad97*/
  Tile_SetFloat(v31, 0xFB0u, v184); /*0x5dada1*/
  v33 = reference->miscStats[0]; /*0x5dadaf*/
  v34 = v28 + 2; /*0x5dadc5*/
  v242 = (char *)MEMORY[0xB38440].value; /*0x5dadc8*/
  v35 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5dadcc*/
  v36 = (double)v34; /*0x5dadd9*/
  v37 = v35; /*0x5daddd*/
  if ( v34 < 0 ) /*0x5daddf*/
    v36 = v36 + flt_A2FC78; /*0x5dade1*/
  v185 = v36; /*0x5dade8*/
  Tile_SetFloat(v35, 0xFAAu, v185); /*0x5dadf2*/
  Tile_SetString(v37, (_DWORD *)0xFAF, v242); /*0x5dae03*/
  v38 = (double)v33; /*0x5dae0e*/
  if ( v33 < 0 ) /*0x5dae12*/
    v38 = v38 + flt_A2FC78; /*0x5dae14*/
  v186 = v38; /*0x5dae1b*/
  Tile_SetFloat(v37, 0xFB0u, v186); /*0x5dae25*/
  v39 = off_B11E50; /*0x5dae2a*/
  v40 = v34 + 1; /*0x5dae34*/
  for ( i = 0x6C8 - (_DWORD)off_B11E50; ; i = 0x6C8 - (_DWORD)off_B11E50 )
  {
    v244 = *(int *)((char *)&reference->vtbl + (_DWORD)v39 + i); /*0x5dae53*/
    v243 = *v39 ? (char *)(*v39)->value : 0;
    v42 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5dae76*/
    v43 = (double)v40; /*0x5dae83*/
    v44 = v42; /*0x5dae87*/
    if ( v40 < 0 ) /*0x5dae89*/
      v43 = v43 + flt_A2FC78; /*0x5dae8b*/
    v187 = v43; /*0x5dae92*/
    Tile_SetFloat(v42, 0xFAAu, v187); /*0x5dae9c*/
    Tile_SetString(v44, (_DWORD *)0xFAF, v243); /*0x5daead*/
    v45 = (double)v244; /*0x5daeb2*/
    if ( v244 < 0 ) /*0x5daebc*/
      v45 = v45 + flt_A2FC78; /*0x5daebe*/
    v188 = v45; /*0x5daec5*/
    Tile_SetFloat(v44, 0xFB0u, v188); /*0x5daecf*/
    ++v39; /*0x5daed4*/
    ++v40; /*0x5daed7*/
    if ( (int)v39 >= (int)&NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *> `RTTI Type Descriptor' ) /*0x5daee0*/
      break; /*0x5daee0*/
  }
  v46 = reference->miscStats[4]; /*0x5daef4*/
  v245 = (char *)MEMORY[0xB38468].value; /*0x5daf04*/
  v47 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5daf08*/
  v48 = (double)v40; /*0x5daf15*/
  v49 = v47; /*0x5daf19*/
  if ( v40 < 0 ) /*0x5daf1b*/
    v48 = v48 + flt_A2FC78; /*0x5daf1d*/
  v189 = v48; /*0x5daf24*/
  Tile_SetFloat(v47, 0xFAAu, v189); /*0x5daf2e*/
  Tile_SetString(v49, (_DWORD *)0xFAF, v245); /*0x5daf3f*/
  v50 = (double)v46; /*0x5daf4a*/
  if ( v46 < 0 ) /*0x5daf4e*/
    v50 = v50 + flt_A2FC78; /*0x5daf50*/
  v190 = v50; /*0x5daf57*/
  Tile_SetFloat(v49, 0xFB0u, v190); /*0x5daf61*/
  v51 = reference->miscStats[5]; /*0x5daf6f*/
  v52 = v40 + 2; /*0x5daf85*/
  v246 = (char *)MEMORY[0xB38418].value; /*0x5daf88*/
  v53 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5daf8c*/
  v54 = (double)v52; /*0x5daf99*/
  v55 = v53; /*0x5daf9d*/
  if ( v52 < 0 ) /*0x5daf9f*/
    v54 = v54 + flt_A2FC78; /*0x5dafa1*/
  v191 = v54; /*0x5dafa8*/
  Tile_SetFloat(v53, 0xFAAu, v191); /*0x5dafb2*/
  Tile_SetString(v55, (_DWORD *)0xFAF, v246); /*0x5dafc3*/
  v56 = (double)v51; /*0x5dafce*/
  if ( v51 < 0 ) /*0x5dafd2*/
    v56 = v56 + flt_A2FC78; /*0x5dafd4*/
  v192 = v56; /*0x5dafdb*/
  Tile_SetFloat(v55, 0xFB0u, v192); /*0x5dafe5*/
  v57 = reference->miscStats[6]; /*0x5daff8*/
  v247 = (char *)MEMORY[0xB38420].value; /*0x5db005*/
  v58 = v52 + 1; /*0x5db00c*/
  v59 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db014*/
  v60 = (double)v58; /*0x5db01e*/
  if ( v58 < 0 ) /*0x5db022*/
    v60 = v60 + flt_A2FC78; /*0x5db024*/
  v193 = v60; /*0x5db02b*/
  Tile_SetFloat(v59, 0xFAAu, v193); /*0x5db035*/
  Tile_SetString(v59, (_DWORD *)0xFAF, v247); /*0x5db046*/
  v61 = (double)v57; /*0x5db051*/
  if ( v57 < 0 ) /*0x5db055*/
    v61 = v61 + flt_A2FC78; /*0x5db057*/
  v194 = v61; /*0x5db05e*/
  Tile_SetFloat(v59, 0xFB0u, v194); /*0x5db068*/
  v62 = reference->miscStats[7]; /*0x5db07b*/
  v63 = v58 + 2; /*0x5db08b*/
  v248 = (char *)MEMORY[0xB38478].value; /*0x5db08e*/
  v64 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db092*/
  v65 = (double)v63; /*0x5db09f*/
  v66 = v64; /*0x5db0a3*/
  if ( v63 < 0 ) /*0x5db0a5*/
    v65 = v65 + flt_A2FC78; /*0x5db0a7*/
  v195 = v65; /*0x5db0ae*/
  Tile_SetFloat(v64, 0xFAAu, v195); /*0x5db0b8*/
  Tile_SetString(v66, (_DWORD *)0xFAF, v248); /*0x5db0c9*/
  v67 = (double)v62; /*0x5db0d4*/
  if ( v62 < 0 ) /*0x5db0d8*/
    v67 = v67 + flt_A2FC78; /*0x5db0da*/
  v196 = v67; /*0x5db0e1*/
  Tile_SetFloat(v66, 0xFB0u, v196); /*0x5db0eb*/
  v68 = reference->miscStats[8]; /*0x5db0f9*/
  v69 = v63 + 2; /*0x5db10f*/
  v249 = (char *)MEMORY[0xB38428].value; /*0x5db112*/
  v70 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db116*/
  v71 = (double)v69; /*0x5db123*/
  v72 = v70; /*0x5db127*/
  if ( v69 < 0 ) /*0x5db129*/
    v71 = v71 + flt_A2FC78; /*0x5db12b*/
  v197 = v71; /*0x5db132*/
  Tile_SetFloat(v70, 0xFAAu, v197); /*0x5db13c*/
  Tile_SetString(v72, (_DWORD *)0xFAF, v249); /*0x5db14d*/
  v73 = (double)v68; /*0x5db158*/
  if ( v68 < 0 ) /*0x5db15c*/
    v73 = v73 + flt_A2FC78; /*0x5db15e*/
  v198 = v73; /*0x5db165*/
  Tile_SetFloat(v72, 0xFB0u, v198); /*0x5db16f*/
  v74 = reference->miscStats[9]; /*0x5db182*/
  v250 = (char *)MEMORY[0xB38438].value; /*0x5db18f*/
  v75 = v69 + 1; /*0x5db196*/
  v76 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db19e*/
  v77 = (double)v75; /*0x5db1a8*/
  if ( v75 < 0 ) /*0x5db1ac*/
    v77 = v77 + flt_A2FC78; /*0x5db1ae*/
  v199 = v77; /*0x5db1b5*/
  Tile_SetFloat(v76, 0xFAAu, v199); /*0x5db1bf*/
  Tile_SetString(v76, (_DWORD *)0xFAF, v250); /*0x5db1d0*/
  v78 = (double)v74; /*0x5db1db*/
  if ( v74 < 0 ) /*0x5db1df*/
    v78 = v78 + flt_A2FC78; /*0x5db1e1*/
  v200 = v78; /*0x5db1e8*/
  Tile_SetFloat(v76, 0xFB0u, v200); /*0x5db1f2*/
  v79 = reference->miscStats[0xA]; /*0x5db205*/
  v80 = v75 + 2; /*0x5db215*/
  v251 = (char *)MEMORY[0xB38480].value; /*0x5db218*/
  v81 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db21c*/
  v82 = (double)v80; /*0x5db229*/
  v83 = v81; /*0x5db22d*/
  if ( v80 < 0 ) /*0x5db22f*/
    v82 = v82 + flt_A2FC78; /*0x5db231*/
  v201 = v82; /*0x5db238*/
  Tile_SetFloat(v81, 0xFAAu, v201); /*0x5db242*/
  Tile_SetString(v83, (_DWORD *)0xFAF, v251); /*0x5db253*/
  v84 = (double)v79; /*0x5db25e*/
  if ( v79 < 0 ) /*0x5db262*/
    v84 = v84 + flt_A2FC78; /*0x5db264*/
  v202 = v84; /*0x5db26b*/
  Tile_SetFloat(v83, 0xFB0u, v202); /*0x5db275*/
  v85 = reference->miscStats[0xB]; /*0x5db283*/
  v86 = v80 + 2; /*0x5db299*/
  v252 = (char *)stru_B38500.value; /*0x5db29c*/
  v87 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db2a0*/
  v88 = (double)v86; /*0x5db2ad*/
  v89 = v87; /*0x5db2b1*/
  if ( v86 < 0 ) /*0x5db2b3*/
    v88 = v88 + flt_A2FC78; /*0x5db2b5*/
  v203 = v88; /*0x5db2bc*/
  Tile_SetFloat(v87, 0xFAAu, v203); /*0x5db2c6*/
  Tile_SetString(v89, (_DWORD *)0xFAF, v252); /*0x5db2d7*/
  v90 = (double)v85; /*0x5db2e2*/
  if ( v85 < 0 ) /*0x5db2e6*/
    v90 = v90 + flt_A2FC78; /*0x5db2e8*/
  v204 = v90; /*0x5db2ef*/
  Tile_SetFloat(v89, 0xFB0u, v204); /*0x5db2f9*/
  v91 = reference->miscStats[0xC]; /*0x5db30c*/
  v253 = (char *)stru_B38488.value; /*0x5db319*/
  v92 = v86 + 1; /*0x5db320*/
  v93 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db328*/
  v94 = (double)v92; /*0x5db332*/
  if ( v92 < 0 ) /*0x5db336*/
    v94 = v94 + flt_A2FC78; /*0x5db338*/
  v205 = v94; /*0x5db33f*/
  Tile_SetFloat(v93, 0xFAAu, v205); /*0x5db349*/
  Tile_SetString(v93, (_DWORD *)0xFAF, v253); /*0x5db35a*/
  v95 = (double)v91; /*0x5db365*/
  if ( v91 < 0 ) /*0x5db369*/
    v95 = v95 + flt_A2FC78; /*0x5db36b*/
  v206 = v95; /*0x5db372*/
  Tile_SetFloat(v93, 0xFB0u, v206); /*0x5db37c*/
  v96 = reference->miscStats[0xD]; /*0x5db38f*/
  v97 = v92 + 2; /*0x5db39f*/
  v254 = (char *)stru_B38508.value; /*0x5db3a2*/
  v98 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db3a6*/
  v99 = (double)v97; /*0x5db3b3*/
  v100 = v98; /*0x5db3b7*/
  if ( v97 < 0 ) /*0x5db3b9*/
    v99 = v99 + flt_A2FC78; /*0x5db3bb*/
  v207 = v99; /*0x5db3c2*/
  Tile_SetFloat(v98, 0xFAAu, v207); /*0x5db3cc*/
  Tile_SetString(v100, (_DWORD *)0xFAF, v254); /*0x5db3dd*/
  v101 = (double)v96; /*0x5db3e8*/
  if ( v96 < 0 ) /*0x5db3ec*/
    v101 = v101 + flt_A2FC78; /*0x5db3ee*/
  v208 = v101; /*0x5db3f5*/
  Tile_SetFloat(v100, 0xFB0u, v208); /*0x5db3ff*/
  v102 = reference->miscStats[0xE]; /*0x5db40d*/
  v103 = v97 + 2; /*0x5db423*/
  v255 = (char *)stru_B38510.value; /*0x5db426*/
  v104 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db42a*/
  v105 = (double)v103; /*0x5db437*/
  v106 = v104; /*0x5db43b*/
  if ( v103 < 0 ) /*0x5db43d*/
    v105 = v105 + flt_A2FC78; /*0x5db43f*/
  v209 = v105; /*0x5db446*/
  Tile_SetFloat(v104, 0xFAAu, v209); /*0x5db450*/
  Tile_SetString(v106, (_DWORD *)0xFAF, v255); /*0x5db461*/
  v107 = (double)v102; /*0x5db46c*/
  if ( v102 < 0 ) /*0x5db470*/
    v107 = v107 + flt_A2FC78; /*0x5db472*/
  v210 = v107; /*0x5db479*/
  Tile_SetFloat(v106, 0xFB0u, v210); /*0x5db483*/
  v108 = reference->miscStats[0xF]; /*0x5db496*/
  v256 = (char *)stru_B38518.value; /*0x5db4a3*/
  v109 = v103 + 1; /*0x5db4aa*/
  v110 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db4b2*/
  v111 = (double)v109; /*0x5db4bc*/
  if ( v109 < 0 ) /*0x5db4c0*/
    v111 = v111 + flt_A2FC78; /*0x5db4c2*/
  v211 = v111; /*0x5db4c9*/
  Tile_SetFloat(v110, 0xFAAu, v211); /*0x5db4d3*/
  Tile_SetString(v110, (_DWORD *)0xFAF, v256); /*0x5db4e4*/
  v112 = (double)v108; /*0x5db4ef*/
  if ( v108 < 0 ) /*0x5db4f3*/
    v112 = v112 + flt_A2FC78; /*0x5db4f5*/
  v212 = v112; /*0x5db4fc*/
  Tile_SetFloat(v110, 0xFB0u, v212); /*0x5db506*/
  v113 = reference->miscStats[0x10]; /*0x5db519*/
  v114 = v109 + 1; /*0x5db529*/
  v257 = (char *)stru_B38520.value; /*0x5db52c*/
  v115 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db530*/
  v116 = (double)v114; /*0x5db53d*/
  v117 = v115; /*0x5db541*/
  if ( v114 < 0 ) /*0x5db543*/
    v116 = v116 + flt_A2FC78; /*0x5db545*/
  v213 = v116; /*0x5db54c*/
  Tile_SetFloat(v115, 0xFAAu, v213); /*0x5db556*/
  Tile_SetString(v117, (_DWORD *)0xFAF, v257); /*0x5db567*/
  v118 = (double)v113; /*0x5db572*/
  if ( v113 < 0 ) /*0x5db576*/
    v118 = v118 + flt_A2FC78; /*0x5db578*/
  v214 = v118; /*0x5db57f*/
  Tile_SetFloat(v117, 0xFB0u, v214); /*0x5db589*/
  v119 = reference->miscStats[0x11]; /*0x5db597*/
  v120 = v114 + 2; /*0x5db5ad*/
  v258 = (char *)stru_B384F0.value; /*0x5db5b0*/
  v121 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db5b4*/
  v122 = (double)v120; /*0x5db5c1*/
  v123 = v121; /*0x5db5c5*/
  if ( v120 < 0 ) /*0x5db5c7*/
    v122 = v122 + flt_A2FC78; /*0x5db5c9*/
  v215 = v122; /*0x5db5d0*/
  Tile_SetFloat(v121, 0xFAAu, v215); /*0x5db5da*/
  Tile_SetString(v123, (_DWORD *)0xFAF, v258); /*0x5db5eb*/
  v124 = (double)v119; /*0x5db5f6*/
  if ( v119 < 0 ) /*0x5db5fa*/
    v124 = v124 + flt_A2FC78; /*0x5db5fc*/
  v216 = v124; /*0x5db603*/
  Tile_SetFloat(v123, 0xFB0u, v216); /*0x5db60d*/
  v125 = reference->miscStats[0x12]; /*0x5db620*/
  v259 = (char *)stru_B384F8.value; /*0x5db62d*/
  v126 = v120 + 1; /*0x5db634*/
  v127 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db63c*/
  v128 = (double)v126; /*0x5db646*/
  if ( v126 < 0 ) /*0x5db64a*/
    v128 = v128 + flt_A2FC78; /*0x5db64c*/
  v217 = v128; /*0x5db653*/
  Tile_SetFloat(v127, 0xFAAu, v217); /*0x5db65d*/
  Tile_SetString(v127, (_DWORD *)0xFAF, v259); /*0x5db66e*/
  v129 = (double)v125; /*0x5db679*/
  if ( v125 < 0 ) /*0x5db67d*/
    v129 = v129 + flt_A2FC78; /*0x5db67f*/
  v218 = v129; /*0x5db686*/
  Tile_SetFloat(v127, 0xFB0u, v218); /*0x5db690*/
  v130 = reference->miscStats[0x13]; /*0x5db6a3*/
  v131 = v126 + 1; /*0x5db6b3*/
  v260 = (char *)MEMORY[0xB38550].value; /*0x5db6b6*/
  v132 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db6ba*/
  v133 = (double)v131; /*0x5db6c7*/
  v134 = v132; /*0x5db6cb*/
  if ( v131 < 0 ) /*0x5db6cd*/
    v133 = v133 + flt_A2FC78; /*0x5db6cf*/
  v219 = v133; /*0x5db6d6*/
  Tile_SetFloat(v132, 0xFAAu, v219); /*0x5db6e0*/
  Tile_SetString(v134, (_DWORD *)0xFAF, v260); /*0x5db6f1*/
  v135 = (double)v130; /*0x5db6fc*/
  if ( v130 < 0 ) /*0x5db700*/
    v135 = v135 + flt_A2FC78; /*0x5db702*/
  v220 = v135; /*0x5db709*/
  Tile_SetFloat(v134, 0xFB0u, v220); /*0x5db713*/
  v136 = reference->miscStats[0x14]; /*0x5db721*/
  v137 = v131 + 2; /*0x5db737*/
  v261 = (char *)MEMORY[0xB384C8].value; /*0x5db73a*/
  v138 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db73e*/
  v139 = (double)v137; /*0x5db74b*/
  v140 = v138; /*0x5db74f*/
  if ( v137 < 0 ) /*0x5db751*/
    v139 = v139 + flt_A2FC78; /*0x5db753*/
  v221 = v139; /*0x5db75a*/
  Tile_SetFloat(v138, 0xFAAu, v221); /*0x5db764*/
  Tile_SetString(v140, (_DWORD *)0xFAF, v261); /*0x5db775*/
  v141 = (double)v136; /*0x5db780*/
  if ( v136 < 0 ) /*0x5db784*/
    v141 = v141 + flt_A2FC78; /*0x5db786*/
  v222 = v141; /*0x5db78d*/
  Tile_SetFloat(v140, 0xFB0u, v222); /*0x5db797*/
  v142 = reference->miscStats[0x15]; /*0x5db7aa*/
  v262 = (char *)stru_B384D0.value; /*0x5db7b7*/
  v143 = v137 + 1; /*0x5db7be*/
  v144 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db7c6*/
  v145 = (double)v143; /*0x5db7d0*/
  if ( v143 < 0 ) /*0x5db7d4*/
    v145 = v145 + flt_A2FC78; /*0x5db7d6*/
  v223 = v145; /*0x5db7dd*/
  Tile_SetFloat(v144, 0xFAAu, v223); /*0x5db7e7*/
  Tile_SetString(v144, (_DWORD *)0xFAF, v262); /*0x5db7f8*/
  v146 = (double)v142; /*0x5db803*/
  if ( v142 < 0 ) /*0x5db807*/
    v146 = v146 + flt_A2FC78; /*0x5db809*/
  v224 = v146; /*0x5db810*/
  Tile_SetFloat(v144, 0xFB0u, v224); /*0x5db81a*/
  v147 = reference->miscStats[0x16]; /*0x5db82d*/
  v148 = v143 + 2; /*0x5db83d*/
  v263 = (char *)stru_B38528.value; /*0x5db840*/
  v149 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db844*/
  v150 = (double)v148; /*0x5db851*/
  v151 = v149; /*0x5db855*/
  if ( v148 < 0 ) /*0x5db857*/
    v150 = v150 + flt_A2FC78; /*0x5db859*/
  v225 = v150; /*0x5db860*/
  Tile_SetFloat(v149, 0xFAAu, v225); /*0x5db86a*/
  Tile_SetString(v151, (_DWORD *)0xFAF, v263); /*0x5db87b*/
  v152 = (double)v147; /*0x5db886*/
  if ( v147 < 0 ) /*0x5db88a*/
    v152 = v152 + flt_A2FC78; /*0x5db88c*/
  v226 = v152; /*0x5db893*/
  Tile_SetFloat(v151, 0xFB0u, v226); /*0x5db89d*/
  v153 = reference->miscStats[0x18]; /*0x5db8ab*/
  v154 = v148 + 1; /*0x5db8c1*/
  v264 = (char *)stru_B384E8.value; /*0x5db8c4*/
  v155 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db8c8*/
  v156 = (double)v154; /*0x5db8d5*/
  v157 = v155; /*0x5db8d9*/
  if ( v154 < 0 ) /*0x5db8db*/
    v156 = v156 + flt_A2FC78; /*0x5db8dd*/
  v227 = v156; /*0x5db8e4*/
  Tile_SetFloat(v155, 0xFAAu, v227); /*0x5db8ee*/
  Tile_SetString(v157, (_DWORD *)0xFAF, v264); /*0x5db8ff*/
  v158 = (double)v153; /*0x5db90a*/
  if ( v153 < 0 ) /*0x5db90e*/
    v158 = v158 + flt_A2FC78; /*0x5db910*/
  v228 = v158; /*0x5db917*/
  Tile_SetFloat(v157, 0xFB0u, v228); /*0x5db921*/
  v159 = reference->miscStats[0x19]; /*0x5db934*/
  v265 = (char *)stru_B384D8.value; /*0x5db941*/
  v160 = v154 + 2; /*0x5db948*/
  v161 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db950*/
  v162 = (double)v160; /*0x5db95a*/
  if ( v160 < 0 ) /*0x5db95e*/
    v162 = v162 + flt_A2FC78; /*0x5db960*/
  v229 = v162; /*0x5db967*/
  Tile_SetFloat(v161, 0xFAAu, v229); /*0x5db971*/
  Tile_SetString(v161, (_DWORD *)0xFAF, v265); /*0x5db982*/
  v163 = (double)v159; /*0x5db98d*/
  if ( v159 < 0 ) /*0x5db991*/
    v163 = v163 + flt_A2FC78; /*0x5db993*/
  v230 = v163; /*0x5db99a*/
  Tile_SetFloat(v161, 0xFB0u, v230); /*0x5db9a4*/
  v164 = reference->miscStats[0x1A]; /*0x5db9b7*/
  v165 = v160 + 1; /*0x5db9c7*/
  v266 = (char *)stru_B384E0.value; /*0x5db9ca*/
  v166 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5db9ce*/
  v167 = (double)v165; /*0x5db9db*/
  v168 = v166; /*0x5db9df*/
  if ( v165 < 0 ) /*0x5db9e1*/
    v167 = v167 + flt_A2FC78; /*0x5db9e3*/
  v231 = v167; /*0x5db9ea*/
  Tile_SetFloat(v166, 0xFAAu, v231); /*0x5db9f4*/
  Tile_SetString(v168, (_DWORD *)0xFAF, v266); /*0x5dba05*/
  v169 = (double)v164; /*0x5dba10*/
  if ( v164 < 0 ) /*0x5dba14*/
    v169 = v169 + flt_A2FC78; /*0x5dba16*/
  v232 = v169; /*0x5dba1d*/
  Tile_SetFloat(v168, 0xFB0u, v232); /*0x5dba27*/
  v170 = reference->miscStats[0x1B]; /*0x5dba35*/
  v267 = (char *)MEMORY[0xB38538].value; /*0x5dba4b*/
  v171 = Menu::RenderTemplate((Menu *)esi0, *(Tile **)(esi0 + 0x4C), "stat_misc_template", 0); /*0x5dba4f*/
  v172 = (double)(v165 + 2); /*0x5dba5d*/
  v173 = v171; /*0x5dba61*/
  if ( v165 + 2 < 0 ) /*0x5dba63*/
    v172 = v172 + flt_A2FC78; /*0x5dba65*/
  v233 = v172; /*0x5dba6c*/
  Tile_SetFloat(v171, 0xFAAu, v233); /*0x5dba76*/
  Tile_SetString(v173, (_DWORD *)0xFAF, v267); /*0x5dba87*/
  v174 = (double)v170; /*0x5dba92*/
  if ( v170 < 0 ) /*0x5dba96*/
    v174 = v174 + flt_A2FC78; /*0x5dba98*/
  v234 = v174; /*0x5dba9f*/
  Tile_SetFloat(v173, 0xFB0u, v234); /*0x5dbaa9*/
  Tile_SetFloat(*(Tile **)(esi0 + 0x50), 0xFB3u, flt_A6B328); /*0x5dbac0*/
  v235 = (float)v268; /*0x5dbacd*/
  Tile_SetFloat(*(Tile **)(esi0 + 0x50), 0xFB3u, v235); /*0x5dbad5*/
  Tile_SetFloat(*(Tile **)(esi0 + 0x50), 0xFB3u, 0.0); /*0x5dbae8*/
}
