void __thiscall sub_567E00(_DWORD *this)
{
  TESSaveLoad *v3; // ecx
  UInt32 v4; // ebx
  _WORD *v5; // ebp
  TESSaveLoad *v6; // ecx
  void *v7; // ecx
  void *v8; // ecx
  UInt32 v9; // esi
  UInt32 *v10; // edi
  TESForm *v11; // eax
  const char *v12; // eax
  unsigned int v13; // esi
  int v14; // [esp-10h] [ebp-28h]
  int v15; // [esp-Ch] [ebp-24h]
  const char *v16; // [esp-8h] [ebp-20h]
  size_t v17; // [esp-4h] [ebp-1Ch]
  size_t v18; // [esp-4h] [ebp-1Ch]
  size_t v19; // [esp-4h] [ebp-1Ch]
  size_t v20; // [esp-4h] [ebp-1Ch]
  char v21; // [esp+Fh] [ebp-9h] BYREF
  int Src; // [esp+10h] [ebp-8h] BYREF
  int v23; // [esp+14h] [ebp-4h] BYREF

  v3 = SaveLoad_CurrentSavegame;
  v23 = 0;
  v4 = v3->unk000[5];
  v5 = 0;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v17) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src, v17);
    v5 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v18) = 2;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v23, v18);
  }
  LODWORD(v17) = 8;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 7, v17);
  v21 = *(this + 9) != 0;
  if ( *(this + 0xA) )
    v21 |= 2u;
  LODWORD(v19) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&v21, v19);
  v7 = (void *)*(this + 9);
  if ( v7 )
    sub_569CF0(v7);
  v8 = (void *)*(this + 0xA);
  if ( v8 )
    sub_56A290(v8);
  LODWORD(v20) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 6, v20);
  if ( Global_DebugSaveBuffer )
  {
    v9 = SaveLoad_CurrentSavegame->unk000[5];
    v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v10 )
    {
      v11 = TESForm_LookupByFormID(*v10);
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)(
                            v11,
                            *(UInt32 *)((char *)v10 + 5),
                            0xEBA,
                            "..\\TES Shared\\Package.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v9 - v4,
        *v10,
        v12,
        v14,
        v15,
        v16);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v9 - v4, 0xEBA, "..\\TES Shared\\Package.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v13 > (unsigned int)v5 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\Package.cpp",
        0xEBA);
    *v5 = v13 - (_WORD)v5;
  }
}
