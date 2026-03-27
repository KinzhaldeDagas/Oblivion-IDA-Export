void __usercall sub_5C0E30(int a1@<ebp>)
{
  TESSaveLoad *v1; // ecx
  bool v2; // zf
  UInt32 v3; // eax
  TESSaveLoad *v4; // ecx
  TESSaveLoad *v5; // ecx
  unsigned int v6; // edi
  TESSaveLoad *v7; // ecx
  _BYTE *v8; // ebp
  _DWORD *v9; // esi
  int v10; // eax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  _WORD *v16; // edi
  unsigned int v17; // esi
  int v18; // [esp-Ch] [ebp-2Ch]
  size_t v19; // [esp-8h] [ebp-28h]
  int v20; // [esp-8h] [ebp-28h]
  size_t v21; // [esp-4h] [ebp-24h]
  size_t v22; // [esp-4h] [ebp-24h]
  const char *v23; // [esp-4h] [ebp-24h]
  char v24; // [esp+Fh] [ebp-11h] BYREF
  UInt32 v25; // [esp+10h] [ebp-10h]
  UInt32 v26; // [esp+14h] [ebp-Ch]
  int Src; // [esp+18h] [ebp-8h] BYREF
  int v28; // [esp+1Ch] [ebp-4h] BYREF

  v1 = SaveLoad_CurrentSavegame;
  v2 = Global_DebugSaveBuffer == 0;
  v28 = 0;
  v3 = v1->unk000[5];
  v26 = 0;
  v25 = v3;
  if ( !v2 )
    v25 = v3;
  if ( sub_45A170() )
  {
    v4 = SaveLoad_CurrentSavegame;
    LODWORD(v21) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v4, &Src, v21);
    v5 = SaveLoad_CurrentSavegame;
    LODWORD(v22) = 2;
    v26 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v5, &v28, v22);
  }
  v6 = 0;
  HIDWORD(v19) = a1;
  do
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v19) = 1;
    v24 = 0;
    v8 = (_BYTE *)v7->unk000[5];
    SaveLoad_SaveData((int)v7, &v24, v19);
    v9 = (_DWORD *)dword_B3B444[v6];
    while ( v9 )
    {
      v10 = v9[2];
      v9 = (_DWORD *)*v9;
      if ( v10 )
      {
        v11 = SaveLoad_CurrentSavegame;
        Src = *(_DWORD *)(v10 + 0xC);
        SaveLoad_SaveFormID(v11, (int)&Src, 4u);
        ++v24;
      }
    }
    v6 += 4;
    *v8 = v24;
  }
  while ( v6 < 0x20 );
  if ( Global_DebugSaveBuffer )
  {
    v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12);
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)(
                            v14,
                            *(UInt32 *)((char *)v12 + 5),
                            0x389,
                            ".\\Interface\\Menus\\QuickKeysMenu.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v25,
        *v12,
        v15,
        v18,
        v20,
        v23);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v13 - v25,
        0x389,
        ".\\Interface\\Menus\\QuickKeysMenu.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v16 = (_WORD *)v26;
    v17 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v17 > v26 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\Interface\\Menus\\QuickKeysMenu.cpp",
        0x389);
    *v16 = v17 - (_WORD)v16;
  }
}
