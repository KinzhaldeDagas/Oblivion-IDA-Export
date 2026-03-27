void __userpurge TESObjectREFR_SaveModifiedForm(TESChildCELL *this@<ecx>, double a2@<st0>, TESForm Src)
{
  int vtbl; // ebx
  TESSaveLoad *v5; // ecx
  UInt32 v6; // ebp
  TESSaveLoad *v7; // ecx
  int *ContainerChanges; // eax
  unsigned __int16 v9; // ax
  UInt32 *v10; // edi
  UInt32 v11; // esi
  TESForm *v12; // eax
  const char *v13; // eax
  unsigned int v14; // esi
  int v15; // [esp-Ch] [ebp-38h]
  int v16; // [esp-8h] [ebp-34h]
  _BYTE v17[24]; // [esp-4h] [ebp-30h]
  size_t v18; // [esp-4h] [ebp-30h]
  const char *v19; // [esp-4h] [ebp-30h]
  int v20; // [esp+14h] [ebp-18h] BYREF
  char v21[2]; // [esp+18h] [ebp-14h] BYREF
  __int16 v22; // [esp+1Ah] [ebp-12h]
  int v23; // [esp+1Ch] [ebp-10h]
  int v24; // [esp+20h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-8h]
  int v26; // [esp+28h] [ebp-4h]

  vtbl = (int)Src.vtbl;
  TESForm_SaveModifiedForm((TESForm *)this, (char)Src.vtbl);
  v5 = SaveLoad_CurrentSavegame;
  v20 = 0;
  v6 = v5->unk000[5];
  *(_DWORD *)&v17[0x14] = 0;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    *(_DWORD *)v17 = 4;
    Src.vtbl = (TESFormVtbl *)0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, *(size_t *)v17);
    LODWORD(v18) = 2;
    *(_DWORD *)&v17[0x14] = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v20, v18);
  }
  if ( (vtbl & 0x8000000) != 0 )
  {
    ContainerChanges = (int *)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x11));
    sub_488650(ContainerChanges, a2);
  }
  if ( (vtbl & 0x177577E0) != 0 || (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
    ExtraDataList_SaveGame((ExtraDataList *)(this + 0x11), a2, vtbl, (TESObjectREFR *)this);
  if ( (vtbl & 0x2000000) != 0 && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
  {
    *(_DWORD *)v17 = 2;
    Src.vtbl = (TESFormVtbl *)(unsigned __int16)sub_4E0840(this);
    TESForm_SaveDataToCurrentSaveGame(&Src, *(size_t *)v17);
    if ( LOWORD(Src.vtbl) )
      sub_4E08D0(this, 0);
  }
  if ( (vtbl & 8) != 0 )
  {
    v21[0] = 0;
    v22 = 0;
    LOWORD(v23) = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v9 = sub_4E0970(this, v21);
    *(_DWORD *)v17 = 2;
    Src.vtbl = (TESFormVtbl *)v9;
    TESForm_SaveDataToCurrentSaveGame(&Src, *(size_t *)v17);
    if ( LOWORD(Src.vtbl) )
    {
      *(_DWORD *)v17 = v21;
      sub_4E0A40(this, (int)this, *(TESForm *)v17);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x43u && (vtbl & 0x10) != 0 )
  {
    *(_DWORD *)v17 = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0xE), *(size_t *)v17);
  }
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v11 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v10 )
    {
      v12 = TESForm_LookupByFormID(*v10);
      v13 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v12->vtbl->GetEditorName)(
                            v12,
                            *(UInt32 *)((char *)v10 + 5),
                            0x713,
                            "..\\TES Shared\\TESObjectREFR.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v11 - v6,
        *v10,
        v13,
        v15,
        v16,
        v19);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v11 - v6, 0x713, "..\\TES Shared\\TESObjectREFR.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v14 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v14 > *(_DWORD *)&v17[0x14] + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESObjectREFR.cpp",
        0x713);
    **(_WORD **)&v17[0x14] = v14 - *(_WORD *)&v17[0x14];
  }
}
