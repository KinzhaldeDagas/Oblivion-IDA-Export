// Broad RaceSexMenu state-to-UI synchronization used after Reset Face. Rebuilds localized controls from current player race/sex/head state; suitable native boundary for restoring a captured FaceGen candidate before UI refresh.
char __thiscall RaceSexMenu_SynchronizeControlsFromPlayer(void *this, char rebuildLists)
{
  _DWORD *v3; // eax
  int v4; // ebp
  int v5; // ecx
  const char *v6; // eax
  const char *v7; // eax
  Tile *ControlTile; // eax
  double v9; // st7
  const char *v10; // eax
  _DWORD *v11; // eax
  _BYTE *v12; // ecx
  CHAR *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  Tile *v16; // eax
  CHAR *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  Tile *v20; // eax
  bool v21; // zf
  _DWORD *v22; // eax
  int v23; // ebp
  const char *v24; // eax
  CHAR *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  Tile *v28; // eax
  const char *v29; // eax
  const char *v30; // eax
  Tile *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  Tile *v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  Tile *v37; // eax
  double Float; // st7
  const char *v39; // eax
  const char *v40; // eax
  Tile *v41; // eax
  _DWORD *v42; // eax
  TESRace *v43; // ebp
  CHAR *m_data; // eax
  const char *v45; // eax
  const char *v46; // eax
  Tile *v47; // eax
  CHAR *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  Tile *v51; // eax
  _DWORD *v52; // ebp
  int (__thiscall *v53)(_DWORD *, _DWORD, int); // edx
  _DWORD *v54; // ebp
  const char *v55; // eax
  const char *v56; // eax
  const char *v57; // eax
  Tile *v58; // eax
  const char *v59; // eax
  const char *v60; // eax
  Tile *v61; // eax
  const char *v62; // eax
  const char *v63; // eax
  Tile *v64; // eax
  const char *v65; // eax
  const char *v66; // eax
  Tile *v67; // eax
  double v68; // st7
  const char *v69; // eax
  const char *v70; // eax
  Tile *v71; // eax
  _DWORD *v72; // eax
  _DWORD *v73; // ebp
  CHAR *v74; // eax
  char *v75; // edx
  char *v76; // eax
  Tile *v77; // eax
  CHAR *v78; // eax
  char *v79; // edx
  char *v80; // eax
  Tile *v81; // eax
  CHAR *v82; // eax
  const char *v83; // eax
  const char *v84; // eax
  Tile *v85; // eax
  CHAR *v86; // eax
  const char *v87; // eax
  const char *v88; // eax
  Tile *v89; // eax
  const char *v90; // eax
  const char *v91; // eax
  Tile *v92; // eax
  const char *v93; // eax
  const char *v94; // eax
  Tile *v95; // eax
  const char *v96; // eax
  const char *v97; // eax
  Tile *v98; // eax
  const char *v99; // eax
  const char *v100; // eax
  Tile *v101; // eax
  double v102; // st7
  const char *v103; // eax
  const char *v104; // eax
  Tile *v105; // eax
  const char *v106; // eax
  const char *v107; // eax
  Tile *v108; // eax
  const char *v109; // eax
  const char *v110; // eax
  Tile *v111; // eax
  const char *v112; // eax
  const char *v113; // eax
  Tile *v114; // eax
  double v115; // st7
  const char *v116; // eax
  double v117; // st7
  const char *v118; // eax
  Tile *v119; // ebp
  const char *v120; // eax
  double v121; // st7
  const char *v122; // eax
  Tile *v123; // ebp
  int v124; // ecx
  const char *v125; // eax
  double v126; // st7
  const char *v127; // eax
  Tile *v128; // ebp
  const char *v129; // eax
  const char *v130; // eax
  Tile *v131; // eax
  double v132; // st7
  int v133; // ecx
  Tile *v134; // ebp
  TESNPC *v135; // ebp
  const char *v136; // eax
  const char *v137; // eax
  const char *v138; // eax
  Tile *v139; // eax
  const char *v140; // eax
  const char *v141; // eax
  Tile *v142; // eax
  const char *v143; // eax
  const char *v144; // eax
  Tile *v145; // eax
  const char *v146; // eax
  const char *v147; // eax
  Tile *v148; // eax
  BOOL v149; // eax
  _DWORD *v150; // ecx
  const char *v151; // eax
  const char *v152; // eax
  Tile *v153; // eax
  TESRace *race; // ebp
  FaceGenHeadParameters *ActiveFaceGenDeltaParameters; // eax
  const char *v156; // eax
  Tile *v157; // eax
  double v158; // st7
  int v159; // ecx
  Tile *v160; // ebp
  double v161; // st7
  double ControlValue; // st7
  const char *v163; // eax
  Tile *v164; // eax
  double v165; // st7
  int v166; // ecx
  Tile *v167; // ebx
  _BYTE value[24]; // [esp-Ch] [ebp-B8h] BYREF
  double v170; // [esp+1Ch] [ebp-90h]
  TESNPC *v171; // [esp+24h] [ebp-88h]
  _DWORD *v172[2]; // [esp+28h] [ebp-84h]
  _DWORD *v173[2]; // [esp+30h] [ebp-7Ch]
  _DWORD *v174[2]; // [esp+38h] [ebp-74h]
  FaceGenHeadParameters a1; // [esp+40h] [ebp-6Ch] BYREF
  int v176; // [esp+A8h] [ebp-4h]

  v171 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c7bdf*/
  v4 = 0; /*0x5c7bf0*/
  v172[0] = &v171->member.form.race->eyes.node.data; /*0x5c7bf7*/
  v3 = v172[0]; /*0x5c7be9*/
  HIDWORD(v170) = 0; /*0x5c7bfb*/
  *((_DWORD *)this + 0x21F) = 0; /*0x5c7bff*/
  if ( v3 && (v3[1] || *v3) ) /*0x5c7c10*/
  {
    v5 = 0; /*0x5c7c18*/
    do /*0x5c7c2c*/
    {
      if ( *v3 ) /*0x5c7c20*/
        ++v5; /*0x5c7c24*/
      v3 = (_DWORD *)v3[1]; /*0x5c7c27*/
    }
    while ( v3 ); /*0x5c7c2c*/
    v6 = stru_B38F90.value; /*0x5c7c2e*/
    v173[0] = &value[0x10]; /*0x5c7c36*/
    memset(&value[0xC], 0, 0xC); /*0x5c7c3f*/
    *(_DWORD *)&value[8] = v6; /*0x5c7c4a*/
    if ( v5 == 1 ) /*0x5c7c4b*/
    {
      BSStringT_Set((BSStringT *)&value[0x10], *(const char **)&value[8], *(unsigned int *)&value[0xC]); /*0x5c7c4d*/
      v7 = g_gameSetting_sMain.value; /*0x5c7c52*/
      HIDWORD(v170) = &value[8]; /*0x5c7c5c*/
      v176 = 0; /*0x5c7c62*/
      *(_DWORD *)&value[8] = 0; /*0x5c7c69*/
      *(_WORD *)&value[0xC] = 0; /*0x5c7c6b*/
      *(_WORD *)&value[0xE] = 0; /*0x5c7c6f*/
      BSStringT_Set((BSStringT *)&value[8], v7, 0); /*0x5c7c73*/
      v176 = 0xFFFFFFFF; /*0x5c7c7a*/
      ControlTile = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c7c81*/
      v9 = 1.0; /*0x5c7c86*/
    }
    else
    {
      BSStringT_Set((BSStringT *)&value[0x10], *(const char **)&value[8], *(unsigned int *)&value[0xC]); /*0x5c7c8a*/
      v10 = g_gameSetting_sMain.value; /*0x5c7c8f*/
      HIDWORD(v170) = &value[8]; /*0x5c7c99*/
      v176 = 1; /*0x5c7c9f*/
      *(_DWORD *)&value[8] = 0; /*0x5c7caa*/
      *(_WORD *)&value[0xC] = 0; /*0x5c7cac*/
      *(_WORD *)&value[0xE] = 0; /*0x5c7cb0*/
      BSStringT_Set((BSStringT *)&value[8], v10, 0); /*0x5c7cb4*/
      v176 = 0xFFFFFFFF; /*0x5c7cbb*/
      ControlTile = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c7cc2*/
      v9 = fConstant_2; /*0x5c7cc7*/
    }
    *(float *)&value[0x14] = v9; /*0x5c7cce*/
    Tile_SetFloat(ControlTile, 0xFBBu, *(float *)&value[0x14]); /*0x5c7cd8*/
    v11 = v172[0]; /*0x5c7cdd*/
    do /*0x5c7e32*/
    {
      v12 = (_BYTE *)*v11; /*0x5c7ce1*/
      HIDWORD(v170) = *v11; /*0x5c7ce5*/
      if ( HIDWORD(v170) ) /*0x5c7ce9*/
      {
        if ( v171->member.eyes || !sub_51ED80(v12) || v4 ) /*0x5c7d0e*/
        {
          if ( v171->member.eyes == (TESEyes *)HIDWORD(v170) ) /*0x5c7d9d*/
          {
            v17 = *(CHAR **)(HIDWORD(v170) + 0x1C); /*0x5c7d9f*/
            if ( !v17 ) /*0x5c7da4*/
              v17 = EmptyString; /*0x5c7da6*/
            *(_DWORD *)&value[0x14] = v17; /*0x5c7dab*/
            v18 = stru_B38F90.value; /*0x5c7dac*/
            *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c7db1*/
            v173[1] = &value[8]; /*0x5c7dbb*/
            *(_DWORD *)&value[8] = 0; /*0x5c7dc1*/
            *(_WORD *)&value[0xC] = 0; /*0x5c7dc3*/
            *(_WORD *)&value[0xE] = 0; /*0x5c7dc7*/
            BSStringT_Set((BSStringT *)&value[8], v18, 0); /*0x5c7dcb*/
            v19 = g_gameSetting_sMain.value; /*0x5c7dd0*/
            v173[0] = value; /*0x5c7dda*/
            v176 = 3; /*0x5c7de0*/
            *(_DWORD *)value = 0; /*0x5c7deb*/
            *(_WORD *)&value[4] = 0; /*0x5c7ded*/
            *(_WORD *)&value[6] = 0; /*0x5c7df1*/
            BSStringT_Set((BSStringT *)value, v19, 0); /*0x5c7df5*/
            v176 = 0xFFFFFFFF; /*0x5c7dfc*/
            v20 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c7e03*/
            Tile_SetString(v20, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c7e0a*/
            *((_DWORD *)this + 0x21F) = v4; /*0x5c7e0f*/
          }
        }
        else
        {
          v13 = *(CHAR **)(HIDWORD(v170) + 0x1C); /*0x5c7d14*/
          if ( !v13 ) /*0x5c7d19*/
            v13 = EmptyString; /*0x5c7d1b*/
          *(_DWORD *)&value[0x14] = v13; /*0x5c7d20*/
          v14 = stru_B38F90.value; /*0x5c7d21*/
          *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c7d26*/
          v173[0] = &value[8]; /*0x5c7d30*/
          *(_DWORD *)&value[8] = 0; /*0x5c7d36*/
          *(_WORD *)&value[0xC] = 0; /*0x5c7d38*/
          *(_WORD *)&value[0xE] = 0; /*0x5c7d3c*/
          BSStringT_Set((BSStringT *)&value[8], v14, 0); /*0x5c7d40*/
          v15 = g_gameSetting_sMain.value; /*0x5c7d45*/
          v173[1] = value; /*0x5c7d4f*/
          v176 = 2; /*0x5c7d55*/
          *(_DWORD *)value = 0; /*0x5c7d60*/
          *(_WORD *)&value[4] = 0; /*0x5c7d62*/
          *(_WORD *)&value[6] = 0; /*0x5c7d66*/
          BSStringT_Set((BSStringT *)value, v15, 0); /*0x5c7d6a*/
          v176 = 0xFFFFFFFF; /*0x5c7d71*/
          v16 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c7d78*/
          Tile_SetString(v16, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c7d7f*/
          *((_DWORD *)this + 0x21F) = 0; /*0x5c7d84*/
        }
        v21 = sub_51ED80((_BYTE *)HIDWORD(v170)) == 0; /*0x5c7e1e*/
        v11 = v172[0]; /*0x5c7e20*/
        if ( !v21 ) /*0x5c7e24*/
          ++v4; /*0x5c7e26*/
      }
      v11 = (_DWORD *)v11[1]; /*0x5c7e29*/
      v172[0] = v11; /*0x5c7e2e*/
    }
    while ( v11 ); /*0x5c7e32*/
    goto LABEL_38; /*0x5c7e32*/
  }
  v172[0] = &g_TESDataHandler->eyeList.item; /*0x5c7e47*/
  v22 = v172[0]; /*0x5c7e42*/
  if ( !v172[0] ) /*0x5c7e4b*/
    goto LABEL_38; /*0x5c7e4b*/
  while ( 1 ) /*0x5c7e51*/
  {
    v23 = *v22; /*0x5c7e51*/
    if ( *v22 ) /*0x5c7e51*/
      break; /*0x5c7e51*/
LABEL_33:
    v22 = (_DWORD *)v22[1]; /*0x5c7e79*/
    v172[0] = v22; /*0x5c7e7e*/
    if ( !v22 ) /*0x5c7e82*/
    {
      v4 = 0; /*0x5c7e84*/
      goto LABEL_38; /*0x5c7e86*/
    }
  }
  v24 = *(const char **)(v23 + 0x28); /*0x5c7e57*/
  if ( !v24 ) /*0x5c7e5c*/
    v24 = EmptyString; /*0x5c7e5e*/
  if ( CRT_StricmpLocaleDispatch(v24, "Characters\\Eyes\\EyeDefault.dds") ) /*0x5c7e69*/
  {
    v22 = v172[0]; /*0x5c7e75*/
    goto LABEL_33; /*0x5c7e75*/
  }
  v25 = *(CHAR **)(v23 + 0x1C); /*0x5c7e88*/
  if ( !v25 ) /*0x5c7e8d*/
    v25 = EmptyString; /*0x5c7e8f*/
  *(_DWORD *)&value[0x14] = v25; /*0x5c7e94*/
  v26 = stru_B38F90.value; /*0x5c7e95*/
  *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c7e9a*/
  v173[1] = &value[8]; /*0x5c7ea4*/
  *(_DWORD *)&value[8] = 0; /*0x5c7eaa*/
  *(_WORD *)&value[0xC] = 0; /*0x5c7eac*/
  *(_WORD *)&value[0xE] = 0; /*0x5c7eb0*/
  BSStringT_Set((BSStringT *)&value[8], v26, 0); /*0x5c7eb4*/
  v27 = g_gameSetting_sMain.value; /*0x5c7eb9*/
  v173[0] = value; /*0x5c7ec3*/
  v176 = 4; /*0x5c7ec9*/
  *(_DWORD *)value = 0; /*0x5c7ed4*/
  *(_WORD *)&value[4] = 0; /*0x5c7ed6*/
  *(_WORD *)&value[6] = 0; /*0x5c7eda*/
  BSStringT_Set((BSStringT *)value, v27, 0); /*0x5c7ede*/
  v176 = 0xFFFFFFFF; /*0x5c7ee5*/
  v28 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c7eec*/
  Tile_SetString(v28, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c7ef3*/
  v4 = HIDWORD(v170); /*0x5c7ef8*/
LABEL_38:
  v29 = stru_B38F90.value; /*0x5c7efc*/
  v173[1] = &value[0x10]; /*0x5c7f06*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c7f0c*/
  BSStringT_Set((BSStringT *)&value[0x10], v29, 0); /*0x5c7f16*/
  v30 = g_gameSetting_sMain.value; /*0x5c7f1b*/
  v173[0] = &value[8]; /*0x5c7f25*/
  v176 = 5; /*0x5c7f2b*/
  *(_DWORD *)&value[8] = 0; /*0x5c7f36*/
  *(_WORD *)&value[0xC] = 0; /*0x5c7f38*/
  *(_WORD *)&value[0xE] = 0; /*0x5c7f3c*/
  BSStringT_Set((BSStringT *)&value[8], v30, 0); /*0x5c7f40*/
  v176 = 0xFFFFFFFF; /*0x5c7f47*/
  v31 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c7f4e*/
  Tile_SetFloat(v31, 0xFB2u, 0.0); /*0x5c7f60*/
  v32 = stru_B38F90.value; /*0x5c7f65*/
  v173[1] = &value[0x10]; /*0x5c7f6f*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c7f75*/
  BSStringT_Set((BSStringT *)&value[0x10], v32, 0); /*0x5c7f7f*/
  v33 = g_gameSetting_sMain.value; /*0x5c7f84*/
  v173[0] = &value[8]; /*0x5c7f8e*/
  v176 = 6; /*0x5c7f94*/
  *(_DWORD *)&value[8] = 0; /*0x5c7f9f*/
  *(_WORD *)&value[0xC] = 0; /*0x5c7fa1*/
  *(_WORD *)&value[0xE] = 0; /*0x5c7fa5*/
  BSStringT_Set((BSStringT *)&value[8], v33, 0); /*0x5c7fa9*/
  v176 = 0xFFFFFFFF; /*0x5c7fb0*/
  v34 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c7fb7*/
  v173[0] = (_DWORD *)(v4 - 1); /*0x5c7fbf*/
  *(float *)&value[0x14] = (float)(v4 - 1); /*0x5c7fca*/
  Tile_SetFloat(v34, 0xFB3u, *(float *)&value[0x14]); /*0x5c7fd2*/
  v35 = stru_B38F90.value; /*0x5c7fd7*/
  *(_DWORD *)&value[0x14] = 0xFAE; /*0x5c7fdc*/
  v173[1] = &value[0xC]; /*0x5c7fe6*/
  *(_QWORD *)&value[0xC] = 0; /*0x5c7fec*/
  BSStringT_Set((BSStringT *)&value[0xC], v35, 0); /*0x5c7ff6*/
  v36 = g_gameSetting_sMain.value; /*0x5c7ffb*/
  v176 = 7; /*0x5c8003*/
  v173[0] = &value[4]; /*0x5c800e*/
  *(_DWORD *)&value[4] = 0; /*0x5c8016*/
  *(_WORD *)&value[8] = 0; /*0x5c8018*/
  *(_WORD *)&value[0xA] = 0; /*0x5c801c*/
  BSStringT_Set((BSStringT *)&value[4], v36, 0); /*0x5c8020*/
  v176 = 0xFFFFFFFF; /*0x5c8027*/
  v37 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c802e*/
  *(double *)v174 = (double)*((int *)this + 0x21F); /*0x5c803b*/
  Float = Tile_GetFloat(v37, *(int *)&value[0x14]); /*0x5c803f*/
  if ( Float != *(double *)v174 ) /*0x5c804d*/
  {
    v39 = stru_B38F90.value; /*0x5c8055*/
    *(float *)&value[0x14] = (float)*((int *)this + 0x21F); /*0x5c805f*/
    v173[1] = &value[0xC]; /*0x5c8063*/
    *(_QWORD *)&value[0xC] = 0; /*0x5c8069*/
    BSStringT_Set((BSStringT *)&value[0xC], v39, 0); /*0x5c8073*/
    v40 = g_gameSetting_sMain.value; /*0x5c8078*/
    v173[0] = &value[4]; /*0x5c8082*/
    v176 = 8; /*0x5c8088*/
    *(_DWORD *)&value[4] = 0; /*0x5c8093*/
    *(_WORD *)&value[8] = 0; /*0x5c8095*/
    *(_WORD *)&value[0xA] = 0; /*0x5c8099*/
    BSStringT_Set((BSStringT *)&value[4], v40, 0); /*0x5c809d*/
    v176 = 0xFFFFFFFF; /*0x5c80a4*/
    v41 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c80ab*/
    sub_5C2B50(v41, *(float *)&value[0x14]); /*0x5c80b3*/
  }
  v173[0] = &g_TESDataHandler->raceList.item; /*0x5c80c2*/
  v42 = v173[0]; /*0x5c80bd*/
  for ( HIDWORD(v170) = 0; v42; v173[0] = v42 ) /*0x5c80ca*/
  {
    v43 = (TESRace *)*v42; /*0x5c80d0*/
    v172[0] = *(_DWORD **)v42; /*0x5c80d4*/
    if ( v172[0] ) /*0x5c80d8*/
    {
      if ( v171->member.form.race == v43 ) /*0x5c80e8*/
      {
        m_data = v43->name.name.m_data; /*0x5c80ee*/
        if ( !m_data ) /*0x5c80f3*/
          m_data = EmptyString; /*0x5c80f5*/
        *(_DWORD *)&value[0x14] = m_data; /*0x5c80fa*/
        v45 = stru_B38F78.value; /*0x5c80fb*/
        *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c8100*/
        v173[1] = &value[8]; /*0x5c810a*/
        *(_DWORD *)&value[8] = 0; /*0x5c8110*/
        *(_WORD *)&value[0xC] = 0; /*0x5c8112*/
        *(_WORD *)&value[0xE] = 0; /*0x5c8116*/
        BSStringT_Set((BSStringT *)&value[8], v45, 0); /*0x5c811a*/
        v46 = g_gameSetting_sMain.value; /*0x5c811f*/
        v174[0] = value; /*0x5c8129*/
        v176 = 9; /*0x5c812f*/
        *(_DWORD *)value = 0; /*0x5c813a*/
        *(_WORD *)&value[4] = 0; /*0x5c813c*/
        *(_WORD *)&value[6] = 0; /*0x5c8140*/
        BSStringT_Set((BSStringT *)value, v46, 0); /*0x5c8144*/
        v176 = 0xFFFFFFFF; /*0x5c814b*/
        v47 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c8152*/
        Tile_SetString(v47, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c8159*/
        v48 = v43->name.name.m_data; /*0x5c815e*/
        if ( !v48 ) /*0x5c8163*/
          v48 = EmptyString; /*0x5c8165*/
        *(_DWORD *)&value[0x14] = v48; /*0x5c816a*/
        v49 = stru_B38F78.value; /*0x5c816b*/
        *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c8170*/
        v174[0] = &value[8]; /*0x5c817a*/
        *(_DWORD *)&value[8] = 0; /*0x5c8180*/
        *(_WORD *)&value[0xC] = 0; /*0x5c8182*/
        *(_WORD *)&value[0xE] = 0; /*0x5c8186*/
        BSStringT_Set((BSStringT *)&value[8], v49, 0); /*0x5c818a*/
        v50 = stru_B38F78.value; /*0x5c818f*/
        v173[1] = value; /*0x5c8199*/
        v176 = 0xA; /*0x5c819f*/
        *(_DWORD *)value = 0; /*0x5c81aa*/
        *(_WORD *)&value[4] = 0; /*0x5c81ac*/
        *(_WORD *)&value[6] = 0; /*0x5c81b0*/
        BSStringT_Set((BSStringT *)value, v50, 0); /*0x5c81b4*/
        v176 = 0xFFFFFFFF; /*0x5c81bb*/
        v51 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c81c2*/
        Tile_SetString(v51, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c81c9*/
        v52 = v172[0]; /*0x5c81d2*/
        *((_DWORD *)this + 0x21B) = HIDWORD(v170); /*0x5c81d6*/
        v53 = *(int (__thiscall **)(_DWORD *, _DWORD, int))(v52[9] + 0x10); /*0x5c81df*/
        v54 = v52 + 9; /*0x5c81e2*/
        if ( v53(v54, 0, 0x43534544) ) /*0x5c81ed*/
        {
          *(_DWORD *)&value[0x14] = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v54 + 0x10))(v54, 0, 0x43534544); /*0x5c8203*/
          v55 = stru_B38FB0.value; /*0x5c8204*/
          *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c8209*/
          v174[0] = &value[8]; /*0x5c8213*/
          *(_DWORD *)&value[8] = 0; /*0x5c8219*/
          *(_WORD *)&value[0xC] = 0; /*0x5c821b*/
          *(_WORD *)&value[0xE] = 0; /*0x5c821f*/
          BSStringT_Set((BSStringT *)&value[8], v55, 0); /*0x5c8223*/
          v176 = 0xB; /*0x5c8228*/
        }
        else
        {
          v56 = stru_B38FB0.value; /*0x5c8235*/
          *(_DWORD *)&value[0x14] = word_A36430; /*0x5c823a*/
          *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c823f*/
          v174[0] = &value[8]; /*0x5c8249*/
          *(_DWORD *)&value[8] = 0; /*0x5c824f*/
          *(_WORD *)&value[0xC] = 0; /*0x5c8251*/
          *(_WORD *)&value[0xE] = 0; /*0x5c8255*/
          BSStringT_Set((BSStringT *)&value[8], v56, 0); /*0x5c8259*/
          v176 = 0xC; /*0x5c825e*/
        }
        v57 = stru_B38F78.value; /*0x5c8269*/
        v173[1] = value; /*0x5c8273*/
        *(_DWORD *)value = 0; /*0x5c8278*/
        *(_WORD *)&value[4] = 0; /*0x5c827a*/
        *(_WORD *)&value[6] = 0; /*0x5c827f*/
        BSStringT_Set((BSStringT *)value, v57, 0); /*0x5c8283*/
        v176 = 0xFFFFFFFF; /*0x5c828a*/
        v58 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c8291*/
        Tile_SetString(v58, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c8298*/
        v43 = (TESRace *)v172[0]; /*0x5c829d*/
        v42 = v173[0]; /*0x5c82a1*/
      }
      if ( (v43->isPlayable & 1) != 0 ) /*0x5c82a9*/
        ++HIDWORD(v170); /*0x5c82ab*/
    }
    v42 = (_DWORD *)v42[1]; /*0x5c82b0*/
  }
  v59 = stru_B38F78.value; /*0x5c82bf*/
  v174[0] = &value[0x10]; /*0x5c82c9*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c82cf*/
  BSStringT_Set((BSStringT *)&value[0x10], v59, 0); /*0x5c82d9*/
  v60 = stru_B38F78.value; /*0x5c82de*/
  v173[1] = &value[8]; /*0x5c82e8*/
  v176 = 0xD; /*0x5c82ee*/
  *(_DWORD *)&value[8] = 0; /*0x5c82f9*/
  *(_WORD *)&value[0xC] = 0; /*0x5c82fb*/
  *(_WORD *)&value[0xE] = 0; /*0x5c82ff*/
  BSStringT_Set((BSStringT *)&value[8], v60, 0); /*0x5c8303*/
  v176 = 0xFFFFFFFF; /*0x5c830a*/
  v61 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c8311*/
  Tile_SetFloat(v61, 0xFB2u, 0.0); /*0x5c8323*/
  v62 = stru_B38F78.value; /*0x5c8328*/
  v174[0] = &value[0x10]; /*0x5c8332*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8338*/
  BSStringT_Set((BSStringT *)&value[0x10], v62, 0); /*0x5c8342*/
  v63 = stru_B38F78.value; /*0x5c8347*/
  v173[1] = &value[8]; /*0x5c8351*/
  v176 = 0xE; /*0x5c8357*/
  *(_DWORD *)&value[8] = 0; /*0x5c8362*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8364*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8368*/
  BSStringT_Set((BSStringT *)&value[8], v63, 0); /*0x5c836c*/
  v176 = 0xFFFFFFFF; /*0x5c8373*/
  v64 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c837a*/
  v173[0] = (_DWORD *)(HIDWORD(v170) - 1); /*0x5c8386*/
  *(float *)&value[0x14] = (float)(HIDWORD(v170) - 1); /*0x5c8391*/
  Tile_SetFloat(v64, 0xFB3u, *(float *)&value[0x14]); /*0x5c8399*/
  v65 = stru_B38F78.value; /*0x5c839e*/
  *(_DWORD *)&value[0x14] = 0xFAE; /*0x5c83a3*/
  v174[0] = &value[0xC]; /*0x5c83ad*/
  *(_QWORD *)&value[0xC] = 0; /*0x5c83b3*/
  BSStringT_Set((BSStringT *)&value[0xC], v65, 0); /*0x5c83bd*/
  v66 = stru_B38F78.value; /*0x5c83c2*/
  v176 = 0xF; /*0x5c83ca*/
  v173[1] = &value[4]; /*0x5c83d5*/
  *(_DWORD *)&value[4] = 0; /*0x5c83dd*/
  *(_WORD *)&value[8] = 0; /*0x5c83df*/
  *(_WORD *)&value[0xA] = 0; /*0x5c83e3*/
  BSStringT_Set((BSStringT *)&value[4], v66, 0); /*0x5c83e7*/
  v176 = 0xFFFFFFFF; /*0x5c83ee*/
  v67 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c83f5*/
  *(double *)v174 = (double)*((int *)this + 0x21B); /*0x5c8402*/
  v68 = Tile_GetFloat(v67, *(int *)&value[0x14]); /*0x5c8406*/
  if ( v68 != *(double *)v174 ) /*0x5c8414*/
  {
    v69 = stru_B38F78.value; /*0x5c841c*/
    *(float *)&value[0x14] = (float)*((int *)this + 0x21B); /*0x5c8426*/
    v174[0] = &value[0xC]; /*0x5c842a*/
    *(_QWORD *)&value[0xC] = 0; /*0x5c8430*/
    BSStringT_Set((BSStringT *)&value[0xC], v69, 0); /*0x5c843a*/
    v70 = stru_B38F78.value; /*0x5c843f*/
    v173[1] = &value[4]; /*0x5c8449*/
    v176 = 0x10; /*0x5c844f*/
    *(_DWORD *)&value[4] = 0; /*0x5c845a*/
    *(_WORD *)&value[8] = 0; /*0x5c845c*/
    *(_WORD *)&value[0xA] = 0; /*0x5c8460*/
    BSStringT_Set((BSStringT *)&value[4], v70, 0); /*0x5c8464*/
    v176 = 0xFFFFFFFF; /*0x5c846b*/
    v71 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c8472*/
    sub_5C2B50(v71, *(float *)&value[0x14]); /*0x5c847a*/
  }
  v172[0] = &v171->member.form.race->hairs.node.data; /*0x5c8490*/
  v72 = v172[0]; /*0x5c8489*/
  HIDWORD(v170) = 0; /*0x5c8494*/
  if ( v172[0] && (v172[0][1] || *v172[0]) ) /*0x5c84a3*/
  {
    do /*0x5c86df*/
    {
      v73 = (_DWORD *)*v72; /*0x5c84b0*/
      if ( *v72 ) /*0x5c84b0*/
      {
        if ( v171->member.hair || !sub_51FE80(v73) || !sub_51FFD0(v73, (int)v171) || HIDWORD(v170) ) /*0x5c84f1*/
        {
          if ( (_DWORD *)v171->member.hair == v73 ) /*0x5c85c2*/
          {
            v82 = (CHAR *)v73[7]; /*0x5c85c8*/
            if ( !v82 ) /*0x5c85cd*/
              v82 = EmptyString; /*0x5c85cf*/
            *(_DWORD *)&value[0x14] = v82; /*0x5c85d4*/
            v83 = g_gameSetting_sHair.value; /*0x5c85d5*/
            *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c85da*/
            v174[0] = &value[8]; /*0x5c85e4*/
            *(_DWORD *)&value[8] = 0; /*0x5c85ea*/
            *(_WORD *)&value[0xC] = 0; /*0x5c85ec*/
            *(_WORD *)&value[0xE] = 0; /*0x5c85f0*/
            BSStringT_Set((BSStringT *)&value[8], v83, 0); /*0x5c85f4*/
            v84 = g_gameSetting_sMain.value; /*0x5c85f9*/
            v173[1] = value; /*0x5c8603*/
            v176 = 0x13; /*0x5c8609*/
            *(_DWORD *)value = 0; /*0x5c8614*/
            *(_WORD *)&value[4] = 0; /*0x5c8616*/
            *(_WORD *)&value[6] = 0; /*0x5c861a*/
            BSStringT_Set((BSStringT *)value, v84, 0); /*0x5c861e*/
            v176 = 0xFFFFFFFF; /*0x5c8625*/
            v85 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c862c*/
            Tile_SetString(v85, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c8633*/
            v86 = (CHAR *)v73[7]; /*0x5c8638*/
            if ( !v86 ) /*0x5c863d*/
              v86 = EmptyString; /*0x5c863f*/
            *(_DWORD *)&value[0x14] = v86; /*0x5c8644*/
            v87 = stru_B38FB8.value; /*0x5c8645*/
            *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c864a*/
            v174[0] = &value[8]; /*0x5c8654*/
            *(_DWORD *)&value[8] = 0; /*0x5c865a*/
            *(_WORD *)&value[0xC] = 0; /*0x5c865c*/
            *(_WORD *)&value[0xE] = 0; /*0x5c8660*/
            BSStringT_Set((BSStringT *)&value[8], v87, 0); /*0x5c8664*/
            v88 = g_gameSetting_sHair.value; /*0x5c8669*/
            v173[1] = value; /*0x5c8673*/
            v176 = 0x14; /*0x5c8679*/
            *(_DWORD *)value = 0; /*0x5c8684*/
            *(_WORD *)&value[4] = 0; /*0x5c8686*/
            *(_WORD *)&value[6] = 0; /*0x5c868a*/
            BSStringT_Set((BSStringT *)value, v88, 0); /*0x5c868e*/
            v176 = 0xFFFFFFFF; /*0x5c8695*/
            v89 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c869c*/
            Tile_SetString(v89, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c86a3*/
            *((_DWORD *)this + 0x21C) = HIDWORD(v170); /*0x5c86ac*/
          }
        }
        else
        {
          v74 = (CHAR *)v73[7]; /*0x5c84f7*/
          if ( !v74 ) /*0x5c84fc*/
            v74 = EmptyString; /*0x5c84fe*/
          v75 = (char *)g_gameSetting_sHair.value; /*0x5c8503*/
          *(_DWORD *)&value[0x14] = v74; /*0x5c8509*/
          *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c850a*/
          v174[0] = &value[8]; /*0x5c8514*/
          BSStringT_constr_str((BSStringT *)&value[8], v75); /*0x5c8519*/
          v76 = (char *)g_gameSetting_sMain.value; /*0x5c851e*/
          v173[1] = value; /*0x5c8528*/
          v176 = 0x11; /*0x5c852d*/
          BSStringT_constr_str((BSStringT *)value, v76); /*0x5c8538*/
          v176 = 0xFFFFFFFF; /*0x5c853f*/
          v77 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c8546*/
          Tile_SetString(v77, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c854d*/
          v78 = (CHAR *)v73[7]; /*0x5c8552*/
          if ( !v78 ) /*0x5c8557*/
            v78 = EmptyString; /*0x5c8559*/
          v79 = (char *)stru_B38FB8.value; /*0x5c855e*/
          *(_DWORD *)&value[0x14] = v78; /*0x5c8564*/
          *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c8565*/
          v174[0] = &value[8]; /*0x5c856f*/
          BSStringT_constr_str((BSStringT *)&value[8], v79); /*0x5c8574*/
          v80 = (char *)g_gameSetting_sHair.value; /*0x5c8579*/
          v173[1] = value; /*0x5c8583*/
          v176 = 0x12; /*0x5c8588*/
          BSStringT_constr_str((BSStringT *)value, v80); /*0x5c8593*/
          v176 = 0xFFFFFFFF; /*0x5c859a*/
          v81 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c85a1*/
          Tile_SetString(v81, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c85a8*/
          *((_DWORD *)this + 0x21C) = 0; /*0x5c85ad*/
        }
        if ( sub_51FE80(v73) ) /*0x5c86b4*/
        {
          if ( sub_51FFD0(v73, (int)v171) ) /*0x5c86c4*/
            ++HIDWORD(v170); /*0x5c86cd*/
        }
        v72 = v172[0]; /*0x5c86d2*/
      }
      v72 = (_DWORD *)v72[1]; /*0x5c86d6*/
      v172[0] = v72; /*0x5c86db*/
    }
    while ( v72 ); /*0x5c86df*/
  }
  else
  {
    v90 = g_gameSetting_sHair.value; /*0x5c86ed*/
    *(_DWORD *)&value[0x14] = stru_B38B80.value; /*0x5c86f2*/
    *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c86f3*/
    v174[0] = &value[8]; /*0x5c86fd*/
    *(_DWORD *)&value[8] = 0; /*0x5c8703*/
    *(_WORD *)&value[0xC] = 0; /*0x5c8705*/
    *(_WORD *)&value[0xE] = 0; /*0x5c8709*/
    BSStringT_Set((BSStringT *)&value[8], v90, 0); /*0x5c870d*/
    v91 = g_gameSetting_sMain.value; /*0x5c8712*/
    v173[1] = value; /*0x5c871c*/
    v176 = 0x15; /*0x5c8722*/
    *(_DWORD *)value = 0; /*0x5c872d*/
    *(_WORD *)&value[4] = 0; /*0x5c872f*/
    *(_WORD *)&value[6] = 0; /*0x5c8733*/
    BSStringT_Set((BSStringT *)value, v91, 0); /*0x5c8737*/
    v176 = 0xFFFFFFFF; /*0x5c873e*/
    v92 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c8745*/
    Tile_SetString(v92, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c874c*/
  }
  v93 = stru_B38FB8.value; /*0x5c8751*/
  v174[0] = &value[0x10]; /*0x5c875b*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8761*/
  BSStringT_Set((BSStringT *)&value[0x10], v93, 0); /*0x5c876b*/
  v94 = g_gameSetting_sHair.value; /*0x5c8770*/
  v173[1] = &value[8]; /*0x5c877a*/
  v176 = 0x16; /*0x5c8780*/
  *(_DWORD *)&value[8] = 0; /*0x5c878b*/
  *(_WORD *)&value[0xC] = 0; /*0x5c878d*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8791*/
  BSStringT_Set((BSStringT *)&value[8], v94, 0); /*0x5c8795*/
  v176 = 0xFFFFFFFF; /*0x5c879c*/
  v95 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c87a3*/
  Tile_SetFloat(v95, 0xFB2u, 0.0); /*0x5c87b5*/
  v96 = stru_B38FB8.value; /*0x5c87ba*/
  v174[0] = &value[0x10]; /*0x5c87c4*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c87ca*/
  BSStringT_Set((BSStringT *)&value[0x10], v96, 0); /*0x5c87d4*/
  v97 = g_gameSetting_sHair.value; /*0x5c87d9*/
  v173[1] = &value[8]; /*0x5c87e3*/
  v176 = 0x17; /*0x5c87e9*/
  *(_DWORD *)&value[8] = 0; /*0x5c87f4*/
  *(_WORD *)&value[0xC] = 0; /*0x5c87f6*/
  *(_WORD *)&value[0xE] = 0; /*0x5c87fa*/
  BSStringT_Set((BSStringT *)&value[8], v97, 0); /*0x5c87fe*/
  v176 = 0xFFFFFFFF; /*0x5c8805*/
  v98 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c880c*/
  v173[0] = (_DWORD *)(HIDWORD(v170) - 1); /*0x5c8818*/
  *(float *)&value[0x14] = (float)(HIDWORD(v170) - 1); /*0x5c8823*/
  Tile_SetFloat(v98, 0xFB3u, *(float *)&value[0x14]); /*0x5c882b*/
  v99 = stru_B38FB8.value; /*0x5c8830*/
  *(_DWORD *)&value[0x14] = 0xFAE; /*0x5c8835*/
  v174[0] = &value[0xC]; /*0x5c883f*/
  *(_QWORD *)&value[0xC] = 0; /*0x5c8845*/
  BSStringT_Set((BSStringT *)&value[0xC], v99, 0); /*0x5c884f*/
  v100 = g_gameSetting_sHair.value; /*0x5c8854*/
  v176 = 0x18; /*0x5c885c*/
  v173[1] = &value[4]; /*0x5c8867*/
  *(_DWORD *)&value[4] = 0; /*0x5c886f*/
  *(_WORD *)&value[8] = 0; /*0x5c8871*/
  *(_WORD *)&value[0xA] = 0; /*0x5c8875*/
  BSStringT_Set((BSStringT *)&value[4], v100, 0); /*0x5c8879*/
  v176 = 0xFFFFFFFF; /*0x5c8880*/
  v101 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c8887*/
  *(double *)v174 = (double)*((int *)this + 0x21C); /*0x5c8894*/
  v102 = Tile_GetFloat(v101, *(int *)&value[0x14]); /*0x5c8898*/
  if ( v102 != *(double *)v174 ) /*0x5c88a6*/
  {
    v103 = stru_B38FB8.value; /*0x5c88ae*/
    *(float *)&value[0x14] = (float)*((int *)this + 0x21C); /*0x5c88b8*/
    v174[0] = &value[0xC]; /*0x5c88bc*/
    *(_QWORD *)&value[0xC] = 0; /*0x5c88c2*/
    BSStringT_Set((BSStringT *)&value[0xC], v103, 0); /*0x5c88cc*/
    v104 = g_gameSetting_sHair.value; /*0x5c88d1*/
    v173[1] = &value[4]; /*0x5c88db*/
    v176 = 0x19; /*0x5c88e1*/
    *(_DWORD *)&value[4] = 0; /*0x5c88ec*/
    *(_WORD *)&value[8] = 0; /*0x5c88ee*/
    *(_WORD *)&value[0xA] = 0; /*0x5c88f2*/
    BSStringT_Set((BSStringT *)&value[4], v104, 0); /*0x5c88f6*/
    v176 = 0xFFFFFFFF; /*0x5c88fd*/
    v105 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c8904*/
    sub_5C2B50(v105, *(float *)&value[0x14]); /*0x5c890c*/
  }
  v106 = stru_B39330.value; /*0x5c8911*/
  v174[0] = &value[0x10]; /*0x5c891b*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8921*/
  BSStringT_Set((BSStringT *)&value[0x10], v106, 0); /*0x5c892b*/
  v107 = g_gameSetting_sHair.value; /*0x5c8930*/
  v173[1] = &value[8]; /*0x5c893a*/
  v176 = 0x1A; /*0x5c8940*/
  *(_DWORD *)&value[8] = 0; /*0x5c894b*/
  *(_WORD *)&value[0xC] = 0; /*0x5c894d*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8951*/
  BSStringT_Set((BSStringT *)&value[8], v107, 0); /*0x5c8955*/
  v176 = 0xFFFFFFFF; /*0x5c895c*/
  v108 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c8963*/
  Tile_SetFloat(v108, 0xFB2u, 0.0); /*0x5c8975*/
  v109 = stru_B39330.value; /*0x5c897a*/
  v174[0] = &value[0x10]; /*0x5c8984*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c898a*/
  BSStringT_Set((BSStringT *)&value[0x10], v109, 0); /*0x5c8994*/
  v110 = g_gameSetting_sHair.value; /*0x5c8999*/
  v173[1] = &value[8]; /*0x5c89a3*/
  v176 = 0x1B; /*0x5c89a9*/
  *(_DWORD *)&value[8] = 0; /*0x5c89b4*/
  *(_WORD *)&value[0xC] = 0; /*0x5c89b6*/
  *(_WORD *)&value[0xE] = 0; /*0x5c89ba*/
  BSStringT_Set((BSStringT *)&value[8], v110, 0); /*0x5c89be*/
  v176 = 0xFFFFFFFF; /*0x5c89c5*/
  v111 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c89cc*/
  Tile_SetFloat(v111, 0xFB3u, flt_A468FC); /*0x5c89e2*/
  v112 = stru_B39330.value; /*0x5c89e7*/
  *(_DWORD *)&value[0x14] = 0xFAE; /*0x5c89ec*/
  v174[0] = &value[0xC]; /*0x5c89f6*/
  *(_QWORD *)&value[0xC] = 0; /*0x5c89fc*/
  BSStringT_Set((BSStringT *)&value[0xC], v112, 0); /*0x5c8a06*/
  v113 = g_gameSetting_sHair.value; /*0x5c8a0b*/
  v176 = 0x1C; /*0x5c8a15*/
  v173[1] = &value[4]; /*0x5c8a20*/
  *(_DWORD *)&value[4] = 0; /*0x5c8a24*/
  *(_WORD *)&value[8] = 0; /*0x5c8a26*/
  *(_WORD *)&value[0xA] = 0; /*0x5c8a2c*/
  BSStringT_Set((BSStringT *)&value[4], v113, 0); /*0x5c8a30*/
  v176 = 0xFFFFFFFF; /*0x5c8a37*/
  v114 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c8a3e*/
  v115 = Tile_GetFloat(v114, *(int *)&value[0x14]); /*0x5c8a45*/
  *((_DWORD *)this + 0x223) = Double_To_SInt32(v115); /*0x5c8a56*/
  *((_DWORD *)this + 0x21E) = *(_DWORD *)v171->member.hairColorRGB; /*0x5c8a66*/
  if ( !rebuildLists || byte_B14500 ) /*0x5c8a6e*/
    sub_5C5F00(this); /*0x5c8a78*/
  v173[0] = (_DWORD *)*((unsigned __int8 *)this + 0x878); /*0x5c8a84*/
  v116 = stru_B38FC0.value; /*0x5c8a88*/
  v174[0] = &value[0x10]; /*0x5c8a96*/
  v117 = (double)(int)v173[0] / dbl_A3DDD8; /*0x5c8a9a*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8aa2*/
  *(float *)v172 = v117; /*0x5c8aac*/
  BSStringT_Set((BSStringT *)&value[0x10], v116, 0); /*0x5c8ab0*/
  v118 = g_gameSetting_sHair.value; /*0x5c8ab5*/
  v173[1] = &value[8]; /*0x5c8abf*/
  v176 = 0x1D; /*0x5c8ac5*/
  *(_DWORD *)&value[8] = 0; /*0x5c8ad0*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8ad2*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8ad6*/
  BSStringT_Set((BSStringT *)&value[8], v118, 0); /*0x5c8ada*/
  v176 = 0xFFFFFFFF; /*0x5c8ae1*/
  v119 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c8af4*/
  Tile_SetFloat(v119, 0xFB1u, flt_A6D2D8); /*0x5c8b00*/
  Tile_SetFloat(v119, 0xFB1u, *(float *)v172); /*0x5c8b14*/
  Tile_SetFloat(v119, 0xFB1u, 0.0); /*0x5c8b26*/
  v173[0] = (_DWORD *)*((unsigned __int8 *)this + 0x879); /*0x5c8b32*/
  v120 = stru_B38FC8.value; /*0x5c8b36*/
  v174[0] = &value[0x10]; /*0x5c8b44*/
  v121 = (double)(int)v173[0] / dbl_A3DDD8; /*0x5c8b48*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8b50*/
  *(float *)v172 = v121; /*0x5c8b5a*/
  BSStringT_Set((BSStringT *)&value[0x10], v120, 0); /*0x5c8b5e*/
  v122 = g_gameSetting_sHair.value; /*0x5c8b63*/
  v173[1] = &value[8]; /*0x5c8b6d*/
  v176 = 0x1E; /*0x5c8b73*/
  *(_DWORD *)&value[8] = 0; /*0x5c8b7e*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8b80*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8b84*/
  BSStringT_Set((BSStringT *)&value[8], v122, 0); /*0x5c8b88*/
  v176 = 0xFFFFFFFF; /*0x5c8b8f*/
  v123 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c8b9b*/
  *(_DWORD *)&value[0x14] = v124; /*0x5c8b9d*/
  Tile_SetFloat(v123, 0xFB1u, flt_A6D2D8); /*0x5c8bae*/
  Tile_SetFloat(v123, 0xFB1u, *(float *)v172); /*0x5c8bc2*/
  Tile_SetFloat(v123, 0xFB1u, 0.0); /*0x5c8bd4*/
  v173[0] = (_DWORD *)*((unsigned __int8 *)this + 0x87A); /*0x5c8be0*/
  v125 = stru_B38FD0.value; /*0x5c8be4*/
  v174[0] = &value[0x10]; /*0x5c8bf2*/
  v126 = (double)(int)v173[0] / dbl_A3DDD8; /*0x5c8bf6*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8bfe*/
  *(float *)v172 = v126; /*0x5c8c08*/
  BSStringT_Set((BSStringT *)&value[0x10], v125, 0); /*0x5c8c0c*/
  v127 = g_gameSetting_sHair.value; /*0x5c8c11*/
  v173[1] = &value[8]; /*0x5c8c1b*/
  v176 = 0x1F; /*0x5c8c21*/
  *(_DWORD *)&value[8] = 0; /*0x5c8c2c*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8c2e*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8c32*/
  BSStringT_Set((BSStringT *)&value[8], v127, 0); /*0x5c8c36*/
  v176 = 0xFFFFFFFF; /*0x5c8c3d*/
  v128 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c8c50*/
  Tile_SetFloat(v128, 0xFB1u, flt_A6D2D8); /*0x5c8c5c*/
  Tile_SetFloat(v128, 0xFB1u, *(float *)v172); /*0x5c8c70*/
  Tile_SetFloat(v128, 0xFB1u, 0.0); /*0x5c8c82*/
  v173[0] = (_DWORD *)LODWORD(v171->member.hairLength);// Load TESNPC::hairLength while initializing the Hair > Length control. /*0x5c8c96*/
  v174[0] = &value[0x10]; /*0x5c8c9e*/
  *((float *)this + 0x21D) = *(float *)v173;    // Cache initial hair length at RaceSexMenu+0x874. Native Randomize Face never rewrites this field. /*0x5c8ca2*/
  v129 = g_gameSetting_sLength.value; /*0x5c8ca8*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8caf*/
  BSStringT_Set((BSStringT *)&value[0x10], v129, 0); /*0x5c8cb9*/
  v130 = g_gameSetting_sHair.value; /*0x5c8cbe*/
  v173[1] = &value[8]; /*0x5c8cc8*/
  v176 = 0x20; /*0x5c8cce*/
  *(_DWORD *)&value[8] = 0; /*0x5c8cd9*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8cdb*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8cdf*/
  BSStringT_Set((BSStringT *)&value[8], v130, 0); /*0x5c8ce3*/
  v176 = 0xFFFFFFFF; /*0x5c8cea*/
  v131 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]);// Resolve the localized Hair > Length control Tile for initialization. /*0x5c8cf1*/
  v132 = *((float *)this + 0x21D); /*0x5c8cf6*/
  *(_DWORD *)&value[0x14] = v133; /*0x5c8cfc*/
  *(float *)v173 = v132; /*0x5c8cfd*/
  v134 = v131; /*0x5c8d07*/
  Tile_SetFloat(v131, 0xFB1u, flt_A6D2D8);      // Hair slider synchronization step 1: write -2147483648 to Tile user3 (0xFB1) as the XML expression sentinel. /*0x5c8d13*/
  Tile_SetFloat(v134, 0xFB1u, *(float *)v173);  // Hair slider synchronization step 2: write TESNPC::hairLength to Tile user3; the XML expression propagates it to user0 and the visible thumb. /*0x5c8d27*/
  Tile_SetFloat(v134, 0xFB1u, 0.0);             // Hair slider synchronization step 3: reset Tile user3 to 0. /*0x5c8d39*/
  v135 = v171; /*0x5c8d3e*/
  *((_BYTE *)this + 0x868) = TESActorBase_IsFemale(v171) == 1; /*0x5c8d51*/
  v21 = TESActorBase_IsFemale(v135) == 0; /*0x5c8d5c*/
  v136 = MEMORY[0xB39520].value; /*0x5c8d5e*/
  if ( !v21 ) /*0x5c8d63*/
    v136 = MEMORY[0xB39528].value; /*0x5c8d65*/
  *(_DWORD *)&value[0x14] = v136; /*0x5c8d6a*/
  v137 = stru_B38FA8.value; /*0x5c8d6b*/
  *(_DWORD *)&value[0x10] = 0xFB4; /*0x5c8d70*/
  v174[0] = &value[8]; /*0x5c8d7a*/
  *(_DWORD *)&value[8] = 0; /*0x5c8d80*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8d82*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8d86*/
  BSStringT_Set((BSStringT *)&value[8], v137, 0); /*0x5c8d8a*/
  v138 = stru_B38F78.value; /*0x5c8d8f*/
  v173[1] = value; /*0x5c8d99*/
  v176 = 0x21; /*0x5c8d9f*/
  *(_DWORD *)value = 0; /*0x5c8daa*/
  *(_WORD *)&value[4] = 0; /*0x5c8dac*/
  *(_WORD *)&value[6] = 0; /*0x5c8db0*/
  BSStringT_Set((BSStringT *)value, v138, 0); /*0x5c8db4*/
  v176 = 0xFFFFFFFF; /*0x5c8dbb*/
  v139 = RaceSexMenu_FindControlTile(this, *(BSStringT *)value, *(BSStringT *)&value[8]); /*0x5c8dc2*/
  Tile_SetString(v139, *(_DWORD **)&value[0x10], *(char **)&value[0x14]); /*0x5c8dc9*/
  v140 = stru_B38FA8.value; /*0x5c8dce*/
  v174[0] = &value[0x10]; /*0x5c8dd8*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8dde*/
  BSStringT_Set((BSStringT *)&value[0x10], v140, 0); /*0x5c8de8*/
  v141 = stru_B38F78.value; /*0x5c8ded*/
  v173[1] = &value[8]; /*0x5c8df7*/
  v176 = 0x22; /*0x5c8dfd*/
  *(_DWORD *)&value[8] = 0; /*0x5c8e08*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8e0a*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8e0e*/
  BSStringT_Set((BSStringT *)&value[8], v141, 0); /*0x5c8e12*/
  v176 = 0xFFFFFFFF; /*0x5c8e19*/
  v142 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c8e20*/
  Tile_SetFloat(v142, 0xFB2u, 0.0); /*0x5c8e32*/
  v143 = stru_B38FA8.value; /*0x5c8e37*/
  v174[0] = &value[0x10]; /*0x5c8e41*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c8e47*/
  BSStringT_Set((BSStringT *)&value[0x10], v143, 0); /*0x5c8e51*/
  v144 = stru_B38F78.value; /*0x5c8e56*/
  v173[1] = &value[8]; /*0x5c8e60*/
  v176 = 0x23; /*0x5c8e65*/
  *(_DWORD *)&value[8] = 0; /*0x5c8e70*/
  *(_WORD *)&value[0xC] = 0; /*0x5c8e72*/
  *(_WORD *)&value[0xE] = 0; /*0x5c8e76*/
  BSStringT_Set((BSStringT *)&value[8], v144, 0); /*0x5c8e7b*/
  v176 = 0xFFFFFFFF; /*0x5c8e82*/
  v145 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c8e89*/
  Tile_SetFloat(v145, 0xFB3u, 1.0); /*0x5c8e9b*/
  v146 = stru_B38FA8.value; /*0x5c8ea0*/
  *(_DWORD *)&value[0x14] = 0xFAE; /*0x5c8ea5*/
  v174[0] = &value[0xC]; /*0x5c8eaf*/
  *(_QWORD *)&value[0xC] = 0; /*0x5c8eb5*/
  BSStringT_Set((BSStringT *)&value[0xC], v146, 0); /*0x5c8ebf*/
  v147 = stru_B38F78.value; /*0x5c8ec4*/
  v173[1] = &value[4]; /*0x5c8ece*/
  v176 = 0x24; /*0x5c8ed4*/
  *(_DWORD *)&value[4] = 0; /*0x5c8edf*/
  *(_WORD *)&value[8] = 0; /*0x5c8ee1*/
  *(_WORD *)&value[0xA] = 0; /*0x5c8ee5*/
  BSStringT_Set((BSStringT *)&value[4], v147, 0); /*0x5c8ee9*/
  v176 = 0xFFFFFFFF; /*0x5c8ef0*/
  v148 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c8ef7*/
  v149 = Tile_GetFloat(v148, *(int *)&value[0x14]) == fConstant_2; /*0x5c8f0e*/
  v150 = (_DWORD *)*((unsigned __int8 *)this + 0x868); /*0x5c8f19*/
  v173[0] = v150; /*0x5c8f22*/
  if ( v150 != (_DWORD *)v149 ) /*0x5c8f26*/
  {
    v151 = stru_B38FA8.value; /*0x5c8f2c*/
    *(float *)&value[0x14] = (float)(int)v173[0]; /*0x5c8f36*/
    v174[0] = &value[0xC]; /*0x5c8f3a*/
    *(_QWORD *)&value[0xC] = 0; /*0x5c8f40*/
    BSStringT_Set((BSStringT *)&value[0xC], v151, 0); /*0x5c8f4a*/
    v152 = stru_B38F78.value; /*0x5c8f4f*/
    v173[1] = &value[4]; /*0x5c8f59*/
    v176 = 0x25; /*0x5c8f5f*/
    *(_DWORD *)&value[4] = 0; /*0x5c8f6a*/
    *(_WORD *)&value[8] = 0; /*0x5c8f6c*/
    *(_WORD *)&value[0xA] = 0; /*0x5c8f70*/
    BSStringT_Set((BSStringT *)&value[4], v152, 0); /*0x5c8f74*/
    v176 = 0xFFFFFFFF; /*0x5c8f7b*/
    v153 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[4], *(BSStringT *)&value[0xC]); /*0x5c8f82*/
    sub_5C2B50(v153, *(float *)&value[0x14]); /*0x5c8f8a*/
  }
  ArrayConstructor( /*0x5c8fa2*/
    (char *)&a1,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  race = v171->member.form.race; /*0x5c8fad*/
  *(float *)&value[0x14] = 0.0; /*0x5c8fb4*/
  *(_DWORD *)&value[0x10] = 0; /*0x5c8fb7*/
  *(_DWORD *)&value[0xC] = &a1; /*0x5c8fbc*/
  v176 = 0x26; /*0x5c8fbd*/
  ActiveFaceGenDeltaParameters = TESNPC_GetActiveFaceGenDeltaParameters(v171); /*0x5c8fc8*/
  FaceGenHeadParameters_Combine( /*0x5c8fd5*/
    (const FaceGenHeadParameters *)race->unk12,
    ActiveFaceGenDeltaParameters,
    *(FaceGenHeadParameters **)&value[0xC],
    value[0x10],
    *(float *)&value[0x14]);
  *(float *)v173 = FaceGenHeadParameters_GetControlValue(&a1, 0, 0); /*0x5c8fe6*/
  v174[0] = &value[0x10]; /*0x5c8ff5*/
  *(_DWORD *)&value[0xC] = 0; /*0x5c8ffb*/
  *(double *)v172 = 1.0 - 0.0; /*0x5c8ffc*/
  *((float *)this + 0x220) = *(double *)v172 * ((*(float *)v173 - dbl_A492F0) / dbl_A3F3D0) + 0.0; /*0x5c9014*/
  *(_DWORD *)&value[8] = g_gameSetting_sAge.value; /*0x5c901f*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c9020*/
  BSStringT_Set((BSStringT *)&value[0x10], *(const char **)&value[8], *(unsigned int *)&value[0xC]); /*0x5c902a*/
  v156 = g_gameSetting_sMain.value; /*0x5c902f*/
  v173[1] = &value[8]; /*0x5c9039*/
  LOBYTE(v176) = 0x27; /*0x5c903f*/
  *(_DWORD *)&value[8] = 0; /*0x5c9047*/
  *(_WORD *)&value[0xC] = 0; /*0x5c9049*/
  *(_WORD *)&value[0xE] = 0; /*0x5c904d*/
  BSStringT_Set((BSStringT *)&value[8], v156, 0); /*0x5c9051*/
  LOBYTE(v176) = 0x26; /*0x5c9058*/
  v157 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c9060*/
  v158 = *((float *)this + 0x220); /*0x5c9065*/
  *(_DWORD *)&value[0x14] = v159; /*0x5c906b*/
  *(float *)v173 = v158; /*0x5c906c*/
  v160 = v157; /*0x5c9076*/
  Tile_SetFloat(v157, 0xFB1u, flt_A6D2D8); /*0x5c9082*/
  Tile_SetFloat(v160, 0xFB1u, *(float *)v173); /*0x5c9096*/
  Tile_SetFloat(v160, 0xFB1u, 0.0); /*0x5c90a8*/
  if ( TESActorBase_IsFemale(v171) ) /*0x5c90b1*/
    v161 = fConstant_2; /*0x5c90c2*/
  else
    v161 = flt_A53954; /*0x5c90ba*/
  *(float *)v173 = v161; /*0x5c90c9*/
  ControlValue = FaceGenHeadParameters_GetControlValue(&a1, 1, 0); /*0x5c90d4*/
  *(float *)v173 = ControlValue - *(float *)v173; /*0x5c90e2*/
  v174[0] = &value[0x10]; /*0x5c90e6*/
  *(_DWORD *)&value[0xC] = 0; /*0x5c90ee*/
  *((float *)this + 0x221) = (*(float *)v173 - kFaceGenPolarNegativeTwo) * dbl_A3C770 * *(double *)v172 + dbl_A2FC68; /*0x5c9105*/
  *(_DWORD *)&value[8] = g_gameSetting_sComplexion.value; /*0x5c9110*/
  *(_QWORD *)&value[0x10] = 0; /*0x5c9111*/
  BSStringT_Set((BSStringT *)&value[0x10], *(const char **)&value[8], *(unsigned int *)&value[0xC]); /*0x5c911b*/
  v163 = g_gameSetting_sMain.value; /*0x5c9120*/
  v173[1] = &value[8]; /*0x5c912a*/
  LOBYTE(v176) = 0x28; /*0x5c9130*/
  *(_DWORD *)&value[8] = 0; /*0x5c9138*/
  *(_WORD *)&value[0xC] = 0; /*0x5c913a*/
  *(_WORD *)&value[0xE] = 0; /*0x5c913e*/
  BSStringT_Set((BSStringT *)&value[8], v163, 0); /*0x5c9142*/
  LOBYTE(v176) = 0x26; /*0x5c9149*/
  v164 = RaceSexMenu_FindControlTile(this, *(BSStringT *)&value[8], *(BSStringT *)&value[0x10]); /*0x5c9151*/
  v165 = *((float *)this + 0x221); /*0x5c9156*/
  *(_DWORD *)&value[0x14] = v166; /*0x5c915c*/
  *(float *)v173 = v165; /*0x5c915d*/
  v167 = v164; /*0x5c9167*/
  Tile_SetFloat(v164, 0xFB1u, flt_A6D2D8); /*0x5c9173*/
  Tile_SetFloat(v167, 0xFB1u, *(float *)v173); /*0x5c9187*/
  Tile_SetFloat(v167, 0xFB1u, 0.0); /*0x5c9199*/
  v176 = 0xFFFFFFFF; /*0x5c91ac*/
  _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5c91b3*/
  return 1; /*0x5c91ba*/
}
