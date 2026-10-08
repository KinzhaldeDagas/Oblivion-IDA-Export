void __userpurge Actor_LoadModifiedForm(
        TESObjectREFR *ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        unsigned int changeMask,
        unsigned int currentFlags)
{
  TESForm *v7; // eax
  BSExtraDataVtbl *v8; // edi
  BSExtraDataVtbl *v9; // ebx
  TESObjectREFRVtbl *vtbl; // ecx
  int v11; // eax
  int v12; // eax
  TESForm *v13; // ebx
  TESForm *v14; // edi
  int v15; // edi
  TESObjectREFRVtbl *v16; // ebp
  char data; // bl
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v19; // eax
  const char *v20; // eax
  TESSaveLoadGame_SerializationView *v21; // ecx
  char refID; // al
  TESForm *v23; // eax
  int v24; // ebp
  _DWORD *v25; // edi
  _DWORD *v26; // eax
  bool v27; // cf
  TESForm::ModReferenceList *next; // ebp
  TESForm::ModReferenceList *v29; // eax
  bool v30; // zf
  TESObjectREFRVtbl *v31; // ecx
  TESSaveLoadGame_SerializationView *v32; // ecx
  int v33; // ebx
  void **v34; // edi
  int v35; // eax
  TESForm *v36; // eax
  TESSaveLoadGame_SerializationView *v37; // ecx
  UInt32 *v38; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v40; // ecx
  unsigned int v41; // eax
  const char *v42; // eax
  const char *v43; // eax
  unsigned int v44; // edi
  int v45; // [esp-14h] [ebp-68h]
  int v46; // [esp-14h] [ebp-68h]
  int v47; // [esp-10h] [ebp-64h]
  int v48; // [esp-10h] [ebp-64h]
  unsigned __int16 v49; // [esp+8h] [ebp-4Ch]
  int v50; // [esp+Ch] [ebp-48h]
  int v51; // [esp+1Ch] [ebp-38h]
  TESForm *Dst; // [esp+24h] [ebp-30h] BYREF
  UInt32 *p_refID; // [esp+28h] [ebp-2Ch]
  int a1; // [esp+2Ch] [ebp-28h] BYREF
  int v55; // [esp+30h] [ebp-24h]
  TESForm v56; // [esp+34h] [ebp-20h] BYREF
  unsigned int v57; // [esp+4Ch] [ebp-8h] BYREF
  int destination; // [esp+50h] [ebp-4h] BYREF

  if ( (currentFlags & 0x28000000) != 0 && (changeMask & 0x28000000) == 0 ) /*0x602311*/
  {
    v7 = ecx0->vtbl->GetBaseForm(ecx0); /*0x60231f*/
    v8 = 0; /*0x602325*/
    v9 = 0; /*0x602327*/
    if ( v7->member.type == kFormType_NPC ) /*0x60232c*/
    {
      v8 = (BSExtraDataVtbl *)v7; /*0x602337*/
    }
    else if ( v7->member.type == kFormType_Creature ) /*0x602331*/
    {
      v9 = (BSExtraDataVtbl *)v7; /*0x602333*/
    }
    vtbl = ecx0[1].vtbl; /*0x602339*/
    LOBYTE(v56.member.refID) = 1; /*0x60233e*/
    LOBYTE(v56.member.modlist.data) = 1; /*0x602343*/
    if ( vtbl ) /*0x602348*/
    {
      v11 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x61))(vtbl); /*0x602352*/
      if ( v11 ) /*0x602356*/
      {
        v12 = *(_DWORD *)(v11 + 0x1C); /*0x602358*/
        LOBYTE(v56.member.refID) = (v12 & 0x100000) == 0; /*0x602365*/
        LOBYTE(v56.member.modlist.data) = (v12 & 0x200000) == 0; /*0x602371*/
      }
    }
    if ( v8 ) /*0x602378*/
    {
      sub_5227A0(v8, a2, a3, a4, ecx0, v56.member.refID, (char)v56.member.modlist.data, 0, 1); /*0x60238b*/
    }
    else if ( v9 ) /*0x602394*/
    {
      sub_51E240(v9, (int)v9, a2, a3, a4, ecx0, v56.member.refID, (char)v56.member.modlist.data, 1); /*0x6023a5*/
    }
  }
  v57 = changeMask & 0x40; /*0x6023af*/
  if ( (changeMask & 0x40) == 0 && (currentFlags & 0x40) != 0 ) /*0x6023ba*/
  {
    v13 = 0; /*0x6023c6*/
    v14 = ecx0->vtbl->GetBaseForm(ecx0); /*0x6023ca*/
    if ( v14 ) /*0x6023ce*/
    {
      if ( ecx0->vtbl->IsActor(ecx0) ) /*0x6023da*/
        v13 = v14; /*0x6023e0*/
    }
    v30 = (v13->member.flags & 0x80000) == 0; /*0x6023e8*/
    a1 = 0; /*0x6023ea*/
    if ( v30 ) /*0x6023ee*/
    {
      Actor_HandleDeathState((Actor *)ecx0, a1); /*0x6023f0*/
      LOBYTE(ecx0[2].member.super.modlist.data) = 0; /*0x6023f7*/
      sub_5F87F0(ecx0); /*0x6023fe*/
    }
    else
    {
      sub_4DE100(ecx0, (BSExtraDataVtbl *)a1); /*0x602405*/
    }
  }
  v15 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x602417*/
  v16 = ecx0[2].vtbl; /*0x602422*/
  data = (char)ecx0[2].member.super.modlist.data; /*0x602428*/
  a1 = currentFlags; /*0x60242e*/
  p_refID = (UInt32 *)changeMask; /*0x60242f*/
  *(_BYTE *)(v15 + 0x184) = 1; /*0x602432*/
  MobileObject_LoadModifiedForm((MobileObject *)ecx0, (unsigned int)p_refID, a1); /*0x602439*/
  *(_BYTE *)(v15 + 0x184) = 0; /*0x602446*/
  v56.member.modlist.data = 0; /*0x60244d*/
  v56.member.modlist.next = 0; /*0x602451*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 4u); /*0x60246f*/
    if ( destination != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x602483*/
      if ( currentlyLoadingFormHeader )
      {
        v19 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x602490*/
        v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v19->vtbl->GetEditorName)( /*0x6024ab*/
                              v19,
                              *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                              *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\Actor.cpp",
          0x4403,
          *currentlyLoadingFormHeader,
          v20,
          p_refID,
          a1);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\Actor.cpp",
          0x4403,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v21 = g_TESSaveLoadGame; /*0x6024e6*/
    v56.member.modlist.next = (TESForm::ModReferenceList *)g_TESSaveLoadGame->bufferCursor; /*0x6024f6*/
    SaveLoad_LoadData(v21, &v56.member.modlist, 2u); /*0x6024fa*/
  }
  a1 = 4; /*0x6024ff*/
  p_refID = &ecx0[2].member.super.refID; /*0x602507*/
  ecx0[2].vtbl = v16; /*0x60250a*/
  LOBYTE(ecx0[2].member.super.modlist.data) = data; /*0x602510*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, p_refID, a1); /*0x602516*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[2].member.childCell, 1u); /*0x602526*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)&ecx0[2].member.childCell.GetChildCell + 1, 1u); /*0x602536*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x25u ) /*0x602544*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].member.rot, 1u); /*0x60254e*/
  if ( v57 ) /*0x602558*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &v56.member.refID, 1u); /*0x602563*/
    refID = v56.member.refID; /*0x602568*/
    if ( ecx0[2].vtbl != (TESObjectREFRVtbl *)LOBYTE(v56.member.refID) ) /*0x602575*/
    {
      ecx0[2].vtbl = (TESObjectREFRVtbl *)LOBYTE(v56.member.refID); /*0x602579*/
      if ( refID != 2 /*0x602596*/
        && refID != 1
        && refID != 6
        && (v16 == (TESObjectREFRVtbl *)2 || v16 == (TESObjectREFRVtbl *)1 || v16 == (TESObjectREFRVtbl *)6) )
      {
        sub_5F87F0(ecx0); /*0x60259a*/
        LOBYTE(ecx0[2].member.super.modlist.data) = 0; /*0x60259f*/
      }
    }
  }
  if ( ecx0->vtbl->GetBaseForm(ecx0)->member.type == kFormType_Creature ) /*0x6025b6*/
  {
    v23 = ecx0->vtbl->GetBaseForm(ecx0); /*0x6025c2*/
    if ( v23 ) /*0x6025c6*/
    {
      if ( LOBYTE(v23[0xA].member.modlist.next) == 4 ) /*0x6025cf*/
      {
        v57 = 0; /*0x6025da*/
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &v56.member.refID, 1u); /*0x6025e2*/
        if ( LOBYTE(v56.member.refID) ) /*0x6025ec*/
          TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, &v57, 4u); /*0x6025f7*/
        LODWORD(ecx0[2].member.rot.y) = v56.member.modlist.data; /*0x602600*/
      }
    }
  }
  if ( (destination & 0x8000) != 0 ) /*0x60260e*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &v56.member, 2u); /*0x602621*/
    v24 = 0;                                    // MEF v51 bridge-stack audit: direct JMP preserves entry ESP; first paired-loop count is word [ESP+10h]. Bridge takes its address before five cdecl pushes and add esp,14h restores the original stack. /*0x602626*/
    if ( *(_WORD *)&v56.member.type ) /*0x60262d*/
    {
      do /*0x6026a0*/
      {
        v25 = (_DWORD *)FormHeapAlloc(8u); /*0x602644*/
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, (unsigned int *)&v56.member.modlist, 4u); /*0x602646*/
        v25[1] = v56.member.flags; /*0x602654*/
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, v25, 4u); /*0x602657*/
        if ( *(_DWORD *)ecx0[1].member.baseExtraList.members.m_presenceBitfield ) /*0x60265c*/
        {
          v26 = (_DWORD *)FormHeapAlloc(8u); /*0x602666*/
          if ( v26 ) /*0x602670*/
          {
            *v26 = *(_DWORD *)ecx0[1].member.baseExtraList.members.m_presenceBitfield; /*0x602678*/
            v26[1] = 0; /*0x60267a*/
          }
          else
          {
            v26 = 0; /*0x60267f*/
          }
          v26[1] = *(_DWORD *)&ecx0[1].member.baseExtraList.members.m_presenceBitfield[4]; /*0x602687*/
          *(_DWORD *)&ecx0[1].member.baseExtraList.members.m_presenceBitfield[4] = v26; /*0x60268a*/
        }
        v27 = ++v24 < (unsigned int)(unsigned __int16)v55; /*0x602698*/
        *(_DWORD *)ecx0[1].member.baseExtraList.members.m_presenceBitfield = v25; /*0x60269a*/
      }
      while ( v27 ); /*0x6026a0*/
    }
  }
  next = v56.member.modlist.next; /*0x6026a2*/
  if ( ((int)v56.member.modlist.next & 0x20000000) != 0 ) /*0x6026ac*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &v56.member.modlist.next, 4u); /*0x6026b7*/
    v29 = (TESForm::ModReferenceList *)sub_453A00(g_TESSaveLoadGame, (int)ecx0); /*0x6026c3*/
    v30 = v56.member.modlist.next == v29; /*0x6026c8*/
  }
  else
  {
    v30 = (v57 & 0x20000000) == 0; /*0x6026ce*/
  }
  if ( !v30 ) /*0x6026d6*/
  {
    v31 = ecx0[1].vtbl; /*0x6026d8*/
    if ( v31 ) /*0x6026dd*/
    {
      v51 = 1; /*0x6026e7*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *))v31->super.super.InitializeComponent + 0xC7))(v31); /*0x6026e9*/
    }
  }
  v32 = g_TESSaveLoadGame; /*0x6026eb*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x14u ) /*0x6026f5*/
  {
    SaveLoad_LoadData(v32, &v56.member.modlist, 2u); /*0x602702*/
    v33 = 0;                                    // MEF v51 bridge-stack audit: direct JMP preserves entry ESP; second paired-loop count is word [ESP+28h]. Bridge takes its address before five cdecl pushes and add esp,14h restores the original stack. /*0x602707*/
    if ( LOWORD(v56.member.modlist.data) ) /*0x60270e*/
    {
      do /*0x602786*/
      {
        v34 = (void **)FormHeapAlloc(8u); /*0x60271a*/
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, (unsigned int *)&v56.member.modlist.next, 4u); /*0x602725*/
        *v34 = (void *)v56.member.refID; /*0x602733*/
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, v34 + 1, 4u); /*0x602738*/
        if ( ecx0[1].member.baseExtraList.vtbl ) /*0x60273d*/
        {
          v35 = FormHeapAlloc(8u); /*0x602748*/
          if ( v35 ) /*0x602752*/
          {
            *(_DWORD *)v35 = ecx0[1].member.baseExtraList.vtbl; /*0x60275a*/
            *(_DWORD *)(v35 + 4) = 0; /*0x60275c*/
          }
          else
          {
            v35 = 0; /*0x602765*/
          }
          *(_DWORD *)(v35 + 4) = ecx0[1].member.baseExtraList.members.m_data; /*0x60276d*/
          ecx0[1].member.baseExtraList.members.m_data = (BSExtraData *)v35; /*0x602770*/
        }
        v27 = ++v33 < (unsigned int)LOWORD(v56.member.flags); /*0x60277e*/
        ecx0[1].member.baseExtraList.vtbl = v34; /*0x602780*/
      }
      while ( v27 ); /*0x602786*/
    }
    v32 = g_TESSaveLoadGame; /*0x602788*/
  }
  if ( v32->currentVersion >= 0x32u ) /*0x602792*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, (unsigned int *)&v56.member.flags, 4u); /*0x60279d*/
    LODWORD(ecx0[1].member.rot.y) = v56.vtbl; /*0x6027a6*/
    v32 = g_TESSaveLoadGame; /*0x6027a9*/
  }
  if ( v32->currentVersion >= 0x3Cu ) /*0x6027b3*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, (unsigned int *)&v56, 4u); /*0x6027be*/
    if ( a1 ) /*0x6027c9*/
    {
      v36 = TESForm_LookupByFormID(a1); /*0x6027da*/
      LODWORD(ecx0[2].member.rot.x) = OblivionDynamicCast( /*0x6027eb*/
                                        v36,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &TESActorBase `RTTI Type Descriptor',
                                        0);
    }
    else
    {
      ecx0[2].member.rot.x = 0.0; /*0x6027f3*/
    }
    v32 = g_TESSaveLoadGame; /*0x6027fd*/
  }
  if ( ecx0 == (TESObjectREFR *)reference ) /*0x602809*/
    unk_B3B77D = 0; /*0x60280b*/
  if ( v32->currentVersion >= 0x44u && ((unsigned int)next & 0x200000) != 0 ) /*0x60281e*/
  {
    AVCollection_Load((AVCollection *)&ecx0[1].member.pos[1]); /*0x602826*/
    v32 = g_TESSaveLoadGame; /*0x60282b*/
  }
  if ( v32->currentVersion >= 0x45u ) /*0x602835*/
  {
    SaveLoad_LoadData(v32, &ecx0[1].member.rot.z, 1u); /*0x602840*/
    SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&a1, 4u); /*0x602852*/
    ecx0[2].member.baseForm = Dst; /*0x60285b*/
    v32 = g_TESSaveLoadGame; /*0x602861*/
  }
  if ( v32->currentVersion >= 0x61u ) /*0x60286b*/
  {
    SaveLoad_LoadFormID(v32, (unsigned int *)&Dst, 4u); /*0x602874*/
    LODWORD(ecx0[2].member.pos[2]) = v51; /*0x60287d*/
    v32 = g_TESSaveLoadGame; /*0x602883*/
  }
  if ( v32->currentVersion >= 0x65u ) /*0x60288d*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0[1].member.pos, 4u); /*0x60289a*/
    v32 = g_TESSaveLoadGame; /*0x60289f*/
  }
  if ( v32->currentVersion >= 0x71u ) /*0x6028a9*/
  {
    TESForm_LoadDataFromCurrentSaveGame( /*0x6028b6*/
      (TESForm *)ecx0,
      &ecx0[1].member.baseExtraList.members.m_presenceBitfield[8],
      4u);
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, (char *)&ecx0[2].member.childCell.GetChildCell + 2, 1u); /*0x6028c6*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[2].member.rot.z, 1u); /*0x6028d6*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0[2].member.pos, 4u); /*0x6028e6*/
    TESForm_LoadDataFromCurrentSaveGame( /*0x6028f6*/
      (TESForm *)ecx0,
      &ecx0[2].member.baseExtraList.members.m_presenceBitfield[4],
      4u);
    v32 = g_TESSaveLoadGame; /*0x6028fb*/
  }
  if ( v32->currentVersion >= 0x73u ) /*0x602905*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, ecx0[2].member.baseExtraList.members.m_presenceBitfield, 1u); /*0x602912*/
    v32 = g_TESSaveLoadGame; /*0x602917*/
  }
  if ( v32->currentVersion >= 0x7Bu ) /*0x602921*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[2].member.super.modlist, 1u); /*0x60292e*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x602939*/
  {
    v37 = g_TESSaveLoadGame; /*0x602946*/
    v38 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x60294c*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x602954*/
    if ( v38 ) /*0x602957*/
    {
      v40 = TESForm_LookupByFormID(*v38); /*0x602969*/
      v41 = v50 + v49; /*0x602970*/
      if ( (unsigned int)bufferCursor <= v41 ) /*0x602977*/
      {
        if ( (unsigned int)bufferCursor < v41 ) /*0x6029bb*/
        {
          v43 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v40->vtbl->GetEditorName)( /*0x6029d2*/
                                v40,
                                *((unsigned __int8 *)v38 + 9),
                                *(UInt32 *)((char *)v38 + 5));
          PrintError( /*0x6029f1*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v50 + v49 - (_DWORD)bufferCursor,
            ".\\AI\\Actor.cpp",
            0x44B8,
            *v38,
            v43,
            v46,
            v48);
        }
      }
      else
      {
        v42 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v40->vtbl->GetEditorName)( /*0x60298a*/
                              v40,
                              *((unsigned __int8 *)v38 + 9),
                              *(UInt32 *)((char *)v38 + 5));
        PrintError( /*0x6029a9*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &bufferCursor[-v49 - v50],
          ".\\AI\\Actor.cpp",
          0x44B8,
          *v38,
          v42,
          v45,
          v47);
      }
    }
    else
    {
      v44 = v49 + v50; /*0x602a0c*/
      if ( (unsigned int)bufferCursor <= v44 ) /*0x602a11*/
      {
        if ( (unsigned int)bufferCursor < v44 ) /*0x602a3e*/
          PrintError( /*0x602a59*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v50 + v49 - (_DWORD)bufferCursor,
            ".\\AI\\Actor.cpp",
            0x44B8,
            v37->currentVersion);
      }
      else
      {
        PrintError( /*0x602a2c*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &bufferCursor[-v49 - v50],
          ".\\AI\\Actor.cpp",
          0x44B8,
          v37->currentVersion);
      }
    }
  }
}
