char __userpurge TESActorBaseData_LoadModifiedComponent@<al>(unsigned int *ecx0@<ecx>, int a2@<ebx>, char a3, int a4)
{
  UInt32 v5; // ebp
  UInt32 *v6; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  TESForm *v9; // ebx
  int v10; // edi
  _DWORD *v11; // eax
  UInt32 v12; // eax
  TESSaveLoad *v13; // ecx
  UInt32 *v14; // edi
  UInt32 v15; // esi
  TESForm *v16; // ecx
  const char *v17; // eax
  const char *v18; // eax
  UInt32 v19; // edx
  size_t v21; // [esp-10h] [ebp-30h]
  int v22; // [esp-10h] [ebp-30h]
  int v23; // [esp-10h] [ebp-30h]
  int v24; // [esp-Ch] [ebp-2Ch]
  int v25; // [esp-Ch] [ebp-2Ch]
  _BYTE v26[12]; // [esp-8h] [ebp-28h]
  int v27; // [esp-8h] [ebp-28h]
  size_t v28; // [esp-8h] [ebp-28h]
  size_t v29; // [esp-4h] [ebp-24h]
  int v30; // [esp-4h] [ebp-24h]
  int v31; // [esp+4h] [ebp-1Ch]
  int v32; // [esp+8h] [ebp-18h]
  int v33; // [esp+Ch] [ebp-14h] BYREF
  int v34; // [esp+10h] [ebp-10h] BYREF
  int a1; // [esp+14h] [ebp-Ch]
  int Dst; // [esp+18h] [ebp-8h] BYREF
  _BYTE v37[4]; // [esp+1Ch] [ebp-4h] BYREF

  v5 = 0;
  v34 = 0;
  if ( sub_45A170() )
  {
    *(_DWORD *)&v26[4] = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, *(size_t *)&v26[4]);
    if ( Dst != 0x4B4F4C42 )
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
          "..\\TES Shared\\TESActorBaseData.cpp",
          0x678,
          *v6,
          v8,
          v27,
          v30);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESActorBaseData.cpp",
          0x678,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v5 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v29) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v34, v29);
  }
  HIDWORD(v28) = a2;
  if ( (a3 & 0x10) != 0 )
  {
    LODWORD(v28) = 0x10;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 1, v28);
  }
  if ( (a3 & 0x40) != 0 )
  {
    TESActorBaseData_ClearFactionList(ecx0);
    LODWORD(v28) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v33, v28);
    a1 = 0;
    if ( (_WORD)v33 )
    {
      do
      {
        *(_DWORD *)v26 = 4;
        SaveLoad_LoadFormID(v37, *(size_t *)v26, *(int *)&v26[8], v31, v32);
        LODWORD(v21) = 1;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v37, v21);
        v9 = TESForm_LookupByFormID(a1);
        if ( v9 )
        {
          v10 = FormHeapAlloc(8u);
          *(_DWORD *)v10 = v9;
          *(_BYTE *)(v10 + 4) = v37[0];
          if ( ecx0[6] )
          {
            v11 = (_DWORD *)FormHeapAlloc(8u);
            if ( v11 )
            {
              *v11 = ecx0[6];
              v11[1] = 0;
            }
            else
            {
              v11 = 0;
            }
            v11[1] = ecx0[7];
            ecx0[7] = (unsigned int)v11;
          }
          ecx0[6] = v10;
        }
        ++v33;
      }
      while ( v33 < (unsigned __int16)v31 );
    }
  }
  LOBYTE(v12) = sub_45A170();
  if ( (_BYTE)v12 )
  {
    v13 = SaveLoad_CurrentSavegame;
    v14 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v14 )
    {
      v16 = TESForm_LookupByFormID(*v14);
      v12 = v5 + (unsigned __int16)v32;
      if ( v15 <= v12 )
      {
        if ( v15 < v12 )
        {
          v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v16->vtbl->GetEditorName)(
                                v16,
                                *((unsigned __int8 *)v14 + 9),
                                *(UInt32 *)((char *)v14 + 5));
          LOBYTE(v12) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          v5 + (unsigned __int16)v32 - v15,
                          "..\\TES Shared\\TESActorBaseData.cpp",
                          0x69A,
                          *v14,
                          v18,
                          v23,
                          v25);
        }
      }
      else
      {
        v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v16->vtbl->GetEditorName)(
                              v16,
                              *((unsigned __int8 *)v14 + 9),
                              *(UInt32 *)((char *)v14 + 5));
        LOBYTE(v12) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        v15 - (unsigned __int16)v32 - v5,
                        "..\\TES Shared\\TESActorBaseData.cpp",
                        0x69A,
                        *v14,
                        v17,
                        v22,
                        v24);
      }
    }
    else
    {
      LOBYTE(v12) = v32;
      v19 = (unsigned __int16)v32 + v5;
      if ( v15 <= v19 )
      {
        if ( v15 < v19 )
          LOBYTE(v12) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          v5 + (unsigned __int16)v32 - v15,
                          "..\\TES Shared\\TESActorBaseData.cpp",
                          0x69A,
                          LOBYTE(v13[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v12) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v15 - (unsigned __int16)v32 - v5,
                        "..\\TES Shared\\TESActorBaseData.cpp",
                        0x69A,
                        LOBYTE(v13[1].createdObjectList.next));
      }
    }
  }
  return v12;
}
