void __thiscall sub_67B840(_DWORD *this)
{
  bool v2; // zf
  TESSaveLoad *v4; // ecx
  UInt32 v5; // eax
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  _DWORD *v9; // esi
  TESSaveLoad *v10; // ecx
  int v11; // edi
  int v12; // eax
  TESSaveLoad *v13; // ecx
  UInt32 *v14; // edi
  UInt32 v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  _WORD *v18; // edi
  unsigned int v19; // esi
  int v20; // [esp-Ch] [ebp-38h]
  int v21; // [esp-8h] [ebp-34h]
  size_t v22; // [esp-4h] [ebp-30h]
  size_t v23; // [esp-4h] [ebp-30h]
  size_t v24; // [esp-4h] [ebp-30h]
  size_t v25; // [esp-4h] [ebp-30h]
  size_t v26; // [esp-4h] [ebp-30h]
  size_t v27; // [esp-4h] [ebp-30h]
  const char *v28; // [esp-4h] [ebp-30h]
  int v29; // [esp+Ch] [ebp-20h] BYREF
  UInt32 v30; // [esp+10h] [ebp-1Ch]
  int v31; // [esp+14h] [ebp-18h] BYREF
  UInt32 v32; // [esp+18h] [ebp-14h]
  int Src; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+20h] [ebp-Ch] BYREF
  _WORD *v35; // [esp+24h] [ebp-8h]
  int v36; // [esp+28h] [ebp-4h] BYREF

  v2 = Global_DebugSaveBuffer == 0;
  v4 = SaveLoad_CurrentSavegame;
  v34 = 0;
  v5 = v4->unk000[5];
  v32 = 0;
  v30 = v5;
  if ( !v2 )
    v30 = v5;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v22) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src, v22);
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v23) = 2;
    v32 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v7, &v34, v23);
  }
  v8 = SaveLoad_CurrentSavegame;
  v29 = 0;
  LODWORD(v22) = 2;
  v35 = (_WORD *)v8->unk000[5];
  SaveLoad_SaveData((int)v8, &v29, v22);
  v9 = (_DWORD *)*this;
  if ( *this )
  {
    v10 = SaveLoad_CurrentSavegame;
    do
    {
      if ( !v9[1] && !*v9 )
        break;
      v11 = *v9;
      Src = *(_DWORD *)(*(_DWORD *)*v9 + 0xC);
      SaveLoad_SaveFormID(v10, (int)&Src, 4u);
      LODWORD(v24) = 1;
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(v11 + 4), v24);
      v10 = SaveLoad_CurrentSavegame;
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x39u )
      {
        LODWORD(v24) = 4;
        SaveLoad_SaveData((int)v10, (void *)(v11 + 8), v24);
        v10 = SaveLoad_CurrentSavegame;
      }
      ++v29;
      v9 = (_DWORD *)v9[1];
    }
    while ( v9 );
  }
  *v35 = v29;
  v12 = *(this + 1);
  v31 = 0;
  if ( v12 )
    v31 = *(_DWORD *)(v12 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v31, 4u);
  v13 = SaveLoad_CurrentSavegame;
  v36 = *(_DWORD *)(*(this + 2) + 0xC);
  SaveLoad_SaveFormID(v13, (int)&v36, 4u);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0xE0))(*(this + 2));
  LODWORD(v24) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 3, v24);
  LODWORD(v25) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 4, v25);
  LODWORD(v26) = 0xC;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 5, v26);
  LODWORD(v27) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 8, v27);
  if ( Global_DebugSaveBuffer )
  {
    v14 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v14 )
    {
      v16 = TESForm_LookupByFormID(*v14);
      v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v16->vtbl->GetEditorName)(
                            v16,
                            *(UInt32 *)((char *)v14 + 5),
                            0x147,
                            ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v15 - v30,
        *v14,
        v17,
        v20,
        v21,
        v28);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v15 - v30, 0x147, ".\\AI\\SpectatorPackage.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v18 = (_WORD *)v32;
    v19 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v19 > v32 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\SpectatorPackage.cpp",
        0x147);
    *v18 = v19 - (_WORD)v18;
  }
}
