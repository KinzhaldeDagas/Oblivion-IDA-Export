// Conversation serialization writes UInt16 item count, every DialogueItem, and a UInt16 index for the list-internal current-item cursor. This is distinct from DialoguePackage's external currentItem/currentResponse indices.
void __thiscall Conversation::SaveGame(ConversationView *this)
{
  bool v1; // zf
  TESSaveLoad *v3; // ecx
  UInt32 v4; // eax
  TESSaveLoad *v5; // ecx
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  _WORD *v8; // ebp
  ConversationView *i; // esi
  DialogueItemNode *currentItemNode; // eax
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  _WORD *v15; // edi
  unsigned int v16; // esi
  int v17; // [esp-Ch] [ebp-30h]
  int v18; // [esp-8h] [ebp-2Ch]
  size_t v19; // [esp-4h] [ebp-28h]
  size_t v20; // [esp-4h] [ebp-28h]
  size_t v21; // [esp-4h] [ebp-28h]
  const char *v22; // [esp-4h] [ebp-28h]
  int v23; // [esp+Ch] [ebp-18h] BYREF
  UInt32 v24; // [esp+10h] [ebp-14h]
  unsigned int DialogueItemIndex; // [esp+14h] [ebp-10h] BYREF
  UInt32 v26; // [esp+18h] [ebp-Ch]
  int Src; // [esp+1Ch] [ebp-8h] BYREF
  int v28; // [esp+20h] [ebp-4h] BYREF

  v1 = Global_DebugSaveBuffer == 0; /*0x6b7693*/
  v3 = g_TESSaveLoadGame; /*0x6b769f*/
  v28 = 0; /*0x6b76a5*/
  v4 = v3->unk000[5]; /*0x6b76ad*/
  v26 = 0; /*0x6b76b0*/
  v24 = v4; /*0x6b76b8*/
  if ( !v1 ) /*0x6b76bc*/
    v24 = v4; /*0x6b76be*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b76c2*/
  {
    v5 = g_TESSaveLoadGame; /*0x6b76cb*/
    LODWORD(v19) = 4; /*0x6b76d1*/
    Src = 0x4B4F4C42; /*0x6b76d8*/
    SaveLoad_SaveData((int)v5, &Src, v19); /*0x6b76e0*/
    v6 = g_TESSaveLoadGame; /*0x6b76e5*/
    LODWORD(v20) = 2; /*0x6b76ee*/
    v26 = g_TESSaveLoadGame->unk000[5]; /*0x6b76f5*/
    SaveLoad_SaveData((int)v6, &v28, v20); /*0x6b76f9*/
  }
  v7 = g_TESSaveLoadGame; /*0x6b76fe*/
  LODWORD(v19) = 2; /*0x6b7704*/
  v23 = 0; /*0x6b770a*/
  v8 = (_WORD *)v7->unk000[5]; /*0x6b7712*/
  SaveLoad_SaveData((int)v7, &v23, v19); /*0x6b7716*/
  for ( i = this; i; i = (ConversationView *)i->nextItemNode ) /*0x6b771f*/
  {
    if ( !i->nextItemNode && !i->firstItem ) /*0x6b7727*/
      break; /*0x6b772a*/
    DialogueItem::SaveGame(i->firstItem); /*0x6b772e*/
    ++v23; /*0x6b7733*/
  }
  *v8 = v23; /*0x6b7744*/
  currentItemNode = this->currentItemNode; /*0x6b7748*/
  DialogueItemIndex = 0xFFFFFFFF; /*0x6b774d*/
  if ( currentItemNode ) /*0x6b7755*/
    DialogueItemIndex = (unsigned __int16)Conversation::GetDialogueItemIndex(this, currentItemNode->item); /*0x6b7764*/
  LODWORD(v21) = 2; /*0x6b776e*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, &DialogueItemIndex, v21); /*0x6b7775*/
  if ( Global_DebugSaveBuffer )
  {
    v11 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x6b7788*/
    v12 = g_TESSaveLoadGame->unk000[5]; /*0x6b7790*/
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11); /*0x6b7798*/
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)( /*0x6b77b8*/
                            v13,
                            *(UInt32 *)((char *)v11 + 5),
                            0xDF,
                            ".\\Dialogue\\Conversation.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v24,
        *v11,
        v14,
        v17,
        v18,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v12 - v24, 0xDF, ".\\Dialogue\\Conversation.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b77f4*/
  {
    v15 = (_WORD *)v26; /*0x6b7803*/
    v16 = g_TESSaveLoadGame->unk000[5]; /*0x6b7807*/
    if ( v16 > v26 + 0xFFFF ) /*0x6b7812*/
      PrintError( /*0x6b7823*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\Dialogue\\Conversation.cpp",
        0xDF);
    *v15 = v16 - (_WORD)v15; /*0x6b782d*/
  }
}
