void __thiscall sub_4E5B10(_DWORD *this)
{
  bool v2; // zf
  TESSaveLoad *v4; // ecx
  UInt32 v5; // eax
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  _WORD *v9; // ebp
  int v10; // eax
  unsigned int i; // esi
  _BYTE *v12; // ecx
  UInt32 *v13; // edi
  UInt32 v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  _WORD *v17; // edi
  unsigned int v18; // esi
  int v19; // [esp-Ch] [ebp-2Ch]
  int v20; // [esp-8h] [ebp-28h]
  size_t v21; // [esp-4h] [ebp-24h]
  size_t v22; // [esp-4h] [ebp-24h]
  size_t v23; // [esp-4h] [ebp-24h]
  const char *v24; // [esp-4h] [ebp-24h]
  int v25; // [esp+Ch] [ebp-14h] BYREF
  UInt32 v26; // [esp+10h] [ebp-10h]
  UInt32 v27; // [esp+14h] [ebp-Ch]
  int Src; // [esp+18h] [ebp-8h] BYREF
  int v29; // [esp+1Ch] [ebp-4h] BYREF

  v2 = Global_DebugSaveBuffer == 0;
  v4 = SaveLoad_CurrentSavegame;
  v29 = 0;
  v5 = v4->unk000[5];
  v27 = 0;
  v26 = v5;
  if ( !v2 )
    v26 = v5;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v21) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src, v21);
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v22) = 2;
    v27 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v7, &v29, v22);
  }
  v8 = SaveLoad_CurrentSavegame;
  LODWORD(v21) = 2;
  v25 = 0;
  v9 = (_WORD *)v8->unk000[5];
  SaveLoad_SaveData((int)v8, &v25, v21);
  v10 = *(this + 9);
  if ( v10 )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v10 + 0xA); ++i )
    {
      v12 = *(_BYTE **)(*(_DWORD *)(v10 + 4) + 4 * i);
      if ( v12 )
      {
        if ( sub_67ED70(v12) )
        {
          LODWORD(v23) = 2;
          Src = (unsigned __int16)i;
          SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v23);
          ++v25;
        }
      }
      v10 = *(this + 9);
    }
  }
  *v9 = v25;
  if ( Global_DebugSaveBuffer )
  {
    v13 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v14 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v13 )
    {
      v15 = TESForm_LookupByFormID(*v13);
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)(
                            v15,
                            *(UInt32 *)((char *)v13 + 5),
                            0xD5D,
                            "..\\TES Shared\\TESPathGrid.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14 - v26,
        *v13,
        v16,
        v19,
        v20,
        v24);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v14 - v26, 0xD5D, "..\\TES Shared\\TESPathGrid.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v17 = (_WORD *)v27;
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v18 > v27 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESPathGrid.cpp",
        0xD5D);
    *v17 = v18 - (_WORD)v17;
  }
}
