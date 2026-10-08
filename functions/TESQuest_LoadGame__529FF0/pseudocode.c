void __userpurge TESQuest::LoadGame(int this@<ecx>, double st7_0@<st0>, int Dst, TESForm a4)
{
  UInt32 refID; // ebx
  UInt32 *currentlyLoadingFormHeader; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  TESSaveLoadGame_SerializationView *v9; // ecx
  int v10; // eax
  int *v11; // ecx
  int *v12; // ebx
  const char *v13; // eax
  int v14; // esi
  unsigned int v15; // edi
  _WORD *v16; // ecx
  _WORD *v17; // eax
  _WORD *v18; // eax
  int *v19; // ecx
  _DWORD *v20; // eax
  int *v21; // esi
  TESSaveLoadGame_SerializationView *v22; // ecx
  UInt32 *v23; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v25; // ecx
  UInt32 v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  UInt32 v29; // edx
  int v30; // [esp-8h] [ebp-4Ch]
  int v31; // [esp-8h] [ebp-4Ch]
  int v32; // [esp-8h] [ebp-4Ch]
  int v33; // [esp-4h] [ebp-48h]
  int v34; // [esp-4h] [ebp-48h]
  int v35; // [esp-4h] [ebp-48h]
  TESForm a1; // [esp+14h] [ebp-30h] BYREF
  int destination; // [esp+2Ch] [ebp-18h] BYREF
  _DWORD v38[2]; // [esp+30h] [ebp-14h] BYREF
  int v39; // [esp+40h] [ebp-4h]

  TESForm_LoadModifiedForm((TESForm *)this, Dst, (int)a4.vtbl); /*0x52a025*/
  refID = 0; /*0x52a032*/
  a1.member.flags = 0; /*0x52a034*/
  a1.member.refID = 0; /*0x52a038*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &destination, 4u); /*0x52a056*/
    if ( destination != 0x4B4F4C42 )
    {
      currentlyLoadingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x52a06a*/
      if ( currentlyLoadingFormHeader )
      {
        v7 = TESForm_LookupByFormID(*currentlyLoadingFormHeader); /*0x52a077*/
        v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v7->vtbl->GetEditorName)( /*0x52a092*/
                             v7,
                             *((unsigned __int8 *)currentlyLoadingFormHeader + 9),
                             *(UInt32 *)((char *)currentlyLoadingFormHeader + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESQuest.cpp",
          0xC66,
          *currentlyLoadingFormHeader,
          v8,
          v30,
          v33);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESQuest.cpp",
          0xC66,
          g_TESSaveLoadGame->currentVersion);
      }
    }
    v9 = g_TESSaveLoadGame; /*0x52a0cd*/
    a1.member.refID = (UInt32)g_TESSaveLoadGame->bufferCursor; /*0x52a0dd*/
    SaveLoad_LoadData(v9, &a1.member.flags, 2u); /*0x52a0e1*/
    refID = a1.member.refID; /*0x52a0e6*/
  }
  if ( (Dst & 4) != 0 ) /*0x52a0ef*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)&a1.vtbl + 2, 1u); /*0x52a0fa*/
    *(_BYTE *)(this + 0x3C) = BYTE2(a1.vtbl); /*0x52a103*/
  }
  if ( (Dst & 0x10000000) != 0 ) /*0x52a10e*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)&a1.vtbl + 1, 1u); /*0x52a11d*/
    a1.member.modlist.next = 0; /*0x52a127*/
    if ( BYTE1(a1.vtbl) ) /*0x52a12b*/
    {
      do /*0x52a2c2*/
      {
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &a4, 1u); /*0x52a13a*/
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)&a1.vtbl + 3, 1u); /*0x52a148*/
        v10 = this + 0x40; /*0x52a14d*/
        if ( this == 0xFFFFFFC0 ) /*0x52a152*/
        {
LABEL_15:
          v12 = 0; /*0x52a16d*/
          v13 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0xD4))(this); /*0x52a17a*/
          PrintError("Could not find stage %i in quest %s during load.", LOBYTE(a4.vtbl), v13); /*0x52a188*/
        }
        else
        {
          while ( 1 ) /*0x52a158*/
          {
            v11 = *(int **)v10; /*0x52a158*/
            if ( *(_DWORD *)v10 ) /*0x52a158*/
            {
              if ( *(_BYTE *)v11 == LOBYTE(a4.vtbl) ) /*0x52a160*/
                break; /*0x52a160*/
            }
            v10 = *(_DWORD *)(v10 + 4); /*0x52a166*/
            if ( !v10 ) /*0x52a16b*/
              goto LABEL_15; /*0x52a16b*/
          }
          v12 = *(int **)v10; /*0x52a240*/
          *((_BYTE *)v11 + 1) = HIBYTE(a1.vtbl); /*0x52a242*/
        }
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, &a1, 1u); /*0x52a199*/
        a1.member.modlist.data = 0; /*0x52a1a3*/
        if ( LOBYTE(a1.vtbl) ) /*0x52a1ab*/
        {
          do /*0x52a2aa*/
          {
            sub_47D260(&a1.member); /*0x52a1b5*/
            v39 = 0; /*0x52a1c3*/
            TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, v38, 1u); /*0x52a1cb*/
            SaveLoad_LoadData(g_TESSaveLoadGame, &a1.member, 4u); /*0x52a1dd*/
            if ( v12 ) /*0x52a1e4*/
            {
              v14 = sub_52AC30(v12, v38[0]); /*0x52a1f6*/
              if ( v14 ) /*0x52a1fa*/
              {
                if ( sub_47D290(&a1.member) || QuestStageItem_GetYear(&a1.member) ) /*0x52a212*/
                {
                  v16 = *(_WORD **)(v14 + 0x64); /*0x52a24a*/
                  if ( v16 ) /*0x52a24f*/
                  {
                    sub_47D270(v16, &a1.member); /*0x52a256*/
                  }
                  else
                  {
                    v17 = (_WORD *)FormHeapAlloc(4u); /*0x52a25f*/
                    v38[1] = v17; /*0x52a267*/
                    LOBYTE(v39) = 1; /*0x52a26d*/
                    if ( v17 ) /*0x52a272*/
                      v18 = sub_47D270(v17, &a1.member); /*0x52a27b*/
                    else
                      v18 = 0; /*0x52a282*/
                    *(_DWORD *)(v14 + 0x64) = v18; /*0x52a284*/
                  }
                }
                else
                {
                  v15 = *(_DWORD *)(v14 + 0x64); /*0x52a21c*/
                  if ( v15 ) /*0x52a221*/
                  {
                    Shared_NoOpVirtual_60D0A0(*(void **)(v14 + 0x64)); /*0x52a225*/
                    FormHeapFree(v15); /*0x52a22b*/
                    *(_DWORD *)(v14 + 0x64) = 0; /*0x52a233*/
                  }
                }
              }
            }
            v39 = 0xFFFFFFFF; /*0x52a28b*/
            Shared_NoOpVirtual_60D0A0(&a1.member); /*0x52a293*/
            ++a1.member.modlist.data; /*0x52a2a6*/
          }
          while ( (int)a1.member.modlist.data < LOBYTE(a1.vtbl) ); /*0x52a2aa*/
        }
        ++a1.member.modlist.next; /*0x52a2be*/
      }
      while ( (int)a1.member.modlist.next < BYTE1(a1.vtbl) ); /*0x52a2c2*/
      refID = a1.member.refID; /*0x52a2c8*/
    }
    *(_BYTE *)(this + 0x5C) = 0; /*0x52a2ce*/
    sub_529B70((unsigned __int8 **)this); /*0x52a2d2*/
  }
  if ( (Dst & 0x8000000) != 0 ) /*0x52a2e0*/
  {
    v19 = *(int **)(this + 0x58); /*0x52a2e2*/
    if ( v19 ) /*0x52a2e7*/
    {
      ScriptEventList_Load_(v19, st7_0); /*0x52a33d*/
    }
    else
    {
      v20 = (_DWORD *)FormHeapAlloc(0x14u); /*0x52a2eb*/
      v39 = 2; /*0x52a2f9*/
      if ( v20 ) /*0x52a301*/
        v21 = sub_4F9DB0(v20); /*0x52a30a*/
      else
        v21 = 0; /*0x52a30e*/
      v39 = 0xFFFFFFFF; /*0x52a312*/
      ScriptEventList_Load_(v21, st7_0); /*0x52a31a*/
      if ( v21 ) /*0x52a321*/
      {
        ScriptEventList_destr__((ScriptEventList *)v21); /*0x52a325*/
        FormHeapFree((unsigned int)v21); /*0x52a32b*/
      }
      *(_DWORD *)&g_TESSaveLoadGame->unknown48[8] |= 0x8000000u; /*0x52a338*/
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x52a348*/
  {
    v22 = g_TESSaveLoadGame; /*0x52a355*/
    v23 = (UInt32 *)g_TESSaveLoadGame->currentlyLoadingFormHeader; /*0x52a35b*/
    bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x52a363*/
    if ( v23 ) /*0x52a366*/
    {
      v25 = TESForm_LookupByFormID(*v23); /*0x52a374*/
      v26 = refID + LOWORD(a1.member.flags); /*0x52a37b*/
      if ( (unsigned int)bufferCursor <= v26 ) /*0x52a382*/
      {
        if ( (unsigned int)bufferCursor < v26 ) /*0x52a3c1*/
        {
          v28 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v25->vtbl->GetEditorName)( /*0x52a3d8*/
                                v25,
                                *((unsigned __int8 *)v23 + 9),
                                *(UInt32 *)((char *)v23 + 5));
          PrintError( /*0x52a3f7*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            refID + LOWORD(a1.member.flags) - (_DWORD)bufferCursor,
            "..\\TES Shared\\TESQuest.cpp",
            0xCC7,
            *v23,
            v28,
            v32,
            v35);
        }
      }
      else
      {
        v27 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v25->vtbl->GetEditorName)( /*0x52a395*/
                              v25,
                              *((unsigned __int8 *)v23 + 9),
                              *(UInt32 *)((char *)v23 + 5));
        PrintError( /*0x52a3b4*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          &bufferCursor[-LOWORD(a1.member.flags) - refID],
          "..\\TES Shared\\TESQuest.cpp",
          0xCC7,
          *v23,
          v27,
          v31,
          v34);
      }
    }
    else
    {
      v29 = LOWORD(a1.member.flags) + refID; /*0x52a406*/
      if ( (unsigned int)bufferCursor <= v29 ) /*0x52a40b*/
      {
        if ( (unsigned int)bufferCursor < v29 ) /*0x52a428*/
          PrintError( /*0x52a443*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            refID + LOWORD(a1.member.flags) - (_DWORD)bufferCursor,
            "..\\TES Shared\\TESQuest.cpp",
            0xCC7,
            v22->currentVersion);
      }
      else
      {
        PrintError( /*0x52a426*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          &bufferCursor[-LOWORD(a1.member.flags) - refID],
          "..\\TES Shared\\TESQuest.cpp",
          0xCC7,
          v22->currentVersion);
      }
    }
  }
}
