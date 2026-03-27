char __userpurge BoundItemEffect_Save@<al>(int **a1@<ecx>, double a2@<st0>, int a3@<ebp>, int a4)
{
  TESSaveLoad *v5; // ecx
  bool v6; // zf
  TESSaveLoad *v7; // ecx
  int **v8; // esi
  int v9; // ebp
  TESSaveLoad *v10; // ecx
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  char result; // al
  unsigned int v16; // esi
  int v17; // [esp-Ch] [ebp-24h]
  size_t v18; // [esp-8h] [ebp-20h]
  int v19; // [esp-8h] [ebp-20h]
  size_t v20; // [esp-4h] [ebp-1Ch]
  size_t v21; // [esp-4h] [ebp-1Ch]
  size_t v22; // [esp-4h] [ebp-1Ch]
  size_t v23; // [esp-4h] [ebp-1Ch]
  const char *v24; // [esp-4h] [ebp-1Ch]
  UInt32 v25; // [esp+8h] [ebp-10h]
  _WORD *v26; // [esp+Ch] [ebp-Ch]
  int Src; // [esp+10h] [ebp-8h] BYREF
  int v28; // [esp+14h] [ebp-4h] BYREF

  AssociatedItemEffect_Save(a4);
  v5 = SaveLoad_CurrentSavegame;
  v6 = Global_DebugSaveBuffer == 0;
  v28 = 0;
  v26 = 0;
  v25 = v5->unk000[5];
  if ( !v6 )
    v25 = v5->unk000[5];
  if ( sub_45A170() )
  {
    LODWORD(v20) = 4;
    v7 = SaveLoad_CurrentSavegame;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v20);
    LODWORD(v21) = 2;
    v26 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v28, v21);
  }
  LOBYTE(a4) = a1[0xF] != 0;
  LODWORD(v20) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a4, v20);
  if ( (_BYTE)a4 )
    SaveGame(a1[0xF], a2);
  HIDWORD(v18) = a3;
  v8 = a1 + 0x10;
  v9 = 0x10;
  do
  {
    LOBYTE(a4) = *v8 != 0;
    LODWORD(v18) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a4, v18);
    if ( (_BYTE)a4 )
      SaveGame(*v8, a2);
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x41u )
  {
    LODWORD(v22) = 4;
    SaveLoad_SaveData((int)v10, a1 + 0x20, v22);
    LODWORD(v23) = 1;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, a1 + 0x21, v23);
    v10 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v10[1].createdObjectList.next) >= 0x6Bu )
  {
    LODWORD(v22) = 1;
    SaveLoad_SaveData((int)v10, a1 + 0x22, v22);
    v10 = SaveLoad_CurrentSavegame;
  }
  if ( Global_DebugSaveBuffer )
  {
    v11 = (UInt32 *)v10[1].unk030[1];
    v12 = v10->unk000[5];
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11);
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)(
                            v13,
                            *(UInt32 *)((char *)v11 + 5),
                            0x2DB,
                            ".\\Magic\\BoundItemEffect.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v25,
        *v11,
        v14,
        v17,
        v19,
        v24);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v12 - v25, 0x2DB, ".\\Magic\\BoundItemEffect.cpp");
    }
  }
  result = sub_45A170();
  if ( result )
  {
    v16 = SaveLoad_CurrentSavegame->unk000[5];
    result = (_BYTE)v26 - 1;
    if ( v16 > (unsigned int)v26 + 0xFFFF )
      result = PrintError(
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 ".\\Magic\\BoundItemEffect.cpp",
                 0x2DB);
    *v26 = v16 - (_WORD)v26;
  }
  return result;
}
