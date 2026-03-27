int __cdecl ActiveEffect_Base_SaveAEList_::PrintDebugInfo(int a1, int a2, int a3, int a4, int a5)
{
  UInt32 *v5; // edi
  UInt32 v6; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  int v10; // [esp-Ch] [ebp-Ch]
  int v11; // [esp-8h] [ebp-8h]
  const char *v12; // [esp-4h] [ebp-4h]

  v5 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  v6 = SaveLoad_CurrentSavegame->unk000[5];
  if ( v5 )
  {
    v7 = TESForm_LookupByFormID(*v5);
    v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v7->vtbl->GetEditorName)(
                         v7,
                         *(UInt32 *)((char *)v5 + 5),
                         0x36B,
                         ".\\Magic\\ActiveEffect.cpp");
    sub_40FEC0(
      "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v6 - a4,
      *v5,
      v8,
      v10,
      v11,
      v12);
    return ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(a1, a2, a3, a4, a5);
  }
  else
  {
    sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v6 - a4, 0x36B, ".\\Magic\\ActiveEffect.cpp");
    return ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(a1, a2, a3, a4, a5);
  }
}
