void __thiscall sub_67BA90(char *this)
{
  UInt32 v3; // ebx
  UInt32 *v4; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // eax
  int v11; // eax
  TESSaveLoad *v12; // ecx
  UInt32 *v13; // edi
  UInt32 v14; // esi
  TESForm *v15; // ecx
  UInt32 v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  UInt32 v19; // edx
  int v20; // [esp-14h] [ebp-4Ch]
  int v21; // [esp-14h] [ebp-4Ch]
  size_t v22; // [esp-10h] [ebp-48h]
  size_t v23; // [esp-10h] [ebp-48h]
  size_t v24; // [esp-10h] [ebp-48h]
  size_t v25; // [esp-10h] [ebp-48h]
  int v26; // [esp-10h] [ebp-48h]
  int v27; // [esp-10h] [ebp-48h]
  size_t v28; // [esp-8h] [ebp-40h]
  size_t v29; // [esp+0h] [ebp-38h]
  size_t v30; // [esp+0h] [ebp-38h]
  int v31; // [esp+0h] [ebp-38h]
  int v32; // [esp+4h] [ebp-34h]
  int v33; // [esp+4h] [ebp-34h]
  int v34[2]; // [esp+8h] [ebp-30h]
  int v35[2]; // [esp+8h] [ebp-30h]
  int v36; // [esp+8h] [ebp-30h]
  size_t v37; // [esp+8h] [ebp-30h]
  int v38; // [esp+8h] [ebp-30h]
  unsigned __int16 v39; // [esp+8h] [ebp-30h]
  int a2; // [esp+10h] [ebp-28h]
  int a2a; // [esp+10h] [ebp-28h]
  int v42; // [esp+14h] [ebp-24h]
  int v43; // [esp+18h] [ebp-20h] BYREF
  int v44; // [esp+1Ch] [ebp-1Ch] BYREF
  int v45; // [esp+20h] [ebp-18h] BYREF
  int v46; // [esp+24h] [ebp-14h]
  int v47; // [esp+28h] [ebp-10h]
  int Dst; // [esp+2Ch] [ebp-Ch] BYREF
  _BYTE v49[8]; // [esp+30h] [ebp-8h] BYREF

  v45 = 0;
  v3 = 0;
  if ( sub_45A170() )
  {
    v34[0] = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, *(size_t *)v34);
    if ( Dst != 0x4B4F4C42 )
    {
      v4 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v4 )
      {
        v5 = TESForm_LookupByFormID(*v4);
        v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v5->vtbl->GetEditorName)(
                             v5,
                             *((unsigned __int8 *)v4 + 9),
                             *(UInt32 *)((char *)v4 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\SpectatorPackage.cpp",
          0x14D,
          *v4,
          v6,
          v32,
          v36);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\SpectatorPackage.cpp",
          0x14D,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v3 = SaveLoad_CurrentSavegame->unk000[5];
    v35[0] = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v45, *(size_t *)v35);
  }
  v34[0] = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v44, *(size_t *)v34);
  v46 = 0;
  if ( (_WORD)v44 )
  {
    do
    {
      v7 = FormHeapAlloc(0xCu);
      LODWORD(v37) = 4;
      v8 = (_DWORD *)v7;
      SaveLoad_LoadFormID(v49, v37, a2, v42, v43);
      LODWORD(v30) = 1;
      *v8 = v47;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v8 + 1, v30);
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x39u )
      {
        LODWORD(v29) = 4;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v8 + 2, v29);
      }
      v9 = *(_DWORD **)this;
      if ( **(_DWORD **)this )
      {
        v10 = (_DWORD *)FormHeapAlloc(8u);
        if ( v10 )
        {
          *v10 = *v9;
          v10[1] = 0;
        }
        else
        {
          v10 = 0;
        }
        v10[1] = v9[1];
        v9[1] = v10;
      }
      v11 = v44;
      *v9 = v8;
      v44 = v11 + 1;
    }
    while ( v11 + 1 < (unsigned __int16)v42 );
  }
  LODWORD(v29) = 4;
  SaveLoad_LoadFormID(&Dst, v29, v37, SHIDWORD(v37), a2);
  LODWORD(v28) = 4;
  *((_DWORD *)this + 1) = v46;
  SaveLoad_LoadFormID(&v43, v28, v31, v33, v38);
  sub_4606D0((char *)SaveLoad_CurrentSavegame, a2a);
  TESForm_SetFormID(*((TESForm **)this + 2), a2a, 1);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 2) + 0xE4))(*((_DWORD *)this + 2));
  LODWORD(v22) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0xC, v22);
  LODWORD(v23) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x10, v23);
  LODWORD(v24) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x14, v24);
  LODWORD(v25) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x20, v25);
  if ( sub_45A170() )
  {
    v12 = SaveLoad_CurrentSavegame;
    v13 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v14 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v13 )
    {
      v15 = TESForm_LookupByFormID(*v13);
      v16 = v39 + v3;
      if ( v14 <= v16 )
      {
        if ( v14 < v16 )
        {
          v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)(
                                v15,
                                *((unsigned __int8 *)v13 + 9),
                                *(UInt32 *)((char *)v13 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v3 + v39 - v14,
            ".\\AI\\SpectatorPackage.cpp",
            0x176,
            *v13,
            v18,
            v21,
            v27);
        }
      }
      else
      {
        v17 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v15->vtbl->GetEditorName)(
                              v15,
                              *((unsigned __int8 *)v13 + 9),
                              *(UInt32 *)((char *)v13 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v14 - v39 - v3,
          ".\\AI\\SpectatorPackage.cpp",
          0x176,
          *v13,
          v17,
          v20,
          v26);
      }
    }
    else
    {
      v19 = v39 + v3;
      if ( v14 <= v19 )
      {
        if ( v14 < v19 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v3 + v39 - v14,
            ".\\AI\\SpectatorPackage.cpp",
            0x176,
            LOBYTE(v12[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v14 - v39 - v3,
          ".\\AI\\SpectatorPackage.cpp",
          0x176,
          LOBYTE(v12[1].createdObjectList.next));
      }
    }
  }
}
