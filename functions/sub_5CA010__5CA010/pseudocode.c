void __usercall sub_5CA010(double a1@<st2>, double st7_0@<st0>, double a3@<st1>)
{
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *XML; // ebx
  Menu *ParentMenu; // esi
  ExtraDataList *****ContainerChanges; // eax
  _DWORD *EquippedInstance; // edi
  ExtraDataList *****v10; // eax
  _DWORD *v11; // eax
  UInt32 unk1C; // eax
  TileMenu *v13; // eax
  TESNPC *v14; // eax
  TESNPC *v15; // ebp
  TESRace *race; // edi
  char *v17; // eax
  UInt32 *p_unk08; // ebx
  char *v19; // edx
  unsigned int *v20; // eax
  char *v21; // edx
  char *v22; // edx
  char *v23; // eax
  char *v24; // edx
  char *v25; // edx
  char *v26; // edx
  char *v27; // edx
  char *v28; // edx
  unsigned int *v29; // eax
  char *v30; // edx
  char *v31; // edx
  char *v32; // edx
  char *v33; // edx
  unsigned int *v34; // eax
  char *v35; // edx
  char *v36; // edx
  char *v37; // edx
  char *v38; // edx
  char *v39; // edx
  char *v40; // edx
  unsigned int *v41; // eax
  char *v42; // edx
  char *v43; // eax
  char *v44; // edx
  char *v45; // eax
  char *v46; // edx
  char *v47; // eax
  char *v48; // edx
  char *v49; // eax
  char *v50; // edx
  unsigned int *v51; // eax
  char *v52; // edx
  char *v53; // eax
  char *v54; // edx
  char *v55; // eax
  char *v56; // edx
  char *v57; // eax
  char *v58; // edx
  char *v59; // eax
  char *v60; // edx
  char *v61; // eax
  char *v62; // edx
  char *v63; // eax
  char *v64; // edx
  char *v65; // eax
  char *v66; // edx
  char *v67; // eax
  char *v68; // edx
  char *v69; // eax
  char *v70; // edx
  unsigned int *v71; // eax
  char *v72; // edx
  char *v73; // eax
  char *v74; // edx
  char *v75; // eax
  char *v76; // edx
  char *v77; // eax
  char *v78; // edx
  char *v79; // eax
  char *v80; // edx
  char *v81; // eax
  char *v82; // edx
  char *v83; // eax
  char *v84; // edx
  unsigned int *v85; // eax
  char *v86; // edx
  char *v87; // edx
  char *v88; // edx
  char *v89; // edx
  char *v90; // edx
  char *v91; // edx
  unsigned int *v92; // eax
  char *v93; // edx
  char *v94; // edx
  char *v95; // edx
  char *v96; // edx
  unsigned int *v97; // eax
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
  char *v111; // edx
  unsigned int *v112; // eax
  char *v113; // edx
  char *v114; // edx
  char *v115; // edx
  char *v116; // edx
  char *v117; // edx
  unsigned int *v118; // eax
  char *v119; // edx
  char *v120; // edx
  char *v121; // edx
  char *v122; // edx
  unsigned int *v123; // eax
  char *v124; // edx
  char *v125; // edx
  char *v126; // edx
  char *v127; // edx
  char *v128; // edx
  unsigned int *v129; // eax
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
  char *v140; // edx
  unsigned int *v141; // eax
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
  char *v156; // edx
  unsigned int *v157; // eax
  char *v158; // edx
  char *v159; // edx
  char *v160; // edx
  char *v161; // edx
  char *v162; // edx
  char *v163; // edx
  unsigned int *v164; // eax
  char *v165; // edx
  char *v166; // edx
  char *v167; // edx
  char *v168; // edx
  char *v169; // edx
  char *v170; // edx
  char *v171; // edx
  unsigned int *v172; // eax
  char *v173; // edx
  char *v174; // edx
  char *v175; // edx
  char *v176; // edx
  char *v177; // edx
  char *v178; // edx
  char *v179; // edx
  unsigned int *v180; // eax
  char *v181; // edx
  char *v182; // edx
  char *v183; // edx
  char *v184; // edx
  char *v185; // edx
  char *v186; // edx
  char *v187; // edx
  char *v188; // edx
  unsigned int *v189; // eax
  char *v190; // edx
  char *v191; // edx
  char *v192; // edx
  char *v193; // edx
  unsigned int *v194; // eax
  char *v195; // edx
  char *v196; // edx
  char *v197; // edx
  _DWORD *v198; // eax
  char *v199; // eax
  _DWORD *v200; // eax
  char *v201; // eax
  char *v202; // eax
  char *Name; // eax
  unsigned __int8 *v204; // edx
  char v205; // cl
  bool v206; // al
  char *v207; // edx
  char *v208; // eax
  _DWORD *v209; // eax
  double Float; // st7
  int v211; // eax
  char *v212; // edx
  char *v213; // eax
  _DWORD *v214; // eax
  char *v215; // eax
  Tile *v216; // eax
  char *v217; // edx
  char *v218; // eax
  _DWORD *v219; // eax
  char *v220; // edx
  char *v221; // eax
  Tile *v222; // eax
  char *v223; // edx
  char *v224; // eax
  Tile *v225; // eax
  char *v226; // edx
  char *v227; // eax
  Tile *v228; // eax
  char *v229; // edx
  char *v230; // eax
  _DWORD *v231; // eax
  double v232; // st7
  char *v233; // edx
  char *v234; // eax
  _DWORD *v235; // eax
  char *v236; // edx
  char *v237; // eax
  _DWORD *v238; // eax
  char *v239; // edx
  char *v240; // eax
  _DWORD *v241; // eax
  double v242; // rt0
  unsigned __int16 v243; // dx
  const char *v244; // eax
  const char *v245; // eax
  Tile *v246; // eax
  TileWindow *unk18; // [esp-14h] [ebp-50h]
  TileWindow *v248; // [esp-14h] [ebp-50h]
  TileWindow *v249; // [esp-14h] [ebp-50h]
  TileWindow *unk24; // [esp-14h] [ebp-50h]
  TileWindow *v251; // [esp-14h] [ebp-50h]
  TileWindow *v252; // [esp-14h] [ebp-50h]
  TileWindow *v253; // [esp-14h] [ebp-50h]
  TileWindow *vftable; // [esp-14h] [ebp-50h]
  TileWindow *v255; // [esp-14h] [ebp-50h]
  TileWindow *v256; // [esp-14h] [ebp-50h]
  TileWindow *v257; // [esp-14h] [ebp-50h]
  TileWindow *v258; // [esp-14h] [ebp-50h]
  TileWindow *v259; // [esp-14h] [ebp-50h]
  TileWindow *v260; // [esp-14h] [ebp-50h]
  TileWindow *v261; // [esp-14h] [ebp-50h]
  TileWindow *v262; // [esp-14h] [ebp-50h]
  TileMenu *tile; // [esp-14h] [ebp-50h]
  TileMenu *v264; // [esp-14h] [ebp-50h]
  TileMenu *v265; // [esp-14h] [ebp-50h]
  TileMenu *v266; // [esp-14h] [ebp-50h]
  TileMenu *v267; // [esp-14h] [ebp-50h]
  TileMenu *v268; // [esp-14h] [ebp-50h]
  BSStringT v269; // [esp-10h] [ebp-4Ch] BYREF
  BSStringT v270; // [esp-8h] [ebp-44h] BYREF
  BSStringT a2; // [esp+0h] [ebp-3Ch] BYREF
  float v272; // [esp+1Ch] [ebp-20h]
  Tile *v273; // [esp+20h] [ebp-1Ch]
  __int16 *p_m_dataLen; // [esp+24h] [ebp-18h]
  float v275; // [esp+28h] [ebp-14h]
  float v276; // [esp+2Ch] [ebp-10h]
  int v277; // [esp+38h] [ebp-4h]

  if ( !Menu_GetOpenMenuTile(0x40C) )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    Depth = InterfaceManager_GetDepth(st7_0);
    v272 = Depth;
    XML = (Tile *)Menu_LoadXML(
                    (BSStringT *)Singleton->menuRoot,
                    a1,
                    a3,
                    Depth,
                    "Data\\Menus\\CharGen\\race_sex_menu.xml");
    v273 = XML;
    ParentMenu = (Menu *)Tile_GetParentMenu(XML);
    if ( ParentMenu )
    {
      if ( TESDataHandler_g_PlayerRef )
      {
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 1, 0);
        v10 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        v11 = ContainerExtraData_GetEquippedInstance(v10, 0, 0);
        if ( EquippedInstance )
        {
          ParentMenu[0x35].members.unk1C = EquippedInstance[2];
        }
        else if ( v11 )
        {
          ParentMenu[0x35].members.unk1C = v11[2];
        }
        else
        {
          ParentMenu[0x35].members.unk1C = 0;
        }
        unk1C = ParentMenu[0x35].members.unk1C;
        if ( unk1C )
          Depth = Actor_UnequipItem((int)TESDataHandler_g_PlayerRef, Depth, a1, a3, unk1C, 1, 0, 0, 0, 0);
        sub_65D660();
        v13 = (TileMenu *)OblivionDynamicCast(
                            XML,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileMenu `RTTI Type Descriptor',
                            0);
        Menu_SetTileMenu(ParentMenu, a3, Depth, v13);
        if ( ParentMenu[1].__vftable
          && ParentMenu[1].members.tile
          && ParentMenu[1].members.unk08
          && ParentMenu[1].members.unk14 )
        {
          if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
            Tile_SetFloat(XML, (_DWORD *)0xFAB, v272);
          v14 = (TESNPC *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
          *(float *)&a2.m_dataLen = 0.0;
          v15 = v14;
          race = v14->member.form.race;
          *(_DWORD *)&v270.m_dataLen = ParentMenu[0x38].members.unk18;
          v17 = (char *)sub_521A10(v14);
          sub_552990((char *)race->unk12, v17, *(int *)&v270.m_dataLen, 0, 0.0);
          p_unk08 = &ParentMenu[0x39].members.unk08;
          ParentMenu[0x39].members.unk08 = dword_B393B8;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3A].members.id, "%s", *(const char **)dword_B39338);
          ParentMenu[0x39].members.unk0C = dword_B393C0;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B], "%s", *(const char **)dword_B39340);
          ParentMenu[0x39].members.unk10 = dword_B393C8;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B].members.unk08, "%s", *(const char **)dword_B39348);
          ParentMenu[0x39].members.unk14 = dword_B393D0;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B].members.unk10, "%s", *(const char **)dword_B39350);
          ParentMenu[0x39].members.unk18 = dword_B393D8;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B].members.unk18, "%s", *(const char **)dword_B39358);
          ParentMenu[0x39].members.unk1C = dword_B393E0;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3B].members.id, "%s", *(const char **)dword_B39360);
          ParentMenu[0x39].members.id = dword_B393E8;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C], "%s", *(const char **)dword_B39368);
          ParentMenu[0x39].members.unk24 = dword_B393F0;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C].members.unk08, "%s", *(const char **)dword_B39370);
          ParentMenu[0x3A].__vftable = (MenuVtbl *)dword_B393F8;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C].members.unk10, "%s", *(const char **)dword_B39378);
          ParentMenu[0x3A].members.tile = (TileMenu *)dword_B39400;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C].members.unk18, "%s", *(const char **)dword_B39380);
          ParentMenu[0x3A].members.unk08 = dword_B39408;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3C].members.id, "%s", *(const char **)dword_B39388);
          ParentMenu[0x3A].members.unk0C = dword_B39410;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D], "%s", *(const char **)dword_B39390);
          ParentMenu[0x3A].members.unk10 = dword_B39418;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D].members.unk08, "%s", *(const char **)dword_B39398);
          ParentMenu[0x3A].members.unk14 = dword_B39420;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D].members.unk10, "%s", *(const char **)dword_B393A0);
          ParentMenu[0x3A].members.unk18 = dword_B39428;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D].members.unk18, "%s", *(const char **)dword_B393A8);
          ParentMenu[0x3A].members.unk1C = dword_B39430;
          BSStringT_Static_Format((BSStringT *)&ParentMenu[0x3D].members.id, "%s", *(const char **)dword_B393B0);
          v19 = (char *)dword_B38F70;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v19);
          v20 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          v276 = COERCE_FLOAT(&v270);
          *(_DWORD *)&v269.m_dataLen = "          ";
          ParentMenu[1].members.unk18 = (UInt32)v20;
          BSStringT_constr_str(&v270, *(char **)&v269.m_dataLen);
          v21 = (char *)dword_B38F78;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0;
          BSStringT_constr_str(&v269, v21);
          unk18 = (TileWindow *)ParentMenu[1].members.unk18;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            unk18,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v22 = (char *)dword_B38F80;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v22);
          v23 = (char *)dword_B38F80;
          v275 = COERCE_FLOAT(&v269);
          v277 = 1;
          BSStringT_constr_str(&v269, v23);
          v248 = (TileWindow *)ParentMenu[1].members.unk18;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v248,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, "          ");
          v24 = (char *)dword_B38F88;
          v275 = COERCE_FLOAT(&v269);
          v277 = 2;
          BSStringT_constr_str(&v269, v24);
          v249 = (TileWindow *)ParentMenu[1].members.unk18;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v249,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v25 = (char *)dword_B38F90;
          *(_DWORD *)&a2.m_dataLen = 0;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v25);
          sub_5C4630(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk18,
            *(char **)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v26 = (char *)dword_B38F98;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)0xFFFFFFFF;
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v26);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v27 = (char *)dword_B38FA0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)0xFFFFFFFF;
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v27);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v28 = (char *)dword_B38F78;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v28);
          v29 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          ParentMenu[1].members.unk1C = (UInt32)v29;
          v30 = (char *)dword_B38FA8;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v30);
          sub_5C4630(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk1C,
            *(char **)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v31 = (char *)dword_B38F78;
          *(_DWORD *)&a2.m_dataLen = 0;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v31);
          sub_5C4630(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk1C,
            *(char **)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v32 = (char *)dword_B38FB0;
          v276 = COERCE_FLOAT(&a2);
          BSStringT_constr_str(&a2, v32);
          sub_5C4800(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.unk1C,
            a2.m_data,
            *(int *)&a2.m_dataLen);
          v33 = (char *)dword_B38F88;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v33);
          v34 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          ParentMenu[1].members.id = (UInt32)v34;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, (char *)dword_B38FB8);
          sub_5C4630(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v35 = (char *)dword_B39330;
          *(_DWORD *)&a2.m_dataLen = 0;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v35);
          sub_5C4630(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v36 = (char *)dword_B38FC0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)0xFFFFFFFF;
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v36);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v37 = (char *)dword_B38FC8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)0xFFFFFFFF;
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v37);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v38 = (char *)dword_B38FD0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)0xFFFFFFFF;
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v38);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v39 = (char *)dword_B38FD8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)0xFFFFFFFF;
          *(_DWORD *)&v270.m_dataLen = 0xFFFFFFFF;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v39);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[1].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v40 = (char *)dword_B38F80;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v40);
          v41 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          ParentMenu[1].members.unk24 = (UInt32)v41;
          v42 = (char *)dword_B38FE0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v42);
          v43 = (char *)dword_B38FE0;
          v275 = COERCE_FLOAT(&v269);
          v277 = 3;
          BSStringT_constr_str(&v269, v43);
          unk24 = (TileWindow *)ParentMenu[1].members.unk24;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            unk24,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v44 = (char *)dword_B38FE8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v44);
          v45 = (char *)dword_B38FE8;
          v275 = COERCE_FLOAT(&v269);
          v277 = 4;
          BSStringT_constr_str(&v269, v45);
          v251 = (TileWindow *)ParentMenu[1].members.unk24;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v251,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v46 = (char *)dword_B38FF0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v46);
          v47 = (char *)dword_B38FF0;
          v275 = COERCE_FLOAT(&v269);
          v277 = 5;
          BSStringT_constr_str(&v269, v47);
          v252 = (TileWindow *)ParentMenu[1].members.unk24;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v252,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v48 = (char *)dword_B38FF8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v48);
          v49 = (char *)dword_B38FF8;
          v275 = COERCE_FLOAT(&v269);
          v277 = 6;
          BSStringT_constr_str(&v269, v49);
          v253 = (TileWindow *)ParentMenu[1].members.unk24;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v253,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v50 = (char *)dword_B38FE0;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v50);
          v51 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          ParentMenu[2].__vftable = (MenuVtbl *)v51;
          v52 = (char *)dword_B38F80;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v52);
          v53 = (char *)dword_B39000;
          v275 = COERCE_FLOAT(&v269);
          v277 = 7;
          BSStringT_constr_str(&v269, v53);
          vftable = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            vftable,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v54 = (char *)dword_B39008;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v54);
          v55 = (char *)dword_B39008;
          v275 = COERCE_FLOAT(&v269);
          v277 = 8;
          BSStringT_constr_str(&v269, v55);
          v255 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v255,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v56 = (char *)dword_B39010;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v56);
          v57 = (char *)dword_B39010;
          v275 = COERCE_FLOAT(&v269);
          v277 = 9;
          BSStringT_constr_str(&v269, v57);
          v256 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v256,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v58 = (char *)dword_B39018;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v58);
          v59 = (char *)dword_B39018;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0xA;
          BSStringT_constr_str(&v269, v59);
          v257 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v257,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v60 = (char *)dword_B38F90;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v60);
          v61 = (char *)dword_B38F90;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0xB;
          BSStringT_constr_str(&v269, v61);
          v258 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v258,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v62 = (char *)dword_B39020;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v62);
          v63 = (char *)dword_B39020;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0xC;
          BSStringT_constr_str(&v269, v63);
          v259 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v259,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v64 = (char *)dword_B39028;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v64);
          v65 = (char *)dword_B39028;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0xD;
          BSStringT_constr_str(&v269, v65);
          v260 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v260,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v66 = (char *)dword_B39030;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v66);
          v67 = (char *)dword_B39030;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0xE;
          BSStringT_constr_str(&v269, v67);
          v261 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v261,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v68 = (char *)dword_B39038;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v68);
          v69 = (char *)dword_B39038;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0xF;
          BSStringT_constr_str(&v269, v69);
          v262 = (TileWindow *)ParentMenu[2].__vftable;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v262,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v70 = (char *)dword_B38FE8;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v70);
          v71 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          ParentMenu[2].members.tile = (TileMenu *)v71;
          v72 = (char *)dword_B39048;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v72);
          v73 = (char *)dword_B39040;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0x10;
          BSStringT_constr_str(&v269, v73);
          tile = ParentMenu[2].members.tile;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            tile,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v74 = (char *)dword_B39050;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v74);
          v75 = (char *)dword_B39050;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0x11;
          BSStringT_constr_str(&v269, v75);
          v264 = ParentMenu[2].members.tile;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v264,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v76 = (char *)dword_B38F90;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v76);
          v77 = (char *)dword_B39320;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0x12;
          BSStringT_constr_str(&v269, v77);
          v265 = ParentMenu[2].members.tile;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v265,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v78 = (char *)dword_B39058;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v78);
          v79 = (char *)dword_B39058;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0x13;
          BSStringT_constr_str(&v269, v79);
          v266 = ParentMenu[2].members.tile;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v266,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v80 = (char *)dword_B39068;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v80);
          v81 = (char *)dword_B39060;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0x14;
          BSStringT_constr_str(&v269, v81);
          v267 = ParentMenu[2].members.tile;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v267,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v82 = (char *)dword_B39038;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v82);
          v83 = (char *)dword_B39328;
          v275 = COERCE_FLOAT(&v269);
          v277 = 0x15;
          BSStringT_constr_str(&v269, v83);
          v268 = ParentMenu[2].members.tile;
          v277 = 0xFFFFFFFF;
          sub_5C4480(
            ParentMenu,
            a1,
            a3,
            0.0,
            v268,
            v269.m_data,
            *(int *)&v269.m_dataLen,
            v270.m_data,
            *(int *)&v270.m_dataLen,
            (char)a2.m_data,
            a2.m_dataLen);
          v84 = (char *)dword_B39000;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v84);
          v85 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x13;
          ParentMenu[2].members.unk08 = (UInt32)v85;
          v86 = (char *)dword_B39070;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v86);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v87 = (char *)dword_B39078;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x14;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v87);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v88 = (char *)dword_B39080;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x15;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v88);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v89 = (char *)dword_B39088;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x16;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v89);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v90 = (char *)dword_B39090;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x17;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v90);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v91 = (char *)dword_B39008;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v91);
          v92 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0;
          ParentMenu[2].members.unk0C = (UInt32)v92;
          v93 = (char *)dword_B39098;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v93);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v94 = (char *)dword_B390A0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 1;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v94);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v95 = (char *)dword_B390A8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 2;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v95);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v96 = (char *)dword_B39010;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v96);
          v97 = sub_5C4340(
                  ParentMenu,
                  a1,
                  a3,
                  0.0,
                  (TileWindow *)ParentMenu[1].__vftable,
                  v270.m_data,
                  *(int *)&v270.m_dataLen,
                  (int)a2.m_data,
                  *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 3;
          ParentMenu[2].members.unk10 = (UInt32)v97;
          v98 = (char *)dword_B390B0;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v98);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v99 = (char *)dword_B390B8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 4;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v99);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v100 = (char *)dword_B390C0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 5;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v100);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v101 = (char *)dword_B390C8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 6;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v101);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v102 = (char *)dword_B390D0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 7;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v102);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v103 = (char *)dword_B39018;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v103);
          ParentMenu[2].members.unk14 = (UInt32)sub_5C4340(
                                                  ParentMenu,
                                                  a1,
                                                  a3,
                                                  0.0,
                                                  (TileWindow *)ParentMenu[1].__vftable,
                                                  v270.m_data,
                                                  *(int *)&v270.m_dataLen,
                                                  (int)a2.m_data,
                                                  *(int *)&a2.m_dataLen);
          v104 = (char *)dword_B390D8;
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 8;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v104);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v105 = (char *)dword_B390E0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 9;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v105);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v106 = (char *)dword_B390E8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0xA;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v106);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v107 = (char *)dword_B390F0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0xB;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v107);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v108 = (char *)dword_B390F8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0xC;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v108);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v109 = (char *)dword_B39100;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0xD;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v109);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0xE;
          v110 = (char *)dword_B39108;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v110);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v111 = (char *)dword_B38F90;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v111);
          v112 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0xF;
          ParentMenu[2].members.unk18 = (UInt32)v112;
          v113 = (char *)dword_B39110;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v113);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v114 = (char *)dword_B39118;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x10;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v114);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v115 = (char *)dword_B39120;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x11;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v115);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v116 = (char *)dword_B39128;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x12;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v116);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v117 = (char *)dword_B39020;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v117);
          v118 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x18;
          ParentMenu[2].members.unk1C = (UInt32)v118;
          v119 = (char *)dword_B39130;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v119);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk1C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v120 = (char *)dword_B39138;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x19;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v120);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk1C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v121 = (char *)dword_B39140;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x1A;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v121);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk1C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v122 = (char *)dword_B39028;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v122);
          v123 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x1B;
          ParentMenu[2].members.id = (UInt32)v123;
          v124 = (char *)dword_B39148;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v124);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v125 = (char *)dword_B39150;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x1C;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v125);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v126 = (char *)dword_B39158;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x1D;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v126);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v127 = (char *)dword_B39160;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x1E;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v127);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.id,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v128 = (char *)dword_B39030;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v128);
          v129 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x1F;
          ParentMenu[2].members.unk24 = (UInt32)v129;
          v130 = (char *)dword_B39168;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v130);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v131 = (char *)dword_B39170;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x20;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v131);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v132 = (char *)dword_B39178;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x21;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v132);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v133 = (char *)dword_B39180;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x22;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v133);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v134 = (char *)dword_B39188;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x23;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v134);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v135 = (char *)dword_B39190;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x24;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v135);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v136 = (char *)dword_B39198;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x25;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v136);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v137 = (char *)dword_B391A0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x26;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v137);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v138 = (char *)dword_B391A8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x27;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v138);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          v139 = (char *)dword_B391B0;
          *(_DWORD *)&v270.m_dataLen = 0x28;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v139);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[2].members.unk24,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v140 = (char *)dword_B39038;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v140);
          v141 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x29;
          ParentMenu[3].__vftable = (MenuVtbl *)v141;
          v142 = (char *)dword_B391B8;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v142);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v143 = (char *)dword_B391C0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x2A;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v143);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v144 = (char *)dword_B391C8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x2B;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v144);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v145 = (char *)dword_B391D0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x2C;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v145);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x2D;
          v146 = (char *)dword_B391D8;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v146);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v147 = (char *)dword_B391E0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x2E;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v147);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v148 = (char *)dword_B391E8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x2F;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v148);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v149 = (char *)dword_B391F0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x30;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v149);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v150 = (char *)dword_B391F8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x31;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v150);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v151 = (char *)dword_B39200;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x32;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v151);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v152 = (char *)dword_B39208;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x33;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v152);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v153 = (char *)dword_B39210;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x34;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v153);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v154 = (char *)dword_B39218;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x35;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v154);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v155 = (char *)dword_B39220;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = 0;
          *(_DWORD *)&v270.m_dataLen = 0x36;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v155);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].__vftable,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v156 = (char *)dword_B39040;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v156);
          v157 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x1C;
          ParentMenu[3].members.tile = (TileMenu *)v157;
          v158 = (char *)dword_B39228;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v158);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v159 = (char *)dword_B39230;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x1D;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v159);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v160 = (char *)dword_B39238;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x1E;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v160);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v161 = (char *)dword_B39240;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x1F;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v161);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v162 = (char *)dword_B39248;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 6;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v162);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            ParentMenu[3].members.tile,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v163 = (char *)dword_B39050;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v163);
          v164 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0;
          ParentMenu[3].members.unk08 = (UInt32)v164;
          v165 = (char *)dword_B39250;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v165);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v166 = (char *)dword_B39258;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 1;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v166);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          v167 = (char *)dword_B39260;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 2;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v167);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v168 = (char *)dword_B39268;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 3;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v168);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v169 = (char *)dword_B39270;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 4;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v169);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v170 = (char *)dword_B39278;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 5;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v170);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk08,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v171 = (char *)dword_B39320;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v171);
          v172 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 7;
          ParentMenu[3].members.unk0C = (UInt32)v172;
          v173 = (char *)dword_B39280;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v173);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 8;
          v174 = (char *)dword_B39288;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v174);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v175 = (char *)dword_B39290;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x10;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v175);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v176 = (char *)dword_B39298;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x11;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v176);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v177 = (char *)dword_B392A0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x12;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v177);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v178 = (char *)dword_B392A8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x13;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v178);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk0C,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v179 = (char *)dword_B39058;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v179);
          v180 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 9;
          ParentMenu[3].members.unk10 = (UInt32)v180;
          v181 = (char *)dword_B392C0;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v181);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v182 = (char *)dword_B392C8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0xA;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v182);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v183 = (char *)dword_B392D0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0xB;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v183);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v184 = (char *)dword_B392D8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0xC;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v184);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v185 = (char *)dword_B392E0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0xD;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v185);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v186 = (char *)dword_B392E8;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0xE;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v186);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v187 = (char *)dword_B392F0;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0xF;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v187);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk10,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v188 = (char *)dword_B39060;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v188);
          v189 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x16;
          ParentMenu[3].members.unk14 = (UInt32)v189;
          v190 = (char *)dword_B392F8;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v190);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v191 = (char *)dword_B39300;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x17;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v191);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v192 = (char *)dword_B39308;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x18;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v192);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk14,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v193 = (char *)dword_B39328;
          *(_DWORD *)&a2.m_dataLen = 0xFFFFFFFF;
          a2.m_data = (char *)0xFFFFFFFF;
          v276 = COERCE_FLOAT(&v270);
          BSStringT_constr_str(&v270, v193);
          v194 = sub_5C4340(
                   ParentMenu,
                   a1,
                   a3,
                   0.0,
                   (TileWindow *)ParentMenu[1].__vftable,
                   v270.m_data,
                   *(int *)&v270.m_dataLen,
                   (int)a2.m_data,
                   *(int *)&a2.m_dataLen);
          *(_DWORD *)&a2.m_dataLen = 1;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x19;
          ParentMenu[3].members.unk18 = (UInt32)v194;
          v195 = (char *)dword_B39310;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v195);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v196 = (char *)dword_B39318;
          *(_DWORD *)&a2.m_dataLen = 0;
          a2.m_data = (char *)1;
          *(_DWORD *)&v270.m_dataLen = 0x1A;
          v276 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v196);
          sub_5C93F0(
            ParentMenu,
            a1,
            a3,
            0.0,
            (TileWindow *)ParentMenu[3].members.unk18,
            *(char **)&v269.m_dataLen,
            (int)v270.m_data,
            *(int *)&v270.m_dataLen,
            (int)a2.m_data,
            a2.m_dataLen);
          v197 = (char *)dword_B38F70;
          *(_DWORD *)&a2.m_dataLen = 0xFA8;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v197);
          v198 = (_DWORD *)sub_5C3110(ParentMenu, *(unsigned __int8 **)&v270.m_dataLen, (int)a2.m_data);
          *(float *)&a2.m_dataLen = Tile_GetFloat(v198, *(int *)&a2.m_dataLen);
          Tile_SetFloat(v273, (_DWORD *)0xFAE, *(float *)&a2.m_dataLen);
          v199 = (char *)dword_B38F70;
          *(_DWORD *)&a2.m_dataLen = 0xFD0;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v199);
          v200 = (_DWORD *)sub_5C3110(ParentMenu, *(unsigned __int8 **)&v270.m_dataLen, (int)a2.m_data);
          *(float *)&a2.m_dataLen = Tile_GetFloat(v200, *(int *)&a2.m_dataLen);
          Tile_SetFloat(v273, (_DWORD *)0xFAF, *(float *)&a2.m_dataLen);
          if ( !byte_B14500
            && (v201 = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef),
                _mbscmp(&byte_B3B4D0, (const unsigned __int8 *)v201))
            && (v202 = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef),
                _mbscmp("Bendu Olo", (const unsigned __int8 *)v202)) )
          {
            *(_DWORD *)&a2.m_dataLen = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          }
          else
          {
            Name = TESObjectREFR_GetName((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            v204 = &byte_B3B4D0;
            do
            {
              v205 = *Name;
              *v204++ = *Name++;
            }
            while ( v205 );
            *(_DWORD *)&a2.m_dataLen = dword_B39440;
          }
          Tile_SetString((_DWORD *)ParentMenu[1].members.unk08, (_DWORD *)0xFDE, *(char **)&a2.m_dataLen);
          Tile_SetFloat((Tile *)ParentMenu[1].members.unk08, (_DWORD *)0xFF0, fConstant_2);
          sub_5C7BA0((float *)ParentMenu, 1);
          if ( byte_B14500 )
          {
            sub_5C6EA0(ParentMenu);
            byte_B14500 = 0;
          }
          else
          {
            v206 = sub_51FE90((_BYTE *)v15->member.hair);
            v207 = (char *)dword_B39330;
            if ( v206 )
            {
              *(_DWORD *)&a2.m_dataLen = 1;
              a2.m_data = (char *)0xFBB;
              v276 = COERCE_FLOAT(&v270);
              BSStringT_constr_str(&v270, v207);
              v215 = (char *)dword_B38F88;
              v275 = COERCE_FLOAT(&v269);
              v277 = 0x18;
              BSStringT_constr_str(&v269, v215);
              v277 = 0xFFFFFFFF;
              v216 = (Tile *)sub_5C3440(
                               ParentMenu,
                               v269.m_data,
                               *(int *)&v269.m_dataLen,
                               (unsigned __int8 *)v270.m_data,
                               *(int *)&v270.m_dataLen);
              sub_578ED0(v216, (Tile *)a2.m_data, *(signed int *)&a2.m_dataLen);
              v217 = (char *)dword_B39330;
              *(_DWORD *)&a2.m_dataLen = word_A36430;
              a2.m_data = (char *)0xFB4;
              v276 = COERCE_FLOAT(&v270);
              BSStringT_constr_str(&v270, v217);
              v218 = (char *)dword_B38F88;
              v275 = COERCE_FLOAT(&v269);
              v277 = 0x19;
              BSStringT_constr_str(&v269, v218);
              v277 = 0xFFFFFFFF;
              v219 = (_DWORD *)sub_5C3440(
                                 ParentMenu,
                                 v269.m_data,
                                 *(int *)&v269.m_dataLen,
                                 (unsigned __int8 *)v270.m_data,
                                 *(int *)&v270.m_dataLen);
              Tile_SetString(v219, a2.m_data, *(char **)&a2.m_dataLen);
              v220 = (char *)dword_B38FC0;
              *(_DWORD *)&a2.m_dataLen = 1;
              a2.m_data = (char *)0xFBB;
              v276 = COERCE_FLOAT(&v270);
              BSStringT_constr_str(&v270, v220);
              v221 = (char *)dword_B38F88;
              v275 = COERCE_FLOAT(&v269);
              v277 = 0x1A;
              BSStringT_constr_str(&v269, v221);
              v277 = 0xFFFFFFFF;
              v222 = (Tile *)sub_5C3440(
                               ParentMenu,
                               v269.m_data,
                               *(int *)&v269.m_dataLen,
                               (unsigned __int8 *)v270.m_data,
                               *(int *)&v270.m_dataLen);
              sub_578ED0(v222, (Tile *)a2.m_data, *(signed int *)&a2.m_dataLen);
              v223 = (char *)dword_B38FC8;
              *(_DWORD *)&a2.m_dataLen = 1;
              a2.m_data = (char *)0xFBB;
              v276 = COERCE_FLOAT(&v270);
              BSStringT_constr_str(&v270, v223);
              v224 = (char *)dword_B38F88;
              v275 = COERCE_FLOAT(&v269);
              v277 = 0x1B;
              BSStringT_constr_str(&v269, v224);
              v277 = 0xFFFFFFFF;
              v225 = (Tile *)sub_5C3440(
                               ParentMenu,
                               v269.m_data,
                               *(int *)&v269.m_dataLen,
                               (unsigned __int8 *)v270.m_data,
                               *(int *)&v270.m_dataLen);
              sub_578ED0(v225, (Tile *)a2.m_data, *(signed int *)&a2.m_dataLen);
              v226 = (char *)dword_B38FD0;
              *(_DWORD *)&a2.m_dataLen = 1;
              a2.m_data = (char *)0xFBB;
              v276 = COERCE_FLOAT(&v270);
              BSStringT_constr_str(&v270, v226);
              v227 = (char *)dword_B38F88;
              v275 = COERCE_FLOAT(&v269);
              v277 = 0x1C;
              BSStringT_constr_str(&v269, v227);
              v277 = 0xFFFFFFFF;
              v228 = (Tile *)sub_5C3440(
                               ParentMenu,
                               v269.m_data,
                               *(int *)&v269.m_dataLen,
                               (unsigned __int8 *)v270.m_data,
                               *(int *)&v270.m_dataLen);
              sub_578ED0(v228, (Tile *)a2.m_data, *(signed int *)&a2.m_dataLen);
            }
            else
            {
              *(_DWORD *)&a2.m_dataLen = 0xFAE;
              v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
              BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v207);
              v208 = (char *)dword_B38F88;
              v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
              v277 = 0x16;
              BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v208);
              v277 = 0xFFFFFFFF;
              v209 = (_DWORD *)sub_5C3440(
                                 ParentMenu,
                                 *(char **)&v269.m_dataLen,
                                 (int)v270.m_data,
                                 *(unsigned __int8 **)&v270.m_dataLen,
                                 (int)a2.m_data);
              Float = Tile_GetFloat(v209, *(int *)&a2.m_dataLen);
              v211 = Double_To_SInt32(Float);
              v212 = (char *)dword_B39330;
              *(_DWORD *)&a2.m_dataLen = *(&ParentMenu[0x3A].members.id + 2 * v211);
              a2.m_data = (char *)0xFB4;
              v276 = COERCE_FLOAT(&v270);
              BSStringT_constr_str(&v270, v212);
              v213 = (char *)dword_B38F88;
              v275 = COERCE_FLOAT(&v269);
              v277 = 0x17;
              BSStringT_constr_str(&v269, v213);
              v277 = 0xFFFFFFFF;
              v214 = (_DWORD *)sub_5C3440(
                                 ParentMenu,
                                 v269.m_data,
                                 *(int *)&v269.m_dataLen,
                                 (unsigned __int8 *)v270.m_data,
                                 *(int *)&v270.m_dataLen);
              Tile_SetString(v214, a2.m_data, *(char **)&a2.m_dataLen);
            }
          }
          v229 = (char *)dword_B39330;
          *(_DWORD *)&a2.m_dataLen = 0xFBB;
          v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
          BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v229);
          v230 = (char *)dword_B38F88;
          v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
          v277 = 0x1D;
          BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v230);
          v277 = 0xFFFFFFFF;
          v231 = (_DWORD *)sub_5C3440(
                             ParentMenu,
                             *(char **)&v269.m_dataLen,
                             (int)v270.m_data,
                             *(unsigned __int8 **)&v270.m_dataLen,
                             (int)a2.m_data);
          v232 = Tile_GetFloat(v231, *(int *)&a2.m_dataLen);
          if ( v232 == fConstant_2 )
          {
            v233 = (char *)dword_B38FC0;
            *(_DWORD *)&a2.m_dataLen = 0xFAE;
            v276 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
            BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v233);
            v234 = (char *)dword_B38F88;
            v275 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
            v277 = 0x1E;
            BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v234);
            v277 = 0xFFFFFFFF;
            v235 = (_DWORD *)sub_5C3440(
                               ParentMenu,
                               *(char **)&v269.m_dataLen,
                               (int)v270.m_data,
                               *(unsigned __int8 **)&v270.m_dataLen,
                               (int)a2.m_data);
            v276 = Tile_GetFloat(v235, *(int *)&a2.m_dataLen);
            v236 = (char *)dword_B38FC8;
            *(_DWORD *)&a2.m_dataLen = 0xFAE;
            v275 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
            BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v236);
            v237 = (char *)dword_B38F88;
            p_m_dataLen = &v269.m_dataLen;
            v277 = 0x1F;
            BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v237);
            v277 = 0xFFFFFFFF;
            v238 = (_DWORD *)sub_5C3440(
                               ParentMenu,
                               *(char **)&v269.m_dataLen,
                               (int)v270.m_data,
                               *(unsigned __int8 **)&v270.m_dataLen,
                               (int)a2.m_data);
            v275 = Tile_GetFloat(v238, *(int *)&a2.m_dataLen);
            v239 = (char *)dword_B38FD0;
            *(_DWORD *)&a2.m_dataLen = 0xFAE;
            p_m_dataLen = &v270.m_dataLen;
            BSStringT_constr_str((BSStringT *)&v270.m_dataLen, v239);
            v240 = (char *)dword_B38F88;
            v272 = COERCE_FLOAT((BSStringT *)&v269.m_dataLen);
            v277 = 0x20;
            BSStringT_constr_str((BSStringT *)&v269.m_dataLen, v240);
            v277 = 0xFFFFFFFF;
            v241 = (_DWORD *)sub_5C3440(
                               ParentMenu,
                               *(char **)&v269.m_dataLen,
                               (int)v270.m_data,
                               *(unsigned __int8 **)&v270.m_dataLen,
                               (int)a2.m_data);
            v272 = Tile_GetFloat(v241, *(int *)&a2.m_dataLen);
            v242 = dbl_A3DDD8;
            p_m_dataLen = (__int16 *)(int)(v272 * v242);
            HIBYTE(v243) = (_BYTE)p_m_dataLen;
            a3 = v275 * v242;
            LODWORD(v275) = (int)a3;
            LOBYTE(v243) = (int)a3;
            v232 = v242 * v276;
            LODWORD(v276) = (unsigned __int8)(int)v232 | (v243 << 8);
            v272 = 0.0;
            do
            {
              if ( LODWORD(v276) == *p_unk08 )
              {
                v232 = (double)SLODWORD(v272);
                v244 = (const char *)dword_B39330;
                *(float *)&a2.m_dataLen = v232;
                v275 = COERCE_FLOAT((BSStringT *)&v270.m_dataLen);
                *(_DWORD *)&v270.m_dataLen = 0;
                a2.m_data = 0;
                BSStringT_Set((BSStringT *)&v270.m_dataLen, v244, 0);
                v245 = (const char *)dword_B38F88;
                p_m_dataLen = &v269.m_dataLen;
                v277 = 0x21;
                *(_DWORD *)&v269.m_dataLen = 0;
                v270.m_data = 0;
                BSStringT_Set((BSStringT *)&v269.m_dataLen, v245, 0);
                v277 = 0xFFFFFFFF;
                v246 = (Tile *)sub_5C3440(
                                 ParentMenu,
                                 *(char **)&v269.m_dataLen,
                                 (int)v270.m_data,
                                 *(unsigned __int8 **)&v270.m_dataLen,
                                 (int)a2.m_data);
                sub_5C2B50(v246, *(float *)&a2.m_dataLen);
              }
              ++p_unk08;
              ++LODWORD(v272);
            }
            while ( SLODWORD(v272) < 0x10 );
          }
          sub_5C7070(0);
          if ( sub_5790E0(0x3E9, 0) )
            Tile_SetFloat(v273, (_DWORD *)0xFA1, 1.0);
          else
            EnableMenu(ParentMenu, a1, a3, v232, 0);
          LOBYTE(ParentMenu[0x36].members.unk24) = TESDataHandler_g_PlayerRef->isThirdPerson;
          TogglePOV(TESDataHandler_g_PlayerRef, 0);
          Menu_UPdateCamera___(ParentMenu, COERCE_INT(1.0), 0.0);
          ((void (__thiscall *)(LowProcess *, PlayerCharacter *))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_E0)(
            TESDataHandler_g_PlayerRef->super.super.super.process,
            TESDataHandler_g_PlayerRef);
          ParentMenu[0x36].members.id = Seed;
        }
        else
        {
          PrintError("Race/Sex Menu Creation Failed... Are your menu and art resources up to date?");
        }
      }
      else if ( ParentMenu->members.tile )
      {
        ParentMenu->__vftable->Destructor(ParentMenu, 1);
      }
    }
  }
}
