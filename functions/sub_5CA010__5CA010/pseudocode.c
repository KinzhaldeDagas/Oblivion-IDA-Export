void __usercall sub_5CA010(double a1@<st2>, double st7_0@<st0>, double a3@<st1>)
{
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *XML; // ebx
  Menu *ParentMenu; // esi
  ExtraDataList *****ContainerChanges; // eax
  _DWORD *EquippedInstance; // edi
  ExtraDataList *****v9; // eax
  _DWORD *v10; // eax
  UInt32 unk1C; // eax
  TileMenu *v12; // eax
  TESNPC *v13; // eax
  TESNPC *v14; // ebp
  TESRace *race; // edi
  char *v16; // eax
  UInt32 *p_unk08; // ebx
  char *v18; // edx
  BSStringT *v19; // eax
  char *v20; // edx
  char *v21; // edx
  char *v22; // eax
  char *v23; // edx
  char *v24; // edx
  char *v25; // edx
  char *v26; // edx
  char *v27; // edx
  BSStringT *v28; // eax
  char *v29; // edx
  char *v30; // edx
  char *v31; // edx
  char *v32; // edx
  BSStringT *v33; // eax
  char *v34; // edx
  char *v35; // edx
  char *v36; // edx
  char *v37; // edx
  char *v38; // edx
  char *v39; // edx
  BSStringT *v40; // eax
  char *v41; // edx
  char *v42; // eax
  char *v43; // edx
  char *v44; // eax
  char *v45; // edx
  char *v46; // eax
  char *v47; // edx
  char *v48; // eax
  char *v49; // edx
  BSStringT *v50; // eax
  char *v51; // edx
  char *v52; // eax
  char *v53; // edx
  char *v54; // eax
  char *v55; // edx
  char *v56; // eax
  char *v57; // edx
  char *v58; // eax
  char *v59; // edx
  char *v60; // eax
  char *v61; // edx
  char *v62; // eax
  char *v63; // edx
  char *v64; // eax
  char *v65; // edx
  char *v66; // eax
  char *v67; // edx
  char *v68; // eax
  char *v69; // edx
  TileMenu *v70; // eax
  char *v71; // edx
  char *v72; // eax
  char *v73; // edx
  char *v74; // eax
  char *v75; // edx
  char *v76; // eax
  char *v77; // edx
  char *v78; // eax
  char *v79; // edx
  char *v80; // eax
  char *v81; // edx
  char *v82; // eax
  char *v83; // edx
  BSStringT *v84; // eax
  char *v85; // edx
  char *v86; // edx
  char *v87; // edx
  char *v88; // edx
  char *v89; // edx
  char *v90; // edx
  BSStringT *v91; // eax
  char *v92; // edx
  char *v93; // edx
  char *v94; // edx
  char *v95; // edx
  BSStringT *v96; // eax
  char *v97; // edx
  char *v98; // edx
  char *v99; // edx
  char *v100; // edx
  char *v101; // edx
  char *v102; // edx
  char *v103; // edx
  char *v104; // edx
  char *v105; // edx
  char *v106; // edx
  char *v107; // edx
  char *v108; // edx
  char *v109; // edx
  char *v110; // edx
  BSStringT *v111; // eax
  char *v112; // edx
  char *v113; // edx
  char *v114; // edx
  char *v115; // edx
  char *v116; // edx
  BSStringT *v117; // eax
  char *v118; // edx
  char *v119; // edx
  char *v120; // edx
  char *v121; // edx
  BSStringT *v122; // eax
  char *v123; // edx
  char *v124; // edx
  char *v125; // edx
  char *v126; // edx
  char *v127; // edx
  BSStringT *v128; // eax
  char *v129; // edx
  char *v130; // edx
  char *v131; // edx
  char *v132; // edx
  char *v133; // edx
  char *v134; // edx
  char *v135; // edx
  char *v136; // edx
  char *v137; // edx
  char *v138; // edx
  char *v139; // edx
  BSStringT *v140; // eax
  char *v141; // edx
  char *v142; // edx
  char *v143; // edx
  char *v144; // edx
  char *v145; // edx
  char *v146; // edx
  char *v147; // edx
  char *v148; // edx
  char *v149; // edx
  char *v150; // edx
  char *v151; // edx
  char *v152; // edx
  char *v153; // edx
  char *v154; // edx
  char *v155; // edx
  TileMenu *v156; // eax
  char *v157; // edx
  char *v158; // edx
  char *v159; // edx
  char *v160; // edx
  char *v161; // edx
  char *v162; // edx
  BSStringT *v163; // eax
  char *v164; // edx
  char *v165; // edx
  char *v166; // edx
  char *v167; // edx
  char *v168; // edx
  char *v169; // edx
  char *v170; // edx
  BSStringT *v171; // eax
  char *v172; // edx
  char *v173; // edx
  char *v174; // edx
  char *v175; // edx
  char *v176; // edx
  char *v177; // edx
  char *v178; // edx
  BSStringT *v179; // eax
  char *v180; // edx
  char *v181; // edx
  char *v182; // edx
  char *v183; // edx
  char *v184; // edx
  char *v185; // edx
  char *v186; // edx
  char *v187; // edx
  BSStringT *v188; // eax
  char *v189; // edx
  char *v190; // edx
  char *v191; // edx
  char *v192; // edx
  BSStringT *v193; // eax
  char *v194; // edx
  char *v195; // edx
  char *v196; // edx
  _DWORD *v197; // eax
  char *v198; // eax
  _DWORD *v199; // eax
  char *v200; // eax
  char *v201; // eax
  char *Name; // eax
  unsigned __int8 *v203; // edx
  char v204; // cl
  bool v205; // al
  char *v206; // edx
  char *v207; // eax
  _DWORD *v208; // eax
  double Float; // st7
  int v210; // eax
  char *v211; // edx
  char *v212; // eax
  _DWORD *v213; // eax
  char *v214; // eax
  Tile *v215; // eax
  char *v216; // edx
  char *v217; // eax
  _DWORD *v218; // eax
  char *v219; // edx
  char *v220; // eax
  Tile *v221; // eax
  char *v222; // edx
  char *v223; // eax
  Tile *v224; // eax
  char *v225; // edx
  char *v226; // eax
  Tile *v227; // eax
  char *v228; // edx
  char *v229; // eax
  _DWORD *v230; // eax
  double v231; // st7
  char *v232; // edx
  char *v233; // eax
  _DWORD *v234; // eax
  char *v235; // edx
  char *v236; // eax
  _DWORD *v237; // eax
  char *v238; // edx
  char *v239; // eax
  _DWORD *v240; // eax
  double v241; // rt0
  unsigned __int16 v242; // dx
  const char *v243; // eax
  const char *v244; // eax
  Tile *v245; // eax
  TileWindow *unk18; // [esp-14h] [ebp-50h]
  TileWindow *v247; // [esp-14h] [ebp-50h]
  TileWindow *v248; // [esp-14h] [ebp-50h]
  TileWindow *unk24; // [esp-14h] [ebp-50h]
  TileWindow *v250; // [esp-14h] [ebp-50h]
  TileWindow *v251; // [esp-14h] [ebp-50h]
  TileWindow *v252; // [esp-14h] [ebp-50h]
  TileWindow *vftable; // [esp-14h] [ebp-50h]
  TileWindow *v254; // [esp-14h] [ebp-50h]
  TileWindow *v255; // [esp-14h] [ebp-50h]
  TileWindow *v256; // [esp-14h] [ebp-50h]
  TileWindow *v257; // [esp-14h] [ebp-50h]
  TileWindow *v258; // [esp-14h] [ebp-50h]
  TileWindow *v259; // [esp-14h] [ebp-50h]
  TileWindow *v260; // [esp-14h] [ebp-50h]
  TileWindow *v261; // [esp-14h] [ebp-50h]
  TileMenu *tile; // [esp-14h] [ebp-50h]
  TileMenu *v263; // [esp-14h] [ebp-50h]
  TileMenu *v264; // [esp-14h] [ebp-50h]
  TileMenu *v265; // [esp-14h] [ebp-50h]
  TileMenu *v266; // [esp-14h] [ebp-50h]
  TileMenu *v267; // [esp-14h] [ebp-50h]
  BSStringT v268; // [esp-10h] [ebp-4Ch] BYREF
  BSStringT v269; // [esp-8h] [ebp-44h] BYREF
  BSStringT v270; // [esp+0h] [ebp-3Ch] BYREF
  float v271; // [esp+1Ch] [ebp-20h]
  Tile *v272; // [esp+20h] [ebp-1Ch]
  __int16 *p_m_dataLen; // [esp+24h] [ebp-18h]
  float v274; // [esp+28h] [ebp-14h]
  float v275; // [esp+2Ch] [ebp-10h]
  int v276; // [esp+38h] [ebp-4h]

  if ( !Menu_GetOpenMenuTile(0x40C) ) /*0x5ca03c*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5ca057*/
    Depth = InterfaceManager_GetDepth(st7_0); /*0x5ca059*/
    v271 = Depth; /*0x5ca05e*/
    XML = (Tile *)Tile::ReadFile( /*0x5ca06f*/
                    (BSStringT *)Singleton->menuRoot,
                    a1,
                    a3,
                    Depth,
                    "Data\\Menus\\CharGen\\race_sex_menu.xml");
    v272 = XML; /*0x5ca073*/
    ParentMenu = (Menu *)Tile_GetParentMenu(XML); /*0x5ca07c*/
    if ( ParentMenu ) /*0x5ca080*/
    {
      if ( reference ) /*0x5ca086*/
      {
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5ca09a*/
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 1, 0); /*0x5ca0b3*/
        v9 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5ca0b5*/
        v10 = ContainerExtraData_GetEquippedInstance(v9, 0, 0); /*0x5ca0bc*/
        if ( EquippedInstance ) /*0x5ca0c3*/
        {
          ParentMenu[0x35].members.ownsTemplates = EquippedInstance[2]; /*0x5ca0c8*/
        }
        else if ( v10 ) /*0x5ca0d2*/
        {
          ParentMenu[0x35].members.ownsTemplates = v10[2]; /*0x5ca0d7*/
        }
        else
        {
          ParentMenu[0x35].members.ownsTemplates = 0; /*0x5ca0df*/
        }
        unk1C = ParentMenu[0x35].members.ownsTemplates; /*0x5ca0e9*/
        if ( unk1C ) /*0x5ca0f1*/
          Depth = Actor_UnequipItem((Actor *)reference, Depth, a1, a3, unk1C, 1, 0, 0, 0, 0); /*0x5ca104*/
        sub_65D660(); /*0x5ca10f*/
        v12 = (TileMenu *)OblivionDynamicCast( /*0x5ca123*/
                            XML,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileMenu `RTTI Type Descriptor',
                            0);
        Menu_SetTileMenu(ParentMenu, a3, Depth, v12); /*0x5ca12e*/
        if ( ParentMenu[1].__vftable /*0x5ca145*/
          && ParentMenu[1].members.tile
          && ParentMenu[1].members.templateHead
          && ParentMenu[1].members.unk14 )
        {
          if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast ) /*0x5ca18d*/
            Tile_SetFloat(XML, (_DWORD *)0xFAB, v271); /*0x5ca19e*/
          v13 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5ca1b1*/
          *(float *)&v270.m_dataLen = 0.0; /*0x5ca1b6*/
          v14 = v13; /*0x5ca1b9*/
          race = v13->member.form.race; /*0x5ca1c1*/
          *(_DWORD *)&v269.m_dataLen = ParentMenu[0x38].members.unk18; /*0x5ca1c9*/
          v16 = (char *)TESNPC_GetActiveFaceGenDeltaParameters(v13); /*0x5ca1cc*/
          FaceGenHeadParameters_Combine((char *)race->unk12, v16, *(int *)&v269.m_dataLen, 0, 0.0); /*0x5ca1d9*/
          p_unk08 = &ParentMenu[0x39].members.templateHead; /*0x5ca1e4*/
          ParentMenu[0x39].members.templateHead = stru_B393B8; /*0x5ca1ea*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3A].members.id, "%s", *(const char **)stru_B39338); /*0x5ca1ff*/
          ParentMenu[0x39].members.templateNext = stru_B393C0; /*0x5ca20a*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B], "%s", *(const char **)stru_B39340); /*0x5ca223*/
          ParentMenu[0x39].members.templateContextTile = stru_B393C8; /*0x5ca22e*/
          BSStringT_Static_Format( /*0x5ca247*/
            (BSStringT *)&ParentMenu[0x3B].members.templateHead,
            "%s",
            *(const char **)stru_B39348);
          ParentMenu[0x39].members.unk14 = stru_B393D0; /*0x5ca252*/
          BSStringT_Static_Format( /*0x5ca26b*/
            (BSStringT *)&ParentMenu[0x3B].members.templateContextTile,
            "%s",
            *(const char **)stru_B39350);
          ParentMenu[0x39].members.unk18 = stru_B393D8; /*0x5ca279*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B].members.unk18, "%s", *(const char **)stru_B39358); /*0x5ca292*/
          ParentMenu[0x39].members.ownsTemplates = stru_B393E0; /*0x5ca29d*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B].members.id, "%s", *(const char **)stru_B39360); /*0x5ca2b6*/
          ParentMenu[0x39].members.id = stru_B393E8; /*0x5ca2c1*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C], "%s", *(const char **)stru_B39368); /*0x5ca2da*/
          ParentMenu[0x39].members.fadeState = stru_B393F0; /*0x5ca2e5*/
          BSStringT_Static_Format( /*0x5ca2fe*/
            (BSStringT *)&ParentMenu[0x3C].members.templateHead,
            "%s",
            *(const char **)stru_B39370);
          ParentMenu[0x3A].__vftable = (MenuVtbl *)stru_B393F8; /*0x5ca309*/
          BSStringT_Static_Format( /*0x5ca322*/
            (BSStringT *)&ParentMenu[0x3C].members.templateContextTile,
            "%s",
            *(const char **)stru_B39378);
          ParentMenu[0x3A].members.tile = (TileMenu *)stru_B39400; /*0x5ca32d*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C].members.unk18, "%s", *(const char **)stru_B39380); /*0x5ca346*/
          ParentMenu[0x3A].members.templateHead = stru_B39408; /*0x5ca354*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C].members.id, "%s", *(const char **)stru_B39388); /*0x5ca36d*/
          ParentMenu[0x3A].members.templateNext = stru_B39410; /*0x5ca378*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D], "%s", *(const char **)stru_B39390); /*0x5ca391*/
          ParentMenu[0x3A].members.templateContextTile = stru_B39418; /*0x5ca39c*/
          BSStringT_Static_Format( /*0x5ca3b5*/
            (BSStringT *)&ParentMenu[0x3D].members.templateHead,
            "%s",
            *(const char **)stru_B39398);
          ParentMenu[0x3A].members.unk14 = stru_B39420; /*0x5ca3c0*/
          BSStringT_Static_Format( /*0x5ca3d9*/
            (BSStringT *)&ParentMenu[0x3D].members.templateContextTile,
            "%s",
            *(const char **)stru_B393A0);
          ParentMenu[0x3A].members.unk18 = stru_B39428; /*0x5ca3e4*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D].members.unk18, "%s", *(const char **)stru_B393A8); /*0x5ca3fd*/
          ParentMenu[0x3A].members.ownsTemplates = stru_B39430; /*0x5ca408*/
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D].members.id, "%s", *(const char **)stru_B393B0); /*0x5ca421*/
          v18 = (char *)g_gameSetting_sMain; /*0x5ca426*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca42f*/
          v270.m_data = 0; /*0x5ca431*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca438*/
          BSStringT_constr_str(&v269, v18); /*0x5ca43d*/
          v19 = sub_5C4340( /*0x5ca448*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca44d*/
          v270.m_data = (char *)1; /*0x5ca44f*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca456*/
          *(_DWORD *)&v268.m_dataLen = "          "; /*0x5ca45a*/
          ParentMenu[1].members.unk18 = (UInt32)v19; /*0x5ca45f*/
          BSStringT_constr_str(&v269, *(char **)&v268.m_dataLen); /*0x5ca462*/
          v20 = (char *)stru_B38F78; /*0x5ca467*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca472*/
          v276 = 0; /*0x5ca477*/
          BSStringT_constr_str(&v268, v20); /*0x5ca47f*/
          unk18 = (TileWindow *)ParentMenu[1].members.unk18; /*0x5ca48a*/
          v276 = 0xFFFFFFFF; /*0x5ca48d*/
          sub_5C4480( /*0x5ca491*/
            ParentMenu,
            0.0,
            unk18,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v21 = (char *)stru_B38F80; /*0x5ca496*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca49c*/
          v270.m_data = 0; /*0x5ca49e*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca4a5*/
          BSStringT_constr_str(&v269, v21); /*0x5ca4aa*/
          v22 = (char *)stru_B38F80; /*0x5ca4af*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca4b9*/
          v276 = 1; /*0x5ca4be*/
          BSStringT_constr_str(&v268, v22); /*0x5ca4c6*/
          v247 = (TileWindow *)ParentMenu[1].members.unk18; /*0x5ca4ce*/
          v276 = 0xFFFFFFFF; /*0x5ca4d1*/
          sub_5C4480( /*0x5ca4d5*/
            ParentMenu,
            0.0,
            v247,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca4da*/
          v270.m_data = (char *)1; /*0x5ca4dc*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca4e3*/
          BSStringT_constr_str(&v269, "          "); /*0x5ca4ec*/
          v23 = (char *)g_gameSetting_sHair; /*0x5ca4f1*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca4fc*/
          v276 = 2; /*0x5ca501*/
          BSStringT_constr_str(&v268, v23); /*0x5ca509*/
          v248 = (TileWindow *)ParentMenu[1].members.unk18; /*0x5ca511*/
          v276 = 0xFFFFFFFF; /*0x5ca514*/
          sub_5C4480( /*0x5ca518*/
            ParentMenu,
            0.0,
            v248,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v24 = (char *)stru_B38F90; /*0x5ca51d*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca523*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5ca52a*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v24); /*0x5ca52f*/
          sub_5C4630( /*0x5ca53a*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v25 = (char *)g_gameSetting_sAge; /*0x5ca53f*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca545*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca547*/
          *(_DWORD *)&v269.m_dataLen = 0xFFFFFFFF; /*0x5ca548*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5ca54e*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v25); /*0x5ca553*/
          sub_5C93F0( /*0x5ca55e*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v26 = (char *)g_gameSetting_sComplexion; /*0x5ca563*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca569*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca56b*/
          *(_DWORD *)&v269.m_dataLen = 0xFFFFFFFF; /*0x5ca56c*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5ca572*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v26); /*0x5ca577*/
          sub_5C93F0( /*0x5ca582*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v27 = (char *)stru_B38F78; /*0x5ca587*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5ca58d*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca58e*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca594*/
          BSStringT_constr_str(&v269, v27); /*0x5ca599*/
          v28 = sub_5C4340( /*0x5ca5a4*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca5a9*/
          ParentMenu[1].members.ownsTemplates = (UInt32)v28; /*0x5ca5ae*/
          v29 = (char *)stru_B38FA8; /*0x5ca5b1*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5ca5b9*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v29); /*0x5ca5be*/
          sub_5C4630( /*0x5ca5c9*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.ownsTemplates,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v30 = (char *)stru_B38F78; /*0x5ca5ce*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca5d4*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5ca5db*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v30); /*0x5ca5e0*/
          sub_5C4630( /*0x5ca5eb*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.ownsTemplates,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v31 = (char *)stru_B38FB0; /*0x5ca5f0*/
          v275 = COERCE_FLOAT(&v270); /*0x5ca5fb*/
          BSStringT_constr_str(&v270, v31); /*0x5ca600*/
          sub_5C4800( /*0x5ca60b*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.ownsTemplates,
            v270.m_data,
            *(int *)&v270.m_dataLen);
          v32 = (char *)g_gameSetting_sHair; /*0x5ca610*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5ca616*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca617*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca61d*/
          BSStringT_constr_str(&v269, v32); /*0x5ca622*/
          v33 = sub_5C4340( /*0x5ca62d*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5ca632*/
          ParentMenu[1].members.id = (UInt32)v33; /*0x5ca637*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5ca63c*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, (char *)stru_B38FB8); /*0x5ca647*/
          sub_5C4630( /*0x5ca652*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v34 = (char *)stru_B39330; /*0x5ca657*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca65d*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5ca664*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v34); /*0x5ca669*/
          sub_5C4630( /*0x5ca674*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v35 = (char *)stru_B38FC0; /*0x5ca679*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca67f*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca681*/
          *(_DWORD *)&v269.m_dataLen = 0xFFFFFFFF; /*0x5ca682*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5ca688*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v35); /*0x5ca68d*/
          sub_5C93F0( /*0x5ca698*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v36 = (char *)stru_B38FC8; /*0x5ca69d*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca6a3*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca6a5*/
          *(_DWORD *)&v269.m_dataLen = 0xFFFFFFFF; /*0x5ca6a6*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5ca6ac*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v36); /*0x5ca6b1*/
          sub_5C93F0( /*0x5ca6bc*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v37 = (char *)stru_B38FD0; /*0x5ca6c1*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca6c7*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca6c9*/
          *(_DWORD *)&v269.m_dataLen = 0xFFFFFFFF; /*0x5ca6ca*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5ca6d0*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v37); /*0x5ca6d5*/
          sub_5C93F0( /*0x5ca6e0*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v38 = (char *)g_gameSetting_sLength; /*0x5ca6e5*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca6eb*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca6ed*/
          *(_DWORD *)&v269.m_dataLen = 0xFFFFFFFF; /*0x5ca6ee*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5ca6f4*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v38); /*0x5ca6f9*/
          sub_5C93F0( /*0x5ca704*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v39 = (char *)stru_B38F80; /*0x5ca709*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5ca70f*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca710*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca716*/
          BSStringT_constr_str(&v269, v39); /*0x5ca71b*/
          v40 = sub_5C4340( /*0x5ca726*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5ca72b*/
          v270.m_data = 0; /*0x5ca72d*/
          ParentMenu[1].members.fadeState = (UInt32)v40; /*0x5ca732*/
          v41 = (char *)stru_B38FE0; /*0x5ca735*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca73d*/
          BSStringT_constr_str(&v269, v41); /*0x5ca742*/
          v42 = (char *)stru_B38FE0; /*0x5ca747*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca751*/
          v276 = 3; /*0x5ca756*/
          BSStringT_constr_str(&v268, v42); /*0x5ca75e*/
          unk24 = (TileWindow *)ParentMenu[1].members.fadeState; /*0x5ca766*/
          v276 = 0xFFFFFFFF; /*0x5ca769*/
          sub_5C4480( /*0x5ca76d*/
            ParentMenu,
            0.0,
            unk24,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v43 = (char *)stru_B38FE8; /*0x5ca772*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca778*/
          v270.m_data = 0; /*0x5ca77a*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca781*/
          BSStringT_constr_str(&v269, v43); /*0x5ca786*/
          v44 = (char *)stru_B38FE8; /*0x5ca78b*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca795*/
          v276 = 4; /*0x5ca79a*/
          BSStringT_constr_str(&v268, v44); /*0x5ca7a2*/
          v250 = (TileWindow *)ParentMenu[1].members.fadeState; /*0x5ca7aa*/
          v276 = 0xFFFFFFFF; /*0x5ca7ad*/
          sub_5C4480( /*0x5ca7b1*/
            ParentMenu,
            0.0,
            v250,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v45 = (char *)stru_B38FF0; /*0x5ca7b6*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca7bc*/
          v270.m_data = 0; /*0x5ca7be*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca7c5*/
          BSStringT_constr_str(&v269, v45); /*0x5ca7ca*/
          v46 = (char *)stru_B38FF0; /*0x5ca7cf*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca7d9*/
          v276 = 5; /*0x5ca7de*/
          BSStringT_constr_str(&v268, v46); /*0x5ca7e6*/
          v251 = (TileWindow *)ParentMenu[1].members.fadeState; /*0x5ca7ee*/
          v276 = 0xFFFFFFFF; /*0x5ca7f1*/
          sub_5C4480( /*0x5ca7f5*/
            ParentMenu,
            0.0,
            v251,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v47 = (char *)stru_B38FF8; /*0x5ca7fa*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca800*/
          v270.m_data = 0; /*0x5ca802*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca809*/
          BSStringT_constr_str(&v269, v47); /*0x5ca80e*/
          v48 = (char *)stru_B38FF8; /*0x5ca813*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca81d*/
          v276 = 6; /*0x5ca822*/
          BSStringT_constr_str(&v268, v48); /*0x5ca82a*/
          v252 = (TileWindow *)ParentMenu[1].members.fadeState; /*0x5ca832*/
          v276 = 0xFFFFFFFF; /*0x5ca835*/
          sub_5C4480( /*0x5ca839*/
            ParentMenu,
            0.0,
            v252,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v49 = (char *)stru_B38FE0; /*0x5ca83e*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5ca844*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5ca845*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca84b*/
          BSStringT_constr_str(&v269, v49); /*0x5ca850*/
          v50 = sub_5C4340( /*0x5ca85b*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5ca860*/
          v270.m_data = 0; /*0x5ca862*/
          ParentMenu[2].__vftable = (MenuVtbl *)v50; /*0x5ca867*/
          v51 = (char *)stru_B38F80; /*0x5ca86a*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca872*/
          BSStringT_constr_str(&v269, v51); /*0x5ca877*/
          v52 = (char *)stru_B39000; /*0x5ca87c*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca886*/
          v276 = 7; /*0x5ca88b*/
          BSStringT_constr_str(&v268, v52); /*0x5ca893*/
          vftable = (TileWindow *)ParentMenu[2].__vftable; /*0x5ca89b*/
          v276 = 0xFFFFFFFF; /*0x5ca89e*/
          sub_5C4480( /*0x5ca8a2*/
            ParentMenu,
            0.0,
            vftable,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v53 = (char *)stru_B39008; /*0x5ca8a7*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca8ad*/
          v270.m_data = 0; /*0x5ca8af*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca8b6*/
          BSStringT_constr_str(&v269, v53); /*0x5ca8bb*/
          v54 = (char *)stru_B39008; /*0x5ca8c0*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca8ca*/
          v276 = 8; /*0x5ca8cf*/
          BSStringT_constr_str(&v268, v54); /*0x5ca8d7*/
          v254 = (TileWindow *)ParentMenu[2].__vftable; /*0x5ca8df*/
          v276 = 0xFFFFFFFF; /*0x5ca8e2*/
          sub_5C4480( /*0x5ca8e6*/
            ParentMenu,
            0.0,
            v254,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v55 = (char *)stru_B39010; /*0x5ca8eb*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca8f1*/
          v270.m_data = 0; /*0x5ca8f3*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca8fa*/
          BSStringT_constr_str(&v269, v55); /*0x5ca8ff*/
          v56 = (char *)stru_B39010; /*0x5ca904*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca90e*/
          v276 = 9; /*0x5ca913*/
          BSStringT_constr_str(&v268, v56); /*0x5ca91b*/
          v255 = (TileWindow *)ParentMenu[2].__vftable; /*0x5ca923*/
          v276 = 0xFFFFFFFF; /*0x5ca926*/
          sub_5C4480( /*0x5ca92a*/
            ParentMenu,
            0.0,
            v255,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v57 = (char *)stru_B39018; /*0x5ca92f*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca935*/
          v270.m_data = 0; /*0x5ca937*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca93e*/
          BSStringT_constr_str(&v269, v57); /*0x5ca943*/
          v58 = (char *)stru_B39018; /*0x5ca948*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca952*/
          v276 = 0xA; /*0x5ca957*/
          BSStringT_constr_str(&v268, v58); /*0x5ca95f*/
          v256 = (TileWindow *)ParentMenu[2].__vftable; /*0x5ca967*/
          v276 = 0xFFFFFFFF; /*0x5ca96a*/
          sub_5C4480( /*0x5ca96e*/
            ParentMenu,
            0.0,
            v256,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v59 = (char *)stru_B38F90; /*0x5ca973*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca979*/
          v270.m_data = 0; /*0x5ca97b*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca982*/
          BSStringT_constr_str(&v269, v59); /*0x5ca987*/
          v60 = (char *)stru_B38F90; /*0x5ca98c*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca996*/
          v276 = 0xB; /*0x5ca99b*/
          BSStringT_constr_str(&v268, v60); /*0x5ca9a3*/
          v257 = (TileWindow *)ParentMenu[2].__vftable; /*0x5ca9ab*/
          v276 = 0xFFFFFFFF; /*0x5ca9ae*/
          sub_5C4480( /*0x5ca9b2*/
            ParentMenu,
            0.0,
            v257,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v61 = (char *)stru_B39020; /*0x5ca9b7*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5ca9bd*/
          v270.m_data = 0; /*0x5ca9bf*/
          v275 = COERCE_FLOAT(&v269); /*0x5ca9c6*/
          BSStringT_constr_str(&v269, v61); /*0x5ca9cb*/
          v62 = (char *)stru_B39020; /*0x5ca9d0*/
          v274 = COERCE_FLOAT(&v268); /*0x5ca9da*/
          v276 = 0xC; /*0x5ca9df*/
          BSStringT_constr_str(&v268, v62); /*0x5ca9e7*/
          v258 = (TileWindow *)ParentMenu[2].__vftable; /*0x5ca9ef*/
          v276 = 0xFFFFFFFF; /*0x5ca9f2*/
          sub_5C4480( /*0x5ca9f6*/
            ParentMenu,
            0.0,
            v258,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v63 = (char *)stru_B39028; /*0x5ca9fb*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5caa01*/
          v270.m_data = 0; /*0x5caa03*/
          v275 = COERCE_FLOAT(&v269); /*0x5caa0a*/
          BSStringT_constr_str(&v269, v63); /*0x5caa0f*/
          v64 = (char *)stru_B39028; /*0x5caa14*/
          v274 = COERCE_FLOAT(&v268); /*0x5caa1e*/
          v276 = 0xD; /*0x5caa23*/
          BSStringT_constr_str(&v268, v64); /*0x5caa2b*/
          v259 = (TileWindow *)ParentMenu[2].__vftable; /*0x5caa33*/
          v276 = 0xFFFFFFFF; /*0x5caa36*/
          sub_5C4480( /*0x5caa3a*/
            ParentMenu,
            0.0,
            v259,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v65 = (char *)stru_B39030; /*0x5caa3f*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5caa45*/
          v270.m_data = 0; /*0x5caa47*/
          v275 = COERCE_FLOAT(&v269); /*0x5caa4e*/
          BSStringT_constr_str(&v269, v65); /*0x5caa53*/
          v66 = (char *)stru_B39030; /*0x5caa58*/
          v274 = COERCE_FLOAT(&v268); /*0x5caa62*/
          v276 = 0xE; /*0x5caa67*/
          BSStringT_constr_str(&v268, v66); /*0x5caa6f*/
          v260 = (TileWindow *)ParentMenu[2].__vftable; /*0x5caa77*/
          v276 = 0xFFFFFFFF; /*0x5caa7a*/
          sub_5C4480( /*0x5caa7e*/
            ParentMenu,
            0.0,
            v260,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v67 = (char *)stru_B39038; /*0x5caa83*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5caa89*/
          v270.m_data = 0; /*0x5caa8b*/
          v275 = COERCE_FLOAT(&v269); /*0x5caa92*/
          BSStringT_constr_str(&v269, v67); /*0x5caa97*/
          v68 = (char *)stru_B39038; /*0x5caa9c*/
          v274 = COERCE_FLOAT(&v268); /*0x5caaa6*/
          v276 = 0xF; /*0x5caaab*/
          BSStringT_constr_str(&v268, v68); /*0x5caab3*/
          v261 = (TileWindow *)ParentMenu[2].__vftable; /*0x5caabb*/
          v276 = 0xFFFFFFFF; /*0x5caabe*/
          sub_5C4480( /*0x5caac2*/
            ParentMenu,
            0.0,
            v261,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v69 = (char *)stru_B38FE8; /*0x5caac7*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5caacd*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5caace*/
          v275 = COERCE_FLOAT(&v269); /*0x5caad4*/
          BSStringT_constr_str(&v269, v69); /*0x5caad9*/
          v70 = (TileMenu *)sub_5C4340( /*0x5caae4*/
                              ParentMenu,
                              0.0,
                              (TileWindow *)ParentMenu[1].__vftable,
                              v269.m_data,
                              *(int *)&v269.m_dataLen,
                              (int)v270.m_data,
                              *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5caae9*/
          v270.m_data = 0; /*0x5caaeb*/
          ParentMenu[2].members.tile = v70; /*0x5caaf0*/
          v71 = (char *)stru_B39048; /*0x5caaf3*/
          v275 = COERCE_FLOAT(&v269); /*0x5caafb*/
          BSStringT_constr_str(&v269, v71); /*0x5cab00*/
          v72 = (char *)stru_B39040; /*0x5cab05*/
          v274 = COERCE_FLOAT(&v268); /*0x5cab0f*/
          v276 = 0x10; /*0x5cab14*/
          BSStringT_constr_str(&v268, v72); /*0x5cab1c*/
          tile = ParentMenu[2].members.tile; /*0x5cab24*/
          v276 = 0xFFFFFFFF; /*0x5cab27*/
          sub_5C4480( /*0x5cab2b*/
            ParentMenu,
            0.0,
            tile,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cab30*/
          v270.m_data = 0; /*0x5cab32*/
          v73 = (char *)stru_B39050; /*0x5cab34*/
          v275 = COERCE_FLOAT(&v269); /*0x5cab3f*/
          BSStringT_constr_str(&v269, v73); /*0x5cab44*/
          v74 = (char *)stru_B39050; /*0x5cab49*/
          v274 = COERCE_FLOAT(&v268); /*0x5cab53*/
          v276 = 0x11; /*0x5cab58*/
          BSStringT_constr_str(&v268, v74); /*0x5cab60*/
          v263 = ParentMenu[2].members.tile; /*0x5cab68*/
          v276 = 0xFFFFFFFF; /*0x5cab6b*/
          sub_5C4480( /*0x5cab6f*/
            ParentMenu,
            0.0,
            v263,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v75 = (char *)stru_B38F90; /*0x5cab74*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cab7a*/
          v270.m_data = 0; /*0x5cab7c*/
          v275 = COERCE_FLOAT(&v269); /*0x5cab83*/
          BSStringT_constr_str(&v269, v75); /*0x5cab88*/
          v76 = (char *)stru_B39320; /*0x5cab8d*/
          v274 = COERCE_FLOAT(&v268); /*0x5cab97*/
          v276 = 0x12; /*0x5cab9c*/
          BSStringT_constr_str(&v268, v76); /*0x5caba4*/
          v264 = ParentMenu[2].members.tile; /*0x5cabac*/
          v276 = 0xFFFFFFFF; /*0x5cabaf*/
          sub_5C4480( /*0x5cabb3*/
            ParentMenu,
            0.0,
            v264,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v77 = (char *)stru_B39058; /*0x5cabb8*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cabbe*/
          v270.m_data = 0; /*0x5cabc0*/
          v275 = COERCE_FLOAT(&v269); /*0x5cabc7*/
          BSStringT_constr_str(&v269, v77); /*0x5cabcc*/
          v78 = (char *)stru_B39058; /*0x5cabd1*/
          v274 = COERCE_FLOAT(&v268); /*0x5cabdb*/
          v276 = 0x13; /*0x5cabe0*/
          BSStringT_constr_str(&v268, v78); /*0x5cabe8*/
          v265 = ParentMenu[2].members.tile; /*0x5cabf0*/
          v276 = 0xFFFFFFFF; /*0x5cabf3*/
          sub_5C4480( /*0x5cabf7*/
            ParentMenu,
            0.0,
            v265,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v79 = (char *)stru_B39068; /*0x5cabfc*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cac02*/
          v270.m_data = 0; /*0x5cac04*/
          v275 = COERCE_FLOAT(&v269); /*0x5cac0b*/
          BSStringT_constr_str(&v269, v79); /*0x5cac10*/
          v80 = (char *)stru_B39060; /*0x5cac15*/
          v274 = COERCE_FLOAT(&v268); /*0x5cac1f*/
          v276 = 0x14; /*0x5cac24*/
          BSStringT_constr_str(&v268, v80); /*0x5cac2c*/
          v266 = ParentMenu[2].members.tile; /*0x5cac34*/
          v276 = 0xFFFFFFFF; /*0x5cac35*/
          sub_5C4480( /*0x5cac3b*/
            ParentMenu,
            0.0,
            v266,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v81 = (char *)stru_B39038; /*0x5cac40*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cac46*/
          v270.m_data = 0; /*0x5cac48*/
          v275 = COERCE_FLOAT(&v269); /*0x5cac4f*/
          BSStringT_constr_str(&v269, v81); /*0x5cac54*/
          v82 = (char *)stru_B39328; /*0x5cac59*/
          v274 = COERCE_FLOAT(&v268); /*0x5cac63*/
          v276 = 0x15; /*0x5cac68*/
          BSStringT_constr_str(&v268, v82); /*0x5cac70*/
          v267 = ParentMenu[2].members.tile; /*0x5cac78*/
          v276 = 0xFFFFFFFF; /*0x5cac7b*/
          sub_5C4480( /*0x5cac7f*/
            ParentMenu,
            0.0,
            v267,
            v268.m_data,
            *(int *)&v268.m_dataLen,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            (char)v270.m_data,
            v270.m_dataLen);
          v83 = (char *)stru_B39000; /*0x5cac84*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cac8a*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cac8b*/
          v275 = COERCE_FLOAT(&v269); /*0x5cac91*/
          BSStringT_constr_str(&v269, v83); /*0x5cac96*/
          v84 = sub_5C4340( /*0x5caca1*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5caca6*/
          v270.m_data = 0; /*0x5caca8*/
          *(_DWORD *)&v269.m_dataLen = 0x13; /*0x5cacaa*/
          ParentMenu[2].members.templateHead = (UInt32)v84; /*0x5cacaf*/
          v85 = (char *)stru_B39070; /*0x5cacb2*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cacba*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v85); /*0x5cacbf*/
          sub_5C93F0( /*0x5cacca*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v86 = (char *)stru_B39078; /*0x5caccf*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cacd5*/
          v270.m_data = 0; /*0x5cacd7*/
          *(_DWORD *)&v269.m_dataLen = 0x14; /*0x5cacd9*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cace0*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v86); /*0x5cace5*/
          sub_5C93F0( /*0x5cacf0*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v87 = (char *)stru_B39080; /*0x5cacf5*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cacfb*/
          v270.m_data = 0; /*0x5cacfd*/
          *(_DWORD *)&v269.m_dataLen = 0x15; /*0x5cacff*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cad06*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v87); /*0x5cad0b*/
          sub_5C93F0( /*0x5cad16*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v88 = (char *)stru_B39088; /*0x5cad1b*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cad21*/
          v270.m_data = 0; /*0x5cad23*/
          *(_DWORD *)&v269.m_dataLen = 0x16; /*0x5cad25*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cad2c*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v88); /*0x5cad31*/
          sub_5C93F0( /*0x5cad3c*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v89 = (char *)stru_B39090; /*0x5cad41*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cad47*/
          v270.m_data = 0; /*0x5cad49*/
          *(_DWORD *)&v269.m_dataLen = 0x17; /*0x5cad4b*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cad52*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v89); /*0x5cad57*/
          sub_5C93F0( /*0x5cad62*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v90 = (char *)stru_B39008; /*0x5cad67*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cad6d*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cad6e*/
          v275 = COERCE_FLOAT(&v269); /*0x5cad74*/
          BSStringT_constr_str(&v269, v90); /*0x5cad79*/
          v91 = sub_5C4340( /*0x5cad84*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cad89*/
          v270.m_data = 0; /*0x5cad8b*/
          *(_DWORD *)&v269.m_dataLen = 0; /*0x5cad8d*/
          ParentMenu[2].members.templateNext = (UInt32)v91; /*0x5cad92*/
          v92 = (char *)stru_B39098; /*0x5cad95*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cad9d*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v92); /*0x5cada2*/
          sub_5C93F0( /*0x5cadad*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v93 = (char *)stru_B390A0; /*0x5cadb2*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cadb8*/
          v270.m_data = 0; /*0x5cadba*/
          *(_DWORD *)&v269.m_dataLen = 1; /*0x5cadbc*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cadc3*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v93); /*0x5cadc8*/
          sub_5C93F0( /*0x5cadd3*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v94 = (char *)stru_B390A8; /*0x5cadd8*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cadde*/
          v270.m_data = 0; /*0x5cade0*/
          *(_DWORD *)&v269.m_dataLen = 2; /*0x5cade2*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cade9*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v94); /*0x5cadee*/
          sub_5C93F0( /*0x5cadf9*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v95 = (char *)stru_B39010; /*0x5cadfe*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cae04*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cae05*/
          v275 = COERCE_FLOAT(&v269); /*0x5cae0b*/
          BSStringT_constr_str(&v269, v95); /*0x5cae10*/
          v96 = sub_5C4340( /*0x5cae1b*/
                  ParentMenu,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v269.m_data,
                  *(int *)&v269.m_dataLen,
                  (int)v270.m_data,
                  *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cae20*/
          v270.m_data = 0; /*0x5cae22*/
          *(_DWORD *)&v269.m_dataLen = 3; /*0x5cae24*/
          ParentMenu[2].members.templateContextTile = (UInt32)v96; /*0x5cae29*/
          v97 = (char *)stru_B390B0; /*0x5cae2c*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cae34*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v97); /*0x5cae39*/
          sub_5C93F0( /*0x5cae44*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v98 = (char *)stru_B390B8; /*0x5cae49*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cae4f*/
          v270.m_data = 0; /*0x5cae51*/
          *(_DWORD *)&v269.m_dataLen = 4; /*0x5cae53*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cae5a*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v98); /*0x5cae5f*/
          sub_5C93F0( /*0x5cae6a*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v99 = (char *)stru_B390C0; /*0x5cae6f*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cae75*/
          v270.m_data = 0; /*0x5cae77*/
          *(_DWORD *)&v269.m_dataLen = 5; /*0x5cae79*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cae80*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v99); /*0x5cae85*/
          sub_5C93F0( /*0x5cae90*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v100 = (char *)stru_B390C8; /*0x5cae95*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cae9b*/
          v270.m_data = 0; /*0x5cae9d*/
          *(_DWORD *)&v269.m_dataLen = 6; /*0x5cae9f*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5caea6*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v100); /*0x5caeab*/
          sub_5C93F0( /*0x5caeb6*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v101 = (char *)stru_B390D0; /*0x5caebb*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5caec1*/
          v270.m_data = 0; /*0x5caec3*/
          *(_DWORD *)&v269.m_dataLen = 7; /*0x5caec5*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5caecc*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v101); /*0x5caed1*/
          sub_5C93F0( /*0x5caedc*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v102 = (char *)stru_B39018; /*0x5caee1*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5caee7*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5caee8*/
          v275 = COERCE_FLOAT(&v269); /*0x5caeee*/
          BSStringT_constr_str(&v269, v102); /*0x5caef3*/
          ParentMenu[2].members.unk14 = (UInt32)sub_5C4340( /*0x5caf03*/
                                                  ParentMenu,
                                                  0.0,
                                                  (TileWindow *)ParentMenu[1].__vftable,
                                                  v269.m_data,
                                                  *(int *)&v269.m_dataLen,
                                                  (int)v270.m_data,
                                                  *(int *)&v270.m_dataLen);
          v103 = (char *)stru_B390D8; /*0x5caf06*/
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5caf0c*/
          v270.m_data = 0; /*0x5caf0e*/
          *(_DWORD *)&v269.m_dataLen = 8; /*0x5caf10*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5caf17*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v103); /*0x5caf1c*/
          sub_5C93F0( /*0x5caf27*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v104 = (char *)stru_B390E0; /*0x5caf2c*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5caf32*/
          v270.m_data = 0; /*0x5caf34*/
          *(_DWORD *)&v269.m_dataLen = 9; /*0x5caf36*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5caf3d*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v104); /*0x5caf42*/
          sub_5C93F0( /*0x5caf4d*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v105 = (char *)stru_B390E8; /*0x5caf52*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5caf58*/
          v270.m_data = 0; /*0x5caf5a*/
          *(_DWORD *)&v269.m_dataLen = 0xA; /*0x5caf5c*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5caf63*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v105); /*0x5caf68*/
          sub_5C93F0( /*0x5caf73*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v106 = (char *)stru_B390F0; /*0x5caf78*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5caf7e*/
          v270.m_data = 0; /*0x5caf80*/
          *(_DWORD *)&v269.m_dataLen = 0xB; /*0x5caf82*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5caf89*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v106); /*0x5caf8e*/
          sub_5C93F0( /*0x5caf99*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v107 = (char *)stru_B390F8; /*0x5caf9e*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cafa4*/
          v270.m_data = 0; /*0x5cafa6*/
          *(_DWORD *)&v269.m_dataLen = 0xC; /*0x5cafa8*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cafaf*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v107); /*0x5cafb4*/
          sub_5C93F0( /*0x5cafbf*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v108 = (char *)stru_B39100; /*0x5cafc4*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cafca*/
          v270.m_data = 0; /*0x5cafcc*/
          *(_DWORD *)&v269.m_dataLen = 0xD; /*0x5cafce*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cafd5*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v108); /*0x5cafda*/
          sub_5C93F0( /*0x5cafe5*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cafea*/
          v270.m_data = 0; /*0x5cafec*/
          *(_DWORD *)&v269.m_dataLen = 0xE; /*0x5cafee*/
          v109 = (char *)stru_B39108; /*0x5caff0*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5caffb*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v109); /*0x5cb000*/
          sub_5C93F0( /*0x5cb00b*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v110 = (char *)stru_B38F90; /*0x5cb010*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb016*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb017*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb01d*/
          BSStringT_constr_str(&v269, v110); /*0x5cb022*/
          v111 = sub_5C4340( /*0x5cb02d*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb032*/
          v270.m_data = 0; /*0x5cb034*/
          *(_DWORD *)&v269.m_dataLen = 0xF; /*0x5cb036*/
          ParentMenu[2].members.unk18 = (UInt32)v111; /*0x5cb03b*/
          v112 = (char *)stru_B39110; /*0x5cb03e*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb046*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v112); /*0x5cb04b*/
          sub_5C93F0( /*0x5cb056*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v113 = (char *)stru_B39118; /*0x5cb05b*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb061*/
          v270.m_data = 0; /*0x5cb063*/
          *(_DWORD *)&v269.m_dataLen = 0x10; /*0x5cb065*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb06c*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v113); /*0x5cb071*/
          sub_5C93F0( /*0x5cb07c*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v114 = (char *)stru_B39120; /*0x5cb081*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb087*/
          v270.m_data = 0; /*0x5cb089*/
          *(_DWORD *)&v269.m_dataLen = 0x11; /*0x5cb08b*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb092*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v114); /*0x5cb097*/
          sub_5C93F0( /*0x5cb0a2*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v115 = (char *)stru_B39128; /*0x5cb0a7*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb0ad*/
          v270.m_data = 0; /*0x5cb0af*/
          *(_DWORD *)&v269.m_dataLen = 0x12; /*0x5cb0b1*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb0b8*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v115); /*0x5cb0bd*/
          sub_5C93F0( /*0x5cb0c8*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v116 = (char *)stru_B39020; /*0x5cb0cd*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb0d3*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb0d4*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb0da*/
          BSStringT_constr_str(&v269, v116); /*0x5cb0df*/
          v117 = sub_5C4340( /*0x5cb0ea*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb0ef*/
          v270.m_data = 0; /*0x5cb0f1*/
          *(_DWORD *)&v269.m_dataLen = 0x18; /*0x5cb0f3*/
          ParentMenu[2].members.ownsTemplates = (UInt32)v117; /*0x5cb0f8*/
          v118 = (char *)stru_B39130; /*0x5cb0fb*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb103*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v118); /*0x5cb108*/
          sub_5C93F0( /*0x5cb113*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.ownsTemplates,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v119 = (char *)stru_B39138; /*0x5cb118*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb11e*/
          v270.m_data = 0; /*0x5cb120*/
          *(_DWORD *)&v269.m_dataLen = 0x19; /*0x5cb122*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb129*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v119); /*0x5cb12e*/
          sub_5C93F0( /*0x5cb139*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.ownsTemplates,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v120 = (char *)stru_B39140; /*0x5cb13e*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb144*/
          v270.m_data = 0; /*0x5cb146*/
          *(_DWORD *)&v269.m_dataLen = 0x1A; /*0x5cb148*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb14f*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v120); /*0x5cb154*/
          sub_5C93F0( /*0x5cb15f*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.ownsTemplates,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v121 = (char *)stru_B39028; /*0x5cb164*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb16a*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb16b*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb171*/
          BSStringT_constr_str(&v269, v121); /*0x5cb176*/
          v122 = sub_5C4340( /*0x5cb181*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb186*/
          v270.m_data = 0; /*0x5cb188*/
          *(_DWORD *)&v269.m_dataLen = 0x1B; /*0x5cb18a*/
          ParentMenu[2].members.id = (UInt32)v122; /*0x5cb18f*/
          v123 = (char *)stru_B39148; /*0x5cb192*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb19a*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v123); /*0x5cb19f*/
          sub_5C93F0( /*0x5cb1aa*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v124 = (char *)stru_B39150; /*0x5cb1af*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb1b5*/
          v270.m_data = 0; /*0x5cb1b7*/
          *(_DWORD *)&v269.m_dataLen = 0x1C; /*0x5cb1b9*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb1c0*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v124); /*0x5cb1c5*/
          sub_5C93F0( /*0x5cb1d0*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v125 = (char *)stru_B39158; /*0x5cb1d5*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb1db*/
          v270.m_data = 0; /*0x5cb1dd*/
          *(_DWORD *)&v269.m_dataLen = 0x1D; /*0x5cb1df*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb1e6*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v125); /*0x5cb1eb*/
          sub_5C93F0( /*0x5cb1f6*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v126 = (char *)stru_B39160; /*0x5cb1fb*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb201*/
          v270.m_data = 0; /*0x5cb203*/
          *(_DWORD *)&v269.m_dataLen = 0x1E; /*0x5cb205*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb20c*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v126); /*0x5cb211*/
          sub_5C93F0( /*0x5cb21c*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v127 = (char *)stru_B39030; /*0x5cb221*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb227*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb228*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb22e*/
          BSStringT_constr_str(&v269, v127); /*0x5cb233*/
          v128 = sub_5C4340( /*0x5cb23e*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb243*/
          v270.m_data = 0; /*0x5cb245*/
          *(_DWORD *)&v269.m_dataLen = 0x1F; /*0x5cb247*/
          ParentMenu[2].members.fadeState = (UInt32)v128; /*0x5cb24c*/
          v129 = (char *)stru_B39168; /*0x5cb24f*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb257*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v129); /*0x5cb25c*/
          sub_5C93F0( /*0x5cb267*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v130 = (char *)stru_B39170; /*0x5cb26c*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb272*/
          v270.m_data = 0; /*0x5cb274*/
          *(_DWORD *)&v269.m_dataLen = 0x20; /*0x5cb276*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb27d*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v130); /*0x5cb282*/
          sub_5C93F0( /*0x5cb28d*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v131 = (char *)stru_B39178; /*0x5cb292*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb298*/
          v270.m_data = 0; /*0x5cb29a*/
          *(_DWORD *)&v269.m_dataLen = 0x21; /*0x5cb29c*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb2a3*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v131); /*0x5cb2a8*/
          sub_5C93F0( /*0x5cb2b3*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v132 = (char *)stru_B39180; /*0x5cb2b8*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb2be*/
          v270.m_data = 0; /*0x5cb2c0*/
          *(_DWORD *)&v269.m_dataLen = 0x22; /*0x5cb2c2*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb2c9*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v132); /*0x5cb2ce*/
          sub_5C93F0( /*0x5cb2d9*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v133 = (char *)stru_B39188; /*0x5cb2de*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb2e4*/
          v270.m_data = 0; /*0x5cb2e6*/
          *(_DWORD *)&v269.m_dataLen = 0x23; /*0x5cb2e8*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb2ef*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v133); /*0x5cb2f4*/
          sub_5C93F0( /*0x5cb2ff*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v134 = (char *)stru_B39190; /*0x5cb304*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb30a*/
          v270.m_data = 0; /*0x5cb30c*/
          *(_DWORD *)&v269.m_dataLen = 0x24; /*0x5cb30e*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb315*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v134); /*0x5cb31a*/
          sub_5C93F0( /*0x5cb325*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v135 = (char *)stru_B39198; /*0x5cb32a*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb330*/
          v270.m_data = 0; /*0x5cb332*/
          *(_DWORD *)&v269.m_dataLen = 0x25; /*0x5cb334*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb33b*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v135); /*0x5cb340*/
          sub_5C93F0( /*0x5cb34b*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v136 = (char *)stru_B391A0; /*0x5cb350*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb356*/
          v270.m_data = 0; /*0x5cb358*/
          *(_DWORD *)&v269.m_dataLen = 0x26; /*0x5cb35a*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb361*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v136); /*0x5cb366*/
          sub_5C93F0( /*0x5cb371*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v137 = (char *)stru_B391A8; /*0x5cb376*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb37c*/
          v270.m_data = 0; /*0x5cb37e*/
          *(_DWORD *)&v269.m_dataLen = 0x27; /*0x5cb380*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb387*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v137); /*0x5cb38c*/
          sub_5C93F0( /*0x5cb397*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb39c*/
          v270.m_data = 0; /*0x5cb39e*/
          v138 = (char *)stru_B391B0; /*0x5cb3a0*/
          *(_DWORD *)&v269.m_dataLen = 0x28; /*0x5cb3a6*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb3ad*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v138); /*0x5cb3b2*/
          sub_5C93F0( /*0x5cb3bd*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[2].members.fadeState,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v139 = (char *)stru_B39038; /*0x5cb3c2*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb3c8*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb3c9*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb3cf*/
          BSStringT_constr_str(&v269, v139); /*0x5cb3d4*/
          v140 = sub_5C4340( /*0x5cb3df*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb3e4*/
          v270.m_data = 0; /*0x5cb3e6*/
          *(_DWORD *)&v269.m_dataLen = 0x29; /*0x5cb3e8*/
          ParentMenu[3].__vftable = (MenuVtbl *)v140; /*0x5cb3ed*/
          v141 = (char *)stru_B391B8; /*0x5cb3f0*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb3f8*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v141); /*0x5cb3fd*/
          sub_5C93F0( /*0x5cb408*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v142 = (char *)stru_B391C0; /*0x5cb40d*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb413*/
          v270.m_data = 0; /*0x5cb415*/
          *(_DWORD *)&v269.m_dataLen = 0x2A; /*0x5cb417*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb41e*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v142); /*0x5cb423*/
          sub_5C93F0( /*0x5cb42e*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v143 = (char *)stru_B391C8; /*0x5cb433*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb439*/
          v270.m_data = 0; /*0x5cb43b*/
          *(_DWORD *)&v269.m_dataLen = 0x2B; /*0x5cb43d*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb444*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v143); /*0x5cb449*/
          sub_5C93F0( /*0x5cb454*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v144 = (char *)stru_B391D0; /*0x5cb459*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb45f*/
          v270.m_data = 0; /*0x5cb461*/
          *(_DWORD *)&v269.m_dataLen = 0x2C; /*0x5cb463*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb46a*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v144); /*0x5cb46f*/
          sub_5C93F0( /*0x5cb47a*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb47f*/
          v270.m_data = 0; /*0x5cb481*/
          *(_DWORD *)&v269.m_dataLen = 0x2D; /*0x5cb483*/
          v145 = (char *)stru_B391D8; /*0x5cb48a*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb490*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v145); /*0x5cb495*/
          sub_5C93F0( /*0x5cb4a0*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v146 = (char *)stru_B391E0; /*0x5cb4a5*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb4ab*/
          v270.m_data = 0; /*0x5cb4ad*/
          *(_DWORD *)&v269.m_dataLen = 0x2E; /*0x5cb4af*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb4b6*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v146); /*0x5cb4bb*/
          sub_5C93F0( /*0x5cb4c6*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v147 = (char *)stru_B391E8; /*0x5cb4cb*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb4d1*/
          v270.m_data = 0; /*0x5cb4d3*/
          *(_DWORD *)&v269.m_dataLen = 0x2F; /*0x5cb4d5*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb4dc*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v147); /*0x5cb4e1*/
          sub_5C93F0( /*0x5cb4ec*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v148 = (char *)stru_B391F0; /*0x5cb4f1*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb4f7*/
          v270.m_data = 0; /*0x5cb4f9*/
          *(_DWORD *)&v269.m_dataLen = 0x30; /*0x5cb4fb*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb502*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v148); /*0x5cb507*/
          sub_5C93F0( /*0x5cb512*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v149 = (char *)stru_B391F8; /*0x5cb517*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb51d*/
          v270.m_data = 0; /*0x5cb51f*/
          *(_DWORD *)&v269.m_dataLen = 0x31; /*0x5cb521*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb528*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v149); /*0x5cb52d*/
          sub_5C93F0( /*0x5cb538*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v150 = (char *)stru_B39200; /*0x5cb53d*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb543*/
          v270.m_data = 0; /*0x5cb545*/
          *(_DWORD *)&v269.m_dataLen = 0x32; /*0x5cb547*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb54e*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v150); /*0x5cb553*/
          sub_5C93F0( /*0x5cb55e*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v151 = (char *)stru_B39208; /*0x5cb563*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb569*/
          v270.m_data = 0; /*0x5cb56b*/
          *(_DWORD *)&v269.m_dataLen = 0x33; /*0x5cb56d*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb574*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v151); /*0x5cb579*/
          sub_5C93F0( /*0x5cb584*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v152 = (char *)stru_B39210; /*0x5cb589*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb58f*/
          v270.m_data = 0; /*0x5cb591*/
          *(_DWORD *)&v269.m_dataLen = 0x34; /*0x5cb593*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb59a*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v152); /*0x5cb59f*/
          sub_5C93F0( /*0x5cb5aa*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v153 = (char *)stru_B39218; /*0x5cb5af*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb5b5*/
          v270.m_data = 0; /*0x5cb5b7*/
          *(_DWORD *)&v269.m_dataLen = 0x35; /*0x5cb5b9*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb5c0*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v153); /*0x5cb5c5*/
          sub_5C93F0( /*0x5cb5d0*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v154 = (char *)stru_B39220; /*0x5cb5d5*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb5db*/
          v270.m_data = 0; /*0x5cb5dd*/
          *(_DWORD *)&v269.m_dataLen = 0x36; /*0x5cb5df*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb5e6*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v154); /*0x5cb5eb*/
          sub_5C93F0( /*0x5cb5f6*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v155 = (char *)stru_B39040; /*0x5cb5fb*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb601*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb602*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb608*/
          BSStringT_constr_str(&v269, v155); /*0x5cb60d*/
          v156 = (TileMenu *)sub_5C4340( /*0x5cb618*/
                               ParentMenu,
                               0.0,
                               (TileWindow *)ParentMenu[1].__vftable,
                               v269.m_data,
                               *(int *)&v269.m_dataLen,
                               (int)v270.m_data,
                               *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb61d*/
          v270.m_data = (char *)1; /*0x5cb61f*/
          *(_DWORD *)&v269.m_dataLen = 0x1C; /*0x5cb621*/
          ParentMenu[3].members.tile = v156; /*0x5cb626*/
          v157 = (char *)stru_B39228; /*0x5cb629*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb631*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v157); /*0x5cb636*/
          sub_5C93F0( /*0x5cb641*/
            ParentMenu,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v158 = (char *)stru_B39230; /*0x5cb646*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb64c*/
          v270.m_data = (char *)1; /*0x5cb64e*/
          *(_DWORD *)&v269.m_dataLen = 0x1D; /*0x5cb650*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb657*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v158); /*0x5cb65c*/
          sub_5C93F0( /*0x5cb667*/
            ParentMenu,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v159 = (char *)stru_B39238; /*0x5cb66c*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb672*/
          v270.m_data = (char *)1; /*0x5cb674*/
          *(_DWORD *)&v269.m_dataLen = 0x1E; /*0x5cb676*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb67d*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v159); /*0x5cb682*/
          sub_5C93F0( /*0x5cb68d*/
            ParentMenu,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v160 = (char *)stru_B39240; /*0x5cb692*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb698*/
          v270.m_data = (char *)1; /*0x5cb69a*/
          *(_DWORD *)&v269.m_dataLen = 0x1F; /*0x5cb69c*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb6a3*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v160); /*0x5cb6a8*/
          sub_5C93F0( /*0x5cb6b3*/
            ParentMenu,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v161 = (char *)stru_B39248; /*0x5cb6b8*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb6be*/
          v270.m_data = (char *)1; /*0x5cb6c0*/
          *(_DWORD *)&v269.m_dataLen = 6; /*0x5cb6c2*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb6c9*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v161); /*0x5cb6ce*/
          sub_5C93F0( /*0x5cb6d9*/
            ParentMenu,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v162 = (char *)stru_B39050; /*0x5cb6de*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb6e4*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb6e5*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb6eb*/
          BSStringT_constr_str(&v269, v162); /*0x5cb6f0*/
          v163 = sub_5C4340( /*0x5cb6fb*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb700*/
          v270.m_data = (char *)1; /*0x5cb702*/
          *(_DWORD *)&v269.m_dataLen = 0; /*0x5cb704*/
          ParentMenu[3].members.templateHead = (UInt32)v163; /*0x5cb709*/
          v164 = (char *)stru_B39250; /*0x5cb70f*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb717*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v164); /*0x5cb71c*/
          sub_5C93F0( /*0x5cb72a*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v165 = (char *)stru_B39258; /*0x5cb72f*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb735*/
          v270.m_data = (char *)1; /*0x5cb737*/
          *(_DWORD *)&v269.m_dataLen = 1; /*0x5cb739*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb740*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v165); /*0x5cb745*/
          sub_5C93F0( /*0x5cb753*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb758*/
          v166 = (char *)stru_B39260; /*0x5cb75a*/
          v270.m_data = (char *)1; /*0x5cb760*/
          *(_DWORD *)&v269.m_dataLen = 2; /*0x5cb762*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb769*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v166); /*0x5cb76e*/
          sub_5C93F0( /*0x5cb77c*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v167 = (char *)stru_B39268; /*0x5cb781*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb787*/
          v270.m_data = (char *)1; /*0x5cb789*/
          *(_DWORD *)&v269.m_dataLen = 3; /*0x5cb78b*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb792*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v167); /*0x5cb797*/
          sub_5C93F0( /*0x5cb7a5*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v168 = (char *)stru_B39270; /*0x5cb7aa*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb7b0*/
          v270.m_data = (char *)1; /*0x5cb7b2*/
          *(_DWORD *)&v269.m_dataLen = 4; /*0x5cb7b4*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb7bb*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v168); /*0x5cb7c0*/
          sub_5C93F0( /*0x5cb7ce*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v169 = (char *)stru_B39278; /*0x5cb7d3*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb7d9*/
          v270.m_data = (char *)1; /*0x5cb7db*/
          *(_DWORD *)&v269.m_dataLen = 5; /*0x5cb7dd*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb7e4*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v169); /*0x5cb7e9*/
          sub_5C93F0( /*0x5cb7f7*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateHead,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v170 = (char *)stru_B39320; /*0x5cb7fc*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb802*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb803*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb809*/
          BSStringT_constr_str(&v269, v170); /*0x5cb80e*/
          v171 = sub_5C4340( /*0x5cb819*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb81e*/
          v270.m_data = (char *)1; /*0x5cb820*/
          *(_DWORD *)&v269.m_dataLen = 7; /*0x5cb822*/
          ParentMenu[3].members.templateNext = (UInt32)v171; /*0x5cb827*/
          v172 = (char *)stru_B39280; /*0x5cb82d*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb835*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v172); /*0x5cb83a*/
          sub_5C93F0( /*0x5cb848*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb84d*/
          v270.m_data = (char *)1; /*0x5cb84f*/
          *(_DWORD *)&v269.m_dataLen = 8; /*0x5cb851*/
          v173 = (char *)stru_B39288; /*0x5cb856*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb85e*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v173); /*0x5cb863*/
          sub_5C93F0( /*0x5cb871*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v174 = (char *)stru_B39290; /*0x5cb876*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb87c*/
          v270.m_data = (char *)1; /*0x5cb87e*/
          *(_DWORD *)&v269.m_dataLen = 0x10; /*0x5cb880*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb887*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v174); /*0x5cb88c*/
          sub_5C93F0( /*0x5cb89a*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v175 = (char *)stru_B39298; /*0x5cb89f*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb8a5*/
          v270.m_data = (char *)1; /*0x5cb8a7*/
          *(_DWORD *)&v269.m_dataLen = 0x11; /*0x5cb8a9*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb8b0*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v175); /*0x5cb8b5*/
          sub_5C93F0( /*0x5cb8c3*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v176 = (char *)stru_B392A0; /*0x5cb8c8*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb8ce*/
          v270.m_data = (char *)1; /*0x5cb8d0*/
          *(_DWORD *)&v269.m_dataLen = 0x12; /*0x5cb8d2*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb8d9*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v176); /*0x5cb8de*/
          sub_5C93F0( /*0x5cb8ec*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v177 = (char *)stru_B392A8; /*0x5cb8f1*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb8f7*/
          v270.m_data = (char *)1; /*0x5cb8f9*/
          *(_DWORD *)&v269.m_dataLen = 0x13; /*0x5cb8fb*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb902*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v177); /*0x5cb907*/
          sub_5C93F0( /*0x5cb915*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateNext,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v178 = (char *)stru_B39058; /*0x5cb91a*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cb920*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cb921*/
          v275 = COERCE_FLOAT(&v269); /*0x5cb927*/
          BSStringT_constr_str(&v269, v178); /*0x5cb92c*/
          v179 = sub_5C4340( /*0x5cb937*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cb93c*/
          v270.m_data = (char *)1; /*0x5cb93e*/
          *(_DWORD *)&v269.m_dataLen = 9; /*0x5cb940*/
          ParentMenu[3].members.templateContextTile = (UInt32)v179; /*0x5cb945*/
          v180 = (char *)stru_B392C0; /*0x5cb94b*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb953*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v180); /*0x5cb958*/
          sub_5C93F0( /*0x5cb966*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v181 = (char *)stru_B392C8; /*0x5cb96b*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb971*/
          v270.m_data = (char *)1; /*0x5cb973*/
          *(_DWORD *)&v269.m_dataLen = 0xA; /*0x5cb975*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb97c*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v181); /*0x5cb981*/
          sub_5C93F0( /*0x5cb98f*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v182 = (char *)stru_B392D0; /*0x5cb994*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb99a*/
          v270.m_data = (char *)1; /*0x5cb99c*/
          *(_DWORD *)&v269.m_dataLen = 0xB; /*0x5cb99e*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb9a5*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v182); /*0x5cb9aa*/
          sub_5C93F0( /*0x5cb9b8*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v183 = (char *)stru_B392D8; /*0x5cb9bd*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb9c3*/
          v270.m_data = (char *)1; /*0x5cb9c5*/
          *(_DWORD *)&v269.m_dataLen = 0xC; /*0x5cb9c7*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb9ce*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v183); /*0x5cb9d3*/
          sub_5C93F0( /*0x5cb9e1*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v184 = (char *)stru_B392E0; /*0x5cb9e6*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cb9ec*/
          v270.m_data = (char *)1; /*0x5cb9ee*/
          *(_DWORD *)&v269.m_dataLen = 0xD; /*0x5cb9f0*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cb9f7*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v184); /*0x5cb9fc*/
          sub_5C93F0( /*0x5cba0a*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v185 = (char *)stru_B392E8; /*0x5cba0f*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cba15*/
          v270.m_data = (char *)1; /*0x5cba17*/
          *(_DWORD *)&v269.m_dataLen = 0xE; /*0x5cba19*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cba20*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v185); /*0x5cba25*/
          sub_5C93F0( /*0x5cba33*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v186 = (char *)stru_B392F0; /*0x5cba38*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cba3e*/
          v270.m_data = (char *)1; /*0x5cba40*/
          *(_DWORD *)&v269.m_dataLen = 0xF; /*0x5cba42*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cba49*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v186); /*0x5cba4e*/
          sub_5C93F0( /*0x5cba5c*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.templateContextTile,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v187 = (char *)stru_B39060; /*0x5cba61*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cba67*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cba68*/
          v275 = COERCE_FLOAT(&v269); /*0x5cba6e*/
          BSStringT_constr_str(&v269, v187); /*0x5cba73*/
          v188 = sub_5C4340( /*0x5cba7e*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cba83*/
          v270.m_data = (char *)1; /*0x5cba85*/
          *(_DWORD *)&v269.m_dataLen = 0x16; /*0x5cba87*/
          ParentMenu[3].members.unk14 = (UInt32)v188; /*0x5cba8c*/
          v189 = (char *)stru_B392F8; /*0x5cba92*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cba9a*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v189); /*0x5cba9f*/
          sub_5C93F0( /*0x5cbaad*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v190 = (char *)stru_B39300; /*0x5cbab2*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cbab8*/
          v270.m_data = (char *)1; /*0x5cbaba*/
          *(_DWORD *)&v269.m_dataLen = 0x17; /*0x5cbabc*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbac3*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v190); /*0x5cbac8*/
          sub_5C93F0( /*0x5cbad6*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v191 = (char *)stru_B39308; /*0x5cbadb*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cbae1*/
          v270.m_data = (char *)1; /*0x5cbae3*/
          *(_DWORD *)&v269.m_dataLen = 0x18; /*0x5cbae5*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbaec*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v191); /*0x5cbaf1*/
          sub_5C93F0( /*0x5cbaff*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk14,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v192 = (char *)stru_B39328; /*0x5cbb04*/
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF; /*0x5cbb0a*/
          v270.m_data = (char *)0xFFFFFFFF; /*0x5cbb0b*/
          v275 = COERCE_FLOAT(&v269); /*0x5cbb11*/
          BSStringT_constr_str(&v269, v192); /*0x5cbb16*/
          v193 = sub_5C4340( /*0x5cbb21*/
                   ParentMenu,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v269.m_data,
                   *(int *)&v269.m_dataLen,
                   (int)v270.m_data,
                   *(int *)&v270.m_dataLen);
          *(_DWORD *)&v270.m_dataLen = 1; /*0x5cbb26*/
          v270.m_data = (char *)1; /*0x5cbb28*/
          *(_DWORD *)&v269.m_dataLen = 0x19; /*0x5cbb2a*/
          ParentMenu[3].members.unk18 = (UInt32)v193; /*0x5cbb2f*/
          v194 = (char *)stru_B39310; /*0x5cbb35*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbb3d*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v194); /*0x5cbb42*/
          sub_5C93F0( /*0x5cbb50*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v195 = (char *)stru_B39318; /*0x5cbb55*/
          *(_DWORD *)&v270.m_dataLen = 0; /*0x5cbb5b*/
          v270.m_data = (char *)1; /*0x5cbb5d*/
          *(_DWORD *)&v269.m_dataLen = 0x1A; /*0x5cbb5f*/
          v275 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbb66*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v195); /*0x5cbb6b*/
          sub_5C93F0( /*0x5cbb79*/
            ParentMenu,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk18,
            *(char **)&v268.m_dataLen,
            (int)v269.m_data,
            *(int *)&v269.m_dataLen,
            (int)v270.m_data,
            v270.m_dataLen);
          v196 = (char *)g_gameSetting_sMain; /*0x5cbb7e*/
          *(_DWORD *)&v270.m_dataLen = 0xFA8; /*0x5cbb84*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5cbb8e*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v196); /*0x5cbb93*/
          v197 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cbb9a*/
                             ParentMenu,
                             *(unsigned __int8 **)&v269.m_dataLen,
                             (int)v270.m_data);
          *(float *)&v270.m_dataLen = Tile_GetFloat(v197, *(int *)&v270.m_dataLen); /*0x5cbbab*/
          Tile_SetFloat(v272, (_DWORD *)0xFAE, *(float *)&v270.m_dataLen); /*0x5cbbb3*/
          v198 = (char *)g_gameSetting_sMain; /*0x5cbbb8*/
          *(_DWORD *)&v270.m_dataLen = 0xFD0; /*0x5cbbbd*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5cbbc7*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v198); /*0x5cbbcc*/
          v199 = (_DWORD *)RaceSexMenu_GetCategoryTileByName( /*0x5cbbd3*/
                             ParentMenu,
                             *(unsigned __int8 **)&v269.m_dataLen,
                             (int)v270.m_data);
          *(float *)&v270.m_dataLen = Tile_GetFloat(v199, *(int *)&v270.m_dataLen); /*0x5cbbe4*/
          Tile_SetFloat(v272, (_DWORD *)0xFAF, *(float *)&v270.m_dataLen); /*0x5cbbec*/
          if ( !byte_B14500 /*0x5cbc28*/
            && (v200 = TESObjectREFR_GetName((TESObjectREFR *)reference),
                _mbscmp(&unk_B3B4D0, (const unsigned __int8 *)v200))
            && (v201 = TESObjectREFR_GetName((TESObjectREFR *)reference),
                _mbscmp("Bendu Olo", (const unsigned __int8 *)v201)) )
          {
            *(_DWORD *)&v270.m_dataLen = TESObjectREFR_GetName((TESObjectREFR *)reference); /*0x5cbc3f*/
          }
          else
          {
            Name = TESObjectREFR_GetName((TESObjectREFR *)reference); /*0x5cbc48*/
            v203 = &unk_B3B4D0; /*0x5cbc4d*/
            do /*0x5cbc5e*/
            {
              v204 = *Name; /*0x5cbc52*/
              *v203++ = *Name++; /*0x5cbc54*/
            }
            while ( v204 ); /*0x5cbc5e*/
            *(_DWORD *)&v270.m_dataLen = stru_B39440; /*0x5cbc66*/
          }
          Tile_SetString((_DWORD *)ParentMenu[1].members.templateHead, (_DWORD *)0xFDE, *(char **)&v270.m_dataLen); /*0x5cbc6f*/
          Tile_SetFloat((Tile *)ParentMenu[1].members.templateHead, (_DWORD *)0xFF0, fConstant_2); /*0x5cbc86*/
          RaceSexMenu_SynchronizeControlsFromPlayer((float *)ParentMenu, 1); /*0x5cbc8f*/
          if ( byte_B14500 ) /*0x5cbc94*/
          {
            sub_5C6EA0(ParentMenu); /*0x5cbc9f*/
            byte_B14500 = 0; /*0x5cbca4*/
          }
          else
          {
            v205 = sub_51FE90((_BYTE *)v14->member.hair); /*0x5cbcb6*/
            v206 = (char *)stru_B39330; /*0x5cbcbd*/
            if ( v205 ) /*0x5cbcc3*/
            {
              *(_DWORD *)&v270.m_dataLen = 1; /*0x5cbd67*/
              v270.m_data = (char *)0xFBB; /*0x5cbd69*/
              v275 = COERCE_FLOAT(&v269); /*0x5cbd73*/
              BSStringT_constr_str(&v269, v206); /*0x5cbd78*/
              v214 = (char *)g_gameSetting_sHair; /*0x5cbd7d*/
              v274 = COERCE_FLOAT(&v268); /*0x5cbd87*/
              v276 = 0x18; /*0x5cbd8c*/
              BSStringT_constr_str(&v268, v214); /*0x5cbd94*/
              v276 = 0xFFFFFFFF; /*0x5cbd9b*/
              v215 = (Tile *)RaceSexMenu_FindControlTile( /*0x5cbd9f*/
                               ParentMenu,
                               v268.m_data,
                               *(int *)&v268.m_dataLen,
                               (unsigned __int8 *)v269.m_data,
                               *(int *)&v269.m_dataLen);
              sub_578ED0(v215, (Tile *)v270.m_data, *(signed int *)&v270.m_dataLen); /*0x5cbda6*/
              v216 = (char *)stru_B39330; /*0x5cbdab*/
              *(_DWORD *)&v270.m_dataLen = word_A36430; /*0x5cbdb1*/
              v270.m_data = (char *)0xFB4; /*0x5cbdb6*/
              v275 = COERCE_FLOAT(&v269); /*0x5cbdc0*/
              BSStringT_constr_str(&v269, v216); /*0x5cbdc5*/
              v217 = (char *)g_gameSetting_sHair; /*0x5cbdca*/
              v274 = COERCE_FLOAT(&v268); /*0x5cbdd4*/
              v276 = 0x19; /*0x5cbdd9*/
              BSStringT_constr_str(&v268, v217); /*0x5cbde1*/
              v276 = 0xFFFFFFFF; /*0x5cbde8*/
              v218 = (_DWORD *)RaceSexMenu_FindControlTile( /*0x5cbdec*/
                                 ParentMenu,
                                 v268.m_data,
                                 *(int *)&v268.m_dataLen,
                                 (unsigned __int8 *)v269.m_data,
                                 *(int *)&v269.m_dataLen);
              Tile_SetString(v218, v270.m_data, *(char **)&v270.m_dataLen); /*0x5cbdf3*/
              v219 = (char *)stru_B38FC0; /*0x5cbdf8*/
              *(_DWORD *)&v270.m_dataLen = 1; /*0x5cbdfe*/
              v270.m_data = (char *)0xFBB; /*0x5cbe00*/
              v275 = COERCE_FLOAT(&v269); /*0x5cbe0a*/
              BSStringT_constr_str(&v269, v219); /*0x5cbe0f*/
              v220 = (char *)g_gameSetting_sHair; /*0x5cbe14*/
              v274 = COERCE_FLOAT(&v268); /*0x5cbe1e*/
              v276 = 0x1A; /*0x5cbe23*/
              BSStringT_constr_str(&v268, v220); /*0x5cbe2b*/
              v276 = 0xFFFFFFFF; /*0x5cbe32*/
              v221 = (Tile *)RaceSexMenu_FindControlTile( /*0x5cbe36*/
                               ParentMenu,
                               v268.m_data,
                               *(int *)&v268.m_dataLen,
                               (unsigned __int8 *)v269.m_data,
                               *(int *)&v269.m_dataLen);
              sub_578ED0(v221, (Tile *)v270.m_data, *(signed int *)&v270.m_dataLen); /*0x5cbe3d*/
              v222 = (char *)stru_B38FC8; /*0x5cbe42*/
              *(_DWORD *)&v270.m_dataLen = 1; /*0x5cbe48*/
              v270.m_data = (char *)0xFBB; /*0x5cbe4a*/
              v275 = COERCE_FLOAT(&v269); /*0x5cbe54*/
              BSStringT_constr_str(&v269, v222); /*0x5cbe59*/
              v223 = (char *)g_gameSetting_sHair; /*0x5cbe5e*/
              v274 = COERCE_FLOAT(&v268); /*0x5cbe68*/
              v276 = 0x1B; /*0x5cbe6d*/
              BSStringT_constr_str(&v268, v223); /*0x5cbe75*/
              v276 = 0xFFFFFFFF; /*0x5cbe7c*/
              v224 = (Tile *)RaceSexMenu_FindControlTile( /*0x5cbe80*/
                               ParentMenu,
                               v268.m_data,
                               *(int *)&v268.m_dataLen,
                               (unsigned __int8 *)v269.m_data,
                               *(int *)&v269.m_dataLen);
              sub_578ED0(v224, (Tile *)v270.m_data, *(signed int *)&v270.m_dataLen); /*0x5cbe87*/
              v225 = (char *)stru_B38FD0; /*0x5cbe8c*/
              *(_DWORD *)&v270.m_dataLen = 1; /*0x5cbe92*/
              v270.m_data = (char *)0xFBB; /*0x5cbe94*/
              v275 = COERCE_FLOAT(&v269); /*0x5cbe9e*/
              BSStringT_constr_str(&v269, v225); /*0x5cbea3*/
              v226 = (char *)g_gameSetting_sHair; /*0x5cbea8*/
              v274 = COERCE_FLOAT(&v268); /*0x5cbeb2*/
              v276 = 0x1C; /*0x5cbeb7*/
              BSStringT_constr_str(&v268, v226); /*0x5cbebf*/
              v276 = 0xFFFFFFFF; /*0x5cbec6*/
              v227 = (Tile *)RaceSexMenu_FindControlTile( /*0x5cbeca*/
                               ParentMenu,
                               v268.m_data,
                               *(int *)&v268.m_dataLen,
                               (unsigned __int8 *)v269.m_data,
                               *(int *)&v269.m_dataLen);
              sub_578ED0(v227, (Tile *)v270.m_data, *(signed int *)&v270.m_dataLen); /*0x5cbed1*/
            }
            else
            {
              *(_DWORD *)&v270.m_dataLen = 0xFAE; /*0x5cbcc9*/
              v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5cbcd3*/
              BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v206); /*0x5cbcd8*/
              v207 = (char *)g_gameSetting_sHair; /*0x5cbcdd*/
              v274 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbce7*/
              v276 = 0x16; /*0x5cbcec*/
              BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v207); /*0x5cbcf4*/
              v276 = 0xFFFFFFFF; /*0x5cbcfb*/
              v208 = (_DWORD *)RaceSexMenu_FindControlTile( /*0x5cbcff*/
                                 ParentMenu,
                                 *(char **)&v268.m_dataLen,
                                 (int)v269.m_data,
                                 *(unsigned __int8 **)&v269.m_dataLen,
                                 (int)v270.m_data);
              Float = Tile_GetFloat(v208, *(int *)&v270.m_dataLen); /*0x5cbd06*/
              v210 = Double_To_SInt32(Float); /*0x5cbd0b*/
              v211 = (char *)stru_B39330; /*0x5cbd10*/
              *(_DWORD *)&v270.m_dataLen = *(&ParentMenu[0x3A].members.id + 2 * v210); /*0x5cbd1f*/
              v270.m_data = (char *)0xFB4; /*0x5cbd20*/
              v275 = COERCE_FLOAT(&v269); /*0x5cbd2a*/
              BSStringT_constr_str(&v269, v211); /*0x5cbd2f*/
              v212 = (char *)g_gameSetting_sHair; /*0x5cbd34*/
              v274 = COERCE_FLOAT(&v268); /*0x5cbd3e*/
              v276 = 0x17; /*0x5cbd43*/
              BSStringT_constr_str(&v268, v212); /*0x5cbd4b*/
              v276 = 0xFFFFFFFF; /*0x5cbd52*/
              v213 = (_DWORD *)RaceSexMenu_FindControlTile( /*0x5cbd56*/
                                 ParentMenu,
                                 v268.m_data,
                                 *(int *)&v268.m_dataLen,
                                 (unsigned __int8 *)v269.m_data,
                                 *(int *)&v269.m_dataLen);
              Tile_SetString(v213, v270.m_data, *(char **)&v270.m_dataLen); /*0x5cbd5d*/
            }
          }
          v228 = (char *)stru_B39330; /*0x5cbed6*/
          *(_DWORD *)&v270.m_dataLen = 0xFBB; /*0x5cbedc*/
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5cbee6*/
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v228); /*0x5cbeeb*/
          v229 = (char *)g_gameSetting_sHair; /*0x5cbef0*/
          v274 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbefa*/
          v276 = 0x1D; /*0x5cbeff*/
          BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v229); /*0x5cbf07*/
          v276 = 0xFFFFFFFF; /*0x5cbf0e*/
          v230 = (_DWORD *)RaceSexMenu_FindControlTile( /*0x5cbf12*/
                             ParentMenu,
                             *(char **)&v268.m_dataLen,
                             (int)v269.m_data,
                             *(unsigned __int8 **)&v269.m_dataLen,
                             (int)v270.m_data);
          v231 = Tile_GetFloat(v230, *(int *)&v270.m_dataLen); /*0x5cbf19*/
          if ( v231 == fConstant_2 ) /*0x5cbf29*/
          {
            v232 = (char *)stru_B38FC0; /*0x5cbf2f*/
            *(_DWORD *)&v270.m_dataLen = 0xFAE; /*0x5cbf35*/
            v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5cbf3f*/
            BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v232); /*0x5cbf44*/
            v233 = (char *)g_gameSetting_sHair; /*0x5cbf49*/
            v274 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbf53*/
            v276 = 0x1E; /*0x5cbf58*/
            BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v233); /*0x5cbf60*/
            v276 = 0xFFFFFFFF; /*0x5cbf67*/
            v234 = (_DWORD *)RaceSexMenu_FindControlTile( /*0x5cbf6b*/
                               ParentMenu,
                               *(char **)&v268.m_dataLen,
                               (int)v269.m_data,
                               *(unsigned __int8 **)&v269.m_dataLen,
                               (int)v270.m_data);
            v275 = Tile_GetFloat(v234, *(int *)&v270.m_dataLen); /*0x5cbf77*/
            v235 = (char *)stru_B38FC8; /*0x5cbf7b*/
            *(_DWORD *)&v270.m_dataLen = 0xFAE; /*0x5cbf81*/
            v274 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5cbf8b*/
            BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v235); /*0x5cbf90*/
            v236 = (char *)g_gameSetting_sHair; /*0x5cbf95*/
            p_m_dataLen = &v268.m_dataLen; /*0x5cbf9f*/
            v276 = 0x1F; /*0x5cbfa4*/
            BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v236); /*0x5cbfac*/
            v276 = 0xFFFFFFFF; /*0x5cbfb3*/
            v237 = (_DWORD *)RaceSexMenu_FindControlTile( /*0x5cbfb7*/
                               ParentMenu,
                               *(char **)&v268.m_dataLen,
                               (int)v269.m_data,
                               *(unsigned __int8 **)&v269.m_dataLen,
                               (int)v270.m_data);
            v274 = Tile_GetFloat(v237, *(int *)&v270.m_dataLen); /*0x5cbfc3*/
            v238 = (char *)stru_B38FD0; /*0x5cbfc7*/
            *(_DWORD *)&v270.m_dataLen = 0xFAE; /*0x5cbfcd*/
            p_m_dataLen = &v269.m_dataLen; /*0x5cbfd7*/
            BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v238); /*0x5cbfdc*/
            v239 = (char *)g_gameSetting_sHair; /*0x5cbfe1*/
            v271 = COERCE_FLOAT((BSStringT *)&v268.m_dataLen); /*0x5cbfeb*/
            v276 = 0x20; /*0x5cbff0*/
            BSStringT_constr_str((BSStringT *)&v268.m_dataLen, v239); /*0x5cbff8*/
            v276 = 0xFFFFFFFF; /*0x5cbfff*/
            v240 = (_DWORD *)RaceSexMenu_FindControlTile( /*0x5cc003*/
                               ParentMenu,
                               *(char **)&v268.m_dataLen,
                               (int)v269.m_data,
                               *(unsigned __int8 **)&v269.m_dataLen,
                               (int)v270.m_data);
            v271 = Tile_GetFloat(v240, *(int *)&v270.m_dataLen); /*0x5cc00f*/
            v241 = dbl_A3DDD8; /*0x5cc02d*/
            p_m_dataLen = (__int16 *)(int)(v271 * v241); /*0x5cc039*/
            HIBYTE(v242) = (_BYTE)p_m_dataLen; /*0x5cc042*/
            a3 = v274 * v241; /*0x5cc050*/
            LODWORD(v274) = (int)a3; /*0x5cc064*/
            LOBYTE(v242) = (int)a3; /*0x5cc06c*/
            v231 = v241 * v275; /*0x5cc075*/
            LODWORD(v275) = (unsigned __int8)(int)v231 | (v242 << 8); /*0x5cc0a3*/
            v271 = 0.0; /*0x5cc0a7*/
            do /*0x5cc125*/
            {
              if ( LODWORD(v275) == *p_unk08 ) /*0x5cc0b1*/
              {
                v231 = (double)SLODWORD(v271); /*0x5cc0b3*/
                v243 = (const char *)stru_B39330; /*0x5cc0b7*/
                *(float *)&v270.m_dataLen = v231; /*0x5cc0c1*/
                v274 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen); /*0x5cc0c5*/
                *(_DWORD *)&v269.m_dataLen = 0; /*0x5cc0cb*/
                v270.m_data = 0; /*0x5cc0cd*/
                BSStringT_Set((BSStringT *)&v269.m_dataLen, v243, 0); /*0x5cc0d5*/
                v244 = (const char *)g_gameSetting_sHair; /*0x5cc0da*/
                p_m_dataLen = &v268.m_dataLen; /*0x5cc0e4*/
                v276 = 0x21; /*0x5cc0ea*/
                *(_DWORD *)&v268.m_dataLen = 0; /*0x5cc0f2*/
                v269.m_data = 0; /*0x5cc0f4*/
                BSStringT_Set((BSStringT *)&v268.m_dataLen, v244, 0); /*0x5cc0fc*/
                v276 = 0xFFFFFFFF; /*0x5cc103*/
                v245 = (Tile *)RaceSexMenu_FindControlTile( /*0x5cc107*/
                                 ParentMenu,
                                 *(char **)&v268.m_dataLen,
                                 (int)v269.m_data,
                                 *(unsigned __int8 **)&v269.m_dataLen,
                                 (int)v270.m_data);
                sub_5C2B50(v245, *(float *)&v270.m_dataLen); /*0x5cc10f*/
              }
              ++p_unk08; /*0x5cc11b*/
              ++LODWORD(v271); /*0x5cc121*/
            }
            while ( SLODWORD(v271) < 0x10 ); /*0x5cc125*/
          }
          sub_5C7070(0); /*0x5cc12c*/
          if ( InterfaceManager_IsMenuVisibleByID(0x3E9, 0) ) /*0x5cc137*/
            Tile_SetFloat(v272, (_DWORD *)0xFA1, 1.0); /*0x5cc152*/
          else
            EnableMenu(ParentMenu, a1, a3, v231, 0); /*0x5cc15c*/
          LOBYTE(ParentMenu[0x36].members.fadeState) = reference->isThirdPerson; /*0x5cc16d*/
          TogglePOV(reference, 0); /*0x5cc17a*/
          Menu_UPdateCamera___(ParentMenu, COERCE_INT(1.0), 0.0); /*0x5cc18f*/
          ((void (__thiscall *)(LowProcess *, PlayerCharacter *))reference->super.super.super.process->Unk_E0)( /*0x5cc1a5*/
            reference->super.super.super.process,
            reference);
          ParentMenu[0x36].members.id = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5cc1b1*/
        }
        else
        {
          PrintError("Race/Sex Menu Creation Failed... Are your menu and art resources up to date?"); /*0x5ca150*/
        }
      }
      else if ( ParentMenu->members.tile ) /*0x5cc1cb*/
      {
        ParentMenu->__vftable->Destructor(ParentMenu, 1); /*0x5cc1d9*/
      }
    }
  }
}
