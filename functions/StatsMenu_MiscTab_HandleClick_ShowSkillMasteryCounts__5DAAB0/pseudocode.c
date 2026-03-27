// positive sp value has been detected, the output may be wrong!
void __usercall StatsMenu_MiscTab_HandleClick_::ShowSkillMasteryCounts(
        int a1@<ebx>,
        int a2@<edi>,
        int esi0@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  char **v6; // eax
  unsigned int *TileFromTemplate; // ebp
  double v8; // st7
  char *v9; // ebx
  int v10; // edi
  double CrimeGold; // st7
  unsigned int *v12; // eax
  unsigned int *v13; // ebp
  double v14; // st7
  double v15; // st7
  int v16; // edi
  char *v17; // ebp
  unsigned int *v18; // ebx
  double v19; // st7
  int v20; // ecx
  char *v21; // ebx
  unsigned int *v22; // eax
  double v23; // st7
  unsigned int *v24; // ebp
  double v25; // st7
  char *v26; // ebx
  int v27; // edi
  unsigned int *v28; // eax
  double v29; // st7
  unsigned int *v30; // ebp
  double v31; // st7
  int v32; // ebp
  int v33; // edi
  unsigned int *v34; // eax
  double v35; // st7
  unsigned int *v36; // ebx
  double v37; // st7
  void ***v38; // ebx
  int v39; // edi
  int i; // eax
  unsigned int *v41; // eax
  double v42; // st7
  unsigned int *v43; // ebp
  int v44; // ebp
  unsigned int *v45; // eax
  double v46; // st7
  unsigned int *v47; // ebx
  double v48; // st7
  int v49; // ebp
  int v50; // edi
  unsigned int *v51; // eax
  double v52; // st7
  unsigned int *v53; // ebx
  double v54; // st7
  int v55; // ebp
  int v56; // edi
  unsigned int *v57; // ebx
  double v58; // st7
  double v59; // st7
  int v60; // ebp
  int v61; // edi
  unsigned int *v62; // eax
  double v63; // st7
  unsigned int *v64; // ebx
  double v65; // st7
  int v66; // ebp
  int v67; // edi
  unsigned int *v68; // eax
  double v69; // st7
  unsigned int *v70; // ebx
  double v71; // st7
  int v72; // ebp
  int v73; // edi
  unsigned int *v74; // ebx
  double v75; // st7
  double v76; // st7
  int v77; // ebp
  int v78; // edi
  unsigned int *v79; // eax
  double v80; // st7
  unsigned int *v81; // ebx
  double v82; // st7
  int v83; // ebp
  int v84; // edi
  unsigned int *v85; // eax
  double v86; // st7
  unsigned int *v87; // ebx
  double v88; // st7
  int v89; // ebp
  int v90; // edi
  unsigned int *v91; // ebx
  double v92; // st7
  double v93; // st7
  int v94; // ebp
  int v95; // edi
  unsigned int *v96; // eax
  double v97; // st7
  unsigned int *v98; // ebx
  double v99; // st7
  int v100; // ebp
  int v101; // edi
  unsigned int *v102; // eax
  double v103; // st7
  unsigned int *v104; // ebx
  double v105; // st7
  int v106; // ebp
  int v107; // edi
  unsigned int *v108; // ebx
  double v109; // st7
  double v110; // st7
  int v111; // ebp
  int v112; // edi
  unsigned int *v113; // eax
  double v114; // st7
  unsigned int *v115; // ebx
  double v116; // st7
  int v117; // ebp
  int v118; // edi
  unsigned int *v119; // eax
  double v120; // st7
  unsigned int *v121; // ebx
  double v122; // st7
  int v123; // ebp
  int v124; // edi
  unsigned int *v125; // ebx
  double v126; // st7
  double v127; // st7
  int v128; // ebp
  int v129; // edi
  unsigned int *v130; // eax
  double v131; // st7
  unsigned int *v132; // ebx
  double v133; // st7
  int v134; // ebp
  int v135; // edi
  unsigned int *v136; // eax
  double v137; // st7
  unsigned int *v138; // ebx
  double v139; // st7
  int v140; // ebp
  int v141; // edi
  unsigned int *v142; // ebx
  double v143; // st7
  double v144; // st7
  int v145; // ebp
  int v146; // edi
  unsigned int *v147; // eax
  double v148; // st7
  unsigned int *v149; // ebx
  double v150; // st7
  int v151; // ebp
  int v152; // edi
  unsigned int *v153; // eax
  double v154; // st7
  unsigned int *v155; // ebx
  double v156; // st7
  int v157; // ebp
  int v158; // edi
  unsigned int *v159; // ebx
  double v160; // st7
  double v161; // st7
  int v162; // ebp
  int v163; // edi
  unsigned int *v164; // eax
  double v165; // st7
  unsigned int *v166; // ebx
  double v167; // st7
  int v168; // ebp
  unsigned int *v169; // eax
  double v170; // st7
  unsigned int *v171; // ebx
  double v172; // st7
  float v173; // [esp-44h] [ebp-48h]
  float v174; // [esp-44h] [ebp-48h]
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
  char *v234; // [esp-30h] [ebp-34h]
  int v235; // [esp-2Ch] [ebp-30h]
  int v236; // [esp-2Ch] [ebp-30h]
  float v237; // [esp-2Ch] [ebp-30h]
  int v238; // [esp-2Ch] [ebp-30h]
  int v239; // [esp-2Ch] [ebp-30h]
  char *v240; // [esp-2Ch] [ebp-30h]
  char *v241; // [esp-2Ch] [ebp-30h]
  int v242; // [esp-28h] [ebp-2Ch]
  char *v243; // [esp-28h] [ebp-2Ch]
  char *v244; // [esp-28h] [ebp-2Ch]
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
  int v266; // [esp-24h] [ebp-28h]
  _BYTE v267[16]; // [esp-10h] [ebp-14h]

  do
  {
    v6 = *(char ***)((char *)&off_B11E3C + a1);
    if ( v6 )
      v234 = *v6;
    else
      v234 = 0;
    TileFromTemplate = Menu_CreateTileFromTemplate(
                         (_DWORD *)esi0,
                         a4,
                         a5,
                         a6,
                         *(TileWindow **)(esi0 + 0x4C),
                         "stat_misc_template",
                         0);
    v8 = (double)a2;
    if ( a2 < 0 )
      v8 = v8 + flt_A2FC78;
    v173 = v8;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v173);
    Tile_SetString(TileFromTemplate, (_DWORD *)0xFAF, v234);
    a6 = (double)*(int *)&v267[a1];
    if ( *(int *)&v267[a1] < 0 )
      a6 = a6 + flt_A2FC78;
    v174 = a6;
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, v174);
    ++a2;
    a1 += 4;
    --v235;
  }
  while ( v235 );
  v9 = (char *)sMiscBounty;
  v10 = a2 + 1;
  CrimeGold = ExtraDataList_GetCrimeGold(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
  v236 = (__int64)CrimeGold;
  v12 = Menu_CreateTileFromTemplate(
          (_DWORD *)esi0,
          a4,
          a5,
          CrimeGold,
          *(TileWindow **)(esi0 + 0x4C),
          "stat_misc_template",
          0);
  v13 = v12;
  v14 = (double)v10;
  if ( v10 < 0 )
    v14 = v14 + flt_A2FC78;
  v175 = v14;
  Tile_SetFloat((Tile *)v12, (_DWORD *)0xFAA, v175);
  Tile_SetString(v13, (_DWORD *)0xFAF, v9);
  v15 = (double)v236;
  if ( v236 < 0 )
    v15 = v15 + flt_A2FC78;
  v176 = v15;
  Tile_SetFloat((Tile *)v13, (_DWORD *)0xFB0, v176);
  v16 = v10 + 1;
  if ( sub_46B280("SEWorld") )
  {
    v17 = (char *)sMiscSEBounty;
    v237 = *(float *)&TESDataHandler_g_PlayerRef->unk700;
    v18 = Menu_CreateTileFromTemplate(
            (_DWORD *)esi0,
            a4,
            a5,
            v237,
            *(TileWindow **)(esi0 + 0x4C),
            "stat_misc_template",
            0);
    v19 = (double)v16;
    if ( v16 < 0 )
      v19 = v19 + flt_A2FC78;
    v177 = v19;
    Tile_SetFloat((Tile *)v18, (_DWORD *)0xFAA, v177);
    Tile_SetString(v18, (_DWORD *)0xFAF, v17);
    v20 = (__int64)v237;
    v15 = (double)v20;
    if ( v20 < 0 )
      v15 = v15 + flt_A2FC78;
    v178 = v15;
    Tile_SetFloat((Tile *)v18, (_DWORD *)0xFB0, v178);
    ++v16;
  }
  v21 = (char *)dword_B383F8;
  v238 = TESDataHandler_g_PlayerRef->vtbl->super.GetFame((Actor *)TESDataHandler_g_PlayerRef);
  v22 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v15, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v23 = (double)v16;
  v24 = v22;
  if ( v16 < 0 )
    v23 = v23 + flt_A2FC78;
  v179 = v23;
  Tile_SetFloat((Tile *)v22, (_DWORD *)0xFAA, v179);
  Tile_SetString(v24, (_DWORD *)0xFAF, v21);
  v25 = (double)v238;
  if ( v238 < 0 )
    v25 = v25 + flt_A2FC78;
  v180 = v25;
  Tile_SetFloat((Tile *)v24, (_DWORD *)0xFB0, v180);
  v26 = (char *)dword_B383F0;
  v27 = v16 + 1;
  v239 = TESDataHandler_g_PlayerRef->vtbl->super.GetInfamy((Actor *)TESDataHandler_g_PlayerRef);
  v28 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v25, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v29 = (double)v27;
  v30 = v28;
  if ( v27 < 0 )
    v29 = v29 + flt_A2FC78;
  v181 = v29;
  Tile_SetFloat((Tile *)v28, (_DWORD *)0xFAA, v181);
  Tile_SetString(v30, (_DWORD *)0xFAF, v26);
  v31 = (double)v239;
  if ( v239 < 0 )
    v31 = v31 + flt_A2FC78;
  v182 = v31;
  Tile_SetFloat((Tile *)v30, (_DWORD *)0xFB0, v182);
  v32 = TESDataHandler_g_PlayerRef->miscStats[0];
  v33 = v27 + 2;
  v240 = (char *)sMiscDaysJailed;
  v34 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v31, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v35 = (double)v33;
  v36 = v34;
  if ( v33 < 0 )
    v35 = v35 + flt_A2FC78;
  v183 = v35;
  Tile_SetFloat((Tile *)v34, (_DWORD *)0xFAA, v183);
  Tile_SetString(v36, (_DWORD *)0xFAF, v240);
  v37 = (double)v32;
  if ( v32 < 0 )
    v37 = v37 + flt_A2FC78;
  v184 = v37;
  Tile_SetFloat((Tile *)v36, (_DWORD *)0xFB0, v184);
  v38 = (void ***)&off_B11E50;
  v39 = v33 + 1;
  for ( i = 0x6C8 - (_DWORD)&off_B11E50; ; i = 0x6C8 - (_DWORD)&off_B11E50 )
  {
    v242 = *(int *)((char *)&TESDataHandler_g_PlayerRef->vtbl + (_DWORD)v38 + i);
    v241 = *v38 ? (char *)**v38 : 0;
    v41 = Menu_CreateTileFromTemplate(
            (_DWORD *)esi0,
            a4,
            a5,
            v37,
            *(TileWindow **)(esi0 + 0x4C),
            "stat_misc_template",
            0);
    v42 = (double)v39;
    v43 = v41;
    if ( v39 < 0 )
      v42 = v42 + flt_A2FC78;
    v185 = v42;
    Tile_SetFloat((Tile *)v41, (_DWORD *)0xFAA, v185);
    Tile_SetString(v43, (_DWORD *)0xFAF, v241);
    v37 = (double)v242;
    if ( v242 < 0 )
      v37 = v37 + flt_A2FC78;
    v186 = v37;
    Tile_SetFloat((Tile *)v43, (_DWORD *)0xFB0, v186);
    ++v38;
    ++v39;
    if ( (int)v38 >= (int)&NiTListBase<NiTPointerAllocator<unsigned int>,BSFaceGenKeyframe *> `RTTI Type Descriptor' )
      break;
  }
  v44 = TESDataHandler_g_PlayerRef->miscStats[4];
  v243 = (char *)sMiscLargestBounty;
  v45 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v37, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v46 = (double)v39;
  v47 = v45;
  if ( v39 < 0 )
    v46 = v46 + flt_A2FC78;
  v187 = v46;
  Tile_SetFloat((Tile *)v45, (_DWORD *)0xFAA, v187);
  Tile_SetString(v47, (_DWORD *)0xFAF, v243);
  v48 = (double)v44;
  if ( v44 < 0 )
    v48 = v48 + flt_A2FC78;
  v188 = v48;
  Tile_SetFloat((Tile *)v47, (_DWORD *)0xFB0, v188);
  v49 = TESDataHandler_g_PlayerRef->miscStats[5];
  v50 = v39 + 2;
  v244 = (char *)sMiscNumKills;
  v51 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v48, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v52 = (double)v50;
  v53 = v51;
  if ( v50 < 0 )
    v52 = v52 + flt_A2FC78;
  v189 = v52;
  Tile_SetFloat((Tile *)v51, (_DWORD *)0xFAA, v189);
  Tile_SetString(v53, (_DWORD *)0xFAF, v244);
  v54 = (double)v49;
  if ( v49 < 0 )
    v54 = v54 + flt_A2FC78;
  v190 = v54;
  Tile_SetFloat((Tile *)v53, (_DWORD *)0xFB0, v190);
  v55 = TESDataHandler_g_PlayerRef->miscStats[6];
  v245 = (char *)sMiscNumPersonKills;
  v56 = v50 + 1;
  v57 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v54, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v58 = (double)v56;
  if ( v56 < 0 )
    v58 = v58 + flt_A2FC78;
  v191 = v58;
  Tile_SetFloat((Tile *)v57, (_DWORD *)0xFAA, v191);
  Tile_SetString(v57, (_DWORD *)0xFAF, v245);
  v59 = (double)v55;
  if ( v55 < 0 )
    v59 = v59 + flt_A2FC78;
  v192 = v59;
  Tile_SetFloat((Tile *)v57, (_DWORD *)0xFB0, v192);
  v60 = TESDataHandler_g_PlayerRef->miscStats[7];
  v61 = v56 + 2;
  v246 = (char *)sMiscNumPlacesDiscovered;
  v62 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v59, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v63 = (double)v61;
  v64 = v62;
  if ( v61 < 0 )
    v63 = v63 + flt_A2FC78;
  v193 = v63;
  Tile_SetFloat((Tile *)v62, (_DWORD *)0xFAA, v193);
  Tile_SetString(v64, (_DWORD *)0xFAF, v246);
  v65 = (double)v60;
  if ( v60 < 0 )
    v65 = v65 + flt_A2FC78;
  v194 = v65;
  Tile_SetFloat((Tile *)v64, (_DWORD *)0xFB0, v194);
  v66 = TESDataHandler_g_PlayerRef->miscStats[8];
  v67 = v61 + 2;
  v247 = (char *)sMiscNumLocksPicked;
  v68 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v65, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v69 = (double)v67;
  v70 = v68;
  if ( v67 < 0 )
    v69 = v69 + flt_A2FC78;
  v195 = v69;
  Tile_SetFloat((Tile *)v68, (_DWORD *)0xFAA, v195);
  Tile_SetString(v70, (_DWORD *)0xFAF, v247);
  v71 = (double)v66;
  if ( v66 < 0 )
    v71 = v71 + flt_A2FC78;
  v196 = v71;
  Tile_SetFloat((Tile *)v70, (_DWORD *)0xFB0, v196);
  v72 = TESDataHandler_g_PlayerRef->miscStats[9];
  v248 = (char *)sMiscNumPicksBroken;
  v73 = v67 + 1;
  v74 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v71, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v75 = (double)v73;
  if ( v73 < 0 )
    v75 = v75 + flt_A2FC78;
  v197 = v75;
  Tile_SetFloat((Tile *)v74, (_DWORD *)0xFAA, v197);
  Tile_SetString(v74, (_DWORD *)0xFAF, v248);
  v76 = (double)v72;
  if ( v72 < 0 )
    v76 = v76 + flt_A2FC78;
  v198 = v76;
  Tile_SetFloat((Tile *)v74, (_DWORD *)0xFB0, v198);
  v77 = TESDataHandler_g_PlayerRef->miscStats[0xA];
  v78 = v73 + 2;
  v249 = (char *)sMiscSoulsTrapped;
  v79 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v76, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v80 = (double)v78;
  v81 = v79;
  if ( v78 < 0 )
    v80 = v80 + flt_A2FC78;
  v199 = v80;
  Tile_SetFloat((Tile *)v79, (_DWORD *)0xFAA, v199);
  Tile_SetString(v81, (_DWORD *)0xFAF, v249);
  v82 = (double)v77;
  if ( v77 < 0 )
    v82 = v82 + flt_A2FC78;
  v200 = v82;
  Tile_SetFloat((Tile *)v81, (_DWORD *)0xFB0, v200);
  v83 = TESDataHandler_g_PlayerRef->miscStats[0xB];
  v84 = v78 + 2;
  v250 = (char *)dword_B38500;
  v85 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v82, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v86 = (double)v84;
  v87 = v85;
  if ( v84 < 0 )
    v86 = v86 + flt_A2FC78;
  v201 = v86;
  Tile_SetFloat((Tile *)v85, (_DWORD *)0xFAA, v201);
  Tile_SetString(v87, (_DWORD *)0xFAF, v250);
  v88 = (double)v83;
  if ( v83 < 0 )
    v88 = v88 + flt_A2FC78;
  v202 = v88;
  Tile_SetFloat((Tile *)v87, (_DWORD *)0xFB0, v202);
  v89 = TESDataHandler_g_PlayerRef->miscStats[0xC];
  v251 = (char *)dword_B38488;
  v90 = v84 + 1;
  v91 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v88, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v92 = (double)v90;
  if ( v90 < 0 )
    v92 = v92 + flt_A2FC78;
  v203 = v92;
  Tile_SetFloat((Tile *)v91, (_DWORD *)0xFAA, v203);
  Tile_SetString(v91, (_DWORD *)0xFAF, v251);
  v93 = (double)v89;
  if ( v89 < 0 )
    v93 = v93 + flt_A2FC78;
  v204 = v93;
  Tile_SetFloat((Tile *)v91, (_DWORD *)0xFB0, v204);
  v94 = TESDataHandler_g_PlayerRef->miscStats[0xD];
  v95 = v90 + 2;
  v252 = (char *)dword_B38508;
  v96 = Menu_CreateTileFromTemplate((_DWORD *)esi0, a4, a5, v93, *(TileWindow **)(esi0 + 0x4C), "stat_misc_template", 0);
  v97 = (double)v95;
  v98 = v96;
  if ( v95 < 0 )
    v97 = v97 + flt_A2FC78;
  v205 = v97;
  Tile_SetFloat((Tile *)v96, (_DWORD *)0xFAA, v205);
  Tile_SetString(v98, (_DWORD *)0xFAF, v252);
  v99 = (double)v94;
  if ( v94 < 0 )
    v99 = v99 + flt_A2FC78;
  v206 = v99;
  Tile_SetFloat((Tile *)v98, (_DWORD *)0xFB0, v206);
  v100 = TESDataHandler_g_PlayerRef->miscStats[0xE];
  v101 = v95 + 2;
  v253 = (char *)dword_B38510;
  v102 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v99,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v103 = (double)v101;
  v104 = v102;
  if ( v101 < 0 )
    v103 = v103 + flt_A2FC78;
  v207 = v103;
  Tile_SetFloat((Tile *)v102, (_DWORD *)0xFAA, v207);
  Tile_SetString(v104, (_DWORD *)0xFAF, v253);
  v105 = (double)v100;
  if ( v100 < 0 )
    v105 = v105 + flt_A2FC78;
  v208 = v105;
  Tile_SetFloat((Tile *)v104, (_DWORD *)0xFB0, v208);
  v106 = TESDataHandler_g_PlayerRef->miscStats[0xF];
  v254 = (char *)dword_B38518;
  v107 = v101 + 1;
  v108 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v105,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v109 = (double)v107;
  if ( v107 < 0 )
    v109 = v109 + flt_A2FC78;
  v209 = v109;
  Tile_SetFloat((Tile *)v108, (_DWORD *)0xFAA, v209);
  Tile_SetString(v108, (_DWORD *)0xFAF, v254);
  v110 = (double)v106;
  if ( v106 < 0 )
    v110 = v110 + flt_A2FC78;
  v210 = v110;
  Tile_SetFloat((Tile *)v108, (_DWORD *)0xFB0, v210);
  v111 = TESDataHandler_g_PlayerRef->miscStats[0x10];
  v112 = v107 + 1;
  v255 = (char *)dword_B38520;
  v113 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v110,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v114 = (double)v112;
  v115 = v113;
  if ( v112 < 0 )
    v114 = v114 + flt_A2FC78;
  v211 = v114;
  Tile_SetFloat((Tile *)v113, (_DWORD *)0xFAA, v211);
  Tile_SetString(v115, (_DWORD *)0xFAF, v255);
  v116 = (double)v111;
  if ( v111 < 0 )
    v116 = v116 + flt_A2FC78;
  v212 = v116;
  Tile_SetFloat((Tile *)v115, (_DWORD *)0xFB0, v212);
  v117 = TESDataHandler_g_PlayerRef->miscStats[0x11];
  v118 = v112 + 2;
  v256 = (char *)dword_B384F0;
  v119 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v116,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v120 = (double)v118;
  v121 = v119;
  if ( v118 < 0 )
    v120 = v120 + flt_A2FC78;
  v213 = v120;
  Tile_SetFloat((Tile *)v119, (_DWORD *)0xFAA, v213);
  Tile_SetString(v121, (_DWORD *)0xFAF, v256);
  v122 = (double)v117;
  if ( v117 < 0 )
    v122 = v122 + flt_A2FC78;
  v214 = v122;
  Tile_SetFloat((Tile *)v121, (_DWORD *)0xFB0, v214);
  v123 = TESDataHandler_g_PlayerRef->miscStats[0x12];
  v257 = (char *)dword_B384F8;
  v124 = v118 + 1;
  v125 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v122,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v126 = (double)v124;
  if ( v124 < 0 )
    v126 = v126 + flt_A2FC78;
  v215 = v126;
  Tile_SetFloat((Tile *)v125, (_DWORD *)0xFAA, v215);
  Tile_SetString(v125, (_DWORD *)0xFAF, v257);
  v127 = (double)v123;
  if ( v123 < 0 )
    v127 = v127 + flt_A2FC78;
  v216 = v127;
  Tile_SetFloat((Tile *)v125, (_DWORD *)0xFB0, v216);
  v128 = TESDataHandler_g_PlayerRef->miscStats[0x13];
  v129 = v124 + 1;
  v258 = (char *)sMiscArtifactsFound;
  v130 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v127,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v131 = (double)v129;
  v132 = v130;
  if ( v129 < 0 )
    v131 = v131 + flt_A2FC78;
  v217 = v131;
  Tile_SetFloat((Tile *)v130, (_DWORD *)0xFAA, v217);
  Tile_SetString(v132, (_DWORD *)0xFAF, v258);
  v133 = (double)v128;
  if ( v128 < 0 )
    v133 = v133 + flt_A2FC78;
  v218 = v133;
  Tile_SetFloat((Tile *)v132, (_DWORD *)0xFB0, v218);
  v134 = TESDataHandler_g_PlayerRef->miscStats[0x14];
  v135 = v129 + 2;
  v259 = (char *)sMiscHoursSlept;
  v136 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v133,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v137 = (double)v135;
  v138 = v136;
  if ( v135 < 0 )
    v137 = v137 + flt_A2FC78;
  v219 = v137;
  Tile_SetFloat((Tile *)v136, (_DWORD *)0xFAA, v219);
  Tile_SetString(v138, (_DWORD *)0xFAF, v259);
  v139 = (double)v134;
  if ( v134 < 0 )
    v139 = v139 + flt_A2FC78;
  v220 = v139;
  Tile_SetFloat((Tile *)v138, (_DWORD *)0xFB0, v220);
  v140 = TESDataHandler_g_PlayerRef->miscStats[0x15];
  v260 = (char *)dword_B384D0;
  v141 = v135 + 1;
  v142 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v139,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v143 = (double)v141;
  if ( v141 < 0 )
    v143 = v143 + flt_A2FC78;
  v221 = v143;
  Tile_SetFloat((Tile *)v142, (_DWORD *)0xFAA, v221);
  Tile_SetString(v142, (_DWORD *)0xFAF, v260);
  v144 = (double)v140;
  if ( v140 < 0 )
    v144 = v144 + flt_A2FC78;
  v222 = v144;
  Tile_SetFloat((Tile *)v142, (_DWORD *)0xFB0, v222);
  v145 = TESDataHandler_g_PlayerRef->miscStats[0x16];
  v146 = v141 + 2;
  v261 = (char *)dword_B38528;
  v147 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v144,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v148 = (double)v146;
  v149 = v147;
  if ( v146 < 0 )
    v148 = v148 + flt_A2FC78;
  v223 = v148;
  Tile_SetFloat((Tile *)v147, (_DWORD *)0xFAA, v223);
  Tile_SetString(v149, (_DWORD *)0xFAF, v261);
  v150 = (double)v145;
  if ( v145 < 0 )
    v150 = v150 + flt_A2FC78;
  v224 = v150;
  Tile_SetFloat((Tile *)v149, (_DWORD *)0xFB0, v224);
  v151 = TESDataHandler_g_PlayerRef->miscStats[0x18];
  v152 = v146 + 1;
  v262 = (char *)dword_B384E8;
  v153 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v150,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v154 = (double)v152;
  v155 = v153;
  if ( v152 < 0 )
    v154 = v154 + flt_A2FC78;
  v225 = v154;
  Tile_SetFloat((Tile *)v153, (_DWORD *)0xFAA, v225);
  Tile_SetString(v155, (_DWORD *)0xFAF, v262);
  v156 = (double)v151;
  if ( v151 < 0 )
    v156 = v156 + flt_A2FC78;
  v226 = v156;
  Tile_SetFloat((Tile *)v155, (_DWORD *)0xFB0, v226);
  v157 = TESDataHandler_g_PlayerRef->miscStats[0x19];
  v263 = (char *)dword_B384D8;
  v158 = v152 + 2;
  v159 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v156,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v160 = (double)v158;
  if ( v158 < 0 )
    v160 = v160 + flt_A2FC78;
  v227 = v160;
  Tile_SetFloat((Tile *)v159, (_DWORD *)0xFAA, v227);
  Tile_SetString(v159, (_DWORD *)0xFAF, v263);
  v161 = (double)v157;
  if ( v157 < 0 )
    v161 = v161 + flt_A2FC78;
  v228 = v161;
  Tile_SetFloat((Tile *)v159, (_DWORD *)0xFB0, v228);
  v162 = TESDataHandler_g_PlayerRef->miscStats[0x1A];
  v163 = v158 + 1;
  v264 = (char *)dword_B384E0;
  v164 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v161,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v165 = (double)v163;
  v166 = v164;
  if ( v163 < 0 )
    v165 = v165 + flt_A2FC78;
  v229 = v165;
  Tile_SetFloat((Tile *)v164, (_DWORD *)0xFAA, v229);
  Tile_SetString(v166, (_DWORD *)0xFAF, v264);
  v167 = (double)v162;
  if ( v162 < 0 )
    v167 = v167 + flt_A2FC78;
  v230 = v167;
  Tile_SetFloat((Tile *)v166, (_DWORD *)0xFB0, v230);
  v168 = TESDataHandler_g_PlayerRef->miscStats[0x1B];
  v265 = (char *)sMiscNirnrootsFound;
  v169 = Menu_CreateTileFromTemplate(
           (_DWORD *)esi0,
           a4,
           a5,
           v167,
           *(TileWindow **)(esi0 + 0x4C),
           "stat_misc_template",
           0);
  v170 = (double)(v163 + 2);
  v171 = v169;
  if ( v163 + 2 < 0 )
    v170 = v170 + flt_A2FC78;
  v231 = v170;
  Tile_SetFloat((Tile *)v169, (_DWORD *)0xFAA, v231);
  Tile_SetString(v171, (_DWORD *)0xFAF, v265);
  v172 = (double)v168;
  if ( v168 < 0 )
    v172 = v172 + flt_A2FC78;
  v232 = v172;
  Tile_SetFloat((Tile *)v171, (_DWORD *)0xFB0, v232);
  Tile_SetFloat(*(Tile **)(esi0 + 0x50), (_DWORD *)0xFB3, flt_A6B328);
  v233 = (float)v266;
  Tile_SetFloat(*(Tile **)(esi0 + 0x50), (_DWORD *)0xFB3, v233);
  Tile_SetFloat(*(Tile **)(esi0 + 0x50), (_DWORD *)0xFB3, 0.0);
}
