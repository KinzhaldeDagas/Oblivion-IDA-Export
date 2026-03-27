void __userpurge TESSpellList_LoadModifiedComponent(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        __int16 a5,
        int a6)
{
  UInt32 v8; // ebp
  UInt32 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  _DWORD *v12; // edi
  void **v13; // ebx
  TESForm *v14; // eax
  void *v15; // esi
  TESForm *v16; // eax
  void *v17; // eax
  _DWORD *v18; // eax
  void **v19; // ecx
  TESSaveLoad *v20; // ecx
  UInt32 *v21; // edi
  UInt32 v22; // esi
  TESForm *v23; // ecx
  UInt32 v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  UInt32 v27; // edx
  int v28; // [esp-18h] [ebp-30h]
  int v29; // [esp-18h] [ebp-30h]
  int v30; // [esp-14h] [ebp-2Ch]
  int v31; // [esp-14h] [ebp-2Ch]
  _BYTE v32[12]; // [esp-Ch] [ebp-24h]
  int v33; // [esp-Ch] [ebp-24h]
  size_t v34; // [esp-Ch] [ebp-24h]
  size_t v35; // [esp-8h] [ebp-20h]
  int v36; // [esp-8h] [ebp-20h]
  int v37; // [esp+0h] [ebp-18h]
  UInt32 v38; // [esp+4h] [ebp-14h]
  int v39; // [esp+8h] [ebp-10h] BYREF
  char ArgList[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v41; // [esp+10h] [ebp-8h]
  int Dst; // [esp+14h] [ebp-4h] BYREF

  if ( (a5 & 0x20) != 0 )
  {
    v37 = a2;
    v8 = 0;
    *(_DWORD *)&v32[8] = a4;
    v39 = 0;
    if ( sub_45A170() )
    {
      *(_DWORD *)&v32[4] = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, *(size_t *)&v32[4]);
      if ( Dst != 0x4B4F4C42 )
      {
        v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
        if ( v9 )
        {
          v10 = TESForm_LookupByFormID(*v9);
          v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v10->vtbl->GetEditorName)(
                                v10,
                                *((unsigned __int8 *)v9 + 9),
                                *(UInt32 *)((char *)v9 + 5));
          PrintError(
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s w"
            "ith version %i and flags %08X",
            "..\\TES Shared\\TESSpellList.cpp",
            0x52F,
            *v9,
            v11,
            v33,
            v36);
        }
        else
        {
          PrintError(
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
            "..\\TES Shared\\TESSpellList.cpp",
            0x52F,
            LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
        }
      }
      v8 = SaveLoad_CurrentSavegame->unk000[5];
      LODWORD(v35) = 2;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v39, v35);
    }
    HIDWORD(v34) = a3;
    v12 = (_DWORD *)(a1 + 4);
    BSSimpleList_Clear((_DWORD *)(a1 + 4));
    v13 = (void **)(a1 + 0xC);
    BSSimpleList_Clear(v13);
    LODWORD(v34) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a5, v34);
    v41 = 0;
    if ( a5 )
    {
      do
      {
        *(_DWORD *)v32 = 4;
        SaveLoad_LoadFormID(ArgList, *(size_t *)v32, *(int *)&v32[8], v37, v38);
        v14 = TESForm_LookupByFormID(v38);
        v15 = OblivionDynamicCast(
                v14,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &SpellItem `RTTI Type Descriptor',
                0);
        v16 = TESForm_LookupByFormID(v38);
        v17 = OblivionDynamicCast(
                v16,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESLevSpell `RTTI Type Descriptor',
                0);
        if ( !v15 )
        {
          if ( v17 )
          {
            if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x47u && (v19 = v13) != 0 )
            {
              while ( *v19 != v17 )
              {
                v19 = (void **)v19[1];
                if ( !v19 )
                  goto LABEL_20;
              }
            }
            else
            {
LABEL_20:
              BSSimpleList_PushFront(v13, (int)v17);
            }
          }
          else
          {
            PrintError("Could not find spell %08X", v38);
          }
          goto LABEL_22;
        }
        if ( !*v12 )
          goto LABEL_14;
        v18 = (_DWORD *)FormHeapAlloc(8u);
        if ( !v18 )
        {
          *(_DWORD *)4 = v12[1];
          v12[1] = 0;
LABEL_14:
          *v12 = v15;
          goto LABEL_22;
        }
        *v18 = *v12;
        v18[1] = 0;
        v18[1] = v12[1];
        v12[1] = v18;
        *v12 = v15;
LABEL_22:
        ++v39;
      }
      while ( v39 < (unsigned __int16)Dst );
    }
    if ( sub_45A170() )
    {
      v20 = SaveLoad_CurrentSavegame;
      v21 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      v22 = SaveLoad_CurrentSavegame->unk000[5];
      if ( v21 )
      {
        v23 = TESForm_LookupByFormID(*v21);
        v24 = v8 + (unsigned __int16)v37;
        if ( v22 <= v24 )
        {
          if ( v22 < v24 )
          {
            v26 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v23->vtbl->GetEditorName)(
                                  v23,
                                  *((unsigned __int8 *)v21 + 9),
                                  *(UInt32 *)((char *)v21 + 5));
            PrintError(
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with versio"
              "n %i and flags %08X",
              v8 + (unsigned __int16)v37 - v22,
              "..\\TES Shared\\TESSpellList.cpp",
              0x553,
              *v21,
              v26,
              v29,
              v31);
          }
        }
        else
        {
          v25 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v23->vtbl->GetEditorName)(
                                v23,
                                *((unsigned __int8 *)v21 + 9),
                                *(UInt32 *)((char *)v21 + 5));
          PrintError(
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %"
            "i and flags %08X",
            v22 - (unsigned __int16)v37 - v8,
            "..\\TES Shared\\TESSpellList.cpp",
            0x553,
            *v21,
            v25,
            v28,
            v30);
        }
      }
      else
      {
        v27 = (unsigned __int16)v37 + v8;
        if ( v22 <= v27 )
        {
          if ( v22 < v27 )
            PrintError(
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
              v8 + (unsigned __int16)v37 - v22,
              "..\\TES Shared\\TESSpellList.cpp",
              0x553,
              LOBYTE(v20[1].createdObjectList.next));
        }
        else
        {
          PrintError(
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
            v22 - (unsigned __int16)v37 - v8,
            "..\\TES Shared\\TESSpellList.cpp",
            0x553,
            LOBYTE(v20[1].createdObjectList.next));
        }
      }
    }
  }
}
