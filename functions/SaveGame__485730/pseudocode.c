void __usercall SaveGame(int *this@<ecx>, double a2@<st0>)
{
  TESSaveLoad *v3; // ecx
  UInt32 v4; // ebp
  TESSaveLoad *v5; // ecx
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  _DWORD *v9; // edi
  int i; // esi
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  _WORD *v15; // edi
  unsigned int v16; // esi
  int v17; // [esp-Ch] [ebp-2Ch]
  int v18; // [esp-8h] [ebp-28h]
  size_t v19; // [esp-4h] [ebp-24h]
  size_t v20; // [esp-4h] [ebp-24h]
  size_t v21; // [esp-4h] [ebp-24h]
  const char *v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+Ch] [ebp-14h] BYREF
  UInt32 v24; // [esp+10h] [ebp-10h]
  int Src; // [esp+14h] [ebp-Ch] BYREF
  int v26; // [esp+18h] [ebp-8h] BYREF
  int v27; // [esp+1Ch] [ebp-4h] BYREF

  v3 = g_TESSaveLoadGame; /*0x485737*/
  v26 = 0; /*0x48573d*/
  v4 = v3->unk000[5]; /*0x485745*/
  v24 = 0; /*0x485749*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x485751*/
  {
    v5 = g_TESSaveLoadGame; /*0x48575a*/
    LODWORD(v19) = 4; /*0x485760*/
    Src = 0x4B4F4C42; /*0x485767*/
    SaveLoad_SaveData((int)v5, &Src, v19); /*0x48576f*/
    v6 = g_TESSaveLoadGame; /*0x485774*/
    LODWORD(v20) = 2; /*0x48577d*/
    v24 = g_TESSaveLoadGame->unk000[5]; /*0x485784*/
    SaveLoad_SaveData((int)v6, &v26, v20); /*0x485788*/
  }
  v7 = g_TESSaveLoadGame; /*0x485793*/
  v27 = *(_DWORD *)(*(this + 2) + 0xC); /*0x4857a0*/
  SaveLoad_SaveFormID(v7, (int)&v27, 4u); /*0x4857a4*/
  LODWORD(v19) = 4; /*0x4857a9*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, this + 1, v19); /*0x4857b5*/
  v8 = g_TESSaveLoadGame; /*0x4857ba*/
  LODWORD(v21) = 4; /*0x4857c0*/
  v23 = 0; /*0x4857c6*/
  v9 = (_DWORD *)v8->unk000[5]; /*0x4857ce*/
  SaveLoad_SaveData((int)v8, &v23, v21); /*0x4857d2*/
  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x4857db*/
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i ) /*0x4857e6*/
      break; /*0x4857e9*/
    ExtraDataList_SaveGame(*(ExtraDataList **)i, a2, 0x20, 0); /*0x4857f1*/
    ++v23; /*0x4857f6*/
  }
  *v9 = v23; /*0x485806*/
  if ( Global_DebugSaveBuffer )
  {
    v11 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x485816*/
    v12 = g_TESSaveLoadGame->unk000[5]; /*0x48581e*/
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11); /*0x485826*/
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)( /*0x485846*/
                            v13,
                            *(UInt32 *)((char *)v11 + 5),
                            0x5AB,
                            "..\\TES Shared\\InventoryChanges.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v4,
        *v11,
        v14,
        v17,
        v18,
        v22);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v12 - v4,
        0x5AB,
        "..\\TES Shared\\InventoryChanges.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x48587e*/
  {
    v15 = (_WORD *)v24; /*0x48588d*/
    v16 = g_TESSaveLoadGame->unk000[5]; /*0x485891*/
    if ( v16 > v24 + 0xFFFF ) /*0x48589c*/
      PrintError( /*0x4858ad*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\InventoryChanges.cpp",
        0x5AB);
    *v15 = v16 - (_WORD)v15; /*0x4858b7*/
  }
}
