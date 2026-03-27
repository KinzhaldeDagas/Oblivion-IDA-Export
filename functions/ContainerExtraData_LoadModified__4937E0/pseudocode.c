void __usercall ContainerExtraData_LoadModified(int ***a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int ***v4; // edi
  UInt32 v5; // ebx
  UInt32 *v6; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  TESSaveLoad *v9; // ecx
  int *v10; // eax
  int *v11; // ebx
  int **v12; // esi
  int **v13; // eax
  int v14; // edi
  ExtraDataList *v15; // esi
  TESSaveLoad *v16; // ecx
  UInt32 *v17; // edi
  UInt32 v18; // esi
  TESForm *v19; // ecx
  UInt32 v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  UInt32 v23; // edx
  int v24; // [esp-8h] [ebp-30h]
  int v25; // [esp-8h] [ebp-30h]
  int v26; // [esp-8h] [ebp-30h]
  size_t v27; // [esp-4h] [ebp-2Ch]
  size_t v28; // [esp-4h] [ebp-2Ch]
  int v29; // [esp-4h] [ebp-2Ch]
  int v30; // [esp-4h] [ebp-2Ch]
  int v31; // [esp-4h] [ebp-2Ch]
  unsigned __int16 v32; // [esp+10h] [ebp-18h] BYREF
  int v33; // [esp+14h] [ebp-14h] BYREF
  UInt32 v34; // [esp+18h] [ebp-10h]
  int v35; // [esp+1Ch] [ebp-Ch]
  int Dst; // [esp+20h] [ebp-8h] BYREF
  int v37; // [esp+24h] [ebp-4h]

  v4 = a1;
  v5 = 0;
  v37 = (int)a1;
  v33 = 0;
  v34 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v27) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v27);
    if ( Dst != 0x4B4F4C42 )
    {
      v6 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v6 )
      {
        v7 = TESForm_LookupByFormID(*v6);
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)(
                             v7,
                             *((unsigned __int8 *)v6 + 9),
                             *(UInt32 *)((char *)v6 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\InventoryChanges.cpp",
          0x2154,
          *v6,
          v8,
          v24,
          v29);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\InventoryChanges.cpp",
          0x2154,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v9 = SaveLoad_CurrentSavegame;
    LODWORD(v28) = 2;
    v34 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v9, &v33, v28);
    v5 = v34;
  }
  LODWORD(v27) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v32, v27);
  v35 = 0;
  if ( v32 )
  {
    while ( 1 )
    {
      v10 = (int *)FormHeapAlloc(0xCu);
      if ( v10 )
      {
        v10[2] = 0;
        *v10 = 0;
        v10[1] = 0;
        v11 = v10;
      }
      else
      {
        v11 = 0;
      }
      ContainerEntryExtraData_LoadModified(v11, a2, a3, a4);
      if ( !v11[2] )
      {
        v14 = *v11;
        while ( v14 )
        {
          v15 = *(ExtraDataList **)v14;
          if ( !*(_DWORD *)v14 )
            break;
          v14 = *(_DWORD *)(v14 + 4);
          BaseExtraList_Clear(v15, 1);
          (*(void (__thiscall **)(ExtraDataList *, int))v15->vtbl)(v15, 1);
        }
        if ( *v11 )
          BSSimpleList_Clear((_DWORD *)*v11);
        FormHeapFree(*v11);
        *v11 = 0;
        FormHeapFree((unsigned int)v11);
        v4 = (int ***)v37;
        goto LABEL_23;
      }
      v12 = *v4;
      if ( !**v4 )
        goto LABEL_16;
      v13 = (int **)FormHeapAlloc(8u);
      if ( !v13 )
      {
        *(_DWORD *)4 = v12[1];
        v12[1] = 0;
LABEL_16:
        *v12 = v11;
        goto LABEL_23;
      }
      *v13 = *v12;
      v13[1] = 0;
      v13[1] = v12[1];
      v12[1] = (int *)v13;
      *v12 = v11;
LABEL_23:
      if ( ++v35 >= v32 )
      {
        v5 = v34;
        break;
      }
    }
  }
  sub_491CE0((int)v4, a3, a4);
  if ( sub_45A170() )
  {
    v16 = SaveLoad_CurrentSavegame;
    v17 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v17 )
    {
      v19 = TESForm_LookupByFormID(*v17);
      v20 = v5 + (unsigned __int16)v33;
      if ( v18 <= v20 )
      {
        if ( v18 < v20 )
        {
          v22 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v19->vtbl->GetEditorName)(
                                v19,
                                *((unsigned __int8 *)v17 + 9),
                                *(UInt32 *)((char *)v17 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v5 + (unsigned __int16)v33 - v18,
            "..\\TES Shared\\InventoryChanges.cpp",
            0x2167,
            *v17,
            v22,
            v26,
            v31);
        }
      }
      else
      {
        v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v19->vtbl->GetEditorName)(
                              v19,
                              *((unsigned __int8 *)v17 + 9),
                              *(UInt32 *)((char *)v17 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v18 - (unsigned __int16)v33 - v5,
          "..\\TES Shared\\InventoryChanges.cpp",
          0x2167,
          *v17,
          v21,
          v25,
          v30);
      }
    }
    else
    {
      v23 = (unsigned __int16)v33 + v5;
      if ( v18 <= v23 )
      {
        if ( v18 < v23 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v5 + (unsigned __int16)v33 - v18,
            "..\\TES Shared\\InventoryChanges.cpp",
            0x2167,
            LOBYTE(v16[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v18 - (unsigned __int16)v33 - v5,
          "..\\TES Shared\\InventoryChanges.cpp",
          0x2167,
          LOBYTE(v16[1].createdObjectList.next));
      }
    }
  }
}
