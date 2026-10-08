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
  int ***v37; // [esp+24h] [ebp-4h]

  v4 = a1; /*0x4937e7*/
  v5 = 0; /*0x4937f1*/
  v37 = a1; /*0x4937f3*/
  v33 = 0; /*0x4937f7*/
  v34 = 0; /*0x4937fb*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v27) = 4; /*0x493812*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v27); /*0x493819*/
    if ( Dst != 0x4B4F4C42 )
    {
      v6 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x49382d*/
      if ( v6 )
      {
        v7 = TESForm_LookupByFormID(*v6); /*0x49383a*/
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)( /*0x493855*/
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
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v9 = g_TESSaveLoadGame; /*0x493890*/
    LODWORD(v28) = 2; /*0x493899*/
    v34 = g_TESSaveLoadGame->unk000[5]; /*0x4938a0*/
    SaveLoad_LoadData((int)v9, &v33, v28); /*0x4938a4*/
    v5 = v34; /*0x4938a9*/
  }
  LODWORD(v27) = 2; /*0x4938b3*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &v32, v27); /*0x4938ba*/
  v35 = 0; /*0x4938c4*/
  if ( v32 ) /*0x4938c8*/
  {
    while ( 1 ) /*0x4938d2*/
    {
      v10 = (int *)FormHeapAlloc(0xCu); /*0x4938d2*/
      if ( v10 )                                // EnginePatch faithful-patch candidate: if FormHeapAlloc(0x0C) fails, original sets ebx=0 then calls ContainerEntryExtraData_LoadModified and dereferences [ebx+8]. This null-deref bug is assembly-confirmed. /*0x4938dc*/
      {
        v10[2] = 0; /*0x4938de*/
        *v10 = 0; /*0x4938e1*/
        v10[1] = 0; /*0x4938e3*/
        v11 = v10; /*0x4938e6*/
      }
      else
      {
        v11 = 0; /*0x4938ea*/
      }
      ContainerEntryExtraData_LoadModified(v11, a2, a3, a4); /*0x4938ee*/
      if ( !v11[2] ) /*0x4938f6*/
      {
        v14 = *v11;                             // Verified allocation-failure continuation for MEF v32: destroys EBX nested ExtraDataLists, frees EBX storage, reloads destination owner, then advances serialized-entry loop without mutating old list. /*0x49392f*/
        while ( v14 ) /*0x49392f*/
        {
          v15 = *(ExtraDataList **)v14; /*0x493935*/
          if ( !*(_DWORD *)v14 ) /*0x493935*/
            break; /*0x493939*/
          v14 = *(_DWORD *)(v14 + 4); /*0x49393b*/
          BaseExtraList_Clear(v15, 1); /*0x493942*/
          (*(void (__thiscall **)(ExtraDataList *, int))v15->vtbl)(v15, 1); /*0x493953*/
        }
        if ( *v11 ) /*0x493959*/
          BSSimpleList_Clear((_DWORD *)*v11); /*0x49395f*/
        FormHeapFree(*v11); /*0x493967*/
        *v11 = 0; /*0x49396d*/
        FormHeapFree((unsigned int)v11); /*0x49396f*/
        v4 = v37; /*0x493974*/
        goto LABEL_23; /*0x493974*/
      }
      v12 = *v4; /*0x4938f8*/
      if ( !**v4 ) /*0x4938fc*/
        goto LABEL_16; /*0x4938fc*/
      v13 = (int **)FormHeapAlloc(8u);          // MEF v32 memory/load guard candidate confirmed: FormHeapAlloc(8) creates only the destination list-link node after EBX entry data is fully loaded. /*0x493900*/
      if ( !v13 )                               // MEF v32 verified hook: on node allocation failure, route to existing cleanup at 0x49392F; non-null replays CMP/JZ/MOV and resumes at 0x49390E. /*0x49390a*/
      {
        *(_DWORD *)4 = v12[1]; /*0x493925*/
        v12[1] = 0; /*0x493928*/
LABEL_16:
        *v12 = v11; /*0x49392b*/
        goto LABEL_23; /*0x49392d*/
      }
      *v13 = *v12; /*0x49390e*/
      v13[1] = 0; /*0x493910*/
      v13[1] = v12[1]; /*0x493916*/
      v12[1] = (int *)v13; /*0x493919*/
      *v12 = v11; /*0x49391c*/
LABEL_23:
      if ( ++v35 >= v32 ) /*0x49398d*/
      {
        v5 = v34; /*0x493993*/
        break; /*0x493993*/
      }
    }
  }
  sub_491CE0((int)v4, a3, a4); /*0x493997*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4939a4*/
  {
    v16 = g_TESSaveLoadGame; /*0x4939b1*/
    v17 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x4939b7*/
    v18 = g_TESSaveLoadGame->unk000[5]; /*0x4939bf*/
    if ( v17 ) /*0x4939c2*/
    {
      v19 = TESForm_LookupByFormID(*v17); /*0x4939d0*/
      v20 = v5 + (unsigned __int16)v33; /*0x4939d7*/
      if ( v18 <= v20 ) /*0x4939de*/
      {
        if ( v18 < v20 ) /*0x493a20*/
        {
          v22 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v19->vtbl->GetEditorName)( /*0x493a37*/
                                v19,
                                *((unsigned __int8 *)v17 + 9),
                                *(UInt32 *)((char *)v17 + 5));
          PrintError( /*0x493a56*/
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
        v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v19->vtbl->GetEditorName)( /*0x4939f1*/
                              v19,
                              *((unsigned __int8 *)v17 + 9),
                              *(UInt32 *)((char *)v17 + 5));
        PrintError( /*0x493a10*/
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
      v23 = (unsigned __int16)v33 + v5; /*0x493a6b*/
      if ( v18 <= v23 ) /*0x493a70*/
      {
        if ( v18 < v23 ) /*0x493a9b*/
          PrintError( /*0x493ab6*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v5 + (unsigned __int16)v33 - v18,
            "..\\TES Shared\\InventoryChanges.cpp",
            0x2167,
            LOBYTE(v16[1].createdObjectList.next));
      }
      else
      {
        PrintError( /*0x493a8b*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v18 - (unsigned __int16)v33 - v5,
          "..\\TES Shared\\InventoryChanges.cpp",
          0x2167,
          LOBYTE(v16[1].createdObjectList.next));
      }
    }
  }
}
