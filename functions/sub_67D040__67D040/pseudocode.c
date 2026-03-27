void __thiscall sub_67D040(char ***this)
{
  UInt32 v2; // ebx
  UInt32 *v3; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  float *v6; // eax
  float *v7; // edi
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  TESSaveLoad *v10; // ecx
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // ecx
  UInt32 v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  UInt32 v17; // edx
  int v18; // [esp-8h] [ebp-40h]
  int v19; // [esp-8h] [ebp-40h]
  int v20; // [esp-8h] [ebp-40h]
  size_t v21; // [esp-4h] [ebp-3Ch]
  size_t v22; // [esp-4h] [ebp-3Ch]
  int v23; // [esp-4h] [ebp-3Ch]
  int v24; // [esp-4h] [ebp-3Ch]
  int v25; // [esp-4h] [ebp-3Ch]
  unsigned __int16 v26; // [esp+14h] [ebp-24h] BYREF
  int v27; // [esp+18h] [ebp-20h] BYREF
  int v28; // [esp+1Ch] [ebp-1Ch]
  int Dst; // [esp+20h] [ebp-18h] BYREF
  char ***v30; // [esp+24h] [ebp-14h]
  float *v31; // [esp+28h] [ebp-10h]
  unsigned int v32; // [esp+34h] [ebp-4h]

  v30 = this;
  v27 = 0;
  v2 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v21) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v21);
    if ( Dst != 0x4B4F4C42 )
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
          ".\\AI\\SpectatorPackage.cpp",
          0x239,
          *v3,
          v5,
          v18,
          v23);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\SpectatorPackage.cpp",
          0x239,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v2 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v22) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v27, v22);
  }
  LODWORD(v21) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v26, v21);
  v28 = 0;
  if ( v26 )
  {
    do
    {
      v6 = (float *)FormHeapAlloc(0x24u);
      v31 = v6;
      v32 = 0;
      if ( v6 )
        v7 = sub_67CBC0(v6);
      else
        v7 = 0;
      v32 = 0xFFFFFFFF;
      sub_67BA90((char *)v7);
      v8 = *v30;
      if ( v7 )
      {
        if ( *v8 )
        {
          v9 = (_DWORD *)FormHeapAlloc(8u);
          if ( v9 )
          {
            *v9 = *v8;
            v9[1] = 0;
          }
          else
          {
            v9 = 0;
          }
          v9[1] = v8[1];
          v8[1] = v9;
        }
        *v8 = v7;
      }
      ++v28;
    }
    while ( v28 < v26 );
  }
  if ( sub_45A170() )
  {
    v10 = SaveLoad_CurrentSavegame;
    v11 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v12 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11);
      v14 = v2 + (unsigned __int16)v27;
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
            v2 + (unsigned __int16)v27 - v12,
            ".\\AI\\SpectatorPackage.cpp",
            0x248,
            *v11,
            v16,
            v20,
            v25);
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
          v12 - (unsigned __int16)v27 - v2,
          ".\\AI\\SpectatorPackage.cpp",
          0x248,
          *v11,
          v15,
          v19,
          v24);
      }
    }
    else
    {
      v17 = (unsigned __int16)v27 + v2;
      if ( v12 <= v17 )
      {
        if ( v12 < v17 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v2 + (unsigned __int16)v27 - v12,
            ".\\AI\\SpectatorPackage.cpp",
            0x248,
            LOBYTE(v10[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v12 - (unsigned __int16)v27 - v2,
          ".\\AI\\SpectatorPackage.cpp",
          0x248,
          LOBYTE(v10[1].createdObjectList.next));
      }
    }
  }
}
