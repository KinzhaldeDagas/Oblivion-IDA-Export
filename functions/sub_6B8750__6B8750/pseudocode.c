// OFE cache persistence verification 2026-10-02: 6B8750 serializes hasLinkedTopics, isInfoGeneralTopic (+20), infoNotSpoken (+21), and ownerQuest/topic/INFO through native SaveFormID. 6B8950 restores flags and resolves all three identities via native save-load fixup. Thus a routed Rumors cache can retain its actual custom topic at +24 and native InfoGeneral role marker without new savegame fields. DialogueResponse lists are reconstructed later by 425970; validate worldspace before using that cache.
void __thiscall MenuTopic::SaveGame(MenuTopicView *this)
{
  TESSaveLoad *v2; // ecx
  UInt32 v3; // ebp
  TESSaveLoad *v4; // ecx
  TESSaveLoad *v5; // ecx
  char *m_data; // edi
  char *v7; // eax
  TESSaveLoad *v8; // ecx
  TESQuest *ownerQuest; // eax
  TESTopic *topic; // eax
  OblivionTopicInfo *info; // esi
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  _WORD *v16; // edi
  unsigned int v17; // esi
  int v18; // [esp-Ch] [ebp-38h]
  int v19; // [esp-8h] [ebp-34h]
  size_t v20; // [esp-4h] [ebp-30h]
  size_t v21; // [esp-4h] [ebp-30h]
  size_t v22; // [esp-4h] [ebp-30h]
  size_t v23; // [esp-4h] [ebp-30h]
  size_t v24; // [esp-4h] [ebp-30h]
  const char *v25; // [esp-4h] [ebp-30h]
  unsigned __int8 v26; // [esp+13h] [ebp-19h] BYREF
  UInt32 refID; // [esp+14h] [ebp-18h] BYREF
  UInt32 v28; // [esp+18h] [ebp-14h] BYREF
  UInt32 v29; // [esp+1Ch] [ebp-10h] BYREF
  UInt32 v30; // [esp+20h] [ebp-Ch]
  int Src; // [esp+24h] [ebp-8h] BYREF
  int v32; // [esp+28h] [ebp-4h] BYREF

  v2 = g_TESSaveLoadGame; /*0x6b8758*/
  v32 = 0; /*0x6b8760*/
  v3 = v2->unk000[5]; /*0x6b8764*/
  v30 = 0; /*0x6b8768*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b876c*/
  {
    v4 = g_TESSaveLoadGame; /*0x6b8775*/
    LODWORD(v20) = 4; /*0x6b877b*/
    Src = 0x4B4F4C42; /*0x6b8782*/
    SaveLoad_SaveData((int)v4, &Src, v20); /*0x6b878a*/
    v5 = g_TESSaveLoadGame; /*0x6b878f*/
    LODWORD(v21) = 2; /*0x6b8798*/
    v30 = g_TESSaveLoadGame->unk000[5]; /*0x6b879f*/
    SaveLoad_SaveData((int)v5, &v32, v21); /*0x6b87a3*/
  }
  m_data = this->displayName.m_data; /*0x6b87a8*/
  v7 = &this->displayName.m_data[strlen(this->displayName.m_data) + 1]; /*0x6b87b7*/
  LODWORD(v20) = 1; /*0x6b87b9*/
  v8 = g_TESSaveLoadGame; /*0x6b87c2*/
  v26 = (_BYTE)v7 - (LOBYTE(this->displayName.m_data) + 1); /*0x6b87c8*/
  SaveLoad_SaveData((int)v8, &v26, v20); /*0x6b87cc*/
  if ( v26 ) /*0x6b87d7*/
  {
    LODWORD(v22) = v26; /*0x6b87e2*/
    SaveLoad_SaveData((int)g_TESSaveLoadGame, m_data, v22); /*0x6b87e4*/
  }
  LODWORD(v22) = 1; /*0x6b87ef*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &this->hasLinkedTopics, v22); /*0x6b87f5*/
  LODWORD(v23) = 1; /*0x6b87fa*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &this->isInfoGeneralTopic, v23); /*0x6b8806*/
  LODWORD(v24) = 1; /*0x6b8811*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &this->infoNotSpoken, v24);// Save actor-cache presentation byte MenuTopic.infoNotSpoken. This is not TESTopicInfo.spoken and can be false while the INFO-global spoken byte remains false. /*0x6b8817*/
  ownerQuest = this->ownerQuest; /*0x6b881c*/
  refID = 0; /*0x6b8821*/
  if ( ownerQuest ) /*0x6b8825*/
    refID = ownerQuest->super.refID; /*0x6b882a*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&refID, 4u); /*0x6b883b*/
  topic = this->topic; /*0x6b8840*/
  v28 = 0; /*0x6b8845*/
  if ( topic ) /*0x6b8849*/
    v28 = topic->super.refID; /*0x6b884e*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&v28, 4u); /*0x6b885f*/
  info = this->info; /*0x6b8864*/
  v29 = 0; /*0x6b8869*/
  if ( info ) /*0x6b886d*/
    v29 = info->super.member.refID; /*0x6b8872*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (int)&v29, 4u); /*0x6b8883*/
  if ( Global_DebugSaveBuffer )
  {
    v12 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x6b8895*/
    v13 = g_TESSaveLoadGame->unk000[5]; /*0x6b889d*/
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12); /*0x6b88a5*/
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)( /*0x6b88c5*/
                            v14,
                            *(UInt32 *)((char *)v12 + 5),
                            0x22F,
                            ".\\Dialogue\\MenuTopic.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v3,
        *v12,
        v15,
        v18,
        v19,
        v25);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v13 - v3, 0x22F, ".\\Dialogue\\MenuTopic.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b88fd*/
  {
    v16 = (_WORD *)v30; /*0x6b890c*/
    v17 = g_TESSaveLoadGame->unk000[5]; /*0x6b8910*/
    if ( v17 > v30 + 0xFFFF ) /*0x6b891b*/
      PrintError( /*0x6b892c*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\Dialogue\\MenuTopic.cpp",
        0x22F);
    *v16 = v17 - (_WORD)v16; /*0x6b8936*/
  }
}
