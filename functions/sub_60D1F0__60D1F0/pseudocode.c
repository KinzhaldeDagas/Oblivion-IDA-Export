void __thiscall sub_60D1F0(_DWORD *this, int a2, int a3)
{
  TESSaveLoad *v5; // ecx
  UInt32 v6; // ebp
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  int v9; // eax
  int v10; // edi
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  _WORD *v15; // edi
  unsigned int v16; // esi
  int v17; // [esp-Ch] [ebp-28h]
  int v18; // [esp-8h] [ebp-24h]
  size_t v19; // [esp-4h] [ebp-20h]
  size_t v20; // [esp-4h] [ebp-20h]
  size_t v21; // [esp-4h] [ebp-20h]
  const char *v22; // [esp-4h] [ebp-20h]
  int v23; // [esp+Ch] [ebp-10h] BYREF
  UInt32 v24; // [esp+10h] [ebp-Ch]
  int Src; // [esp+14h] [ebp-8h] BYREF
  int v26; // [esp+18h] [ebp-4h] BYREF

  v5 = SaveLoad_CurrentSavegame;
  v26 = 0;
  v6 = v5->unk000[5];
  v24 = 0;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v19) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v19);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v20) = 2;
    v24 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v26, v20);
  }
  v9 = *(this + 2);
  v23 = 0;
  if ( v9 )
    v23 = *(_DWORD *)(v9 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v23, 4u);
  if ( v23 )
  {
    v10 = a2;
    if ( (a2 & 0x20000) != 0 && TESDataHandler_IsFormIDCreated_(v23) )
    {
      LODWORD(v19) = 1;
      LOBYTE(a2) = *(_BYTE *)(*(this + 2) + 0x20);
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a2, v19);
      if ( (v10 & 0x10000) == 0 )
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0xE0))(*(this + 2));
    }
    LODWORD(v19) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 1, v19);
  }
  LODWORD(v19) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 3, v19);
  LODWORD(v21) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 4, v21);
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
                            0x122,
                            ".\\AI\\BaseProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v6,
        *v11,
        v14,
        v17,
        v18,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v12 - v6, 0x122, ".\\AI\\BaseProcess.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v15 = (_WORD *)v24;
    v16 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v16 > v24 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\BaseProcess.cpp",
        0x122);
    *v15 = v16 - (_WORD)v15;
  }
}
