// Compiler/IDA-split continuation of DialoguePackage::LoadGame, entered by fallthrough from 0x626351. Stores saved activeSpeaker/speaker/target identities and startingTopic, then dispatches modern versus legacy conversation restoration.
// positive sp value has been detected, the output may be wrong!
char __usercall DialoguePackage::LoadGame_Continuation@<al>(
        TESFormVtbl *a1@<edx>,
        int a2@<ebx>,
        Data *a3@<ebp>,
        TESForm *a4@<esi>,
        TESForm *a5@<ecx>)
{
  TESForm *v5; // eax
  ConversationView *v6; // eax
  ConversationView *v7; // eax
  SInt16 v8; // ax
  DialogueItemView *refID; // ecx
  bool v10; // zf
  unsigned int v11; // eax
  TESSaveLoadGame_SerializationView *v12; // ecx
  UInt32 *currentlyLoadingFormHeader; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v15; // ecx
  const char *v16; // eax
  const char *v17; // eax
  unsigned int v18; // edx
  int v20; // [esp-58h] [ebp-58h]
  int v21; // [esp-58h] [ebp-58h]
  int v22; // [esp-54h] [ebp-54h]
  int v23; // [esp-54h] [ebp-54h]
  unsigned int *v24; // [esp-40h] [ebp-40h]
  unsigned int v25; // [esp-3Ch] [ebp-3Ch] BYREF
  __int16 v26; // [esp-38h] [ebp-38h] BYREF
  __int16 v27; // [esp-34h] [ebp-34h] BYREF
  unsigned __int16 v28; // [esp-30h] [ebp-30h]
  UInt32 v29; // [esp-1Ch] [ebp-1Ch]
  TESFormVtbl *v30; // [esp-18h] [ebp-18h] BYREF
  TESForm::ModReferenceList *v31; // [esp-14h] [ebp-14h] BYREF
  unsigned int v32[3]; // [esp-10h] [ebp-10h] BYREF
  unsigned int v33; // [esp-4h] [ebp-4h]

  a4[3].vtbl = a1; /*0x626353*/
  TESForm_LoadFormIDFromCurrentSaveGame(a5, v24, v25); /*0x626356*/
  a4[3].member.modlist.next = v31; /*0x626365*/
  TESForm_LoadFormIDFromCurrentSaveGame(a4, v32, 4u); /*0x62636b*/
  a4[4].vtbl = v30; /*0x62637d*/
  TESForm_LoadFormIDFromCurrentSaveGame(a4, (unsigned int *)&v31, 4u); /*0x626380*/
  v5 = TESForm_LookupByFormID(v29); /*0x626396*/
  a4[2].member.modlist.data = (Data *)OblivionDynamicCast( /*0x6263a4*/
                                        v5,
                                        (int)a3,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &TESTopic `RTTI Type Descriptor',
                                        (int)a3);
  if ( g_TESSaveLoadGame->currentVersion >= 0x20u )// Save version >=0x20: read the serialized Conversation size/payload and restore package current-item/current-response indices. This path preserves the originally selected INFOs and responses. /*0x6263b4*/
  {
    TESForm_LoadDataFromCurrentSaveGame(a4, &v25, 2u); /*0x6263c3*/
    if ( (_WORD)v25 != (_WORD)a3 ) /*0x6263cd*/
    {
      v6 = (ConversationView *)FormHeapAlloc(0x10u); /*0x6263d5*/
      v32[0] = (unsigned int)v6; /*0x6263dd*/
      v33 = (unsigned int)a3; /*0x6263e3*/
      if ( v6 == (ConversationView *)a3 ) /*0x6263e7*/
        v7 = 0; /*0x6263f2*/
      else
        v7 = Conversation::InitializeEmpty(v6); /*0x6263eb*/
      v33 = 0xFFFFFFFF; /*0x6263f6*/
      a4[3].member.flags = (TESForm::FormFlags)v7; /*0x6263fe*/
      Conversation::LoadGame(v7);               // Modern path loads the existing serialized DialogueItems/responses and their internal cursors; it does not regenerate a conversation or re-run ImmediateResult. /*0x626401*/
      TESForm_LoadDataFromCurrentSaveGame(a4, &v30, 2u); /*0x62640f*/
      if ( (_WORD)v30 == 0xFFFF ) /*0x62641c*/
        a4[3].member.refID = (UInt32)a3; /*0x62642c*/
      else
        a4[3].member.refID = (UInt32)Conversation::GetDialogueItemByIndex( /*0x626427*/
                                       (ConversationView *)a4[3].member.flags,
                                       (SInt16)v30);
      TESForm_LoadDataFromCurrentSaveGame(a4, &v31, 2u); /*0x626438*/
      v8 = (__int16)v31; /*0x62643d*/
      a4[3].member.modlist.data = (Data *)(__int16)v31; /*0x626444*/
      refID = (DialogueItemView *)a4[3].member.refID; /*0x626447*/
      if ( refID == (DialogueItemView *)a3 || v8 == (SInt16)0xFFFF ) /*0x626452*/
        a4[3].member.modlist.data = a3; /*0x62645f*/
      else
        a4[3].member.modlist.data = (Data *)DialogueItem::GetDialogueResponseByIndex(refID, v8); /*0x62645a*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion < 0x20u )// Legacy save version <0x20: no serialized Conversation object. Load retains only a presence value plus signed 16-bit item/response indices; InitLoadGame later regenerates the chain. /*0x62646c*/
  {
    TESForm_LoadDataFromCurrentSaveGame(a4, v32, 4u); /*0x626477*/
    v10 = v32[0] == (_DWORD)a3; /*0x626480*/
    a4[3].member.flags = v32[0]; /*0x626482*/
    if ( v10 ) /*0x626485*/
    {
      a4[3].member.refID = (UInt32)a3; /*0x6264b5*/
      a4[3].member.modlist.data = a3; /*0x6264b8*/
    }
    else
    {
      TESForm_LoadDataFromCurrentSaveGame(a4, &v26, 2u); /*0x626490*/
      a4[3].member.refID = v26; /*0x6264a3*/
      TESForm_LoadDataFromCurrentSaveGame(a4, &v27, 2u); /*0x6264a6*/
      a4[3].member.modlist.data = (Data *)v27; /*0x6264b0*/
    }
  }
  LOBYTE(v11) = TESSaveLoadGame_UseSaveGameBlocks(); /*0x6264c1*/
  if ( (_BYTE)v11 ) /*0x6264c8*/
  {
    v12 = g_TESSaveLoadGame; /*0x6264ce*/
    currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x6264d4*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x6264dc*/
    if ( currentlyLoadingFormHeader == (UInt32 *)a3 ) /*0x6264df*/
    {
      LOBYTE(v11) = v28; /*0x62659b*/
      v18 = v28 + a2; /*0x6265a0*/
      if ( (unsigned int)bufferCursor <= v18 ) /*0x6265a5*/
      {
        if ( (unsigned int)bufferCursor < v18 ) /*0x6265c2*/
          LOBYTE(v11) = PrintError( /*0x6265dd*/
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          a2 + v28 - (_DWORD)bufferCursor,
                          ".\\AI\\DialoguePackage.cpp",
                          0x1D1,
                          v12->currentVersion);
      }
      else
      {
        LOBYTE(v11) = PrintError( /*0x6265c0*/
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        &bufferCursor[-v28 - a2],
                        ".\\AI\\DialoguePackage.cpp",
                        0x1D1,
                        v12->currentVersion);
      }
    }
    else
    {
      v15 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x6264ed*/
      v11 = a2 + v28; /*0x6264f4*/
      if ( (unsigned int)bufferCursor <= v11 ) /*0x6264fb*/
      {
        if ( (unsigned int)bufferCursor < v11 ) /*0x626549*/
        {
          v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x626560*/
                                v15,
                                *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                                *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
          LOBYTE(v11) = PrintError( /*0x62657f*/
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          a2 + v28 - (_DWORD)bufferCursor,
                          ".\\AI\\DialoguePackage.cpp",
                          0x1D1,
                          *currentlyLoadingFormHeader,
                          v17,
                          v21,
                          v23);
        }
      }
      else
      {
        v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)( /*0x62650e*/
                              v15,
                              *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                              *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        LOBYTE(v11) = PrintError( /*0x62652d*/
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        &bufferCursor[-v28 - a2],
                        ".\\AI\\DialoguePackage.cpp",
                        0x1D1,
                        *currentlyLoadingFormHeader,
                        v16,
                        v20,
                        v22);
      }
    }
  }
  return v11; /*0x626548*/
}
/* Orphan comments:
Read package-level UInt16 current-item index and resolve it against the just-loaded Conversation; FFFF restores null.
Read package-level UInt16 current-response index and resolve it inside currentItem; FFFF or null currentItem restores null.
*/
