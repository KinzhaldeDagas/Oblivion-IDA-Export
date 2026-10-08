// Loads versioned PlayerCharacter modified-form state. The skill block mirrors Player_SaveModifiedForm, rebuilds queued attribute buckets, and later relies on form linking to recalculate requiredSkillExp[21].
void __userpurge Player_LoadModifiedForm(
        int a1@<ecx>,
        TESFormVtbl *ebp0@<ebp>,
        double a3@<st2>,
        double a4@<st0>,
        int a5,
        int a6)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v10; // eax
  const char *v11; // eax
  TESSaveLoadGame_SerializationView *v12; // ecx
  UInt32 *v13; // ebp
  unsigned __int8 *v14; // edi
  TESForm *v15; // ecx
  unsigned __int8 *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  unsigned __int8 *v19; // edx
  double v20; // st6
  double v21; // st7
  UInt32 *v22; // edi
  TESForm *v23; // eax
  const char *v24; // eax
  TESSaveLoadGame_SerializationView *v25; // ecx
  TESSaveLoadGame_SerializationView *v26; // ecx
  unsigned __int8 currentVersion; // al
  unsigned __int8 v28; // al
  unsigned __int8 v29; // al
  unsigned __int8 data; // al
  TESForm *v31; // eax
  void *v32; // eax
  unsigned __int8 v33; // al
  TESForm *v34; // eax
  TESForm *v35; // eax
  _DWORD *v36; // eax
  unsigned int v37; // ebx
  unsigned int *v38; // edi
  unsigned int v39; // ebp
  unsigned int *v40; // eax
  TESForm *v41; // eax
  void *v42; // eax
  int v43; // ecx
  unsigned int v44; // ebp
  unsigned int v45; // ebp
  TESForm::FormFlags flags; // edi
  int v47; // eax
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  void *v50; // ebp
  _DWORD *i; // edi
  _DWORD *v52; // eax
  _DWORD *v53; // eax
  _DWORD *v54; // eax
  void *v55; // ebp
  _DWORD *j; // edi
  _DWORD *v57; // eax
  TESForm *v58; // eax
  void *v59; // eax
  _DWORD *v60; // edi
  int v61; // ebp
  int v62; // ebx
  TESForm *v63; // eax
  void *v64; // ebp
  _DWORD *v65; // eax
  int v66; // edi
  TESForm *v67; // eax
  char *v68; // eax
  int *v69; // eax
  int v70; // eax
  int v71; // ebp
  int *v72; // edi
  int *v73; // eax
  __int64 v74; // rax
  int v75; // eax
  TESForm *ActorBaseForm; // edi
  TESClass *v77; // ebp
  TESForm *v78; // eax
  TESClass *v79; // eax
  TESForm *v80; // eax
  TESSaveLoadGame_SerializationView *v81; // ecx
  UInt32 *v82; // edi
  unsigned __int8 *v83; // esi
  TESForm *v84; // eax
  TESForm::FormFlags v85; // ebx
  unsigned __int32 v86; // ecx
  const char *v87; // eax
  const char *v88; // eax
  unsigned __int32 v89; // edx
  int v90; // [esp-18h] [ebp-230h]
  int v91; // [esp-18h] [ebp-230h]
  int v92; // [esp-14h] [ebp-22Ch]
  int v93; // [esp-14h] [ebp-22Ch]
  UInt32 v94; // [esp+0h] [ebp-218h]
  TESForm v95; // [esp+8h] [ebp-210h] BYREF
  TESForm v96; // [esp+20h] [ebp-1F8h] BYREF
  int a2; // [esp+38h] [ebp-1E0h]
  int v98; // [esp+3Ch] [ebp-1DCh]
  unsigned int v99; // [esp+40h] [ebp-1D8h] BYREF
  int v100; // [esp+44h] [ebp-1D4h] BYREF
  unsigned int v101; // [esp+48h] [ebp-1D0h] BYREF
  unsigned int v102; // [esp+4Ch] [ebp-1CCh] BYREF
  TESForm v103; // [esp+50h] [ebp-1C8h] BYREF
  unsigned int v104; // [esp+68h] [ebp-1B0h]
  TESForm v105; // [esp+6Ch] [ebp-1ACh] BYREF
  unsigned int *p_flags; // [esp+84h] [ebp-194h]
  unsigned int v107; // [esp+88h] [ebp-190h]
  TESForm v108; // [esp+8Ch] [ebp-18Ch] BYREF
  TESForm v109; // [esp+A4h] [ebp-174h] BYREF
  TESForm destination; // [esp+BCh] [ebp-15Ch] BYREF
  int Dst; // [esp+D4h] [ebp-144h] BYREF
  int v112; // [esp+DCh] [ebp-13Ch] BYREF
  unsigned __int8 *v113; // [esp+E0h] [ebp-138h]
  TESForm v114; // [esp+E8h] [ebp-130h] BYREF
  int v115[14]; // [esp+10Ch] [ebp-10Ch] BYREF

  bufferCursor = 0; /*0x66535e*/
  destination.member.modlist.data = 0; /*0x665361*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x66537f*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x665393*/
      if ( currentlyLoadingFormHeader )
      {
        v10 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x6653a0*/
        v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v10->vtbl->GetEditorName)( /*0x6653bb*/
                              v10,
                              *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                              *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\PlayerCharacter.cpp",
          0x2525,
          *currentlyLoadingFormHeader,
          v11,
          v109.member.modlist.next,
          destination.vtbl);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\PlayerCharacter.cpp",
          0x2525,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x6653fc*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination.member.modlist, 2u); /*0x665406*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x3Bu ) /*0x665417*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x204), 0x120u); /*0x665482*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x324), 0x120u); /*0x665495*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x450), 0x120u); /*0x6654a8*/
  }
  else
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x204), 0x11Cu); /*0x665425*/
    destination.vtbl = (TESFormVtbl *)0x11C; /*0x66542c*/
    *(float *)(a1 + 0x320) = 0.0; /*0x665431*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x324), (unsigned int)destination.vtbl); /*0x665440*/
    *(float *)(a1 + 0x440) = 0.0; /*0x665447*/
    if ( g_TESSaveLoadGame->currentVersion >= 0x31u ) /*0x665457*/
    {
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x450), 0x11Cu); /*0x665467*/
      *(float *)(a1 + 0x56C) = 0.0; /*0x66546e*/
    }
  }
  destination.vtbl = ebp0; /*0x6654ad*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x444), 4u); /*0x6654b9*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x448), 4u); /*0x6654c9*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x44C), 4u); /*0x6654d9*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6654e4*/
  {
    v12 = g_TESSaveLoadGame; /*0x6654f1*/
    v13 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x6654f7*/
    v14 = g_TESSaveLoadGame->bufferCursor; /*0x6654ff*/
    if ( v13 ) /*0x665502*/
    {
      v15 = TESForm_LookupByFormID(*v13); /*0x665516*/
      v16 = &bufferCursor[LOWORD(destination.member.modlist.data)]; /*0x665518*/
      if ( v14 <= v16 ) /*0x665520*/
      {
        if ( v14 < v16 ) /*0x665560*/
        {
          v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x665577*/
                                v15,
                                *((unsigned __int8 *)v13 + 9),
                                *(UInt32 *)((char *)v13 + 5));
          PrintError( /*0x665597*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[LOWORD(destination.member.modlist.data) - (_DWORD)v14],
            ".\\AI\\PlayerCharacter.cpp",
            0x253F,
            *v13,
            v18,
            v109.member.modlist.data,
            v109.member.modlist.next);
        }
      }
      else
      {
        v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x665533*/
                              v15,
                              *((unsigned __int8 *)v13 + 9),
                              *(UInt32 *)((char *)v13 + 5));
        PrintError( /*0x665553*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v14[-LOWORD(destination.member.modlist.data)] - bufferCursor,
          ".\\AI\\PlayerCharacter.cpp",
          0x253F,
          *v13,
          v17,
          v109.member.modlist.data,
          v109.member.modlist.next);
      }
    }
    else
    {
      v19 = &bufferCursor[LOWORD(destination.member.modlist.data)]; /*0x6655a6*/
      if ( v14 <= v19 ) /*0x6655ab*/
      {
        if ( v14 < v19 ) /*0x6655c8*/
          PrintError( /*0x6655e3*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[LOWORD(destination.member.modlist.data) - (_DWORD)v14],
            ".\\AI\\PlayerCharacter.cpp",
            0x253F,
            v12->currentVersion);
      }
      else
      {
        PrintError( /*0x6655c6*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v14[-LOWORD(destination.member.modlist.data)] - bufferCursor,
          ".\\AI\\PlayerCharacter.cpp",
          0x253F,
          v12->currentVersion);
      }
    }
  }
  v20 = sub_5AD980(a3, a4, 0); /*0x6655ee*/
  j_Actor_LoadGame((PlayerCharacter *)a1, a3, v20, a4, a5, a6); /*0x665608*/
  v21 = sub_5AD980(a3, a4, 0); /*0x66560e*/
  v112 = 0; /*0x66561c*/
  v113 = 0; /*0x665620*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, v115, 4u); /*0x66563e*/
    if ( v115[0] != 0x4B4F4C42 )
    {
      v22 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x665652*/
      if ( v22 )
      {
        v23 = TESForm_LookupByFormID(*v22); /*0x66565f*/
        v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v23->vtbl->GetEditorName)( /*0x66567a*/
                              v23,
                              *((unsigned __int8 *)v22 + 9),
                              *(UInt32 *)((char *)v22 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\PlayerCharacter.cpp",
          0x2546,
          *v22,
          v24,
          v109.member.modlist.data,
          v109.member.modlist.next);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\PlayerCharacter.cpp",
          0x2546,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v25 = g_TESSaveLoadGame; /*0x6656b5*/
    v113 = g_TESSaveLoadGame->bufferCursor; /*0x6656c5*/
    SaveLoad_LoadData(v25, &v112, 2u); /*0x6656c9*/
  }
  if ( (a5 & 0x2000000) != 0 ) /*0x6656d4*/
  {
    v109.member.modlist.next = *(TESForm::ModReferenceList **)(a1 + 0x5CC); /*0x6656dc*/
    sub_470780(a1); /*0x6656de*/
  }
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x588), 1u); /*0x6656f1*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x589), 1u); /*0x665701*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x58B), 1u); /*0x665711*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x58C), 1u); /*0x665721*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x590), 4u); /*0x665731*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x59C), 4u); /*0x665741*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5A0), 4u); /*0x665751*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5A4), 4u); /*0x665761*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5A8), 1u); /*0x665771*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x600), 1u); /*0x665781*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x604), 4u); /*0x665791*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x608), 4u); /*0x6657a1*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x60C), 4u); /*0x6657b1*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x610), 1u); /*0x6657c1*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x611), 1u); /*0x6657d1*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x614), 4u); /*0x6657e1*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x620), 1u); /*0x6657f1*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x61C), 4u); /*0x665801*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x62C), 0xCu); /*0x665811*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5D4), 4u); /*0x665821*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x640), 4u); /*0x665831*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5BC), 4u); /*0x665841*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x648), 4u); /*0x665851*/
  SaveLoad_LoadData(g_TESSaveLoadGame, (void *)(a1 + 0x64C), 4u); /*0x665865*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x594), 1u); /*0x665875*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x598), 4u); /*0x665885*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x6E4), 1u); /*0x665895*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x6E5), 1u); /*0x6658a5*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x6E6), 1u); /*0x6658b5*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x6F4), 4u); /*0x6658c5*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x6F8), 4u); /*0x6658d5*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x6FC), 4u); /*0x6658e5*/
  v26 = g_TESSaveLoadGame; /*0x6658ea*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x1Du ) /*0x6658f4*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x714), 4u); /*0x665901*/
    v26 = g_TESSaveLoadGame; /*0x665906*/
  }
  if ( v26->currentVersion >= 0x22u ) /*0x665910*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5C0), 1u); /*0x66591d*/
    v26 = g_TESSaveLoadGame; /*0x665922*/
  }
  currentVersion = v26->currentVersion; /*0x665928*/
  if ( currentVersion >= 0x28u && currentVersion < 0x2Du ) /*0x665931*/
  {
    SaveLoad_AdvanceBufferOffset(v26, 1); /*0x665935*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x720), 0xCu); /*0x665945*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x720), 0xCu); /*0x66594f*/
    v26 = g_TESSaveLoadGame; /*0x665954*/
  }
  v28 = v26->currentVersion; /*0x66595a*/
  if ( v28 >= 0x35u && v28 < 0x71u ) /*0x665963*/
  {
    SaveLoad_AdvanceBufferOffset(v26, 4); /*0x665967*/
    v26 = g_TESSaveLoadGame; /*0x66596c*/
  }
  if ( v26->currentVersion >= 0x39u ) /*0x665976*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x658), 0x70u); /*0x665983*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x6C8), 0x18u); /*0x665993*/
    v26 = g_TESSaveLoadGame; /*0x665998*/
  }
  if ( v26->currentVersion >= 0x3Fu ) /*0x6659a2*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x738), 1u); /*0x6659af*/
    v26 = g_TESSaveLoadGame; /*0x6659b4*/
  }
  if ( v26->currentVersion >= 0x40u ) /*0x6659be*/
  {
    SaveLoad_LoadData(v26, (void *)(a1 + 0x57C), 4u); /*0x6659c9*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x580), 4u); /*0x6659d9*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x584), 4u); /*0x6659e9*/
    v26 = g_TESSaveLoadGame; /*0x6659ee*/
  }
  if ( v26->currentVersion >= 0x49u ) /*0x6659f8*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x110), 4u); /*0x665a05*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x200), 1u); /*0x665a15*/
    v26 = g_TESSaveLoadGame; /*0x665a1a*/
  }
  v29 = v26->currentVersion; /*0x665a20*/
  if ( v29 >= 0x4Au && v29 < 0x59u ) /*0x665a29*/
  {
    SaveLoad_AdvanceBufferOffset(v26, 8); /*0x665a2d*/
    v26 = g_TESSaveLoadGame; /*0x665a32*/
  }
  if ( v26->currentVersion == 0x59 ) /*0x665a3d*/
  {
    SaveLoad_AdvanceBufferOffset(v26, 4); /*0x665a45*/
    v26 = g_TESSaveLoadGame; /*0x665a4a*/
  }
  if ( v26->currentVersion >= 0x63u )
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &destination.member.modlist, 1u); /*0x665a60*/
    data = (unsigned __int8)destination.member.modlist.data; /*0x665a65*/
    if ( LOBYTE(destination.member.modlist.data) )
    {
      if ( !*(_DWORD *)(a1 + 0x5B0) )
      {
        *(_DWORD *)(a1 + 0x5B0) = FormHeapAlloc(
                                    (unsigned __int64)LOBYTE(destination.member.modlist.data) >> 0x1E != 0
                                  ? 0xFFFFFFFF
                                  : 4 * LOBYTE(destination.member.modlist.data));
        data = (unsigned __int8)destination.member.modlist.data; /*0x665a95*/
      }
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, *(void **)(a1 + 0x5B0), 4 * data); /*0x665aad*/
    }
    v26 = g_TESSaveLoadGame; /*0x665ab2*/
  }
  if ( v26->currentVersion >= 0x71u ) /*0x665abc*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x58A), 1u); /*0x665ac9*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5A9), 1u); /*0x665ad9*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x718), 4u); /*0x665ae9*/
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)(a1 + 0x760), 4u); /*0x665af9*/
    v26 = g_TESSaveLoadGame; /*0x665afe*/
  }
  if ( v26->currentVersion >= 0x78u ) /*0x665b08*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &unk_B3BAEA, 1u); /*0x665b13*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &unk_B3BAFC, 4u); /*0x665b21*/
    v26 = g_TESSaveLoadGame; /*0x665b26*/
  }
  if ( v26->currentVersion >= 0x7Au ) /*0x665b30*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &unk_B3BB24, 4u); /*0x665b3b*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&destination.member.modlist, 4u); /*0x665b49*/
  *(_DWORD *)&v109.member.type = 4; /*0x665b52*/
  *(_DWORD *)(a1 + 0x118) = destination.member.flags; /*0x665b58*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v114, *(unsigned int *)&v109.member.type); /*0x665b61*/
  v108.member.modlist.next = (TESForm::ModReferenceList *)4; /*0x665b6a*/
  v108.member.modlist.data = (Data *)&v114; /*0x665b70*/
  *(_DWORD *)(a1 + 0x644) = v113; /*0x665b73*/
  TESForm_LoadFormIDFromCurrentSaveGame( /*0x665b79*/
    (TESForm *)a1,
    &v108.member.modlist.data->errorState,
    (unsigned int)v108.member.modlist.next);
  v108.member.refID = 0; /*0x665b82*/
  MEMORY[0xB3BAD0] = (TESChildCELL *)v113; /*0x665b86*/
  PlayerCharacter_SetCurrentMagicItem((_DWORD *)a1, (char *)v108.member.refID); /*0x665b8c*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v114, 4u); /*0x665b9a*/
  *(_DWORD *)&v108.member.type = 4; /*0x665ba3*/
  *(_DWORD *)(a1 + 0x624) = v113; /*0x665ba9*/
  TESForm_LoadFormIDFromCurrentSaveGame( /*0x665bb2*/
    (TESForm *)a1,
    (unsigned int *)&destination.member,
    *(unsigned int *)&v108.member.type);
  v107 = 4; /*0x665bbb*/
  p_flags = (unsigned int *)&destination.member.flags; /*0x665bc1*/
  *(_DWORD *)(a1 + 0x1E8) = v109.member.modlist.next; /*0x665bc4*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, p_flags, v107); /*0x665bca*/
  v105.member.modlist.next = (TESForm::ModReferenceList *)4; /*0x665bd3*/
  v105.member.modlist.data = (Data *)&destination.member.modlist; /*0x665bd9*/
  *(_DWORD *)(a1 + 0x1EC) = destination.vtbl; /*0x665bdc*/
  TESForm_LoadFormIDFromCurrentSaveGame( /*0x665be2*/
    (TESForm *)a1,
    &v105.member.modlist.data->errorState,
    (unsigned int)v105.member.modlist.next);
  v105.member.refID = 4; /*0x665beb*/
  *(_DWORD *)(a1 + 0x1E0) = destination.member.flags; /*0x665bf1*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&destination, v105.member.refID); /*0x665bfa*/
  v31 = TESForm_LookupByFormID((UInt32)v109.member.modlist.data); /*0x665c12*/
  v32 = OblivionDynamicCast( /*0x665c1b*/
          v31,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESRegion `RTTI Type Descriptor',
          0);
  *(_DWORD *)&v105.member.type = 4; /*0x665c23*/
  v105.vtbl = (TESFormVtbl *)&v109; /*0x665c29*/
  *(_DWORD *)(a1 + 0x6E8) = v32; /*0x665c2c*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)v105.vtbl, *(unsigned int *)&v105.member.type); /*0x665c32*/
  v104 = 4; /*0x665c3b*/
  v103.member.modlist.next = (TESForm::ModReferenceList *)&v108.member.modlist.next; /*0x665c41*/
  *(_DWORD *)(a1 + 0x628) = v108.member.modlist.data; /*0x665c44*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)v103.member.modlist.next, v104); /*0x665c4a*/
  v103.member.modlist.data = (Data *)4; /*0x665c53*/
  *(_DWORD *)(a1 + 0x650) = v108.member.refID; /*0x665c59*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v108, (unsigned int)v103.member.modlist.data); /*0x665c62*/
  *(_DWORD *)(a1 + 0x6E0) = p_flags; /*0x665c6b*/
  v33 = g_TESSaveLoadGame->currentVersion; /*0x665c77*/
  if ( v33 >= 0x28u && v33 < 0x2Du ) /*0x665c80*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v105, 4u); /*0x665c8b*/
    *(_DWORD *)(a1 + 0x72C) = TESForm_LookupByFormID((UInt32)v103.member.modlist.next); /*0x665c9d*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x40u ) /*0x665cad*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v103.member.modlist.next, 4u); /*0x665cb8*/
    *(_DWORD *)(a1 + 0x578) = v103.member.refID; /*0x665cc1*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x42u ) /*0x665cd1*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, &v103.member.refID, 4u); /*0x665cdc*/
    MEMORY[0xB3BAD4] = *(_DWORD *)&v103.member.type; /*0x665ce5*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x57u ) /*0x665cf4*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v103.member, 4u); /*0x665cff*/
    v34 = TESForm_LookupByFormID(v102); /*0x665d17*/
    *(_DWORD *)(a1 + 0x570) = OblivionDynamicCast( /*0x665d28*/
                                v34,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                0);
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x60u ) /*0x665d38*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, &v102, 4u); /*0x665d43*/
    v35 = TESForm_LookupByFormID(v100); /*0x665d4d*/
    *(_DWORD *)(a1 + 0x638) = v35; /*0x665d57*/
    if ( v35 ) /*0x665d5d*/
      v21 = sub_663D30((TESObjectREFR *)a1, v21); /*0x665d61*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x63u ) /*0x665d6f*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v100, 2u); /*0x665d7e*/
    if ( (_WORD)v100 ) /*0x665d89*/
    {
      v36 = (_DWORD *)FormHeapAlloc(8u); /*0x665d8d*/
      if ( v36 ) /*0x665d97*/
      {
        *v36 = 0; /*0x665d99*/
        v36[1] = 0; /*0x665d9f*/
      }
      else
      {
        v36 = 0; /*0x665da8*/
      }
      *(_DWORD *)(a1 + 0x5AC) = v36; /*0x665daa*/
    }
    v37 = 0; /*0x665db0*/
    if ( (_WORD)v100 ) /*0x665db7*/
    {
      do /*0x665e24*/
      {
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v103, 4u); /*0x665dc9*/
        v38 = *(unsigned int **)(a1 + 0x5AC); /*0x665dd4*/
        v39 = v101; /*0x665dda*/
        if ( v101 ) /*0x665ddc*/
        {
          if ( *v38 ) /*0x665dde*/
          {
            v40 = (unsigned int *)FormHeapAlloc(8u); /*0x665de5*/
            if ( v40 ) /*0x665def*/
            {
              *v40 = *v38; /*0x665df3*/
              v40[1] = 0; /*0x665df5*/
              v40[1] = v38[1]; /*0x665dff*/
              v38[1] = (unsigned int)v40; /*0x665e02*/
            }
            else
            {
              *(_DWORD *)4 = v38[1]; /*0x665e0e*/
              v38[1] = 0; /*0x665e11*/
            }
            *v38 = v39; /*0x665e05*/
          }
          else
          {
            *v38 = v101; /*0x665e18*/
          }
        }
        ++v37; /*0x665e1f*/
      }
      while ( v37 < (unsigned __int16)v98 ); /*0x665e24*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Cu ) /*0x665e30*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, &v101, 4u); /*0x665e3b*/
    v41 = TESForm_LookupByFormID(v99); /*0x665e53*/
    v42 = OblivionDynamicCast( /*0x665e5c*/
            v41,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESWeather `RTTI Type Descriptor',
            0);
    v43 = *(_DWORD *)(a1 + 0x6E8); /*0x665e61*/
    if ( v43 ) /*0x665e6c*/
    {
      if ( v42 ) /*0x665e70*/
        *(_DWORD *)(v43 + 0x24) = v42; /*0x665e72*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Fu ) /*0x665e7f*/
  {
    NiTMap_Clear((_DWORD *)(a1 + 0x788)); /*0x665e89*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v96.member.modlist.next, 2u); /*0x665e97*/
    v44 = 0; /*0x665e9e*/
    if ( LOWORD(v96.member.modlist.next) ) /*0x665ea5*/
    {
      do /*0x665ee2*/
      {
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, &v99, 4u); /*0x665eb0*/
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v96.member.modlist, 1u); /*0x665ebe*/
        if ( a2 ) /*0x665ec9*/
          NiTMap_SetAt((_DWORD *)(a1 + 0x788), a2, (int)v96.member.modlist.data); /*0x665ed3*/
        ++v44; /*0x665edd*/
      }
      while ( v44 < LOWORD(v96.member.refID) ); /*0x665ee2*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x73u ) /*0x665ef2*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v96.member.refID, 2u); /*0x665f01*/
    v45 = 0; /*0x665f06*/
    if ( LOWORD(v96.member.refID) ) /*0x665f0d*/
    {
      do /*0x665f72*/
      {
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v96.member.modlist, 4u); /*0x665f19*/
        flags = v96.member.flags; /*0x665f24*/
        if ( v96.member.flags ) /*0x665f26*/
        {
          if ( LODWORD(qword_B3BB2C[6]) ) /*0x665f28*/
          {
            v47 = FormHeapAlloc(8u); /*0x665f32*/
            if ( v47 ) /*0x665f3c*/
            {
              *(float *)v47 = qword_B3BB2C[6]; /*0x665f44*/
              *(_DWORD *)(v47 + 4) = 0; /*0x665f46*/
            }
            else
            {
              v47 = 0; /*0x665f4b*/
            }
            *(float *)(v47 + 4) = qword_B3BB2C[7]; /*0x665f53*/
            LODWORD(qword_B3BB2C[7]) = v47; /*0x665f56*/
            LODWORD(qword_B3BB2C[6]) = flags; /*0x665f5b*/
          }
          else
          {
            qword_B3BB2C[6] = *(float *)&v96.member.flags; /*0x665f63*/
          }
        }
        ++v45; /*0x665f6d*/
      }
      while ( v45 < *(unsigned __int16 *)&v96.member.type ); /*0x665f72*/
    }
  }
  ActiveEffect_Base_LoadAEList( /*0x665f7c*/
    *(int **)(a1 + 0x1E4),
    (PlayerCharacter *)a1,
    v95.member.refID,
    (__int16)v95.member.modlist.data,
    (int)v95.member.modlist.next,
    (int)v96.vtbl,
    *(float *)&v96.member.type,
    v96.member.flags,
    v96.member.refID,
    (int)v96.member.modlist.data,
    (int)v96.member.modlist.next);
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x130), 0x54u);// Load exactly 0x54 bytes into PlayerCharacter::skillExp[21]. /*0x665f8f*/
  Player_ClearAttributeBonusBuckets((PlayerCharacter *)a1);// Discard any existing in-memory attribute-bonus bucket queue before reconstructing it from the save record. /*0x665f96*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x58u )// Save versions >=0x58 load a bucket count followed by that many eight-byte attribute-bonus buckets, preserving pending-level order. /*0x665fa4*/
  {
    *(_DWORD *)&v96.member.type = 0; /*0x665fb3*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v96.member, 4u); /*0x665fb7*/
    if ( *(int *)&v96.member.type > 0 ) /*0x665fc0*/
    {
      if ( !*(_DWORD *)(a1 + 0x5B4) ) /*0x665fc6*/
      {
        v48 = (_DWORD *)FormHeapAlloc(8u); /*0x665fd0*/
        if ( v48 ) /*0x665fda*/
        {
          *v48 = 0; /*0x665fdc*/
          v48[1] = 0; /*0x665fde*/
        }
        else
        {
          v48 = 0; /*0x665fe3*/
        }
        *(_DWORD *)(a1 + 0x5B4) = v48; /*0x665fe5*/
      }
      for ( v96.member.refID = 0; (int)v96.member.refID < *(int *)&v96.member.type; ++v96.member.refID ) /*0x665ff3*/
      {
        v49 = (_DWORD *)FormHeapAlloc(8u); /*0x665ff7*/
        if ( v49 ) /*0x666001*/
        {
          *v49 = 0; /*0x666005*/
          v49[1] = 0; /*0x666007*/
          v50 = v49; /*0x66600a*/
        }
        else
        {
          v50 = 0; /*0x66600e*/
        }
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, v50, 8u);// Load one eight-byte attribute-bonus bucket and append it to the reconstructed queue. /*0x666015*/
        if ( v50 ) /*0x66601c*/
        {
          for ( i = *(_DWORD **)(a1 + 0x5B4); i[1]; i = (_DWORD *)i[1] ) /*0x666024*/
            ; /*0x666030*/
          if ( *i ) /*0x666038*/
          {
            v52 = (_DWORD *)FormHeapAlloc(8u); /*0x66603e*/
            if ( v52 ) /*0x666048*/
            {
              *v52 = v50; /*0x66604a*/
              v52[1] = 0; /*0x66604c*/
              i[1] = v52; /*0x66604f*/
            }
            else
            {
              i[1] = 0; /*0x666056*/
            }
          }
          else
          {
            *i = v50; /*0x66605b*/
          }
        }
      }
    }
  }
  if ( g_TESSaveLoadGame->currentVersion < 0x58u )// Legacy save versions below 0x58 load a single eight-byte attribute-bonus bucket. /*0x666078*/
  {
    if ( !*(_DWORD *)(a1 + 0x5B4) ) /*0x66607e*/
    {
      v53 = (_DWORD *)FormHeapAlloc(8u); /*0x666088*/
      if ( v53 ) /*0x666092*/
      {
        *v53 = 0; /*0x666094*/
        v53[1] = 0; /*0x666096*/
      }
      else
      {
        v53 = 0; /*0x66609b*/
      }
      *(_DWORD *)(a1 + 0x5B4) = v53; /*0x66609d*/
    }
    v54 = (_DWORD *)FormHeapAlloc(8u); /*0x6660a5*/
    if ( v54 ) /*0x6660af*/
    {
      *v54 = 0; /*0x6660b3*/
      v54[1] = 0; /*0x6660b5*/
      v55 = v54; /*0x6660b8*/
    }
    else
    {
      v55 = 0; /*0x6660bc*/
    }
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, v55, 8u); /*0x6660c3*/
    if ( v55 ) /*0x6660ca*/
    {
      for ( j = *(_DWORD **)(a1 + 0x5B4); j[1]; j = (_DWORD *)j[1] ) /*0x6660d2*/
        ; /*0x6660d7*/
      if ( *j ) /*0x6660df*/
      {
        v57 = (_DWORD *)FormHeapAlloc(8u); /*0x6660e5*/
        if ( v57 ) /*0x6660ef*/
        {
          *v57 = v55; /*0x6660f1*/
          v57[1] = 0; /*0x6660f3*/
          j[1] = v57; /*0x6660f6*/
        }
        else
        {
          j[1] = 0; /*0x6660fd*/
        }
      }
      else
      {
        *j = v55; /*0x666102*/
      }
    }
  }
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x5B8), 3u);// Load the three Combat/Magic/Stealth specialization advance counters. /*0x66610f*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x188), 0x54u);// Load exactly 0x54 bytes into PlayerCharacter::skillAdv[21]. /*0x66611f*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x184), 4u);// Load the four-byte majorSkillAdvances counter. /*0x66612f*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x1DC), 1u);// Load the one-byte bCanLevelUp flag. /*0x66613f*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v96.member.flags, 4u); /*0x66614d*/
  if ( v96.vtbl ) /*0x666158*/
  {
    v58 = TESForm_LookupByFormID((UInt32)v96.vtbl); /*0x666167*/
    v59 = OblivionDynamicCast( /*0x666170*/
            v58,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESQuest `RTTI Type Descriptor',
            0);
    *(_DWORD *)(a1 + 0x5F4) = v59; /*0x66617a*/
    if ( v59 ) /*0x666180*/
      sub_529A20((int)v59, v21, (_DWORD *)(a1 + 0x5F8)); /*0x66618b*/
  }
  else
  {
    *(_DWORD *)(a1 + 0x5F4) = 0; /*0x666192*/
  }
  v60 = (_DWORD *)(a1 + 0x5E4); /*0x66619e*/
  if ( *(_DWORD *)(a1 + 0x5E8) ) /*0x666198*/
  {
    do /*0x6661ba*/
    {
      v61 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5E8) + 4); /*0x6661a9*/
      FormHeapFree(*(_DWORD *)(a1 + 0x5E8)); /*0x6661ad*/
      *(_DWORD *)(a1 + 0x5E8) = v61; /*0x6661b7*/
    }
    while ( v61 ); /*0x6661ba*/
  }
  v95.vtbl = (TESFormVtbl *)2; /*0x6661bc*/
  *v60 = 0; /*0x6661c5*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v95.member.modlist.next, (unsigned int)v95.vtbl); /*0x6661cb*/
  v62 = 0; /*0x6661d0*/
  if ( LOWORD(v95.member.modlist.next) ) /*0x6661d7*/
  {
    do /*0x66624f*/
    {
      TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v96, 4u); /*0x6661e9*/
      v63 = TESForm_LookupByFormID((UInt32)v95.member.modlist.data); /*0x666201*/
      v64 = OblivionDynamicCast( /*0x66620f*/
              v63,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESTopic `RTTI Type Descriptor',
              0);
      if ( v64 ) /*0x666216*/
      {
        if ( *v60 ) /*0x666218*/
        {
          v65 = (_DWORD *)FormHeapAlloc(8u); /*0x66621f*/
          if ( v65 ) /*0x666229*/
          {
            *v65 = *v60; /*0x66622d*/
            v65[1] = 0; /*0x66622f*/
          }
          else
          {
            v65 = 0; /*0x666238*/
          }
          v65[1] = *(_DWORD *)(a1 + 0x5E8); /*0x66623d*/
          *(_DWORD *)(a1 + 0x5E8) = v65; /*0x666240*/
        }
        *v60 = v64; /*0x666243*/
      }
      ++v62; /*0x66624a*/
    }
    while ( v62 < LOWORD(v95.member.refID) ); /*0x66624f*/
  }
  SortTopicListByDisplayName((tListTopic *)(a1 + 0x5E4));// Player modified-form loading reconstructs the saved known-topic list at +0x5E4 by FormID and then calls SortTopicListByDisplayName, confirming the list is persistent player state. /*0x666252*/
  if ( *(_DWORD *)(a1 + 0x5F0) ) /*0x666260*/
  {
    do /*0x66627a*/
    {
      v66 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5F0) + 4); /*0x666269*/
      FormHeapFree(*(_DWORD *)(a1 + 0x5F0)); /*0x66626d*/
      *(_DWORD *)(a1 + 0x5F0) = v66; /*0x666277*/
    }
    while ( v66 ); /*0x66627a*/
  }
  *(_DWORD *)(a1 + 0x5EC) = 0; /*0x666285*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v95.member.refID, 2u); /*0x66628b*/
  v95.member.modlist.next = 0; /*0x666296*/
  if ( LOWORD(v95.member.refID) ) /*0x66629e*/
  {
    do /*0x666365*/
    {
      TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v95.member.modlist, 4u); /*0x6662ad*/
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v95.member.modlist, 1u); /*0x6662bb*/
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v96.member, 1u); /*0x6662c9*/
      v67 = TESForm_LookupByFormID(v95.member.flags); /*0x6662e1*/
      v68 = (char *)OblivionDynamicCast( /*0x6662ea*/
                      v67,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESQuest `RTTI Type Descriptor',
                      0);
      if ( v68 ) /*0x6662f4*/
      {
        v69 = (int *)sub_529BB0(v68, (char)v95.member.modlist.data); /*0x6662fd*/
        if ( v69 ) /*0x666304*/
        {
          v70 = sub_52AC30(v69, v96.member.type); /*0x66630d*/
          v71 = v70; /*0x666312*/
          if ( v70 ) /*0x666316*/
          {
            v72 = (int *)(a1 + 0x5EC); /*0x666318*/
            if ( *(_DWORD *)(a1 + 0x5F0) ) /*0x66631a*/
            {
              do /*0x666323*/
                v72 = (int *)v72[1]; /*0x666320*/
              while ( v72[1] ); /*0x666323*/
            }
            if ( *v72 ) /*0x666329*/
            {
              v73 = (int *)FormHeapAlloc(8u); /*0x666330*/
              if ( v73 ) /*0x66633a*/
              {
                *v73 = v71; /*0x66633c*/
                v73[1] = 0; /*0x66633e*/
                v72[1] = (int)v73; /*0x666345*/
              }
              else
              {
                v72[1] = 0; /*0x66634c*/
              }
            }
            else
            {
              *v72 = v70; /*0x666351*/
            }
          }
        }
      }
      ++v95.member.refID; /*0x666361*/
    }
    while ( (int)v95.member.refID < *(unsigned __int16 *)&v95.member.type ); /*0x666365*/
  }
  EffectSettingCollection_LoadKnownEffects_(); /*0x66636b*/
  v74 = ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0x170))(a1); /*0x66637a*/
  TESNPC_LoadPlayerAppearanceAndRefreshIfChanged((TESNPC *)v74, SHIDWORD(v74), (TESObjectREFR *)a1);// Player_LoadModifiedForm calls TESNPC_LoadPlayerAppearanceAndRefreshIfChanged(0x528D90) on player base NPC. Confirms saved appearance restoration is outside ordinary TESNPC_LoadModifiedForm. Corrects hypothesis that lack of FaceGen reads in generic NPC wrapper implies lost serialization. /*0x66637f*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v95.member, 1u); /*0x66638d*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, &v103, v95.member.type); /*0x66639f*/
  v75 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x6663ae*/
  BSStringT_Set((BSStringT *)(v75 + 0xA4), (const char *)&v103, 0); /*0x6663bd*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x2Cu ) /*0x6663cc*/
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0);// Load and assign the player's saved base-class FormID after resolving it as TESClass. /*0x6663dd*/
    v77 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x8C])); /*0x6663f3*/
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v95.member.flags, 4u); /*0x6663f5*/
    v78 = TESForm_LookupByFormID((UInt32)v95.vtbl); /*0x66640d*/
    v79 = (TESClass *)OblivionDynamicCast( /*0x666416*/
                        v78,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESClass `RTTI Type Descriptor',
                        0);
    if ( v79 ) /*0x666420*/
    {
      ActorBaseForm[0xA].member.modlist.next = (TESForm::ModReferenceList *)v79; /*0x666424*/
      if ( v79 == v77 ) /*0x66642a*/
        TESClass_LoadGame(v79);                 // When the resolved class is the distinguished custom-class form, load its embedded TESClass payload with the authoritative seven-major layout. /*0x66642e*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x45u ) /*0x66643d*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)a1, (unsigned int *)&v95, 4u); /*0x666448*/
    if ( v94 ) /*0x666453*/
    {
      v80 = TESForm_LookupByFormID(v94); /*0x666464*/
      *(_DWORD *)(a1 + 0x654) = OblivionDynamicCast( /*0x666475*/
                                  v80,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESClass `RTTI Type Descriptor',
                                  0);
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x7Eu ) /*0x666485*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x116), 1u); /*0x666492*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, (void *)(a1 + 0x700), 4u); /*0x6664a2*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6664ad*/
  {
    v81 = g_TESSaveLoadGame; /*0x6664ba*/
    v82 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x6664c0*/
    v83 = g_TESSaveLoadGame->bufferCursor; /*0x6664c8*/
    if ( v82 ) /*0x6664cb*/
    {
      v84 = TESForm_LookupByFormID(*v82); /*0x6664d4*/
      v85 = v95.member.flags; /*0x6664de*/
      v86 = v95.member.flags + *(unsigned __int16 *)&v95.member.type; /*0x6664e2*/
      if ( (unsigned int)v83 <= v86 ) /*0x6664e9*/
      {
        if ( (unsigned int)v83 < v86 ) /*0x66652a*/
        {
          v88 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v84->vtbl->GetEditorName)( /*0x666543*/
                                v84,
                                *((unsigned __int8 *)v82 + 9),
                                *(UInt32 *)((char *)v82 + 5));
          PrintError( /*0x666562*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v85 + *(unsigned __int16 *)&v95.member.type - (_DWORD)v83,
            ".\\AI\\PlayerCharacter.cpp",
            0x2709,
            *v82,
            v88,
            v91,
            v93);
        }
      }
      else
      {
        v87 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v84->vtbl->GetEditorName)( /*0x6664fe*/
                              v84,
                              *((unsigned __int8 *)v82 + 9),
                              *(UInt32 *)((char *)v82 + 5));
        PrintError( /*0x66651d*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v83[-*(unsigned __int16 *)&v95.member.type - v85],
          ".\\AI\\PlayerCharacter.cpp",
          0x2709,
          *v82,
          v87,
          v90,
          v92);
      }
    }
    else
    {
      v89 = *(unsigned __int16 *)&v95.member.type + v95.member.flags; /*0x666575*/
      if ( (unsigned int)v83 <= v89 ) /*0x66657a*/
      {
        if ( (unsigned int)v83 < v89 ) /*0x666597*/
          PrintError( /*0x6665b2*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v95.member.flags + *(unsigned __int16 *)&v95.member.type - (_DWORD)v83,
            ".\\AI\\PlayerCharacter.cpp",
            0x2709,
            v81->currentVersion);
      }
      else
      {
        PrintError( /*0x666595*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v83[-*(unsigned __int16 *)&v95.member.type - v95.member.flags],
          ".\\AI\\PlayerCharacter.cpp",
          0x2709,
          v81->currentVersion);
      }
    }
  }
}
