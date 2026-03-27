void __thiscall sub_4E5CC0(_DWORD *this)
{
  UInt32 v3; // ebx
  UInt32 *v4; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  unsigned int i; // esi
  int v8; // eax
  _BYTE *v9; // ecx
  TESSaveLoad *v10; // ecx
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // ecx
  UInt32 v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  UInt32 v17; // edx
  int v18; // [esp-8h] [ebp-24h]
  int v19; // [esp-8h] [ebp-24h]
  int v20; // [esp-8h] [ebp-24h]
  size_t v21; // [esp-4h] [ebp-20h]
  size_t v22; // [esp-4h] [ebp-20h]
  int v23; // [esp-4h] [ebp-20h]
  size_t v24; // [esp-4h] [ebp-20h]
  int v25; // [esp-4h] [ebp-20h]
  int v26; // [esp-4h] [ebp-20h]
  unsigned __int16 v27; // [esp+Ch] [ebp-10h] BYREF
  unsigned __int16 v28; // [esp+10h] [ebp-Ch] BYREF
  int v29; // [esp+14h] [ebp-8h] BYREF
  int Dst; // [esp+18h] [ebp-4h] BYREF

  v29 = 0;
  v3 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v21) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v21);
    if ( Dst != 0x4B4F4C42 )
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
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD63,
          *v4,
          v6,
          v18,
          v23);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD63,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v3 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v22) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v29, v22);
  }
  LODWORD(v21) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v27, v21);
  for ( i = 0; i < v27; ++i )
  {
    LODWORD(v24) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v28, v24);
    v8 = *(this + 9);
    if ( v8 )
    {
      if ( v28 < *(_WORD *)(v8 + 0xA) )
      {
        v9 = *(_BYTE **)(*(_DWORD *)(v8 + 4) + 4 * v28);
        if ( v9 )
          sub_67ED80(v9, 1);
      }
    }
  }
  if ( sub_45A170() )
  {
    v10 = SaveLoad_CurrentSavegame;
    v11 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v12 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11);
      v14 = (unsigned __int16)v29 + v3;
      if ( v12 <= v14 )
      {
        if ( v12 < v14 )
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)(
                                v13,
                                *((unsigned __int8 *)v11 + 9),
                                *(UInt32 *)((char *)v11 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v3 + (unsigned __int16)v29 - v12,
            "..\\TES Shared\\TESPathGrid.cpp",
            0xD75,
            *v11,
            v16,
            v20,
            v26);
        }
      }
      else
      {
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)(
                              v13,
                              *((unsigned __int8 *)v11 + 9),
                              *(UInt32 *)((char *)v11 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v12 - (unsigned __int16)v29 - v3,
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD75,
          *v11,
          v15,
          v19,
          v25);
      }
    }
    else
    {
      v17 = (unsigned __int16)v29 + v3;
      if ( v12 <= v17 )
      {
        if ( v12 < v17 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v3 + (unsigned __int16)v29 - v12,
            "..\\TES Shared\\TESPathGrid.cpp",
            0xD75,
            LOBYTE(v10[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v12 - (unsigned __int16)v29 - v3,
          "..\\TES Shared\\TESPathGrid.cpp",
          0xD75,
          LOBYTE(v10[1].createdObjectList.next));
      }
    }
  }
}
