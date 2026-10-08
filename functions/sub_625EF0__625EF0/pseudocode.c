// Modern DialoguePackage save size includes responseTimeRemaining, optional waitingForLip (save version >=0x6A), activeSpeaker/speaker/target/startingTopic FormIDs, UInt16 serialized-conversation size, the full Conversation payload, and package-level UInt16 current-item/current-response indices.
UInt16 __thiscall DialoguePackage::GetSaveSize(DialoguePackageRuntimeView *this)
{
  unsigned __int16 v2; // si
  unsigned __int16 v3; // bx
  __int16 v4; // si
  ConversationView *conversation; // ecx
  UInt16 v6; // si
  UInt16 v7; // di
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-1Ch]
  int v13; // [esp-8h] [ebp-18h]
  const char *v14; // [esp-4h] [ebp-14h]

  v2 = TESPackage_GetSaveSize(this); /*0x625f01*/
  v3 = v2; /*0x625f08*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x625f0b*/
    v2 += 6; /*0x625f14*/
  v4 = v2 + 4; /*0x625f1c*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x6Au ) /*0x625f23*/
    ++v4; /*0x625f25*/
  conversation = this->conversation; /*0x625f28*/
  v6 = v4 + 0x12; /*0x625f2b*/
  if ( conversation ) /*0x625f34*/
    v7 = Conversation::GetSaveSize(conversation) + 4 + v6; /*0x625f42*/
  else
    v7 = v6; /*0x625f47*/
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x625f5b*/
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8); /*0x625f68*/
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)( /*0x625f88*/
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0x13D,
                            ".\\AI\\DialoguePackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v7 - v3,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v7; /*0x625fab*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v7 - v3, 0x13D, ".\\AI\\DialoguePackage.cpp");
  }
  return v7; /*0x625fa7*/
}
