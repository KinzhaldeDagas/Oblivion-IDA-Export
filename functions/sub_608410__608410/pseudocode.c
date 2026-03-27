void __thiscall sub_608410(char *this, int a2, int a3)
{
  UInt32 v5; // ebx
  TESSaveLoad *v6; // ecx
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  TESSaveLoad *v10; // ecx
  TESSaveLoad *v11; // ecx
  TESSaveLoad *v12; // ecx
  int v13; // esi
  int v14; // eax
  TESForm *v15; // esi
  TESSaveLoad *v16; // ecx
  UInt32 *v17; // edi
  UInt32 v18; // esi
  TESForm *v19; // ecx
  UInt32 v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  UInt32 v23; // edx
  size_t v24; // [esp-10h] [ebp-64h]
  size_t v25; // [esp-Ch] [ebp-60h]
  size_t v26; // [esp-Ch] [ebp-60h]
  size_t v27; // [esp-Ch] [ebp-60h]
  int v28; // [esp-8h] [ebp-5Ch]
  int v29; // [esp-8h] [ebp-5Ch]
  int v30; // [esp-8h] [ebp-5Ch]
  size_t v31; // [esp-4h] [ebp-58h]
  size_t v32; // [esp-4h] [ebp-58h]
  size_t v33; // [esp-4h] [ebp-58h]
  size_t v34; // [esp-4h] [ebp-58h]
  int v35; // [esp-4h] [ebp-58h]
  int v36; // [esp-4h] [ebp-58h]
  size_t v37; // [esp+4h] [ebp-50h] BYREF
  size_t v38; // [esp+Ch] [ebp-48h]
  size_t v39; // [esp+14h] [ebp-40h]
  int v40; // [esp+1Ch] [ebp-38h]
  int v41; // [esp+20h] [ebp-34h]
  int v42; // [esp+24h] [ebp-30h]
  TESForm a1; // [esp+28h] [ebp-2Ch] BYREF
  char v44; // [esp+44h] [ebp-10h] BYREF

  MobileObject_LoadModifiedForm(a2, a3);
  *(_DWORD *)&a1.member.type = 0;
  v5 = 0;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v39) = 4;
    SaveLoad_LoadData((int)v6, &a1.member.flags, v39);
    if ( a1.member.flags != (kFormFlags_CantWait|kFormFlags_Compressed|kFormFlags_OffLimits|kFormFlags_Temporary|kFormFlags_InitiallyDisabled|kFormFlags_QuestItem|kFormFlags_BorderRegion|kFormFlags_FromActiveFile|0x4B410000) )
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
          ".\\AI\\ArrowProjectile.cpp",
          0x8F1,
          *v7,
          v9,
          HIDWORD(v38),
          (_DWORD)v39);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\ArrowProjectile.cpp",
          0x8F1,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v10 = SaveLoad_CurrentSavegame;
    v5 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v39) = 2;
    SaveLoad_LoadData((int)v10, &a1.member, v39);
  }
  v11 = SaveLoad_CurrentSavegame;
  LODWORD(v39) = 4;
  SaveLoad_LoadData((int)v11, this + 0x60, v39);
  LODWORD(v39) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x64), v39);
  LODWORD(v39) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x68), v39);
  LODWORD(v39) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x6C), v39);
  LODWORD(v39) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x70), v39);
  LODWORD(v39) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x74), v39);
  LODWORD(v39) = 0xC;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x88), v39);
  LODWORD(v39) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1.member.refID, v39, v40, v41, v42);
  LODWORD(v38) = 4;
  HIDWORD(v37) = &a1.member.flags;
  *((_DWORD *)this + 0x1E) = *(_DWORD *)&a1.member.type;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)HIDWORD(v37), v38, v39, SHIDWORD(v39), v40);
  LODWORD(v37) = 4;
  *((_DWORD *)this + 0x1F) = a1.vtbl;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1.member, v37, v38, SHIDWORD(v38), v39);
  *((_DWORD *)this + 0x21) = v42;
  v12 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x20u )
  {
    SaveLoad_AdvanceBufferOffset(v12, 8);
    v12 = SaveLoad_CurrentSavegame;
  }
  v44 = 0;
  if ( LOBYTE(v12[1].createdObjectList.next) >= 0x20u
    && (LODWORD(v31) = 1,
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v44, v31),
        v12 = SaveLoad_CurrentSavegame,
        LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x20u) )
  {
    if ( !v44 )
      goto LABEL_22;
  }
  else
  {
    v13 = *((_DWORD *)this + 0x18);
    if ( v13 != 1 && v13 != 2 )
    {
      v44 = 0;
      goto LABEL_22;
    }
    v44 = 1;
  }
  v14 = FormHeapAlloc(0x54u);
  *((_DWORD *)this + 0x17) = v14;
  *(_DWORD *)(v14 + 0x2C) = 0;
  *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = 0;
  qmemcpy((void *)(*((_DWORD *)this + 0x17) + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
  LODWORD(v31) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, *((void **)this + 0x17), v31);
  LODWORD(v32) = 0xC;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(*((_DWORD *)this + 0x17) + 4), v32);
  LODWORD(v33) = 0xC;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(*((_DWORD *)this + 0x17) + 0x10), v33);
  LODWORD(v34) = 0xC;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(*((_DWORD *)this + 0x17) + 0x1C), v34);
  v12 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x50u )
  {
    LODWORD(v31) = 0x10;
    SaveLoad_LoadData((int)v12, &a1.member, v31);
    sub_47C600((NiTransform *)&a1.member, (NiTransform *)(*((_DWORD *)this + 0x17) + 0x30));
    v12 = SaveLoad_CurrentSavegame;
  }
  if ( **((_DWORD **)this + 0x17) <= 1u )
  {
    LODWORD(v31) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame(&a1, v31, v37, SHIDWORD(v37), v38);
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = v41;
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x20u
      || (LODWORD(v25) = 2,
          TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1.member.modlist, v25),
          LODWORD(v26) = 2,
          TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&v37 + 4), v26),
          *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x2C) = SWORD2(v37) + (LOWORD(a1.member.modlist.data) << 0x10),
          v12 = SaveLoad_CurrentSavegame,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x20u) )
    {
      LODWORD(v25) = 1;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1.member.modlist, v25);
      HIDWORD(v24) = 1;
      LODWORD(v24) = LOBYTE(a1.member.modlist.data) + 1;
      v15 = (TESForm *)j_MemoryHeap_Alloc(&FormHeap, (char)this, v24, v28);
      _memset(v15, 0, LOBYTE(a1.member.modlist.data) + 1);
      LODWORD(v27) = LOBYTE(a1.member.modlist.data);
      TESForm_LoadDataFromCurrentSaveGame(v15, v27);
      *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x2C) = v15;
      v12 = SaveLoad_CurrentSavegame;
    }
  }
