void __fastcall sub_606E10(TESForm::ModReferenceList *ecx0)
{
  UInt32 v2; // ebx
  UInt32 *v3; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  int v6; // edi
  TESForm::ModReferenceList *next; // esi
  TESForm::ModReferenceList *v8; // eax
  TESSaveLoad *v9; // ecx
  UInt32 *v10; // edi
  UInt32 v11; // esi
  TESForm *v12; // ecx
  UInt32 v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  UInt32 v16; // edx
  int v17; // [esp-8h] [ebp-34h]
  int v18; // [esp-8h] [ebp-34h]
  int v19; // [esp-8h] [ebp-34h]
  size_t v20; // [esp-4h] [ebp-30h]
  size_t v21; // [esp-4h] [ebp-30h]
  int v22; // [esp-4h] [ebp-30h]
  size_t v23; // [esp-4h] [ebp-30h]
  size_t v24; // [esp-4h] [ebp-30h]
  int v25; // [esp-4h] [ebp-30h]
  int v26; // [esp-4h] [ebp-30h]
  char Dst; // [esp+13h] [ebp-19h] BYREF
  TESForm a1; // [esp+14h] [ebp-18h] BYREF

  a1.member.modlist.next = ecx0;
  sub_567F70(ecx0);
  *(_DWORD *)&a1.member.type = 0;
  v2 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v20) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1.member.refID, v20);
    if ( a1.member.refID != 0x4B4F4C42 )
    {
      v3 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v3 )
      {
        v4 = TESForm_LookupByFormID(*v3);
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)(
                             v4,
                             *((unsigned __int8 *)v3 + 9),
                             *(UInt32 *)((char *)v3 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\AlarmPackage.cpp",
          0x21E,
          *v3,
          v5,
          v17,
          v22);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\AlarmPackage.cpp",
          0x21E,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v2 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v21) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1.member, v21);
  }
  LODWORD(v20) = 2;
  TESForm_LoadDataFromCurrentSaveGame(&a1, v20);
  a1.member.flags = 0;
  if ( LOWORD(a1.vtbl) )
  {
    do
    {
      LODWORD(v23) = 1;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v23);
      LODWORD(v24) = 2;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1.member.modlist, v24);
      v6 = sub_675D00(&ActorProcessManager_ptr, Dst, (__int16)a1.member.modlist.data);
      if ( v6 )
      {
        next = a1.member.modlist.next[7].next;
        if ( next->data )
        {
          v8 = (TESForm::ModReferenceList *)FormHeapAlloc(8u);
          if ( v8 )
          {
            v8->data = next->data;
            v8->next = 0;
          }
          else
          {
            v8 = 0;
          }
          v8->next = next->next;
          next->next = v8;
        }
        next->data = (Data *)v6;
      }
      ++a1.member.flags;
    }
    while ( a1.member.flags < LOWORD(a1.vtbl) );
  }
  if ( sub_45A170() )
  {
    v9 = SaveLoad_CurrentSavegame;
    v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v11 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v10 )
    {
      v12 = TESForm_LookupByFormID(*v10);
      v13 = v2 + *(unsigned __int16 *)&a1.member.type;
      if ( v11 <= v13 )
      {
        if ( v11 < v13 )
        {
          v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)(
                                v12,
                                *((unsigned __int8 *)v10 + 9),
                                *(UInt32 *)((char *)v10 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v2 + *(unsigned __int16 *)&a1.member.type - v11,
            ".\\AI\\AlarmPackage.cpp",
            0x232,
            *v10,
            v15,
            v19,
            v26);
        }
      }
      else
      {
        v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v12->vtbl->GetEditorName)(
                              v12,
                              *((unsigned __int8 *)v10 + 9),
                              *(UInt32 *)((char *)v10 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v11 - *(unsigned __int16 *)&a1.member.type - v2,
          ".\\AI\\AlarmPackage.cpp",
          0x232,
          *v10,
          v14,
          v18,
          v25);
      }
    }
    else
    {
      v16 = *(unsigned __int16 *)&a1.member.type + v2;
      if ( v11 <= v16 )
      {
        if ( v11 < v16 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v2 + *(unsigned __int16 *)&a1.member.type - v11,
            ".\\AI\\AlarmPackage.cpp",
            0x232,
            LOBYTE(v9[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v11 - *(unsigned __int16 *)&a1.member.type - v2,
          ".\\AI\\AlarmPackage.cpp",
          0x232,
          LOBYTE(v9[1].createdObjectList.next));
      }
    }
  }
}
