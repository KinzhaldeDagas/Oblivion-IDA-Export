void __userpurge TESQuest_LoadGame(int this@<ecx>, double st7_0@<st0>, int Dst, TESForm a4)
{
  UInt32 refID; // ebx
  UInt32 *v6; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  TESSaveLoad *v9; // ecx
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
  TESSaveLoad *v22; // ecx
  UInt32 *v23; // edi
  UInt32 v24; // esi
  TESForm *v25; // ecx
  UInt32 v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  UInt32 v29; // edx
  int v30; // [esp-8h] [ebp-4Ch]
  int v31; // [esp-8h] [ebp-4Ch]
  int v32; // [esp-8h] [ebp-4Ch]
  size_t v33; // [esp-4h] [ebp-48h]
  size_t v34; // [esp-4h] [ebp-48h]
  int v35; // [esp-4h] [ebp-48h]
  size_t v36; // [esp-4h] [ebp-48h]
  size_t v37; // [esp-4h] [ebp-48h]
  size_t v38; // [esp-4h] [ebp-48h]
  size_t v39; // [esp-4h] [ebp-48h]
  int v40; // [esp-4h] [ebp-48h]
  int v41; // [esp-4h] [ebp-48h]
  TESForm a1; // [esp+14h] [ebp-30h] BYREF
  int v43; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v44[20]; // [esp+30h] [ebp-14h] BYREF

  TESForm_LoadModifiedForm((TESForm *)this, Dst, (int)a4.vtbl);
  refID = 0;
  a1.member.flags = 0;
  a1.member.refID = 0;
  if ( sub_45A170() )
  {
    LODWORD(v33) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v43, v33);
    if ( v43 != 0x4B4F4C42 )
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
          "..\\TES Shared\\TESQuest.cpp",
          0xC66,
          *v6,
          v8,
          v30,
          v35);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESQuest.cpp",
          0xC66,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v9 = SaveLoad_CurrentSavegame;
    LODWORD(v34) = 2;
    a1.member.refID = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v9, &a1.member.flags, v34);
    refID = a1.member.refID;
  }
  if ( (Dst & 4) != 0 )
  {
    LODWORD(v33) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&a1.vtbl + 2), v33);
    *(_BYTE *)(this + 0x3C) = BYTE2(a1.vtbl);
  }
  if ( (Dst & 0x10000000) != 0 )
  {
    LODWORD(v33) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&a1.vtbl + 1), v33);
    a1.member.modlist.next = 0;
    if ( BYTE1(a1.vtbl) )
    {
      do
      {
        LODWORD(v36) = 1;
        TESForm_LoadDataFromCurrentSaveGame(&a4, v36);
        LODWORD(v37) = 1;
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&a1.vtbl + 3), v37);
        v10 = this + 0x40;
        if ( this == 0xFFFFFFC0 )
        {
LABEL_15:
          v12 = 0;
          v13 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0xD4))(this);
          PrintError("Could not find stage %i in quest %s during load.", LOBYTE(a4.vtbl), v13);
        }
        else
        {
          while ( 1 )
          {
            v11 = *(int **)v10;
            if ( *(_DWORD *)v10 )
            {
              if ( *(_BYTE *)v11 == LOBYTE(a4.vtbl) )
                break;
            }
            v10 = *(_DWORD *)(v10 + 4);
            if ( !v10 )
              goto LABEL_15;
          }
          v12 = *(int **)v10;
          *((_BYTE *)v11 + 1) = HIBYTE(a1.vtbl);
        }
        LODWORD(v38) = 1;
        TESForm_LoadDataFromCurrentSaveGame(&a1, v38);
        a1.member.modlist.data = 0;
        if ( LOBYTE(a1.vtbl) )
        {
          do
          {
            sub_47D260(&a1.member);
            LODWORD(v36) = 1;
            *(_DWORD *)&v44[0x10] = 0;
            TESForm_LoadDataFromCurrentSaveGame((TESForm *)v44, v36);
            LODWORD(v39) = 4;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1.member, v39);
            if ( v12 )
            {
              v14 = sub_52AC30(v12, v44[0]);
              if ( v14 )
              {
                if ( sub_47D290(&a1.member) || QuestStageItem_GetYear(&a1.member) )
                {
                  v16 = *(_WORD **)(v14 + 0x64);
                  if ( v16 )
                  {
                    sub_47D270(v16, &a1.member);
                  }
                  else
                  {
                    v17 = (_WORD *)FormHeapAlloc(4u);
                    *(_DWORD *)&v44[4] = v17;
                    v44[0x10] = 1;
                    if ( v17 )
                      v18 = sub_47D270(v17, &a1.member);
                    else
                      v18 = 0;
                    *(_DWORD *)(v14 + 0x64) = v18;
                  }
                }
                else
                {
                  v15 = *(_DWORD *)(v14 + 0x64);
                  if ( v15 )
                  {
                    TESTexture::ClearComponentReferences(*(void **)(v14 + 0x64));
                    FormHeapFree(v15);
                    *(_DWORD *)(v14 + 0x64) = 0;
                  }
                }
              }
            }
            *(_DWORD *)&v44[0x10] = 0xFFFFFFFF;
            TESTexture::ClearComponentReferences(&a1.member);
            ++a1.member.modlist.data;
          }
          while ( (int)a1.member.modlist.data < LOBYTE(a1.vtbl) );
        }
        ++a1.member.modlist.next;
      }
      while ( (int)a1.member.modlist.next < BYTE1(a1.vtbl) );
      refID = a1.member.refID;
    }
    *(_BYTE *)(this + 0x5C) = 0;
    sub_529B70((unsigned __int8 **)this);
  }
  if ( (Dst & 0x8000000) != 0 )
  {
    v19 = *(int **)(this + 0x58);
    if ( v19 )
    {
      ScriptEventList_Load_(v19, st7_0);
    }
    else
    {
      v20 = (_DWORD *)FormHeapAlloc(0x14u);
      *(_DWORD *)&v44[0x10] = 2;
      if ( v20 )
        v21 = sub_4F9DB0(v20);
      else
        v21 = 0;
      *(_DWORD *)&v44[0x10] = 0xFFFFFFFF;
      ScriptEventList_Load_(v21, st7_0);
      if ( v21 )
      {
        ScriptEventList_destr__((ScriptEventList *)v21);
        FormHeapFree((unsigned int)v21);
      }
      SaveLoad_CurrentSavegame[1].unk000[0] |= 0x8000000u;
    }
  }
  if ( sub_45A170() )
  {
    v22 = SaveLoad_CurrentSavegame;
    v23 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v24 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v23 )
    {
      v25 = TESForm_LookupByFormID(*v23);
      v26 = refID + LOWORD(a1.member.flags);
      if ( v24 <= v26 )
      {
        if ( v24 < v26 )
        {
          v28 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v25->vtbl->GetEditorName)(
                                v25,
                                *((unsigned __int8 *)v23 + 9),
                                *(UInt32 *)((char *)v23 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            refID + LOWORD(a1.member.flags) - v24,
            "..\\TES Shared\\TESQuest.cpp",
            0xCC7,
            *v23,
            v28,
            v32,
            v41);
        }
      }
      else
      {
        v27 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v25->vtbl->GetEditorName)(
                              v25,
                              *((unsigned __int8 *)v23 + 9),
                              *(UInt32 *)((char *)v23 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v24 - LOWORD(a1.member.flags) - refID,
          "..\\TES Shared\\TESQuest.cpp",
          0xCC7,
          *v23,
          v27,
          v31,
          v40);
      }
    }
    else
    {
      v29 = LOWORD(a1.member.flags) + refID;
      if ( v24 <= v29 )
      {
        if ( v24 < v29 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            refID + LOWORD(a1.member.flags) - v24,
            "..\\TES Shared\\TESQuest.cpp",
            0xCC7,
            LOBYTE(v22[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v24 - LOWORD(a1.member.flags) - refID,
          "..\\TES Shared\\TESQuest.cpp",
          0xCC7,
          LOBYTE(v22[1].createdObjectList.next));
      }
    }
  }
}
