void __usercall ContainerEntryExtraData_LoadModified(
        int *ecx0@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>)
{
  int v5; // edi
  UInt32 v6; // ebp
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  TESForm *v10; // eax
  void *v11; // eax
  _DWORD *v12; // eax
  bool v13; // cc
  _DWORD *v14; // eax
  ExtraDataList *v15; // esi
  TESSaveLoad *v16; // ecx
  UInt32 *v17; // edi
  UInt32 v18; // esi
  TESForm *v19; // ecx
  UInt32 v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  UInt32 v23; // edx
  int v24; // [esp-10h] [ebp-44h]
  int v25; // [esp-10h] [ebp-44h]
  size_t v26; // [esp-Ch] [ebp-40h]
  size_t v27; // [esp-Ch] [ebp-40h]
  int v28; // [esp-Ch] [ebp-40h]
  int v29; // [esp-Ch] [ebp-40h]
  int v30; // [esp-8h] [ebp-3Ch]
  size_t v31; // [esp-4h] [ebp-38h]
  size_t v32; // [esp-4h] [ebp-38h]
  int v33; // [esp-4h] [ebp-38h]
  int v34; // [esp+4h] [ebp-30h]
  int v35; // [esp+8h] [ebp-2Ch]
  int v36; // [esp+Ch] [ebp-28h]
  unsigned __int16 v37; // [esp+Ch] [ebp-28h]
  int v38; // [esp+10h] [ebp-24h] BYREF
  _DWORD v39[2]; // [esp+14h] [ebp-20h] BYREF
  _DWORD *Dst; // [esp+1Ch] [ebp-18h] BYREF
  int v41; // [esp+20h] [ebp-14h] BYREF
  unsigned int v42; // [esp+28h] [ebp-Ch]

  v5 = 0;
  v39[0] = 0;
  v6 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v31) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v31);
    if ( Dst != (_DWORD *)0x4B4F4C42 )
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
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5B1,
          *v7,
          v9,
          v30,
          v33);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5B1,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v32) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v39, v32);
  }
  LODWORD(v31) = 4;
  SaveLoad_LoadFormID(&v41, v31, v34, v35, v36);
  LODWORD(v26) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 1, v26);
  v10 = TESForm_LookupByFormID(v39[1]);
  v11 = OblivionDynamicCast(
          v10,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
  LODWORD(v27) = 4;
  ecx0[2] = (int)v11;
  *ecx0 = 0;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v38, v27);
  if ( v38 )
  {
    v12 = (_DWORD *)FormHeapAlloc(8u);
    if ( v12 )
    {
      *v12 = 0;
      v12[1] = 0;
    }
    else
    {
      v12 = 0;
    }
    v13 = v38 <= 0;
    *ecx0 = (int)v12;
    if ( !v13 )
    {
      do
      {
        v14 = (_DWORD *)FormHeapAlloc(0x14u);
        Dst = v14;
        v15 = 0;
        v42 = 0;
        if ( v14 )
          v15 = (ExtraDataList *)ExtraDataList_constr(v14);
        v42 = 0xFFFFFFFF;
        ExtraDataList_LoadModified(v15, a2, a3, a4, 0x20, 0, 0);
        BSSimpleList_PushBack((_DWORD *)*ecx0, (int)v15);
        ++v5;
      }
      while ( v5 < v38 );
    }
  }
  if ( sub_45A170() )
  {
    v16 = SaveLoad_CurrentSavegame;
    v17 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v17 )
    {
      v19 = TESForm_LookupByFormID(*v17);
      v20 = v6 + v37;
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
            v6 + v37 - v18,
            "..\\TES Shared\\InventoryChanges.cpp",
            0x5D5,
            *v17,
            v22,
            v25,
            v29);
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
          v18 - v37 - v6,
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5D5,
          *v17,
          v21,
          v24,
          v28);
      }
    }
    else
    {
      v23 = v37 + v6;
      if ( v18 <= v23 )
      {
        if ( v18 < v23 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v6 + v37 - v18,
            "..\\TES Shared\\InventoryChanges.cpp",
            0x5D5,
            LOBYTE(v16[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v18 - v37 - v6,
          "..\\TES Shared\\InventoryChanges.cpp",
          0x5D5,
          LOBYTE(v16[1].createdObjectList.next));
      }
    }
  }
}
