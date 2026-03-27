void __usercall sub_626F70(_DWORD *this@<ecx>, int a2@<ebp>)
{
  TESSaveLoad *v4; // ecx
  bool v5; // zf
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  TESSaveLoad *v9; // ecx
  _WORD *v10; // ebp
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // eax
  UInt32 *v14; // edi
  UInt32 v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  _WORD *v18; // edi
  unsigned int v19; // esi
  int v20; // [esp-Ch] [ebp-34h]
  size_t v21; // [esp-8h] [ebp-30h]
  int v22; // [esp-8h] [ebp-30h]
  size_t v23; // [esp-4h] [ebp-2Ch]
  size_t v24; // [esp-4h] [ebp-2Ch]
  size_t v25; // [esp-4h] [ebp-2Ch]
  size_t v26; // [esp-4h] [ebp-2Ch]
  size_t v27; // [esp-4h] [ebp-2Ch]
  size_t v28; // [esp-4h] [ebp-2Ch]
  size_t v29; // [esp-4h] [ebp-2Ch]
  size_t v30; // [esp-4h] [ebp-2Ch]
  const char *v31; // [esp-4h] [ebp-2Ch]
  int v32; // [esp+Ch] [ebp-1Ch] BYREF
  UInt32 v33; // [esp+10h] [ebp-18h]
  int v34; // [esp+14h] [ebp-14h] BYREF
  int v35; // [esp+18h] [ebp-10h] BYREF
  UInt32 v36; // [esp+1Ch] [ebp-Ch]
  int Src; // [esp+20h] [ebp-8h] BYREF
  int v38; // [esp+24h] [ebp-4h] BYREF

  sub_567E00(this);
  v4 = SaveLoad_CurrentSavegame;
  v5 = Global_DebugSaveBuffer == 0;
  v38 = 0;
  v6 = v4->unk000[5];
  v36 = 0;
  v33 = v6;
  if ( !v5 )
    v33 = v6;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v23) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v23);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v24) = 2;
    v36 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v38, v24);
  }
  v9 = SaveLoad_CurrentSavegame;
  HIDWORD(v21) = a2;
  LODWORD(v21) = 2;
  v32 = 0;
  v10 = (_WORD *)v9->unk000[5];
  SaveLoad_SaveData((int)v9, &v32, v21);
  v11 = this + 0x15;
  if ( this != (_DWORD *)0xFFFFFFAC )
  {
    do
    {
      if ( !v11[1] && !*v11 )
        break;
      Src = *(_DWORD *)(*v11 + 0xC);
      TESForm_SaveFormIDToCurrentSaveGame((int)&Src, 4u);
      ++v32;
      v11 = (_DWORD *)v11[1];
    }
    while ( v11 );
  }
  *v10 = v32;
  v12 = *(this + 0x18);
  v34 = 0;
  if ( v12 )
    v34 = *(_DWORD *)(v12 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v34, 4u);
  v13 = *(this + 0x17);
  v35 = 0;
  if ( v13 )
    v35 = *(_DWORD *)(v13 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v35, 4u);
  LODWORD(v23) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x3D), v23);
  LODWORD(v25) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x19), v25);
  LODWORD(v26) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x14), v26);
  LODWORD(v27) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x13), v27);
  LODWORD(v28) = 0xC;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x10), v28);
  LODWORD(v29) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0xF), v29);
  LODWORD(v30) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)this + 0x65), v30);
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
                            0x209,
                            ".\\AI\\FleePackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v15 - v33,
        *v14,
        v17,
        v20,
        v22,
        v31);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v15 - v33, 0x209, ".\\AI\\FleePackage.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v18 = (_WORD *)v36;
    v19 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v19 > v36 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\FleePackage.cpp",
        0x209);
    *v18 = v19 - (_WORD)v18;
  }
}
