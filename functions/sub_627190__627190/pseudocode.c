void __usercall sub_627190(_DWORD *ecx0@<ecx>, int a2@<ebp>)
{
  UInt32 v4; // ebx
  UInt32 *v5; // edi
  TESForm *v6; // eax
  const char *v7; // eax
  int v8; // ebp
  int v9; // edi
  _DWORD *v10; // eax
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // ecx
  UInt32 v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  UInt32 v18; // edx
  _BYTE v19[12]; // [esp-18h] [ebp-44h]
  int v20; // [esp-18h] [ebp-44h]
  int v21; // [esp-18h] [ebp-44h]
  int v22; // [esp-14h] [ebp-40h]
  int v23; // [esp-14h] [ebp-40h]
  size_t v24; // [esp-10h] [ebp-3Ch]
  size_t v25; // [esp-8h] [ebp-34h]
  int v26; // [esp-8h] [ebp-34h]
  int v27; // [esp-4h] [ebp-30h]
  int v28[3]; // [esp+0h] [ebp-2Ch]
  int v29; // [esp+0h] [ebp-2Ch]
  size_t v30; // [esp+0h] [ebp-2Ch]
  int v31; // [esp+0h] [ebp-2Ch]
  unsigned __int16 v32; // [esp+0h] [ebp-2Ch]
  size_t v33; // [esp+4h] [ebp-28h]
  int v34; // [esp+4h] [ebp-28h]
  int v35; // [esp+Ch] [ebp-20h]
  int v36; // [esp+10h] [ebp-1Ch]
  TESForm a1; // [esp+14h] [ebp-18h] BYREF

  sub_567F70(ecx0);
  v4 = 0;
  *(_DWORD *)&a1.member.type = 0;
  if ( sub_45A170() )
  {
    v28[1] = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1.member.flags, *(size_t *)&v28[1]);
    if ( a1.member.flags != (kFormFlags_CantWait|kFormFlags_Compressed|kFormFlags_OffLimits|kFormFlags_Temporary|kFormFlags_InitiallyDisabled|kFormFlags_QuestItem|kFormFlags_BorderRegion|kFormFlags_FromActiveFile|0x4B410000) )
    {
      v5 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v5 )
      {
        v6 = TESForm_LookupByFormID(*v5);
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)(
                             v6,
                             *((unsigned __int8 *)v5 + 9),
                             *(UInt32 *)((char *)v5 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\FleePackage.cpp",
          0x211,
          *v5,
          v7,
          v29,
          v34);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\FleePackage.cpp",
          0x211,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v4 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v33) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1.member, v33);
  }
  HIDWORD(v30) = a2;
  LODWORD(v30) = 2;
  TESForm_LoadDataFromCurrentSaveGame(&a1, v30);
  v8 = 0;
  if ( LOWORD(a1.vtbl) )
  {
    do
    {
      v28[0] = 4;
      TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1.member.refID, *(size_t *)v28, v28[2], v35, v36);
      v9 = *(_DWORD *)&a1.member.type;
      if ( *(_DWORD *)&a1.member.type )
      {
        if ( ecx0[0x15] )
        {
          v10 = (_DWORD *)FormHeapAlloc(8u);
          if ( v10 )
          {
            *v10 = ecx0[0x15];
            v10[1] = 0;
            v10[1] = ecx0[0x16];
            ecx0[0x16] = v10;
          }
          else
          {
            *(_DWORD *)4 = ecx0[0x16];
            ecx0[0x16] = 0;
          }
          ecx0[0x15] = v9;
        }
        else
        {
          ecx0[0x15] = *(_DWORD *)&a1.member.type;
        }
      }
      ++v8;
    }
    while ( v8 < (unsigned __int16)v35 );
  }
  LODWORD(v25) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1.member.flags, v25, v28[0], v28[1], v28[2]);
  LODWORD(v24) = 4;
  ecx0[0x18] = a1.vtbl;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1.member, v24, v26, v27, v31);
  *(_DWORD *)v19 = 1;
  ecx0[0x17] = v36;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x3D), *(size_t *)v19);
  *(_DWORD *)v19 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x19), *(size_t *)v19);
  *(_DWORD *)v19 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x14), *(size_t *)v19);
  *(_DWORD *)v19 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x13), *(size_t *)v19);
  *(_DWORD *)v19 = 0xC;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x10), *(size_t *)v19);
  *(_DWORD *)v19 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0xF), *(size_t *)v19);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    *(_DWORD *)&v19[4] = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x65), *(size_t *)&v19[4]);
  }
  if ( sub_45A170() )
  {
    v11 = SaveLoad_CurrentSavegame;
    v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12);
      v15 = v32 + v4;
      if ( v13 <= v15 )
      {
        if ( v13 < v15 )
        {
          v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)(
                                v14,
                                *((unsigned __int8 *)v12 + 9),
                                *(UInt32 *)((char *)v12 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v4 + v32 - v13,
            ".\\AI\\FleePackage.cpp",
            0x239,
            *v12,
            v17,
            v21,
            v23);
        }
      }
      else
      {
        v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)(
                              v14,
                              *((unsigned __int8 *)v12 + 9),
                              *(UInt32 *)((char *)v12 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v13 - v32 - v4,
          ".\\AI\\FleePackage.cpp",
          0x239,
          *v12,
          v16,
          v20,
          v22);
      }
    }
    else
    {
      v18 = v32 + v4;
      if ( v13 <= v18 )
      {
        if ( v13 < v18 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v4 + v32 - v13,
            ".\\AI\\FleePackage.cpp",
            0x239,
            LOBYTE(v11[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v13 - v32 - v4,
          ".\\AI\\FleePackage.cpp",
          0x239,
          LOBYTE(v11[1].createdObjectList.next));
      }
    }
  }
}
