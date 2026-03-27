char __userpurge sub_647450@<al>(TESForm **ecx0@<ecx>, int a2@<ebx>, float a3, int a4, int a5)
{
  float v5; // edi
  UInt32 v7; // ebp
  UInt32 *v8; // edi
  TESForm *v9; // eax
  const char *v10; // eax
  TESSaveLoad *v11; // ecx
  double v12; // st7
  double v13; // rt0
  double v14; // st6
  double v15; // st5
  unsigned int v16; // ebx
  TESSaveLoad *v17; // ecx
  TESForm *v18; // eax
  TESSaveLoad *v19; // ecx
  UInt32 v20; // eax
  TESSaveLoad *v21; // ecx
  UInt32 *v22; // edi
  UInt32 v23; // esi
  TESForm *v24; // ecx
  const char *v25; // eax
  const char *v26; // eax
  UInt32 v27; // edx
  int v29; // [esp-20h] [ebp-40h]
  int v30; // [esp-20h] [ebp-40h]
  size_t v31; // [esp-1Ch] [ebp-3Ch]
  int v32; // [esp-1Ch] [ebp-3Ch]
  int v33; // [esp-1Ch] [ebp-3Ch]
  size_t v34; // [esp-14h] [ebp-34h]
  size_t v35; // [esp-Ch] [ebp-2Ch]
  int v36; // [esp-Ch] [ebp-2Ch]
  int v37; // [esp-8h] [ebp-28h]
  size_t v38; // [esp-8h] [ebp-28h]
  size_t v39; // [esp-8h] [ebp-28h]
  size_t v40; // [esp-8h] [ebp-28h]
  size_t v41; // [esp-8h] [ebp-28h]
  int v42; // [esp-8h] [ebp-28h]
  size_t v43; // [esp-4h] [ebp-24h]
  size_t v44; // [esp-4h] [ebp-24h]
  int v45; // [esp-4h] [ebp-24h]
  size_t v46; // [esp-4h] [ebp-24h]
  int v47; // [esp-4h] [ebp-24h]
  int v48; // [esp+4h] [ebp-1Ch]
  TESForm *v49; // [esp+4h] [ebp-1Ch]
  int v50; // [esp+8h] [ebp-18h]
  int Dst; // [esp+Ch] [ebp-14h] BYREF
  __int64 v52; // [esp+10h] [ebp-10h] BYREF
  int a1; // [esp+1Ch] [ebp-4h]

  v5 = a3;
  sub_60D3C0(ecx0, a2, (int *)LODWORD(a3), a4, a5);
  v7 = 0;
  a5 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v43) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v43);
    if ( Dst != 0x4B4F4C42 )
    {
      v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v8 )
      {
        v9 = TESForm_LookupByFormID(*v8);
        v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v9->vtbl->GetEditorName)(
                              v9,
                              *((unsigned __int8 *)v8 + 9),
                              *(UInt32 *)((char *)v8 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\LowProcess.cpp",
          0xF38,
          *v8,
          v10,
          v37,
          v45);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\LowProcess.cpp",
          0xF38,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v7 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v44) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a5, v44);
    v5 = a3;
  }
  HIDWORD(v38) = a2;
  LODWORD(v38) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 5, v38);
  v11 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x36u
    || (LODWORD(v39) = 4,
        SaveLoad_LoadData((int)v11, ecx0 + 6, v39),
        v11 = SaveLoad_CurrentSavegame,
        LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x36u) )
  {
    LODWORD(v39) = 4;
    SaveLoad_LoadData((int)v11, &a4, v39);
    v12 = *(float *)&a4;
    unknown_libname_14(dbl_A2FA98, *(float *)&a4);
    a3 = v12;
    v13 = fCostant_100;
    v52 = (__int64)(a3 / v13);
    v14 = *(float *)&a4;
    v15 = *(float *)&a4 / dbl_A2FA98;
    a4 = LOWORD(a3) | 0xC00;
    v52 = (__int64)v15;
    v16 = ((0x10 * (unsigned int)(__int64)v15) | (unsigned int)(__int64)(a3 / v13)) << 9;
    unknown_libname_14(v13, v14);
    a3 = v14;
    a4 = LOWORD(a3) | 0xC00;
    v52 = (__int64)a3;
    ecx0[6] = (TESForm *)(v52 | v16);
    v11 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v39) = 1;
  SaveLoad_LoadData((int)v11, ecx0 + 7, v39);
  LODWORD(v40) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)ecx0 + 0x1D, v40);
  LODWORD(v41) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x21, v41);
  v17 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x34u )
  {
    LODWORD(v43) = 1;
    SaveLoad_LoadData((int)v17, (char *)ecx0 + 0x1F, v43);
    v17 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v17[1].createdObjectList.next) >= 0x37u )
  {
    LODWORD(v43) = 1;
    SaveLoad_LoadData((int)v17, ecx0 + 8, v43);
    v17 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v17[1].createdObjectList.next) >= 0x4Bu )
  {
    LODWORD(v43) = 4;
    SaveLoad_LoadData((int)v17, ecx0 + 0x22, v43);
    v17 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v17[1].createdObjectList.next) >= 0x4Fu )
  {
    LODWORD(v43) = 4;
    SaveLoad_LoadData((int)v17, ecx0 + 0xA, v43);
    LODWORD(v46) = 4;
    SaveLoad_LoadFormID(&a3, v46, v48, v50, Dst);
    v18 = TESForm_LookupByFormID(a1);
    ecx0[9] = (TESForm *)OblivionDynamicCast(
                           v18,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                           0);
    v17 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v17[1].createdObjectList.next) >= 0x56u )
  {
    LODWORD(v35) = 4;
    SaveLoad_LoadData((int)v17, ecx0 + 0xE, v35);
  }
  LODWORD(v35) = 4;
  SaveLoad_LoadFormID(&v52, v35, v43, SHIDWORD(v43), v48);
  LODWORD(v34) = 4;
  ecx0[0xB] = (TESForm *)v50;
  SaveLoad_LoadFormID(&Dst, v34, v36, v42, v47);
  ecx0[0xC] = v49;
  if ( (LODWORD(v5) & 0x400000) != 0 )
    AVCollection_Load(ecx0 + 0x1C);
  v19 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x33u && (LODWORD(v5) & 0x200000) != 0 )
  {
    LODWORD(v31) = 2;
    SaveLoad_LoadData((int)v19, &Dst, v31);
    v19 = SaveLoad_CurrentSavegame;
    if ( (_WORD)Dst )
    {
      SaveLoad_AdvanceBufferOffset(v19, 8 * (unsigned __int16)Dst);
      v19 = SaveLoad_CurrentSavegame;
    }
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x74u )
  {
    LODWORD(v31) = 4;
    SaveLoad_LoadData((int)v19, ecx0 + 0x23, v31);
    v19 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v19[1].createdObjectList.next) >= 0x76u )
  {
    LODWORD(v31) = 1;
    SaveLoad_LoadData((int)v19, (char *)ecx0 + 0x1E, v31);
  }
  LOBYTE(v20) = sub_45A170();
  if ( (_BYTE)v20 )
  {
    v21 = SaveLoad_CurrentSavegame;
    v22 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v23 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v22 )
    {
      v24 = TESForm_LookupByFormID(*v22);
      v20 = WORD2(v52) + v7;
      if ( v23 <= v20 )
      {
        if ( v23 < v20 )
        {
          v26 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v24->vtbl->GetEditorName)(
                                v24,
                                *((unsigned __int8 *)v22 + 9),
                                *(UInt32 *)((char *)v22 + 5));
          LOBYTE(v20) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          v7 + WORD2(v52) - v23,
                          ".\\AI\\LowProcess.cpp",
                          0xF8F,
                          *v22,
                          v26,
                          v30,
                          v33);
        }
      }
      else
      {
        v25 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v24->vtbl->GetEditorName)(
                              v24,
                              *((unsigned __int8 *)v22 + 9),
                              *(UInt32 *)((char *)v22 + 5));
        LOBYTE(v20) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        v23 - WORD2(v52) - v7,
                        ".\\AI\\LowProcess.cpp",
                        0xF8F,
                        *v22,
                        v25,
                        v29,
                        v32);
      }
    }
    else
    {
      LOBYTE(v20) = BYTE4(v52);
      v27 = WORD2(v52) + v7;
      if ( v23 <= v27 )
      {
        if ( v23 < v27 )
          LOBYTE(v20) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          v7 + WORD2(v52) - v23,
                          ".\\AI\\LowProcess.cpp",
                          0xF8F,
                          LOBYTE(v21[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v20) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v23 - WORD2(v52) - v7,
                        ".\\AI\\LowProcess.cpp",
                        0xF8F,
                        LOBYTE(v21[1].createdObjectList.next));
      }
    }
  }
  return v20;
}
