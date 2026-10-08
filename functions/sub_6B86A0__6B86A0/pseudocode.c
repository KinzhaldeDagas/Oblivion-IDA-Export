// Serialized MenuTopic size: display string plus flags and owner quest/topic/info FormIDs; observed directly in Oblivion. Fallout symbol was used only to corroborate this method name.
UInt16 __thiscall MenuTopic::GetSaveSize(MenuTopicView *this)
{
  int v2; // esi
  unsigned int v3; // esi
  UInt32 *v4; // edi
  TESForm *v5; // eax
  const char *v6; // eax
  int v8; // [esp-Ch] [ebp-14h]
  int v9; // [esp-8h] [ebp-10h]
  const char *v10; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x6b86aa*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6b86ac*/
    v2 = 6; /*0x6b86b5*/
  v3 = v2 + strlen(this->displayName.m_data) + 0x10; /*0x6b86d1*/
  if ( Global_DebugSaveBuffer )
  {
    v4 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x6b86dc*/
    if ( v4 )
    {
      v5 = TESForm_LookupByFormID(*v4); /*0x6b86e9*/
      v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v5->vtbl->GetEditorName)( /*0x6b8709*/
                           v5,
                           *(UInt32 *)((char *)v4 + 5),
                           0x209,
                           ".\\Dialogue\\MenuTopic.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        (unsigned __int16)v3,
        *v4,
        v6,
        v8,
        v9,
        v10);
      return v3; /*0x6b8725*/
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      (unsigned __int16)v3,
      0x209,
      ".\\Dialogue\\MenuTopic.cpp");
  }
  return v3; /*0x6b8720*/
}
