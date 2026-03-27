char __thiscall sub_6B8750(const char **this)
{
  TESSaveLoad *v2; // ecx
  UInt32 v3; // ebp
  TESSaveLoad *v4; // ecx
  TESSaveLoad *v5; // ecx
  char *v6; // edi
  char *v7; // eax
  TESSaveLoad *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  char result; // al
  _WORD *v17; // edi
  unsigned int v18; // esi
  int v19; // [esp-Ch] [ebp-38h]
  int v20; // [esp-8h] [ebp-34h]
  size_t v21; // [esp-4h] [ebp-30h]
  size_t v22; // [esp-4h] [ebp-30h]
  size_t v23; // [esp-4h] [ebp-30h]
  size_t v24; // [esp-4h] [ebp-30h]
  size_t v25; // [esp-4h] [ebp-30h]
  const char *v26; // [esp-4h] [ebp-30h]
  unsigned __int8 v27; // [esp+13h] [ebp-19h] BYREF
  int v28; // [esp+14h] [ebp-18h] BYREF
  int v29; // [esp+18h] [ebp-14h] BYREF
  int v30; // [esp+1Ch] [ebp-10h] BYREF
  UInt32 v31; // [esp+20h] [ebp-Ch]
  int Src; // [esp+24h] [ebp-8h] BYREF
  int v33; // [esp+28h] [ebp-4h] BYREF

  v2 = SaveLoad_CurrentSavegame;
  v33 = 0;
  v3 = v2->unk000[5];
  v31 = 0;
  if ( sub_45A170() )
  {
    v4 = SaveLoad_CurrentSavegame;
    LODWORD(v21) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v4, &Src, v21);
    v5 = SaveLoad_CurrentSavegame;
    LODWORD(v22) = 2;
    v31 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v5, &v33, v22);
  }
  v6 = (char *)*this;
  v7 = (char *)&(*this)[strlen(*this) + 1];
  LODWORD(v21) = 1;
  v8 = SaveLoad_CurrentSavegame;
  v27 = (_BYTE)v7 - (*(_BYTE *)this + 1);
  SaveLoad_SaveData((int)v8, &v27, v21);
  if ( v27 )
  {
    LODWORD(v23) = v27;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v6, v23);
  }
  LODWORD(v23) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 2, v23);
  LODWORD(v24) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 8, v24);
  LODWORD(v25) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x21, v25);
  v9 = (int)*(this + 5);
  v28 = 0;
  if ( v9 )
    v28 = *(_DWORD *)(v9 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v28, 4u);
  v10 = (int)*(this + 9);
  v29 = 0;
  if ( v10 )
    v29 = *(_DWORD *)(v10 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v29, 4u);
  v11 = (int)*(this + 6);
  v30 = 0;
  if ( v11 )
    v30 = *(_DWORD *)(v11 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v30, 4u);
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
                            0x22F,
                            ".\\Dialogue\\MenuTopic.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v3,
        *v12,
        v15,
        v19,
        v20,
        v26);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v13 - v3, 0x22F, ".\\Dialogue\\MenuTopic.cpp");
    }
  }
  result = sub_45A170();
  if ( result )
  {
    v17 = (_WORD *)v31;
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    result = v31 - 1;
    if ( v18 > v31 + 0xFFFF )
      result = PrintError(
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 ".\\Dialogue\\MenuTopic.cpp",
                 0x22F);
    *v17 = v18 - (_WORD)v17;
  }
  return result;
}
