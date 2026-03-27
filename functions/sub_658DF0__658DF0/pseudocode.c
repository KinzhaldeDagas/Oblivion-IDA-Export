char __userpurge sub_658DF0@<al>(int a1@<ecx>, int a2@<ebx>, int a3, int Dst, int a5)
{
  UInt32 v6; // ebx
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  UInt32 v10; // eax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // ecx
  const char *v15; // eax
  const char *v16; // eax
  UInt32 v17; // edx
  int v19; // [esp-8h] [ebp-18h]
  int v20; // [esp-8h] [ebp-18h]
  int v21; // [esp-8h] [ebp-18h]
  size_t v22; // [esp-4h] [ebp-14h]
  size_t v23; // [esp-4h] [ebp-14h]
  int v24; // [esp-4h] [ebp-14h]
  int v25; // [esp-4h] [ebp-14h]
  int v26; // [esp-4h] [ebp-14h]

  sub_647450((TESForm **)a1, a2, *(float *)&a3, Dst, a5);
  v6 = 0;
  a5 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v22) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v22);
    if ( Dst != 0x4B4F4C42 )
    {
      v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v7 )
      {
        v8 = TESForm_LookupByFormID(*v7);
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)(
                             v8,
                             *((unsigned __int8 *)v7 + 9),
                             *(UInt32 *)((char *)v7 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\MiddleLowProcess.cpp",
          0x254,
          *v7,
          v9,
          v19,
          v24);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\MiddleLowProcess.cpp",
          0x254,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v23) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a5, v23);
  }
  LODWORD(v22) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(a1 + 0x90), v22);
  if ( (a3 & 0x100000) != 0 )
    AVCollection_Load((_DWORD *)(a1 + 0x94));
  LOBYTE(v10) = sub_45A170();
  if ( (_BYTE)v10 )
  {
    v11 = SaveLoad_CurrentSavegame;
    v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12);
      v10 = v6 + (unsigned __int16)a5;
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
                          v6 + (unsigned __int16)a5 - v13,
                          ".\\AI\\MiddleLowProcess.cpp",
                          0x25D,
                          *v12,
                          v16,
                          v21,
                          v26);
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
                        v13 - (unsigned __int16)a5 - v6,
                        ".\\AI\\MiddleLowProcess.cpp",
                        0x25D,
                        *v12,
                        v15,
                        v20,
                        v25);
      }
    }
    else
    {
      LOBYTE(v10) = a5;
      v17 = (unsigned __int16)a5 + v6;
      if ( v13 <= v17 )
      {
        if ( v13 < v17 )
          LOBYTE(v10) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          v6 + (unsigned __int16)a5 - v13,
                          ".\\AI\\MiddleLowProcess.cpp",
                          0x25D,
                          LOBYTE(v11[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v10) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v13 - (unsigned __int16)a5 - v6,
                        ".\\AI\\MiddleLowProcess.cpp",
                        0x25D,
                        LOBYTE(v11[1].createdObjectList.next));
      }
    }
  }
  return v10;
}
