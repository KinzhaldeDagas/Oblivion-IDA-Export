void __userpurge ExtraDataList_LoadModified(
        ExtraDataList *ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        int a5,
        int a6,
        TESChildCELL *a7)
{
  TESChildCELL *v7; // ebp
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  void (__thiscall *v12)(BSExtraData *); // esi
  int v13; // eax
  ExtraLockData *v14; // esi
  TESSaveLoadGame_SerializationView *v15; // ecx
  TESSaveLoadGame_SerializationView *v16; // ecx
  TESForm *v17; // eax
  UInt32 v18; // eax
  bool v19; // zf
  char v20; // cl
  char v21; // dl
  TESForm *v22; // eax
  TESForm *v23; // eax
  TESForm *v24; // eax
  TESGlobal *v25; // eax
  TESForm *v26; // eax
  BSExtraDataVtbl *v27; // eax
  char *v28; // esi
  int *ExtraScriptEventList; // edi
  _DWORD *v30; // eax
  int *v31; // esi
  TESPackage *Package; // esi
  TESForm *v33; // eax
  TESPackage *v34; // esi
  int v35; // esi
  TESForm *v36; // eax
  void *v37; // eax
  BSExtraDataVtbl *v38; // esi
  BSExtraDataVtbl *v39; // eax
  int v40; // esi
  NonActorMagicCaster *v41; // eax
  BSExtraData *v42; // edi
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // edx
  NonActorMagicTarget *v44; // eax
  NonActorMagicTarget *v45; // esi
  EffectNode *(__thiscall *GetActiveEffectList)(MagicTarget *); // eax
  int *v47; // eax
  TeleportData *v48; // eax
  TeleportData *inited; // esi
  char *v50; // eax
  BSExtraData *v51; // esi
  float *v52; // eax
  unsigned __int8 currentVersion; // al
  unsigned __int8 v54; // al
  BSExtraData *v55; // eax
  TESObjectCELL *PersistentCell; // esi
  BSExtraData *ExtraData; // eax
  TESForm *v58; // eax
  _DWORD *v59; // eax
  _DWORD *v60; // esi
  BSExtraDataVtbl *v61; // eax
  TESObjectCELL *v62; // eax
  TESObjectCELL *DwordAtOffset40; // eax
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
  float *v74; // eax
  float *v75; // esi
  TESForm *v76; // esi
  unsigned int v77; // edi
  _DWORD *v78; // ebp
  TESObjectREFR *v79; // eax
  int v80; // esi
  TESObjectREFR *v81; // eax
  MenuTopicView *v82; // esi
  UInt32 *v83; // edi
  unsigned __int8 *v84; // esi
  TESForm *v85; // eax
  unsigned __int8 *v86; // ebx
  TESForm *v87; // ecx
  unsigned __int8 *v88; // eax
  const char *v89; // eax
  const char *v90; // eax
  unsigned __int8 *v91; // edx
  BSExtraData *v92; // [esp-4h] [ebp-260h]
  unsigned int v93; // [esp+0h] [ebp-25Ch]
  int v94; // [esp+4h] [ebp-258h]
  int v95; // [esp+4h] [ebp-258h]
  int v96; // [esp+4h] [ebp-258h]
  int v97; // [esp+4h] [ebp-258h]
  int valuea; // [esp+8h] [ebp-254h]
  __int16 value; // [esp+8h] [ebp-254h]
  float valueb; // [esp+8h] [ebp-254h]
  int valuec; // [esp+8h] [ebp-254h]
  int valued; // [esp+8h] [ebp-254h]
  int v103; // [esp+Ch] [ebp-250h]
  int v104; // [esp+10h] [ebp-24Ch]
  float v105; // [esp+14h] [ebp-248h]
  int v106; // [esp+18h] [ebp-244h]
  int v107; // [esp+1Ch] [ebp-240h]
  _DWORD *p_vtbl; // [esp+20h] [ebp-23Ch] BYREF
  int v109; // [esp+24h] [ebp-238h] BYREF
  float v110; // [esp+28h] [ebp-234h]
  unsigned __int16 v111; // [esp+2Ch] [ebp-230h]
  char v112; // [esp+2Fh] [ebp-22Dh] BYREF
  char v113; // [esp+30h] [ebp-22Ch] BYREF
  unsigned __int8 v114; // [esp+31h] [ebp-22Bh] BYREF
  char v115; // [esp+32h] [ebp-22Ah] BYREF
  unsigned __int8 v116; // [esp+33h] [ebp-229h] BYREF
  unsigned __int16 v117; // [esp+34h] [ebp-228h] BYREF
  unsigned __int16 v118; // [esp+38h] [ebp-224h] BYREF
  unsigned int formID; // [esp+3Ch] [ebp-220h] BYREF
  UInt32 destination; // [esp+40h] [ebp-21Ch] BYREF
  unsigned __int16 v121; // [esp+44h] [ebp-218h] BYREF
  __int16 v122; // [esp+48h] [ebp-214h] BYREF
  unsigned __int8 *bufferCursor; // [esp+4Ch] [ebp-210h]
  char v124[4]; // [esp+50h] [ebp-20Ch] BYREF
  TESChildCELL *v125; // [esp+54h] [ebp-208h]
  int v126; // [esp+58h] [ebp-204h]
  unsigned int v127; // [esp+5Ch] [ebp-200h] BYREF
  void (__thiscall *v128)(BSExtraData *); // [esp+60h] [ebp-1FCh]
  BSExtraDataVtbl *v129; // [esp+64h] [ebp-1F8h] BYREF
  char v130[8]; // [esp+68h] [ebp-1F4h] BYREF
  int v131; // [esp+70h] [ebp-1ECh] BYREF
  char v132[4]; // [esp+74h] [ebp-1E8h] BYREF
  BSExtraDataVtbl *v133[2]; // [esp+78h] [ebp-1E4h] BYREF
  float v134; // [esp+80h] [ebp-1DCh] BYREF
  unsigned int v135; // [esp+84h] [ebp-1D8h] BYREF
  int v136; // [esp+88h] [ebp-1D4h] BYREF
  unsigned int v137; // [esp+8Ch] [ebp-1D0h] BYREF
  unsigned int v138; // [esp+90h] [ebp-1CCh] BYREF
  unsigned int v139; // [esp+94h] [ebp-1C8h] BYREF
  unsigned int v140; // [esp+98h] [ebp-1C4h] BYREF
  int v141; // [esp+9Ch] [ebp-1C0h] BYREF
  int v142; // [esp+A0h] [ebp-1BCh] BYREF
  unsigned int v143; // [esp+A4h] [ebp-1B8h] BYREF
  char v144[4]; // [esp+A8h] [ebp-1B4h] BYREF
  unsigned int v145; // [esp+ACh] [ebp-1B0h] BYREF
  unsigned int v146; // [esp+B0h] [ebp-1ACh]
  unsigned int v147; // [esp+B4h] [ebp-1A8h] BYREF
  unsigned int v148; // [esp+B8h] [ebp-1A4h] BYREF
  unsigned int v149; // [esp+BCh] [ebp-1A0h] BYREF
  unsigned int v150; // [esp+C0h] [ebp-19Ch] BYREF
  unsigned int v151; // [esp+C4h] [ebp-198h] BYREF
  char v152[4]; // [esp+C8h] [ebp-194h] BYREF
  unsigned int v153; // [esp+CCh] [ebp-190h] BYREF
  BSExtraDataVtbl *v154; // [esp+D0h] [ebp-18Ch] BYREF
  unsigned __int8 packageType[4]; // [esp+D4h] [ebp-188h] BYREF
  BSExtraDataVtbl *v156; // [esp+D8h] [ebp-184h] BYREF
  float v157; // [esp+DCh] [ebp-180h] BYREF
  SInt32 rank; // [esp+E0h] [ebp-17Ch] BYREF
  int v159; // [esp+E4h] [ebp-178h] BYREF
  char v160[4]; // [esp+E8h] [ebp-174h] BYREF
  int v161; // [esp+ECh] [ebp-170h] BYREF
  int a1; // [esp+F0h] [ebp-16Ch] BYREF
  bool noRumors[4]; // [esp+F4h] [ebp-168h] BYREF
  int v164; // [esp+F8h] [ebp-164h] BYREF
  BSExtraDataVtbl *v165; // [esp+FCh] [ebp-160h] BYREF
  char v166[4]; // [esp+100h] [ebp-15Ch] BYREF
  BSExtraDataVtbl *v167[2]; // [esp+104h] [ebp-158h] BYREF
  TESObjectREFR *reference; // [esp+10Ch] [ebp-150h]
  char v169[4]; // [esp+110h] [ebp-14Ch] BYREF
  void *v170; // [esp+114h] [ebp-148h] BYREF
  int Dst; // [esp+118h] [ebp-144h] BYREF
  float v172; // [esp+124h] [ebp-138h] BYREF
  char v173[4]; // [esp+128h] [ebp-134h] BYREF
  int v174; // [esp+12Ch] [ebp-130h]
  char v175[20]; // [esp+134h] [ebp-128h] BYREF
  _DWORD v176[65]; // [esp+148h] [ebp-114h] BYREF
  int v177; // [esp+250h] [ebp-Ch]
  int v178; // [esp+258h] [ebp-4h]

  v7 = a7; /*0x426acb*/
  v125 = a7; /*0x426adc*/
  destination = 0; /*0x426ae0*/
  bufferCursor = 0; /*0x426ae4*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x426b05*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x426b1c*/
      if ( currentlyLoadingFormHeader )
      {
        v10 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x426b29*/
        v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v10->vtbl->GetEditorName)( /*0x426b44*/
                              v10,
                              *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                              *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\ExtraDataList.cpp",
          0x1B6F,
          *currentlyLoadingFormHeader,
          v11,
          v94,
          valuea);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\ExtraDataList.cpp",
          0x1B6F,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x426b8f*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x426b93*/
  }
  LOWORD(v109) = 0; /*0x426ba5*/
  HIBYTE(v109) = 0; /*0x426baa*/
  v12 = (void (__thiscall *)(BSExtraData *))OblivionDynamicCast( /*0x426bc2*/
                                              a7,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                              &Actor `RTTI Type Descriptor',
                                              0);
  v128 = v12; /*0x426bcb*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &v118, 2u); /*0x426bcf*/
  v126 = 0; /*0x426bd9*/
  if ( !v118 ) /*0x426bdd*/
  {
LABEL_215:
    if ( (a5 & 0x4000000) != 0 ) /*0x42800e*/
      BaseExtraList_RemoveExtraByType(ecx0, 0x12u); /*0x428014*/
    goto LABEL_217; /*0x428014*/
  }
  while ( 2 ) /*0x426bfb*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &v114, 1u); /*0x426bfb*/
    switch ( v114 ) /*0x426c18*/
    {
      case 0x11u: /*0x426c18*/
        if ( v7 ) /*0x4279a6*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))v7->vtbl + 0x64))(v7) ) /*0x4279b7*/
          {
            PersistentCell = (TESObjectCELL *)ExtraDataList_GetPersistentCell(ecx0); /*0x4279c8*/
            if ( PersistentCell ) /*0x4279cc*/
            {
              ExtraData = BaseExtraList_GetExtraData(ecx0, kExtraData_PersistentCell); /*0x4279d2*/
              if ( ExtraData ) /*0x4279d9*/
                BaseExtraList_RemoveExtraByPtr(ecx0, (int)ExtraData, 1); /*0x4279e0*/
              TESObjectCELL_RemoveReference(PersistentCell, (TESObjectREFR *)v7); /*0x4279e8*/
            }
            SaveLoad_LoadFormID(g_TESSaveLoadGame, &v143, 4u); /*0x4279fd*/
            if ( TESObjectREFR_IsPersistent((TESObjectREFR *)v7) && v7 != (TESChildCELL *)::reference ) /*0x427a17*/
            {
              v58 = TESForm_LookupByFormID(v141); /*0x427a33*/
              v59 = OblivionDynamicCast( /*0x427a3c*/
                      v58,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESWorldSpace `RTTI Type Descriptor',
                      0);
              v60 = v59; /*0x427a41*/
              if ( v59 ) /*0x427a48*/
              {
                v61 = (BSExtraDataVtbl *)sub_4EF1E0(v59); /*0x427a50*/
                sub_4247B0(ecx0, v61); /*0x427a58*/
                v62 = (TESObjectCELL *)sub_4EF1E0(v60); /*0x427a60*/
                TESObjectCELL_AddReference(v62, (TESObjectREFR *)v7); /*0x427a67*/
                if ( Shared_GetDwordAtOffset40(v7) ) /*0x427a6e*/
                {
                  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v7); /*0x427a7d*/
                  if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x427a84*/
                  {
                    v64 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v7); /*0x427a94*/
                    TESObjectCELL_RemoveReference(v64, (TESObjectREFR *)v7); /*0x427a9b*/
                  }
                }
              }
            }
          }
        }
        goto LABEL_213; /*0x427aa0*/
      case 0x12u: /*0x426c18*/
        if ( (a5 & 0x4000020) != 0 ) /*0x427107*/
        {
          HIBYTE(v109) = 1; /*0x42711d*/
          SaveLoad_LoadFormID(g_TESSaveLoadGame, &v140, 4u); /*0x427122*/
          v26 = TESForm_LookupByFormID(v138); /*0x42713d*/
          v27 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x427146*/
                                     v26,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &Script `RTTI Type Descriptor',
                                     0);
          v28 = (char *)v27; /*0x42714b*/
          if ( v27 ) /*0x427152*/
            ExtraDataList_AddScript(ecx0, v27); /*0x427157*/
          ExtraScriptEventList = (int *)ExtraDataList_GetExtraScriptEventList(ecx0); /*0x427163*/
          if ( ExtraScriptEventList ) /*0x427167*/
            goto LABEL_78; /*0x427167*/
          if ( v28 ) /*0x42716b*/
            ExtraScriptEventList = (int *)Script_CreateEventList(v28); /*0x427174*/
          ExtraDataList_SetScriptEventList(ecx0, (int)ExtraScriptEventList); /*0x427179*/
          if ( ExtraScriptEventList ) /*0x427180*/
          {
LABEL_78:
            ScriptEventList_Load_(ExtraScriptEventList, st7_0); /*0x4271d9*/
          }
          else
          {
            v30 = (_DWORD *)FormHeapAlloc(0x14u); /*0x427184*/
            p_vtbl = v30; /*0x42718c*/
            v177 = 0; /*0x427192*/
            if ( v30 ) /*0x427199*/
              v31 = sub_4F9DB0(v30); /*0x4271a2*/
            else
              v31 = 0; /*0x4271a6*/
            v177 = 0xFFFFFFFF; /*0x4271aa*/
            ScriptEventList_Load_(v31, st7_0); /*0x4271b5*/
            if ( v31 ) /*0x4271bc*/
            {
              ScriptEventList_destr__((ScriptEventList *)v31); /*0x4271c4*/
              FormHeapFree((unsigned int)v31); /*0x4271ca*/
            }
          }
        }
        goto LABEL_213; /*0x4271d2*/
      case 0x17u: /*0x426c18*/
        if ( (a5 & 0x400000) != 0 ) /*0x4273d8*/
          SaveLoad_LoadData(g_TESSaveLoadGame, v175, 4u); /*0x4273ee*/
        goto LABEL_213; /*0x4273f3*/
      case 0x1Bu: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x427084*/
          SetWorn(ecx0, 1, 0); /*0x427090*/
        goto LABEL_213; /*0x427095*/
      case 0x1Cu: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x4270a2*/
          SetWorn(ecx0, 1, 1); /*0x4270ae*/
        goto LABEL_213; /*0x4270b3*/
      case 0x1Eu: /*0x426c18*/
        SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v152, 4u); /*0x4274f6*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 0xCu); /*0x42750b*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &v172, 4u); /*0x427520*/
        v170 = TESForm_LookupByFormID(v150); /*0x427541*/
        v38 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x427563*/
                                   v170,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
        v39 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x427565*/
                                   v170,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESObjectCELL `RTTI Type Descriptor',
                                   0);
        if ( v38 || v39 ) /*0x427573*/
          ExtraDataList_SetStartLocation(ecx0, v38, v39, &Dst, v172); /*0x427590*/
        goto LABEL_213; /*0x427595*/
      case 0x1Fu: /*0x426c18*/
        SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v124, 4u); /*0x427245*/
        SaveLoad_LoadData(g_TESSaveLoadGame, v160, 4u); /*0x42725a*/
        SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v144, 4u); /*0x42726f*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &v164, 1u); /*0x427284*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &v140, 1u); /*0x427299*/
        if ( g_TESSaveLoadGame->currentVersion >= 0x40u && TESDataHandler_IsFormIDCreated_(destination) ) /*0x4272b5*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v156, 1u); /*0x4272ce*/
          if ( !v12 ) /*0x4272d5*/
            (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x4272e7*/
              *(_DWORD *)&MEMORY[0xB33E90][0xF00],
              "Package being created on non-actor!");
          Package = TESSaveLoadGame_CreatePackage(g_TESSaveLoadGame, formID, v12, (TESPackageType)packageType[0]); /*0x427302*/
          Package->__vftable->LoadGame(Package); /*0x42730e*/
        }
        else
        {
          v33 = TESForm_LookupByFormID(destination); /*0x427325*/
          Package = (TESPackage *)OblivionDynamicCast( /*0x427333*/
                                    v33,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESPackage `RTTI Type Descriptor',
                                    0);
          if ( !Package ) /*0x42733a*/
            goto LABEL_213; /*0x42733a*/
        }
        sub_4268B0(ecx0, Package, SLODWORD(v157), (BSExtraData *)v141, noRumors[0], v139); /*0x427363*/
LABEL_213:
        if ( ++v126 < v118 ) /*0x427ff6*/
        {
          v12 = v128; /*0x426be5*/
          continue; /*0x426be5*/
        }
        if ( !HIBYTE(v109) ) /*0x428001*/
          goto LABEL_215; /*0x428001*/
LABEL_217:
        if ( !(_BYTE)v109 && (char)a5 < 0 ) /*0x428028*/
          BaseExtraList_RemoveExtraByType(ecx0, 0x27u); /*0x42802e*/
        if ( BYTE1(v109) ) /*0x428038*/
        {
          ExtraDataList_RestoreSavedAnimationData(ecx0, a2, a3, st7_0, (int)v7); /*0x42803d*/
          ExtraDataList_RestoreSavedHavokData(ecx0, v7); /*0x428045*/
        }
        if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x428050*/
        {
          v83 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x428063*/
          v84 = g_TESSaveLoadGame->bufferCursor; /*0x42806b*/
          if ( v83 ) /*0x42806e*/
          {
            v85 = TESForm_LookupByFormID(*v83); /*0x428077*/
            v86 = bufferCursor; /*0x42807c*/
            v87 = v85; /*0x428080*/
            v88 = &bufferCursor[(unsigned __int16)destination]; /*0x428087*/
            if ( v84 <= v88 ) /*0x42808e*/
            {
              if ( v84 < v88 ) /*0x4280cd*/
              {
                v90 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v87->vtbl->GetEditorName)( /*0x4280e4*/
                                      v87,
                                      *((unsigned __int8 *)v83 + 9),
                                      *(UInt32 *)((char *)v83 + 5));
                PrintError( /*0x428103*/
                  "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with ve"
                  "rsion %i and flags %08X",
                  &v86[(unsigned __int16)destination - (_DWORD)v84],
                  "..\\TES Shared\\ExtraDataList.cpp",
                  0x1E93,
                  *v83,
                  v90,
                  v97,
                  valued);
              }
            }
            else
            {
              v89 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v87->vtbl->GetEditorName)( /*0x4280a1*/
                                    v87,
                                    *((unsigned __int8 *)v83 + 9),
                                    *(UInt32 *)((char *)v83 + 5));
              PrintError( /*0x4280c0*/
                "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with versi"
                "on %i and flags %08X",
                &v84[-(unsigned __int16)destination] - v86,
                "..\\TES Shared\\ExtraDataList.cpp",
                0x1E93,
                *v83,
                v89,
                v96,
                valuec);
            }
          }
          else
          {
            v91 = &bufferCursor[(unsigned __int16)destination]; /*0x428116*/
            if ( v84 <= v91 ) /*0x42811b*/
            {
              if ( v84 < v91 ) /*0x428138*/
                PrintError( /*0x428153*/
                  "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                  &bufferCursor[(unsigned __int16)destination - (_DWORD)v84],
                  "..\\TES Shared\\ExtraDataList.cpp",
                  0x1E93,
                  g_TESSaveLoadGame->currentVersion);
            }
            else
            {
              PrintError( /*0x428136*/
                "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                &v84[-(unsigned __int16)destination] - bufferCursor,
                "..\\TES Shared\\ExtraDataList.cpp",
                0x1E93,
                g_TESSaveLoadGame->currentVersion);
            }
          }
        }
        return;
      case 0x20u: /*0x426c18*/
        if ( (a5 & 0x40000) != 0 ) /*0x427378*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, &v148, 4u); /*0x42738e*/
          if ( v146 ) /*0x42739c*/
          {
            v34 = TESSaveLoadGame_CreatePackage(g_TESSaveLoadGame, v146, 0, kPackageType_Trespass); /*0x4273b2*/
            ((void (__usercall *)(TESPackage *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v34->__vftable->LoadGame)( /*0x4273be*/
              v34,
              st7_0,
              a3,
              a2);
            ExtraDataList_SetTrespassPackageExtra(ecx0, (BSExtraDataVtbl *)v34); /*0x4273c3*/
          }
        }
        goto LABEL_213; /*0x4273c8*/
      case 0x21u: /*0x426c18*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &formID, 2u); /*0x42745b*/
        v35 = 0; /*0x427460*/
        if ( (_WORD)formID ) /*0x427467*/
        {
          do /*0x4274df*/
          {
            SaveLoad_LoadFormID(g_TESSaveLoadGame, &v150, 4u); /*0x427480*/
            SaveLoad_LoadData(g_TESSaveLoadGame, &a1, 1u); /*0x427495*/
            v36 = TESForm_LookupByFormID(v148); /*0x4274b0*/
            v37 = OblivionDynamicCast( /*0x4274b9*/
                    v36,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESPackage `RTTI Type Descriptor',
                    0);
            if ( v37 ) /*0x4274c3*/
              ExtraDataList_SetRunOnceExtraPackage(ecx0, (int)v37, a1); /*0x4274d0*/
            ++v35; /*0x4274da*/
          }
          while ( v35 < v117 ); /*0x4274df*/
        }
        goto LABEL_213; /*0x4274df*/
      case 0x22u: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x427400*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&v170, 4u); /*0x427416*/
          ExtraDataList_SetReferencePointer(ecx0, reference); /*0x427425*/
        }
        goto LABEL_213; /*0x42742a*/
      case 0x23u: /*0x426c18*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &v117, 2u); /*0x4275a7*/
        v40 = 0; /*0x4275ac*/
        if ( v117 ) /*0x4275b3*/
        {
          do /*0x4275e8*/
          {
            SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v130, 4u); /*0x4275cd*/
            sub_424C50(ecx0, v128); /*0x4275d9*/
            ++v40; /*0x4275e3*/
          }
          while ( v40 < v111 ); /*0x4275e8*/
        }
        goto LABEL_213; /*0x4275e8*/
      case 0x25u: /*0x426c18*/
        ExtraDataList_SetGhost_(ecx0, 1); /*0x4270f2*/
        goto LABEL_213; /*0x4270f7*/
      case 0x27u: /*0x426c18*/
        if ( (a5 & 0xA0) != 0 ) /*0x426fa3*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v169, 4u); /*0x426fb9*/
          v23 = TESForm_LookupByFormID((UInt32)v167[1]); /*0x426fc6*/
          ExtraDataList::SetOrRemoveExtraOwnership(ecx0, v23); /*0x426fd1*/
          LOBYTE(v107) = 1; /*0x426fd6*/
        }
        goto LABEL_213; /*0x426fdb*/
      case 0x28u: /*0x426c18*/
        if ( (a5 & 0x120) != 0 ) /*0x426feb*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, &v138, 4u); /*0x427001*/
          v24 = TESForm_LookupByFormID(v136); /*0x42701c*/
          v25 = (TESGlobal *)OblivionDynamicCast( /*0x427025*/
                               v24,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESGlobal `RTTI Type Descriptor',
                               0);
          if ( v25 ) /*0x42702f*/
            ExtraDataList_SetGlobal(ecx0, v25); /*0x427038*/
        }
        goto LABEL_213; /*0x42703d*/
      case 0x29u: /*0x426c18*/
        if ( (a5 & 0x220) != 0 ) /*0x42704d*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &rank, 4u); /*0x427063*/
          ExtraDataList_SetRank(ecx0, rank); /*0x427072*/
        }
        goto LABEL_213; /*0x427077*/
      case 0x2Au: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x426c27*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v159, 2u); /*0x426c3d*/
          ExtraDataList_SetExtraCount(ecx0, v159); /*0x426c4c*/
        }
        goto LABEL_213; /*0x426c51*/
      case 0x2Bu: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x426c5e*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, v167, 4u); /*0x426c74*/
          ExtraDataList_SetHealthValue(ecx0, v167[0]); /*0x426c86*/
        }
        goto LABEL_213; /*0x426c8b*/
      case 0x2Cu: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x426c98*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v131, 1u); /*0x426cab*/
          ExtraDataList_SetUses(ecx0, v131); /*0x426cb7*/
        }
        goto LABEL_213; /*0x426cbc*/
      case 0x2Du: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x426cc9*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v154, 4u); /*0x426cdf*/
          ExtraDataList_SetTimeLeft(ecx0, v154); /*0x426cf1*/
        }
        goto LABEL_213; /*0x426cf6*/
      case 0x2Eu: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x426d03*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, v133, 4u); /*0x426d16*/
          ExtraDataList_SetCharge(ecx0, v133[0]); /*0x426d25*/
        }
        goto LABEL_213; /*0x426d2a*/
      case 0x2Fu: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x426d37*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v112, 1u); /*0x426d4a*/
          BaseExtraList_SetSoulLevel(ecx0, v112); /*0x426d57*/
        }
        goto LABEL_213; /*0x426d5c*/
      case 0x31u: /*0x426c18*/
        if ( (a5 & 0x40) != 0 ) /*0x426d69*/
        {
          v13 = FormHeapAlloc(0xCu); /*0x426d71*/
          if ( v13 ) /*0x426d7b*/
          {
            *(_BYTE *)v13 = 0; /*0x426d7d*/
            *(_DWORD *)(v13 + 4) = 0; /*0x426d80*/
            *(_BYTE *)(v13 + 8) = 0; /*0x426d87*/
            v14 = (ExtraLockData *)v13; /*0x426d8b*/
          }
          else
          {
            v14 = 0; /*0x426d8f*/
          }
          v15 = g_TESSaveLoadGame; /*0x426d91*/
          if ( g_TESSaveLoadGame->currentVersion < 0x15u ) /*0x426d9b*/
            goto LABEL_33; /*0x426d9b*/
          SaveLoad_LoadData(g_TESSaveLoadGame, v14, 1u); /*0x426da4*/
          SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v166, 4u); /*0x426db9*/
          v16 = g_TESSaveLoadGame; /*0x426dbe*/
          if ( g_TESSaveLoadGame->currentVersion < 0x1Au ) /*0x426dc8*/
          {
            SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v173, 4u); /*0x426dd4*/
            v16 = g_TESSaveLoadGame; /*0x426dd9*/
          }
          SaveLoad_LoadData(v16, &v14->flags, 1u); /*0x426de5*/
          if ( a1 ) /*0x426df3*/
          {
            v17 = TESForm_LookupByFormID(a1); /*0x426e04*/
            v14->key = (TESKey *)OblivionDynamicCast( /*0x426e15*/
                                   v17,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESKey `RTTI Type Descriptor',
                                   0);
          }
          v15 = g_TESSaveLoadGame; /*0x426e18*/
          if ( g_TESSaveLoadGame->currentVersion < 0x15u ) /*0x426e22*/
          {
LABEL_33:
            SaveLoad_LoadData(v15, v173, 0x10u); /*0x426e2e*/
            v18 = v174; /*0x426e33*/
            v19 = v174 == 0; /*0x426e3a*/
            v20 = v173[0]; /*0x426e3c*/
            v21 = v175[0]; /*0x426e43*/
            v14->key = (TESKey *)v174; /*0x426e4a*/
            v14->level = v20; /*0x426e4d*/
            v14->flags = v21; /*0x426e4f*/
            if ( !v19 ) /*0x426e52*/
            {
              v22 = TESForm_LookupByFormID(v18); /*0x426e63*/
              v14->key = (TESKey *)OblivionDynamicCast( /*0x426e74*/
                                     v22,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                     &TESKey `RTTI Type Descriptor',
                                     0);
            }
          }
          ExtraDataList_SetLock(ecx0, v14); /*0x426e7a*/
        }
        goto LABEL_213; /*0x426e7f*/
      case 0x32u: /*0x426c18*/
        if ( (a5 & 0x100000) != 0 ) /*0x427720*/
        {
          *(float *)&v48 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x427728*/
          v110 = *(float *)&v48; /*0x427730*/
          v178 = 3; /*0x427736*/
          if ( *(float *)&v48 == 0.0 ) /*0x427741*/
            inited = 0; /*0x42774e*/
          else
            inited = TeleportData_InitSentinels(v48); /*0x42774a*/
          v178 = 0xFFFFFFFF; /*0x427752*/
          sub_42B500(inited); /*0x42775d*/
          ExtraDataList::SetTeleportData(ecx0, inited); /*0x427765*/
        }
        goto LABEL_213; /*0x42776a*/
      case 0x33u: /*0x426c18*/
        if ( (a5 & 0x400) != 0 ) /*0x42796c*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v115, 1u); /*0x42797f*/
          v55 = BaseExtraList_GetExtraData(ecx0, kExtraData_MapMarker); /*0x427988*/
          if ( v55 ) /*0x42798f*/
            LOBYTE(v55[1].vtbl[1].CompareTo) = v115; /*0x42799c*/
        }
        goto LABEL_213; /*0x42799f*/
      case 0x35u: /*0x426c18*/
        if ( (a5 & 0x10000000) != 0 ) /*0x42743a*/
          ExtraDataList_SetLeveledCreatureFlag(ecx0, 1); /*0x427444*/
        goto LABEL_213; /*0x427449*/
      case 0x36u: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x4271eb*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v129, 4u); /*0x4271fe*/
          SaveLoad_LoadData(g_TESSaveLoadGame, &v142, 1u); /*0x427213*/
          ExtraDataList_AddExtraLeveledItem(ecx0, v129); /*0x42721f*/
          sub_41FF40(ecx0, v142); /*0x42722e*/
        }
        goto LABEL_213; /*0x427233*/
      case 0x37u: /*0x426c18*/
        if ( g_TESSaveLoadGame->currentVersion < 0x43u && (a5 & 0x30) != 0 ) /*0x426e98*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v127, 4u); /*0x426ea1*/
          if ( v7 ) /*0x426eb0*/
            sub_4DB520((MobileObject *)v7, *(float *)&v127); /*0x426eb4*/
          else
            sub_423A30(ecx0, *(float *)&v127); /*0x426ebd*/
        }
        if ( g_TESSaveLoadGame->currentVersion >= 0x43u && (a5 & 0x20) != 0 ) /*0x426eda*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v134, 4u); /*0x426ee7*/
          sub_423A30(ecx0, v134); /*0x426ef6*/
        }
        goto LABEL_213; /*0x426efb*/
      case 0x39u: /*0x426c18*/
        if ( (a5 & 0x200000) != 0 ) /*0x4275f6*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v132, 4u); /*0x427609*/
          SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)v132, 4u); /*0x42761b*/
          SaveLoad_LoadFormID(g_TESSaveLoadGame, &v127, 4u); /*0x42762d*/
          v41 = (NonActorMagicCaster *)FormHeapAlloc(0x24u); /*0x427634*/
          v104 = (int)v41; /*0x42763c*/
          v176[0x3E] = 1; /*0x427642*/
          if ( v41 ) /*0x42764d*/
            v42 = (BSExtraData *)NonActorMagicCaster::NonActorMagicCaster(v41, (int)v125); /*0x42765b*/
          else
            v42 = 0; /*0x42765f*/
          CompareTo = v42[1].vtbl[6].CompareTo; /*0x427668*/
          v176[0x3E] = 0xFFFFFFFF; /*0x427671*/
          ((void (__usercall *)(BSExtraData *@<ecx>, unsigned int, double@<st0>, double@<st1>, double@<st2>))CompareTo)( /*0x42767c*/
            &v42[1],
            v127,
            st7_0,
            a3,
            a2);
          v42[1].vtbl[7].CompareTo(v42 + 1, (BSExtraData *)v128); /*0x42768a*/
          BaseExtraList_AddExtra(ecx0, v42); /*0x42768f*/
        }
        goto LABEL_213; /*0x427694*/
      case 0x3Au: /*0x426c18*/
        if ( (a5 & 0x200000) != 0 ) /*0x4276a0*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, &v135, 4u); /*0x4276b3*/
          v44 = (NonActorMagicTarget *)FormHeapAlloc(0x20u); /*0x4276ba*/
          p_vtbl = &v44->super.vtbl; /*0x4276c2*/
          v177 = 2; /*0x4276c8*/
          if ( v44 ) /*0x4276d3*/
            v45 = NonActorMagicTarget_constr(v44, (TESObjectREFR *)v133[1]); /*0x4276e1*/
          else
            v45 = 0; /*0x4276e5*/
          GetActiveEffectList = v45->magicTarget.vtbl->GetActiveEffectList; /*0x4276ea*/
          v177 = 0xFFFFFFFF; /*0x4276f2*/
          v47 = (int *)((int (__usercall *)@<eax>(MagicTarget *@<ecx>, double@<st0>, double@<st1>, double@<st2>))GetActiveEffectList)( /*0x4276fd*/
                         &v45->magicTarget,
                         st7_0,
                         a3,
                         a2);
          ActiveEffect_Base_LoadAEList(v47, 0, v95, value, v103, v104, v105, v106, v107, (int)p_vtbl, v109); /*0x427700*/
          BaseExtraList_AddExtra(ecx0, &v45->super); /*0x42770b*/
        }
        goto LABEL_213; /*0x427710*/
      case 0x3Cu: /*0x426c18*/
        if ( (a5 & 0x2000) != 0 ) /*0x426f0b*/
          SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, 4); /*0x426f19*/
        goto LABEL_213; /*0x426f1e*/
      case 0x3Du: /*0x426c18*/
        if ( (char)a5 < 0 ) /*0x426f65*/
        {
          sub_424770(ecx0); /*0x426f6d*/
          SaveLoad_LoadData(g_TESSaveLoadGame, &v136, 4u); /*0x426f82*/
          st7_0 = *(float *)&v136; /*0x426f87*/
          sub_4269E0(ecx0, *(float *)&v136); /*0x426f91*/
        }
        goto LABEL_213; /*0x426f96*/
      case 0x3Eu: /*0x426c18*/
        if ( (a5 & 0x4000) != 0 ) /*0x42777a*/
        {
          *(float *)&v50 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x427782*/
          v110 = *(float *)&v50; /*0x42778a*/
          v178 = 4; /*0x427790*/
          if ( *(float *)&v50 == 0.0 ) /*0x42779b*/
            v51 = 0; /*0x4277a8*/
          else
            v51 = (BSExtraData *)sub_42A510(v50); /*0x4277a4*/
          v178 = 0xFFFFFFFF; /*0x4277ba*/
          SaveLoad_LoadFormID(g_TESSaveLoadGame, &v137, 4u); /*0x4277c5*/
          v93 = 0xC; /*0x4277d1*/
          v51[2].vtbl = (BSExtraDataVtbl *)v135; /*0x4277d6*/
          v92 = v51 + 1; /*0x4277d9*/
          goto LABEL_128; /*0x4277d9*/
        }
        goto LABEL_213; /*0x42777a*/
      case 0x41u: /*0x426c18*/
        SaveLoad_LoadFormID(g_TESSaveLoadGame, &v147, 4u); /*0x427b0d*/
        if ( v145 ) /*0x427b1b*/
          ExtraDataList_SetItemDropper(ecx0, (BSExtraDataVtbl *)v145); /*0x427b24*/
        goto LABEL_213; /*0x427b29*/
      case 0x42u: /*0x426c18*/
        SaveLoad_LoadData(g_TESSaveLoadGame, (char *)&v109 + 2, 1u); /*0x427ab2*/
        v65 = 0; /*0x427ab7*/
        if ( BYTE2(v109) ) /*0x427abe*/
        {
          do /*0x427af6*/
          {
            SaveLoad_LoadFormID(g_TESSaveLoadGame, &v145, 4u); /*0x427ad4*/
            if ( v143 ) /*0x427ae2*/
              sub_424B60(ecx0, (BSExtraDataVtbl *)v143); /*0x427ae7*/
            ++v65; /*0x427af1*/
          }
          while ( v65 < BYTE2(v107) ); /*0x427af6*/
        }
        goto LABEL_213; /*0x427af6*/
      case 0x45u: /*0x426c18*/
        SaveLoad_LoadFormID(g_TESSaveLoadGame, &v149, 4u); /*0x427c2f*/
        v69 = TESForm_LookupByFormID(v147); /*0x427c4a*/
        v70 = OblivionDynamicCast( /*0x427c53*/
                v69,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESActorBase `RTTI Type Descriptor',
                0);
        if ( v12 ) /*0x427c5d*/
        {
          if ( v70 ) /*0x427c65*/
            (*(void (__thiscall **)(void (__thiscall *)(BSExtraData *), void *))(*(_DWORD *)v12 + 0x12C))(v12, v70); /*0x427c76*/
        }
        goto LABEL_213; /*0x427c78*/
      case 0x46u: /*0x426c18*/
        if ( (a5 & 0x1000) != 0 ) /*0x4277fd*/
        {
          *(float *)&v52 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x427805*/
          v110 = *(float *)&v52; /*0x42780d*/
          v178 = 5; /*0x427813*/
          if ( *(float *)&v52 == 0.0 ) /*0x42781e*/
            v51 = 0; /*0x42782b*/
          else
            v51 = (BSExtraData *)ExtraPersuasionPercent_ctor(v52); /*0x427827*/
          v178 = 0xFFFFFFFF; /*0x427839*/
          SaveLoad_LoadData(g_TESSaveLoadGame, &v51[1], 4u); /*0x427844*/
          SaveLoad_LoadData(g_TESSaveLoadGame, &v51[1].members, 4u); /*0x427855*/
          SaveLoad_LoadData(g_TESSaveLoadGame, &v51[1].members.next, 1u); /*0x427866*/
LABEL_128:
          SaveLoad_LoadData(g_TESSaveLoadGame, v92, v93); /*0x4277da*/
          BaseExtraList_AddExtra(ecx0, v51); /*0x4277e8*/
        }
        goto LABEL_213; /*0x4277ed*/
      case 0x47u: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x4270c0*/
          ExtraDataList_SetCannotWear(ecx0, 1); /*0x4270ca*/
        goto LABEL_213; /*0x4270cf*/
      case 0x48u: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x42787e*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, &v139, 4u); /*0x427894*/
          ExtraDataList_SetPoison(ecx0, (BSExtraDataVtbl *)v137); /*0x4278a3*/
        }
        goto LABEL_213; /*0x4278a8*/
      case 0x4Au: /*0x426c18*/
        if ( (a5 & 0x2000000) != 0 ) /*0x4278b8*/
        {
          currentVersion = g_TESSaveLoadGame->currentVersion; /*0x4278c4*/
          if ( currentVersion >= 0x15u && currentVersion < 0x17u ) /*0x4278cd*/
          {
            SaveLoad_LoadData(g_TESSaveLoadGame, &v141, 4u); /*0x4278d9*/
            if ( v141 < 0x2B ) /*0x4278e8*/
              sub_424DE0(ecx0, (char)v7, *(const char **)&animGroupInfos_ptr[0x24 * v141]); /*0x4278f7*/
          }
          v54 = g_TESSaveLoadGame->currentVersion; /*0x427902*/
          if ( v54 < 0x15u || v54 >= 0x17u ) /*0x42790b*/
          {
            SaveLoad_LoadData(g_TESSaveLoadGame, &v116, 1u); /*0x427918*/
            _memset((int)v176, 0, sizeof(v176)); /*0x42792c*/
            SaveLoad_LoadData(g_TESSaveLoadGame, v176, v116); /*0x427948*/
            sub_424DE0(ecx0, (char)v7, (const char *)v176); /*0x427957*/
          }
        }
        goto LABEL_213; /*0x42795c*/
      case 0x4Bu: /*0x426c18*/
        if ( (a5 & 0x1000000) != 0 ) /*0x427b39*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &p_vtbl, 2u); /*0x427b4c*/
          if ( (_WORD)p_vtbl ) /*0x427b59*/
          {
            v66 = (TESForm *)MemoryHeap_Alloc_ZlibCallback((unsigned __int16)p_vtbl); /*0x427b6a*/
            SaveLoad_LoadData(g_TESSaveLoadGame, v66, (unsigned __int16)p_vtbl); /*0x427b76*/
            ExtraDataList_SetSavedAnimation(ecx0, v66); /*0x427b7e*/
          }
          SaveLoad_LoadData(g_TESSaveLoadGame, &p_vtbl, 2u); /*0x427b90*/
          if ( (_WORD)p_vtbl ) /*0x427b9d*/
          {
            v67 = (BSExtraData *)MemoryHeap_Alloc_ZlibCallback((unsigned __int16)p_vtbl); /*0x427bae*/
            SaveLoad_LoadData(g_TESSaveLoadGame, v67, (unsigned __int16)p_vtbl); /*0x427bba*/
            ExtraDataList_SetSavedAttachedAnimation(ecx0, v67); /*0x427bc2*/
          }
          SaveLoad_LoadData(g_TESSaveLoadGame, &p_vtbl, 2u); /*0x427bd4*/
          if ( (_WORD)p_vtbl ) /*0x427be1*/
          {
            v68 = (BSExtraDataVtbl *)MemoryHeap_Alloc_ZlibCallback((unsigned __int16)p_vtbl); /*0x427bf2*/
            SaveLoad_LoadData(g_TESSaveLoadGame, v68, (unsigned __int16)p_vtbl); /*0x427bfe*/
            ExtraDataList_SetSavedHavokData(ecx0, v68); /*0x427c06*/
          }
          if ( v7[0xF].vtbl ) /*0x427c0b*/
            BYTE1(v109) = 1; /*0x427c15*/
        }
        goto LABEL_213; /*0x427c1a*/
      case 0x4Eu: /*0x426c18*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &v122, 2u); /*0x427c8a*/
        *(float *)&v71 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x427c91*/
        v110 = *(float *)&v71; /*0x427c99*/
        v178 = 7; /*0x427c9f*/
        if ( *(float *)&v71 == 0.0 ) /*0x427caa*/
          v72 = 0; /*0x427cb7*/
        else
          v72 = (BSExtraData *)ExtraFriendHitList::ExtraFriendHitList(v71); /*0x427cb3*/
        v73 = 0; /*0x427cb9*/
        v178 = 0xFFFFFFFF; /*0x427cc0*/
        if ( v122 ) /*0x427ccb*/
        {
          do /*0x427d58*/
          {
            SaveLoad_LoadFormID(g_TESSaveLoadGame, &v151, 4u); /*0x427ce1*/
            v74 = (float *)FormHeapAlloc(0xCu); /*0x427ce8*/
            p_vtbl = v74; /*0x427cf0*/
            v177 = 8; /*0x427cf6*/
            if ( v74 ) /*0x427d01*/
              v75 = sub_4298A0(v74, v149); /*0x427d12*/
            else
              v75 = 0; /*0x427d16*/
            v177 = 0xFFFFFFFF; /*0x427d24*/
            SaveLoad_LoadData(g_TESSaveLoadGame, v75 + 1, 2u); /*0x427d2f*/
            SaveLoad_LoadData(g_TESSaveLoadGame, v75 + 2, 4u); /*0x427d40*/
            BSSimpleList_PushFront(&v72[1].vtbl->Destructor, (int)v75); /*0x427d49*/
            ++v73; /*0x427d53*/
          }
          while ( v73 < (unsigned __int16)destination ); /*0x427d58*/
        }
        BaseExtraList_AddExtra(ecx0, v72); /*0x427d61*/
        v7 = (TESChildCELL *)bufferCursor; /*0x427d66*/
        goto LABEL_213; /*0x427d6a*/
      case 0x4Fu: /*0x426c18*/
        SaveLoad_LoadFormID(g_TESSaveLoadGame, &v153, 4u); /*0x427d7f*/
        if ( v151 ) /*0x427d8d*/
          sub_423970(ecx0, (BSExtraDataVtbl *)v151); /*0x427d96*/
        goto LABEL_213; /*0x427d9b*/
      case 0x50u: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x4270dc*/
          ExtraDataList_AddBoundArmor(ecx0); /*0x4270e4*/
        goto LABEL_213; /*0x4270e9*/
      case 0x52u: /*0x426c18*/
        if ( (a5 & 0x2000) != 0 ) /*0x426f2e*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v156, 4u); /*0x426f44*/
          ExtraDataList_SetInvestmentGold(ecx0, v156); /*0x426f53*/
        }
        goto LABEL_213; /*0x426f58*/
      case 0x53u: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x427da8*/
        {
          SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)packageType, 4u); /*0x427dbe*/
          if ( v153 ) /*0x427dcc*/
          {
            v76 = TESForm_LookupByFormID(v153); /*0x427de4*/
            if ( OblivionDynamicCast( /*0x427e02*/
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
              sub_423C90(ecx0, (BSExtraDataVtbl *)v76); /*0x427e15*/
            }
          }
        }
        goto LABEL_213; /*0x427e1a*/
      case 0x54u: /*0x426c18*/
        if ( g_TESSaveLoadGame->currentVersion < 0x44u ) /*0x427e29*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v121, 2u); /*0x427e36*/
          v77 = 0; /*0x427e3b*/
          if ( v121 ) /*0x427e42*/
          {
            v78 = (_DWORD *)((char *)v128 + 0x88); /*0x427e4c*/
            do /*0x427edc*/
            {
              SaveLoad_LoadData(g_TESSaveLoadGame, &v113, 1u); /*0x427e5f*/
              SaveLoad_LoadData(g_TESSaveLoadGame, &v157, 4u); /*0x427e74*/
              v79 = (TESObjectREFR *)FormHeapAlloc(8u); /*0x427e7b*/
              v80 = (int)v79; /*0x427e80*/
              reference = v79; /*0x427e85*/
              v178 = 9; /*0x427e8e*/
              if ( v79 ) /*0x427e99*/
              {
                v110 = v157; /*0x427ea6*/
                valueb = v157; /*0x427eb1*/
                LOBYTE(v79->vtbl) = v113; /*0x427eb4*/
                SetFloatAtOffset_04(v79, valueb); /*0x427eb6*/
              }
              else
              {
                v80 = 0; /*0x427ebd*/
              }
              v178 = 0xFFFFFFFF; /*0x427ec2*/
              BSSimpleList_PushFront(v78, v80); /*0x427ecd*/
              ++v77; /*0x427ed7*/
            }
            while ( v77 < v121 ); /*0x427edc*/
            v7 = v125; /*0x427ee2*/
          }
        }
        goto LABEL_213; /*0x427ee6*/
      case 0x55u: /*0x426c18*/
        if ( (a5 & 0x20) != 0 ) /*0x427ef3*/
        {
          SaveLoad_LoadData(g_TESSaveLoadGame, &v161, 1u); /*0x427f09*/
          sub_422BA0(ecx0, v161); /*0x427f18*/
        }
        goto LABEL_213; /*0x427f1d*/
      case 0x59u: /*0x426c18*/
        v81 = (TESObjectREFR *)FormHeapAlloc(0x28u);// Load extra type 0x59 by allocating an empty MenuTopic, restoring its persistent fields, and conditionally transferring it to ExtraInfoGeneralTopic. /*0x427f24*/
        reference = v81; /*0x427f2c*/
        v178 = 0xA; /*0x427f35*/
        if ( v81 ) /*0x427f40*/
          v82 = MenuTopic::InitializeEmpty((MenuTopicView *)v81); /*0x427f49*/
        else
          v82 = 0; /*0x427f4d*/
        v178 = 0xFFFFFFFF; /*0x427f52*/
        MenuTopic::LoadGame(v82, (TESObjectREFR *)v7);// Restore cached MenuTopic identity/display/UI state only. DialogueResponses remain empty for lazy reconstruction. /*0x427f5d*/
        if ( v82->info )                        // Retention gate checks only whether the saved INFO FormID resolved to TESTopicInfo. ownerQuest and topic may still be null; they are not validated here. /*0x427f62*/
        {
          ExtraDataList::SetInfoGeneralTopic(ecx0, v82);// Resolved INFO: transfer the restored MenuTopic pointer to ExtraInfoGeneralTopic. SetInfoGeneralTopic itself does not free a previous cached pointer. /*0x427f6b*/
        }
        else
        {
          MenuTopic::Destroy(v82);              // Unresolved INFO: destroy and free the restored MenuTopic instead of retaining extra type 0x59. /*0x427f77*/
          FormHeapFree((unsigned int)v82); /*0x427f7d*/
        }
        goto LABEL_213; /*0x427f70*/
      case 0x5Au: /*0x426c18*/
        SaveLoad_LoadData(g_TESSaveLoadGame, noRumors, 1u); /*0x427f97*/
        ExtraDataList::SetNoRumors(ecx0, noRumors[0]); /*0x427fa6*/
        goto LABEL_213; /*0x427fab*/
      case 0x5Cu: /*0x426c18*/
        SaveLoad_LoadData(g_TESSaveLoadGame, &v165, 4u); /*0x427fbd*/
        sub_422D20(ecx0, v165); /*0x427fcf*/
        goto LABEL_213; /*0x427fd4*/
      default:
        PrintError( /*0x427fdc*/
          "No loading code found in ExtraDataList::LoadGame() for type %i.  The order of the extra data enum probably cha"
          "nged.  Errors may occur.",
          v114);
        goto LABEL_213; /*0x427fdc*/
    }
  }
}
/* Orphan comments:
Load extra type 0x5A (ExtraHasNoRumors) as one persistent boolean, independently of the cached INFOGENERAL MenuTopic.
*/
