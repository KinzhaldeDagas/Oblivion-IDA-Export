void __userpurge TESSpellList_SaveModifiedComponent(char *this@<ecx>, int a2@<esi>, int a3)
{
  bool v5; // zf
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  _WORD *v9; // ebp
  char *v10; // esi
  TESSaveLoad *v11; // ecx
  char *v12; // esi
  TESSaveLoad *v13; // ecx
  UInt32 *v14; // edi
  UInt32 v15; // esi
  TESForm *v16; // eax
  const char *v17; // eax
  unsigned int v18; // esi
  int v19; // [esp-14h] [ebp-28h]
  int v20; // [esp-10h] [ebp-24h]
  size_t v21; // [esp-Ch] [ebp-20h]
  const char *v22; // [esp-Ch] [ebp-20h]
  size_t v23; // [esp-4h] [ebp-18h]
  size_t v24; // [esp-4h] [ebp-18h]
  UInt32 v25; // [esp+4h] [ebp-10h]
  _WORD *v26; // [esp+8h] [ebp-Ch]
  int Src; // [esp+Ch] [ebp-8h] BYREF
  int v28; // [esp+10h] [ebp-4h] BYREF

  if ( (a3 & 0x20) != 0 )
  {
    v5 = Global_DebugSaveBuffer == 0;
    v6 = SaveLoad_CurrentSavegame;
    v28 = 0;
    v26 = 0;
    v25 = v6->unk000[5];
    if ( !v5 )
      v25 = v6->unk000[5];
    if ( sub_45A170() )
    {
      v7 = SaveLoad_CurrentSavegame;
      LODWORD(v23) = 4;
      Src = 0x4B4F4C42;
      SaveLoad_SaveData((int)v7, &Src, v23);
      LODWORD(v24) = 2;
      v26 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v28, v24);
    }
    v8 = SaveLoad_CurrentSavegame;
    HIDWORD(v21) = a2;
    LODWORD(v21) = 2;
    a3 = 0;
    v9 = (_WORD *)v8->unk000[5];
    SaveLoad_SaveData((int)v8, &a3, v21);
    v10 = this + 4;
    if ( this != (char *)0xFFFFFFFC )
    {
      do
      {
        if ( *(_DWORD *)v10 )
        {
          v11 = SaveLoad_CurrentSavegame;
          Src = *(_DWORD *)(*(_DWORD *)v10 + 0xC);
          SaveLoad_SaveFormID(v11, (int)&Src, 4u);
          ++a3;
        }
        v10 = *((char **)v10 + 1);
      }
      while ( v10 );
    }
    v12 = this + 0xC;
    if ( this != (char *)0xFFFFFFF4 )
    {
      do
      {
        if ( *(_DWORD *)v12 )
        {
          v13 = SaveLoad_CurrentSavegame;
          Src = *(_DWORD *)(*(_DWORD *)v12 + 0xC);
          SaveLoad_SaveFormID(v13, (int)&Src, 4u);
          ++a3;
        }
        v12 = *((char **)v12 + 1);
      }
      while ( v12 );
    }
    *v9 = a3;
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
                              0x523,
                              "..\\TES Shared\\TESSpellList.cpp");
        sub_40FEC0(
          "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
          v15 - v25,
          *v14,
          v17,
          v19,
          v20,
          v22);
      }
      else
      {
        sub_40FEC0(
          "SaveGame(): %-5i ending at line %i in file %s",
          v15 - v25,
          0x523,
          "..\\TES Shared\\TESSpellList.cpp");
      }
    }
    if ( sub_45A170() )
    {
      v18 = SaveLoad_CurrentSavegame->unk000[5];
      if ( v18 > (unsigned int)v26 + 0xFFFF )
        PrintError(
          "Save Game Block in file %s on line %i is greater than maximum short size",
          "..\\TES Shared\\TESSpellList.cpp",
          0x523);
      *v26 = v18 - (_WORD)v26;
    }
  }
}
