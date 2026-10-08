// local variable allocation has failed, the output may be wrong!
void __userpurge sub_63ED20(TESForm **ecx0@<ecx>, int a2@<ebp>, int a3, int a4, PlayerCharacter *a5)
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

  sub_6564C0(ecx0, a3, a4, a5); /*0x63ed39*/
  v98 = 0; /*0x63ed46*/
  v100 = 0; /*0x63ed4a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    v7 = g_TESSaveLoadGame; /*0x63ed5b*/
    LODWORD(v95) = 4; /*0x63ed61*/
    SaveLoad_LoadData((int)v7, &Dst, v95); /*0x63ed68*/
    if ( Dst != 0x4B4F4C42 )
    {
      v8 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x63ed7c*/
      if ( v8 )
      {
        v9 = TESForm_LookupByFormID(*v8); /*0x63ed89*/
        v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v9->vtbl->GetEditorName)( /*0x63eda4*/
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
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v11 = g_TESSaveLoadGame; /*0x63eddf*/
    v12 = g_TESSaveLoadGame->unk000[5]; /*0x63ede5*/
    LODWORD(v95) = 2; /*0x63ede8*/
    v100 = (TESForm *)v12; /*0x63edef*/
    SaveLoad_LoadData((int)v11, &v98, v95); /*0x63edf3*/
  }
  v13 = g_TESSaveLoadGame; /*0x63edf8*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x3Eu ) /*0x63ee02*/
  {
    LODWORD(v95) = 1; /*0x63ee04*/
    SaveLoad_LoadData((int)v13, &a4, v95); /*0x63ee0b*/
    v13 = g_TESSaveLoadGame; /*0x63ee10*/
  }
  LODWORD(v95) = 1; /*0x63ee16*/
  SaveLoad_LoadData((int)v13, ecx0 + 0x8A, v95); /*0x63ee1f*/
  v14 = g_TESSaveLoadGame; /*0x63ee24*/
  LODWORD(v95) = 1; /*0x63ee2a*/
  SaveLoad_LoadData((int)v14, ecx0 + 0x8F, v95); /*0x63ee33*/
  v15 = g_TESSaveLoadGame; /*0x63ee38*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x71u ) /*0x63ee42*/
  {
    LODWORD(v95) = 1; /*0x63ee44*/
    SaveLoad_LoadData((int)v15, (char *)ecx0 + 0x1F, v95); /*0x63ee4a*/
    v15 = g_TESSaveLoadGame; /*0x63ee4f*/
  }
  if ( LOBYTE(v15[1].createdObjectList.next) < 0x19u ) /*0x63ee59*/
  {
    LODWORD(v95) = 1; /*0x63ee5b*/
    SaveLoad_LoadData((int)v15, &a4, v95); /*0x63ee62*/
    v15 = g_TESSaveLoadGame; /*0x63ee67*/
  }
  LODWORD(v95) = 1; /*0x63ee6d*/
  SaveLoad_LoadData((int)v15, ecx0 + 0x97, v95); /*0x63ee76*/
  v16 = g_TESSaveLoadGame; /*0x63ee7b*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x1Bu ) /*0x63ee85*/
  {
    LODWORD(v95) = 1; /*0x63ee87*/
    SaveLoad_LoadData((int)v16, (char *)ecx0 + 0x25D, v95); /*0x63ee90*/
    v16 = g_TESSaveLoadGame; /*0x63ee95*/
  }
  LODWORD(v95) = 2; /*0x63ee9b*/
  SaveLoad_LoadData((int)v16, ecx0 + 0x7F, v95); /*0x63eea4*/
  v17 = g_TESSaveLoadGame; /*0x63eea9*/
  LODWORD(v95) = 2; /*0x63eeaf*/
  SaveLoad_LoadData((int)v17, ecx0 + 0x7D, v95); /*0x63eeb8*/
  LODWORD(v95) = 2; /*0x63eebd*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x82, v95); /*0x63eecc*/
  v18 = g_TESSaveLoadGame; /*0x63eed1*/
  LODWORD(v95) = 4; /*0x63eed7*/
  SaveLoad_LoadData((int)v18, ecx0 + 0x7C, v95); /*0x63eee0*/
  v19 = g_TESSaveLoadGame; /*0x63eee5*/
  LODWORD(v95) = 4; /*0x63eeeb*/
  SaveLoad_LoadData((int)v19, ecx0 + 0x6B, v95); /*0x63eef4*/
  LODWORD(v95) = 4; /*0x63eef9*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x81, v95); /*0x63ef08*/
  v20 = g_TESSaveLoadGame; /*0x63ef0d*/
  LODWORD(v95) = 4; /*0x63ef13*/
  SaveLoad_LoadData((int)v20, ecx0 + 0x87, v95); /*0x63ef1c*/
  v21 = g_TESSaveLoadGame; /*0x63ef21*/
  LODWORD(v95) = 4; /*0x63ef27*/
  SaveLoad_LoadData((int)v21, ecx0 + 0x8B, v95); /*0x63ef30*/
  LODWORD(v95) = 4; /*0x63ef35*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x8C, v95); /*0x63ef44*/
  v22 = g_TESSaveLoadGame; /*0x63ef49*/
  LODWORD(v95) = 4; /*0x63ef4f*/
  SaveLoad_LoadData((int)v22, ecx0 + 0x8D, v95); /*0x63ef58*/
  v23 = g_TESSaveLoadGame; /*0x63ef5d*/
  LODWORD(v95) = 4; /*0x63ef63*/
  SaveLoad_LoadData((int)v23, ecx0 + 0x92, v95); /*0x63ef6c*/
  LODWORD(v95) = 4; /*0x63ef71*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x66, v95); /*0x63ef80*/
  v24 = g_TESSaveLoadGame; /*0x63ef85*/
  LODWORD(v95) = 4; /*0x63ef8b*/
  SaveLoad_LoadData((int)v24, ecx0 + 0x6C, v95); /*0x63ef94*/
  v25 = g_TESSaveLoadGame; /*0x63ef99*/
  LODWORD(v95) = 4; /*0x63ef9f*/
  SaveLoad_LoadData((int)v25, ecx0 + 0x6D, v95); /*0x63efa8*/
  v26 = g_TESSaveLoadGame; /*0x63efad*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x32u ) /*0x63efb7*/
  {
    LODWORD(v95) = 4; /*0x63efb9*/
    SaveLoad_LoadData((int)v26, ecx0 + 0x67, v95); /*0x63efc2*/
    v26 = g_TESSaveLoadGame; /*0x63efc7*/
  }
  LODWORD(v95) = 4; /*0x63efcd*/
  SaveLoad_LoadData((int)v26, ecx0 + 0x73, v95); /*0x63efd6*/
  LODWORD(v95) = 1; /*0x63efdb*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x91, v95); /*0x63efea*/
  v27 = g_TESSaveLoadGame; /*0x63efef*/
  LODWORD(v95) = 0xC; /*0x63eff5*/
  SaveLoad_LoadData((int)v27, ecx0 + 0x83, v95); /*0x63effe*/
  v28 = g_TESSaveLoadGame; /*0x63f003*/
  LODWORD(v95) = 4; /*0x63f009*/
  SaveLoad_LoadData((int)v28, ecx0 + 0x95, v95); /*0x63f012*/
  v29 = g_TESSaveLoadGame; /*0x63f017*/
  LODWORD(v95) = 4; /*0x63f023*/
  v104 = ecx0 + 0xAF; /*0x63f026*/
  SaveLoad_LoadData((int)v29, ecx0 + 0xAF, v95); /*0x63f02a*/
  v30 = g_TESSaveLoadGame; /*0x63f02f*/
  LODWORD(v95) = 4; /*0x63f03b*/
  v105 = ecx0 + 0xB0; /*0x63f03e*/
  SaveLoad_LoadData((int)v30, ecx0 + 0xB0, v95); /*0x63f042*/
  LODWORD(v95) = 4; /*0x63f047*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x8E, v95); /*0x63f056*/
  v31 = g_TESSaveLoadGame; /*0x63f05b*/
  LODWORD(v95) = 4; /*0x63f061*/
  SaveLoad_LoadData((int)v31, ecx0 + 0x6A, v95); /*0x63f06a*/
  v32 = g_TESSaveLoadGame; /*0x63f06f*/
  LODWORD(v95) = 4; /*0x63f075*/
  SaveLoad_LoadData((int)v32, ecx0 + 0x6E, v95); /*0x63f07e*/
  v33 = g_TESSaveLoadGame; /*0x63f083*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x14u ) /*0x63f08d*/
  {
    LODWORD(v95) = 4; /*0x63f08f*/
    SaveLoad_LoadData((int)v33, ecx0 + 0x98, v95); /*0x63f098*/
    v33 = g_TESSaveLoadGame; /*0x63f09d*/
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x3Fu ) /*0x63f0a7*/
  {
    LODWORD(v95) = 1; /*0x63f0a9*/
    SaveLoad_LoadData((int)v33, ecx0 + 0x9E, v95); /*0x63f0b2*/
    LODWORD(v95) = 4; /*0x63f0b7*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x9D, v95); /*0x63f0c6*/
    v33 = g_TESSaveLoadGame; /*0x63f0cb*/
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x42u ) /*0x63f0d5*/
  {
    LODWORD(v95) = 1; /*0x63f0d7*/
    SaveLoad_LoadData((int)v33, ecx0 + 0xA4, v95); /*0x63f0e0*/
    v34 = g_TESSaveLoadGame; /*0x63f0e5*/
    LODWORD(v95) = 4; /*0x63f0eb*/
    SaveLoad_LoadData((int)v34, ecx0 + 0xA3, v95); /*0x63f0f4*/
  }
  LODWORD(v95) = 4; /*0x63f0ff*/
  SaveLoad_LoadFormID(&a1, v95, v96, v97, (int)v98); /*0x63f106*/
  ecx0[0x86] = v100; /*0x63f10f*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x71u ) /*0x63f11f*/
  {
    LODWORD(v94) = 4; /*0x63f121*/
    SaveLoad_LoadFormID(&retaddr, v94, v95, SHIDWORD(v95), v96); /*0x63f128*/
  }
  LODWORD(v93) = 4; /*0x63f133*/
  SaveLoad_LoadFormID(&v99, v93, v94, SHIDWORD(v94), v95); /*0x63f13a*/
  ecx0[0x69] = (TESForm *)v97; /*0x63f143*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x4Fu ) /*0x63f153*/
  {
    LODWORD(v92) = 4; /*0x63f155*/
    SaveLoad_LoadFormID(v103, v92, v93, SHIDWORD(v93), v94); /*0x63f15c*/
    v35 = TESForm_LookupByFormID(a1); /*0x63f172*/
    ecx0[9] = (TESForm *)OblivionDynamicCast( /*0x63f180*/
                           v35,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                           0);
  }
  LODWORD(v89) = 4; /*0x63f18c*/
  SaveLoad_LoadFormID(&v96, v89, v92, SHIDWORD(v92), v93); /*0x63f193*/
  v36 = (unsigned int *)ecx0[0x63]; /*0x63f198*/
  for ( ecx0[0xB1] = (TESForm *)v95; v36; v36 = (unsigned int *)v36[1] ) /*0x63f1aa*/
  {
    if ( !*v36 ) /*0x63f1b0*/
      break; /*0x63f1b4*/
    FormHeapFree(*v36); /*0x63f1b7*/
  }
  v37 = ecx0[0x63]; /*0x63f1c6*/
  HIDWORD(v87) = a2; /*0x63f1cf*/
  if ( *(_DWORD *)&v37->member.type ) /*0x63f1cc*/
  {
    do /*0x63f1e6*/
    {
      v38 = *(_DWORD *)(*(_DWORD *)&v37->member.type + 4); /*0x63f1d5*/
      FormHeapFree(*(_DWORD *)&v37->member.type); /*0x63f1d9*/
      *(_DWORD *)&v37->member.type = v38; /*0x63f1e3*/
    }
    while ( v38 ); /*0x63f1e6*/
  }
  v37->vtbl = 0; /*0x63f1e8*/
  v39 = g_TESSaveLoadGame; /*0x63f1ea*/
  HIDWORD(v92) = 0; /*0x63f1f0*/
  if ( LOBYTE(v39[1].createdObjectList.next) < 0x4Eu /*0x63f210*/
    || (LODWORD(v87) = 2,
        SaveLoad_LoadData((int)v39, (char *)&v92 + 4, v87),
        v39 = g_TESSaveLoadGame,
        LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x4Eu) )
  {
    LODWORD(v87) = 1; /*0x63f212*/
    SaveLoad_LoadData((int)v39, &v100, v87); /*0x63f219*/
    HIDWORD(v92) = (unsigned __int8)v100; /*0x63f227*/
  }
  v40 = 0; /*0x63f22b*/
  if ( WORD2(v92) ) /*0x63f232*/
  {
    do /*0x63f2e1*/
    {
      v41 = FormHeapAlloc(0x10u); /*0x63f23a*/
      v42 = 0; /*0x63f23f*/
      if ( v41 ) /*0x63f246*/
      {
        *(_DWORD *)v41 = 0; /*0x63f248*/
        *(_DWORD *)(v41 + 4) = 0; /*0x63f24a*/
        *(_DWORD *)(v41 + 0xC) = 0; /*0x63f24d*/
        *(_BYTE *)(v41 + 8) = 0; /*0x63f250*/
        v42 = (TESFormVtbl *)v41; /*0x63f254*/
      }
      LODWORD(v87) = 4; /*0x63f25c*/
      SaveLoad_LoadFormID(&v100, v87, v88, (int)v90, (int)v91); /*0x63f263*/
      LODWORD(v83) = 4; /*0x63f268*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, &v42->super.ClearComponentReferences, v83); /*0x63f274*/
      LODWORD(v84) = 1; /*0x63f27f*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, &v42->super.CopyFromBase, v84); /*0x63f285*/
      LODWORD(v85) = 4; /*0x63f290*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, &v42->super.CompareTo, v85); /*0x63f296*/
      v42->super.InitializeComponent = v98; /*0x63f29f*/
      v43 = ecx0[0x63]; /*0x63f2a1*/
      if ( v43->vtbl ) /*0x63f2a7*/
      {
        v44 = (TESFormVtbl **)FormHeapAlloc(8u); /*0x63f2af*/
        if ( v44 ) /*0x63f2b9*/
        {
          *v44 = v43->vtbl; /*0x63f2be*/
          v44[1] = 0; /*0x63f2c0*/
        }
        else
        {
          v44 = 0; /*0x63f2c9*/
        }
        v44[1] = *(TESFormVtbl **)&v43->member.type; /*0x63f2ce*/
        *(_DWORD *)&v43->member.type = v44; /*0x63f2d1*/
      }
      v43->vtbl = v42; /*0x63f2d4*/
      ++v40; /*0x63f2dc*/
    }
    while ( v40 < (unsigned __int16)v91 ); /*0x63f2e1*/
  }
  v45 = v99; /*0x63f2e7*/
  if ( v99 == reference ) /*0x63f2f1*/
  {
    for ( i = (unsigned int *)ecx0[0x63]; i; i = (unsigned int *)i[1] ) /*0x63f2fb*/
    {
      if ( !*i ) /*0x63f300*/
        break; /*0x63f304*/
      FormHeapFree(*i); /*0x63f307*/
    }
    v47 = ecx0[0x63]; /*0x63f316*/
    if ( *(_DWORD *)&v47->member.type ) /*0x63f31c*/
    {
      do /*0x63f336*/
      {
        v48 = *(_DWORD *)(*(_DWORD *)&v47->member.type + 4); /*0x63f325*/
        FormHeapFree(*(_DWORD *)&v47->member.type); /*0x63f329*/
        *(_DWORD *)&v47->member.type = v48; /*0x63f333*/
      }
      while ( v48 ); /*0x63f336*/
    }
    v47->vtbl = 0; /*0x63f338*/
  }
  v49 = 0; /*0x63f33e*/
  v50 = (v97 & 0x2000000) == 0; /*0x63f340*/
  ecx0[0x7E] = 0; /*0x63f348*/
  if ( v50 ) /*0x63f34e*/
  {
    if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x1Cu /*0x63f396*/
      && v45->vtbl->super.super.super.IsActor((TESObjectREFR *)v45) )
    {
      SaveLoad_AdvanceBufferOffset(g_TESSaveLoadGame, 1); /*0x63f3a4*/
    }
  }
  else
  {
    LODWORD(v82) = 1; /*0x63f356*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &v97, v82); /*0x63f35d*/
    if ( (_BYTE)v97 == 0xFF ) /*0x63f368*/
      ecx0[0x7E] = 0; /*0x63f36a*/
    else
      ecx0[0x7E] = (TESForm *)((char)v97 + 5); /*0x63f378*/
  }
  LODWORD(v82) = 2; /*0x63f3af*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, (char *)&v94 + 4, v82); /*0x63f3b6*/
  if ( WORD2(v94) ) /*0x63f3c2*/
    SaveLoad_QueueCharacterControllerBlob(g_TESSaveLoadGame, v45, WORD2(v94)); /*0x63f3cc*/
  v51 = g_TESSaveLoadGame; /*0x63f3d1*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x5Au ) /*0x63f3db*/
  {
    v52 = ecx0 + 0xB2; /*0x63f3dd*/
    do /*0x63f41a*/
    {
      LODWORD(v86) = 4; /*0x63f3e3*/
      SaveLoad_LoadFormID(&v97, v86, v87, SHIDWORD(v87), v88); /*0x63f3ea*/
      LODWORD(v79) = 1; /*0x63f3f5*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, (char *)ecx0 + v49 + 0x2DC, v79); /*0x63f3ff*/
      *v52 = (TESForm *)HIDWORD(v95); /*0x63f408*/
      ++v49; /*0x63f411*/
      ++v52; /*0x63f414*/
    }
    while ( v49 < 5 ); /*0x63f41a*/
    LODWORD(v80) = 4; /*0x63f41c*/
    SaveLoad_LoadFormID(&v96, v80, v86, SHIDWORD(v86), v87); /*0x63f423*/
    v76 = 1; /*0x63f42c*/
    ecx0[0xB9] = (TESForm *)v95; /*0x63f434*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0xBA, *(size_t *)((char *)&v77 + 0xFFFFFFFC)); /*0x63f441*/
    v51 = g_TESSaveLoadGame; /*0x63f446*/
  }
  if ( LOBYTE(v51[1].createdObjectList.next) >= 0x5Du ) /*0x63f451*/
  {
    LODWORD(v77) = 4; /*0x63f453*/
    SaveLoad_LoadData((int)v51, ecx0 + 0xAB, v77); /*0x63f45c*/
    LODWORD(v78) = 4; /*0x63f467*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0xAC, v78); /*0x63f470*/
    v51 = g_TESSaveLoadGame; /*0x63f475*/
  }
  if ( LOBYTE(v51[1].createdObjectList.next) >= 0x6Au ) /*0x63f47f*/
  {
    LODWORD(v77) = 4; /*0x63f481*/
    SaveLoad_LoadFormID((char *)&v94 + 4, v77, v81, v86, SHIDWORD(v86)); /*0x63f488*/
    ecx0[0x96] = (TESForm *)HIDWORD(v93); /*0x63f491*/
    v51 = g_TESSaveLoadGame; /*0x63f497*/
  }
  if ( LOBYTE(v51[1].createdObjectList.next) >= 0x71u ) /*0x63f4a1*/
  {
    LODWORD(v66) = 1; /*0x63f4a7*/
    SaveLoad_LoadData((int)v51, ecx0 + 0x74, v66); /*0x63f4b0*/
    LODWORD(v67) = 4; /*0x63f4bb*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x76, v67); /*0x63f4c4*/
    LODWORD(v68) = 4; /*0x63f4c9*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x77, v68); /*0x63f4d8*/
    LODWORD(v69) = 4; /*0x63f4e3*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x78, v69); /*0x63f4ec*/
    LODWORD(v70) = 1; /*0x63f4f7*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0xAA, v70); /*0x63f500*/
    LODWORD(v71) = 1; /*0x63f50b*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x79, v71); /*0x63f514*/
    LODWORD(v72) = 4; /*0x63f519*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x7A, v72); /*0x63f528*/
    LODWORD(v73) = 4; /*0x63f533*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0x90, v73); /*0x63f53c*/
    LODWORD(v74) = 1; /*0x63f547*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, ecx0 + 0xAA, v74); /*0x63f54a*/
    if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x7Du ) /*0x63f559*/
    {
      v53 = 5; /*0x63f55b*/
      do /*0x63f575*/
      {
        LODWORD(v75) = 4; /*0x63f560*/
        SaveLoad_LoadFormID((char *)&v93 + 4, v75, v77, SHIDWORD(v77), v81); /*0x63f567*/
        --v53; /*0x63f56c*/
      }
      while ( v53 ); /*0x63f575*/
    }
  }
  if ( v45 ) /*0x63f57b*/
  {
    if ( v45->vtbl->super.super.super.IsActor((TESObjectREFR *)v45) /*0x63f5a7*/
      && *((float *)ecx0 + 0xA) > 0.0
      && *v90 != 6
      && *v90 != 5 )
    {
      *v90 = 2; /*0x63f5a9*/
      if ( *v91 <= 0.0 ) /*0x63f5ba*/
        *v91 = 1.0; /*0x63f5be*/
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x63f5ca*/
  {
    v54 = g_TESSaveLoadGame; /*0x63f5d7*/
    v55 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x63f5dd*/
    v56 = g_TESSaveLoadGame->unk000[5]; /*0x63f5e5*/
    if ( v55 ) /*0x63f5e8*/
    {
      v57 = TESForm_LookupByFormID(*v55); /*0x63f5ff*/
      v58 = (unsigned __int16)v77 + v81; /*0x63f601*/
      if ( v56 <= v58 ) /*0x63f609*/
      {
        if ( v56 < v58 ) /*0x63f64c*/
        {
          v60 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v57->vtbl->GetEditorName)( /*0x63f663*/
                                v57,
                                *((unsigned __int8 *)v55 + 9),
                                *(UInt32 *)((char *)v55 + 5));
          PrintError( /*0x63f682*/
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
        v59 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v57->vtbl->GetEditorName)( /*0x63f61c*/
                              v57,
                              *((unsigned __int8 *)v55 + 9),
                              *(UInt32 *)((char *)v55 + 5));
        PrintError( /*0x63f63b*/
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
      v61 = v81 + (unsigned __int16)v77; /*0x63f69c*/
      if ( v56 <= v61 ) /*0x63f6a1*/
      {
        if ( v56 < v61 ) /*0x63f6cd*/
          PrintError( /*0x63f6e8*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            (unsigned __int16)v77 + v81 - v56,
            ".\\AI\\HighProcess.cpp",
            0x2C9C,
            LOBYTE(v54[1].createdObjectList.next));
      }
      else
      {
        PrintError( /*0x63f6bc*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v56 - v81 - (unsigned __int16)v77,
          ".\\AI\\HighProcess.cpp",
          0x2C9C,
          LOBYTE(v54[1].createdObjectList.next));
      }
    }
  }
}
