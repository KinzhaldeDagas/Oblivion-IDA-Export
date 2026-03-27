signed int *__usercall sub_61EB80@<eax>(
        double a1@<st1>,
        double a2@<st0>,
        TESObjectREFR *a3,
        int a4,
        signed int *a5,
        signed int *a6)
{
  int v6; // ebp
  signed int v7; // eax
  TESObjectREFR *v8; // edi
  double v9; // st5
  int v10; // ebp
  double v11; // st4
  double v12; // st5
  double v13; // st4
  double v14; // st5
  double v15; // st5
  char *Name; // eax
  int v17; // ebp
  double v18; // st5
  double v19; // st5
  double v20; // st5
  double v21; // st5
  double v22; // st7
  double v23; // st7
  PlayerCharacter *v24; // ecx
  int v25; // ebp
  bool (__thiscall **p_IsMagicItemUsable)(MagicCaster *, MagicItem *, float *, UInt32 *, bool); // esi
  int CurrentMagicItem; // eax
  const char *v28; // eax
  BSStringT *v29; // esi
  PlayerCharacter *v30; // ecx
  const char *v31; // eax
  double v32; // st5
  Actor *v33; // eax
  Actor *v34; // eax
  Actor *v35; // ebp
  double v36; // st5
  TESObjectREFR *v37; // eax
  TESObjectREFR *v38; // esi
  int v39; // eax
  PlayerCharacter ***v40; // eax
  PlayerCharacter **v41; // ecx
  double v42; // st5
  char *v43; // eax
  int ExtraDataFollower; // eax
  TESObjectREFR **i; // edi
  TESObjectREFR *v46; // esi
  _DWORD *v47; // eax
  double v48; // st5
  char *v49; // eax
  Actor *v50; // eax
  Actor *v51; // eax
  Actor *v52; // ebp
  double v53; // st5
  TESObjectREFR *v54; // eax
  TESObjectREFR *v55; // esi
  int v56; // eax
  PlayerCharacter ***v57; // eax
  PlayerCharacter **v58; // ecx
  double v59; // st5
  char *v60; // eax
  int v61; // eax
  TESObjectREFR **j; // edi
  TESObjectREFR *v63; // esi
  _DWORD *v64; // eax
  double v65; // st5
  char *v66; // eax
  Actor *v67; // eax
  Actor *v68; // eax
  Actor *v69; // ebp
  double v70; // st5
  TESObjectREFR *v71; // eax
  TESObjectREFR *v72; // esi
  int v73; // eax
  PlayerCharacter ***v74; // eax
  PlayerCharacter **v75; // ecx
  double v76; // st5
  char *v77; // eax
  int v78; // eax
  TESObjectREFR **k; // edi
  TESObjectREFR *v80; // esi
  _DWORD *v81; // eax
  double v82; // st5
  char *v83; // eax
  Actor *v84; // eax
  Actor *v85; // eax
  Actor *v86; // ebp
  double v87; // st5
  TESObjectREFR *v88; // eax
  TESObjectREFR *v89; // esi
  int v90; // eax
  PlayerCharacter ***v91; // eax
  PlayerCharacter **v92; // ecx
  double v93; // st5
  char *v94; // eax
  int v95; // eax
  TESObjectREFR **m; // edi
  TESObjectREFR *v97; // esi
  _DWORD *v98; // eax
  double v99; // st5
  char *v100; // eax
  double v101; // st5
  double v102; // st5
  int v103; // ebp
  int v104; // eax
  int v105; // eax
  double v106; // st7
  TESObjectREFR *v107; // eax
  char *v108; // eax
  int *v109; // eax
  int *v110; // esi
  int v111; // eax
  char *v112; // eax
  int v113; // ebp
  float v114; // eax
  double v115; // st5
  TESObjectREFR *v116; // esi
  bool v117; // zf
  double v118; // st7
  TESObjectREFRVtbl *vtbl; // edx
  UInt32 refID; // eax
  char *v121; // eax
  double v122; // st5
  signed int *result; // eax
  signed int v124; // ecx
  double v125; // [esp+1Ch] [ebp-144h]
  double v126; // [esp+24h] [ebp-13Ch]
  float v127; // [esp+2Ch] [ebp-134h]
  float v128; // [esp+2Ch] [ebp-134h]
  float v129; // [esp+2Ch] [ebp-134h]
  float v130; // [esp+2Ch] [ebp-134h]
  float v131; // [esp+2Ch] [ebp-134h]
  float v132; // [esp+2Ch] [ebp-134h]
  double v133; // [esp+2Ch] [ebp-134h]
  float v134; // [esp+2Ch] [ebp-134h]
  float v135; // [esp+2Ch] [ebp-134h]
  float v136; // [esp+2Ch] [ebp-134h]
  float v137; // [esp+2Ch] [ebp-134h]
  float v138; // [esp+2Ch] [ebp-134h]
  float v139; // [esp+2Ch] [ebp-134h]
  float v140; // [esp+2Ch] [ebp-134h]
  float v141; // [esp+2Ch] [ebp-134h]
  float v142; // [esp+2Ch] [ebp-134h]
  float v143; // [esp+2Ch] [ebp-134h]
  float v144; // [esp+2Ch] [ebp-134h]
  float v145; // [esp+2Ch] [ebp-134h]
  float v146; // [esp+2Ch] [ebp-134h]
  float v147; // [esp+2Ch] [ebp-134h]
  float v148; // [esp+2Ch] [ebp-134h]
  float v149; // [esp+2Ch] [ebp-134h]
  float v150; // [esp+2Ch] [ebp-134h]
  float v151; // [esp+2Ch] [ebp-134h]
  float v152; // [esp+2Ch] [ebp-134h]
  float v153; // [esp+2Ch] [ebp-134h]
  float v154; // [esp+30h] [ebp-130h]
  float v155; // [esp+30h] [ebp-130h]
  float v156; // [esp+30h] [ebp-130h]
  float v157; // [esp+30h] [ebp-130h]
  float v158; // [esp+30h] [ebp-130h]
  float v159; // [esp+30h] [ebp-130h]
  float v160; // [esp+30h] [ebp-130h]
  float v161; // [esp+30h] [ebp-130h]
  float v162; // [esp+30h] [ebp-130h]
  float v163; // [esp+30h] [ebp-130h]
  float v164; // [esp+30h] [ebp-130h]
  float v165; // [esp+30h] [ebp-130h]
  float v166; // [esp+30h] [ebp-130h]
  float v167; // [esp+30h] [ebp-130h]
  float v168; // [esp+30h] [ebp-130h]
  float v169; // [esp+30h] [ebp-130h]
  float v170; // [esp+30h] [ebp-130h]
  float v171; // [esp+30h] [ebp-130h]
  float v172; // [esp+30h] [ebp-130h]
  float v173; // [esp+30h] [ebp-130h]
  float v174; // [esp+30h] [ebp-130h]
  float v175; // [esp+30h] [ebp-130h]
  float v176; // [esp+30h] [ebp-130h]
  float v177; // [esp+30h] [ebp-130h]
  float v178; // [esp+30h] [ebp-130h]
  float v179; // [esp+30h] [ebp-130h]
  UInt32 v180; // [esp+30h] [ebp-130h]
  float v181; // [esp+30h] [ebp-130h]
  float v182; // [esp+30h] [ebp-130h]
  double v183; // [esp+34h] [ebp-12Ch]
  double v185; // [esp+34h] [ebp-12Ch]
  int v186; // [esp+38h] [ebp-128h]
  int v187; // [esp+38h] [ebp-128h]
  int v188; // [esp+50h] [ebp-110h] BYREF
  float v189; // [esp+54h] [ebp-10Ch] BYREF
  float unk640; // [esp+58h] [ebp-108h]
  signed int v191[3]; // [esp+5Ch] [ebp-104h] BYREF
  signed int *v192; // [esp+68h] [ebp-F8h]
  signed int *v193; // [esp+6Ch] [ebp-F4h]
  float v194[3]; // [esp+70h] [ebp-F0h] BYREF
  float v195[3]; // [esp+7Ch] [ebp-E4h] BYREF
  char v196[200]; // [esp+88h] [ebp-D8h] BYREF
  unsigned int v197; // [esp+15Ch] [ebp-4h]

  v6 = *a5;
  v192 = a5;
  v7 = *a6;
  v193 = a6;
  v188 = v6;
  v191[0] = v7;
  v8 = (TESObjectREFR *)OblivionDynamicCast(
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  _sprintf(v196, "COMBAT INFO: %d actors in combat with PC, %d in combat total", dword_B3B90C, dword_B3B914);
  v154 = (float)v6;
  v9 = (double)iDebugTextLeftRightOffset;
  v127 = v9;
  InterfaceMgr_DebugTextLine(v6, v9, a1, a2, v196, v127, v154, 1, 0xFFFFFFFF);
  v189 = fNumberOfWeightedProjectileExisting;
  v10 = a4 + v6;
  v11 = v189;
  v188 = v10;
  unk640 = *(float *)&v10;
  v12 = v189;
  if ( v189 > 0.0 )
  {
    if ( byte_B333B8 )
      v13 = fMagicTrackingLimitComplex;
    else
      v13 = fMagicTrackingLimit;
    v189 = v13;
    v11 = v189;
    _sprintf(v196, "Magic Projectile tracking value: %.2f/%.2f", v12, v189);
    v155 = (float)v188;
    v14 = (double)iDebugTextLeftRightOffset;
    v128 = v14;
    InterfaceMgr_DebugTextLine(v10, v14, a1, a2, v196, v128, v155, 1, 0xFFFFFFFF);
    v10 += a4;
    v188 = v10;
  }
  v156 = (float)v188;
  v15 = (double)iDebugTextLeftRightOffset;
  v129 = v15;
  Name = TESObjectREFR_GetName(a3);
  InterfaceMgr_DebugTextLine(v10, v15, a1, a2, Name, v129, v156, 1, 0xFFFFFFFF);
  v17 = a4 + v10;
  v188 = v17;
  if ( v8 )
  {
    if ( v8 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      v158 = (float)v188;
      v19 = (double)iDebugTextLeftRightOffset;
      v131 = v19;
      InterfaceMgr_DebugTextLine(
        v17,
        v19,
        a1,
        a2,
        "Current ref is the player -- no combat info to display.",
        v131,
        v158,
        1,
        0xFFFFFFFF);
      unk640 = TESDataHandler_g_PlayerRef->unk640;
      v183 = *(float *)&flt_B3BAFC.vtbl;
      v188 = a4 + v17;
      _sprintf(v196, "Bow Timer: %.2f zoom timer: %.2f", unk640, v183);
      v159 = (float)(a4 + v17);
      v20 = (double)iDebugTextLeftRightOffset;
      v132 = v20;
      InterfaceMgr_DebugTextLine(a4 + v17, v20, a1, a2, v196, v132, v159, 1, 0xFFFFFFFF);
      v188 = a4 + a4 + v17;
      v21 = sub_5E3C80(v8);
      v133 = sub_5E3AD0(v8);
      v126 = sub_5E3920(v8);
      v125 = sub_5E3750(v8);
      v22 = sub_5E3590((Actor *)v8);
      _sprintf(v196, "SPEEDS: Walk: %.2f Run: %.2f Swim: %.2f SwimFast: %.2f Fly: %.2f", v22, v125, v126, v133, a2);
      v160 = (float)v188;
      v23 = (double)iDebugTextLeftRightOffset;
      v134 = v23;
      InterfaceMgr_DebugTextLine(v188, v21, a1, v23, v196, v134, v160, 1, 0xFFFFFFFF);
      v24 = TESDataHandler_g_PlayerRef;
      v25 = a4 + v188;
      v188 += a4;
      v189 = 0.0;
      if ( Player_GetCurrentMagicItem(v24) )
      {
        p_IsMagicItemUsable = &TESDataHandler_g_PlayerRef->super.super.magicCaster.vtbl->IsMagicItemUsable;
        CurrentMagicItem = Player_GetCurrentMagicItem(TESDataHandler_g_PlayerRef);
        if ( ((unsigned __int8 (__usercall *)@<al>(MagicCaster *@<ecx>, int, _DWORD, float *, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>))*p_IsMagicItemUsable)(
               &TESDataHandler_g_PlayerRef->super.super.magicCaster,
               CurrentMagicItem,
               0,
               &v189,
               0,
               v23,
               a1,
               v21,
               v11) )
        {
          v28 = *(const char **)(Player_GetCurrentMagicItem(TESDataHandler_g_PlayerRef) + 4);
          if ( !v28 )
            v28 = EmptyString;
          _sprintf(v196, "Selected Spell: %s (can cast)", v28);
        }
        else
        {
          v186 = LODWORD(v189);
          Player_GetCurrentMagicItem(TESDataHandler_g_PlayerRef);
          v29 = Magic_CastFailureMsg((BSStringT *)&v191[1], v186);
          v30 = TESDataHandler_g_PlayerRef;
          v197 = 0;
          v31 = *(const char **)(Player_GetCurrentMagicItem(v30) + 4);
          if ( !v31 )
            v31 = EmptyString;
          _sprintf(v196, "Selected Spell: %s Cannot Cast: %s", v31, v29->m_data);
          v197 = 0xFFFFFFFF;
          FormHeapFree(v191[1]);
        }
        v161 = (float)v188;
        v32 = (double)iDebugTextLeftRightOffset;
        v135 = v32;
        InterfaceMgr_DebugTextLine(v25, v32, a1, v23, v196, v135, v161, 1, 0xFFFFFFFF);
        v188 = a4 + v25;
      }
      v33 = sub_673A50(&ActorProcessManager_ptr, 0);
      v34 = sub_7616D0((ActorList *)v33);
      v35 = v34;
      if ( v34 )
      {
        if ( *(_DWORD *)&v34->members.super.super.super.type || v34->vtbl )
        {
          v162 = (float)v188;
          v36 = (double)iDebugTextLeftRightOffset;
          v136 = v36;
          InterfaceMgr_DebugTextLine(
            (char)v34,
            v36,
            a1,
            v23,
            "High Process Actors targeting the Player",
            v136,
            v162,
            1,
            0xFFFFFFFF);
          v188 += a4;
        }
        do
        {
          if ( !*(_DWORD *)&v35->members.super.super.super.type && !v35->vtbl )
            break;
          v37 = (TESObjectREFR *)OblivionDynamicCast(
                                   v35->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v35 = *(Actor **)&v35->members.super.super.super.type;
          v38 = v37;
          if ( v37 )
          {
            v39 = ((int (__thiscall *)(TESObjectREFR *))v37->vtbl[1].IsMobileObject)(v37);
            if ( v39 )
            {
              v40 = *(PlayerCharacter ****)(v39 + 0x40);
              if ( v40 )
              {
                do
                {
                  v41 = v40[1];
                  if ( !v41 && !*v40 )
                    break;
                  if ( **v40 == TESDataHandler_g_PlayerRef )
                  {
                    v163 = (float)v188;
                    v42 = (double)iDebugTextLeftRightOffset;
                    v137 = v42;
                    v43 = TESObjectREFR_GetName(v38);
                    InterfaceMgr_DebugTextLine((char)v35, v42, a1, v23, v43, v137, v163, 1, 0xFFFFFFFF);
                    v188 += a4;
                    break;
                  }
                  v40 = (PlayerCharacter ***)v40[1];
                }
                while ( v41 );
              }
            }
            ExtraDataFollower = GetExtraDataFollower();
            if ( ExtraDataFollower )
            {
              for ( i = *(TESObjectREFR ***)(ExtraDataFollower + 0xC); i; i = (TESObjectREFR **)i[1] )
              {
                v46 = *i;
                if ( !*i )
                  break;
                if ( v46[1].vtbl )
                {
                  v47 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v46->vtbl[1].IsMobileObject)(*i);
                  if ( v47 )
                  {
                    if ( sub_613670(v47, (int)TESDataHandler_g_PlayerRef) )
                    {
                      v164 = (float)v188;
                      v48 = (double)iDebugTextLeftRightOffset;
                      v138 = v48;
                      v49 = TESObjectREFR_GetName(v46);
                      InterfaceMgr_DebugTextLine((char)v35, v48, a1, v23, v49, v138, v164, 1, 0xFFFFFFFF);
                      v188 += a4;
                    }
                  }
                }
              }
            }
          }
        }
        while ( v35 );
      }
      v50 = sub_673A50(&ActorProcessManager_ptr, 1);
      v51 = sub_7616D0((ActorList *)v50);
      v52 = v51;
      if ( v51 )
      {
        if ( *(_DWORD *)&v51->members.super.super.super.type || v51->vtbl )
        {
          v165 = (float)v188;
          v53 = (double)iDebugTextLeftRightOffset;
          v139 = v53;
          InterfaceMgr_DebugTextLine(
            (char)v51,
            v53,
            a1,
            v23,
            "Middle High Process Actors targeting the Player",
            v139,
            v165,
            1,
            0xFFFFFFFF);
          v188 += a4;
        }
        do
        {
          if ( !*(_DWORD *)&v52->members.super.super.super.type && !v52->vtbl )
            break;
          v54 = (TESObjectREFR *)OblivionDynamicCast(
                                   v52->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v52 = *(Actor **)&v52->members.super.super.super.type;
          v55 = v54;
          if ( v54 )
          {
            v56 = ((int (__thiscall *)(TESObjectREFR *))v54->vtbl[1].IsMobileObject)(v54);
            if ( v56 )
            {
              v57 = *(PlayerCharacter ****)(v56 + 0x40);
              if ( v57 )
              {
                do
                {
                  v58 = v57[1];
                  if ( !v58 && !*v57 )
                    break;
                  if ( **v57 == TESDataHandler_g_PlayerRef )
                  {
                    v166 = (float)v188;
                    v59 = (double)iDebugTextLeftRightOffset;
                    v140 = v59;
                    v60 = TESObjectREFR_GetName(v55);
                    InterfaceMgr_DebugTextLine((char)v52, v59, a1, v23, v60, v140, v166, 1, 0xFFFFFFFF);
                    v188 += a4;
                    break;
                  }
                  v57 = (PlayerCharacter ***)v57[1];
                }
                while ( v58 );
              }
            }
            v61 = GetExtraDataFollower();
            if ( v61 )
            {
              for ( j = *(TESObjectREFR ***)(v61 + 0xC); j; j = (TESObjectREFR **)j[1] )
              {
                v63 = *j;
                if ( !*j )
                  break;
                if ( v63[1].vtbl )
                {
                  v64 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v63->vtbl[1].IsMobileObject)(*j);
                  if ( v64 )
                  {
                    if ( sub_613670(v64, (int)TESDataHandler_g_PlayerRef) )
                    {
                      v167 = (float)v188;
                      v65 = (double)iDebugTextLeftRightOffset;
                      v141 = v65;
                      v66 = TESObjectREFR_GetName(v63);
                      InterfaceMgr_DebugTextLine((char)v52, v65, a1, v23, v66, v141, v167, 1, 0xFFFFFFFF);
                      v188 += a4;
                    }
                  }
                }
              }
            }
          }
        }
        while ( v52 );
      }
      v67 = sub_673A50(&ActorProcessManager_ptr, 2);
      v68 = sub_7616D0((ActorList *)v67);
      v69 = v68;
      if ( v68 )
      {
        if ( *(_DWORD *)&v68->members.super.super.super.type || v68->vtbl )
        {
          v168 = (float)v188;
          v70 = (double)iDebugTextLeftRightOffset;
          v142 = v70;
          InterfaceMgr_DebugTextLine(
            (char)v68,
            v70,
            a1,
            v23,
            "Middle Low Process Actors targeting the Player",
            v142,
            v168,
            1,
            0xFFFFFFFF);
          v188 += a4;
        }
        do
        {
          if ( !*(_DWORD *)&v69->members.super.super.super.type && !v69->vtbl )
            break;
          v71 = (TESObjectREFR *)OblivionDynamicCast(
                                   v69->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v69 = *(Actor **)&v69->members.super.super.super.type;
          v72 = v71;
          if ( v71 )
          {
            v73 = ((int (__thiscall *)(TESObjectREFR *))v71->vtbl[1].IsMobileObject)(v71);
            if ( v73 )
            {
              v74 = *(PlayerCharacter ****)(v73 + 0x40);
              if ( v74 )
              {
                do
                {
                  v75 = v74[1];
                  if ( !v75 && !*v74 )
                    break;
                  if ( **v74 == TESDataHandler_g_PlayerRef )
                  {
                    v169 = (float)v188;
                    v76 = (double)iDebugTextLeftRightOffset;
                    v143 = v76;
                    v77 = TESObjectREFR_GetName(v72);
                    InterfaceMgr_DebugTextLine((char)v69, v76, a1, v23, v77, v143, v169, 1, 0xFFFFFFFF);
                    v188 += a4;
                    break;
                  }
                  v74 = (PlayerCharacter ***)v74[1];
                }
                while ( v75 );
              }
            }
            v78 = GetExtraDataFollower();
            if ( v78 )
            {
              for ( k = *(TESObjectREFR ***)(v78 + 0xC); k; k = (TESObjectREFR **)k[1] )
              {
                v80 = *k;
                if ( !*k )
                  break;
                if ( v80[1].vtbl )
                {
                  v81 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v80->vtbl[1].IsMobileObject)(*k);
                  if ( v81 )
                  {
                    if ( sub_613670(v81, (int)TESDataHandler_g_PlayerRef) )
                    {
                      v170 = (float)v188;
                      v82 = (double)iDebugTextLeftRightOffset;
                      v144 = v82;
                      v83 = TESObjectREFR_GetName(v80);
                      InterfaceMgr_DebugTextLine((char)v69, v82, a1, v23, v83, v144, v170, 1, 0xFFFFFFFF);
                      v188 += a4;
                    }
                  }
                }
              }
            }
          }
        }
        while ( v69 );
      }
      v84 = sub_673A50(&ActorProcessManager_ptr, 3);
      v85 = sub_7616D0((ActorList *)v84);
      v86 = v85;
      if ( v85 )
      {
        if ( *(_DWORD *)&v85->members.super.super.super.type || v85->vtbl )
        {
          v171 = (float)v188;
          v87 = (double)iDebugTextLeftRightOffset;
          v145 = v87;
          InterfaceMgr_DebugTextLine(
            (char)v85,
            v87,
            a1,
            v23,
            "Low Process Actors targeting the Player",
            v145,
            v171,
            1,
            0xFFFFFFFF);
          v188 += a4;
        }
        do
        {
          if ( !*(_DWORD *)&v86->members.super.super.super.type && !v86->vtbl )
            break;
          v88 = (TESObjectREFR *)OblivionDynamicCast(
                                   v86->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v86 = *(Actor **)&v86->members.super.super.super.type;
          v89 = v88;
          if ( v88 )
          {
            v90 = ((int (__thiscall *)(TESObjectREFR *))v88->vtbl[1].IsMobileObject)(v88);
            if ( v90 )
            {
              v91 = *(PlayerCharacter ****)(v90 + 0x40);
              if ( v91 )
              {
                do
                {
                  v92 = v91[1];
                  if ( !v92 && !*v91 )
                    break;
                  if ( **v91 == TESDataHandler_g_PlayerRef )
                  {
                    v172 = (float)v188;
                    v93 = (double)iDebugTextLeftRightOffset;
                    v146 = v93;
                    v94 = TESObjectREFR_GetName(v89);
                    InterfaceMgr_DebugTextLine((char)v86, v93, a1, v23, v94, v146, v172, 1, 0xFFFFFFFF);
                    v188 += a4;
                    break;
                  }
                  v91 = (PlayerCharacter ***)v91[1];
                }
                while ( v92 );
              }
            }
            v95 = GetExtraDataFollower();
            if ( v95 )
            {
              for ( m = *(TESObjectREFR ***)(v95 + 0xC); m; m = (TESObjectREFR **)m[1] )
              {
                v97 = *m;
                if ( !*m )
                  break;
                if ( v97[1].vtbl )
                {
                  v98 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v97->vtbl[1].IsMobileObject)(*m);
                  if ( v98 )
                  {
                    if ( sub_613670(v98, (int)TESDataHandler_g_PlayerRef) )
                    {
                      v173 = (float)v188;
                      v99 = (double)iDebugTextLeftRightOffset;
                      v147 = v99;
                      v100 = TESObjectREFR_GetName(v97);
                      InterfaceMgr_DebugTextLine((char)v86, v99, a1, v23, v100, v147, v173, 1, 0xFFFFFFFF);
                      v188 += a4;
                    }
                  }
                }
              }
            }
          }
        }
        while ( v86 );
      }
    }
    else if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v8->vtbl[1].GetSleepState)(v8, 1) )
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))v8->vtbl[1].IsMobileObject)(v8) )
      {
        v103 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))v8->vtbl[1].IsMobileObject)(
                 v8,
                 a2,
                 a1);
        v104 = sub_6135F0(v103);
        sub_61A090(a1, a2, (int *)v8, v104, 1, a4, &v188, (int **)v191);
        v105 = sub_6135F0(v103);
        v176 = (float)v191[0];
        LODWORD(v189) = 0x500 - iDebugTextLeftRightOffset;
        v106 = (double)SLODWORD(v189);
        v150 = v106;
        if ( v105 )
        {
          v107 = (TESObjectREFR *)sub_6135F0(v103);
          v108 = TESObjectREFR_GetName(v107);
          InterfaceMgr_DebugTextLine(v103, v15, a1, v106, v108, v150, v176, 3, 0xFFFFFFFF);
          v191[0] += a4;
          v109 = (int *)sub_6135F0(v103);
          sub_61A090(a1, v106, v109, (int)v8, 0, a4, &v188, (int **)v191);
        }
        else
        {
          InterfaceMgr_DebugTextLine(v103, v15, a1, v106, "Current ref has no targets.", v150, v176, 3, 0xFFFFFFFF);
          v188 += a4;
        }
        if ( BSSimpleList_Count(*(_DWORD **)(v103 + 0x40)) )
        {
          v177 = (float)v188;
          v106 = (double)iDebugTextLeftRightOffset;
          v151 = v106;
          InterfaceMgr_DebugTextLine(v103, v15, a1, v106, "Current Targets", v151, v177, 1, 0xFFFFFFFF);
          v110 = *(int **)(v103 + 0x40);
          for ( v188 += a4; v110; v110 = (int *)v110[1] )
          {
            if ( !v110[1] && !*v110 )
              break;
            v111 = *v110;
            if ( *v110 )
            {
              if ( *(_DWORD *)v111 )
              {
                v187 = *(_DWORD *)(v111 + 4);
                v112 = TESObjectREFR_GetName(*(TESObjectREFR **)v111);
                _sprintf(v196, "%s: %d", v112, v187);
                v178 = (float)v188;
                v106 = (double)iDebugTextLeftRightOffset;
                v152 = v106;
                InterfaceMgr_DebugTextLine(v103, v15, a1, v106, v196, v152, v178, 1, 0xFFFFFFFF);
                v188 += a4;
              }
            }
          }
        }
        v113 = v103 + 0x15C;
        if ( v113 )
        {
          LODWORD(v114) = 0x500 - iDebugTextLeftRightOffset;
          *(float *)&v191[1] = (float)iDebugTextLeftRightOffset;
          v189 = v114;
          v115 = *(float *)&v191[1];
          a1 = ((double)SLODWORD(v114) - *(float *)&v191[1]) * dbl_A2FAA0;
          v189 = *(float *)&v191[1] + a1;
          v179 = (float)SLODWORD(unk640);
          v106 = v189;
          InterfaceMgr_DebugTextLine(v113, *(float *)&v191[1], a1, v189, "ALLIES", v189, v179, 2, 0xFFFFFFFF);
          LODWORD(unk640) += a4;
          do
          {
            v116 = *(TESObjectREFR **)v113;
            v117 = *(_DWORD *)v113 == 0;
            v113 = *(_DWORD *)(v113 + 4);
            if ( !v117 && v116 != v8 )
            {
              if ( ((int (__thiscall *)(TESObjectREFR *))v116->vtbl[1].IsMobileObject)(v116) )
                v118 = *(float *)(((int (__thiscall *)(TESObjectREFR *))v116->vtbl[1].IsMobileObject)(v116) + 0xCC)
                     * dbl_A30DC8;
              else
                v118 = 0.0;
              vtbl = v116->vtbl;
              *(double *)&v191[1] = v118;
              refID = vtbl->GetBaseForm(v116)->member.refID;
              *(float *)&v191[1] = *(double *)&v191[1];
              v185 = *(float *)&v191[1];
              v180 = refID;
              v121 = TESObjectREFR_GetName(v116);
              _sprintf(v196, "%.20s: (%08X) pos %.2f", v121, v180, v185);
              v181 = (float)SLODWORD(unk640);
              v106 = v189;
              InterfaceMgr_DebugTextLine(v113, v115, a1, v189, v196, v189, v181, 2, 0xFFFFFFFF);
              LODWORD(unk640) += a4;
            }
          }
          while ( v113 );
        }
        ((void (__thiscall *)(TESObjectREFR *, float *))v8->vtbl->Unk_57)(v8, v194);
        ((void (__thiscall *)(TESObjectREFR *, float *))v8->vtbl->Unk_56)(v8, v195);
        _sprintf(
          v196,
          "BOUNDS: (%.2f, %.2f, %.2f)-(%.2f, %.2f, %.2f)",
          v195[0],
          v195[1],
          v195[2],
          v194[0],
          v194[1],
          v194[2]);
        v182 = (float)v188;
        v122 = (double)iDebugTextLeftRightOffset;
        v153 = v122;
        InterfaceMgr_DebugTextLine(v113, v122, a1, v106, v196, v153, v182, 1, 0xFFFFFFFF);
        v188 += a4;
      }
      else
      {
        v175 = (float)v188;
        v102 = (double)iDebugTextLeftRightOffset;
        v149 = v102;
        InterfaceMgr_DebugTextLine(
          v17,
          v102,
          a1,
          a2,
          "Current ref is in combat but has no controller (COMBAT LOW).",
          v149,
          v175,
          1,
          0xFFFFFFFF);
        v188 = a4 + v17;
      }
    }
    else
    {
      v174 = (float)v188;
      v101 = (double)iDebugTextLeftRightOffset;
      v148 = v101;
      InterfaceMgr_DebugTextLine(v17, v101, a1, a2, "Current ref is not in combat.", v148, v174, 1, 0xFFFFFFFF);
      v188 = a4 + v17;
    }
  }
  else
  {
    v157 = (float)v188;
    v18 = (double)iDebugTextLeftRightOffset;
    v130 = v18;
    InterfaceMgr_DebugTextLine(v17, v18, a1, a2, "Current ref is not an actor.", v130, v157, 1, 0xFFFFFFFF);
    v188 = a4 + v17;
  }
  result = v192;
  v124 = v191[0];
  *v192 = v188;
  *v193 = v124;
  return result;
}
