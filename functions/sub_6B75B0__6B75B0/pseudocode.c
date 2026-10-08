// Conversation save-size calculation includes every DialogueItem plus the saved current-item index.
UInt16 __thiscall Conversation::GetSaveSize(ConversationView *this)
{
  __int16 v2; // di
  UInt16 SaveSize; // ax
  UInt32 *v4; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  int v8; // [esp-Ch] [ebp-18h]
  int v9; // [esp-8h] [ebp-14h]
  const char *v10; // [esp-4h] [ebp-10h]
  __int16 i; // [esp+8h] [ebp-4h]
  UInt16 v12; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x6b75bb*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b75bd*/
    v2 = 6; /*0x6b75c6*/
  for ( i = v2 + 2; this; i += SaveSize ) /*0x6b75d4*/
  {
    if ( !this->nextItemNode && !this->firstItem ) /*0x6b75dc*/
      break; /*0x6b75df*/
    SaveSize = DialogueItem::GetSaveSize(this->firstItem); /*0x6b75e3*/
    this = (ConversationView *)this->nextItemNode; /*0x6b75e8*/
  }
  v12 = i + 2; /*0x6b75f4*/
  if ( !Global_DebugSaveBuffer ) /*0x6b75f9*/
    return v12; /*0x6b767e*/
  v4 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x6b7607*/
  if ( v4 )
  {
    v5 = TESForm_LookupByFormID(*v4); /*0x6b7614*/
    v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v5->vtbl->GetEditorName)( /*0x6b7634*/
                         v5,
                         *(UInt32 *)((char *)v4 + 5),
                         0xBE,
                         ".\\Dialogue\\Conversation.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v12,
      *v4,
      v6,
      v8,
      v9,
      v10);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v12, 0xBE, ".\\Dialogue\\Conversation.cpp");
  }
  return v12; /*0x6b7650*/
}
