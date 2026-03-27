void __userpurge TESActorBase_LoadModified(int this@<ecx>, int a2@<ebx>, int a3, size_t Size)
{
  int v6; // ebp
  UInt32 *v7; // edi
  TESForm *v8; // eax
  const char *v9; // eax
  TESSaveLoad *v10; // ecx
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // ecx
  UInt32 v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  UInt32 v17; // edx
  int v18; // [esp-8h] [ebp-12Ch]
  size_t v19; // [esp-8h] [ebp-12Ch]
  size_t v20; // [esp-8h] [ebp-12Ch]
  int v21; // [esp-8h] [ebp-12Ch]
  int v22; // [esp-8h] [ebp-12Ch]
  size_t v23; // [esp-4h] [ebp-128h]
  size_t v24; // [esp-4h] [ebp-128h]
  int v25; // [esp-4h] [ebp-128h]
  size_t v26; // [esp-4h] [ebp-128h]
  int v27; // [esp-4h] [ebp-128h]
  int v28; // [esp-4h] [ebp-128h]
  _BYTE a1[273]; // [esp+Fh] [ebp-115h] BYREF

  v6 = 0;
  *(_DWORD *)&a1[1] = 0;
  if ( sub_45A170() )
  {
    LODWORD(v23) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1[5], v23);
    if ( *(_DWORD *)&a1[5] != 0x4B4F4C42 )
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
          "..\\TES Shared\\TESActorBase.cpp",
          0x23A,
          *v7,
          v9,
          v18,
          v25);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESActorBase.cpp",
          0x23A,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v24) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1[1], v24);
  }
  HIDWORD(v19) = a2;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Du )
    TESForm_LoadModifiedForm((TESForm *)this, a3, Size);
  LODWORD(v19) = Size;
  TESAttributes_LoadModified(this + 0x88, (void *)a3, v19);
  TESActorBaseData_LoadModifiedComponent((unsigned int *)(this + 0x24), a3, a3, Size);
  TESSpellList_LoadModifiedComponent(this + 0x54, v6, Size, this, a3, Size);
  TESAIForm_LoadModifiedComponent(this + 0x68, a3, Size);
  if ( (a3 & 4) != 0 )
  {
    LODWORD(v20) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1[9], v20);
    *(_DWORD *)(this + 0x84) = *(_DWORD *)&a1[9];
  }
  if ( (a3 & 0x10000000) != 0 )
    AVCollection_Load((_DWORD *)(this + 0xD0));
  if ( (char)a3 < 0 )
  {
    _memset(&a1[0xD], 0, 0x104);
    LODWORD(v23) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)a1, v23);
    if ( a1[0] )
    {
      LODWORD(v26) = a1[0];
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1[0xD], v26);
    }
    BSStringT_Set((BSStringT *)(this + 0xA4), &a1[0xD], 0);
  }
  if ( sub_45A170() )
  {
    v10 = SaveLoad_CurrentSavegame;
    v11 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v12 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11);
      v14 = *(unsigned __int16 *)&a1[1] + v6;
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
            v6 + *(unsigned __int16 *)&a1[1] - v12,
            "..\\TES Shared\\TESActorBase.cpp",
            0x25E,
            *v11,
            v16,
            v22,
            v28);
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
          v12 - *(unsigned __int16 *)&a1[1] - v6,
          "..\\TES Shared\\TESActorBase.cpp",
          0x25E,
          *v11,
          v15,
          v21,
          v27);
      }
    }
    else
    {
      v17 = *(unsigned __int16 *)&a1[1] + v6;
      if ( v12 <= v17 )
      {
        if ( v12 < v17 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v6 + *(unsigned __int16 *)&a1[1] - v12,
            "..\\TES Shared\\TESActorBase.cpp",
            0x25E,
            LOBYTE(v10[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v12 - *(unsigned __int16 *)&a1[1] - v6,
          "..\\TES Shared\\TESActorBase.cpp",
          0x25E,
          LOBYTE(v10[1].createdObjectList.next));
      }
    }
  }
}
