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

  v3 = SaveLoad_CurrentSavegame;
  v26 = 0;
  v4 = v3->unk000[5];
  v24 = 0;
  if ( sub_45A170() )
  {
    v5 = SaveLoad_CurrentSavegame;
    LODWORD(v19) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v5, &Src, v19);
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v20) = 2;
    v24 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v6, &v26, v20);
  }
  v7 = SaveLoad_CurrentSavegame;
  v27 = *(_DWORD *)(*(this + 2) + 0xC);
  SaveLoad_SaveFormID(v7, (int)&v27, 4u);
  LODWORD(v19) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 1, v19);
  v8 = SaveLoad_CurrentSavegame;
  LODWORD(v21) = 4;
  v23 = 0;
  v9 = (_DWORD *)v8->unk000[5];
  SaveLoad_SaveData((int)v8, &v23, v21);
  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
      break;
    ExtraDataList_SaveGame(*(ExtraDataList **)i, a2, 0x20, 0);
    ++v23;
  }
  *v9 = v23;
  if ( Global_DebugSaveBuffer )
  {
    v11 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v12 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11);
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)(
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
  if ( sub_45A170() )
  {
    v15 = (_WORD *)v24;
    v16 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v16 > v24 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\InventoryChanges.cpp",
        0x5AB);
    *v15 = v16 - (_WORD)v15;
  }
}
