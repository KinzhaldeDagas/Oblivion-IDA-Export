char __thiscall sub_4410D0(char *this)
{
  TESSaveLoad *v2; // ecx
  UInt32 v3; // ebp
  char *v4; // esi
  int v5; // ecx
  char *i; // eax
  int *v7; // edi
  int v8; // eax
  bool v9; // zf
  TESSaveLoad *v10; // ecx
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  char result; // al
  _WORD *v16; // edi
  unsigned int v17; // esi
  int v18; // [esp-Ch] [ebp-2Ch]
  int v19; // [esp-8h] [ebp-28h]
  size_t v20; // [esp-4h] [ebp-24h]
  size_t v21; // [esp-4h] [ebp-24h]
  size_t v22; // [esp-4h] [ebp-24h]
  const char *v23; // [esp-4h] [ebp-24h]
  int Src; // [esp+10h] [ebp-10h] BYREF
  UInt32 v25; // [esp+14h] [ebp-Ch]
  int v26; // [esp+18h] [ebp-8h] BYREF
  int v27; // [esp+1Ch] [ebp-4h] BYREF

  v2 = SaveLoad_CurrentSavegame;
  v26 = 0;
  v3 = v2->unk000[5];
  v25 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v20) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData(&Src, v20);
    LODWORD(v21) = 2;
    v25 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData(&v26, v21);
  }
  v4 = this + 0x8C;
  v5 = 0;
  for ( i = v4; i; i = *((char **)i + 1) )
  {
    if ( *(_DWORD *)i )
      ++v5;
  }
  v27 = v5;
  LODWORD(v20) = 4;
  SaveLoad_SaveData(&v27, v20);
  for ( ; v4; v4 = *((char **)v4 + 1) )
  {
    v7 = *(int **)v4;
    if ( *(_DWORD *)v4 )
    {
      v8 = *v7;
      v9 = *v7 == 0;
      Src = 0;
      if ( !v9 )
        Src = *(_DWORD *)(v8 + 0xC);
      SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&Src, 4u);
      LODWORD(v22) = 2;
      SaveLoad_SaveData(v7 + 1, v22);
    }
  }
  v10 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x32u )
  {
    LODWORD(v22) = 4;
    SaveLoad_SaveData(&flt_B33A30, v22);
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
                            0x15F0,
                            "..\\TES Shared\\TES.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v3,
        *v11,
        v14,
        v18,
        v19,
        v23);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v12 - v3, 0x15F0, "..\\TES Shared\\TES.cpp");
    }
  }
  result = sub_45A170();
  if ( result )
  {
    v16 = (_WORD *)v25;
    v17 = SaveLoad_CurrentSavegame->unk000[5];
    result = v25 - 1;
    if ( v17 > v25 + 0xFFFF )
      result = PrintError(
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 "..\\TES Shared\\TES.cpp",
                 0x15F0);
    *v16 = v17 - (_WORD)v16;
  }
  return result;
}
