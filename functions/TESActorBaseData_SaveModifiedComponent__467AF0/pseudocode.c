void __userpurge TESActorBaseData_SaveModifiedComponent(char *this@<ecx>, int a2@<ebx>, char a3)
{
  TESSaveLoad *v5; // ecx
  UInt32 v6; // ebp
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  char v9; // bl
  TESSaveLoad *v10; // ecx
  _WORD *v11; // edi
  char *i; // esi
  _BYTE *v13; // eax
  int v14; // edx
  char v15; // al
  TESSaveLoad *v16; // ecx
  UInt32 *v17; // edi
  UInt32 v18; // esi
  TESForm *v19; // eax
  const char *v20; // eax
  _WORD *v21; // edi
  unsigned int v22; // esi
  int v23; // [esp-Ch] [ebp-28h]
  size_t v24; // [esp-8h] [ebp-24h]
  size_t v25; // [esp-8h] [ebp-24h]
  int v26; // [esp-8h] [ebp-24h]
  size_t v27; // [esp-4h] [ebp-20h]
  size_t v28; // [esp-4h] [ebp-20h]
  const char *v29; // [esp-4h] [ebp-20h]
  int Src; // [esp+Ch] [ebp-10h] BYREF
  UInt32 v31; // [esp+10h] [ebp-Ch]
  int v32; // [esp+14h] [ebp-8h] BYREF
  int v33; // [esp+18h] [ebp-4h] BYREF

  v5 = SaveLoad_CurrentSavegame;
  v32 = 0;
  v6 = v5->unk000[5];
  v31 = 0;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v27) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v27);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v28) = 2;
    v31 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v32, v28);
  }
  HIDWORD(v24) = a2;
  v9 = a3;
  if ( (a3 & 0x10) != 0 )
  {
    LODWORD(v24) = 0x10;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 4, v24);
  }
  if ( (v9 & 0x40) != 0 )
  {
    v10 = SaveLoad_CurrentSavegame;
    LODWORD(v24) = 2;
    Src = 0;
    v11 = (_WORD *)v10->unk000[5];
    SaveLoad_SaveData((int)v10, &Src, v24);
    for ( i = this + 0x18; i; i = *((char **)i + 1) )
    {
      v13 = *(_BYTE **)i;
      if ( *(_DWORD *)i )
      {
        v14 = *(_DWORD *)(*(_DWORD *)v13 + 0xC);
        v15 = v13[4];
        v16 = SaveLoad_CurrentSavegame;
        v33 = v14;
        a3 = v15;
        SaveLoad_SaveFormID(v16, (int)&v33, 4u);
        LODWORD(v25) = 1;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a3, v25);
        ++Src;
      }
    }
    *v11 = Src;
  }
  if ( Global_DebugSaveBuffer )
  {
    v17 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v17 )
    {
      v19 = TESForm_LookupByFormID(*v17);
      v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v19->vtbl->GetEditorName)(
                            v19,
                            *(UInt32 *)((char *)v17 + 5),
                            0x66F,
                            "..\\TES Shared\\TESActorBaseData.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v18 - v6,
        *v17,
        v20,
        v23,
        v26,
        v29);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v18 - v6,
        0x66F,
        "..\\TES Shared\\TESActorBaseData.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v21 = (_WORD *)v31;
    v22 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v22 > v31 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESActorBaseData.cpp",
        0x66F);
    *v21 = v22 - (_WORD)v21;
  }
}
