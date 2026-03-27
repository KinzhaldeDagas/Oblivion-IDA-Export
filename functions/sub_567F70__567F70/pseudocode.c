void __thiscall sub_567F70(_DWORD *this)
{
  UInt32 v3; // ebx
  UInt32 *v4; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // ecx
  UInt32 v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  UInt32 v18; // edx
  int v19; // [esp-8h] [ebp-34h]
  int v20; // [esp-8h] [ebp-34h]
  int v21; // [esp-8h] [ebp-34h]
  size_t v22; // [esp-4h] [ebp-30h]
  size_t v23; // [esp-4h] [ebp-30h]
  int v24; // [esp-4h] [ebp-30h]
  size_t v25; // [esp-4h] [ebp-30h]
  size_t v26; // [esp-4h] [ebp-30h]
  int v27; // [esp-4h] [ebp-30h]
  int v28; // [esp-4h] [ebp-30h]
  _BYTE a1[25]; // [esp+13h] [ebp-19h] BYREF

  *(_DWORD *)&a1[1] = 0;
  v3 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v22) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1[5], v22);
    if ( *(_DWORD *)&a1[5] != 0x4B4F4C42 )
    {
      v4 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v4 )
      {
        v5 = TESForm_LookupByFormID(*v4);
        v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v5->vtbl->GetEditorName)(
                             v5,
                             *((unsigned __int8 *)v4 + 9),
                             *(UInt32 *)((char *)v4 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\Package.cpp",
          0xEC0,
          *v4,
          v6,
          v19,
          v24);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\Package.cpp",
          0xEC0,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v3 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v23) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1[1], v23);
  }
  LODWORD(v22) = 8;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 7, v22);
  LODWORD(v25) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, v25);
  if ( (a1[0] & 1) != 0 )
  {
    v7 = (_DWORD *)FormHeapAlloc(0xCu);
    *(_DWORD *)&a1[9] = v7;
    *(_DWORD *)&a1[0x15] = 0;
    if ( v7 )
      v8 = TESPackage_LocationData_constr(v7);
    else
      v8 = 0;
    *(_DWORD *)&a1[0x15] = 0xFFFFFFFF;
    *(this + 9) = v8;
    sub_569A40(v8);
  }
  if ( (a1[0] & 2) != 0 )
  {
    v9 = (_DWORD *)FormHeapAlloc(0xCu);
    *(_DWORD *)&a1[9] = v9;
    *(_DWORD *)&a1[0x15] = 1;
    if ( v9 )
      v10 = TESPackage_TargetData_constr(v9);
    else
      v10 = 0;
    *(_DWORD *)&a1[0x15] = 0xFFFFFFFF;
    *(this + 0xA) = v10;
    sub_56A020(v10);
  }
  LODWORD(v26) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 6, v26);
  if ( sub_45A170() )
  {
    v11 = SaveLoad_CurrentSavegame;
    v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12);
      v15 = *(unsigned __int16 *)&a1[1] + v3;
      if ( v13 <= v15 )
      {
        if ( v13 < v15 )
        {
          v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)(
                                v14,
                                *((unsigned __int8 *)v12 + 9),
                                *(UInt32 *)((char *)v12 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v3 + *(unsigned __int16 *)&a1[1] - v13,
            "..\\TES Shared\\Package.cpp",
            0xED7,
            *v12,
            v17,
            v21,
            v28);
        }
      }
      else
      {
        v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)(
                              v14,
                              *((unsigned __int8 *)v12 + 9),
                              *(UInt32 *)((char *)v12 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v13 - *(unsigned __int16 *)&a1[1] - v3,
          "..\\TES Shared\\Package.cpp",
          0xED7,
          *v12,
          v16,
          v20,
          v27);
      }
    }
    else
    {
      v18 = *(unsigned __int16 *)&a1[1] + v3;
      if ( v13 <= v18 )
      {
        if ( v13 < v18 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v3 + *(unsigned __int16 *)&a1[1] - v13,
            "..\\TES Shared\\Package.cpp",
            0xED7,
            LOBYTE(v11[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v13 - *(unsigned __int16 *)&a1[1] - v3,
          "..\\TES Shared\\Package.cpp",
          0xED7,
          LOBYTE(v11[1].createdObjectList.next));
      }
    }
  }
}
