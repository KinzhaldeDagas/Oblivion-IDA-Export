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
  int v9; // ebp
  double v10; // st4
  double v11; // st5
  double v12; // st4
  char *Name; // eax
  int v14; // ebp
  double v15; // st5
  double v16; // st7
  double v17; // st7
  PlayerCharacter *v18; // ecx
  int v19; // ebp
  bool (__thiscall **p_IsMagicItemUsable)(MagicCaster *, MagicItem *, float *, UInt32 *, bool); // esi
  int CurrentMagicItem; // eax
  const char *v22; // eax
  BSStringT *v23; // esi
  PlayerCharacter *v24; // ecx
  const char *v25; // eax
  Actor *ListHead; // eax
  Actor *v27; // eax
  Actor *v28; // ebp
  TESObjectREFR *v29; // eax
  TESObjectREFR *v30; // esi
  int v31; // eax
  PlayerCharacter ***v32; // eax
  PlayerCharacter **v33; // ecx
  char *v34; // eax
  int FollowerExtra; // eax
  TESObjectREFR **i; // edi
  TESObjectREFR *v37; // esi
  _DWORD *v38; // eax
  char *v39; // eax
  Actor *v40; // eax
  Actor *v41; // eax
  Actor *v42; // ebp
  TESObjectREFR *v43; // eax
  TESObjectREFR *v44; // esi
  int v45; // eax
  PlayerCharacter ***v46; // eax
  PlayerCharacter **v47; // ecx
  char *v48; // eax
  int v49; // eax
  TESObjectREFR **j; // edi
  TESObjectREFR *v51; // esi
  _DWORD *v52; // eax
  char *v53; // eax
  Actor *v54; // eax
  Actor *v55; // eax
  Actor *v56; // ebp
  TESObjectREFR *v57; // eax
  TESObjectREFR *v58; // esi
  int v59; // eax
  PlayerCharacter ***v60; // eax
  PlayerCharacter **v61; // ecx
  char *v62; // eax
  int v63; // eax
  TESObjectREFR **k; // edi
  TESObjectREFR *v65; // esi
  _DWORD *v66; // eax
  char *v67; // eax
  Actor *v68; // eax
  Actor *v69; // eax
  Actor *v70; // ebp
  TESObjectREFR *v71; // eax
  TESObjectREFR *v72; // esi
  int v73; // eax
  PlayerCharacter ***v74; // eax
  PlayerCharacter **v75; // ecx
  char *v76; // eax
  int v77; // eax
  TESObjectREFR **m; // edi
  TESObjectREFR *v79; // esi
  _DWORD *v80; // eax
  char *v81; // eax
  int v82; // ebp
  int CurrentTarget; // eax
  int v84; // eax
  double v85; // st7
  TESObjectREFR *v86; // eax
  char *v87; // eax
  int *v88; // eax
  int *v89; // esi
  int v90; // eax
  char *v91; // eax
  int v92; // ebp
  float v93; // eax
  TESObjectREFR *v94; // esi
  bool v95; // zf
  double v96; // st7
  TESObjectREFRVtbl *vtbl; // edx
  UInt32 refID; // eax
  char *v99; // eax
  signed int *result; // eax
  signed int v101; // ecx
  double v102; // [esp+1Ch] [ebp-144h]
  double v103; // [esp+24h] [ebp-13Ch]
  float v104; // [esp+2Ch] [ebp-134h]
  float v105; // [esp+2Ch] [ebp-134h]
  float v106; // [esp+2Ch] [ebp-134h]
  float v107; // [esp+2Ch] [ebp-134h]
  float v108; // [esp+2Ch] [ebp-134h]
  float v109; // [esp+2Ch] [ebp-134h]
  double v110; // [esp+2Ch] [ebp-134h]
  float v111; // [esp+2Ch] [ebp-134h]
  float v112; // [esp+2Ch] [ebp-134h]
  float v113; // [esp+2Ch] [ebp-134h]
  float v114; // [esp+2Ch] [ebp-134h]
  float v115; // [esp+2Ch] [ebp-134h]
  float v116; // [esp+2Ch] [ebp-134h]
  float v117; // [esp+2Ch] [ebp-134h]
  float v118; // [esp+2Ch] [ebp-134h]
  float v119; // [esp+2Ch] [ebp-134h]
  float v120; // [esp+2Ch] [ebp-134h]
  float v121; // [esp+2Ch] [ebp-134h]
  float v122; // [esp+2Ch] [ebp-134h]
  float v123; // [esp+2Ch] [ebp-134h]
  float v124; // [esp+2Ch] [ebp-134h]
  float v125; // [esp+2Ch] [ebp-134h]
  float v126; // [esp+2Ch] [ebp-134h]
  float v127; // [esp+2Ch] [ebp-134h]
  float v128; // [esp+2Ch] [ebp-134h]
  float v129; // [esp+2Ch] [ebp-134h]
  float v130; // [esp+2Ch] [ebp-134h]
  float v131; // [esp+2Ch] [ebp-134h]
  float v132; // [esp+30h] [ebp-130h]
  float v133; // [esp+30h] [ebp-130h]
  float v134; // [esp+30h] [ebp-130h]
  float v135; // [esp+30h] [ebp-130h]
  float v136; // [esp+30h] [ebp-130h]
  float v137; // [esp+30h] [ebp-130h]
  float v138; // [esp+30h] [ebp-130h]
  float v139; // [esp+30h] [ebp-130h]
  float v140; // [esp+30h] [ebp-130h]
  float v141; // [esp+30h] [ebp-130h]
  float v142; // [esp+30h] [ebp-130h]
  float v143; // [esp+30h] [ebp-130h]
  float v144; // [esp+30h] [ebp-130h]
  float v145; // [esp+30h] [ebp-130h]
  float v146; // [esp+30h] [ebp-130h]
  float v147; // [esp+30h] [ebp-130h]
  float v148; // [esp+30h] [ebp-130h]
  float v149; // [esp+30h] [ebp-130h]
  float v150; // [esp+30h] [ebp-130h]
  float v151; // [esp+30h] [ebp-130h]
  float v152; // [esp+30h] [ebp-130h]
  float v153; // [esp+30h] [ebp-130h]
  float v154; // [esp+30h] [ebp-130h]
  float v155; // [esp+30h] [ebp-130h]
  float v156; // [esp+30h] [ebp-130h]
  float v157; // [esp+30h] [ebp-130h]
  UInt32 v158; // [esp+30h] [ebp-130h]
  float v159; // [esp+30h] [ebp-130h]
  float v160; // [esp+30h] [ebp-130h]
  double v161; // [esp+34h] [ebp-12Ch]
  double v163; // [esp+34h] [ebp-12Ch]
  int v164; // [esp+38h] [ebp-128h]
  int v165; // [esp+38h] [ebp-128h]
  int v166; // [esp+50h] [ebp-110h] BYREF
  float v167; // [esp+54h] [ebp-10Ch] BYREF
  float unk640; // [esp+58h] [ebp-108h]
  signed int v169[3]; // [esp+5Ch] [ebp-104h] BYREF
  signed int *v170; // [esp+68h] [ebp-F8h]
  signed int *v171; // [esp+6Ch] [ebp-F4h]
  float v172[3]; // [esp+70h] [ebp-F0h] BYREF
  float v173[3]; // [esp+7Ch] [ebp-E4h] BYREF
  char v174[200]; // [esp+88h] [ebp-D8h] BYREF
  unsigned int v175; // [esp+15Ch] [ebp-4h]

  v6 = *a5; /*0x61ebc9*/
  v170 = a5; /*0x61ebde*/
  v7 = *a6; /*0x61ebe2*/
  v171 = a6; /*0x61ebe7*/
  v166 = v6; /*0x61ebeb*/
  v169[0] = v7; /*0x61ebef*/
  v8 = (TESObjectREFR *)OblivionDynamicCast( /*0x61ec06*/
                          a3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                          &Actor `RTTI Type Descriptor',
                          0);
  _sprintf(v174, "COMBAT INFO: %d actors in combat with PC, %d in combat total", unk_B3B90C, unk_B3B914);
  v132 = (float)v6; /*0x61ec25*/
  v104 = (float)iDebugTextLeftRightOffset; /*0x61ec33*/
  InterfaceMgr_DebugTextLine(v174, v104, v132, 1, 0xFFFFFFFF); /*0x61ec37*/
  v167 = MEMORY[0xB3C0D0]; /*0x61ec49*/
  v9 = a4 + v6; /*0x61ec4f*/
  v10 = v167; /*0x61ec51*/
  v166 = v9; /*0x61ec5a*/
  unk640 = *(float *)&v9; /*0x61ec5e*/
  v11 = v167; /*0x61ec64*/
  if ( v167 > 0.0 )
  {
    if ( unk_B333B8 ) /*0x61ec6b*/
      v12 = flt_B37ED0[0x8C]; /*0x61ec74*/
    else
      v12 = flt_B37ED0[0x8A]; /*0x61ec7c*/
    v167 = v12; /*0x61ec82*/
    v10 = v167; /*0x61ec89*/
    _sprintf(v174, "Magic Projectile tracking value: %.2f/%.2f", v11, v167);
    v133 = (float)v166; /*0x61ecb1*/
    v105 = (float)iDebugTextLeftRightOffset; /*0x61ecbf*/
    InterfaceMgr_DebugTextLine(v174, v105, v133, 1, 0xFFFFFFFF); /*0x61ecc3*/
    v9 += a4; /*0x61eccb*/
    v166 = v9; /*0x61eccd*/
  }
  v134 = (float)v166; /*0x61ece0*/
  v106 = (float)iDebugTextLeftRightOffset; /*0x61ecec*/
  Name = TESObjectREFR_GetName(a3); /*0x61ecef*/
  InterfaceMgr_DebugTextLine(Name, v106, v134, 1, 0xFFFFFFFF); /*0x61ecf5*/
  v14 = a4 + v9; /*0x61ecfa*/
  v166 = v14; /*0x61ed01*/
  if ( v8 )
  {
    if ( v8 == (TESObjectREFR *)reference )
    {
      v136 = (float)v166; /*0x61ed4e*/
      v108 = (float)iDebugTextLeftRightOffset; /*0x61ed58*/
      InterfaceMgr_DebugTextLine("Current ref is the player -- no combat info to display.", v108, v136, 1, 0xFFFFFFFF); /*0x61ed60*/
      unk640 = reference->unk640; /*0x61ed74*/
      v161 = *(float *)&unk_B3BAFC.vtbl; /*0x61ed84*/
      v166 = a4 + v14; /*0x61ed88*/
      _sprintf(v174, "Bow Timer: %.2f zoom timer: %.2f", unk640, v161);
      v137 = (float)(a4 + v14); /*0x61edac*/
      v109 = (float)iDebugTextLeftRightOffset; /*0x61edba*/
      InterfaceMgr_DebugTextLine(v174, v109, v137, 1, 0xFFFFFFFF); /*0x61edbe*/
      v166 = a4 + a4 + v14; /*0x61edca*/
      v15 = sub_5E3C80(v8); /*0x61edce*/
      v110 = sub_5E3AD0(v8); /*0x61ede5*/
      v103 = sub_5E3920(v8); /*0x61edf2*/
      v102 = Actor_CalcFastTravelSpeed(v8); /*0x61edff*/
      v16 = sub_5E3590((Actor *)v8); /*0x61ee02*/
      _sprintf(v174, "SPEEDS: Walk: %.2f Run: %.2f Swim: %.2f SwimFast: %.2f Fly: %.2f", v16, v102, v103, v110, a2);
      v138 = (float)v166; /*0x61ee2a*/
      v17 = (double)iDebugTextLeftRightOffset; /*0x61ee32*/
      v111 = v17; /*0x61ee38*/
      InterfaceMgr_DebugTextLine(v174, v111, v138, 1, 0xFFFFFFFF); /*0x61ee3c*/
      v18 = reference; /*0x61ee41*/
      v19 = a4 + v166; /*0x61ee47*/
      v166 += a4; /*0x61ee4c*/
      v167 = 0.0; /*0x61ee50*/
      if ( Player_GetCurrentMagicItem(v18) )
      {
        p_IsMagicItemUsable = &reference->super.super.magicCaster.vtbl->IsMagicItemUsable; /*0x61ee77*/
        CurrentMagicItem = Player_GetCurrentMagicItem(reference); /*0x61ee7a*/
        if ( ((unsigned __int8 (__usercall *)@<al>(MagicCaster *@<ecx>, int, _DWORD, float *, _DWORD, double@<st0>, double@<st1>, double@<st2>, double@<st3>))*p_IsMagicItemUsable)(
               &reference->super.super.magicCaster,
               CurrentMagicItem,
               0,
               &v167,
               0,
               v17,
               a1,
               v15,
               v10) )
        {
          v22 = *(const char **)(Player_GetCurrentMagicItem(reference) + 4); /*0x61ee9c*/
          if ( !v22 ) /*0x61eea1*/
            v22 = EmptyString; /*0x61eea3*/
          _sprintf(v174, "Selected Spell: %s (can cast)", v22);
        }
        else
        {
          v164 = LODWORD(v167); /*0x61eec1*/
          Player_GetCurrentMagicItem(reference); /*0x61eecd*/
          v23 = Magic_CastFailureMsg((BSStringT *)&v169[1], v164); /*0x61eed9*/
          v24 = reference; /*0x61eedb*/
          v175 = 0; /*0x61eee1*/
          v25 = *(const char **)(Player_GetCurrentMagicItem(v24) + 4); /*0x61eef1*/
          if ( !v25 ) /*0x61eef6*/
            v25 = EmptyString; /*0x61eef8*/
          _sprintf(v174, "Selected Spell: %s Cannot Cast: %s", v25, v23->m_data);
          v175 = 0xFFFFFFFF; /*0x61ef19*/
          FormHeapFree(v169[1]); /*0x61ef24*/
        }
        v139 = (float)v166; /*0x61ef37*/
        v112 = (float)iDebugTextLeftRightOffset; /*0x61ef45*/
        InterfaceMgr_DebugTextLine(v174, v112, v139, 1, 0xFFFFFFFF); /*0x61ef49*/
        v166 = a4 + v19; /*0x61ef53*/
      }
      ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x61ef5e*/
      v27 = ActorList_ReturnHead((ActorList *)ListHead); /*0x61ef65*/
      v28 = v27; /*0x61ef6a*/
      if ( v27 ) /*0x61ef6e*/
      {
        if ( *(_DWORD *)&v27->members.super.super.super.type || v27->vtbl ) /*0x61ef7a*/
        {
          v140 = (float)v166; /*0x61ef8b*/
          v113 = (float)iDebugTextLeftRightOffset; /*0x61ef95*/
          InterfaceMgr_DebugTextLine("High Process Actors targeting the Player", v113, v140, 1, 0xFFFFFFFF); /*0x61ef9d*/
          v166 += a4; /*0x61efa5*/
        }
        do /*0x61f0bb*/
        {
          if ( !*(_DWORD *)&v28->members.super.super.super.type && !v28->vtbl ) /*0x61efaf*/
            break; /*0x61efb3*/
          v29 = (TESObjectREFR *)OblivionDynamicCast( /*0x61efcb*/
                                   v28->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v28 = *(Actor **)&v28->members.super.super.super.type; /*0x61efd0*/
          v30 = v29; /*0x61efd3*/
          if ( v29 ) /*0x61efda*/
          {
            v31 = ((int (__thiscall *)(TESObjectREFR *))v29->vtbl[1].IsMobileObject)(v29); /*0x61efea*/
            if ( v31 ) /*0x61efee*/
            {
              v32 = *(PlayerCharacter ****)(v31 + 0x40); /*0x61eff0*/
              if ( v32 ) /*0x61eff5*/
              {
                do /*0x61f000*/
                {
                  v33 = v32[1]; /*0x61f000*/
                  if ( !v33 && !*v32 ) /*0x61f007*/
                    break; /*0x61f007*/
                  if ( **v32 == reference ) /*0x61f00f*/
                  {
                    v141 = (float)v166; /*0x61f024*/
                    v114 = (float)iDebugTextLeftRightOffset; /*0x61f030*/
                    v34 = TESObjectREFR_GetName(v30); /*0x61f033*/
                    InterfaceMgr_DebugTextLine(v34, v114, v141, 1, 0xFFFFFFFF); /*0x61f039*/
                    v166 += a4; /*0x61f041*/
                    break; /*0x61f041*/
                  }
                  v32 = (PlayerCharacter ***)v32[1]; /*0x61f011*/
                }
                while ( v33 ); /*0x61f000*/
              }
            }
            FollowerExtra = ExtraDataList_GetFollowerExtra(); /*0x61f045*/
            if ( FollowerExtra ) /*0x61f04f*/
            {
              for ( i = *(TESObjectREFR ***)(FollowerExtra + 0xC); i; i = (TESObjectREFR **)i[1] ) /*0x61f056*/
              {
                v37 = *i; /*0x61f058*/
                if ( !*i ) /*0x61f058*/
                  break; /*0x61f05c*/
                if ( v37[1].vtbl ) /*0x61f05e*/
                {
                  v38 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v37->vtbl[1].IsMobileObject)(*i); /*0x61f06e*/
                  if ( v38 ) /*0x61f072*/
                  {
                    if ( sub_613670(v38, (int)reference) ) /*0x61f07d*/
                    {
                      v142 = (float)v166; /*0x61f091*/
                      v115 = (float)iDebugTextLeftRightOffset; /*0x61f09d*/
                      v39 = TESObjectREFR_GetName(v37); /*0x61f0a0*/
                      InterfaceMgr_DebugTextLine(v39, v115, v142, 1, 0xFFFFFFFF); /*0x61f0a6*/
                      v166 += a4; /*0x61f0ae*/
                    }
                  }
                }
              }
            }
          }
        }
        while ( v28 ); /*0x61f0bb*/
      }
      v40 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 1); /*0x61f0c8*/
      v41 = ActorList_ReturnHead((ActorList *)v40); /*0x61f0cf*/
      v42 = v41; /*0x61f0d4*/
      if ( v41 ) /*0x61f0d8*/
      {
        if ( *(_DWORD *)&v41->members.super.super.super.type || v41->vtbl ) /*0x61f0e4*/
        {
          v143 = (float)v166; /*0x61f0f5*/
          v116 = (float)iDebugTextLeftRightOffset; /*0x61f0ff*/
          InterfaceMgr_DebugTextLine("Middle High Process Actors targeting the Player", v116, v143, 1, 0xFFFFFFFF); /*0x61f107*/
          v166 += a4; /*0x61f10f*/
        }
        do /*0x61f223*/
        {
          if ( !*(_DWORD *)&v42->members.super.super.super.type && !v42->vtbl ) /*0x61f119*/
            break; /*0x61f11d*/
          v43 = (TESObjectREFR *)OblivionDynamicCast( /*0x61f135*/
                                   v42->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v42 = *(Actor **)&v42->members.super.super.super.type; /*0x61f13a*/
          v44 = v43; /*0x61f13d*/
          if ( v43 ) /*0x61f144*/
          {
            v45 = ((int (__thiscall *)(TESObjectREFR *))v43->vtbl[1].IsMobileObject)(v43); /*0x61f154*/
            if ( v45 ) /*0x61f158*/
            {
              v46 = *(PlayerCharacter ****)(v45 + 0x40); /*0x61f15a*/
              if ( v46 ) /*0x61f15f*/
              {
                do /*0x61f167*/
                {
                  v47 = v46[1]; /*0x61f167*/
                  if ( !v47 && !*v46 ) /*0x61f16e*/
                    break; /*0x61f16e*/
                  if ( **v46 == reference ) /*0x61f176*/
                  {
                    v144 = (float)v166; /*0x61f18b*/
                    v117 = (float)iDebugTextLeftRightOffset; /*0x61f197*/
                    v48 = TESObjectREFR_GetName(v44); /*0x61f19a*/
                    InterfaceMgr_DebugTextLine(v48, v117, v144, 1, 0xFFFFFFFF); /*0x61f1a0*/
                    v166 += a4; /*0x61f1a8*/
                    break; /*0x61f1a8*/
                  }
                  v46 = (PlayerCharacter ***)v46[1]; /*0x61f178*/
                }
                while ( v47 ); /*0x61f167*/
              }
            }
            v49 = ExtraDataList_GetFollowerExtra(); /*0x61f1ac*/
            if ( v49 ) /*0x61f1b6*/
            {
              for ( j = *(TESObjectREFR ***)(v49 + 0xC); j; j = (TESObjectREFR **)j[1] ) /*0x61f1bd*/
              {
                v51 = *j; /*0x61f1c0*/
                if ( !*j ) /*0x61f1c0*/
                  break; /*0x61f1c4*/
                if ( v51[1].vtbl ) /*0x61f1c6*/
                {
                  v52 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v51->vtbl[1].IsMobileObject)(*j); /*0x61f1d6*/
                  if ( v52 ) /*0x61f1da*/
                  {
                    if ( sub_613670(v52, (int)reference) ) /*0x61f1e5*/
                    {
                      v145 = (float)v166; /*0x61f1f9*/
                      v118 = (float)iDebugTextLeftRightOffset; /*0x61f205*/
                      v53 = TESObjectREFR_GetName(v51); /*0x61f208*/
                      InterfaceMgr_DebugTextLine(v53, v118, v145, 1, 0xFFFFFFFF); /*0x61f20e*/
                      v166 += a4; /*0x61f216*/
                    }
                  }
                }
              }
            }
          }
        }
        while ( v42 ); /*0x61f223*/
      }
      v54 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 2); /*0x61f230*/
      v55 = ActorList_ReturnHead((ActorList *)v54); /*0x61f237*/
      v56 = v55; /*0x61f23c*/
      if ( v55 ) /*0x61f240*/
      {
        if ( *(_DWORD *)&v55->members.super.super.super.type || v55->vtbl ) /*0x61f24c*/
        {
          v146 = (float)v166; /*0x61f25d*/
          v119 = (float)iDebugTextLeftRightOffset; /*0x61f267*/
          InterfaceMgr_DebugTextLine("Middle Low Process Actors targeting the Player", v119, v146, 1, 0xFFFFFFFF); /*0x61f26f*/
          v166 += a4; /*0x61f277*/
        }
        do /*0x61f38b*/
        {
          if ( !*(_DWORD *)&v56->members.super.super.super.type && !v56->vtbl ) /*0x61f281*/
            break; /*0x61f285*/
          v57 = (TESObjectREFR *)OblivionDynamicCast( /*0x61f29d*/
                                   v56->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v56 = *(Actor **)&v56->members.super.super.super.type; /*0x61f2a2*/
          v58 = v57; /*0x61f2a5*/
          if ( v57 ) /*0x61f2ac*/
          {
            v59 = ((int (__thiscall *)(TESObjectREFR *))v57->vtbl[1].IsMobileObject)(v57); /*0x61f2bc*/
            if ( v59 ) /*0x61f2c0*/
            {
              v60 = *(PlayerCharacter ****)(v59 + 0x40); /*0x61f2c2*/
              if ( v60 ) /*0x61f2c7*/
              {
                do /*0x61f2d0*/
                {
                  v61 = v60[1]; /*0x61f2d0*/
                  if ( !v61 && !*v60 ) /*0x61f2d7*/
                    break; /*0x61f2d7*/
                  if ( **v60 == reference ) /*0x61f2df*/
                  {
                    v147 = (float)v166; /*0x61f2f4*/
                    v120 = (float)iDebugTextLeftRightOffset; /*0x61f300*/
                    v62 = TESObjectREFR_GetName(v58); /*0x61f303*/
                    InterfaceMgr_DebugTextLine(v62, v120, v147, 1, 0xFFFFFFFF); /*0x61f309*/
                    v166 += a4; /*0x61f311*/
                    break; /*0x61f311*/
                  }
                  v60 = (PlayerCharacter ***)v60[1]; /*0x61f2e1*/
                }
                while ( v61 ); /*0x61f2d0*/
              }
            }
            v63 = ExtraDataList_GetFollowerExtra(); /*0x61f315*/
            if ( v63 ) /*0x61f31f*/
            {
              for ( k = *(TESObjectREFR ***)(v63 + 0xC); k; k = (TESObjectREFR **)k[1] ) /*0x61f326*/
              {
                v65 = *k; /*0x61f328*/
                if ( !*k ) /*0x61f328*/
                  break; /*0x61f32c*/
                if ( v65[1].vtbl ) /*0x61f32e*/
                {
                  v66 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v65->vtbl[1].IsMobileObject)(*k); /*0x61f33e*/
                  if ( v66 ) /*0x61f342*/
                  {
                    if ( sub_613670(v66, (int)reference) ) /*0x61f34d*/
                    {
                      v148 = (float)v166; /*0x61f361*/
                      v121 = (float)iDebugTextLeftRightOffset; /*0x61f36d*/
                      v67 = TESObjectREFR_GetName(v65); /*0x61f370*/
                      InterfaceMgr_DebugTextLine(v67, v121, v148, 1, 0xFFFFFFFF); /*0x61f376*/
                      v166 += a4; /*0x61f37e*/
                    }
                  }
                }
              }
            }
          }
        }
        while ( v56 ); /*0x61f38b*/
      }
      v68 = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 3); /*0x61f398*/
      v69 = ActorList_ReturnHead((ActorList *)v68); /*0x61f39f*/
      v70 = v69; /*0x61f3a4*/
      if ( v69 ) /*0x61f3a8*/
      {
        if ( *(_DWORD *)&v69->members.super.super.super.type || v69->vtbl ) /*0x61f3b4*/
        {
          v149 = (float)v166; /*0x61f3c5*/
          v122 = (float)iDebugTextLeftRightOffset; /*0x61f3cf*/
          InterfaceMgr_DebugTextLine("Low Process Actors targeting the Player", v122, v149, 1, 0xFFFFFFFF); /*0x61f3d7*/
          v166 += a4; /*0x61f3df*/
        }
        do /*0x61f4f3*/
        {
          if ( !*(_DWORD *)&v70->members.super.super.super.type && !v70->vtbl ) /*0x61f3e9*/
            break; /*0x61f3ed*/
          v71 = (TESObjectREFR *)OblivionDynamicCast( /*0x61f405*/
                                   v70->vtbl,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
          v70 = *(Actor **)&v70->members.super.super.super.type; /*0x61f40a*/
          v72 = v71; /*0x61f40d*/
          if ( v71 ) /*0x61f414*/
          {
            v73 = ((int (__thiscall *)(TESObjectREFR *))v71->vtbl[1].IsMobileObject)(v71); /*0x61f424*/
            if ( v73 ) /*0x61f428*/
            {
              v74 = *(PlayerCharacter ****)(v73 + 0x40); /*0x61f42a*/
              if ( v74 ) /*0x61f42f*/
              {
                do /*0x61f437*/
                {
                  v75 = v74[1]; /*0x61f437*/
                  if ( !v75 && !*v74 ) /*0x61f43e*/
                    break; /*0x61f43e*/
                  if ( **v74 == reference ) /*0x61f446*/
                  {
                    v150 = (float)v166; /*0x61f45b*/
                    v123 = (float)iDebugTextLeftRightOffset; /*0x61f467*/
                    v76 = TESObjectREFR_GetName(v72); /*0x61f46a*/
                    InterfaceMgr_DebugTextLine(v76, v123, v150, 1, 0xFFFFFFFF); /*0x61f470*/
                    v166 += a4; /*0x61f478*/
                    break; /*0x61f478*/
                  }
                  v74 = (PlayerCharacter ***)v74[1]; /*0x61f448*/
                }
                while ( v75 ); /*0x61f437*/
              }
            }
            v77 = ExtraDataList_GetFollowerExtra(); /*0x61f47c*/
            if ( v77 ) /*0x61f486*/
            {
              for ( m = *(TESObjectREFR ***)(v77 + 0xC); m; m = (TESObjectREFR **)m[1] ) /*0x61f48d*/
              {
                v79 = *m; /*0x61f490*/
                if ( !*m ) /*0x61f490*/
                  break; /*0x61f494*/
                if ( v79[1].vtbl ) /*0x61f496*/
                {
                  v80 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v79->vtbl[1].IsMobileObject)(*m); /*0x61f4a6*/
                  if ( v80 ) /*0x61f4aa*/
                  {
                    if ( sub_613670(v80, (int)reference) ) /*0x61f4b5*/
                    {
                      v151 = (float)v166; /*0x61f4c9*/
                      v124 = (float)iDebugTextLeftRightOffset; /*0x61f4d5*/
                      v81 = TESObjectREFR_GetName(v79); /*0x61f4d8*/
                      InterfaceMgr_DebugTextLine(v81, v124, v151, 1, 0xFFFFFFFF); /*0x61f4de*/
                      v166 += a4; /*0x61f4e6*/
                    }
                  }
                }
              }
            }
          }
        }
        while ( v70 ); /*0x61f4f3*/
      }
    }
    else if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v8->vtbl[1].GetSleepState)(v8, 1) )
    {
      if ( ((int (__thiscall *)(TESObjectREFR *))v8->vtbl[1].IsMobileObject)(v8) )
      {
        v82 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))v8->vtbl[1].IsMobileObject)( /*0x61f596*/
                v8,
                a2,
                a1);
        CurrentTarget = CombatController_GetCurrentTarget(v82); /*0x61f59d*/
        sub_61A090(a1, a2, (int *)v8, CurrentTarget, 1, a4, &v166, (int **)v169); /*0x61f5a4*/
        v84 = CombatController_GetCurrentTarget(v82); /*0x61f5ae*/
        v154 = (float)v169[0]; /*0x61f5c0*/
        LODWORD(v167) = 0x500 - iDebugTextLeftRightOffset; /*0x61f5d1*/
        if ( v84 ) /*0x61f5c4*/
        {
          v85 = (double)SLODWORD(v167); /*0x61f5fe*/
          v128 = v85; /*0x61f604*/
          v86 = (TESObjectREFR *)CombatController_GetCurrentTarget(v82); /*0x61f607*/
          v87 = TESObjectREFR_GetName(v86); /*0x61f60e*/
          InterfaceMgr_DebugTextLine(v87, v128, v154, 3, 0xFFFFFFFF); /*0x61f614*/
          v169[0] += a4; /*0x61f619*/
          v88 = (int *)CombatController_GetCurrentTarget(v82); /*0x61f630*/
          sub_61A090(a1, v85, v88, (int)v8, 0, a4, &v166, (int **)v169); /*0x61f636*/
        }
        else
        {
          v127 = (float)SLODWORD(v167); /*0x61f5d9*/
          InterfaceMgr_DebugTextLine("Current ref has no targets.", v127, v154, 3, 0xFFFFFFFF); /*0x61f5e1*/
          v166 += a4; /*0x61f5e9*/
        }
        if ( BSSimpleList_Count(*(_DWORD **)(v82 + 0x40)) )
        {
          v155 = (float)v166; /*0x61f65a*/
          v129 = (float)iDebugTextLeftRightOffset; /*0x61f664*/
          InterfaceMgr_DebugTextLine("Current Targets", v129, v155, 1, 0xFFFFFFFF); /*0x61f66c*/
          v89 = *(int **)(v82 + 0x40); /*0x61f671*/
          for ( v166 += a4; v89; v89 = (int *)v89[1] )
          {
            if ( !v89[1] && !*v89 ) /*0x61f686*/
              break; /*0x61f689*/
            v90 = *v89; /*0x61f68b*/
            if ( *v89 )
            {
              if ( *(_DWORD *)v90 )
              {
                v165 = *(_DWORD *)(v90 + 4); /*0x61f69a*/
                v91 = TESObjectREFR_GetName(*(TESObjectREFR **)v90); /*0x61f69b*/
                _sprintf(v174, "%s: %d", v91, v165);
                v156 = (float)v166; /*0x61f6be*/
                v130 = (float)iDebugTextLeftRightOffset; /*0x61f6cc*/
                InterfaceMgr_DebugTextLine(v174, v130, v156, 1, 0xFFFFFFFF); /*0x61f6d0*/
                v166 += a4; /*0x61f6d8*/
              }
            }
          }
        }
        v92 = v82 + 0x15C; /*0x61f6e3*/
        if ( v92 )
        {
          LODWORD(v93) = 0x500 - iDebugTextLeftRightOffset; /*0x61f6fa*/
          *(float *)&v169[1] = (float)iDebugTextLeftRightOffset; /*0x61f702*/
          v167 = v93; /*0x61f706*/
          v167 = *(float *)&v169[1] + ((double)SLODWORD(v93) - *(float *)&v169[1]) * dbl_A2FAA0; /*0x61f725*/
          v157 = (float)SLODWORD(unk640); /*0x61f72d*/
          InterfaceMgr_DebugTextLine("ALLIES", v167, v157, 2, 0xFFFFFFFF); /*0x61f73d*/
          LODWORD(unk640) += a4; /*0x61f745*/
          do
          {
            v94 = *(TESObjectREFR **)v92; /*0x61f750*/
            v95 = *(_DWORD *)v92 == 0; /*0x61f753*/
            v92 = *(_DWORD *)(v92 + 4); /*0x61f755*/
            if ( !v95 && v94 != v8 )
            {
              if ( ((int (__thiscall *)(TESObjectREFR *))v94->vtbl[1].IsMobileObject)(v94) ) /*0x61f770*/
                v96 = *(float *)(((int (__thiscall *)(TESObjectREFR *))v94->vtbl[1].IsMobileObject)(v94) + 0xCC) /*0x61f788*/
                    * dbl_A30DC8;
              else
                v96 = 0.0; /*0x61f790*/
              vtbl = v94->vtbl; /*0x61f792*/
              *(double *)&v169[1] = v96; /*0x61f794*/
              refID = vtbl->GetBaseForm(v94)->member.refID; /*0x61f7a6*/
              *(float *)&v169[1] = *(double *)&v169[1]; /*0x61f7a9*/
              v163 = *(float *)&v169[1]; /*0x61f7b4*/
              v158 = refID; /*0x61f7b7*/
              v99 = TESObjectREFR_GetName(v94); /*0x61f7ba*/
              _sprintf(v174, "%.20s: (%08X) pos %.2f", v99, v158, v163);
              v159 = (float)SLODWORD(unk640); /*0x61f7dd*/
              InterfaceMgr_DebugTextLine(v174, v167, v159, 2, 0xFFFFFFFF); /*0x61f7ed*/
              LODWORD(unk640) += a4; /*0x61f7f5*/
            }
          }
          while ( v92 );
        }
        ((void (__thiscall *)(TESObjectREFR *, float *))v8->vtbl->Unk_57)(v8, v172); /*0x61f810*/
        ((void (__thiscall *)(TESObjectREFR *, float *))v8->vtbl->Unk_56)(v8, v173); /*0x61f821*/
        _sprintf(
          v174,
          "BOUNDS: (%.2f, %.2f, %.2f)-(%.2f, %.2f, %.2f)",
          v173[0],
          v173[1],
          v173[2],
          v172[0],
          v172[1],
          v172[2]);
        v160 = (float)v166; /*0x61f872*/
        v131 = (float)iDebugTextLeftRightOffset; /*0x61f880*/
        InterfaceMgr_DebugTextLine(v174, v131, v160, 1, 0xFFFFFFFF); /*0x61f884*/
        v166 += a4; /*0x61f88c*/
      }
      else
      {
        v153 = (float)v166; /*0x61f55b*/
        v126 = (float)iDebugTextLeftRightOffset; /*0x61f565*/
        InterfaceMgr_DebugTextLine( /*0x61f56d*/
          "Current ref is in combat but has no controller (COMBAT LOW).",
          v126,
          v153,
          1,
          0xFFFFFFFF);
        v166 = a4 + v14; /*0x61f577*/
      }
    }
    else
    {
      v152 = (float)v166; /*0x61f51b*/
      v125 = (float)iDebugTextLeftRightOffset; /*0x61f525*/
      InterfaceMgr_DebugTextLine("Current ref is not in combat.", v125, v152, 1, 0xFFFFFFFF); /*0x61f52d*/
      v166 = a4 + v14; /*0x61f537*/
    }
  }
  else
  {
    v135 = (float)v166; /*0x61ed12*/
    v107 = (float)iDebugTextLeftRightOffset; /*0x61ed1c*/
    InterfaceMgr_DebugTextLine("Current ref is not an actor.", v107, v135, 1, 0xFFFFFFFF); /*0x61ed24*/
    v166 = a4 + v14; /*0x61ed2e*/
  }
  result = v170; /*0x61f894*/
  v101 = v169[0]; /*0x61f898*/
  *v170 = v166; /*0x61f89c*/
  *v171 = v101; /*0x61f8a2*/
  return result; /*0x61f8a4*/
}
