// local variable allocation has failed, the output may be wrong!
void __userpurge sub_63ED20(TESForm **ecx0@<ecx>, int a2@<ebp>, double st7_0@<st0>, int a4, int a5, TESObjectREFR *a6)
{
  TESSaveLoad *v7; // ecx
  UInt32 *v8; // edi
  TESForm *v9; // eax
  const char *v10; // eax
  TESSaveLoad *v11; // ecx
  UInt32 v12; // eax
  TESSaveLoad *v13; // ecx
  TESSaveLoad *v14; // ecx
  TESSaveLoad *v15; // ecx
  TESSaveLoad *v16; // ecx
  TESSaveLoad *v17; // ecx
  TESSaveLoad *v18; // ecx
  TESSaveLoad *v19; // ecx
  TESSaveLoad *v20; // ecx
  TESSaveLoad *v21; // ecx
  TESSaveLoad *v22; // ecx
  TESSaveLoad *v23; // ecx
  TESSaveLoad *v24; // ecx
  TESSaveLoad *v25; // ecx
  TESSaveLoad *v26; // ecx
  TESSaveLoad *v27; // ecx
  TESSaveLoad *v28; // ecx
  TESSaveLoad *v29; // ecx
  TESSaveLoad *v30; // ecx
  TESSaveLoad *v31; // ecx
  TESSaveLoad *v32; // ecx
  TESSaveLoad *v33; // ecx
  TESSaveLoad *v34; // ecx
  TESForm *v35; // eax
  unsigned int *v36; // edi
  TESForm *v37; // edi
  int v38; // ebp
  TESSaveLoad *v39; // ecx
  unsigned int v40; // ebx
  int v41; // eax
  TESFormVtbl *v42; // edi
  TESForm *v43; // ebp
  TESFormVtbl **v44; // eax
  PlayerCharacter *v45; // ebx
  unsigned int *i; // edi
  TESForm *v47; // edi
  int v48; // ebp
  unsigned int v49; // edi
  bool v50; // zf
  TESSaveLoad *v51; // ecx
  TESForm **v52; // ebp
  int v53; // edi
  TESSaveLoad *v54; // ecx
  UInt32 *v55; // edi
  UInt32 v56; // esi
  TESForm *v57; // ecx
  UInt32 v58; // eax
  const char *v59; // eax
  const char *v60; // eax
  UInt32 v61; // edx
  int v62; // [esp-14h] [ebp-8Ch]
  int v63; // [esp-14h] [ebp-8Ch]
  int v64; // [esp-10h] [ebp-88h]
  int v65; // [esp-10h] [ebp-88h]
  size_t v66; // [esp-8h] [ebp-80h]
  size_t v67; // [esp-8h] [ebp-80h]
  size_t v68; // [esp-8h] [ebp-80h]
  size_t v69; // [esp-8h] [ebp-80h]
  size_t v70; // [esp-8h] [ebp-80h]
  size_t v71; // [esp-8h] [ebp-80h]
  size_t v72; // [esp-8h] [ebp-80h]
  size_t v73; // [esp-8h] [ebp-80h]
  size_t v74; // [esp-8h] [ebp-80h]
  size_t v75; // [esp-8h] [ebp-80h]
  int v76; // [esp-4h] [ebp-7Ch]
  size_t v77; // [esp+0h] [ebp-78h] OVERLAPPED
  size_t v78; // [esp+0h] [ebp-78h]
  size_t v79; // [esp+4h] [ebp-74h]
  size_t v80; // [esp+4h] [ebp-74h]
  int v81; // [esp+8h] [ebp-70h]
  size_t v82; // [esp+Ch] [ebp-6Ch]
  size_t v83; // [esp+Ch] [ebp-6Ch]
  size_t v84; // [esp+Ch] [ebp-6Ch]
  size_t v85; // [esp+Ch] [ebp-6Ch]
  size_t v86; // [esp+Ch] [ebp-6Ch]
  size_t v87; // [esp+14h] [ebp-64h]
  int v88; // [esp+1Ch] [ebp-5Ch]
  size_t v89; // [esp+20h] [ebp-58h]
  _DWORD *v90; // [esp+20h] [ebp-58h]
  float *v91; // [esp+24h] [ebp-54h]
  size_t v92; // [esp+28h] [ebp-50h] BYREF
  size_t v93; // [esp+30h] [ebp-48h] BYREF
  size_t v94; // [esp+38h] [ebp-40h] BYREF
  size_t v95; // [esp+40h] [ebp-38h]
  int v96; // [esp+48h] [ebp-30h] BYREF
  int v97; // [esp+4Ch] [ebp-2Ch] BYREF
  void (__thiscall *v98)(BaseFormComponent *); // [esp+50h] [ebp-28h] BYREF
  PlayerCharacter *v99; // [esp+54h] [ebp-24h] BYREF
  TESForm *v100; // [esp+58h] [ebp-20h] BYREF
  int Dst; // [esp+5Ch] [ebp-1Ch] BYREF
  int a1; // [esp+60h] [ebp-18h] BYREF
  char v103[8]; // [esp+68h] [ebp-10h] BYREF
  TESForm **v104; // [esp+70h] [ebp-8h]
  TESForm **v105; // [esp+74h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+78h] [ebp+0h] BYREF

  sub_6564C0(ecx0, st7_0, a4, a5, a6);
  v98 = 0;
  v100 = 0;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v95) = 4;
    SaveLoad_LoadData((int)v7, &Dst, v95);
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
          ".\\AI\\HighProcess.cpp",
          0x2BA8,
          *v8,
          v10,
          HIDWORD(v94),
          (_DWORD)v95);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\HighProcess.cpp",
          0x2BA8,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v11 = SaveLoad_CurrentSavegame;
    v12 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v95) = 2;
    v100 = (TESForm *)v12;
    SaveLoad_LoadData((int)v11, &v98, v95);
  }
  v13 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x3Eu )
  {
    LODWORD(v95) = 1;
    SaveLoad_LoadData((int)v13, &a5, v95);
    v13 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v95) = 1;
  SaveLoad_LoadData((int)v13, ecx0 + 0x8A, v95);
  v14 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 1;
  SaveLoad_LoadData((int)v14, ecx0 + 0x8F, v95);
  v15 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x71u )
  {
    LODWORD(v95) = 1;
    SaveLoad_LoadData((int)v15, (char *)ecx0 + 0x1F, v95);
    v15 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v15[1].createdObjectList.next) < 0x19u )
  {
    LODWORD(v95) = 1;
    SaveLoad_LoadData((int)v15, &a5, v95);
    v15 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v95) = 1;
  SaveLoad_LoadData((int)v15, ecx0 + 0x97, v95);
  v16 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x1Bu )
  {
    LODWORD(v95) = 1;
    SaveLoad_LoadData((int)v16, (char *)ecx0 + 0x25D, v95);
    v16 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v95) = 2;
  SaveLoad_LoadData((int)v16, ecx0 + 0x7F, v95);
  v17 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 2;
  SaveLoad_LoadData((int)v17, ecx0 + 0x7D, v95);
  LODWORD(v95) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x82, v95);
  v18 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v18, ecx0 + 0x7C, v95);
  v19 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v19, ecx0 + 0x6B, v95);
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x81, v95);
  v20 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v20, ecx0 + 0x87, v95);
  v21 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v21, ecx0 + 0x8B, v95);
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x8C, v95);
  v22 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v22, ecx0 + 0x8D, v95);
  v23 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v23, ecx0 + 0x92, v95);
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x66, v95);
  v24 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v24, ecx0 + 0x6C, v95);
  v25 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v25, ecx0 + 0x6D, v95);
  v26 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x32u )
  {
    LODWORD(v95) = 4;
    SaveLoad_LoadData((int)v26, ecx0 + 0x67, v95);
    v26 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v26, ecx0 + 0x73, v95);
  LODWORD(v95) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x91, v95);
  v27 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 0xC;
  SaveLoad_LoadData((int)v27, ecx0 + 0x83, v95);
  v28 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v28, ecx0 + 0x95, v95);
  v29 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  v104 = ecx0 + 0xAF;
  SaveLoad_LoadData((int)v29, ecx0 + 0xAF, v95);
  v30 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  v105 = ecx0 + 0xB0;
  SaveLoad_LoadData((int)v30, ecx0 + 0xB0, v95);
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x8E, v95);
  v31 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v31, ecx0 + 0x6A, v95);
  v32 = SaveLoad_CurrentSavegame;
  LODWORD(v95) = 4;
  SaveLoad_LoadData((int)v32, ecx0 + 0x6E, v95);
  v33 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x14u )
  {
    LODWORD(v95) = 4;
    SaveLoad_LoadData((int)v33, ecx0 + 0x98, v95);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x3Fu )
  {
    LODWORD(v95) = 1;
    SaveLoad_LoadData((int)v33, ecx0 + 0x9E, v95);
    LODWORD(v95) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x9D, v95);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x42u )
  {
    LODWORD(v95) = 1;
    SaveLoad_LoadData((int)v33, ecx0 + 0xA4, v95);
    v34 = SaveLoad_CurrentSavegame;
    LODWORD(v95) = 4;
    SaveLoad_LoadData((int)v34, ecx0 + 0xA3, v95);
  }
  LODWORD(v95) = 4;
  SaveLoad_LoadFormID(&a1, v95, v96, v97, (int)v98);
  ecx0[0x86] = v100;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x71u )
  {
    LODWORD(v94) = 4;
    SaveLoad_LoadFormID(&retaddr, v94, v95, SHIDWORD(v95), v96);
  }
  LODWORD(v93) = 4;
  SaveLoad_LoadFormID(&v99, v93, v94, SHIDWORD(v94), v95);
  ecx0[0x69] = (TESForm *)v97;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x4Fu )
  {
    LODWORD(v92) = 4;
    SaveLoad_LoadFormID(v103, v92, v93, SHIDWORD(v93), v94);
    v35 = TESForm_LookupByFormID(a1);
    ecx0[9] = (TESForm *)OblivionDynamicCast(
                           v35,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                           0);
  }
  LODWORD(v89) = 4;
  SaveLoad_LoadFormID(&v96, v89, v92, SHIDWORD(v92), v93);
  v36 = (unsigned int *)ecx0[0x63];
  for ( ecx0[0xB1] = (TESForm *)v95; v36; v36 = (unsigned int *)v36[1] )
  {
    if ( !*v36 )
      break;
    FormHeapFree(*v36);
  }
  v37 = ecx0[0x63];
  HIDWORD(v87) = a2;
  if ( *(_DWORD *)&v37->member.type )
  {
    do
    {
      v38 = *(_DWORD *)(*(_DWORD *)&v37->member.type + 4);
      FormHeapFree(*(_DWORD *)&v37->member.type);
      *(_DWORD *)&v37->member.type = v38;
    }
    while ( v38 );
  }
  v37->vtbl = 0;
  v39 = SaveLoad_CurrentSavegame;
  HIDWORD(v92) = 0;
  if ( LOBYTE(v39[1].createdObjectList.next) < 0x4Eu
    || (LODWORD(v87) = 2,
        SaveLoad_LoadData((int)v39, (char *)&v92 + 4, v87),
        v39 = SaveLoad_CurrentSavegame,
        LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x4Eu) )
  {
    LODWORD(v87) = 1;
    SaveLoad_LoadData((int)v39, &v100, v87);
    HIDWORD(v92) = (unsigned __int8)v100;
  }
  v40 = 0;
  if ( WORD2(v92) )
  {
    do
    {
      v41 = FormHeapAlloc(0x10u);
      v42 = 0;
      if ( v41 )
      {
        *(_DWORD *)v41 = 0;
        *(_DWORD *)(v41 + 4) = 0;
        *(_DWORD *)(v41 + 0xC) = 0;
        *(_BYTE *)(v41 + 8) = 0;
        v42 = (TESFormVtbl *)v41;
      }
      LODWORD(v87) = 4;
      SaveLoad_LoadFormID(&v100, v87, v88, (int)v90, (int)v91);
      LODWORD(v83) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v42->super.ClearComponentReferences, v83);
      LODWORD(v84) = 1;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v42->super.CopyFromBase, v84);
      LODWORD(v85) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v42->super.CompareTo, v85);
      v42->super.InitializeComponent = v98;
      v43 = ecx0[0x63];
      if ( v43->vtbl )
      {
        v44 = (TESFormVtbl **)FormHeapAlloc(8u);
        if ( v44 )
        {
          *v44 = v43->vtbl;
          v44[1] = 0;
        }
        else
        {
          v44 = 0;
        }
        v44[1] = *(TESFormVtbl **)&v43->member.type;
        *(_DWORD *)&v43->member.type = v44;
      }
      v43->vtbl = v42;
      ++v40;
    }
    while ( v40 < (unsigned __int16)v91 );
  }
  v45 = v99;
  if ( v99 == TESDataHandler_g_PlayerRef )
  {
    for ( i = (unsigned int *)ecx0[0x63]; i; i = (unsigned int *)i[1] )
    {
      if ( !*i )
        break;
      FormHeapFree(*i);
    }
    v47 = ecx0[0x63];
    if ( *(_DWORD *)&v47->member.type )
    {
      do
      {
        v48 = *(_DWORD *)(*(_DWORD *)&v47->member.type + 4);
        FormHeapFree(*(_DWORD *)&v47->member.type);
        *(_DWORD *)&v47->member.type = v48;
      }
      while ( v48 );
    }
    v47->vtbl = 0;
  }
  v49 = 0;
  v50 = (v97 & 0x2000000) == 0;
  ecx0[0x7E] = 0;
  if ( v50 )
  {
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x1Cu
      && v45->vtbl->super.super.super.IsActor((TESObjectREFR *)v45) )
    {
      SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, 1);
    }
  }
  else
  {
    LODWORD(v82) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v97, v82);
    if ( (_BYTE)v97 == 0xFF )
      ecx0[0x7E] = 0;
    else
      ecx0[0x7E] = (TESForm *)((char)v97 + 5);
  }
  LODWORD(v82) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v94 + 4, v82);
  if ( WORD2(v94) )
    sub_4590E0(SaveLoad_CurrentSavegame, v45, WORD2(v94));
  v51 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Au )
  {
    v52 = ecx0 + 0xB2;
    do
    {
      LODWORD(v86) = 4;
      SaveLoad_LoadFormID(&v97, v86, v87, SHIDWORD(v87), v88);
      LODWORD(v79) = 1;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)ecx0 + v49 + 0x2DC, v79);
      *v52 = (TESForm *)HIDWORD(v95);
      ++v49;
      ++v52;
    }
    while ( v49 < 5 );
    LODWORD(v80) = 4;
    SaveLoad_LoadFormID(&v96, v80, v86, SHIDWORD(v86), v87);
    v76 = 1;
    ecx0[0xB9] = (TESForm *)v95;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0xBA, *(size_t *)((char *)&v77 + 0xFFFFFFFC));
    v51 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v51[1].createdObjectList.next) >= 0x5Du )
  {
    LODWORD(v77) = 4;
    SaveLoad_LoadData((int)v51, ecx0 + 0xAB, v77);
    LODWORD(v78) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0xAC, v78);
    v51 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v51[1].createdObjectList.next) >= 0x6Au )
  {
    LODWORD(v77) = 4;
    SaveLoad_LoadFormID((char *)&v94 + 4, v77, v81, v86, SHIDWORD(v86));
    ecx0[0x96] = (TESForm *)HIDWORD(v93);
    v51 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v51[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v66) = 1;
    SaveLoad_LoadData((int)v51, ecx0 + 0x74, v66);
    LODWORD(v67) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x76, v67);
    LODWORD(v68) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x77, v68);
    LODWORD(v69) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x78, v69);
    LODWORD(v70) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0xAA, v70);
    LODWORD(v71) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x79, v71);
    LODWORD(v72) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x7A, v72);
    LODWORD(v73) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0x90, v73);
    LODWORD(v74) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 0xAA, v74);
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x7Du )
    {
      v53 = 5;
      do
      {
        LODWORD(v75) = 4;
        SaveLoad_LoadFormID((char *)&v93 + 4, v75, v77, SHIDWORD(v77), v81);
        --v53;
      }
      while ( v53 );
    }
  }
  if ( v45 )
  {
    if ( v45->vtbl->super.super.super.IsActor((TESObjectREFR *)v45)
      && *((float *)ecx0 + 0xA) > 0.0
      && *v90 != 6
      && *v90 != 5 )
    {
      *v90 = 2;
      if ( *v91 <= 0.0 )
        *v91 = 1.0;
    }
  }
  if ( sub_45A170() )
  {
    v54 = SaveLoad_CurrentSavegame;
    v55 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v56 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v55 )
    {
      v57 = TESForm_LookupByFormID(*v55);
      v58 = (unsigned __int16)v77 + v81;
      if ( v56 <= v58 )
      {
        if ( v56 < v58 )
        {
          v60 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v57->vtbl->GetEditorName)(
                                v57,
                                *((unsigned __int8 *)v55 + 9),
                                *(UInt32 *)((char *)v55 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v81 + (unsigned __int16)v77 - v56,
            ".\\AI\\HighProcess.cpp",
            0x2C9C,
            *v55,
            v60,
            v63,
            v65);
        }
      }
      else
      {
        v59 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v57->vtbl->GetEditorName)(
                              v57,
                              *((unsigned __int8 *)v55 + 9),
                              *(UInt32 *)((char *)v55 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v56 - (unsigned __int16)v77 - v81,
          ".\\AI\\HighProcess.cpp",
          0x2C9C,
          *v55,
          v59,
          v62,
          v64);
      }
    }
    else
    {
      v61 = v81 + (unsigned __int16)v77;
      if ( v56 <= v61 )
      {
        if ( v56 < v61 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            (unsigned __int16)v77 + v81 - v56,
            ".\\AI\\HighProcess.cpp",
            0x2C9C,
            LOBYTE(v54[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v56 - v81 - (unsigned __int16)v77,
          ".\\AI\\HighProcess.cpp",
          0x2C9C,
          LOBYTE(v54[1].createdObjectList.next));
      }
    }
  }
}
