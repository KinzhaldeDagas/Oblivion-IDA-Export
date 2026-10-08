// Verified 2026-10-03: parent load dispatcher, component order and optional payloads correspond to size/save. Typed actorValueModifiers at self+0xD0 and fixed buffer helper prototypes remove bogus register/stack parameters. Probable: second stack argument is currentFlags, based on Fallout named LoadGame(aiFlags,aiCurrentFlags) and matching forwarding chain; its full higher-level policy is not established here.
void __thiscall TESActorBase_LoadModified(
        TESActorBase *self,
        ActorBaseSaveChangeMask changeMask,
        unsigned int currentFlags)
{
  unsigned __int8 *bufferCursor; // ebp
  UInt32 *currentlyLoadingFormHeader; // edi
  TESForm *v6; // eax
  const char *v7; // eax
  TESSaveLoadGame_SerializationView *v8; // ecx
  UInt32 *v9; // edi
  unsigned __int8 *v10; // esi
  TESForm *v11; // ecx
  unsigned __int8 *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  unsigned __int8 *v15; // edx
  int v16; // [esp-8h] [ebp-12Ch]
  int v17; // [esp-8h] [ebp-12Ch]
  int v18; // [esp-8h] [ebp-12Ch]
  int v19; // [esp-4h] [ebp-128h]
  int v20; // [esp-4h] [ebp-128h]
  int v21; // [esp-4h] [ebp-128h]
  _BYTE a1[273]; // [esp+Fh] [ebp-115h] BYREF

  bufferCursor = 0; /*0x51a70e*/
  *(_DWORD *)&a1[1] = 0; /*0x51a711*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1[5], 4u); /*0x51a72f*/
    if ( *(_DWORD *)&a1[5] != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x51a743*/
      if ( currentlyLoadingFormHeader )
      {
        v6 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x51a750*/
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)( /*0x51a76b*/
                             v6,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESActorBase.cpp",
          0x23A,
          *currentlyLoadingFormHeader,
          v7,
          v16,
          v19);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESActorBase.cpp",
          0x23A,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x51a7ac*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1[1], 2u); /*0x51a7b6*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Du ) /*0x51a7d4*/
    TESForm_LoadModifiedForm((TESForm *)self, changeMask, currentFlags); /*0x51a7da*/
  TESAttributes_LoadModified(&self->super.attributes, changeMask, currentFlags); /*0x51a7e7*/
  TESActorBaseData_LoadModifiedComponent(&self->super.actorBaseData, changeMask, currentFlags); /*0x51a7f1*/
  TESSpellList_LoadModifiedComponent(&self->super.spellList, changeMask, currentFlags); /*0x51a7fb*/
  TESAIForm_LoadModifiedComponent((int)&self->super.aiForm, changeMask, currentFlags); /*0x51a805*/
  if ( (changeMask & 4) != 0 ) /*0x51a80d*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &a1[9], 4u); /*0x51a818*/
    self->super.health.health = *(_DWORD *)&a1[9]; /*0x51a821*/
  }
  if ( (changeMask & 0x10000000) != 0 ) /*0x51a82d*/
    AVCollection_Load(&self->super.actorValueModifiers); /*0x51a835*/
  if ( (char)changeMask < 0 ) /*0x51a83d*/
  {
    _memset((int)&a1[0xD], 0, 0x104u); /*0x51a84b*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, a1, 1u); /*0x51a85c*/
    if ( a1[0] ) /*0x51a867*/
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)self, &a1[0xD], a1[0]); /*0x51a874*/
    BSStringT_Set(&self->super.fullName.name, &a1[0xD], 0); /*0x51a886*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x51a891*/
  {
    v8 = g_TESSaveLoadGame; /*0x51a89e*/
    v9 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x51a8a4*/
    v10 = g_TESSaveLoadGame->bufferCursor; /*0x51a8ac*/
    if ( v9 ) /*0x51a8af*/
    {
      v11 = TESForm_LookupByFormID(*v9); /*0x51a8c2*/
      v12 = &bufferCursor[*(unsigned __int16 *)&a1[1]]; /*0x51a8c4*/
      if ( v10 <= v12 ) /*0x51a8cc*/
      {
        if ( v10 < v12 ) /*0x51a90b*/
        {
          v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v11->vtbl->GetEditorName)( /*0x51a922*/
                                v11,
                                *((unsigned __int8 *)v9 + 9),
                                *(UInt32 *)((char *)v9 + 5));
          PrintError( /*0x51a941*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[*(unsigned __int16 *)&a1[1] - (_DWORD)v10],
            "..\\TES Shared\\TESActorBase.cpp",
            0x25E,
            *v9,
            v14,
            v18,
            v21);
        }
      }
      else
      {
        v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v11->vtbl->GetEditorName)( /*0x51a8df*/
                              v11,
                              *((unsigned __int8 *)v9 + 9),
                              *(UInt32 *)((char *)v9 + 5));
        PrintError( /*0x51a8fe*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v10[-*(unsigned __int16 *)&a1[1]] - bufferCursor,
          "..\\TES Shared\\TESActorBase.cpp",
          0x25E,
          *v9,
          v13,
          v17,
          v20);
      }
    }
    else
    {
      v15 = &bufferCursor[*(unsigned __int16 *)&a1[1]]; /*0x51a950*/
      if ( v10 <= v15 ) /*0x51a955*/
      {
        if ( v10 < v15 ) /*0x51a972*/
          PrintError( /*0x51a98d*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[*(unsigned __int16 *)&a1[1] - (_DWORD)v10],
            "..\\TES Shared\\TESActorBase.cpp",
            0x25E,
            v8->currentVersion);
      }
      else
      {
        PrintError( /*0x51a970*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v10[-*(unsigned __int16 *)&a1[1]] - bufferCursor,
          "..\\TES Shared\\TESActorBase.cpp",
          0x25E,
          v8->currentVersion);
      }
    }
  }
}
