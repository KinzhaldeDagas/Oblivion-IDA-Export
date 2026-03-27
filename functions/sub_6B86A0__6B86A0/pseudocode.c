__int16 __thiscall sub_6B86A0(UnkBohDialogueTopicBoh *this)
{
  int v2; // esi
  unsigned int v3; // esi
  UInt32 *v4; // edi
  TESForm *v5; // eax
  const char *v6; // eax
  int v8; // [esp-Ch] [ebp-14h]
  int v9; // [esp-8h] [ebp-10h]
  const char *v10; // [esp-4h] [ebp-Ch]

  v2 = 0;
  if ( sub_45A170() )
    v2 = 6;
  v3 = v2 + strlen(this->unkString.m_data) + 0x10;
  if ( Global_DebugSaveBuffer )
  {
    v4 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v4 )
    {
      v5 = TESForm_LookupByFormID(*v4);
      v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v5->vtbl->GetEditorName)(
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
      return v3;
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      (unsigned __int16)v3,
      0x209,
      ".\\Dialogue\\MenuTopic.cpp");
  }
  return v3;
}
