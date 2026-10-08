// Verified: ECX component receiver; one stack mask for save (RET 4), two stack words for load (RET 8). No extra register parameters. Mask 0x20 gates the spell-list serialization path; connected from TESActorBase save/load dispatcher.
void __thiscall TESSpellList_SaveModifiedComponent(TESSpellList *self, ActorBaseSaveChangeMask changeMask)
{
  bool v3; // zf
  TESSaveLoadGame_SerializationView *v4; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  unsigned __int8 *v7; // ebp
  SpellListEntry *p_spellList; // esi
  TESSaveLoadGame_SerializationView *v9; // ecx
  SpellListEntry *p_leveledSpellList; // esi
  TESSaveLoadGame_SerializationView *v11; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  unsigned __int8 *v16; // esi
  int v17; // [esp-14h] [ebp-28h]
  int v18; // [esp-10h] [ebp-24h]
  const char *v19; // [esp-Ch] [ebp-20h]
  unsigned __int8 *bufferCursor; // [esp+4h] [ebp-10h]
  unsigned __int8 *v21; // [esp+8h] [ebp-Ch]
  UInt32 Src; // [esp+Ch] [ebp-8h] BYREF
  int source; // [esp+10h] [ebp-4h] BYREF

  if ( (changeMask & 0x20) != 0 )
  {
    v3 = Global_DebugSaveBuffer == 0; /*0x46f721*/
    v4 = g_TESSaveLoadGame; /*0x46f728*/
    source = 0; /*0x46f72e*/
    v21 = 0; /*0x46f739*/
    bufferCursor = v4->bufferCursor; /*0x46f741*/
    if ( !v3 ) /*0x46f745*/
      bufferCursor = v4->bufferCursor; /*0x46f747*/
    if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46f74b*/
    {
      v5 = g_TESSaveLoadGame; /*0x46f754*/
      Src = 0x4B4F4C42; /*0x46f761*/
      SaveLoad_SaveData(v5, &Src, 4u); /*0x46f769*/
      v21 = g_TESSaveLoadGame->bufferCursor; /*0x46f77e*/
      SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x46f782*/
    }
    v6 = g_TESSaveLoadGame; /*0x46f787*/
    changeMask = 0; /*0x46f795*/
    v7 = v6->bufferCursor; /*0x46f79d*/
    SaveLoad_SaveData(v6, &changeMask, 2u); /*0x46f7a1*/
    p_spellList = &self->spellList; /*0x46f7a6*/
    if ( self != (TESSpellList *)0xFFFFFFFC ) /*0x46f7ab*/
    {
      do /*0x46f7d9*/
      {
        if ( p_spellList->type ) /*0x46f7b0*/
        {
          v9 = g_TESSaveLoadGame; /*0x46f7c0*/
          Src = p_spellList->type->member.refID; /*0x46f7c6*/
          SaveLoad_SaveFormID(v9, &Src, 4u); /*0x46f7ca*/
          ++changeMask; /*0x46f7cf*/
        }
        p_spellList = p_spellList->next; /*0x46f7d4*/
      }
      while ( p_spellList ); /*0x46f7d9*/
    }
    p_leveledSpellList = &self->leveledSpellList; /*0x46f7db*/
    if ( self != (TESSpellList *)0xFFFFFFF4 ) /*0x46f7e0*/
    {
      do /*0x46f80b*/
      {
        if ( p_leveledSpellList->type ) /*0x46f7e2*/
        {
          v11 = g_TESSaveLoadGame; /*0x46f7eb*/
          Src = p_leveledSpellList->type->member.refID; /*0x46f7f8*/
          SaveLoad_SaveFormID(v11, &Src, 4u); /*0x46f7fc*/
          ++changeMask; /*0x46f801*/
        }
        p_leveledSpellList = p_leveledSpellList->next; /*0x46f806*/
      }
      while ( p_leveledSpellList ); /*0x46f80b*/
    }
    *(_WORD *)v7 = changeMask; /*0x46f812*/
    if ( Global_DebugSaveBuffer )
    {
      currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x46f824*/
      v13 = g_TESSaveLoadGame->bufferCursor; /*0x46f82c*/
      if ( currentlySavingFormHeader )
      {
        v14 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x46f834*/
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)( /*0x46f854*/
                              v14,
                              *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                              0x523,
                              "..\\TES Shared\\TESSpellList.cpp");
        sub_40FEC0(
          "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
          v13 - bufferCursor,
          *currentlySavingFormHeader,
          v15,
          v17,
          v18,
          v19);
      }
      else
      {
        sub_40FEC0(
          "SaveGame(): %-5i ending at line %i in file %s",
          v13 - bufferCursor,
          0x523,
          "..\\TES Shared\\TESSpellList.cpp");
      }
    }
    if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x46f890*/
    {
      v16 = g_TESSaveLoadGame->bufferCursor; /*0x46f8a3*/
      if ( v16 > v21 + 0xFFFF ) /*0x46f8ae*/
        PrintError( /*0x46f8bf*/
          "Save Game Block in file %s on line %i is greater than maximum short size",
          "..\\TES Shared\\TESSpellList.cpp",
          0x523);
      *(_WORD *)v21 = (_WORD)v16 - (_WORD)v21; /*0x46f8c9*/
    }
  }
}
