void __userpurge ExtraDataList_LoadModified(
        ExtraDataList *ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        int a5,
        int a6,
        TESObjectREFR *a7)
{
  TESObjectREFR *v7; // ebp
  UInt32 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  char *v12; // esi
  int v13; // eax
  _DWORD *v14; // esi
  TESSaveLoad *v15; // ecx
  TESSaveLoad *v16; // ecx
  TESForm *v17; // eax
  UInt32 v18; // eax
  bool v19; // zf
  char v20; // cl
  char v21; // dl
  TESForm *v22; // eax
  TESForm *v23; // eax
  TESForm *v24; // eax
  BSExtraDataVtbl *v25; // eax
  TESForm *v26; // eax
  char *v27; // eax
  char *v28; // esi
  int *ExtraScriptEventList; // edi
  _DWORD *v30; // eax
  int *v31; // esi
  TESPackage *v32; // esi
  TESForm *v33; // eax
  CombatController *v34; // esi
  int v35; // esi
  TESForm *v36; // eax
  void *v37; // eax
  BSExtraDataVtbl *v38; // esi
  BSExtraDataVtbl *v39; // eax
  int v40; // esi
  NonActorMagicCaster *v41; // eax
  BSExtraData *v42; // edi
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // edx
  BSExtraData *v44; // eax
  BSExtraData *v45; // esi
  void (__thiscall *Destructor)(BSExtraData *); // eax
  int v47; // eax
  TeleportData *v48; // eax
  TeleportData *v49; // esi
  char *v50; // eax
  BSExtraData *v51; // esi
  float *v52; // eax
  unsigned __int8 next; // al
  unsigned __int8 v54; // al
  BSExtraData *v55; // eax
  TESObjectCELL *v56; // esi
  BSExtraData *ExtraData; // eax
  TESForm *v58; // eax
  _DWORD *v59; // eax
  _DWORD *v60; // esi
  BSExtraDataVtbl *v61; // eax
  TESObjectCELL *v62; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v64; // eax
  unsigned int v65; // esi
  TESForm *v66; // esi
  BSExtraData *v67; // esi
  BSExtraDataVtbl *v68; // esi
  TESForm *v69; // eax
  void *v70; // eax
  ExtraFriendHitList *v71; // eax
  BSExtraData *v72; // ebp
  unsigned int v73; // edi
  int v74; // eax
  int v75; // esi
  TESForm *v76; // esi
  unsigned int v77; // edi
  _DWORD *v78; // ebp
  TESObjectREFR *v79; // eax
  int v80; // esi
  unsigned int *v81; // eax
  unsigned int *v82; // esi
  UInt32 *v83; // edi
  UInt32 v84; // esi
  TESForm *v85; // eax
  UInt32 v86; // ebx
  TESForm *v87; // ecx
  UInt32 v88; // eax
  const char *v89; // eax
  const char *v90; // eax
  UInt32 v91; // edx
  size_t v92; // [esp-8h] [ebp-264h]
  size_t v93; // [esp-8h] [ebp-264h]
  size_t v94; // [esp-8h] [ebp-264h]
  size_t v95; // [esp-8h] [ebp-264h]
  size_t v96; // [esp+0h] [ebp-25Ch]
  size_t v97; // [esp+0h] [ebp-25Ch]
  size_t v98; // [esp+0h] [ebp-25Ch]
  size_t v99; // [esp+0h] [ebp-25Ch]
  size_t v100; // [esp+0h] [ebp-25Ch]
  size_t v101; // [esp+0h] [ebp-25Ch]
  size_t v102; // [esp+0h] [ebp-25Ch]
  float v103; // [esp+0h] [ebp-25Ch]
  size_t v104; // [esp+0h] [ebp-25Ch]
  size_t v105; // [esp+0h] [ebp-25Ch]
  size_t v106; // [esp+0h] [ebp-25Ch]
  int v107; // [esp+4h] [ebp-258h]
  int v108; // [esp+4h] [ebp-258h]
  int v109; // [esp+4h] [ebp-258h]
  int v110; // [esp+4h] [ebp-258h]
  size_t v111; // [esp+8h] [ebp-254h]
  size_t v112; // [esp+8h] [ebp-254h]
  int v113; // [esp+8h] [ebp-254h]
  size_t v114; // [esp+8h] [ebp-254h]
  size_t v115; // [esp+8h] [ebp-254h]
  size_t v116; // [esp+8h] [ebp-254h]
  __int16 v117; // [esp+8h] [ebp-254h]
  size_t v118; // [esp+8h] [ebp-254h]
  size_t v119; // [esp+8h] [ebp-254h]
  size_t v120; // [esp+8h] [ebp-254h]
  size_t v121; // [esp+8h] [ebp-254h]
  size_t v122; // [esp+8h] [ebp-254h]
  size_t v123; // [esp+8h] [ebp-254h]
  float v124; // [esp+8h] [ebp-254h]
  int v125; // [esp+8h] [ebp-254h]
  int v126; // [esp+8h] [ebp-254h]
  int v127; // [esp+Ch] [ebp-250h]
  int v128; // [esp+10h] [ebp-24Ch]
  float v129; // [esp+14h] [ebp-248h]
  int v130; // [esp+18h] [ebp-244h]
  int v131; // [esp+1Ch] [ebp-240h]
  _DWORD *v132; // [esp+20h] [ebp-23Ch] BYREF
  int v133; // [esp+24h] [ebp-238h] BYREF
  void *v134; // [esp+28h] [ebp-234h]
  unsigned __int16 v135; // [esp+2Ch] [ebp-230h]
  char v136; // [esp+2Fh] [ebp-22Dh] BYREF
  char v137; // [esp+30h] [ebp-22Ch] BYREF
  unsigned __int8 v138; // [esp+31h] [ebp-22Bh] BYREF
  char v139; // [esp+32h] [ebp-22Ah] BYREF
  unsigned __int8 v140; // [esp+33h] [ebp-229h] BYREF
  unsigned __int16 v141; // [esp+34h] [ebp-228h] BYREF
  unsigned __int16 v142; // [esp+38h] [ebp-224h] BYREF
  int v143; // [esp+3Ch] [ebp-220h] BYREF
  UInt32 v144; // [esp+40h] [ebp-21Ch] BYREF
  unsigned __int16 v145; // [esp+44h] [ebp-218h] BYREF
  __int16 v146; // [esp+48h] [ebp-214h] BYREF
  UInt32 v147; // [esp+4Ch] [ebp-210h]
  char v148[4]; // [esp+50h] [ebp-20Ch] BYREF
  TESChildCELL *v149; // [esp+54h] [ebp-208h]
  int v150; // [esp+58h] [ebp-204h]
  BSExtraData *v151; // [esp+5Ch] [ebp-200h] BYREF
  char *v152; // [esp+60h] [ebp-1FCh]
  BSExtraDataVtbl *v153; // [esp+64h] [ebp-1F8h] BYREF
  char v154[8]; // [esp+68h] [ebp-1F4h] BYREF
  int v155; // [esp+70h] [ebp-1ECh] BYREF
  char v156[4]; // [esp+74h] [ebp-1E8h] BYREF
  float v157[2]; // [esp+78h] [ebp-1E4h] BYREF
  float v158; // [esp+80h] [ebp-1DCh] BYREF
  BSExtraDataVtbl *v159; // [esp+84h] [ebp-1D8h] BYREF
  int v160; // [esp+88h] [ebp-1D4h] BYREF
  BSExtraDataVtbl *v161; // [esp+8Ch] [ebp-1D0h] BYREF
  int v162; // [esp+90h] [ebp-1CCh] BYREF
  int v163; // [esp+94h] [ebp-1C8h] BYREF
  int v164; // [esp+98h] [ebp-1C4h] BYREF
  int v165; // [esp+9Ch] [ebp-1C0h] BYREF
  int v166; // [esp+A0h] [ebp-1BCh] BYREF
  int v167; // [esp+A4h] [ebp-1B8h] BYREF
  char v168[4]; // [esp+A8h] [ebp-1B4h] BYREF
  BSExtraDataVtbl *v169; // [esp+ACh] [ebp-1B0h] BYREF
  int v170; // [esp+B0h] [ebp-1ACh]
  int v171; // [esp+B4h] [ebp-1A8h] BYREF
  int v172; // [esp+B8h] [ebp-1A4h] BYREF
  int v173; // [esp+BCh] [ebp-1A0h] BYREF
  int v174; // [esp+C0h] [ebp-19Ch] BYREF
  BSExtraDataVtbl *v175; // [esp+C4h] [ebp-198h] BYREF
  char v176[4]; // [esp+C8h] [ebp-194h] BYREF
  int v177; // [esp+CCh] [ebp-190h] BYREF
  float v178; // [esp+D0h] [ebp-18Ch] BYREF
  int v179; // [esp+D4h] [ebp-188h] BYREF
  BSExtraDataVtbl *v180; // [esp+D8h] [ebp-184h] BYREF
  int v181; // [esp+DCh] [ebp-180h] BYREF
  BSExtraDataVtbl *v182; // [esp+E0h] [ebp-17Ch] BYREF
  int v183; // [esp+E4h] [ebp-178h] BYREF
  char v184[4]; // [esp+E8h] [ebp-174h] BYREF
  int v185; // [esp+ECh] [ebp-170h] BYREF
  int a1; // [esp+F0h] [ebp-16Ch] BYREF
  int v187; // [esp+F4h] [ebp-168h] BYREF
  int v188; // [esp+F8h] [ebp-164h] BYREF
  float v189; // [esp+FCh] [ebp-160h] BYREF
  char v190[4]; // [esp+100h] [ebp-15Ch] BYREF
  float v191[2]; // [esp+104h] [ebp-158h] BYREF
  TESObjectREFR *v192; // [esp+10Ch] [ebp-150h]
  char v193[4]; // [esp+110h] [ebp-14Ch] BYREF
  void *v194; // [esp+114h] [ebp-148h] BYREF
  int Dst; // [esp+118h] [ebp-144h] BYREF
  float v196; // [esp+124h] [ebp-138h] BYREF
  char v197[4]; // [esp+128h] [ebp-134h] BYREF
  int v198; // [esp+12Ch] [ebp-130h]
  char v199[20]; // [esp+134h] [ebp-128h] BYREF
  _DWORD v200[65]; // [esp+148h] [ebp-114h] BYREF
  int v201; // [esp+250h] [ebp-Ch]
  int v202; // [esp+258h] [ebp-4h]

  v7 = a7;
  v149 = (TESChildCELL *)a7;
  v144 = 0;
  v147 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v111) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v111);
    if ( Dst != 0x4B4F4C42 )
    {
      v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v9 )
      {
        v10 = TESForm_LookupByFormID(*v9);
        v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v10->vtbl->GetEditorName)(
                              v10,
                              *((unsigned __int8 *)v9 + 9),
                              *(UInt32 *)((char *)v9 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\ExtraDataList.cpp",
          0x1B6F,
          *v9,
          v11,
          v107,
          v113);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\ExtraDataList.cpp",
          0x1B6F,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    LODWORD(v112) = 2;
    v147 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v144, v112);
  }
  LOWORD(v133) = 0;
  HIBYTE(v133) = 0;
  v12 = (char *)OblivionDynamicCast(
                  a7,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  LODWORD(v111) = 2;
  v152 = v12;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v142, v111);
  v150 = 0;
  if ( !v142 )
  {
LABEL_215:
    if ( (a5 & 0x4000000) != 0 )
      BaseExtraList_RemoveExtraByType(ecx0, 0x12u);
    goto LABEL_217;
  }
  while ( 2 )
  {
    LODWORD(v114) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v138, v114);
    switch ( v138 )
    {
      case 0x11u:
        if ( v7 )
        {
          if ( v7->vtbl->IsActor(v7) )
          {
            v56 = (TESObjectCELL *)sub_41FF80(ecx0);
            if ( v56 )
            {
              ExtraData = BaseExtraList_GetExtraData(ecx0, kExtraData_PersistentCell);
              if ( ExtraData )
                BaseExtraList_RemoveExtraByPtr(ecx0, (int)ExtraData, 1);
              sub_4CECD0(v56, v7);
            }
            LODWORD(v114) = 4;
            SaveLoad_LoadFormID(&v167, v114);
            if ( TESObjectREFR_IsPersistent_(v7) && v7 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
            {
              v58 = TESForm_LookupByFormID(v165);
              v59 = OblivionDynamicCast(
                      v58,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESWorldSpace `RTTI Type Descriptor',
                      0);
              v60 = v59;
              if ( v59 )
              {
                v61 = (BSExtraDataVtbl *)sub_4EF1E0(v59);
                sub_4247B0(ecx0, v61);
                v62 = (TESObjectCELL *)sub_4EF1E0(v60);
                sub_4D35D0(v62, a2, a3, st7_0, (TESChildCELL *)v7);
                if ( TESObjectREFR_GetParentCell(v7) )
                {
                  ParentCell = TESObjectREFR_GetParentCell(v7);
                  if ( TESObjectCELL_IsInterior(ParentCell) )
                  {
                    v64 = TESObjectREFR_GetParentCell(v7);
                    sub_4CECD0(v64, v7);
                  }
                }
              }
            }
          }
        }
        goto LABEL_213;
      case 0x12u:
        if ( (a5 & 0x4000020) != 0 )
        {
          LODWORD(v114) = 4;
          HIBYTE(v133) = 1;
          SaveLoad_LoadFormID(&v164, v114);
          v26 = TESForm_LookupByFormID(v162);
          v27 = (char *)OblivionDynamicCast(
                          v26,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &Script `RTTI Type Descriptor',
                          0);
          v28 = v27;
          if ( v27 )
            ExtraDataList_AddScript(ecx0, (int)v27);
          ExtraScriptEventList = (int *)ExtraDataList_GetExtraScriptEventList(ecx0);
          if ( ExtraScriptEventList )
            goto LABEL_78;
          if ( v28 )
            ExtraScriptEventList = (int *)Script_CreateEventList(v28);
          ExtraDataList_SetScriptEventList(ecx0, (int)ExtraScriptEventList);
          if ( ExtraScriptEventList )
          {
LABEL_78:
            ScriptEventList_Load_(ExtraScriptEventList, st7_0);
          }
          else
          {
            v30 = (_DWORD *)FormHeapAlloc(0x14u);
            v132 = v30;
            v201 = 0;
            if ( v30 )
              v31 = sub_4F9DB0(v30);
            else
              v31 = 0;
            v201 = 0xFFFFFFFF;
            ScriptEventList_Load_(v31, st7_0);
            if ( v31 )
            {
              ScriptEventList_destr__((ScriptEventList *)v31);
              FormHeapFree((unsigned int)v31);
            }
          }
        }
        goto LABEL_213;
      case 0x17u:
        if ( (a5 & 0x400000) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v199, v114);
        }
        goto LABEL_213;
      case 0x1Bu:
        if ( (a5 & 0x20) != 0 )
          SetWorn(ecx0, 1, 0);
        goto LABEL_213;
      case 0x1Cu:
        if ( (a5 & 0x20) != 0 )
          SetWorn(ecx0, 1, 1);
        goto LABEL_213;
      case 0x1Eu:
        LODWORD(v114) = 4;
        SaveLoad_LoadFormID(v176, v114);
        LODWORD(v101) = 0xC;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v101);
        LODWORD(v102) = 4;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v196, v102);
        v194 = TESForm_LookupByFormID(v174);
        v38 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                   v194,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
        v39 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                   v194,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESObjectCELL `RTTI Type Descriptor',
                                   0);
        if ( v38 || v39 )
        {
          __asm { fld     [esp+258h+var_138] }
          __asm { fstp    [esp+25Ch+var_25C]; float }
          sub_41F4C0(ecx0, v38, v39, &Dst, v103);
        }
        goto LABEL_213;
      case 0x1Fu:
        LODWORD(v114) = 4;
        SaveLoad_LoadFormID(v148, v114);
        LODWORD(v98) = 4;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v184, v98);
        LODWORD(v99) = 4;
        SaveLoad_LoadFormID(v168, v99);
        LODWORD(v93) = 1;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v188, v93);
        LODWORD(v94) = 1;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v164, v94);
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x40u
          && TESDataHandler_IsFormIDCreated_(v144) )
        {
          LODWORD(v92) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v180, v92);
          if ( !v12 )
            (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
              dword_B34D90,
              "Package being created on non-actor!");
          v32 = (TESPackage *)sub_463EC0((char *)SaveLoad_CurrentSavegame, v143, (int)v12, v179);
          ((void (__thiscall *)(TESPackage *))v32->__vftable[1].super.super.CopyFromBase)(v32);
        }
        else
        {
          v33 = TESForm_LookupByFormID(v144);
          v32 = (TESPackage *)OblivionDynamicCast(
                                v33,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESPackage `RTTI Type Descriptor',
                                0);
          if ( !v32 )
            goto LABEL_213;
        }
        sub_4268B0(ecx0, v32, v181, (BSExtraData *)v165, v187, v163);
