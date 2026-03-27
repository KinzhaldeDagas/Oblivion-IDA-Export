void __usercall sub_625FE0(_DWORD *this@<ecx>, double a2@<st0>)
{
  TESSaveLoad *v3; // ecx
  UInt32 v4; // ebp
  TESSaveLoad *v5; // ecx
  TESSaveLoad *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char ****v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // ecx
  UInt32 *v16; // edi
  UInt32 v17; // esi
  TESForm *v18; // eax
  const char *v19; // eax
  _WORD *v20; // edi
  unsigned int v21; // esi
  int v22; // [esp-Ch] [ebp-40h]
  int v23; // [esp-8h] [ebp-3Ch]
  size_t v24; // [esp-4h] [ebp-38h]
  size_t v25; // [esp-4h] [ebp-38h]
  size_t v26; // [esp-4h] [ebp-38h]
  size_t v27; // [esp-4h] [ebp-38h]
  size_t v28; // [esp-4h] [ebp-38h]
  const char *v29; // [esp-4h] [ebp-38h]
  int v30; // [esp+10h] [ebp-24h] BYREF
  int v31; // [esp+14h] [ebp-20h] BYREF
  int v32; // [esp+18h] [ebp-1Ch] BYREF
  int v33; // [esp+1Ch] [ebp-18h] BYREF
  int v34; // [esp+20h] [ebp-14h] BYREF
  unsigned int v35; // [esp+24h] [ebp-10h] BYREF
  int Src; // [esp+28h] [ebp-Ch] BYREF
  UInt32 v37; // [esp+2Ch] [ebp-8h]
  int v38; // [esp+30h] [ebp-4h] BYREF

  sub_567E00(this);
  v3 = SaveLoad_CurrentSavegame;
  v38 = 0;
  v4 = v3->unk000[5];
  v37 = 0;
  if ( sub_45A170() )
  {
    v5 = SaveLoad_CurrentSavegame;
    LODWORD(v24) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v5, &Src, v24);
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v25) = 2;
    v37 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v6, &v38, v25);
  }
  LODWORD(v24) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x11), v24);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Au )
  {
    LODWORD(v26) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x13), v26);
  }
  v7 = *(this + 0x12);
  v31 = 0;
  if ( v7 )
    v31 = *(_DWORD *)(v7 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v31, 4u);
  v8 = *(this + 0x17);
  v32 = 0;
  if ( v8 )
    v32 = *(_DWORD *)(v8 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v32, 4u);
  v9 = *(this + 0x18);
  v33 = 0;
  if ( v9 )
    v33 = *(_DWORD *)(v9 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v33, 4u);
  v10 = *(this + 0x10);
  v34 = 0;
  if ( v10 )
    v34 = *(_DWORD *)(v10 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v34, 4u);
  v11 = (const char ****)*(this + 0x14);
  v30 = 0;
  if ( v11 )
    v30 = (unsigned __int16)sub_6B75B0(v11, a2);
  LODWORD(v26) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v30, v26);
  if ( (_WORD)v30 )
  {
    sub_6B7690((const char ****)*(this + 0x14), a2);
    v13 = *(this + 0x15);
    v35 = 0xFFFFFFFF;
    if ( v13 )
      v35 = (unsigned __int16)sub_6B7520((_DWORD *)*(this + 0x14), v12, v13);
    LODWORD(v27) = 2;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&v35, v27);
    v15 = (_DWORD *)*(this + 0x15);
    Src = 0xFFFFFFFF;
    if ( v15 )
    {
      if ( *(this + 0x16) )
        Src = (unsigned __int16)sub_6B7C60(v15, v14, *(this + 0x16));
    }
    LODWORD(v28) = 2;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&Src, v28);
  }
  if ( Global_DebugSaveBuffer )
  {
    v16 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v17 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v16 )
    {
      v18 = TESForm_LookupByFormID(*v16);
      v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v18->vtbl->GetEditorName)(
                            v18,
                            *(UInt32 *)((char *)v16 + 5),
                            0x17A,
                            ".\\AI\\DialoguePackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v17 - v4,
        *v16,
        v19,
        v22,
        v23,
        v29);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v17 - v4, 0x17A, ".\\AI\\DialoguePackage.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v20 = (_WORD *)v37;
    v21 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v21 > v37 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\DialoguePackage.cpp",
        0x17A);
    *v20 = v21 - (_WORD)v20;
  }
}
