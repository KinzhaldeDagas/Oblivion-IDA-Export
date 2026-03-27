void __cdecl sub_472D10(int a1, float **a2, _DWORD *a3, float a4)
{
  TESSaveLoad *v4; // ecx
  UInt32 v5; // ebp
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  float **v8; // esi
  float *v9; // eax
  unsigned __int16 v10; // ax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  _WORD *v16; // edi
  unsigned int v17; // esi
  int v18; // [esp-4h] [ebp-28h]
  int v19; // [esp+0h] [ebp-24h]
  size_t v20; // [esp+4h] [ebp-20h]
  size_t v21; // [esp+4h] [ebp-20h]
  const char *v22; // [esp+4h] [ebp-20h]
  int v23; // [esp+14h] [ebp-10h] BYREF
  UInt32 v24; // [esp+18h] [ebp-Ch]
  int Src; // [esp+1Ch] [ebp-8h] BYREF
  int v26; // [esp+20h] [ebp-4h] BYREF

  v4 = SaveLoad_CurrentSavegame;
  v26 = 0;
  v5 = v4->unk000[5];
  v24 = 0;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v20) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src, v20);
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v21) = 2;
    v24 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v7, &v26, v21);
  }
  v8 = a2;
  v23 = 0;
  if ( a2 )
  {
    v9 = a2[9];
    if ( v9 )
      v23 = *((_DWORD *)v9 + 3);
  }
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v23, 4u);
  if ( v23 )
  {
    v10 = 0xD;
    if ( v8[4] )
      v10 = sub_49F550() + 0xE;
    LODWORD(v20) = 2;
    v11 = SaveLoad_CurrentSavegame;
    a2 = (float **)v10;
    SaveLoad_SaveData((int)v11, &a2, v20);
    sub_472C40(v8, a4, a3);
  }
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
                            0xF72,
                            "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v5,
        *v12,
        v15,
        v18,
        v19,
        v22);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v13 - v5, 0xF72, "..\\TES Shared\\Animation.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v16 = (_WORD *)v24;
    v17 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v17 > v24 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\Animation.cpp",
        0xF72);
    *v16 = v17 - (_WORD)v16;
  }
}
