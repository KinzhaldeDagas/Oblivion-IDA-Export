// Recreates the serialized DialogueItem list and restores Conversation.currentItemNode from its UInt16 index. It does not call TESTopic::CreateConversation or run INFO results.
void __thiscall Conversation::LoadGame(ConversationView *this)
{
  UInt32 *v2; // esi
  TESForm *v3; // eax
  const char *v4; // eax
  TESSaveLoad *v5; // ecx
  DialogueItemView *v6; // eax
  DialogueItemView *v7; // edi
  DialogueItemNode **p_nextItemNode; // eax
  ConversationView *v9; // esi
  bool v10; // zf
  DialogueItemNode *v11; // eax
  DialogueItemView *DialogueItemByIndex; // eax
  DialogueItemNode *v13; // ecx
  DialogueItemNode *next; // edx
  TESSaveLoad *v15; // ecx
  UInt32 *v16; // edi
  UInt32 v17; // esi
  TESForm *v18; // eax
  UInt32 v19; // ebx
  TESForm *v20; // ecx
  UInt32 v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  UInt32 v24; // edx
  int v25; // [esp-8h] [ebp-44h]
  int v26; // [esp-8h] [ebp-44h]
  int v27; // [esp-8h] [ebp-44h]
  size_t v28; // [esp-4h] [ebp-40h]
  size_t v29; // [esp-4h] [ebp-40h]
  int v30; // [esp-4h] [ebp-40h]
  size_t v31; // [esp-4h] [ebp-40h]
  int v32; // [esp-4h] [ebp-40h]
  int v33; // [esp-4h] [ebp-40h]
  unsigned __int16 v34; // [esp+14h] [ebp-28h] BYREF
  int v35; // [esp+18h] [ebp-24h] BYREF
  UInt32 v36; // [esp+1Ch] [ebp-20h]
  unsigned int i; // [esp+20h] [ebp-1Ch]
  int Dst; // [esp+24h] [ebp-18h] BYREF
  SInt16 index[2]; // [esp+28h] [ebp-14h] BYREF
  DialogueItemView *v40; // [esp+2Ch] [ebp-10h]
  unsigned int v41; // [esp+38h] [ebp-4h]

  v35 = 0; /*0x6b7871*/
  v36 = 0; /*0x6b7875*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v28) = 4; /*0x6b788c*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v28); /*0x6b7893*/
    if ( Dst != 0x4B4F4C42 )
    {
      v2 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x6b78a7*/
      if ( v2 )
      {
        v3 = TESForm_LookupByFormID(*v2); /*0x6b78b4*/
        v4 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v3->vtbl->GetEditorName)( /*0x6b78cf*/
                             v3,
                             *((unsigned __int8 *)v2 + 9),
                             *(UInt32 *)((char *)v2 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\Dialogue\\Conversation.cpp",
          0xE5,
          *v2,
          v4,
          v25,
          v30);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Dialogue\\Conversation.cpp",
          0xE5,
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v5 = g_TESSaveLoadGame; /*0x6b790a*/
    LODWORD(v29) = 2; /*0x6b7913*/
    v36 = g_TESSaveLoadGame->unk000[5]; /*0x6b791a*/
    SaveLoad_LoadData((int)v5, &v35, v29); /*0x6b791e*/
  }
  LODWORD(v28) = 2; /*0x6b7929*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &v34, v28);// EngineFix analysis 2026-05-07: Dialogue Conversation outer saved count; each entry calls sub_6B7E50, which consumes at least 18 bytes even with zero nested choices. Candidate clamp to remaining / 18 after verifying caller constraints. /*0x6b7930*/
  for ( i = 0; i < v34; ++i ) /*0x6b793e*/
  {
    v6 = (DialogueItemView *)FormHeapAlloc(0x1Cu); /*0x6b7946*/
    v40 = v6; /*0x6b794e*/
    v41 = 0;                                    // EngineFix implementation 2026-05-07: Dialogue Conversation outer entry allocation-failure hook. If the 0x1C object allocation fails, discard one full serialized conversation entry (nested choices, selected index, four FormIDs), restore SEH state, and resume loop tail. /*0x6b7954*/
    if ( v6 ) /*0x6b7958*/
      v7 = DialogueItem::InitializeEmpty(v6); /*0x6b7961*/
    else
      v7 = 0; /*0x6b7965*/
    v41 = 0xFFFFFFFF; /*0x6b7969*/
    DialogueItem::LoadGame(v7); /*0x6b7971*/
    if ( v7 ) /*0x6b7978*/
    {
      p_nextItemNode = &this->nextItemNode; /*0x6b797d*/
      v9 = this; /*0x6b7980*/
      if ( this->nextItemNode ) /*0x6b797a*/
      {
        do /*0x6b798c*/
        {
          v9 = (ConversationView *)*p_nextItemNode; /*0x6b7984*/
          v10 = (*p_nextItemNode)->next == 0; /*0x6b7986*/
          p_nextItemNode = &(*p_nextItemNode)->next; /*0x6b7989*/
        }
        while ( !v10 ); /*0x6b798c*/
      }
      if ( v9->firstItem ) /*0x6b798e*/
      {
        v11 = (DialogueItemNode *)FormHeapAlloc(8u); /*0x6b7994*/
        if ( v11 ) /*0x6b799e*/
        {
          v11->item = v7; /*0x6b79a0*/
          v11->next = 0; /*0x6b79a2*/
          v9->nextItemNode = v11; /*0x6b79a5*/
        }
        else
        {
          v9->nextItemNode = 0; /*0x6b79ac*/
        }
      }
      else
      {
        v9->firstItem = v7; /*0x6b79b1*/
      }
    }
  }
  LODWORD(v31) = 2; /*0x6b79d1*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, index, v31); /*0x6b79d8*/
  if ( index[0] == (SInt16)0xFFFF ) /*0x6b79e5*/
  {
    this->currentItemNode = 0; /*0x6b7a11*/
  }
  else
  {
    DialogueItemByIndex = Conversation::GetDialogueItemByIndex(this, index[0]); /*0x6b79ea*/
    v13 = (DialogueItemNode *)this; /*0x6b79f1*/
    if ( this ) /*0x6b79f3*/
    {
      do /*0x6b79f5*/
      {
        next = v13->next; /*0x6b79f5*/
        if ( !next && !v13->item ) /*0x6b79fc*/
          break; /*0x6b79fc*/
        if ( DialogueItemByIndex == v13->item ) /*0x6b7a02*/
        {
          this->currentItemNode = v13; /*0x6b7a0c*/
          break; /*0x6b7a0f*/
        }
        v13 = v13->next; /*0x6b7a04*/
      }
      while ( next ); /*0x6b79f5*/
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b7a1a*/
  {
    v15 = g_TESSaveLoadGame; /*0x6b7a27*/
    v16 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x6b7a2d*/
    v17 = g_TESSaveLoadGame->unk000[5]; /*0x6b7a35*/
    if ( v16 ) /*0x6b7a38*/
    {
      v18 = TESForm_LookupByFormID(*v16); /*0x6b7a41*/
      v19 = v36; /*0x6b7a4b*/
      v20 = v18; /*0x6b7a4f*/
      v21 = (unsigned __int16)v35 + v36; /*0x6b7a51*/
      if ( v17 <= v21 ) /*0x6b7a59*/
      {
        if ( v17 < v21 ) /*0x6b7aa7*/
        {
          v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v20->vtbl->GetEditorName)( /*0x6b7abe*/
                                v20,
                                *((unsigned __int8 *)v16 + 9),
                                *(UInt32 *)((char *)v16 + 5));
          PrintError( /*0x6b7add*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v19 + (unsigned __int16)v35 - v17,
            ".\\Dialogue\\Conversation.cpp",
            0xFB,
            *v16,
            v23,
            v27,
            v33);
        }
      }
      else
      {
        v22 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v20->vtbl->GetEditorName)( /*0x6b7a6c*/
                              v20,
                              *((unsigned __int8 *)v16 + 9),
                              *(UInt32 *)((char *)v16 + 5));
        PrintError( /*0x6b7a8b*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v17 - (unsigned __int16)v35 - v19,
          ".\\Dialogue\\Conversation.cpp",
          0xFB,
          *v16,
          v22,
          v26,
          v32);
      }
    }
    else
    {
      v24 = (unsigned __int16)v35 + v36; /*0x6b7b02*/
      if ( v17 <= v24 ) /*0x6b7b07*/
      {
        if ( v17 < v24 ) /*0x6b7b24*/
          PrintError( /*0x6b7b3f*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v36 + (unsigned __int16)v35 - v17,
            ".\\Dialogue\\Conversation.cpp",
            0xFB,
            LOBYTE(v15[1].createdObjectList.next));
      }
      else
      {
        PrintError( /*0x6b7b22*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v17 - (unsigned __int16)v35 - v36,
          ".\\Dialogue\\Conversation.cpp",
          0xFB,
          LOBYTE(v15[1].createdObjectList.next));
      }
    }
  }
}
