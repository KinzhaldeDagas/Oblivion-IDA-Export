// Verified 2026-10-03: parent save dispatcher for creature/NPC; component order matches size/load. 0x4 writes 4-byte health; 0x10000000 invokes ECX-only AVCollection_Save at self+0xD0; 0x80 writes byte-length then name bytes. Version>=0x6D includes TESForm state. BLOK envelope is independently version-gated.
void __thiscall TESActorBase_SaveModified(TESActorBase *self, ActorBaseSaveChangeMask changeMask)
{
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v5; // ecx
  ActorBaseSaveChangeMask v6; // ebx
  char *m_data; // edi
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  unsigned __int8 *v12; // esi
  int v13; // [esp-Ch] [ebp-24h]
  int v14; // [esp-8h] [ebp-20h]
  const char *v15; // [esp-4h] [ebp-1Ch]
  unsigned __int8 *v16; // [esp+Ch] [ebp-Ch]
  int Src; // [esp+10h] [ebp-8h] BYREF
  int source; // [esp+14h] [ebp-4h] BYREF

  v3 = g_TESSaveLoadGame; /*0x51a528*/
  source = 0; /*0x51a530*/
  bufferCursor = v3->bufferCursor; /*0x51a534*/
  v16 = 0; /*0x51a537*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x51a53b*/
  {
    v5 = g_TESSaveLoadGame; /*0x51a544*/
    Src = 0x4B4F4C42; /*0x51a551*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x51a559*/
    v16 = g_TESSaveLoadGame->bufferCursor; /*0x51a56e*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x51a572*/
  }
  v6 = changeMask; /*0x51a582*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x6Du ) /*0x51a586*/
    TESForm_SaveModifiedForm((TESForm *)self, changeMask); /*0x51a58b*/
  TESAttributes_SaveModified(&self->super.attributes, v6); /*0x51a597*/
  TESActorBaseData_SaveModifiedComponent(&self->super.actorBaseData, v6); /*0x51a5a0*/
  TESSpellList_SaveModifiedComponent(&self->super.spellList, v6); /*0x51a5a9*/
  TESAIForm_SaveModifiedComponent((int)&self->super.aiForm, v6); /*0x51a5b2*/
  if ( (v6 & 4) != 0 ) /*0x51a5ba*/
  {
    changeMask = self->super.health.health; /*0x51a5cb*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &changeMask, 4u); /*0x51a5cf*/
  }
  if ( (v6 & 0x10000000) != 0 ) /*0x51a5da*/
    AVCollection_Save(&self->super.actorValueModifiers); /*0x51a5e2*/
  if ( (char)v6 < 0 ) /*0x51a5ea*/
  {
    m_data = self->super.fullName.name.m_data; /*0x51a5f4*/
    if ( !m_data ) /*0x51a5f6*/
      m_data = EmptyString; /*0x51a5f8*/
    LOBYTE(changeMask) = strlen(m_data); /*0x51a616*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)self, &changeMask, 1u); /*0x51a61a*/
    if ( (_BYTE)changeMask ) /*0x51a625*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)self, m_data, (unsigned __int8)changeMask); /*0x51a62e*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x51a641*/
    v9 = g_TESSaveLoadGame->bufferCursor; /*0x51a649*/
    if ( currentlySavingFormHeader )
    {
      v10 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x51a651*/
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)( /*0x51a671*/
                            v10,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x231,
                            "..\\TES Shared\\TESActorBase.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v9 - bufferCursor,
        *currentlySavingFormHeader,
        v11,
        v13,
        v14,
        v15);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v9 - bufferCursor,
        0x231,
        "..\\TES Shared\\TESActorBase.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x51a6a9*/
  {
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x51a6bc*/
    if ( v12 > v16 + 0xFFFF ) /*0x51a6c7*/
      PrintError( /*0x51a6d8*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESActorBase.cpp",
        0x231);
    *(_WORD *)v16 = (_WORD)v12 - (_WORD)v16; /*0x51a6e2*/
  }
}
