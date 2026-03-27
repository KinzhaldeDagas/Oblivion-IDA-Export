void __userpurge sub_46EAC0(char *this@<ecx>, int a2@<edi>, int a3)
{
  bool v5; // zf
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  _WORD *v9; // ebp
  char *v10; // edi
  int v11; // esi
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  unsigned int v16; // esi
  int v17; // [esp-14h] [ebp-28h]
  int v18; // [esp-10h] [ebp-24h]
  size_t v19; // [esp-Ch] [ebp-20h]
  size_t v20; // [esp-Ch] [ebp-20h]
  const char *v21; // [esp-Ch] [ebp-20h]
  size_t v22; // [esp-4h] [ebp-18h]
  size_t v23; // [esp-4h] [ebp-18h]
  UInt32 v24; // [esp+4h] [ebp-10h]
  _WORD *v25; // [esp+8h] [ebp-Ch]
  int Src; // [esp+Ch] [ebp-8h] BYREF
  int v27; // [esp+10h] [ebp-4h] BYREF

  if ( (a3 & 8) != 0 )
  {
    v5 = Global_DebugSaveBuffer == 0;
    v6 = SaveLoad_CurrentSavegame;
    v27 = 0;
    v25 = 0;
    v24 = v6->unk000[5];
    if ( !v5 )
      v24 = v6->unk000[5];
    if ( sub_45A170() )
    {
      v7 = SaveLoad_CurrentSavegame;
      LODWORD(v22) = 4;
      Src = 0x4B4F4C42;
      SaveLoad_SaveData((int)v7, &Src, v22);
      LODWORD(v23) = 2;
      v25 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
      SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v27, v23);
    }
    v8 = SaveLoad_CurrentSavegame;
    HIDWORD(v19) = a2;
    LODWORD(v19) = 2;
    a3 = 0;
    v9 = (_WORD *)v8->unk000[5];
    SaveLoad_SaveData((int)v8, &a3, v19);
    v10 = this + 4;
    if ( this != (char *)0xFFFFFFFC )
    {
      do
      {
        v11 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
        {
          Src = *(_DWORD *)(*(_DWORD *)v11 + 0xC);
          SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&Src, 4u);
          LODWORD(v20) = 4;
          SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(v11 + 4), v20);
          ++a3;
        }
        v10 = *((char **)v10 + 1);
      }
      while ( v10 );
    }
    *v9 = a3;
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
                              0x50D,
                              "..\\TES Shared\\TESReactionForm.cpp");
        sub_40FEC0(
          "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
          v13 - v24,
          *v12,
          v15,
          v17,
          v18,
          v21);
      }
      else
      {
        sub_40FEC0(
          "SaveGame(): %-5i ending at line %i in file %s",
          v13 - v24,
          0x50D,
          "..\\TES Shared\\TESReactionForm.cpp");
      }
    }
    if ( sub_45A170() )
    {
      v16 = SaveLoad_CurrentSavegame->unk000[5];
      if ( v16 > (unsigned int)v25 + 0xFFFF )
        PrintError(
          "Save Game Block in file %s on line %i is greater than maximum short size",
          "..\\TES Shared\\TESReactionForm.cpp",
          0x50D);
      *v25 = v16 - (_WORD)v25;
    }
  }
}
