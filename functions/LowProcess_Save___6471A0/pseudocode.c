void __thiscall LowProcess_Save_(_DWORD *this, int a2, int Src)
{
  int v4; // edi
  TESSaveLoad *v6; // ecx
  UInt32 v7; // ebp
  TESSaveLoad *v8; // ecx
  TESSaveLoad *v9; // ecx
  TESSaveLoad *v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  TESSaveLoad *v14; // ecx
  UInt32 *v15; // edi
  UInt32 v16; // esi
  TESForm *v17; // eax
  const char *v18; // eax
  float v19; // edi
  unsigned int v20; // esi
  int v21; // [esp-Ch] [ebp-28h]
  int v22; // [esp-8h] [ebp-24h]
  size_t v23; // [esp-4h] [ebp-20h]
  size_t v24; // [esp-4h] [ebp-20h]
  size_t v25; // [esp-4h] [ebp-20h]
  size_t v26; // [esp-4h] [ebp-20h]
  size_t v27; // [esp-4h] [ebp-20h]
  size_t v28; // [esp-4h] [ebp-20h]
  size_t v29; // [esp-4h] [ebp-20h]
  const char *v30; // [esp-4h] [ebp-20h]
  int v31; // [esp+4h] [ebp-18h]
  int v32; // [esp+8h] [ebp-14h]
  int v33; // [esp+Ch] [ebp-10h]
  int v34; // [esp+10h] [ebp-Ch] BYREF
  float v35; // [esp+14h] [ebp-8h]
  int v36; // [esp+18h] [ebp-4h] BYREF

  v4 = a2;
  sub_60D1F0(this, a2, Src);
  v6 = SaveLoad_CurrentSavegame;
  v36 = 0;
  v7 = v6->unk000[5];
  v35 = 0.0;
  if ( sub_45A170() )
  {
    LODWORD(v23) = 4;
    v8 = SaveLoad_CurrentSavegame;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v8, &Src, v23);
    v9 = SaveLoad_CurrentSavegame;
    LODWORD(v24) = 2;
    v35 = *(float *)&SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v9, &v36, v24);
  }
  LODWORD(v23) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 5, v23);
  LODWORD(v25) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 6, v25);
  LODWORD(v26) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 7, v26);
  LODWORD(v27) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x1D, v27);
  LODWORD(v28) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x21, v28);
  v10 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x34u )
  {
    LODWORD(v29) = 1;
    SaveLoad_SaveData((int)v10, (char *)this + 0x1F, v29);
    v10 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v10[1].createdObjectList.next) >= 0x37u )
  {
    LODWORD(v29) = 1;
    SaveLoad_SaveData((int)v10, this + 8, v29);
    v10 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v10[1].createdObjectList.next) >= 0x4Bu )
  {
    LODWORD(v29) = 4;
    SaveLoad_SaveData((int)v10, this + 0x22, v29);
    v10 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v10[1].createdObjectList.next) >= 0x4Fu )
  {
    LODWORD(v29) = 4;
    SaveLoad_SaveData((int)v10, this + 0xA, v29);
    v11 = *(this + 9);
    Src = 0;
    if ( v11 )
      Src = *(_DWORD *)(v11 + 0xC);
    SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&Src, 4u);
    v10 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v10[1].createdObjectList.next) >= 0x56u )
  {
    LODWORD(v29) = 4;
    SaveLoad_SaveData((int)v10, this + 0xE, v29);
    v10 = SaveLoad_CurrentSavegame;
  }
  v12 = *(this + 0xB);
  a2 = 0;
  if ( v12 )
  {
    if ( !*(this + 0x11) )
      a2 = *(_DWORD *)(v12 + 0xC);
  }
  SaveLoad_SaveFormID(v10, (int)&a2, 4u);
  v13 = *(this + 0xC);
  v34 = 0;
  if ( v13 )
    v34 = *(_DWORD *)(v13 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v34, 4u);
  if ( (v4 & 0x400000) != 0 )
    AVCollection_Save(this + 0x1C, SHIDWORD(v29), v31, v32, v33, v34, v35);
  v14 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x74u )
  {
    LODWORD(v29) = 4;
    SaveLoad_SaveData((int)v14, this + 0x23, v29);
    v14 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v14[1].createdObjectList.next) >= 0x76u )
  {
    LODWORD(v29) = 1;
    SaveLoad_SaveData((int)v14, (char *)this + 0x1E, v29);
    v14 = SaveLoad_CurrentSavegame;
  }
  if ( Global_DebugSaveBuffer )
  {
    v15 = (UInt32 *)v14[1].unk030[1];
    v16 = v14->unk000[5];
    if ( v15 )
    {
      v17 = TESForm_LookupByFormID(*v15);
      v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v17->vtbl->GetEditorName)(
                            v17,
                            *(UInt32 *)((char *)v15 + 5),
                            0xF2B,
                            ".\\AI\\LowProcess.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v16 - v7,
        *v15,
        v18,
        v21,
        v22,
        v30);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v16 - v7, 0xF2B, ".\\AI\\LowProcess.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v19 = v35;
    v20 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v20 > LODWORD(v35) + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\LowProcess.cpp",
        0xF2B);
    *(_WORD *)LODWORD(v19) = v20 - LOWORD(v19);
  }
}
