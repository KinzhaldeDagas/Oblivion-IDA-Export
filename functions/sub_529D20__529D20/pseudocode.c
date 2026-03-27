void __userpurge sub_529D20(TESForm *this@<ecx>, double st7_0@<st0>, int a2)
{
  TESSaveLoad *v4; // ecx
  bool v5; // zf
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  TESSaveLoad *v9; // eax
  char *v10; // eax
  _BYTE *v11; // esi
  char v12; // al
  TESSaveLoad *v13; // ecx
  int *v14; // ebp
  int v15; // eax
  void *v16; // esi
  TESSaveLoad *v17; // ecx
  UInt32 *v18; // edi
  UInt32 v19; // esi
  TESForm *v20; // eax
  const char *v21; // eax
  _WORD *v22; // edi
  unsigned int v23; // esi
  int v24; // [esp-Ch] [ebp-50h]
  int v25; // [esp-8h] [ebp-4Ch]
  size_t v26; // [esp-4h] [ebp-48h]
  size_t v27; // [esp-4h] [ebp-48h]
  size_t v28; // [esp-4h] [ebp-48h]
  size_t v29; // [esp-4h] [ebp-48h]
  size_t v30; // [esp-4h] [ebp-48h]
  size_t v31; // [esp-4h] [ebp-48h]
  const char *v32; // [esp-4h] [ebp-48h]
  _BYTE a1[26]; // [esp+16h] [ebp-2Eh] BYREF
  _BYTE *v34; // [esp+30h] [ebp-14h]
  _BYTE *v35; // [esp+34h] [ebp-10h]
  unsigned int v36; // [esp+40h] [ebp-4h]

  TESForm_SaveModifiedForm(this, a2);
  v4 = SaveLoad_CurrentSavegame;
  v5 = Global_DebugSaveBuffer == 0;
  *(_DWORD *)&a1[0x16] = 0;
  v6 = v4->unk000[5];
  *(_DWORD *)&a1[0x12] = 0;
  *(_DWORD *)&a1[0xA] = v6;
  if ( !v5 )
    *(_DWORD *)&a1[0xA] = v6;
  if ( sub_45A170() )
  {
    LODWORD(v26) = 4;
    v7 = SaveLoad_CurrentSavegame;
    *(_DWORD *)&a1[6] = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &a1[6], v26);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v27) = 2;
    *(_DWORD *)&a1[0x12] = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &a1[0x16], v27);
  }
  if ( (a2 & 4) != 0 )
  {
    LODWORD(v26) = 1;
    a1[2] = *((_BYTE *)this + 0x3C);
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[2], v26);
  }
  if ( (a2 & 0x10000000) != 0 )
  {
    v9 = SaveLoad_CurrentSavegame;
    a1[1] = 0;
    LODWORD(v26) = 1;
    v35 = (_BYTE *)v9->unk000[5];
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1], v26);
    v10 = (char *)this + 0x40;
    *(_DWORD *)&a1[6] = (char *)this + 0x40;
    if ( this != (TESForm *)0xFFFFFFC0 )
    {
      while ( 1 )
      {
        v11 = *(_BYTE **)v10;
        if ( *(_DWORD *)v10 )
        {
          v12 = *v11;
          LODWORD(v28) = 1;
          a1[4] = v11[1];
          a1[3] = v12;
          TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[3], v28);
          LODWORD(v29) = 1;
          TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[4], v29);
          v13 = SaveLoad_CurrentSavegame;
          a1[0] = 0;
          LODWORD(v30) = 1;
          v34 = (_BYTE *)v13->unk000[5];
          TESForm_SaveDataToCurrentSaveGame((TESForm *)a1, v30);
          v14 = (int *)(v11 + 4);
          if ( v11 != (_BYTE *)0xFFFFFFFC )
          {
            do
            {
              v15 = *v14;
              if ( *v14 )
              {
                v16 = *(void **)(v15 + 0x64);
                LODWORD(v28) = 1;
                a1[5] = *(_BYTE *)(v15 + 0x60);
                TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[5], v28);
                if ( v16 )
                {
                  LODWORD(v31) = 4;
                  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v16, v31);
                }
                else
                {
                  sub_47D260(&a1[0xE]);
                  v17 = SaveLoad_CurrentSavegame;
                  LODWORD(v31) = 4;
                  v36 = 0;
                  SaveLoad_SaveData((int)v17, &a1[0xE], v31);
                  v36 = 0xFFFFFFFF;
                  TESTexture::ClearComponentReferences(&a1[0xE]);
                }
                ++a1[0];
              }
              v14 = (int *)v14[1];
            }
            while ( v14 );
          }
          v10 = *(char **)&a1[6];
          *v34 = a1[0];
          ++a1[1];
        }
        *(_DWORD *)&a1[6] = *((_DWORD *)v10 + 1);
        if ( !*(_DWORD *)&a1[6] )
          break;
        v10 = *(char **)&a1[6];
      }
    }
    *v35 = a1[1];
  }
  if ( (a2 & 0x8000000) != 0 )
    ScriptEventList_Save_(*((void **)this + 0x16), st7_0);
  if ( Global_DebugSaveBuffer )
  {
    v18 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v19 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v18 )
    {
      v20 = TESForm_LookupByFormID(*v18);
      v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v20->vtbl->GetEditorName)(
                            v20,
                            *(UInt32 *)((char *)v18 + 5),
                            0xC5A,
                            "..\\TES Shared\\TESQuest.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v19 - *(_DWORD *)&a1[0xA],
        *v18,
        v21,
        v24,
        v25,
        v32);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v19 - *(_DWORD *)&a1[0xA],
        0xC5A,
        "..\\TES Shared\\TESQuest.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v22 = *(_WORD **)&a1[0x12];
    v23 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v23 > *(_DWORD *)&a1[0x12] + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESQuest.cpp",
        0xC5A);
    *v22 = v23 - (_WORD)v22;
  }
}