LABEL_213:
        if ( ++v150 < v142 )
        {
          v12 = v152;
          continue;
        }
        if ( !HIBYTE(v133) )
          goto LABEL_215;
LABEL_217:
        if ( !(_BYTE)v133 && (char)a5 < 0 )
          BaseExtraList_RemoveExtraByType(ecx0, 0x27u);
        if ( BYTE1(v133) )
        {
          ExtraDataList_RestoreSavedAnimationData(ecx0, a2, a3, st7_0, (int)v7);
          ExtraDataList_RestoreSavedHavokData(ecx0, v7);
        }
        if ( sub_45A170() )
        {
          v83 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
          v84 = SaveLoad_CurrentSavegame->unk000[5];
          if ( v83 )
          {
            v85 = TESForm_LookupByFormID(*v83);
            v86 = v147;
            v87 = v85;
            v88 = v147 + (unsigned __int16)v144;
            if ( v84 <= v88 )
            {
              if ( v84 < v88 )
              {
                v90 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v87->vtbl->GetEditorName)(
                                      v87,
                                      *((unsigned __int8 *)v83 + 9),
                                      *(UInt32 *)((char *)v83 + 5));
                PrintError(
                  "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with ve"
                  "rsion %i and flags %08X",
                  v86 + (unsigned __int16)v144 - v84,
                  "..\\TES Shared\\ExtraDataList.cpp",
                  0x1E93,
                  *v83,
                  v90,
                  v110,
                  v126);
              }
            }
            else
            {
              v89 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v87->vtbl->GetEditorName)(
                                    v87,
                                    *((unsigned __int8 *)v83 + 9),
                                    *(UInt32 *)((char *)v83 + 5));
              PrintError(
                "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with versi"
                "on %i and flags %08X",
                v84 - (unsigned __int16)v144 - v86,
                "..\\TES Shared\\ExtraDataList.cpp",
                0x1E93,
                *v83,
                v89,
                v109,
                v125);
            }
          }
          else
          {
            v91 = (unsigned __int16)v144 + v147;
            if ( v84 <= v91 )
            {
              if ( v84 < v91 )
                PrintError(
                  "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                  v147 + (unsigned __int16)v144 - v84,
                  "..\\TES Shared\\ExtraDataList.cpp",
                  0x1E93,
                  LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
            }
            else
            {
              PrintError(
                "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                v84 - (unsigned __int16)v144 - v147,
                "..\\TES Shared\\ExtraDataList.cpp",
                0x1E93,
                LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
            }
          }
        }
        return;
      case 0x20u:
        if ( (a5 & 0x40000) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(&v172, v114);
          if ( v170 )
          {
            v34 = sub_463EC0((char *)SaveLoad_CurrentSavegame, v170, 0, 0x11);
            (*(void (__thiscall **)(CombatController *))(*(_DWORD *)v34 + 0xE4))(v34);
            sub_41FBC0(ecx0, (BSExtraDataVtbl *)v34);
          }
        }
        goto LABEL_213;
      case 0x21u:
        LODWORD(v114) = 2;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v143, v114);
        v35 = 0;
        if ( (_WORD)v143 )
        {
          do
          {
            LODWORD(v114) = 4;
            SaveLoad_LoadFormID(&v174, v114);
            LODWORD(v100) = 1;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1, v100);
            v36 = TESForm_LookupByFormID(v172);
            v37 = OblivionDynamicCast(
                    v36,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESPackage `RTTI Type Descriptor',
                    0);
            if ( v37 )
              sub_41FFC0(ecx0, (int)v37, a1);
            ++v35;
          }
          while ( v35 < v141 );
        }
        goto LABEL_213;
      case 0x22u:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(&v194, v114);
          ExtraDataList_SetReferencePointer(ecx0, v192);
        }
        goto LABEL_213;
      case 0x23u:
        LODWORD(v114) = 2;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v141, v114);
        v40 = 0;
        if ( v141 )
        {
          do
          {
            LODWORD(v114) = 4;
            SaveLoad_LoadFormID(v154, v114);
            sub_424C50(ecx0, (int)v152);
            ++v40;
          }
          while ( v40 < v135 );
        }
        goto LABEL_213;
      case 0x25u:
        ExtraDataList_SetGhost_(ecx0, 1);
        goto LABEL_213;
      case 0x27u:
        if ( (a5 & 0xA0) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(v193, v114);
          v23 = TESForm_LookupByFormID(LODWORD(v191[1]));
          ExtraDataList::SetOrRemoveExtraOwnership(ecx0, v23);
          LOBYTE(v131) = 1;
        }
        goto LABEL_213;
      case 0x28u:
        if ( (a5 & 0x120) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(&v162, v114);
          v24 = TESForm_LookupByFormID(v160);
          v25 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v24,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESGlobal `RTTI Type Descriptor',
                                     0);
          if ( v25 )
            sub_423720(ecx0, v25);
        }
        goto LABEL_213;
      case 0x29u:
        if ( (a5 & 0x220) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v182, v114);
          sub_4237E0(ecx0, v182);
        }
        goto LABEL_213;
      case 0x2Au:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 2;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v183, v114);
          ExtraDataList_SetExtraCount(ecx0, v183);
        }
        goto LABEL_213;
      case 0x2Bu:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v191, v114);
          __asm { fld     [esp+250h+var_158] }
          __asm { fstp    [esp+254h+var_254]; float }
          ExtraDataList_SetHealthValue(ecx0, (BSExtraDataVtbl *)v114);
        }
        goto LABEL_213;
      case 0x2Cu:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v155, v114);
          ExtraDataList_SetUses(ecx0, v155);
        }
        goto LABEL_213;
      case 0x2Du:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v178, v114);
          __asm { fld     [esp+250h+var_18C] }
          __asm { fstp    [esp+254h+var_254]; float }
          sub_41EDF0(ecx0, (BSExtraDataVtbl *)v114);
        }
        goto LABEL_213;
      case 0x2Eu:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v157, v114);
          __asm { fld     [esp+250h+var_1E4] }
          __asm { fstp    [esp+254h+var_254]; float }
          sub_41EE90(ecx0, (BSExtraDataVtbl *)v114);
        }
        goto LABEL_213;
      case 0x2Fu:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v136, v114);
          BaseExtraList_SetSoulLevel(ecx0, v136);
        }
        goto LABEL_213;
      case 0x31u:
        if ( (a5 & 0x40) != 0 )
        {
          v13 = FormHeapAlloc(0xCu);
          if ( v13 )
          {
            *(_BYTE *)v13 = 0;
            *(_DWORD *)(v13 + 4) = 0;
            *(_BYTE *)(v13 + 8) = 0;
            v14 = (_DWORD *)v13;
          }
          else
          {
            v14 = 0;
          }
          v15 = SaveLoad_CurrentSavegame;
          if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x15u )
            goto LABEL_33;
          LODWORD(v114) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v14, v114);
          LODWORD(v115) = 4;
          SaveLoad_LoadFormID(v190, v115);
          v16 = SaveLoad_CurrentSavegame;
          if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x1Au )
          {
            LODWORD(v97) = 4;
            SaveLoad_LoadFormID(v197, v97);
            v16 = SaveLoad_CurrentSavegame;
          }
          LODWORD(v92) = 1;
          SaveLoad_LoadData((int)v16, v14 + 2, v92);
          if ( a1 )
          {
            v17 = TESForm_LookupByFormID(a1);
            v14[1] = OblivionDynamicCast(
                       v17,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESKey `RTTI Type Descriptor',
                       0);
          }
          v15 = SaveLoad_CurrentSavegame;
          if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x15u )
          {
LABEL_33:
            LODWORD(v92) = 0x10;
            SaveLoad_LoadData((int)v15, v197, v92);
            v18 = v198;
            v19 = v198 == 0;
            v20 = v197[0];
            v21 = v199[0];
            v14[1] = v198;
            *(_BYTE *)v14 = v20;
            *((_BYTE *)v14 + 8) = v21;
            if ( !v19 )
            {
              v22 = TESForm_LookupByFormID(v18);
              v14[1] = OblivionDynamicCast(
                         v22,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESKey `RTTI Type Descriptor',
                         0);
            }
          }
          sub_41EAF0(ecx0, (int)v14);
        }
        goto LABEL_213;
      case 0x32u:
        if ( (a5 & 0x100000) != 0 )
        {
          *(float *)&v48 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
          v134 = v48;
          v202 = 3;
          if ( *(float *)&v48 == 0.0 )
            v49 = 0;
          else
            v49 = sub_42B590(v48);
          v202 = 0xFFFFFFFF;
          sub_42B500(v49);
          ExtraDataList::SetTeleportData(ecx0, v49);
        }
        goto LABEL_213;
      case 0x33u:
        if ( (a5 & 0x400) != 0 )
        {
          LODWORD(v114) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v139, v114);
          v55 = BaseExtraList_GetExtraData(ecx0, kExtraData_MapMarker);
          if ( v55 )
            LOBYTE(v55[1].vtbl[1].CompareTo) = v139;
        }
        goto LABEL_213;
      case 0x35u:
        if ( (a5 & 0x10000000) != 0 )
          sub_4209D0(ecx0, 1);
        goto LABEL_213;
      case 0x36u:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v153, v114);
          LODWORD(v116) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v166, v116);
          ExtraDataList_AddExtraLeveledItem(ecx0, v153);
          sub_41FF40(ecx0, v166);
        }
        goto LABEL_213;
      case 0x37u:
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x43u && (a5 & 0x30) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v151, v114);
          __asm { fld     [esp+250h+var_200] }
          __asm { fstp    [esp+254h+var_254]; float }
          if ( v7 )
            sub_4DB520(*(float *)&v114);
          else
            sub_423A30(ecx0, *(float *)&v114);
        }
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x43u && (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v158, v114);
          __asm { fld     [esp+250h+var_1DC] }
          __asm { fstp    [esp+254h+var_254]; float }
          sub_423A30(ecx0, *(float *)&v114);
        }
        goto LABEL_213;
      case 0x39u:
        if ( (a5 & 0x200000) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(v156, v114);
          LODWORD(v104) = 4;
          SaveLoad_LoadFormID(v156, v104);
          LODWORD(v95) = 4;
          SaveLoad_LoadFormID(&v151, v95);
          v41 = (NonActorMagicCaster *)FormHeapAlloc(0x24u);
          v128 = (int)v41;
          v200[0x3E] = 1;
          if ( v41 )
            v42 = (BSExtraData *)NonActorMagicCaster::NonActorMagicCaster(v41);
          else
            v42 = 0;
          CompareTo = v42[1].vtbl[6].CompareTo;
          v200[0x3E] = 0xFFFFFFFF;
          CompareTo(v42 + 1, v151);
          v42[1].vtbl[7].CompareTo(v42 + 1, (BSExtraData *)v152);
          BaseExtraList_AddExtra(ecx0, v42);
        }
        goto LABEL_213;
      case 0x3Au:
        if ( (a5 & 0x200000) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(&v159, v114);
          v132 = (_DWORD *)FormHeapAlloc(0x20u);
          v201 = 2;
          if ( v132 )
          {
            st7_0 = NonActorMagicTarget_constr(LODWORD(v157[1]));
            v45 = v44;
          }
          else
          {
            v45 = 0;
          }
          Destructor = v45[1].vtbl[1].Destructor;
          v201 = 0xFFFFFFFF;
          v47 = ((int (__thiscall *)(BSExtraData *))Destructor)(&v45[1]);
          ActiveEffect_Base_LoadAEList_(v47, 0, v108, v117, v127, v128, v129, v130, v131, (int)v132, v133);
          BaseExtraList_AddExtra(ecx0, v45);
        }
        goto LABEL_213;
      case 0x3Cu:
        if ( (a5 & 0x2000) != 0 )
          st7_0 = SaveLoad_AdvanceBufferOffset(4);
        goto LABEL_213;
      case 0x3Du:
        if ( (char)a5 < 0 )
        {
          sub_424770(ecx0);
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v160, v114);
          __asm { fld     [esp+250h+var_1D4] }
          __asm { fstp    [esp+254h+var_254]; float }
          sub_4269E0(ecx0, *(float *)&v114);
        }
        goto LABEL_213;
      case 0x3Eu:
        if ( (a5 & 0x4000) != 0 )
        {
          *(float *)&v50 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
          v134 = v50;
          v202 = 4;
          if ( *(float *)&v50 == 0.0 )
            v51 = 0;
          else
            v51 = (BSExtraData *)sub_42A510(v50);
          LODWORD(v114) = 4;
          v202 = 0xFFFFFFFF;
          SaveLoad_LoadFormID(&v161, v114);
          LODWORD(v96) = 0xC;
          v51[2].vtbl = v159;
          HIDWORD(v92) = v51 + 1;
          goto LABEL_128;
        }
        goto LABEL_213;
      case 0x41u:
        LODWORD(v114) = 4;
        SaveLoad_LoadFormID(&v171, v114);
        if ( v169 )
          sub_4203E0(ecx0, v169);
        goto LABEL_213;
      case 0x42u:
        LODWORD(v114) = 1;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v133 + 2, v114);
        v65 = 0;
        if ( BYTE2(v133) )
        {
          do
          {
            LODWORD(v114) = 4;
            SaveLoad_LoadFormID(&v169, v114);
            if ( v167 )
              sub_424B60(ecx0, v167);
            ++v65;
          }
          while ( v65 < BYTE2(v131) );
        }
        goto LABEL_213;
      case 0x45u:
        LODWORD(v114) = 4;
        SaveLoad_LoadFormID(&v173, v114);
        v69 = TESForm_LookupByFormID(v171);
        v70 = OblivionDynamicCast(
                v69,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESActorBase `RTTI Type Descriptor',
                0);
        if ( v12 )
        {
          if ( v70 )
            (*(void (__thiscall **)(char *, void *))(*(_DWORD *)v12 + 0x12C))(v12, v70);
        }
        goto LABEL_213;
      case 0x46u:
        if ( (a5 & 0x1000) != 0 )
        {
          *(float *)&v52 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
          v134 = v52;
          v202 = 5;
          if ( *(float *)&v52 == 0.0 )
            v51 = 0;
          else
            v51 = (BSExtraData *)sub_42A6E0(v52);
          LODWORD(v114) = 4;
          v202 = 0xFFFFFFFF;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v51[1], v114);
          LODWORD(v118) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v51[1].members, v118);
          LODWORD(v119) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v51[1].members.next, v119);
          HIDWORD(v96) = v51 + 2;
LABEL_128:
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)HIDWORD(v92), v96);
          BaseExtraList_AddExtra(ecx0, v51);
        }
        goto LABEL_213;
      case 0x47u:
        if ( (a5 & 0x20) != 0 )
          sub_41F370(ecx0, 1);
        goto LABEL_213;
      case 0x48u:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(&v163, v114);
          sub_41EFD0(ecx0, v161);
        }
        goto LABEL_213;
      case 0x4Au:
        if ( (a5 & 0x2000000) != 0 )
        {
          next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
          if ( next >= 0x15u && next < 0x17u )
          {
            LODWORD(v114) = 4;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v165, v114);
            if ( v165 < 0x2B )
              sub_424DE0(ecx0, *(const char **)&animGroupInfos_ptr[0x24 * v165]);
          }
          v54 = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
          if ( v54 < 0x15u || v54 >= 0x17u )
          {
            LODWORD(v114) = 1;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v140, v114);
            st7_0 = _memset(v200, 0, sizeof(v200));
            LODWORD(v120) = v140;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v200, v120);
            sub_424DE0(ecx0, (const char *)v200);
          }
        }
        goto LABEL_213;
      case 0x4Bu:
        if ( (a5 & 0x1000000) != 0 )
        {
          LODWORD(v114) = 2;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v132, v114);
          if ( (_WORD)v132 )
          {
            v66 = (TESForm *)MemoryHeap_Alloc_ZlibCallback((unsigned __int16)v132);
            LODWORD(v121) = (unsigned __int16)v132;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v66, v121);
            sub_421000(ecx0, v66);
          }
          LODWORD(v121) = 2;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v132, v121);
          if ( (_WORD)v132 )
          {
            v67 = (BSExtraData *)MemoryHeap_Alloc_ZlibCallback((unsigned __int16)v132);
            LODWORD(v122) = (unsigned __int16)v132;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v67, v122);
            sub_4210E0(ecx0, v67);
          }
          LODWORD(v122) = 2;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v132, v122);
          if ( (_WORD)v132 )
          {
            v68 = (BSExtraDataVtbl *)MemoryHeap_Alloc_ZlibCallback((unsigned __int16)v132);
            LODWORD(v114) = (unsigned __int16)v132;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v68, v114);
            sub_4211E0(ecx0, v68);
          }
          if ( v7->member.niNode )
            BYTE1(v133) = 1;
        }
        goto LABEL_213;
      case 0x4Eu:
        LODWORD(v114) = 2;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v146, v114);
        *(float *)&v71 = COERCE_FLOAT(FormHeapAlloc(0x10u));
        v134 = v71;
        v202 = 7;
        if ( *(float *)&v71 == 0.0 )
          v72 = 0;
        else
          v72 = (BSExtraData *)ExtraFriendHitList::ExtraFriendHitList(v71);
        v73 = 0;
        v202 = 0xFFFFFFFF;
        if ( v146 )
        {
          do
          {
            LODWORD(v114) = 4;
            SaveLoad_LoadFormID(&v175, v114);
            v132 = (_DWORD *)FormHeapAlloc(0xCu);
            v201 = 8;
            if ( v132 )
            {
              st7_0 = sub_4298A0(v173);
              v75 = v74;
            }
            else
            {
              v75 = 0;
            }
            LODWORD(v105) = 2;
            v201 = 0xFFFFFFFF;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(v75 + 4), v105);
            LODWORD(v106) = 4;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(v75 + 8), v106);
            BSSimpleList_PushFront(&v72[1].vtbl->Destructor, v75);
            ++v73;
          }
          while ( v73 < (unsigned __int16)v144 );
        }
        BaseExtraList_AddExtra(ecx0, v72);
        v7 = (TESObjectREFR *)v147;
        goto LABEL_213;
      case 0x4Fu:
        LODWORD(v114) = 4;
        SaveLoad_LoadFormID(&v177, v114);
        if ( v175 )
          sub_423970(ecx0, v175);
        goto LABEL_213;
      case 0x50u:
        if ( (a5 & 0x20) != 0 )
          sub_41F2F0(ecx0);
        goto LABEL_213;
      case 0x52u:
        if ( (a5 & 0x2000) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v180, v114);
          sub_41F420(ecx0, v180);
        }
        goto LABEL_213;
      case 0x53u:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 4;
          SaveLoad_LoadFormID(&v179, v114);
          if ( v177 )
          {
            v76 = TESForm_LookupByFormID(v177);
            if ( OblivionDynamicCast(
                   v76,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESObjectCELL `RTTI Type Descriptor',
                   0)
              || OblivionDynamicCast(
                   v76,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESWorldSpace `RTTI Type Descriptor',
                   0) )
            {
              sub_423C90(ecx0, (BSExtraDataVtbl *)v76);
            }
          }
        }
        goto LABEL_213;
      case 0x54u:
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x44u )
        {
          LODWORD(v114) = 2;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v145, v114);
          v77 = 0;
          if ( v145 )
          {
            v78 = v152 + 0x88;
            do
            {
              LODWORD(v114) = 1;
              SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v137, v114);
              LODWORD(v123) = 4;
              SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v181, v123);
              v79 = (TESObjectREFR *)FormHeapAlloc(8u);
              v80 = (int)v79;
              v192 = v79;
              v202 = 9;
              if ( v79 )
              {
                __asm { fld     [esp+250h+var_180] }
                __asm { fstp    [esp+250h+var_234] }
                __asm { fld     [esp+254h+var_234] }
                __asm { fstp    [esp+254h+var_254]; float }
                LOBYTE(v79->vtbl) = v137;
                sub_67EC70(v124);
              }
              else
              {
                v80 = 0;
              }
              v202 = 0xFFFFFFFF;
              BSSimpleList_PushFront(v78, v80);
              ++v77;
            }
            while ( v77 < v145 );
            v7 = (TESObjectREFR *)v149;
          }
        }
        goto LABEL_213;
      case 0x55u:
        if ( (a5 & 0x20) != 0 )
        {
          LODWORD(v114) = 1;
          SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v185, v114);
          sub_422BA0(ecx0, v185);
        }
        goto LABEL_213;
      case 0x59u:
        v192 = (TESObjectREFR *)FormHeapAlloc(0x28u);
        v202 = 0xA;
        if ( v192 )
        {
          st7_0 = sub_6B8C80(HIDWORD(v114), v128);
          v82 = v81;
        }
        else
        {
          v82 = 0;
        }
        v202 = 0xFFFFFFFF;
        sub_6B8950(v82, st7_0, (int)v7);
        if ( v82[6] )
        {
          sub_422C70(ecx0, (UnkBohDialogueTopicBoh *)v82);
        }
        else
        {
          sub_6B8F50(v82);
          FormHeapFree((unsigned int)v82);
        }
        goto LABEL_213;
      case 0x5Au:
        LODWORD(v114) = 1;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v187, v114);
        sub_420920(ecx0, v187);
        goto LABEL_213;
      case 0x5Cu:
        LODWORD(v114) = 4;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v189, v114);
        __asm { fld     [esp+250h+var_160] }
        __asm { fstp    [esp+254h+var_254]; float }
        sub_422D20(ecx0, (BSExtraDataVtbl *)v114);
        goto LABEL_213;
      default:
        PrintError(
          "No loading code found in ExtraDataList::LoadGame() for type %i.  The order of the extra data enum probably cha"
          "nged.  Errors may occur.",
          v138);
        goto LABEL_213;
    }
  }
}
