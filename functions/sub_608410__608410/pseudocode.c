void __thiscall sub_608410(MobileObject *this, unsigned int changeMask, unsigned int currentFlags)
{
  unsigned __int8 *bufferCursor; // ebx
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  TESSaveLoadGame_SerializationView *v11; // ecx
  int v12; // esi
  int v13; // eax
  FreeEntry *v14; // esi
  TESSaveLoadGame_SerializationView *v15; // ecx
  UInt32 *v16; // edi
  unsigned __int8 *v17; // esi
  TESForm *v18; // ecx
  unsigned __int8 *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  unsigned __int8 *v22; // edx
  size_t v23; // [esp-10h] [ebp-64h]
  int v24; // [esp-8h] [ebp-5Ch]
  int v25; // [esp-8h] [ebp-5Ch]
  int v26; // [esp-8h] [ebp-5Ch]
  int v27; // [esp-4h] [ebp-58h]
  int v28; // [esp-4h] [ebp-58h]
  TESForm v29; // [esp+8h] [ebp-4Ch] BYREF
  int v30; // [esp+20h] [ebp-34h]
  int v31; // [esp+24h] [ebp-30h]
  TESForm a1; // [esp+28h] [ebp-2Ch] BYREF
  char destination[16]; // [esp+44h] [ebp-10h] BYREF

  MobileObject_LoadModifiedForm(this, changeMask, currentFlags); /*0x608425*/
  *(_DWORD *)&a1.member.type = 0; /*0x608432*/
  bufferCursor = 0; /*0x608436*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member.flags, 4u); /*0x608452*/
    if ( a1.member.flags != (kFormFlags_CantWait|kFormFlags_Compressed|kFormFlags_OffLimits|kFormFlags_Temporary|kFormFlags_InitiallyDisabled|kFormFlags_QuestItem|kFormFlags_BorderRegion|kFormFlags_FromActiveFile|0x4B410000) )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x608466*/
      if ( currentlyLoadingFormHeader )
      {
        v9 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x608473*/
        v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v9->vtbl->GetEditorName)( /*0x60848e*/
                              v9,
                              *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                              *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\ArrowProjectile.cpp",
          0x8F1,
          *currentlyLoadingFormHeader,
          v10,
          v29.member.flags,
          v29.member.refID);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\ArrowProjectile.cpp",
          0x8F1,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x6084cf*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member, 2u); /*0x6084d9*/
  }
  SaveLoad_LoadData(g_TESSaveLoadGame, (char *)this + 0x60, 4u); /*0x6084ea*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x64, 4u); /*0x6084f7*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x68, 4u); /*0x608504*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x6C, 4u); /*0x608511*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x70, 4u); /*0x60851e*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x74, 4u); /*0x60852b*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x88, 0xCu); /*0x60853b*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)this, &a1.member.refID, 4u); /*0x608549*/
  *(_DWORD *)&v29.member.type = 4; /*0x608552*/
  v29.vtbl = (TESFormVtbl *)&a1.member.flags; /*0x608558*/
  *((_DWORD *)this + 0x1E) = *(_DWORD *)&a1.member.type; /*0x60855b*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)this, (unsigned int *)v29.vtbl, *(unsigned int *)&v29.member.type); /*0x60855e*/
  *((_DWORD *)this + 0x1F) = a1.vtbl; /*0x60856d*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)this, (unsigned int *)&a1.member, 4u); /*0x608573*/
  *((_DWORD *)this + 0x21) = v31; /*0x60857c*/
  v11 = g_TESSaveLoadGame; /*0x608582*/
  if ( g_TESSaveLoadGame->currentVersion < 0x20u ) /*0x60858c*/
  {
    SaveLoad_AdvanceBufferOffset(v11, 8); /*0x608590*/
    v11 = g_TESSaveLoadGame; /*0x608595*/
  }
  destination[0] = 0; /*0x60859b*/
  if ( v11->currentVersion >= 0x20u /*0x6085be*/
    && (TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, destination, 1u),
        v11 = g_TESSaveLoadGame,
        g_TESSaveLoadGame->currentVersion >= 0x20u) )
  {
    if ( !destination[0] ) /*0x6085e2*/
      goto LABEL_22; /*0x6085e2*/
  }
  else
  {
    v12 = *((_DWORD *)this + 0x18); /*0x6085c0*/
    if ( v12 != 1 && v12 != 2 ) /*0x6085ca*/
    {
      destination[0] = 0; /*0x6085cc*/
      goto LABEL_22; /*0x6085d1*/
    }
    destination[0] = 1; /*0x6085d6*/
  }
  v13 = FormHeapAlloc(0x54u); /*0x6085ea*/
  *((_DWORD *)this + 0x17) = v13; /*0x6085ef*/
  *(_DWORD *)(v13 + 0x2C) = 0; /*0x6085f2*/
  *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = 0; /*0x6085f8*/
  qmemcpy((void *)(*((_DWORD *)this + 0x17) + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x60860e*/
  SaveLoad_LoadData(g_TESSaveLoadGame, *((void **)this + 0x17), 4u); /*0x60861c*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (void *)(*((_DWORD *)this + 0x17) + 4), 0xCu); /*0x60862c*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (void *)(*((_DWORD *)this + 0x17) + 0x10), 0xCu); /*0x60863c*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (void *)(*((_DWORD *)this + 0x17) + 0x1C), 0xCu); /*0x60864c*/
  v11 = g_TESSaveLoadGame; /*0x608651*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x50u ) /*0x60865b*/
  {
    SaveLoad_LoadData(v11, &a1.member, 0x10u); /*0x608664*/
    sub_47C600((NiTransform *)&a1.member, (NiTransform *)(*((_DWORD *)this + 0x17) + 0x30)); /*0x608674*/
    v11 = g_TESSaveLoadGame; /*0x608679*/
  }
  if ( **((_DWORD **)this + 0x17) <= 1u ) /*0x608687*/
  {
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)this, (unsigned int *)&a1, 4u); /*0x60869a*/
    *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x28) = v30; /*0x6086a6*/
    if ( g_TESSaveLoadGame->currentVersion < 0x20u /*0x6086f0*/
      || (TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &a1.member.modlist, 2u),
          TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &v29, 2u),
          *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x2C) = SLOWORD(v29.vtbl) + (LOWORD(a1.member.modlist.data) << 0x10),
          v11 = g_TESSaveLoadGame,
          g_TESSaveLoadGame->currentVersion < 0x20u) )
    {
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &a1.member.modlist, 1u); /*0x6086fb*/
      HIDWORD(v23) = 1; /*0x608708*/
      LODWORD(v23) = LOBYTE(a1.member.modlist.data) + 1; /*0x60870a*/
      v14 = j_MemoryHeap_Alloc(&FormHeap, (char)this, v23, v24); /*0x608715*/
      _memset((int)v14, 0, LOBYTE(a1.member.modlist.data) + 1); /*0x608723*/
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, v14, LOBYTE(a1.member.modlist.data)); /*0x608734*/
      *(_DWORD *)(*((_DWORD *)this + 0x17) + 0x2C) = v14; /*0x60873c*/
      v11 = g_TESSaveLoadGame; /*0x60873f*/
    }
  }
