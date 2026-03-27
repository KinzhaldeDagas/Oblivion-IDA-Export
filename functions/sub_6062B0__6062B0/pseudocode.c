void __thiscall sub_6062B0(_DWORD *this)
{
  TESSaveLoad *v3; // ecx
  UInt32 v4; // ebp
  TESSaveLoad *v5; // ecx
  TESSaveLoad *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  TESSaveLoad *v11; // ecx
  _WORD *v12; // edi
  _DWORD *i; // esi
  TESSaveLoad *v14; // ecx
  UInt32 *v15; // edi
  UInt32 v16; // esi
  TESForm *v17; // eax
  const char *v18; // eax
  _WORD *v19; // edi
  unsigned int v20; // esi
  int v21; // [esp-Ch] [ebp-3Ch]
  int v22; // [esp-8h] [ebp-38h]
  size_t v23; // [esp-4h] [ebp-34h]
  size_t v24; // [esp-4h] [ebp-34h]
  size_t v25; // [esp-4h] [ebp-34h]
  size_t v26; // [esp-4h] [ebp-34h]
  size_t v27; // [esp-4h] [ebp-34h]
  size_t v28; // [esp-4h] [ebp-34h]
  size_t v29; // [esp-4h] [ebp-34h]
  size_t v30; // [esp-4h] [ebp-34h]
  const char *v31; // [esp-4h] [ebp-34h]
  int v32; // [esp+10h] [ebp-20h] BYREF
  int v33; // [esp+14h] [ebp-1Ch] BYREF
  int v34; // [esp+18h] [ebp-18h] BYREF
  int v35; // [esp+1Ch] [ebp-14h] BYREF
  int v36; // [esp+20h] [ebp-10h] BYREF
  UInt32 v37; // [esp+24h] [ebp-Ch]
  int Src; // [esp+28h] [ebp-8h] BYREF
  int v39; // [esp+2Ch] [ebp-4h] BYREF

  v3 = SaveLoad_CurrentSavegame;
  v39 = 0;
  v4 = v3->unk000[5];
  v37 = 0;
  if ( sub_45A170() )
  {
    v5 = SaveLoad_CurrentSavegame;
    LODWORD(v23) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v5, &Src, v23);
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v24) = 2;
    v37 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v6, &v39, v24);
  }
  LODWORD(v23) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 4, v23);
  LODWORD(v25) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x11, v25);
  LODWORD(v26) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xB, v26);
  LODWORD(v27) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 1, v27);
  LODWORD(v28) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 6, v28);
  LODWORD(v29) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0xA, v29);
  v7 = *(this + 2);
  v33 = 0;
  if ( v7 )
    v33 = *(_DWORD *)(v7 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v33, 4u);
  v8 = *(this + 3);
  v34 = 0;
  if ( v8 )
    v34 = *(_DWORD *)(v8 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v34, 4u);
  v9 = *(this + 5);
  v35 = 0;
  if ( v9 )
    v35 = *(_DWORD *)(v9 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v35, 4u);
  v10 = *(this + 9);
  v36 = 0;
  if ( v10 )
    v36 = *(_DWORD *)(v10 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v36, 4u);
  v11 = SaveLoad_CurrentSavegame;
  LODWORD(v30) = 2;
  v32 = 0;
  v12 = (_WORD *)v11->unk000[5];
  SaveLoad_SaveData((int)v11, &v32, v30);
  for ( i = this + 7; i; i = (_DWORD *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    v14 = SaveLoad_CurrentSavegame;
    Src = *(_DWORD *)(*i + 0xC);
    SaveLoad_SaveFormID(v14, (int)&Src, 4u);
    ++v32;
  }
  *v12 = v32;
  if ( Global_DebugSaveBuffer )
  {
    v15 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v16 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v15 )
    {
      v17 = TESForm_LookupByFormID(*v15);
      v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v17->vtbl->GetEditorName)(
                            v17,
                            *(UInt32 *)((char *)v15 + 5),
                            0x132,
                            ".\\AI\\AlarmPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v16 - v4,
        *v15,
        v18,
        v21,
        v22,
        v31);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v16 - v4, 0x132, ".\\AI\\AlarmPackage.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v19 = (_WORD *)v37;
    v20 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v20 > v37 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\AlarmPackage.cpp",
        0x132);
    *v19 = v20 - (_WORD)v19;
  }
}
