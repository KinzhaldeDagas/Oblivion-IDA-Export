char __userpurge BoundItemEffect_Load@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  UInt32 v6; // ebp
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  _DWORD *v10; // eax
  int *v11; // eax
  unsigned int **v12; // edi
  _DWORD *v13; // eax
  int *v14; // eax
  int v15; // edx
  unsigned int v16; // esi
  TESSaveLoad *v17; // ecx
  UInt32 v18; // eax
  TESSaveLoad *v19; // ecx
  UInt32 *v20; // edi
  UInt32 v21; // esi
  TESForm *v22; // ecx
  const char *v23; // eax
  const char *v24; // eax
  UInt32 v25; // edx
  int v27; // [esp-8h] [ebp-38h]
  int v28; // [esp-8h] [ebp-38h]
  int v29; // [esp-8h] [ebp-38h]
  size_t v30; // [esp-4h] [ebp-34h]
  size_t v31; // [esp-4h] [ebp-34h]
  int v32; // [esp-4h] [ebp-34h]
  size_t v33; // [esp-4h] [ebp-34h]
  size_t v34; // [esp-4h] [ebp-34h]
  int v35; // [esp-4h] [ebp-34h]
  int v36; // [esp-4h] [ebp-34h]
  int v37; // [esp+14h] [ebp-1Ch] BYREF
  int v38; // [esp+18h] [ebp-18h]
  _DWORD Dst[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v40; // [esp+2Ch] [ebp-4h]

  AssociatedItemEffect_Load(a5);
  v6 = 0;
  v37 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v30) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v30);
    if ( Dst[0] != 0x4B4F4C42 )
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
          ".\\Magic\\BoundItemEffect.cpp",
          0x2E4,
          *v7,
          v9,
          v27,
          v32);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Magic\\BoundItemEffect.cpp",
          0x2E4,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v31) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v37, v31);
  }
  LODWORD(v30) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a5, v30);
  if ( (_BYTE)a5 )
  {
    v10 = (_DWORD *)FormHeapAlloc(0xCu);
    v38 = (int)v10;
    v40 = 0;
    if ( v10 )
      v11 = sub_4842D0(v10);
    else
      v11 = 0;
    v40 = 0xFFFFFFFF;
    *(_DWORD *)(a1 + 0x3C) = v11;
    ContainerEntryExtraData_LoadModified(v11, a2, a3, a4);
  }
  v12 = (unsigned int **)(a1 + 0x40);
  v38 = 0x10;
  do
  {
    LODWORD(v33) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a5, v33);
    if ( (_BYTE)a5 )
    {
      v13 = (_DWORD *)FormHeapAlloc(0xCu);
      Dst[1] = v13;
      v40 = 1;
      if ( v13 )
        v14 = sub_4842D0(v13);
      else
        v14 = 0;
      v40 = 0xFFFFFFFF;
      *v12 = (unsigned int *)v14;
      ContainerEntryExtraData_LoadModified(v14, a2, a3, a4);
      v16 = (unsigned int)*v12;
      if ( !(*v12)[2] )
      {
        if ( v16 )
        {
          ContainerEntryExtraData_DestroyDataTable(*v12, v15);
          FormHeapFree(v16);
        }
        *v12 = 0;
      }
    }
    ++v12;
    --v38;
  }
  while ( v38 );
  *(_BYTE *)(a1 + 0x84) = 1;
  v17 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x41u )
  {
    LODWORD(v33) = 4;
    SaveLoad_LoadData((int)v17, (void *)(a1 + 0x80), v33);
    LODWORD(v34) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(a1 + 0x84), v34);
    v17 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v17[1].createdObjectList.next) >= 0x6Bu )
  {
    LODWORD(v33) = 1;
    SaveLoad_LoadData((int)v17, (void *)(a1 + 0x88), v33);
  }
  LOBYTE(v18) = sub_45A170();
  if ( (_BYTE)v18 )
  {
    v19 = SaveLoad_CurrentSavegame;
    v20 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v21 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v20 )
    {
      v22 = TESForm_LookupByFormID(*v20);
      v18 = (unsigned __int16)v37 + v6;
      if ( v21 <= v18 )
      {
        if ( v21 < v18 )
        {
          v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v22->vtbl->GetEditorName)(
                                v22,
                                *((unsigned __int8 *)v20 + 9),
                                *(UInt32 *)((char *)v20 + 5));
          LOBYTE(v18) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          v6 + (unsigned __int16)v37 - v21,
                          ".\\Magic\\BoundItemEffect.cpp",
                          0x30C,
                          *v20,
                          v24,
                          v29,
                          v36);
        }
      }
      else
      {
        v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v22->vtbl->GetEditorName)(
                              v22,
                              *((unsigned __int8 *)v20 + 9),
                              *(UInt32 *)((char *)v20 + 5));
        LOBYTE(v18) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        v21 - (unsigned __int16)v37 - v6,
                        ".\\Magic\\BoundItemEffect.cpp",
                        0x30C,
                        *v20,
                        v23,
                        v28,
                        v35);
      }
    }
    else
    {
      LOBYTE(v18) = v37;
      v25 = (unsigned __int16)v37 + v6;
      if ( v21 <= v25 )
      {
        if ( v21 < v25 )
          LOBYTE(v18) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          v6 + (unsigned __int16)v37 - v21,
                          ".\\Magic\\BoundItemEffect.cpp",
                          0x30C,
                          LOBYTE(v19[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v18) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v21 - (unsigned __int16)v37 - v6,
                        ".\\Magic\\BoundItemEffect.cpp",
                        0x30C,
                        LOBYTE(v19[1].createdObjectList.next));
      }
    }
  }
  return v18;
}
