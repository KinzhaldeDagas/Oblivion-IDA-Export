void __cdecl ActiveEffect_Base_SaveAEList_::PrintDebugInfo(int a1, int a2, int a3, int a4, _WORD *a5)
{
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  int v9; // [esp-Ch] [ebp-Ch]
  int v10; // [esp-8h] [ebp-8h]
  const char *v11; // [esp-4h] [ebp-4h]

  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x68df7f*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x68df87*/
  if ( currentlySavingFormHeader )
  {
    v7 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x68df8f*/
    v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v7->vtbl->GetEditorName)( /*0x68dfaf*/
                         v7,
                         *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                         0x36B,
                         ".\\Magic\\ActiveEffect.cpp");
    sub_40FEC0(
      "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      &bufferCursor[-a4],
      *currentlySavingFormHeader,
      v8,
      v9,
      v10,
      v11);
    ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(a1, a2, a3, a4, a5); /*0x68dfc7*/
  }
  else
  {
    sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", &bufferCursor[-a4], 0x36B, ".\\Magic\\ActiveEffect.cpp");
    ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(a1, a2, a3, a4, a5); /*0x68dfe3*/
  }
}
