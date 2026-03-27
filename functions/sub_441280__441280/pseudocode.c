char __thiscall sub_441280(int *this)
{
  UInt32 v2; // ebx
  UInt32 *v3; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  TESSaveLoad *v6; // ecx
  unsigned int v7; // esi
  TESForm *v8; // eax
  void *v9; // eax
  UInt32 v10; // eax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // ecx
  const char *v15; // eax
  const char *v16; // eax
  UInt32 v17; // edx
  int v19; // [esp-10h] [ebp-30h]
  int v20; // [esp-10h] [ebp-30h]
  size_t v21; // [esp-Ch] [ebp-2Ch]
  size_t v22; // [esp-Ch] [ebp-2Ch]
  int v23; // [esp-Ch] [ebp-2Ch]
  int v24; // [esp-Ch] [ebp-2Ch]
  int v25; // [esp-8h] [ebp-28h]
  size_t v26; // [esp-4h] [ebp-24h]
  size_t v27; // [esp-4h] [ebp-24h]
  int v28; // [esp-4h] [ebp-24h]
  size_t v29; // [esp-4h] [ebp-24h]
  unsigned __int16 v30; // [esp+4h] [ebp-1Ch]
  unsigned int v31; // [esp+8h] [ebp-18h]
  int v32; // [esp+Ch] [ebp-14h] BYREF
  int a1; // [esp+10h] [ebp-10h] BYREF
  int Dst; // [esp+14h] [ebp-Ch] BYREF
  _BYTE v35[8]; // [esp+18h] [ebp-8h] BYREF

  v32 = 0;
  v2 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v26) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v26);
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
          "..\\TES Shared\\TES.cpp",
          0x15F6,
          *v3,
          v5,
          v25,
          v28);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TES.cpp",
          0x15F6,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v2 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v27) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v32, v27);
  }
  v6 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x14u )
  {
    LODWORD(v26) = 4;
    SaveLoad_LoadData((int)v6, &a1, v26);
    v7 = 0;
    if ( a1 )
    {
      do
      {
        LODWORD(v29) = 4;
        SaveLoad_LoadFormID(v35, v29);
        LODWORD(v22) = 2;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v22);
        if ( a1 )
        {
          v8 = TESForm_LookupByFormID(a1);
          v9 = OblivionDynamicCast(
                 v8,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESActorBase `RTTI Type Descriptor',
                 0);
          if ( v9 )
            sub_440FA0(this, (int)v9, Dst);
        }
        ++v7;
      }
      while ( v7 < v31 );
    }
    v6 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v6[1].createdObjectList.next) >= 0x32u )
  {
    LODWORD(v21) = 4;
    SaveLoad_LoadData((int)v6, &flt_B33A30, v21);
  }
  LOBYTE(v10) = sub_45A170();
  if ( (_BYTE)v10 )
  {
    v11 = SaveLoad_CurrentSavegame;
    v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12);
      v10 = v30 + v2;
      if ( v13 <= v10 )
      {
        if ( v13 < v10 )
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)(
                                v14,
                                *((unsigned __int8 *)v12 + 9),
                                *(UInt32 *)((char *)v12 + 5));
          LOBYTE(v10) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          v2 + v30 - v13,
                          "..\\TES Shared\\TES.cpp",
                          0x16E4,
                          *v12,
                          v16,
                          v20,
                          v24);
        }
      }
      else
      {
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)(
                              v14,
                              *((unsigned __int8 *)v12 + 9),
                              *(UInt32 *)((char *)v12 + 5));
        LOBYTE(v10) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        v13 - v30 - v2,
                        "..\\TES Shared\\TES.cpp",
                        0x16E4,
                        *v12,
                        v15,
                        v19,
                        v23);
      }
    }
    else
    {
      LOBYTE(v10) = v30;
      v17 = v30 + v2;
      if ( v13 <= v17 )
      {
        if ( v13 < v17 )
          LOBYTE(v10) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          v2 + v30 - v13,
                          "..\\TES Shared\\TES.cpp",
                          0x16E4,
                          LOBYTE(v11[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v10) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v13 - v30 - v2,
                        "..\\TES Shared\\TES.cpp",
                        0x16E4,
                        LOBYTE(v11[1].createdObjectList.next));
      }
    }
  }
  return v10;
}
