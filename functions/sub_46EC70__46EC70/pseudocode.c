void __userpurge sub_46EC70(unsigned int *a1@<ecx>, int a2@<ebx>, int a3@<esi>, __int16 a4, int a5)
{
  UInt32 v6; // ebx
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  unsigned int v10; // esi
  TESSaveLoad *v11; // ecx
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // ecx
  UInt32 v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  UInt32 v18; // edx
  int v19; // [esp-14h] [ebp-2Ch]
  int v20; // [esp-14h] [ebp-2Ch]
  size_t v21; // [esp-10h] [ebp-28h]
  int v22; // [esp-10h] [ebp-28h]
  int v23; // [esp-10h] [ebp-28h]
  int v24; // [esp-Ch] [ebp-24h]
  size_t v25; // [esp-8h] [ebp-20h]
  size_t v26; // [esp-8h] [ebp-20h]
  int v27; // [esp-8h] [ebp-20h]
  size_t v28; // [esp-8h] [ebp-20h]
  int v29; // [esp+0h] [ebp-18h]
  int v30; // [esp+4h] [ebp-14h]
  int v31; // [esp+8h] [ebp-10h] BYREF
  int Dst; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int16 v33; // [esp+14h] [ebp-4h] BYREF

  if ( (a4 & 8) != 0 )
  {
    v29 = a2;
    HIDWORD(v25) = a3;
    v31 = 0;
    v6 = 0;
    if ( sub_45A170() )
    {
      LODWORD(v25) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v25);
      if ( Dst != 0x4B4F4C42 )
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
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s w"
            "ith version %i and flags %08X",
            "..\\TES Shared\\TESReactionForm.cpp",
            0x519,
            *v7,
            v9,
            v24,
            v27);
        }
        else
        {
          PrintError(
            "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
            "..\\TES Shared\\TESReactionForm.cpp",
            0x519,
            LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
        }
      }
      v6 = SaveLoad_CurrentSavegame->unk000[5];
      LODWORD(v26) = 2;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v31, v26);
    }
    sub_46E600(a1);
    LODWORD(v25) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a4, v25);
    v10 = 0;
    if ( a4 )
    {
      do
      {
        LODWORD(v28) = 4;
        SaveLoad_LoadFormID(&v33, v28, v29, v30, v31);
        LODWORD(v21) = 4;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v31, v21);
        sub_46E900((char *)a1, Dst, v31);
        ++v10;
      }
      while ( v10 < v33 );
    }
    if ( sub_45A170() )
    {
      v11 = SaveLoad_CurrentSavegame;
      v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      v13 = SaveLoad_CurrentSavegame->unk000[5];
      if ( v12 )
      {
        v14 = TESForm_LookupByFormID(*v12);
        v15 = (unsigned __int16)v29 + v6;
        if ( v13 <= v15 )
        {
          if ( v13 < v15 )
          {
            v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v14->vtbl->GetEditorName)(
                                  v14,
                                  *((unsigned __int8 *)v12 + 9),
                                  *(UInt32 *)((char *)v12 + 5));
            PrintError(
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with versio"
              "n %i and flags %08X",
              v6 + (unsigned __int16)v29 - v13,
              "..\\TES Shared\\TESReactionForm.cpp",
              0x52B,
              *v12,
              v17,
              v20,
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
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %"
            "i and flags %08X",
            v13 - (unsigned __int16)v29 - v6,
            "..\\TES Shared\\TESReactionForm.cpp",
            0x52B,
            *v12,
            v16,
            v19,
            v22);
        }
      }
      else
      {
        v18 = (unsigned __int16)v29 + v6;
        if ( v13 <= v18 )
        {
          if ( v13 < v18 )
            PrintError(
              "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
              v6 + (unsigned __int16)v29 - v13,
              "..\\TES Shared\\TESReactionForm.cpp",
              0x52B,
              LOBYTE(v11[1].createdObjectList.next));
        }
        else
        {
          PrintError(
            "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
            v13 - (unsigned __int16)v29 - v6,
            "..\\TES Shared\\TESReactionForm.cpp",
            0x52B,
            LOBYTE(v11[1].createdObjectList.next));
        }
      }
    }
  }
}
