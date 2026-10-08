void __userpurge sub_5CC200(int a1@<ecx>, double st5_0@<st2>, signed int a3, int a4)
{
  Tile *v5; // ecx
  const char *v6; // eax
  _DWORD *CategoryTileByName; // edi
  double v8; // st7
  const char *v9; // eax
  _DWORD *v10; // edi
  double v11; // st7
  const char *v12; // eax
  _DWORD *v13; // edi
  double v14; // st7
  char *v15; // eax
  _DWORD *v16; // edi
  double v17; // st7
  char *v18; // edx
  _DWORD *v19; // edi
  double v20; // st7
  char *v21; // eax
  _DWORD *v22; // edi
  double v23; // st7
  char *v24; // edx
  _DWORD *v25; // edi
  double v26; // st7
  char *v27; // eax
  _DWORD *v28; // edi
  double v29; // st7
  char *v30; // edx
  _DWORD *v31; // edi
  double v32; // st7
  char *v33; // eax
  _DWORD *v34; // edi
  double v35; // st7
  char *v36; // edx
  _DWORD *v37; // edi
  double v38; // st7
  char *v39; // eax
  _DWORD *v40; // edi
  double v41; // st7
  char *v42; // edx
  _DWORD *v43; // edi
  double v44; // st7
  char *v45; // eax
  _DWORD *v46; // edi
  double v47; // st7
  char *v48; // edx
  _DWORD *v49; // edi
  double v50; // st7
  char *v51; // eax
  _DWORD *v52; // edi
  double v53; // st7
  char *v54; // edx
  _DWORD *v55; // edi
  double v56; // st7
  char *v57; // eax
  _DWORD *v58; // edi
  double v59; // st7
  char *v60; // edx
  _DWORD *v61; // edi
  double v62; // st7
  char *v63; // eax
  _DWORD *v64; // eax
  Tile *v65; // edi
  char *v66; // edx
  _DWORD *v67; // eax
  Tile *v68; // esi
  const char *value; // eax
  const char *v70; // eax
  Tile *ControlTile; // eax
  double Float; // st7
  const char *v73; // edx
  char *v74; // eax
  char *v75; // ecx
  char *v76; // eax
  _DWORD *v77; // eax
  Tile *v78; // edi
  char *v79; // eax
  _DWORD *v80; // eax
  Tile *v81; // edi
  const char *v82; // eax
  _DWORD *v83; // eax
  Tile *v84; // edi
  const char *v85; // eax
  _DWORD *v86; // ecx
  unsigned int v87; // edi
  const unsigned __int8 *v88; // edi
  CHAR *v89; // eax
  Actor *v90; // ecx
  char *m_data; // ecx
  char v92; // al
  bool v93; // zf
  const char *v94; // eax
  char *v95; // ecx
  char *v96; // edx
  void *v97; // esi
  TESForm *v98; // eax
  const char *v99; // eax
  const char *v100; // eax
  Tile *v101; // eax
  double v102; // st7
  char *v103; // ecx
  char *v104; // edx
  char *v105; // eax
  char *v106; // edx
  char *v107; // eax
  Tile *v108; // eax
  double v109; // st7
  double v110; // st6
  char *v111; // edx
  char *v112; // eax
  Tile *v113; // eax
  double v114; // st7
  char *v115; // edx
  char *v116; // eax
  Tile *v117; // eax
  double v118; // st7
  char *v119; // edx
  char *v120; // eax
  Tile *v121; // eax
  double v122; // st7
  char *v123; // edx
  char *v124; // eax
  Tile *v125; // eax
  double v126; // st7
  char *v127; // edx
  char *v128; // eax
  Tile *v129; // eax
  double v130; // st7
  char *v131; // edx
  char *v132; // eax
  Tile *v133; // eax
  double v134; // st7
  char *v135; // edx
  char *v136; // eax
  char *v137; // edx
  char *v138; // eax
  Tile *v139; // eax
  double v140; // st7
  char *v141; // edx
  char *v142; // edx
  char *v143; // eax
  Tile *v144; // eax
  double v145; // st7
  char *v146; // edx
  char *v147; // edx
  char *v148; // eax
  Tile *v149; // eax
  double v150; // st7
  char *v151; // edx
  char *v152; // edx
  char *v153; // eax
  Tile *v154; // eax
  double v155; // st7
  char *v156; // edx
  char *v157; // edx
  char *v158; // eax
  Tile *v159; // eax
  double v160; // st7
  char *v161; // edx
  char *v162; // edx
  char *v163; // eax
  Tile *v164; // eax
  double v165; // st7
  char *v166; // edx
  char *v167; // edx
  char *v168; // eax
  Tile *v169; // eax
  double v170; // st7
  char *v171; // edx
  char *v172; // edx
  char *v173; // eax
  Tile *v174; // eax
  double v175; // st7
  char *v176; // edx
  char *v177; // edx
  char *v178; // eax
  Tile *v179; // eax
  double v180; // st7
  char *v181; // edx
  char *v182; // edx
  char *v183; // eax
  Tile *v184; // eax
  double v185; // st7
  char *v186; // edx
  char *v187; // edx
  char *v188; // eax
  Tile *v189; // eax
  double v190; // st7
  char *v191; // edx
  char *v192; // edx
  char *v193; // eax
  Tile *v194; // eax
  double v195; // st7
  char *v196; // edx
  char *v197; // edx
  char *v198; // eax
  Tile *v199; // eax
  double v200; // st7
  char *v201; // edx
  char *v202; // edx
  char *v203; // eax
  Tile *v204; // eax
  double v205; // st7
  char *v206; // edx
  char *v207; // edx
  char *v208; // eax
  Tile *v209; // eax
  double v210; // st7
  char *v211; // edx
  char *v212; // edx
  char *v213; // eax
  Tile *v214; // eax
  double v215; // st7
  char *v216; // edx
  char *v217; // edx
  char *v218; // eax
  Tile *v219; // eax
  double v220; // st7
  char *v221; // edx
  char *v222; // edx
  char *v223; // eax
  Tile *v224; // eax
  double v225; // st7
  char *v226; // edx
  char *v227; // edx
  char *v228; // eax
  Tile *v229; // eax
  double v230; // st7
  char *v231; // edx
  void *ShadowSceneNode; // eax
  ShadowSceneNode_DecodedLayout *v233; // eax
  BSStringT v234; // [esp-10h] [ebp-48h] BYREF
  BSStringT v235; // [esp-8h] [ebp-40h] BYREF
  _DWORD *a2; // [esp+0h] [ebp-38h]
  char v237; // [esp+16h] [ebp-22h]
  char v238; // [esp+17h] [ebp-21h]
  void *v239; // [esp+18h] [ebp-20h]
  void *v240; // [esp+1Ch] [ebp-1Ch]
  void *v241[2]; // [esp+20h] [ebp-18h] BYREF
  int v242; // [esp+34h] [ebp-4h]

  v5 = *(Tile **)(a1 + 0x30); /*0x5cc22e*/
  *(float *)&a2 = 1.0; /*0x5cc234*/
  *(_DWORD *)&v235.m_dataLen = 0xFF0; /*0x5cc237*/
  v238 = 0; /*0x5cc23c*/
  *(_BYTE *)(a1 + 0x8D0) = 0; /*0x5cc241*/
  Tile_SetFloat(v5, *(UInt32 *)&v235.m_dataLen, *(float *)&a2); /*0x5cc248*/
  if ( sub_57D2F0(*(void **)(a1 + 0x8EC)) ) /*0x5cc253*/
  {
    sub_57DD90(*(void **)(a1 + 0x8EC), 0); /*0x5cc26b*/
    sub_5C30C0((char **)a1); /*0x5cc272*/
  }
  else if ( a3 == 0xA ) /*0x5cc8a6*/
  {
    sub_5C2730((void **)a1); /*0x5cc8ae*/
    sub_5C30C0((char **)a1); /*0x5cc8b5*/
LABEL_28:
    value = stru_B38FF0.value; /*0x5cc8ba*/
    a2 = (_DWORD *)0xFA8; /*0x5cc8bf*/
    *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc8cb*/
    v235.m_data = 0; /*0x5cc8d1*/
    v235.m_dataLen = 0; /*0x5cc8d3*/
    v235.m_bufLen = 0; /*0x5cc8d7*/
    BSStringT_Set(&v235, value, 0); /*0x5cc8db*/
    v70 = stru_B38F80.value; /*0x5cc8e0*/
    v240 = &v234; /*0x5cc8ea*/
    v242 = 1; /*0x5cc8f0*/
    v234.m_data = 0; /*0x5cc8f8*/
    v234.m_dataLen = 0; /*0x5cc8fa*/
    v234.m_bufLen = 0; /*0x5cc8fe*/
    BSStringT_Set(&v234, v70, 0); /*0x5cc902*/
    v242 = 0xFFFFFFFF; /*0x5cc90c*/
    ControlTile = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cc910*/
    *(float *)&v239 = (float)a3; /*0x5cc91a*/
    *(double *)v241 = *(float *)&v239; /*0x5cc922*/
    Float = Tile_GetFloat(ControlTile, (int)a2); /*0x5cc926*/
    if ( *(double *)v241 == Float ) /*0x5cc936*/
    {
      if ( unk_B3B4C8 ) /*0x5cc93c*/
      {
        RaceSexMenu_ExecuteRandomizeFace();     // Direct menu-event entry into the same zero-argument Randomize Face executor. /*0x5ccbe5*/
      }
      else
      {
        v73 = MEMORY[0xB38CF8].value; /*0x5cc949*/
        v74 = (char *)MEMORY[0xB38D00].value; /*0x5cc94f*/
        v75 = (char *)g_sRandomizeFace.value;   // Randomize button path: load sRandomizeFace GMST, then show confirmation dialog with RaceSexMenu_RandomizeFaceConfirmCallback. /*0x5cc954*/
        *(float *)&a2 = 0.0; /*0x5cc95a*/
        ShowUIMessageBox( /*0x5cc966*/
          v75,
          st5_0,
          *(double *)v241,
          Float,
          v75,
          (int)RaceSexMenu_RandomizeFaceConfirmCallback,
          1,
          v74,
          (char)v73);                           // Stock RaceSexMenu randomize confirmation dialog. The callback runs only when the user selects Yes.
        unk_B3B4C8 = 1; /*0x5cc96e*/
      }
      v238 = 1; /*0x5cc975*/
      goto LABEL_115; /*0x5cc97a*/
    }
    if ( a3 == 0x62 ) /*0x5ccbf7*/
    {
      v98 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5ccc07*/
      sub_526F00(v98); /*0x5ccc0b*/
      RaceSexMenu_RefreshPlayerFace((void *)a1); /*0x5ccc12*/
      goto LABEL_115; /*0x5ccc17*/
    }
    v99 = stru_B38FF8.value; /*0x5ccc1c*/
    a2 = (_DWORD *)0xFA8; /*0x5ccc21*/
    v240 = &v235; /*0x5ccc2d*/
    v235.m_data = 0; /*0x5ccc33*/
    v235.m_dataLen = 0; /*0x5ccc35*/
    v235.m_bufLen = 0; /*0x5ccc39*/
    BSStringT_Set(&v235, v99, 0); /*0x5ccc3d*/
    v100 = stru_B38F80.value; /*0x5ccc42*/
    v241[0] = &v234; /*0x5ccc4c*/
    v242 = 2; /*0x5ccc52*/
    v234.m_data = 0; /*0x5ccc5a*/
    v234.m_dataLen = 0; /*0x5ccc5c*/
    v234.m_bufLen = 0; /*0x5ccc60*/
    BSStringT_Set(&v234, v100, 0); /*0x5ccc64*/
    v242 = 0xFFFFFFFF; /*0x5ccc6b*/
    v101 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5ccc6f*/
    *(double *)v241 = *(float *)&v239; /*0x5ccc7a*/
    v102 = Tile_GetFloat(v101, (int)a2); /*0x5ccc7e*/
    if ( *(double *)v241 == v102 ) /*0x5ccc8e*/
    {
      if ( unk_B3B4C9 ) /*0x5ccc90*/
      {
        RaceSexMenu_ExecuteResetFace(); /*0x5cccc8*/
      }
      else
      {
        v103 = (char *)MEMORY[0xB38CF8].value; /*0x5ccc98*/
        v104 = (char *)MEMORY[0xB38D00].value; /*0x5ccc9e*/
        v105 = (char *)g_sResetFace.value; /*0x5ccca4*/
        *(float *)&a2 = 0.0; /*0x5ccca9*/
        ShowUIMessageBox( /*0x5cccb4*/
          v103,
          st5_0,
          *(double *)v241,
          v102,
          v105,
          (int)RaceSexMenu_ResetFaceConfirmCallback,
          1,
          v104,
          (char)v103);
        unk_B3B4C9 = 1; /*0x5cccbc*/
      }
      goto LABEL_116; /*0x5cccc3*/
    }
    v106 = (char *)g_gameSetting_sAge.value; /*0x5cccd2*/
    a2 = (_DWORD *)0xFA8; /*0x5cccd8*/
    v241[0] = &v235; /*0x5ccce2*/
    BSStringT_constr_str(&v235, v106); /*0x5ccce7*/
    v107 = (char *)g_gameSetting_sMain.value; /*0x5cccec*/
    v240 = &v234; /*0x5cccf6*/
    v242 = 3; /*0x5cccfb*/
    BSStringT_constr_str(&v234, v107); /*0x5ccd03*/
    v242 = 0xFFFFFFFF; /*0x5ccd0a*/
    v108 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5ccd0e*/
    *(double *)v241 = *(float *)&v239; /*0x5ccd19*/
    v109 = Tile_GetFloat(v108, (int)a2); /*0x5ccd1d*/
    v110 = *(double *)v241; /*0x5ccd22*/
    if ( *(double *)v241 == v109 ) /*0x5ccd2d*/
    {
      sub_5C7070(0); /*0x5ccd30*/
      UpdatePlayerHead(st5_0, v110, v109); /*0x5ccd38*/
      goto LABEL_115; /*0x5ccd3d*/
    }
    v111 = (char *)stru_B38FC0.value; /*0x5ccd42*/
    a2 = (_DWORD *)0xFA8; /*0x5ccd48*/
    v241[0] = &v235; /*0x5ccd52*/
    BSStringT_constr_str(&v235, v111); /*0x5ccd57*/
    v112 = (char *)g_gameSetting_sHair.value; /*0x5ccd5c*/
    v240 = &v234; /*0x5ccd66*/
    v242 = 4; /*0x5ccd6b*/
    BSStringT_constr_str(&v234, v112); /*0x5ccd73*/
    v242 = 0xFFFFFFFF; /*0x5ccd7a*/
    v113 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5ccd7e*/
    *(double *)v241 = *(float *)&v239; /*0x5ccd89*/
    v114 = Tile_GetFloat(v113, (int)a2); /*0x5ccd8d*/
    if ( *(double *)v241 == v114 ) /*0x5ccd9d*/
      goto LABEL_114; /*0x5ccd9d*/
    v115 = (char *)stru_B38FC8.value; /*0x5ccda3*/
    a2 = (_DWORD *)0xFA8; /*0x5ccda9*/
    v241[0] = &v235; /*0x5ccdb3*/
    BSStringT_constr_str(&v235, v115); /*0x5ccdb8*/
    v116 = (char *)g_gameSetting_sHair.value; /*0x5ccdbd*/
    v240 = &v234; /*0x5ccdc7*/
    v242 = 5; /*0x5ccdcc*/
    BSStringT_constr_str(&v234, v116); /*0x5ccdd4*/
    v242 = 0xFFFFFFFF; /*0x5ccddb*/
    v117 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5ccddf*/
    *(double *)v241 = *(float *)&v239; /*0x5ccdea*/
    v118 = Tile_GetFloat(v117, (int)a2); /*0x5ccdee*/
    if ( *(double *)v241 == v118 ) /*0x5ccdfe*/
      goto LABEL_114; /*0x5ccdfe*/
    v119 = (char *)stru_B38FD0.value; /*0x5cce04*/
    a2 = (_DWORD *)0xFA8; /*0x5cce0a*/
    v241[0] = &v235; /*0x5cce14*/
    BSStringT_constr_str(&v235, v119); /*0x5cce19*/
    v120 = (char *)g_gameSetting_sHair.value; /*0x5cce1e*/
    v240 = &v234; /*0x5cce28*/
    v242 = 6; /*0x5cce2d*/
    BSStringT_constr_str(&v234, v120); /*0x5cce35*/
    v242 = 0xFFFFFFFF; /*0x5cce3c*/
    v121 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cce40*/
    *(double *)v241 = *(float *)&v239; /*0x5cce4b*/
    v122 = Tile_GetFloat(v121, (int)a2); /*0x5cce4f*/
    if ( *(double *)v241 == v122 ) /*0x5cce5f*/
    {
LABEL_114:
      sub_5C5C30((_DWORD *)a1, 1); /*0x5cd9c0*/
      goto LABEL_115; /*0x5cd9c0*/
    }
    v123 = (char *)g_gameSetting_sLength.value; /*0x5cce65*/
    a2 = (_DWORD *)0xFA8; /*0x5cce6b*/
    v241[0] = &v235; /*0x5cce75*/
    BSStringT_constr_str(&v235, v123); /*0x5cce7a*/
    v124 = (char *)g_gameSetting_sHair.value; /*0x5cce7f*/
    v240 = &v234; /*0x5cce89*/
    v242 = 7; /*0x5cce8e*/
    BSStringT_constr_str(&v234, v124); /*0x5cce96*/
    v242 = 0xFFFFFFFF; /*0x5cce9d*/
    v125 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5ccea1*/
    *(double *)v241 = *(float *)&v239; /*0x5cceac*/
    v126 = Tile_GetFloat(v125, (int)a2); /*0x5cceb0*/
    if ( *(double *)v241 == v126 ) /*0x5ccec0*/
    {
      RaceSexMenu_CommitHairLengthSlider((void *)a1); /*0x5ccec4*/
      goto LABEL_115; /*0x5ccec9*/
    }
    v127 = (char *)stru_B38FA8.value; /*0x5ccece*/
    a2 = (_DWORD *)0xFA8; /*0x5cced4*/
    v241[0] = &v235; /*0x5ccede*/
    BSStringT_constr_str(&v235, v127); /*0x5ccee3*/
    v128 = (char *)stru_B38F78.value; /*0x5ccee8*/
    v240 = &v234; /*0x5ccef2*/
    v242 = 8; /*0x5ccef7*/
    BSStringT_constr_str(&v234, v128); /*0x5cceff*/
    v242 = 0xFFFFFFFF; /*0x5ccf06*/
    v129 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5ccf0a*/
    *(double *)v241 = *(float *)&v239; /*0x5ccf15*/
    v130 = Tile_GetFloat(v129, (int)a2); /*0x5ccf19*/
    if ( *(double *)v241 == v130 ) /*0x5ccf29*/
    {
      sub_5C9770((float *)a1, st5_0, *(double *)v241, v130); /*0x5ccf2d*/
      goto LABEL_115; /*0x5ccf32*/
    }
    v131 = (char *)stru_B38F80.value; /*0x5ccf37*/
    a2 = (_DWORD *)0xFA8; /*0x5ccf3d*/
    v241[0] = &v235; /*0x5ccf47*/
    BSStringT_constr_str(&v235, v131); /*0x5ccf4c*/
    v132 = (char *)g_gameSetting_sMain.value; /*0x5ccf51*/
    v240 = &v234; /*0x5ccf5b*/
    v242 = 9; /*0x5ccf60*/
    BSStringT_constr_str(&v234, v132); /*0x5ccf68*/
    v242 = 0xFFFFFFFF; /*0x5ccf6f*/
    v133 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5ccf73*/
    *(double *)v241 = *(float *)&v239; /*0x5ccf7e*/
    v134 = Tile_GetFloat(v133, (int)a2); /*0x5ccf82*/
    if ( *(double *)v241 == v134 ) /*0x5ccf92*/
    {
      v135 = (char *)stru_B38F80.value; /*0x5ccf94*/
      *(float *)&a2 = 0.0; /*0x5ccf9a*/
      v241[0] = &v235; /*0x5ccfa0*/
      BSStringT_constr_str(&v235, v135); /*0x5ccfa5*/
      v242 = 0xA; /*0x5ccfaa*/
    }
    else
    {
      v137 = (char *)stru_B38FE0.value; /*0x5ccfd6*/
      a2 = (_DWORD *)0xFA8; /*0x5ccfdc*/
      v241[0] = &v235; /*0x5ccfe6*/
      BSStringT_constr_str(&v235, v137); /*0x5ccfeb*/
      v138 = (char *)stru_B38F80.value; /*0x5ccff0*/
      v240 = &v234; /*0x5ccffa*/
      v242 = 0xB; /*0x5ccfff*/
      BSStringT_constr_str(&v234, v138); /*0x5cd007*/
      v242 = 0xFFFFFFFF; /*0x5cd00e*/
      v139 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd012*/
      *(double *)v241 = *(float *)&v239; /*0x5cd01d*/
      v140 = Tile_GetFloat(v139, (int)a2); /*0x5cd021*/
      if ( *(double *)v241 == v140 ) /*0x5cd031*/
      {
        v141 = (char *)stru_B38FE0.value; /*0x5cd033*/
        a2 = (_DWORD *)1; /*0x5cd039*/
        v241[0] = &v235; /*0x5cd040*/
        BSStringT_constr_str(&v235, v141); /*0x5cd045*/
        v136 = (char *)stru_B38F80.value; /*0x5cd04a*/
        v242 = 0xC; /*0x5cd04f*/
        goto LABEL_75; /*0x5cd057*/
      }
      v142 = (char *)stru_B38FE8.value; /*0x5cd05c*/
      a2 = (_DWORD *)0xFA8; /*0x5cd062*/
      v241[0] = &v235; /*0x5cd06c*/
      BSStringT_constr_str(&v235, v142); /*0x5cd071*/
      v143 = (char *)stru_B38F80.value; /*0x5cd076*/
      v240 = &v234; /*0x5cd080*/
      v242 = 0xD; /*0x5cd085*/
      BSStringT_constr_str(&v234, v143); /*0x5cd08d*/
      v242 = 0xFFFFFFFF; /*0x5cd094*/
      v144 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd098*/
      *(double *)v241 = *(float *)&v239; /*0x5cd0a3*/
      v145 = Tile_GetFloat(v144, (int)a2); /*0x5cd0a7*/
      if ( *(double *)v241 == v145 ) /*0x5cd0b7*/
      {
        v146 = (char *)stru_B38FE8.value; /*0x5cd0b9*/
        a2 = (_DWORD *)1; /*0x5cd0bf*/
        v241[0] = &v235; /*0x5cd0c6*/
        BSStringT_constr_str(&v235, v146); /*0x5cd0cb*/
        v136 = (char *)stru_B38F80.value; /*0x5cd0d0*/
        v242 = 0xE; /*0x5cd0d5*/
        goto LABEL_75; /*0x5cd0dd*/
      }
      v147 = (char *)g_gameSetting_sHair.value; /*0x5cd0e2*/
      a2 = (_DWORD *)0xFA8; /*0x5cd0e8*/
      v241[0] = &v235; /*0x5cd0f2*/
      BSStringT_constr_str(&v235, v147); /*0x5cd0f7*/
      v148 = (char *)g_gameSetting_sMain.value; /*0x5cd0fc*/
      v240 = &v234; /*0x5cd106*/
      v242 = 0xF; /*0x5cd10b*/
      BSStringT_constr_str(&v234, v148); /*0x5cd113*/
      v242 = 0xFFFFFFFF; /*0x5cd11a*/
      v149 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd11e*/
      *(double *)v241 = *(float *)&v239; /*0x5cd129*/
      v150 = Tile_GetFloat(v149, (int)a2); /*0x5cd12d*/
      if ( *(double *)v241 == v150 ) /*0x5cd13d*/
      {
        v151 = (char *)g_gameSetting_sHair.value; /*0x5cd13f*/
        *(float *)&a2 = 0.0; /*0x5cd145*/
        v241[0] = &v235; /*0x5cd14b*/
        BSStringT_constr_str(&v235, v151); /*0x5cd150*/
        v242 = 0x10; /*0x5cd155*/
      }
      else
      {
        v152 = (char *)stru_B38F78.value; /*0x5cd162*/
        a2 = (_DWORD *)0xFA8; /*0x5cd168*/
        v241[0] = &v235; /*0x5cd172*/
        BSStringT_constr_str(&v235, v152); /*0x5cd177*/
        v153 = (char *)g_gameSetting_sMain.value; /*0x5cd17c*/
        v240 = &v234; /*0x5cd186*/
        v242 = 0x11; /*0x5cd18b*/
        BSStringT_constr_str(&v234, v153); /*0x5cd193*/
        v242 = 0xFFFFFFFF; /*0x5cd19a*/
        v154 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd19e*/
        *(double *)v241 = *(float *)&v239; /*0x5cd1a9*/
        v155 = Tile_GetFloat(v154, (int)a2); /*0x5cd1ad*/
        if ( *(double *)v241 != v155 ) /*0x5cd1bd*/
        {
          v157 = (char *)stru_B39000.value; /*0x5cd1e2*/
          a2 = (_DWORD *)0xFA8; /*0x5cd1e8*/
          v241[0] = &v235; /*0x5cd1f2*/
          BSStringT_constr_str(&v235, v157); /*0x5cd1f7*/
          v158 = (char *)stru_B38FE0.value; /*0x5cd1fc*/
          v240 = &v234; /*0x5cd206*/
          v242 = 0x13; /*0x5cd20b*/
          BSStringT_constr_str(&v234, v158); /*0x5cd213*/
          v242 = 0xFFFFFFFF; /*0x5cd21a*/
          v159 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd21e*/
          *(double *)v241 = *(float *)&v239; /*0x5cd229*/
          v160 = Tile_GetFloat(v159, (int)a2); /*0x5cd22d*/
          if ( *(double *)v241 == v160 ) /*0x5cd23d*/
          {
            v161 = (char *)stru_B39000.value; /*0x5cd23f*/
            a2 = (_DWORD *)1; /*0x5cd245*/
            v241[0] = &v235; /*0x5cd24c*/
            BSStringT_constr_str(&v235, v161); /*0x5cd251*/
            v136 = (char *)stru_B38FE0.value; /*0x5cd256*/
            v242 = 0x14; /*0x5cd25b*/
          }
          else
          {
            v162 = (char *)stru_B39008.value; /*0x5cd268*/
            a2 = (_DWORD *)0xFA8; /*0x5cd26e*/
            v241[0] = &v235; /*0x5cd278*/
            BSStringT_constr_str(&v235, v162); /*0x5cd27d*/
            v163 = (char *)stru_B38FE0.value; /*0x5cd282*/
            v240 = &v234; /*0x5cd28c*/
            v242 = 0x15; /*0x5cd291*/
            BSStringT_constr_str(&v234, v163); /*0x5cd299*/
            v242 = 0xFFFFFFFF; /*0x5cd2a0*/
            v164 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd2a4*/
            *(double *)v241 = *(float *)&v239; /*0x5cd2af*/
            v165 = Tile_GetFloat(v164, (int)a2); /*0x5cd2b3*/
            if ( *(double *)v241 == v165 ) /*0x5cd2c3*/
            {
              v166 = (char *)stru_B39008.value; /*0x5cd2c5*/
              a2 = (_DWORD *)1; /*0x5cd2cb*/
              v241[0] = &v235; /*0x5cd2d2*/
              BSStringT_constr_str(&v235, v166); /*0x5cd2d7*/
              v136 = (char *)stru_B38FE0.value; /*0x5cd2dc*/
              v242 = 0x16; /*0x5cd2e1*/
            }
            else
            {
              v167 = (char *)stru_B39010.value; /*0x5cd2ee*/
              a2 = (_DWORD *)0xFA8; /*0x5cd2f4*/
              v241[0] = &v235; /*0x5cd2fe*/
              BSStringT_constr_str(&v235, v167); /*0x5cd303*/
              v168 = (char *)stru_B38FE0.value; /*0x5cd308*/
              v240 = &v234; /*0x5cd312*/
              v242 = 0x17; /*0x5cd317*/
              BSStringT_constr_str(&v234, v168); /*0x5cd31f*/
              v242 = 0xFFFFFFFF; /*0x5cd326*/
              v169 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd32a*/
              *(double *)v241 = *(float *)&v239; /*0x5cd335*/
              v170 = Tile_GetFloat(v169, (int)a2); /*0x5cd339*/
              if ( *(double *)v241 == v170 ) /*0x5cd349*/
              {
                v171 = (char *)stru_B39010.value; /*0x5cd34b*/
                a2 = (_DWORD *)1; /*0x5cd351*/
                v241[0] = &v235; /*0x5cd358*/
                BSStringT_constr_str(&v235, v171); /*0x5cd35d*/
                v136 = (char *)stru_B38FE0.value; /*0x5cd362*/
                v242 = 0x18; /*0x5cd367*/
              }
              else
              {
                v172 = (char *)stru_B39018.value; /*0x5cd374*/
                a2 = (_DWORD *)0xFA8; /*0x5cd37a*/
                v241[0] = &v235; /*0x5cd384*/
                BSStringT_constr_str(&v235, v172); /*0x5cd389*/
                v173 = (char *)stru_B38FE0.value; /*0x5cd38e*/
                v240 = &v234; /*0x5cd398*/
                v242 = 0x19; /*0x5cd39d*/
                BSStringT_constr_str(&v234, v173); /*0x5cd3a5*/
                v242 = 0xFFFFFFFF; /*0x5cd3ac*/
                v174 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd3b0*/
                *(double *)v241 = *(float *)&v239; /*0x5cd3bb*/
                v175 = Tile_GetFloat(v174, (int)a2); /*0x5cd3bf*/
                if ( *(double *)v241 == v175 ) /*0x5cd3cf*/
                {
                  v176 = (char *)stru_B39018.value; /*0x5cd3d1*/
                  a2 = (_DWORD *)1; /*0x5cd3d7*/
                  v241[0] = &v235; /*0x5cd3de*/
                  BSStringT_constr_str(&v235, v176); /*0x5cd3e3*/
                  v136 = (char *)stru_B38FE0.value; /*0x5cd3e8*/
                  v242 = 0x1A; /*0x5cd3ed*/
                }
                else
                {
                  v177 = (char *)stru_B38F90.value; /*0x5cd3fa*/
                  a2 = (_DWORD *)0xFA8; /*0x5cd400*/
                  v241[0] = &v235; /*0x5cd40a*/
                  BSStringT_constr_str(&v235, v177); /*0x5cd40f*/
                  v178 = (char *)stru_B38FE0.value; /*0x5cd414*/
                  v240 = &v234; /*0x5cd41e*/
                  v242 = 0x1B; /*0x5cd423*/
                  BSStringT_constr_str(&v234, v178); /*0x5cd42b*/
                  v242 = 0xFFFFFFFF; /*0x5cd432*/
                  v179 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd436*/
                  *(double *)v241 = *(float *)&v239; /*0x5cd441*/
                  v180 = Tile_GetFloat(v179, (int)a2); /*0x5cd445*/
                  if ( *(double *)v241 == v180 ) /*0x5cd455*/
                  {
                    v181 = (char *)stru_B38F90.value; /*0x5cd457*/
                    a2 = (_DWORD *)1; /*0x5cd45d*/
                    v241[0] = &v235; /*0x5cd464*/
                    BSStringT_constr_str(&v235, v181); /*0x5cd469*/
                    v136 = (char *)stru_B38FE0.value; /*0x5cd46e*/
                    v242 = 0x1C; /*0x5cd473*/
                  }
                  else
                  {
                    v182 = (char *)stru_B39020.value; /*0x5cd480*/
                    a2 = (_DWORD *)0xFA8; /*0x5cd486*/
                    v241[0] = &v235; /*0x5cd490*/
                    BSStringT_constr_str(&v235, v182); /*0x5cd495*/
                    v183 = (char *)stru_B38FE0.value; /*0x5cd49a*/
                    v240 = &v234; /*0x5cd4a4*/
                    v242 = 0x1D; /*0x5cd4a9*/
                    BSStringT_constr_str(&v234, v183); /*0x5cd4b1*/
                    v242 = 0xFFFFFFFF; /*0x5cd4b8*/
                    v184 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd4bc*/
                    *(double *)v241 = *(float *)&v239; /*0x5cd4c7*/
                    v185 = Tile_GetFloat(v184, (int)a2); /*0x5cd4cb*/
                    if ( *(double *)v241 == v185 ) /*0x5cd4db*/
                    {
                      v186 = (char *)stru_B39020.value; /*0x5cd4dd*/
                      a2 = (_DWORD *)1; /*0x5cd4e3*/
                      v241[0] = &v235; /*0x5cd4ea*/
                      BSStringT_constr_str(&v235, v186); /*0x5cd4ef*/
                      v136 = (char *)stru_B38FE0.value; /*0x5cd4f4*/
                      v242 = 0x1E; /*0x5cd4f9*/
                    }
                    else
                    {
                      v187 = (char *)stru_B39028.value; /*0x5cd506*/
                      a2 = (_DWORD *)0xFA8; /*0x5cd50c*/
                      v241[0] = &v235; /*0x5cd516*/
                      BSStringT_constr_str(&v235, v187); /*0x5cd51b*/
                      v188 = (char *)stru_B38FE0.value; /*0x5cd520*/
                      v240 = &v234; /*0x5cd52a*/
                      v242 = 0x1F; /*0x5cd52f*/
                      BSStringT_constr_str(&v234, v188); /*0x5cd537*/
                      v242 = 0xFFFFFFFF; /*0x5cd53e*/
                      v189 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd542*/
                      *(double *)v241 = *(float *)&v239; /*0x5cd54d*/
                      v190 = Tile_GetFloat(v189, (int)a2); /*0x5cd551*/
                      if ( *(double *)v241 == v190 ) /*0x5cd561*/
                      {
                        v191 = (char *)stru_B39028.value; /*0x5cd563*/
                        a2 = (_DWORD *)1; /*0x5cd569*/
                        v241[0] = &v235; /*0x5cd570*/
                        BSStringT_constr_str(&v235, v191); /*0x5cd575*/
                        v136 = (char *)stru_B38FE0.value; /*0x5cd57a*/
                        v242 = 0x20; /*0x5cd57f*/
                      }
                      else
                      {
                        v192 = (char *)stru_B39030.value; /*0x5cd58c*/
                        a2 = (_DWORD *)0xFA8; /*0x5cd592*/
                        v241[0] = &v235; /*0x5cd59c*/
                        BSStringT_constr_str(&v235, v192); /*0x5cd5a1*/
                        v193 = (char *)stru_B38FE0.value; /*0x5cd5a6*/
                        v240 = &v234; /*0x5cd5b0*/
                        v242 = 0x21; /*0x5cd5b5*/
                        BSStringT_constr_str(&v234, v193); /*0x5cd5bd*/
                        v242 = 0xFFFFFFFF; /*0x5cd5c4*/
                        v194 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd5c8*/
                        *(double *)v241 = *(float *)&v239; /*0x5cd5d3*/
                        v195 = Tile_GetFloat(v194, (int)a2); /*0x5cd5d7*/
                        if ( *(double *)v241 == v195 ) /*0x5cd5e7*/
                        {
                          v196 = (char *)stru_B39030.value; /*0x5cd5e9*/
                          a2 = (_DWORD *)1; /*0x5cd5ef*/
                          v241[0] = &v235; /*0x5cd5f6*/
                          BSStringT_constr_str(&v235, v196); /*0x5cd5fb*/
                          v136 = (char *)stru_B38FE0.value; /*0x5cd600*/
                          v242 = 0x22; /*0x5cd605*/
                        }
                        else
                        {
                          v197 = (char *)stru_B39038.value; /*0x5cd612*/
                          a2 = (_DWORD *)0xFA8; /*0x5cd618*/
                          v241[0] = &v235; /*0x5cd622*/
                          BSStringT_constr_str(&v235, v197); /*0x5cd627*/
                          v198 = (char *)stru_B38FE0.value; /*0x5cd62c*/
                          v240 = &v234; /*0x5cd636*/
                          v242 = 0x23; /*0x5cd63b*/
                          BSStringT_constr_str(&v234, v198); /*0x5cd643*/
                          v242 = 0xFFFFFFFF; /*0x5cd64a*/
                          v199 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd64e*/
                          *(double *)v241 = *(float *)&v239; /*0x5cd659*/
                          v200 = Tile_GetFloat(v199, (int)a2); /*0x5cd65d*/
                          if ( *(double *)v241 == v200 ) /*0x5cd66d*/
                          {
                            v201 = (char *)stru_B39038.value; /*0x5cd66f*/
                            a2 = (_DWORD *)1; /*0x5cd675*/
                            v241[0] = &v235; /*0x5cd67c*/
                            BSStringT_constr_str(&v235, v201); /*0x5cd681*/
                            v136 = (char *)stru_B38FE0.value; /*0x5cd686*/
                            v242 = 0x24; /*0x5cd68b*/
                          }
                          else
                          {
                            v202 = (char *)stru_B39040.value; /*0x5cd698*/
                            a2 = (_DWORD *)0xFA8; /*0x5cd69e*/
                            v241[0] = &v235; /*0x5cd6a8*/
                            BSStringT_constr_str(&v235, v202); /*0x5cd6ad*/
                            v203 = (char *)stru_B38FE8.value; /*0x5cd6b2*/
                            v240 = &v234; /*0x5cd6bc*/
                            v242 = 0x25; /*0x5cd6c1*/
                            BSStringT_constr_str(&v234, v203); /*0x5cd6c9*/
                            v242 = 0xFFFFFFFF; /*0x5cd6d0*/
                            v204 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd6d4*/
                            *(double *)v241 = *(float *)&v239; /*0x5cd6df*/
                            v205 = Tile_GetFloat(v204, (int)a2); /*0x5cd6e3*/
                            if ( *(double *)v241 == v205 ) /*0x5cd6f3*/
                            {
                              v206 = (char *)stru_B39040.value; /*0x5cd6f5*/
                              a2 = (_DWORD *)1; /*0x5cd6fb*/
                              v241[0] = &v235; /*0x5cd702*/
                              BSStringT_constr_str(&v235, v206); /*0x5cd707*/
                              v136 = (char *)stru_B38FE8.value; /*0x5cd70c*/
                              v242 = 0x26; /*0x5cd711*/
                            }
                            else
                            {
                              v207 = (char *)stru_B39050.value; /*0x5cd71e*/
                              a2 = (_DWORD *)0xFA8; /*0x5cd724*/
                              v241[0] = &v235; /*0x5cd72e*/
                              BSStringT_constr_str(&v235, v207); /*0x5cd733*/
                              v208 = (char *)stru_B38FE8.value; /*0x5cd738*/
                              v240 = &v234; /*0x5cd742*/
                              v242 = 0x27; /*0x5cd747*/
                              BSStringT_constr_str(&v234, v208); /*0x5cd74f*/
                              v242 = 0xFFFFFFFF; /*0x5cd756*/
                              v209 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd75a*/
                              *(double *)v241 = *(float *)&v239; /*0x5cd765*/
                              v210 = Tile_GetFloat(v209, (int)a2); /*0x5cd769*/
                              if ( *(double *)v241 == v210 ) /*0x5cd779*/
                              {
                                v211 = (char *)stru_B39050.value; /*0x5cd77b*/
                                a2 = (_DWORD *)1; /*0x5cd781*/
                                v241[0] = &v235; /*0x5cd788*/
                                BSStringT_constr_str(&v235, v211); /*0x5cd78d*/
                                v136 = (char *)stru_B38FE8.value; /*0x5cd792*/
                                v242 = 0x28; /*0x5cd797*/
                              }
                              else
                              {
                                v212 = (char *)stru_B39320.value; /*0x5cd7a4*/
                                a2 = (_DWORD *)0xFA8; /*0x5cd7aa*/
                                v241[0] = &v235; /*0x5cd7b4*/
                                BSStringT_constr_str(&v235, v212); /*0x5cd7b9*/
                                v213 = (char *)stru_B38FE8.value; /*0x5cd7be*/
                                v240 = &v234; /*0x5cd7c8*/
                                v242 = 0x29; /*0x5cd7cd*/
                                BSStringT_constr_str(&v234, v213); /*0x5cd7d5*/
                                v242 = 0xFFFFFFFF; /*0x5cd7dc*/
                                v214 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd7e0*/
                                *(double *)v241 = *(float *)&v239; /*0x5cd7eb*/
                                v215 = Tile_GetFloat(v214, (int)a2); /*0x5cd7ef*/
                                if ( *(double *)v241 == v215 ) /*0x5cd7ff*/
                                {
                                  v216 = (char *)stru_B39320.value; /*0x5cd801*/
                                  a2 = (_DWORD *)1; /*0x5cd807*/
                                  v241[0] = &v235; /*0x5cd80e*/
                                  BSStringT_constr_str(&v235, v216); /*0x5cd813*/
                                  v136 = (char *)stru_B38FE8.value; /*0x5cd818*/
                                  v242 = 0x2A; /*0x5cd81d*/
                                }
                                else
                                {
                                  v217 = (char *)stru_B39058.value; /*0x5cd82a*/
                                  a2 = (_DWORD *)0xFA8; /*0x5cd830*/
                                  v241[0] = &v235; /*0x5cd83a*/
                                  BSStringT_constr_str(&v235, v217); /*0x5cd83f*/
                                  v218 = (char *)stru_B38FE8.value; /*0x5cd844*/
                                  v240 = &v234; /*0x5cd84e*/
                                  v242 = 0x2B; /*0x5cd853*/
                                  BSStringT_constr_str(&v234, v218); /*0x5cd85b*/
                                  v242 = 0xFFFFFFFF; /*0x5cd862*/
                                  v219 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd866*/
                                  *(double *)v241 = *(float *)&v239; /*0x5cd871*/
                                  v220 = Tile_GetFloat(v219, (int)a2); /*0x5cd875*/
                                  if ( *(double *)v241 == v220 ) /*0x5cd885*/
                                  {
                                    v221 = (char *)stru_B39058.value; /*0x5cd887*/
                                    a2 = (_DWORD *)1; /*0x5cd88d*/
                                    v241[0] = &v235; /*0x5cd894*/
                                    BSStringT_constr_str(&v235, v221); /*0x5cd899*/
                                    v136 = (char *)stru_B38FE8.value; /*0x5cd89e*/
                                    v242 = 0x2C; /*0x5cd8a3*/
                                  }
                                  else
                                  {
                                    v222 = (char *)stru_B39060.value; /*0x5cd8b0*/
                                    a2 = (_DWORD *)0xFA8; /*0x5cd8b6*/
                                    v241[0] = &v235; /*0x5cd8c0*/
                                    BSStringT_constr_str(&v235, v222); /*0x5cd8c5*/
                                    v223 = (char *)stru_B38FE8.value; /*0x5cd8ca*/
                                    v240 = &v234; /*0x5cd8d4*/
                                    v242 = 0x2D; /*0x5cd8d9*/
                                    BSStringT_constr_str(&v234, v223); /*0x5cd8e1*/
                                    v242 = 0xFFFFFFFF; /*0x5cd8e8*/
                                    v224 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd8ec*/
                                    *(double *)v241 = *(float *)&v239; /*0x5cd8f7*/
                                    v225 = Tile_GetFloat(v224, (int)a2); /*0x5cd8fb*/
                                    if ( *(double *)v241 == v225 ) /*0x5cd90b*/
                                    {
                                      v226 = (char *)stru_B39060.value; /*0x5cd90d*/
                                      a2 = (_DWORD *)1; /*0x5cd913*/
                                      v241[0] = &v235; /*0x5cd91a*/
                                      BSStringT_constr_str(&v235, v226); /*0x5cd91f*/
                                      v136 = (char *)stru_B38FE8.value; /*0x5cd924*/
                                      v242 = 0x2E; /*0x5cd929*/
                                    }
                                    else
                                    {
                                      v227 = (char *)stru_B39328.value; /*0x5cd936*/
                                      a2 = (_DWORD *)0xFA8; /*0x5cd93c*/
                                      v241[0] = &v235; /*0x5cd946*/
                                      BSStringT_constr_str(&v235, v227); /*0x5cd94b*/
                                      v228 = (char *)stru_B38FE8.value; /*0x5cd950*/
                                      v240 = &v234; /*0x5cd95a*/
                                      v242 = 0x2F; /*0x5cd95f*/
                                      BSStringT_constr_str(&v234, v228); /*0x5cd967*/
                                      v242 = 0xFFFFFFFF; /*0x5cd96e*/
                                      v229 = RaceSexMenu_FindControlTile((void *)a1, v234, v235); /*0x5cd972*/
                                      *(double *)v241 = *(float *)&v239; /*0x5cd97d*/
                                      v230 = Tile_GetFloat(v229, (int)a2); /*0x5cd981*/
                                      if ( *(double *)v241 != v230 ) /*0x5cd991*/
                                        return; /*0x5cd991*/
                                      v231 = (char *)stru_B39328.value; /*0x5cd993*/
                                      a2 = (_DWORD *)1; /*0x5cd999*/
                                      v241[0] = &v235; /*0x5cd9a0*/
                                      BSStringT_constr_str(&v235, v231); /*0x5cd9a5*/
                                      v136 = (char *)stru_B38FE8.value; /*0x5cd9aa*/
                                      v242 = 0x30; /*0x5cd9af*/
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_75; /*0x5cd263*/
        }
        v156 = (char *)stru_B38F78.value; /*0x5cd1bf*/
        *(float *)&a2 = 0.0; /*0x5cd1c5*/
        v241[0] = &v235; /*0x5cd1cb*/
        BSStringT_constr_str(&v235, v156); /*0x5cd1d0*/
        v242 = 0x12; /*0x5cd1d5*/
      }
    }
    v136 = (char *)g_gameSetting_sMain.value; /*0x5ccfb2*/
LABEL_75:
    v240 = &v234; /*0x5ccfb7*/
    BSStringT_constr_str(&v234, v136); /*0x5ccfc1*/
    v242 = 0xFFFFFFFF; /*0x5ccfc8*/
    sub_5C9650( /*0x5ccfcc*/
      (Tile **)a1,
      (unsigned int)v234.m_data,
      *(int *)&v234.m_dataLen,
      v235.m_data,
      *(int *)&v235.m_dataLen,
      (char)a2);
    goto LABEL_115; /*0x5ccfd1*/
  }
  if ( a3 != 0x5A ) /*0x5cc27a*/
    goto LABEL_28; /*0x5cc27a*/
  v6 = g_gameSetting_sMain.value; /*0x5cc280*/
  a2 = (_DWORD *)0xFA8; /*0x5cc285*/
  *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc291*/
  v235.m_data = 0; /*0x5cc297*/
  v235.m_dataLen = 0; /*0x5cc299*/
  v235.m_bufLen = 0; /*0x5cc29d*/
  BSStringT_Set(&v235, v6, 0); /*0x5cc2a1*/
  CategoryTileByName = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc2b5*/
                                   (_DWORD *)a1,
                                   (unsigned __int8 *)v235.m_data,
                                   *(int *)&v235.m_dataLen);
  *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc2bc*/
  v8 = Tile_GetFloat(CategoryTileByName, (int)a2); /*0x5cc2c2*/
  if ( v8 == *(double *)v241 ) /*0x5cc2d0*/
  {
    v86 = *(_DWORD **)(a1 + 0x30); /*0x5cca77*/
    v237 = 1; /*0x5cca7f*/
    v87 = 0; /*0x5cca84*/
    if ( strlen(sub_588C10(v86, 0xFDE)) ) /*0x5cca8b*/
    {
      do /*0x5ccadd*/
      {
        if ( sub_588C10(*(_DWORD **)(a1 + 0x30), 0xFDE)[v87] != 0x20 ) /*0x5ccab1*/
          v237 = 0; /*0x5ccab3*/
        ++v87; /*0x5ccabf*/
      }
      while ( v87 < strlen(sub_588C10(*(_DWORD **)(a1 + 0x30), 0xFDE)) ); /*0x5ccadd*/
    }
    v88 = (const unsigned __int8 *)stru_B39440.value; /*0x5ccae2*/
    v89 = sub_588C10(*(_DWORD **)(a1 + 0x30), 0xFDE); /*0x5ccaed*/
    if ( !_mbscmp((const unsigned __int8 *)v89, v88) || v237 ) /*0x5ccb08*/
    {
      ShowUIMessageBox( /*0x5ccbc8*/
        (char *)stru_B39438.value,
        st5_0,
        1.0,
        v8,
        (char *)stru_B39438.value,
        0,
        1,
        (char *)MEMORY[0xB38CF0].value,
        0);
      return; /*0x5ccbe2*/
    }
    v241[0] = 0; /*0x5ccb0e*/
    v241[1] = 0; /*0x5ccb12*/
    v90 = (Actor *)reference; /*0x5ccb1c*/
    v242 = 0; /*0x5ccb22*/
    m_data = Actor::GetRaceIfNPC(v90)->name.name.m_data; /*0x5ccb33*/
    if ( !m_data ) /*0x5ccb35*/
      m_data = EmptyString; /*0x5ccb37*/
    v92 = *m_data; /*0x5ccb3c*/
    if ( *m_data == 0x61 /*0x5ccb69*/
      || v92 == 0x65
      || v92 == 0x69
      || v92 == 0x6F
      || v92 == 0x75
      || v92 == 0x41
      || v92 == 0x45
      || v92 == 0x49
      || v92 == 0x4F
      || (v93 = v92 == 0x55, v94 = stru_B38660.value, v93) )
    {
      v94 = stru_B38668.value; /*0x5ccb6b*/
    }
    BSStringT_Static_Format((BSStringT *)v241, "%s %s?", v94, m_data); /*0x5ccb7c*/
    v95 = (char *)MEMORY[0xB38CF8].value; /*0x5ccb81*/
    v96 = (char *)MEMORY[0xB38D00].value; /*0x5ccb87*/
    v97 = v241[0]; /*0x5ccb8d*/
    v234.m_data = 0; /*0x5ccb91*/
    ShowUIMessageBox(v95, st5_0, 1.0, v8, (char *)v241[0], (int)sub_5C2BA0, 1, v96, (char)v95); /*0x5ccb9c*/
    v242 = 0xFFFFFFFF; /*0x5ccba2*/
    FormHeapFree((unsigned int)v97); /*0x5ccbaa*/
  }
  else
  {
    v9 = stru_B38FE0.value; /*0x5cc2d6*/
    a2 = (_DWORD *)0xFA8; /*0x5cc2db*/
    *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc2e5*/
    v235.m_data = 0; /*0x5cc2eb*/
    v235.m_dataLen = 0; /*0x5cc2ed*/
    v235.m_bufLen = 0; /*0x5cc2f1*/
    BSStringT_Set(&v235, v9, 0); /*0x5cc2f5*/
    v10 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc309*/
                      (_DWORD *)a1,
                      (unsigned __int8 *)v235.m_data,
                      *(int *)&v235.m_dataLen);
    *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc310*/
    v11 = Tile_GetFloat(v10, (int)a2); /*0x5cc316*/
    if ( v11 == *(double *)v241 ) /*0x5cc324*/
      goto LABEL_34; /*0x5cc324*/
    v12 = stru_B38FE8.value; /*0x5cc32a*/
    a2 = (_DWORD *)0xFA8; /*0x5cc32f*/
    *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc339*/
    v235.m_data = 0; /*0x5cc33f*/
    v235.m_dataLen = 0; /*0x5cc341*/
    v235.m_bufLen = 0; /*0x5cc345*/
    BSStringT_Set(&v235, v12, 0); /*0x5cc349*/
    v13 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc35d*/
                      (_DWORD *)a1,
                      (unsigned __int8 *)v235.m_data,
                      *(int *)&v235.m_dataLen);
    *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc364*/
    v14 = Tile_GetFloat(v13, (int)a2); /*0x5cc36a*/
    if ( v14 == *(double *)v241 ) /*0x5cc378*/
    {
LABEL_34:
      v82 = stru_B38F80.value; /*0x5cca09*/
      a2 = (_DWORD *)0xFA8; /*0x5cca0e*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cca18*/
      v235.m_data = 0; /*0x5cca1e*/
      v235.m_dataLen = 0; /*0x5cca20*/
      v235.m_bufLen = 0; /*0x5cca24*/
      BSStringT_Set(&v235, v82, 0); /*0x5cca28*/
      v83 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cca2f*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      v84 = *(Tile **)(a1 + 4); /*0x5cca34*/
      *(float *)&a2 = Tile_GetFloat(v83, (int)a2); /*0x5cca3f*/
      Tile_SetFloat(v84, 0xFAEu, *(float *)&a2); /*0x5cca49*/
      v85 = stru_B38F80.value; /*0x5cca4e*/
      a2 = (_DWORD *)0xFD0; /*0x5cca53*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cca5d*/
      v235.m_data = 0; /*0x5cca63*/
      v235.m_dataLen = 0; /*0x5cca65*/
      v235.m_bufLen = 0; /*0x5cca69*/
      BSStringT_Set(&v235, v85, 0); /*0x5cca6d*/
    }
    else
    {
      v15 = (char *)stru_B39000.value; /*0x5cc37e*/
      a2 = (_DWORD *)0xFA8; /*0x5cc383*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc38d*/
      BSStringT_constr_str(&v235, v15); /*0x5cc392*/
      v16 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc3a6*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc3ad*/
      v17 = Tile_GetFloat(v16, (int)a2); /*0x5cc3b3*/
      if ( v17 == *(double *)v241 ) /*0x5cc3c1*/
        goto LABEL_33; /*0x5cc3c1*/
      v18 = (char *)stru_B39008.value; /*0x5cc3c7*/
      a2 = (_DWORD *)0xFA8; /*0x5cc3cd*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc3d7*/
      BSStringT_constr_str(&v235, v18); /*0x5cc3dc*/
      v19 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc3f0*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc3f7*/
      v20 = Tile_GetFloat(v19, (int)a2); /*0x5cc3fd*/
      if ( v20 == *(double *)v241 ) /*0x5cc40b*/
        goto LABEL_33; /*0x5cc40b*/
      v21 = (char *)stru_B39010.value; /*0x5cc411*/
      a2 = (_DWORD *)0xFA8; /*0x5cc416*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc420*/
      BSStringT_constr_str(&v235, v21); /*0x5cc425*/
      v22 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc439*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc440*/
      v23 = Tile_GetFloat(v22, (int)a2); /*0x5cc446*/
      if ( v23 == *(double *)v241 ) /*0x5cc454*/
        goto LABEL_33; /*0x5cc454*/
      v24 = (char *)stru_B39018.value; /*0x5cc45a*/
      a2 = (_DWORD *)0xFA8; /*0x5cc460*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc46a*/
      BSStringT_constr_str(&v235, v24); /*0x5cc46f*/
      v25 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc483*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc48a*/
      v26 = Tile_GetFloat(v25, (int)a2); /*0x5cc490*/
      if ( v26 == *(double *)v241 ) /*0x5cc49e*/
        goto LABEL_33; /*0x5cc49e*/
      v27 = (char *)stru_B38F90.value; /*0x5cc4a4*/
      a2 = (_DWORD *)0xFA8; /*0x5cc4a9*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc4b3*/
      BSStringT_constr_str(&v235, v27); /*0x5cc4b8*/
      v28 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc4cc*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc4d3*/
      v29 = Tile_GetFloat(v28, (int)a2); /*0x5cc4d9*/
      if ( v29 == *(double *)v241 ) /*0x5cc4e7*/
        goto LABEL_33; /*0x5cc4e7*/
      v30 = (char *)stru_B39020.value; /*0x5cc4ed*/
      a2 = (_DWORD *)0xFA8; /*0x5cc4f3*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc4fd*/
      BSStringT_constr_str(&v235, v30); /*0x5cc502*/
      v31 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc516*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc51d*/
      v32 = Tile_GetFloat(v31, (int)a2); /*0x5cc523*/
      if ( v32 == *(double *)v241 ) /*0x5cc531*/
        goto LABEL_33; /*0x5cc531*/
      v33 = (char *)stru_B39028.value; /*0x5cc537*/
      a2 = (_DWORD *)0xFA8; /*0x5cc53c*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc546*/
      BSStringT_constr_str(&v235, v33); /*0x5cc54b*/
      v34 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc55f*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc566*/
      v35 = Tile_GetFloat(v34, (int)a2); /*0x5cc56c*/
      if ( v35 == *(double *)v241 ) /*0x5cc57a*/
        goto LABEL_33; /*0x5cc57a*/
      v36 = (char *)stru_B39008.value; /*0x5cc580*/
      a2 = (_DWORD *)0xFA8; /*0x5cc586*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc590*/
      BSStringT_constr_str(&v235, v36); /*0x5cc595*/
      v37 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc5a9*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc5b0*/
      v38 = Tile_GetFloat(v37, (int)a2); /*0x5cc5b6*/
      if ( v38 == *(double *)v241 ) /*0x5cc5c4*/
        goto LABEL_33; /*0x5cc5c4*/
      v39 = (char *)stru_B39030.value; /*0x5cc5ca*/
      a2 = (_DWORD *)0xFA8; /*0x5cc5cf*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc5d9*/
      BSStringT_constr_str(&v235, v39); /*0x5cc5de*/
      v40 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc5f2*/
                        (_DWORD *)a1,
                        (unsigned __int8 *)v235.m_data,
                        *(int *)&v235.m_dataLen);
      *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc5f9*/
      v41 = Tile_GetFloat(v40, (int)a2); /*0x5cc5ff*/
      if ( v41 == *(double *)v241 /*0x5cc657*/
        || (v42 = (char *)stru_B39038.value,
            a2 = (_DWORD *)0xFA8,
            *(float *)&v239 = COERCE_FLOAT(&v235),
            BSStringT_constr_str(&v235, v42),
            v43 = (_DWORD *)RaceSexMenu_GetCategoryTileByName(
                              (_DWORD *)a1,
                              (unsigned __int8 *)v235.m_data,
                              *(int *)&v235.m_dataLen),
            *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE),
            v44 = Tile_GetFloat(v43, (int)a2),
            v44 == *(double *)v241) )
      {
LABEL_33:
        v79 = (char *)stru_B38FE0.value; /*0x5cc9c4*/
        a2 = (_DWORD *)0xFA8; /*0x5cc9c9*/
        *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc9d3*/
        BSStringT_constr_str(&v235, v79); /*0x5cc9d8*/
        v80 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc9df*/
                          (_DWORD *)a1,
                          (unsigned __int8 *)v235.m_data,
                          *(int *)&v235.m_dataLen);
        v81 = *(Tile **)(a1 + 4); /*0x5cc9e4*/
        *(float *)&a2 = Tile_GetFloat(v80, (int)a2); /*0x5cc9ef*/
        Tile_SetFloat(v81, 0xFAEu, *(float *)&a2); /*0x5cc9f9*/
        v66 = (char *)stru_B38FE0.value; /*0x5cc9fe*/
      }
      else
      {
        v45 = (char *)stru_B39040.value; /*0x5cc65d*/
        a2 = (_DWORD *)0xFA8; /*0x5cc662*/
        *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc66c*/
        BSStringT_constr_str(&v235, v45); /*0x5cc671*/
        v46 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc685*/
                          (_DWORD *)a1,
                          (unsigned __int8 *)v235.m_data,
                          *(int *)&v235.m_dataLen);
        *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc68c*/
        v47 = Tile_GetFloat(v46, (int)a2); /*0x5cc692*/
        if ( v47 == *(double *)v241 ) /*0x5cc6a0*/
          goto LABEL_32; /*0x5cc6a0*/
        v48 = (char *)stru_B39050.value; /*0x5cc6a6*/
        a2 = (_DWORD *)0xFA8; /*0x5cc6ac*/
        *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc6b6*/
        BSStringT_constr_str(&v235, v48); /*0x5cc6bb*/
        v49 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc6cf*/
                          (_DWORD *)a1,
                          (unsigned __int8 *)v235.m_data,
                          *(int *)&v235.m_dataLen);
        *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc6d6*/
        v50 = Tile_GetFloat(v49, (int)a2); /*0x5cc6dc*/
        if ( v50 == *(double *)v241 ) /*0x5cc6ea*/
          goto LABEL_32; /*0x5cc6ea*/
        v51 = (char *)stru_B39320.value; /*0x5cc6f0*/
        a2 = (_DWORD *)0xFA8; /*0x5cc6f5*/
        *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc6ff*/
        BSStringT_constr_str(&v235, v51); /*0x5cc704*/
        v52 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc718*/
                          (_DWORD *)a1,
                          (unsigned __int8 *)v235.m_data,
                          *(int *)&v235.m_dataLen);
        *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc71f*/
        v53 = Tile_GetFloat(v52, (int)a2); /*0x5cc725*/
        if ( v53 == *(double *)v241 ) /*0x5cc733*/
          goto LABEL_32; /*0x5cc733*/
        v54 = (char *)stru_B39058.value; /*0x5cc739*/
        a2 = (_DWORD *)0xFA8; /*0x5cc73f*/
        *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc749*/
        BSStringT_constr_str(&v235, v54); /*0x5cc74e*/
        v55 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc762*/
                          (_DWORD *)a1,
                          (unsigned __int8 *)v235.m_data,
                          *(int *)&v235.m_dataLen);
        *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc769*/
        v56 = Tile_GetFloat(v55, (int)a2); /*0x5cc76f*/
        if ( v56 == *(double *)v241 ) /*0x5cc77d*/
          goto LABEL_32; /*0x5cc77d*/
        v57 = (char *)stru_B39060.value; /*0x5cc783*/
        a2 = (_DWORD *)0xFA8; /*0x5cc788*/
        *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc792*/
        BSStringT_constr_str(&v235, v57); /*0x5cc797*/
        v58 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc7ab*/
                          (_DWORD *)a1,
                          (unsigned __int8 *)v235.m_data,
                          *(int *)&v235.m_dataLen);
        *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5cc7b2*/
        v59 = Tile_GetFloat(v58, (int)a2); /*0x5cc7b8*/
        if ( v59 == *(double *)v241 /*0x5cc810*/
          || (v60 = (char *)stru_B39328.value,
              a2 = (_DWORD *)0xFA8,
              *(float *)&v239 = COERCE_FLOAT(&v235),
              BSStringT_constr_str(&v235, v60),
              v61 = (_DWORD *)RaceSexMenu_GetCategoryTileByName(
                                (_DWORD *)a1,
                                (unsigned __int8 *)v235.m_data,
                                *(int *)&v235.m_dataLen),
              *(double *)v241 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE),
              v62 = Tile_GetFloat(v61, (int)a2),
              v62 == *(double *)v241) )
        {
LABEL_32:
          v76 = (char *)stru_B38FE8.value; /*0x5cc97f*/
          a2 = (_DWORD *)0xFA8; /*0x5cc984*/
          *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc98e*/
          BSStringT_constr_str(&v235, v76); /*0x5cc993*/
          v77 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc99a*/
                            (_DWORD *)a1,
                            (unsigned __int8 *)v235.m_data,
                            *(int *)&v235.m_dataLen);
          v78 = *(Tile **)(a1 + 4); /*0x5cc99f*/
          *(float *)&a2 = Tile_GetFloat(v77, (int)a2); /*0x5cc9aa*/
          Tile_SetFloat(v78, 0xFAEu, *(float *)&a2); /*0x5cc9b4*/
          v66 = (char *)stru_B38FE8.value; /*0x5cc9b9*/
        }
        else
        {
          Tile_SetFloat(*(Tile **)(a1 + 0x3C), 0xFB3u, 1.0); /*0x5cc824*/
          v63 = (char *)g_gameSetting_sMain.value; /*0x5cc829*/
          a2 = (_DWORD *)0xFA8; /*0x5cc82e*/
          *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc838*/
          BSStringT_constr_str(&v235, v63); /*0x5cc83d*/
          v64 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc844*/
                            (_DWORD *)a1,
                            (unsigned __int8 *)v235.m_data,
                            *(int *)&v235.m_dataLen);
          v65 = *(Tile **)(a1 + 4); /*0x5cc849*/
          *(float *)&a2 = Tile_GetFloat(v64, (int)a2); /*0x5cc854*/
          Tile_SetFloat(v65, 0xFAEu, *(float *)&a2); /*0x5cc85e*/
          v66 = (char *)g_gameSetting_sMain.value; /*0x5cc863*/
        }
      }
      a2 = (_DWORD *)0xFD0; /*0x5cc869*/
      *(float *)&v239 = COERCE_FLOAT(&v235); /*0x5cc873*/
      BSStringT_constr_str(&v235, v66); /*0x5cc878*/
    }
    v67 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cc87f*/
                      (_DWORD *)a1,
                      (unsigned __int8 *)v235.m_data,
                      *(int *)&v235.m_dataLen);
    v68 = *(Tile **)(a1 + 4); /*0x5cc884*/
    *(float *)&a2 = Tile_GetFloat(v67, (int)a2); /*0x5cc88f*/
    Tile_SetFloat(v68, 0xFAFu, *(float *)&a2); /*0x5cc899*/
  }
LABEL_115:
  v93 = v238 == 0; /*0x5cd9c5*/
  unk_B3B4C9 = 0; /*0x5cd9ca*/
  if ( v93 ) /*0x5cd9d1*/
LABEL_116:
    unk_B3B4C8 = 0; /*0x5cd9d3*/
  *(float *)&a2 = COERCE_FLOAT((int)reference->vtbl->super.super.super.GetNiNode(reference)); /*0x5cd9da*/
  ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x5cd9ed*/
  ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, (NiAVObject *)a2); /*0x5cd9f7*/
  a2 = (_DWORD *)1; /*0x5cd9fc*/
  *(_DWORD *)&v235.m_dataLen = 1; /*0x5cd9fe*/
  v233 = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x5cda02*/
  ShadowSceneNode_ReconcileAllSourceLightsAndOptionallyTeardown(v233, v235.m_dataLen, (bool)a2);// After removing one object's receiver geometry, reconcile all surviving full-list source lights and retain the lists (arguments true, true). /*0x5cda0c*/
}