LABEL_22:
  if ( v11->currentVersion >= 0x54u ) /*0x608749*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x95, 1u); /*0x608756*/
    v11 = g_TESSaveLoadGame; /*0x60875b*/
  }
  if ( v11->currentVersion >= 0x55u ) /*0x608765*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x96, 1u); /*0x608772*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x60877d*/
  {
    v15 = g_TESSaveLoadGame; /*0x60878a*/
    v16 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x608790*/
    v17 = g_TESSaveLoadGame->bufferCursor; /*0x608798*/
    if ( v16 ) /*0x60879b*/
    {
      v18 = TESForm_LookupByFormID(*v16); /*0x6087a9*/
      v19 = &bufferCursor[LOWORD(v29.member.refID)]; /*0x6087b0*/
      if ( v17 <= v19 ) /*0x6087b7*/
      {
        if ( v17 < v19 ) /*0x6087fb*/
        {
          v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)( /*0x608812*/
                                v18,
                                *((unsigned __int8 *)v16 + 9),
                                *(UInt32 *)((char *)v16 + 5));
          PrintError( /*0x608831*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            &bufferCursor[LOWORD(v29.member.refID) - (_DWORD)v17],
            ".\\AI\\ArrowProjectile.cpp",
            0x961,
            *v16,
            v21,
            v26,
            v28);
        }
      }
      else
      {
        v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)( /*0x6087ca*/
                              v18,
                              *((unsigned __int8 *)v16 + 9),
                              *(UInt32 *)((char *)v16 + 5));
        PrintError( /*0x6087e9*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &v17[-LOWORD(v29.member.refID)] - bufferCursor,
          ".\\AI\\ArrowProjectile.cpp",
          0x961,
          *v16,
          v20,
          v25,
          v27);
      }
    }
    else
    {
      v22 = &bufferCursor[LOWORD(v29.member.refID)]; /*0x608848*/
      if ( v17 <= v22 ) /*0x60884d*/
      {
        if ( v17 < v22 ) /*0x60887a*/
          PrintError( /*0x608895*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            &bufferCursor[LOWORD(v29.member.refID) - (_DWORD)v17],
            ".\\AI\\ArrowProjectile.cpp",
            0x961,
            v15->currentVersion);
      }
      else
      {
        PrintError( /*0x608868*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &v17[-LOWORD(v29.member.refID)] - bufferCursor,
          ".\\AI\\ArrowProjectile.cpp",
          0x961,
          v15->currentVersion);
      }
    }
  }
}