LABEL_22:
  if ( LOBYTE(v12[1].createdObjectList.next) >= 0x54u )
  {
    LODWORD(v31) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x95), v31);
    v12 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v12[1].createdObjectList.next) >= 0x55u )
  {
    LODWORD(v31) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(this + 0x96), v31);
  }
  if ( sub_45A170() )
  {
    v16 = SaveLoad_CurrentSavegame;
    v17 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v17 )
    {
      v19 = TESForm_LookupByFormID(*v17);
      v20 = v5 + (unsigned __int16)v39;
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
            v5 + (unsigned __int16)v39 - v18,
            ".\\AI\\ArrowProjectile.cpp",
            0x961,
            *v17,
            v22,
            v30,
            v36);
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
          v18 - (unsigned __int16)v39 - v5,
          ".\\AI\\ArrowProjectile.cpp",
          0x961,
          *v17,
          v21,
          v29,
          v35);
      }
    }
    else
    {
      v23 = (unsigned __int16)v39 + v5;
      if ( v18 <= v23 )
      {
        if ( v18 < v23 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v5 + (unsigned __int16)v39 - v18,
            ".\\AI\\ArrowProjectile.cpp",
            0x961,
            LOBYTE(v16[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v18 - (unsigned __int16)v39 - v5,
          ".\\AI\\ArrowProjectile.cpp",
          0x961,
          LOBYTE(v16[1].createdObjectList.next));
      }
    }
  }
}
