void __usercall sub_61B550(_DWORD *ecx0@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  UInt32 v5; // ebp
  TESSaveLoad *v6; // ecx
  UInt32 *v7; // edi
  TESForm *v8; // eax
  const char *v9; // eax
  TESSaveLoad *v10; // ecx
  int v11; // edi
  TESSaveLoad *v12; // ecx
  TESSaveLoad *v13; // ecx
  int v14; // eax
  TESSaveLoad *v15; // ecx
  TESSaveLoad *v16; // ecx
  TESSaveLoad *v17; // ecx
  TESSaveLoad *v18; // ecx
  TESSaveLoad *v19; // ecx
  TESSaveLoad *v20; // ecx
  UInt32 *v21; // edi
  UInt32 v22; // esi
  TESForm *v23; // ecx
  UInt32 v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  UInt32 v27; // edx
  int v28; // [esp-20h] [ebp-74h]
  int v29; // [esp-20h] [ebp-74h]
  int v30; // [esp-1Ch] [ebp-70h]
  int v31; // [esp-1Ch] [ebp-70h]
  size_t v32; // [esp-14h] [ebp-68h]
  size_t v33; // [esp-Ch] [ebp-60h]
  int v34; // [esp-Ch] [ebp-60h]
  int v35; // [esp-8h] [ebp-5Ch]
  size_t v36; // [esp-4h] [ebp-58h]
  int v37; // [esp-4h] [ebp-58h]
  int v38; // [esp-4h] [ebp-58h]
  unsigned __int16 v39; // [esp+0h] [ebp-54h]
  int v40; // [esp+0h] [ebp-54h]
  size_t v41; // [esp+4h] [ebp-50h]
  int v42; // [esp+4h] [ebp-50h]
  int v43; // [esp+4h] [ebp-50h]
  int v44; // [esp+8h] [ebp-4Ch]
  size_t v45; // [esp+Ch] [ebp-48h]
  size_t v46; // [esp+Ch] [ebp-48h]
  size_t v47; // [esp+Ch] [ebp-48h]
  int v48; // [esp+Ch] [ebp-48h]
  int v49; // [esp+Ch] [ebp-48h]
  int v50; // [esp+10h] [ebp-44h]
  int v51; // [esp+10h] [ebp-44h]
  size_t v52; // [esp+14h] [ebp-40h] BYREF
  size_t v53; // [esp+1Ch] [ebp-38h] BYREF
  int v54; // [esp+24h] [ebp-30h]
  int v55; // [esp+28h] [ebp-2Ch] BYREF
  int v56; // [esp+2Ch] [ebp-28h]
  int v57; // [esp+30h] [ebp-24h] BYREF
  TESForm a1; // [esp+34h] [ebp-20h] BYREF
  int Dst; // [esp+50h] [ebp-4h] BYREF

  sub_567F70(ecx0);
  *(_DWORD *)&a1.member.type = 0;
  v5 = 0;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v53) = 4;
    SaveLoad_LoadData((int)v6, &Dst, v53);
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
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\CombatController.cpp",
          0x28B5,
          *v7,
          v9,
          HIDWORD(v52),
          (_DWORD)v53);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\CombatController.cpp",
          0x28B5,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v10 = SaveLoad_CurrentSavegame;
    v5 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v53) = 2;
    SaveLoad_LoadData((int)v10, &a1.member, v53);
  }
  LODWORD(v53) = 2;
  TESForm_LoadDataFromCurrentSaveGame(&a1, v53);
  v11 = 0;
  if ( LOWORD(a1.vtbl) )
  {
    do
    {
      a4 = 0.0;
      LODWORD(v53) = 4;
      *(float *)&a1.member.modlist.data = 0.0;
      *(float *)&a1.member.modlist.next = 0.0;
      HIBYTE(v57) = 0;
      SaveLoad_LoadFormID(&a1.member.refID, v53, v54, v55, v56);
      v12 = SaveLoad_CurrentSavegame;
      LODWORD(v52) = 4;
      SaveLoad_LoadData((int)v12, &a1, v52);
      if ( (int)a1.vtbl < 0 )
        a1.vtbl = 0;
      v13 = SaveLoad_CurrentSavegame;
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x1Eu )
      {
        LODWORD(v52) = 1;
        SaveLoad_LoadData((int)v13, (char *)&v55 + 3, v52);
        v13 = SaveLoad_CurrentSavegame;
      }
      if ( LOBYTE(v13[1].createdObjectList.next) >= 0x29u )
      {
        LODWORD(v52) = 4;
        SaveLoad_LoadData((int)v13, &a1.member.flags, v52);
        LODWORD(v52) = 4;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a1.member.refID, v52);
      }
      if ( *(_DWORD *)&a1.member.type )
      {
        v14 = FormHeapAlloc(0x14u);
        *(_DWORD *)v14 = *(_DWORD *)&a1.member.type;
        *(_DWORD *)(v14 + 4) = a1.vtbl;
        *(_BYTE *)(v14 + 8) = HIBYTE(v55);
        *(float *)(v14 + 0xC) = *(float *)&a1.member.flags;
        a4 = *(float *)&a1.member.refID;
        LODWORD(v52) = v14;
        *(float *)(v14 + 0x10) = *(float *)&a1.member.refID;
        BSSimpleList_PushBack((_DWORD *)ecx0[0x10], v52);
      }
      ++v11;
    }
    while ( v11 < (unsigned __int16)v56 );
  }
  LODWORD(v52) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x11), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0 + 3, v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x49), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x4A), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x4B), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x13), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x4D), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x4E), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x4F), v52);
  LODWORD(v52) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x14, v52);
  LODWORD(v52) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x15), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x16), v52);
  LODWORD(v52) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x59), v52);
  v15 = SaveLoad_CurrentSavegame;
  LODWORD(v52) = 4;
  SaveLoad_LoadData((int)v15, ecx0 + 0x1B, v52);
  v16 = SaveLoad_CurrentSavegame;
  LODWORD(v52) = 4;
  SaveLoad_LoadData((int)v16, ecx0 + 0x1C, v52);
  LODWORD(v52) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x1D, v52);
  LODWORD(v52) = 0x14;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x2C), v52);
  LODWORD(v52) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x33), v52);
  LODWORD(v52) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x34), v52);
  v17 = SaveLoad_CurrentSavegame;
  LODWORD(v52) = 0xC;
  SaveLoad_LoadData((int)v17, ecx0 + 0x35, v52);
  v18 = SaveLoad_CurrentSavegame;
  LODWORD(v52) = 0xC;
  SaveLoad_LoadData((int)v18, ecx0 + 0x38, v52);
  LODWORD(v52) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x3B, v52);
  v19 = SaveLoad_CurrentSavegame;
  LODWORD(v52) = 0xC;
  SaveLoad_LoadData((int)v19, ecx0 + 0x3E, v52);
  LODWORD(v52) = 4;
  a1.member.modlist.data = 0;
  SaveLoad_LoadFormID(&a1.member.modlist, v52, v53, SHIDWORD(v53), v54);
  if ( a1.member.flags )
    ecx0[0x4B] = a1.member.flags;
  LODWORD(v45) = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x59, v45);
  LODWORD(v46) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x45), v46);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x3Au )
  {
    LODWORD(v47) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x5C), v47);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x3Du )
  {
    LODWORD(v47) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)ecx0 + 0x17D), v47);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Fu )
  {
    sub_6181F0(a2, a3, a4, ecx0 + 0x17);
    sub_6181F0(a2, a3, a4, ecx0 + 0x18);
    sub_6181F0(a2, a3, a4, ecx0 + 0x19);
    LODWORD(v47) = 4;
    *(_DWORD *)&a1.member.type = 0;
    SaveLoad_LoadFormID(&a1.member, v47, v52, SHIDWORD(v52), v53);
    LODWORD(v41) = 4;
    ecx0[0x1F] = v57;
    v57 = 0;
    SaveLoad_LoadFormID(&v57, v41, v48, v50, v52);
    LODWORD(v36) = 4;
    ecx0[0x20] = v55;
    v55 = 0;
    SaveLoad_LoadFormID(&v55, v36, v42, v44, v49);
    LODWORD(v33) = 4;
    ecx0[0x21] = HIDWORD(v53);
    HIDWORD(v53) = 0;
    SaveLoad_LoadFormID((char *)&v53 + 4, v33, v37, v40, v43);
    LODWORD(v32) = 4;
    ecx0[0x22] = HIDWORD(v52);
    HIDWORD(v52) = 0;
    SaveLoad_LoadFormID((char *)&v52 + 4, v32, v34, v35, v38);
    ecx0[0x23] = v51;
    sub_618290(a2, a3, a4, ecx0 + 0x24);
    sub_618290(a2, a3, a4, ecx0 + 0x25);
    sub_618290(a2, a3, a4, ecx0 + 0x26);
    sub_618290(a2, a3, a4, ecx0 + 0x27);
    sub_618290(a2, a3, a4, ecx0 + 0x28);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x66u )
    sub_6181F0(a2, a3, a4, ecx0 + 0x1A);
  if ( sub_45A170() )
  {
    v20 = SaveLoad_CurrentSavegame;
    v21 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v22 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v21 )
    {
      v23 = TESForm_LookupByFormID(*v21);
      v24 = v39 + v5;
      if ( v22 <= v24 )
      {
        if ( v22 < v24 )
        {
          v26 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v23->vtbl->GetEditorName)(
                                v23,
                                *((unsigned __int8 *)v21 + 9),
                                *(UInt32 *)((char *)v21 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v5 + v39 - v22,
            ".\\AI\\CombatController.cpp",
            0x2922,
            *v21,
            v26,
            v29,
            v31);
        }
      }
      else
      {
        v25 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v23->vtbl->GetEditorName)(
                              v23,
                              *((unsigned __int8 *)v21 + 9),
                              *(UInt32 *)((char *)v21 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v22 - v39 - v5,
          ".\\AI\\CombatController.cpp",
          0x2922,
          *v21,
          v25,
          v28,
          v30);
      }
    }
    else
    {
      v27 = v39 + v5;
      if ( v22 <= v27 )
      {
        if ( v22 < v27 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v5 + v39 - v22,
            ".\\AI\\CombatController.cpp",
            0x2922,
            LOBYTE(v20[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v22 - v39 - v5,
          ".\\AI\\CombatController.cpp",
          0x2922,
          LOBYTE(v20[1].createdObjectList.next));
      }
    }
  }
}
