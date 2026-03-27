void __usercall sub_5C1420(int ebp0@<ebp>)
{
  UInt32 *v2; // esi
  TESForm *v3; // eax
  const char *v4; // eax
  TESSaveLoad *v5; // ecx
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  TESSaveLoad *v9; // ecx
  TESForm *v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  TESSaveLoad *v13; // ecx
  UInt32 *v14; // edi
  UInt32 v15; // esi
  TESForm *v16; // eax
  int v17; // ebx
  TESForm *v18; // ecx
  UInt32 v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  UInt32 v22; // edx
  int v23; // [esp-14h] [ebp-38h]
  int v24; // [esp-14h] [ebp-38h]
  int v25; // [esp-10h] [ebp-34h]
  int v26; // [esp-10h] [ebp-34h]
  size_t v27; // [esp-Ch] [ebp-30h]
  int v28; // [esp-8h] [ebp-2Ch]
  size_t v29; // [esp-4h] [ebp-28h]
  size_t v30; // [esp-4h] [ebp-28h]
  int v31; // [esp-4h] [ebp-28h]
  int v32; // [esp+4h] [ebp-20h]
  int v33; // [esp+8h] [ebp-1Ch] BYREF
  int v34; // [esp+Ch] [ebp-18h]
  int v35; // [esp+10h] [ebp-14h] BYREF
  int a1; // [esp+14h] [ebp-10h]
  int v37; // [esp+18h] [ebp-Ch]
  _DWORD Dst[2]; // [esp+1Ch] [ebp-8h] BYREF

  v35 = 0;
  a1 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v29) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, Dst, v29);
    if ( Dst[0] != 0x4B4F4C42 )
    {
      v2 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v2 )
      {
        v3 = TESForm_LookupByFormID(*v2);
        v4 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v3->vtbl->GetEditorName)(
                             v3,
                             *((unsigned __int8 *)v2 + 9),
                             *(UInt32 *)((char *)v2 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x38F,
          *v2,
          v4,
          v28,
          v31);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x38F,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v5 = SaveLoad_CurrentSavegame;
    LODWORD(v30) = 2;
    a1 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v5, &v35, v30);
  }
  v6 = &quickKeyList_ptr;
  v37 = 8;
  LODWORD(v29) = ebp0;
  do
  {
    v7 = (_DWORD *)v6[1];
    while ( v7 )
    {
      v8 = v7;
      v7 = (_DWORD *)*v7;
      HIDWORD(v27) = v8;
      (*(void (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
    }
    LODWORD(v27) = 1;
    v9 = SaveLoad_CurrentSavegame;
    v6[3] = 0;
    v6[1] = 0;
    v6[2] = 0;
    SaveLoad_LoadData((int)v9, (char *)&v33 + 3, v27);
    BYTE2(v33) = 0;
    if ( HIBYTE(v33) )
    {
      do
      {
        LODWORD(v27) = 4;
        SaveLoad_LoadFormID(Dst, v27, v29, SHIDWORD(v29), v32);
        v10 = TESForm_LookupByFormID(a1);
        if ( v10 )
        {
          v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 4))(v6);
          v11[2] = v10;
          v11[1] = 0;
          *v11 = v6[1];
          v12 = v6[1];
          if ( v12 )
            *(_DWORD *)(v12 + 4) = v11;
          else
            v6[2] = v11;
          ++v6[3];
          v6[1] = v11;
        }
        ++BYTE6(v29);
      }
      while ( BYTE6(v29) < HIBYTE(v29) );
    }
    v6 += 4;
    --v34;
  }
  while ( v34 );
  if ( sub_45A170() )
  {
    v13 = SaveLoad_CurrentSavegame;
    v14 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v15 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v14 )
    {
      v16 = TESForm_LookupByFormID(*v14);
      v17 = v33;
      v18 = v16;
      v19 = v33 + (unsigned __int16)v32;
      if ( v15 <= v19 )
      {
        if ( v15 < v19 )
        {
          v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)(
                                v18,
                                *((unsigned __int8 *)v14 + 9),
                                *(UInt32 *)((char *)v14 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v17 + (unsigned __int16)v32 - v15,
            ".\\Interface\\Menus\\QuickKeysMenu.cpp",
            0x3A3,
            *v14,
            v21,
            v24,
            v26);
        }
      }
      else
      {
        v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)(
                              v18,
                              *((unsigned __int8 *)v14 + 9),
                              *(UInt32 *)((char *)v14 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v15 - (unsigned __int16)v32 - v17,
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x3A3,
          *v14,
          v20,
          v23,
          v25);
      }
    }
    else
    {
      v22 = (unsigned __int16)v32 + v33;
      if ( v15 <= v22 )
      {
        if ( v15 < v22 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v33 + (unsigned __int16)v32 - v15,
            ".\\Interface\\Menus\\QuickKeysMenu.cpp",
            0x3A3,
            LOBYTE(v13[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v15 - (unsigned __int16)v32 - v33,
          ".\\Interface\\Menus\\QuickKeysMenu.cpp",
          0x3A3,
          LOBYTE(v13[1].createdObjectList.next));
      }
    }
  }
}
