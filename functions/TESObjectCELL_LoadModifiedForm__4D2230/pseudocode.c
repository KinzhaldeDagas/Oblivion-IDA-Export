void __userpurge TESObjectCELL_LoadModifiedForm(int this@<ecx>, double a2@<st0>, int Dst, int a3)
{
  UInt32 v5; // ebx
  UInt32 *v6; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  char v9; // al
  BSExtraDataVtbl *v10; // edi
  _DWORD *v11; // eax
  BSExtraDataVtbl *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  TESPathGrid *v15; // eax
  TESPathGrid *v16; // eax
  int v17; // ecx
  TESSaveLoad *v18; // ecx
  UInt32 *v19; // edi
  UInt32 v20; // esi
  TESForm *v21; // ecx
  UInt32 v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  UInt32 v25; // edx
  int v26; // [esp-8h] [ebp-144h]
  int v27; // [esp-8h] [ebp-144h]
  int v28; // [esp-8h] [ebp-144h]
  int v29; // [esp-8h] [ebp-144h]
  size_t v30; // [esp-4h] [ebp-140h]
  size_t v31; // [esp-4h] [ebp-140h]
  int v32; // [esp-4h] [ebp-140h]
  int v33; // [esp-4h] [ebp-140h]
  int v34; // [esp-4h] [ebp-140h]
  int v35; // [esp-4h] [ebp-140h]
  int v36; // [esp+4h] [ebp-138h]
  int v37; // [esp+8h] [ebp-134h]
  int v38; // [esp+Ch] [ebp-130h]
  _BYTE a1[277]; // [esp+17h] [ebp-125h] BYREF
  int v40; // [esp+138h] [ebp-4h]

  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Au && (Dst & 0x8000000) != 0 )
  {
    LODWORD(v30) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1[5], v30);
    ExtraDataList__SetDetachTime((ExtraDataList *)(this + 0x28), *(BSExtraDataVtbl **)&a1[5]);
  }
  TESForm_LoadModifiedForm((TESForm *)this, Dst, a3);
  v5 = 0;
  *(_DWORD *)&a1[1] = 0;
  if ( sub_45A170() )
  {
    LODWORD(v30) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1[5], v30);
    if ( *(_DWORD *)&a1[5] != 0x4B4F4C42 )
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
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x318B,
          *v6,
          v8,
          v26,
          v32);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x318B,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v5 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v31) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1[1], v31);
  }
  if ( (Dst & 8) != 0 )
  {
    LODWORD(v30) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, v30);
    v9 = a1[0];
    *(_BYTE *)(this + 0x24) ^= (a1[0] ^ *(_BYTE *)(this + 0x24)) & 0x60;
    *(_BYTE *)(this + 0x25) = v9 & 0x9F;
  }
  if ( (Dst & 0x10000000) != 0 )
  {
    v10 = sub_420B50((ExtraDataList *)(this + 0x28));
    if ( v10 )
    {
LABEL_21:
      (*((void (__thiscall **)(BSExtraDataVtbl *, int))v10->Destructor + 4))(v10, 0xFFFF);
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
    {
      v11 = (_DWORD *)FormHeapAlloc(0x2Cu);
      *(_DWORD *)&a1[9] = v11;
      v40 = 0;
      if ( v11 )
      {
        v12 = (BSExtraDataVtbl *)sub_411F60(v11, 0, 0);
LABEL_20:
        v10 = v12;
        v40 = 0xFFFFFFFF;
        sub_420B70((ExtraDataList *)(this + 0x28), v12);
        goto LABEL_21;
      }
    }
    else
    {
      v13 = (_DWORD *)FormHeapAlloc(0x24u);
      *(_DWORD *)&a1[9] = v13;
      v40 = 1;
      if ( v13 )
      {
        v12 = (BSExtraDataVtbl *)SeenData::SeenData__(v13);
        goto LABEL_20;
      }
    }
    v12 = 0;
    goto LABEL_20;
  }
LABEL_22:
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x5Au && (Dst & 0x8000000) != 0 )
  {
    LODWORD(v30) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1[0xD], v30);
    ExtraDataList__SetDetachTime((ExtraDataList *)(this + 0x28), *(BSExtraDataVtbl **)&a1[0xD]);
  }
  if ( (Dst & 0x10) != 0 )
  {
    a2 = _memset(&a1[0x11], 0, 0x104);
    LODWORD(v30) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, v30);
    if ( a1[0] )
    {
      LODWORD(v30) = a1[0];
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1[0x11], v30);
    }
    BSStringT_Set((BSStringT *)(this + 0x1C), &a1[0x11], 0);
  }
  if ( (Dst & 0x20) != 0 )
  {
    LODWORD(v30) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1[9], v30, v36, v37, v38);
    ExtraDataList::SetOrRemoveExtraOwnership((ExtraDataList *)(this + 0x28), *(TESForm **)&a1[1]);
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)this + 0x40))(this, 0x20, v27, v33);
  }
  if ( (Dst & 0x1000000) != 0 )
  {
    v14 = *(_DWORD **)(this + 0x44);
    if ( v14 )
    {
      sub_4E5CC0(v14, a2);
    }
    else
    {
      v15 = (TESPathGrid *)FormHeapAlloc(0x54u);
      *(_DWORD *)&a1[0xD] = v15;
      v40 = 2;
      if ( v15 )
        v16 = TESPathGrid::TESPathGrid(v15);
      else
        v16 = 0;
      v40 = 0xFFFFFFFF;
      *(_DWORD *)(this + 0x44) = v16;
      sub_4E5CC0(v16, a2);
      v17 = *(_DWORD *)(this + 0x44);
      if ( v17 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x10))(v17, 1);
      *(_DWORD *)(this + 0x44) = 0;
    }
  }
  if ( sub_45A170() )
  {
    v18 = SaveLoad_CurrentSavegame;
    v19 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v20 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v19 )
    {
      v21 = TESForm_LookupByFormID(*v19);
      v22 = *(unsigned __int16 *)&a1[1] + v5;
      if ( v20 <= v22 )
      {
        if ( v20 < v22 )
        {
          v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)(
                                v21,
                                *((unsigned __int8 *)v19 + 9),
                                *(UInt32 *)((char *)v19 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v5 + *(unsigned __int16 *)&a1[1] - v20,
            "..\\TES Shared\\TESObjectCELL.cpp",
            0x31D1,
            *v19,
            v24,
            v29,
            v35);
        }
      }
      else
      {
        v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)(
                              v21,
                              *((unsigned __int8 *)v19 + 9),
                              *(UInt32 *)((char *)v19 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v20 - *(unsigned __int16 *)&a1[1] - v5,
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x31D1,
          *v19,
          v23,
          v28,
          v34);
      }
    }
    else
    {
      v25 = *(unsigned __int16 *)&a1[1] + v5;
      if ( v20 <= v25 )
      {
        if ( v20 < v25 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v5 + *(unsigned __int16 *)&a1[1] - v20,
            "..\\TES Shared\\TESObjectCELL.cpp",
            0x31D1,
            LOBYTE(v18[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v20 - *(unsigned __int16 *)&a1[1] - v5,
          "..\\TES Shared\\TESObjectCELL.cpp",
          0x31D1,
          LOBYTE(v18[1].createdObjectList.next));
      }
    }
  }
}
