// Loads DialoguePackage resume state. Modern saves (version >=0x20) restore the serialized conversation and exact cursors; no TESTopic selection, AddTopicList, or INFO result script runs in this load phase.
void __thiscall DialoguePackage::LoadGame(DialoguePackageRuntimeView *this)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v4; // eax
  const char *v5; // eax
  int v6; // [esp-8h] [ebp-58h]
  int v7; // [esp-4h] [ebp-54h]
  int destination; // [esp+20h] [ebp-30h] BYREF
  int Dst; // [esp+24h] [ebp-2Ch] BYREF
  TESForm a1; // [esp+28h] [ebp-28h] BYREF

  TESPackage_LoadGame(&this->super); /*0x626259*/
  destination = 0; /*0x626266*/
  bufferCursor = 0; /*0x62626a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &Dst, 4u); /*0x626286*/
    if ( Dst != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x62629a*/
      if ( currentlyLoadingFormHeader )
      {
        v4 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x6262a7*/
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)( /*0x6262c2*/
                             v4,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\DialoguePackage.cpp",
          0x182,
          *currentlyLoadingFormHeader,
          v5,
          v6,
          v7);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\DialoguePackage.cpp",
          0x182,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x626303*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 2u); /*0x62630d*/
  }
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &this->responseTimeRemaining, 4u); /*0x62631a*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Au ) /*0x626329*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &this->waitingForLip, 1u); /*0x626333*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)this, (unsigned int *)&a1, 4u); /*0x626341*/
  DialoguePackage::LoadGame_Continuation(destination, (int)bufferCursor, 0, this); /*0x626352*/
}
