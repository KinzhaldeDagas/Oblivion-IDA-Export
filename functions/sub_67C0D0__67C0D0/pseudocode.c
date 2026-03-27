void __thiscall sub_67C0D0(int *this)
{
  TESSaveLoad *v3; // ecx
  UInt32 v4; // ebp
  TESSaveLoad *v5; // ecx
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  _WORD *v8; // edi
  int i; // esi
  UInt32 *v10; // edi
  UInt32 v11; // esi
  TESForm *v12; // eax
  const char *v13; // eax
  _WORD *v14; // edi
  unsigned int v15; // esi
  int v16; // [esp-Ch] [ebp-28h]
  int v17; // [esp-8h] [ebp-24h]
  size_t v18; // [esp-4h] [ebp-20h]
  size_t v19; // [esp-4h] [ebp-20h]
  const char *v20; // [esp-4h] [ebp-20h]
  int v21; // [esp+Ch] [ebp-10h] BYREF
  UInt32 v22; // [esp+10h] [ebp-Ch]
  int Src; // [esp+14h] [ebp-8h] BYREF
  int v24; // [esp+18h] [ebp-4h] BYREF

  v3 = SaveLoad_CurrentSavegame;
  v24 = 0;
  v4 = v3->unk000[5];
  v22 = 0;
  if ( sub_45A170() )
  {
    v5 = SaveLoad_CurrentSavegame;
    LODWORD(v18) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v5, &Src, v18);
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v19) = 2;
    v22 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v6, &v24, v19);
  }
  v7 = SaveLoad_CurrentSavegame;
  LODWORD(v18) = 2;
  v21 = 0;
  v8 = (_WORD *)v7->unk000[5];
  SaveLoad_SaveData((int)v7, &v21, v18);
  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
      break;
    sub_67B840(*(_DWORD **)i);
    ++v21;
  }
  *v8 = v21;
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v11 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v10 )
    {
      v12 = TESForm_LookupByFormID(*v10);
      v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v12->vtbl->GetEditorName)(
                            v12,
                            *(UInt32 *)((char *)v10 + 5),
                            0x233,
                            ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v11 - v4,
        *v10,
        v13,
        v16,
        v17,
        v20);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v11 - v4, 0x233, ".\\AI\\SpectatorPackage.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v14 = (_WORD *)v22;
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v15 > v22 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\SpectatorPackage.cpp",
        0x233);
    *v14 = v15 - (_WORD)v14;
  }
}
