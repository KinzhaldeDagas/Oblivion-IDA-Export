void __userpurge TESObjectCELL_SaveModifiedForm(ExtraDataList *this@<ecx>, double a2@<st0>, TESForm Src)
{
  TESFormVtbl *vtbl; // ebx
  TESSaveLoad *v5; // ecx
  UInt32 v6; // ebp
  TESSaveLoad *v7; // ecx
  BSExtraDataVtbl *v8; // eax
  char *v9; // edi
  BSExtraDataVtbl *Owner; // eax
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  unsigned int v15; // esi
  int v16; // [esp-Ch] [ebp-24h]
  int v17; // [esp-8h] [ebp-20h]
  size_t v18; // [esp-4h] [ebp-1Ch]
  size_t v19; // [esp-4h] [ebp-1Ch]
  size_t v20; // [esp-4h] [ebp-1Ch]
  const char *v21; // [esp-4h] [ebp-1Ch]
  _WORD *v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h] BYREF

  vtbl = Src.vtbl;
  if ( ((int)Src.vtbl & 0x8000000) != 0 )
  {
    Src.vtbl = (TESFormVtbl *)ExtraDataList__GetDetachTime(this + 2);
    LODWORD(v18) = 4;
    TESForm_SaveDataToCurrentSaveGame(&Src, v18);
  }
  TESForm_SaveModifiedForm((TESForm *)this, (char)vtbl);
  v5 = SaveLoad_CurrentSavegame;
  v23 = 0;
  v6 = v5->unk000[5];
  v22 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v18) = 4;
    v7 = SaveLoad_CurrentSavegame;
    Src.vtbl = (TESFormVtbl *)0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v18);
    LODWORD(v19) = 2;
    v22 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v23, v19);
  }
  if ( ((unsigned __int8)vtbl & 8) != 0 )
  {
    LODWORD(v18) = 1;
    LOBYTE(Src.vtbl) = *((_BYTE *)this + 0x25) | *((_BYTE *)this + 0x24) & 0x60;
    TESForm_SaveDataToCurrentSaveGame(&Src, v18);
  }
  if ( ((unsigned int)vtbl & 0x10000000) != 0 )
  {
    v8 = sub_420B50(this + 2);
    (*((void (__thiscall **)(BSExtraDataVtbl *, _DWORD))v8->Destructor + 3))(v8, 0);
  }
  if ( ((unsigned __int8)vtbl & 0x10) != 0 )
  {
    v9 = *((char **)this + 7);
    if ( !v9 )
      v9 = EmptyString;
    LODWORD(v18) = 1;
    LOBYTE(Src.vtbl) = strlen(v9);
    TESForm_SaveDataToCurrentSaveGame(&Src, v18);
    if ( LOBYTE(Src.vtbl) )
    {
      LODWORD(v20) = LOBYTE(Src.vtbl);
      TESForm_SaveDataToCurrentSaveGame((TESForm *)v9, v20);
    }
  }
  if ( ((unsigned __int8)vtbl & 0x20) != 0 )
  {
    Owner = ExtraDataList_GetOwner(this + 2);
    Src.vtbl = 0;
    if ( Owner )
      Src.vtbl = (TESFormVtbl *)Owner[1].CompareTo;
    TESForm_SaveFormIDToCurrentSaveGame((int)&Src, 4u);
  }
  if ( ((unsigned int)vtbl & 0x1000000) != 0 )
    sub_4E5B10(*((_DWORD **)this + 0x11), a2);
  if ( Global_DebugSaveBuffer )
  {
    v11 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v12 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11);
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)(
                            v13,
                            *(UInt32 *)((char *)v11 + 5),
                            0x3174,
                            "..\\TES Shared\\TESObjectCELL.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v6,
        *v11,
        v14,
        v16,
        v17,
        v21);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v12 - v6, 0x3174, "..\\TES Shared\\TESObjectCELL.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v15 > (unsigned int)v22 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESObjectCELL.cpp",
        0x3174);
    *v22 = v15 - (_WORD)v22;
  }
}
