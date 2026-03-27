int __thiscall sub_626230(_DWORD *this)
{
  UInt32 *v3; // edi
  TESForm *v4; // eax
  const char *v5; // eax
  int v7; // [esp-8h] [ebp-58h]
  size_t v8; // [esp-4h] [ebp-54h]
  size_t v9; // [esp-4h] [ebp-54h]
  int v10; // [esp-4h] [ebp-54h]
  size_t v11; // [esp-4h] [ebp-54h]
  int v12; // [esp+4h] [ebp-4Ch]
  int v13; // [esp+8h] [ebp-48h]
  int v14; // [esp+Ch] [ebp-44h]
  int v15; // [esp+20h] [ebp-30h] BYREF
  int Dst; // [esp+24h] [ebp-2Ch] BYREF
  TESForm a1; // [esp+28h] [ebp-28h] BYREF

  sub_567F70(this);
  v15 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v8) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v8);
    if ( Dst != 0x4B4F4C42 )
    {
      v3 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v3 )
      {
        v4 = TESForm_LookupByFormID(*v3);
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)(
                             v4,
                             *((unsigned __int8 *)v3 + 9),
                             *(UInt32 *)((char *)v3 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\DialoguePackage.cpp",
          0x182,
          *v3,
          v5,
          v7,
          v10);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\DialoguePackage.cpp",
          0x182,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    LODWORD(v9) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v15, v9);
  }
  LODWORD(v8) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x11), v8);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Au )
  {
    LODWORD(v11) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x13), v11);
  }
  LODWORD(v11) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame(&a1, v11, v12, v13, v14);
  return sub_626353(this, v15);
}
