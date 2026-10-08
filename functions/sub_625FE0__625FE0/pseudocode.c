// Serializes exact random-conversation resume state. The generated Conversation is saved rather than regenerated; package-level current item/response indices complement the list-internal cursors. Save does not execute INFO results.
void __thiscall DialoguePackage::SaveGame(DialoguePackageRuntimeView *this)
{
  TESSaveLoadGame_SerializationView *v2; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v4; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  Actor *activeSpeaker; // eax
  Actor *speaker; // eax
  Actor *target; // eax
  TESTopic *startingTopic; // eax
  ConversationView *conversation; // ecx
  DialogueItemView *currentItem; // eax
  DialogueItemView *v12; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  unsigned __int8 *v17; // edi
  unsigned __int8 *v18; // esi
  int v19; // [esp-Ch] [ebp-40h]
  int v20; // [esp-8h] [ebp-3Ch]
  const char *v21; // [esp-4h] [ebp-38h]
  int SaveSize; // [esp+10h] [ebp-24h] BYREF
  unsigned int refID; // [esp+14h] [ebp-20h] BYREF
  unsigned int v24; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v25; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v26; // [esp+20h] [ebp-14h] BYREF
  unsigned int DialogueItemIndex; // [esp+24h] [ebp-10h] BYREF
  int Src; // [esp+28h] [ebp-Ch] BYREF
  unsigned __int8 *v29; // [esp+2Ch] [ebp-8h]
  int source; // [esp+30h] [ebp-4h] BYREF

  TESPackage_SaveGame(&this->super); /*0x625fe9*/
  v2 = g_TESSaveLoadGame; /*0x625fee*/
  source = 0; /*0x625ff6*/
  bufferCursor = v2->bufferCursor; /*0x625ffa*/
  v29 = 0; /*0x625ffd*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x626001*/
  {
    v4 = g_TESSaveLoadGame; /*0x62600a*/
    Src = 0x4B4F4C42; /*0x626017*/
    SaveLoad_SaveData(v4, &Src, 4u); /*0x62601f*/
    v5 = g_TESSaveLoadGame; /*0x626024*/
    v29 = g_TESSaveLoadGame->bufferCursor; /*0x626034*/
    SaveLoad_SaveData(v5, &source, 2u); /*0x626038*/
  }
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->responseTimeRemaining, 4u);// Persist responseTimeRemaining so a loaded in-progress line retains its remaining package delay. /*0x626045*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Au ) /*0x626054*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this->waitingForLip, 1u);// For save version >=0x6A, persist waitingForLip. A restored true value makes DialoguePackage::Speak retain the current response rather than advancing it while asynchronous LIP loading completes. /*0x62605e*/
  activeSpeaker = this->activeSpeaker; /*0x626063*/
  refID = 0; /*0x626068*/
  if ( activeSpeaker ) /*0x62606c*/
    refID = activeSpeaker->members.super.super.super.refID; /*0x626071*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &refID, 4u); /*0x62607e*/
  speaker = this->speaker; /*0x626083*/
  v24 = 0; /*0x626088*/
  if ( speaker ) /*0x62608c*/
    v24 = speaker->members.super.super.super.refID; /*0x626091*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &v24, 4u); /*0x62609e*/
  target = this->target; /*0x6260a3*/
  v25 = 0; /*0x6260a8*/
  if ( target ) /*0x6260ac*/
    v25 = target->members.super.super.super.refID; /*0x6260b1*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &v25, 4u); /*0x6260be*/
  startingTopic = this->startingTopic; /*0x6260c3*/
  v26 = 0; /*0x6260c8*/
  if ( startingTopic ) /*0x6260cc*/
    v26 = startingTopic->super.refID; /*0x6260d1*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &v26, 4u); /*0x6260de*/
  conversation = this->conversation; /*0x6260e3*/
  SaveSize = 0; /*0x6260e8*/
  if ( conversation ) /*0x6260ec*/
    SaveSize = Conversation::GetSaveSize(conversation);// Compute serialized size of the already-generated Conversation; zero means no conversation payload. /*0x6260f6*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &SaveSize, 2u); /*0x626107*/
  if ( (_WORD)SaveSize ) /*0x626111*/
  {
    Conversation::SaveGame(this->conversation); // Persist the complete generated item/response chain and its internal cursors. Modern load therefore does not call INFO selection again. /*0x626116*/
    currentItem = this->currentItem; /*0x62611b*/
    DialogueItemIndex = 0xFFFFFFFF; /*0x626123*/
    if ( currentItem ) /*0x626127*/
      DialogueItemIndex = (unsigned __int16)Conversation::GetDialogueItemIndex(this->conversation, currentItem);// Persist DialoguePackage.currentItem as a UInt16 index into the serialized Conversation; FFFF means null. /*0x626135*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &DialogueItemIndex, 2u); /*0x626142*/
    v12 = this->currentItem; /*0x626147*/
    Src = 0xFFFFFFFF; /*0x62614c*/
    if ( v12 ) /*0x626150*/
    {
      if ( this->currentResponse ) /*0x626152*/
        Src = (unsigned __int16)DialogueItem::GetDialogueResponseIndex(v12, this->currentResponse);// Persist DialoguePackage.currentResponse as a UInt16 index within currentItem; FFFF means null. /*0x626162*/
    }
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &Src, 2u); /*0x62616f*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x626181*/
    v14 = g_TESSaveLoadGame->bufferCursor; /*0x626189*/
    if ( currentlySavingFormHeader )
    {
      v15 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x626191*/
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)( /*0x6261b1*/
                            v15,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x17A,
                            ".\\AI\\DialoguePackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14 - bufferCursor,
        *currentlySavingFormHeader,
        v16,
        v19,
        v20,
        v21);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v14 - bufferCursor,
        0x17A,
        ".\\AI\\DialoguePackage.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6261e9*/
  {
    v17 = v29; /*0x6261f8*/
    v18 = g_TESSaveLoadGame->bufferCursor; /*0x6261fc*/
    if ( v18 > v29 + 0xFFFF ) /*0x626207*/
      PrintError( /*0x626218*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\DialoguePackage.cpp",
        0x17A);
    *(_WORD *)v17 = (_WORD)v18 - (_WORD)v17; /*0x626222*/
  }
}
