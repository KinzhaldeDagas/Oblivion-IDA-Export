void __userpurge Player_SaveModifiedForm(int ecx0@<ecx>, TESForm a1)
{
  TESSaveLoad *v4; // ecx
  UInt32 v5; // ebx
  TESFormVtbl *vtbl; // ebp
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  UInt32 *v9; // ebp
  UInt32 v10; // edi
  TESForm *v11; // eax
  const char *v12; // eax
  unsigned int v13; // edi
  TESFormVtbl *v14; // ebx
  bool v15; // zf
  TESSaveLoad *v16; // ecx
  UInt32 v17; // eax
  TESSaveLoad *v18; // ecx
  TESSaveLoad *v19; // ecx
  unsigned __int8 next; // al
  int v21; // eax
  int v22; // eax
  TESChildCELL *v23; // eax
  void *v24; // eax
  void *v25; // eax
  void *v26; // ecx
  _DWORD *v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  TESSaveLoad *v33; // eax
  unsigned __int8 v34; // cl
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  _WORD *v40; // ebp
  int *i; // edi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // eax
  _DWORD *v47; // edx
  unsigned int v48; // eax
  _WORD *v49; // ebx
  int *v50; // edi
  int v51; // eax
  _DWORD *v52; // eax
  TESFormVtbl *v53; // ecx
  int v54; // edi
  TESForm *v55; // eax
  TESForm **v56; // eax
  TESForm *v57; // edi
  TESForm *v58; // eax
  int v59; // eax
  TESSaveLoad *v60; // eax
  _WORD *v61; // ebx
  _DWORD *v62; // edi
  TESSaveLoad *v63; // eax
  _DWORD *v64; // ebp
  int v65; // ebx
  int v66; // eax
  _DWORD *v67; // eax
  char *Name; // edi
  TESForm::ModReferenceList *v69; // edi
  TESForm::ModReferenceList *v70; // ebx
  int v71; // eax
  UInt32 *v72; // edi
  UInt32 v73; // esi
  TESForm *v74; // eax
  const char *v75; // eax
  _WORD *v76; // edi
  unsigned int v77; // esi
  int v78; // [esp-Ch] [ebp-60h]
  int v79; // [esp-Ch] [ebp-60h]
  int v80; // [esp-8h] [ebp-5Ch]
  int v81; // [esp-8h] [ebp-5Ch]
  size_t v82; // [esp-4h] [ebp-58h]
  size_t v83; // [esp-4h] [ebp-58h]
  size_t v84; // [esp-4h] [ebp-58h]
  size_t v85; // [esp-4h] [ebp-58h]
  size_t v86; // [esp-4h] [ebp-58h]
  size_t v87; // [esp-4h] [ebp-58h]
  size_t v88; // [esp-4h] [ebp-58h]
  const char *v89; // [esp-4h] [ebp-58h]
  size_t v90; // [esp-4h] [ebp-58h]
  size_t v91; // [esp-4h] [ebp-58h]
  size_t v92; // [esp-4h] [ebp-58h]
  size_t v93; // [esp-4h] [ebp-58h]
  size_t v94; // [esp-4h] [ebp-58h]
  size_t v95; // [esp-4h] [ebp-58h]
  size_t v96; // [esp-4h] [ebp-58h]
  size_t v97; // [esp-4h] [ebp-58h]
  size_t v98; // [esp-4h] [ebp-58h]
  size_t v99; // [esp-4h] [ebp-58h]
  size_t v100; // [esp-4h] [ebp-58h]
  size_t v101; // [esp-4h] [ebp-58h]
  size_t v102; // [esp-4h] [ebp-58h]
  size_t v103; // [esp-4h] [ebp-58h]
  size_t v104; // [esp-4h] [ebp-58h]
  size_t v105; // [esp-4h] [ebp-58h]
  size_t v106; // [esp-4h] [ebp-58h]
  size_t v107; // [esp-4h] [ebp-58h]
  size_t v108; // [esp-4h] [ebp-58h]
  size_t v109; // [esp-4h] [ebp-58h]
  size_t v110; // [esp-4h] [ebp-58h]
  size_t v111; // [esp-4h] [ebp-58h]
  size_t v112; // [esp-4h] [ebp-58h]
  size_t v113; // [esp-4h] [ebp-58h]
  size_t v114; // [esp-4h] [ebp-58h]
  size_t v115; // [esp-4h] [ebp-58h]
  size_t v116; // [esp-4h] [ebp-58h]
  size_t v117; // [esp-4h] [ebp-58h]
  size_t v118; // [esp-4h] [ebp-58h]
  size_t v119; // [esp-4h] [ebp-58h]
  size_t v120; // [esp-4h] [ebp-58h]
  size_t v121; // [esp-4h] [ebp-58h]
  size_t v122; // [esp-4h] [ebp-58h]
  size_t v123; // [esp-4h] [ebp-58h]
  size_t v124; // [esp-4h] [ebp-58h]
  size_t v125; // [esp-4h] [ebp-58h]
  size_t v126; // [esp-4h] [ebp-58h]
  size_t v127; // [esp-4h] [ebp-58h]
  size_t v128; // [esp-4h] [ebp-58h]
  size_t v129; // [esp-4h] [ebp-58h]
  size_t v130; // [esp-4h] [ebp-58h]
  size_t v131; // [esp-4h] [ebp-58h]
  size_t v132; // [esp-4h] [ebp-58h]
  size_t v133; // [esp-4h] [ebp-58h]
  size_t v134; // [esp-4h] [ebp-58h]
  size_t v135; // [esp-4h] [ebp-58h]
  size_t v136; // [esp-4h] [ebp-58h]
  size_t v137; // [esp-4h] [ebp-58h]
  size_t v138; // [esp-4h] [ebp-58h]
  size_t v139; // [esp-4h] [ebp-58h]
  size_t v140; // [esp-4h] [ebp-58h]
  size_t v141; // [esp-4h] [ebp-58h]
  size_t v142; // [esp-4h] [ebp-58h]
  size_t v143; // [esp-4h] [ebp-58h]
  size_t v144; // [esp-4h] [ebp-58h]
  const char *v145; // [esp-4h] [ebp-58h]
  char v146; // [esp+4h] [ebp-50h]
  int v147; // [esp+8h] [ebp-4Ch]
  int v148; // [esp+Ch] [ebp-48h]
  TESForm v149; // [esp+10h] [ebp-44h] BYREF
  int ParentFormID; // [esp+28h] [ebp-2Ch] BYREF
  int v151; // [esp+2Ch] [ebp-28h] BYREF
  int v152; // [esp+30h] [ebp-24h] BYREF
  int v153; // [esp+34h] [ebp-20h] BYREF
  int v154; // [esp+38h] [ebp-1Ch] BYREF
  _WORD *v155; // [esp+3Ch] [ebp-18h] BYREF
  int v156; // [esp+40h] [ebp-14h] BYREF
  unsigned int v157; // [esp+44h] [ebp-10h] BYREF
  UInt32 Src; // [esp+48h] [ebp-Ch] BYREF
  int v159; // [esp+4Ch] [ebp-8h] BYREF
  int *v160; // [esp+50h] [ebp-4h] BYREF

  v4 = SaveLoad_CurrentSavegame;
  v157 = 0;
  v5 = v4->unk000[5];
  vtbl = 0;
  v149.vtbl = 0;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v82) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v82);
    v8 = SaveLoad_CurrentSavegame;
    vtbl = (TESFormVtbl *)SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v83) = 2;
    v149.vtbl = vtbl;
    SaveLoad_SaveData((int)v8, &v157, v83);
  }
  LODWORD(v82) = 0x120;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x204), v82);
  LODWORD(v84) = 0x120;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x324), v84);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x31u )
  {
    LODWORD(v85) = 0x120;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x450), v85);
  }
  LODWORD(v85) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x444), v85);
  LODWORD(v86) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x448), v86);
  LODWORD(v87) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x44C), v87);
  if ( Global_DebugSaveBuffer )
  {
    v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v10 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v9 )
    {
      v11 = TESForm_LookupByFormID(*v9);
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)(
                            v11,
                            *(UInt32 *)((char *)v9 + 5),
                            0x234D,
                            ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v10 - v5,
        *v9,
        v12,
        v78,
        v80,
        v89);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v10 - v5, 0x234D, ".\\AI\\PlayerCharacter.cpp");
    }
    vtbl = v149.vtbl;
  }
  if ( sub_45A170() )
  {
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v13 > (unsigned int)&vtbl[0x129].Unk_30 + 3 )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\PlayerCharacter.cpp",
        0x234D);
    LOWORD(vtbl->super.InitializeComponent) = v13 - (_WORD)vtbl;
  }
  v14 = a1.vtbl;
  j_Actor_Save_((int)a1.vtbl);
  v15 = Global_DebugSaveBuffer == 0;
  v16 = SaveLoad_CurrentSavegame;
  v159 = 0;
  v17 = v16->unk000[5];
  Src = 0;
  *(_DWORD *)&v149.member.type = v17;
  if ( !v15 )
    *(_DWORD *)&v149.member.type = v17;
  if ( sub_45A170() )
  {
    LODWORD(v88) = 4;
    v18 = SaveLoad_CurrentSavegame;
    a1.vtbl = (TESFormVtbl *)0x4B4F4C42;
    SaveLoad_SaveData((int)v18, &a1, v88);
    v19 = SaveLoad_CurrentSavegame;
    LODWORD(v90) = 2;
    Src = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v19, &v159, v90);
  }
  if ( ((unsigned int)v14 & 0x2000000) != 0 )
    sub_473C40(ecx0, *(_DWORD **)(ecx0 + 0x5CC));
  LODWORD(v88) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x588), v88);
  LODWORD(v91) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x589), v91);
  LODWORD(v92) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x58B), v92);
  LODWORD(v93) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x58C), v93);
  LODWORD(v94) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x590), v94);
  LODWORD(v95) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x59C), v95);
  LODWORD(v96) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5A0), v96);
  LODWORD(v97) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5A4), v97);
  LODWORD(v98) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5A8), v98);
  LODWORD(v99) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x600), v99);
  LODWORD(v100) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x604), v100);
  LODWORD(v101) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x608), v101);
  LODWORD(v102) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x60C), v102);
  LODWORD(v103) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x610), v103);
  LODWORD(v104) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x611), v104);
  LODWORD(v105) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x614), v105);
  LODWORD(v106) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x620), v106);
  LODWORD(v107) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x61C), v107);
  LODWORD(v108) = 0xC;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x62C), v108);
  LODWORD(v109) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5D4), v109);
  LODWORD(v110) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x640), v110);
  LODWORD(v111) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5BC), v111);
  LODWORD(v112) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x648), v112);
  LODWORD(v113) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(ecx0 + 0x64C), v113);
  LODWORD(v114) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x594), v114);
  LODWORD(v115) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x598), v115);
  LODWORD(v116) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x6E4), v116);
  LODWORD(v117) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x6E5), v117);
  LODWORD(v118) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x6E6), v118);
  LODWORD(v119) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x6F4), v119);
  LODWORD(v120) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x6F8), v120);
  LODWORD(v121) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x6FC), v121);
  LODWORD(v122) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x714), v122);
  LODWORD(v123) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5C0), v123);
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( next >= 0x28u && next < 0x2Du )
  {
    LODWORD(v124) = 0xC;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x720), v124);
    LODWORD(v125) = 0xC;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x720), v125);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x39u )
  {
    LODWORD(v124) = 0x70;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x658), v124);
    LODWORD(v126) = 0x18;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x6C8), v126);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x3Fu )
  {
    LODWORD(v124) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x738), v124);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x40u )
  {
    LODWORD(v124) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (void *)(ecx0 + 0x57C), v124);
    LODWORD(v127) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x580), v127);
    LODWORD(v128) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x584), v128);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x49u )
  {
    LODWORD(v124) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x110), v124);
    LODWORD(v129) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x200), v129);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x63u )
  {
    v15 = *(_DWORD *)(ecx0 + 0x5B0) == 0;
    LOBYTE(a1.vtbl) = 0;
    if ( !v15 )
      LOBYTE(a1.vtbl) = 0x15;
    LODWORD(v124) = 1;
    TESForm_SaveDataToCurrentSaveGame(&a1, v124);
    if ( LOBYTE(a1.vtbl) )
    {
      LODWORD(v124) = 4 * LOBYTE(a1.vtbl);
      TESForm_SaveDataToCurrentSaveGame(*(TESForm **)(ecx0 + 0x5B0), v124);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    LODWORD(v124) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x58A), v124);
    LODWORD(v130) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5A9), v130);
    LODWORD(v131) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x718), v131);
    TESForm_SaveFormIDToCurrentSaveGame(ecx0 + 0x760, 4u);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x78u )
  {
    LODWORD(v124) = 1;
    TESForm_SaveDataToCurrentSaveGame(&byte_B3BAEA, v124);
    LODWORD(v132) = 4;
    TESForm_SaveDataToCurrentSaveGame(&flt_B3BAFC, v132);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x7Au )
  {
    LODWORD(v124) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)((char *)&qword_B3BB20 + 4), v124);
  }
  v21 = *(_DWORD *)(ecx0 + 0x118);
  v149.vtbl = 0;
  if ( v21 )
    v149.vtbl = *(TESFormVtbl **)(v21 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v149, 4u);
  v22 = *(_DWORD *)(ecx0 + 0x644);
  v149.member.flags = 0;
  if ( v22 )
    v149.member.flags = *(_DWORD *)(v22 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v149.member.flags, 4u);
  v23 = FormID;
  v15 = FormID == 0;
  v149.member.refID = 0;
  if ( !v15 )
    v149.member.refID = (UInt32)v23[3].vtbl;
  TESForm_SaveFormIDToCurrentSaveGame((int)&v149.member.refID, 4u);
  v24 = *(void **)(ecx0 + 0x624);
  v149.member.modlist.data = 0;
  if ( v24 )
  {
    v25 = OblivionDynamicCast(
            v24,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &SpellItem `RTTI Type Descriptor',
            0);
    if ( v25 )
      v149.member.modlist.data = *((Data **)v25 + 3);
  }
  TESForm_SaveFormIDToCurrentSaveGame((int)&v149.member.modlist, 4u);
  v26 = *(void **)(ecx0 + 0x1E8);
  v149.member.modlist.next = 0;
  if ( v26 )
    v149.member.modlist.next = (TESForm::ModReferenceList *)MagicItem_GetFormID(v26);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v149.member.modlist.next, 4u);
  v27 = *(_DWORD **)(ecx0 + 0x1EC);
  ParentFormID = 0;
  if ( v27 )
    ParentFormID = MagicTarget_GetParentFormID(v27);
  TESForm_SaveFormIDToCurrentSaveGame((int)&ParentFormID, 4u);
  v28 = *(_DWORD *)(ecx0 + 0x1E0);
  v151 = 0;
  if ( v28 )
    v151 = *(_DWORD *)(v28 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v151, 4u);
  v29 = *(_DWORD *)(ecx0 + 0x6E8);
  v152 = 0;
  if ( v29 )
    v152 = *(_DWORD *)(v29 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v152, 4u);
  v30 = *(_DWORD *)(ecx0 + 0x628);
  v153 = 0;
  if ( v30 )
    v153 = *(_DWORD *)(v30 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v153, 4u);
  v31 = *(_DWORD *)(ecx0 + 0x650);
  v154 = 0;
  if ( v31 )
    v154 = *(_DWORD *)(v31 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v154, 4u);
  v32 = *(_DWORD *)(ecx0 + 0x6E0);
  v155 = 0;
  if ( v32 )
    v155 = *(_WORD **)(v32 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v155, 4u);
  v33 = SaveLoad_CurrentSavegame;
  v34 = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( v34 >= 0x28u && v34 < 0x2Du )
  {
    v35 = *(_DWORD *)(ecx0 + 0x72C);
    a1.vtbl = 0;
    if ( v35 )
      a1.vtbl = *(TESFormVtbl **)(v35 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x40u )
  {
    v36 = *(_DWORD *)(ecx0 + 0x578);
    a1.vtbl = 0;
    if ( v36 )
      a1.vtbl = *(TESFormVtbl **)(v36 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x42u )
  {
    v37 = ObjectRef;
    v15 = ObjectRef == 0;
    a1.vtbl = 0;
    if ( !v15 )
      a1.vtbl = *(TESFormVtbl **)(v37 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x57u )
  {
    v38 = *(_DWORD *)(ecx0 + 0x570);
    a1.vtbl = 0;
    if ( v38 )
      a1.vtbl = *(TESFormVtbl **)(v38 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x60u )
  {
    v39 = *(_DWORD *)(ecx0 + 0x638);
    a1.vtbl = 0;
    if ( v39 )
      a1.vtbl = *(TESFormVtbl **)(v39 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x63u )
  {
    LODWORD(v124) = 2;
    a1.vtbl = 0;
    v40 = (_WORD *)v33->unk000[5];
    TESForm_SaveDataToCurrentSaveGame(&a1, v124);
    for ( i = *(int **)(ecx0 + 0x5AC); i; i = (int *)i[1] )
    {
      if ( !i[1] && !*i )
        break;
      v42 = *i;
      v15 = *i == 0;
      v156 = 0;
      if ( !v15 )
        v156 = *(_DWORD *)(v42 + 0xC);
      TESForm_SaveFormIDToCurrentSaveGame((int)&v156, 4u);
      ++a1.vtbl;
    }
    *v40 = a1.vtbl;
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x6Cu )
  {
    v43 = *(_DWORD *)(ecx0 + 0x6E8);
    a1.vtbl = 0;
    if ( v43 )
    {
      v44 = *(_DWORD *)(v43 + 0x24);
      if ( v44 )
        a1.vtbl = *(TESFormVtbl **)(v44 + 0xC);
    }
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x6Fu )
  {
    LODWORD(v124) = 2;
    v160 = (int *)*(unsigned __int16 *)(ecx0 + 0x794);
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&v160, v124);
    v45 = *(_DWORD *)(ecx0 + 0x78C);
    v46 = 0;
    if ( v45 )
    {
      v47 = *(_DWORD **)(ecx0 + 0x790);
      while ( !*v47 )
      {
        ++v46;
        ++v47;
        if ( v46 >= v45 )
          goto LABEL_104;
      }
      v48 = *(_DWORD *)(*(_DWORD *)(ecx0 + 0x790) + 4 * v46);
    }
    else
    {
LABEL_104:
      v48 = 0;
    }
    v157 = v48;
    while ( v157 )
    {
      v156 = 0;
      LOBYTE(a1.vtbl) = 0;
      sub_65DDC0((unsigned int *)(ecx0 + 0x788), &v157, &v156, &a1);
      TESForm_SaveFormIDToCurrentSaveGame((int)&v156, 4u);
      LODWORD(v124) = 1;
      TESForm_SaveDataToCurrentSaveGame(&a1, v124);
    }
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x73u )
  {
    a1.vtbl = 0;
    v49 = (_WORD *)v33->unk000[5];
    LODWORD(v124) = 2;
    TESForm_SaveDataToCurrentSaveGame(&a1, v124);
    v50 = &dword_B3BB44;
    do
    {
      if ( !v50[1] && !*v50 )
        break;
      v51 = *v50;
      v15 = *v50 == 0;
      v157 = 0;
      if ( !v15 )
        v157 = *(_DWORD *)(v51 + 0xC);
      TESForm_SaveFormIDToCurrentSaveGame((int)&v157, 4u);
      ++a1.vtbl;
      v50 = (int *)v50[1];
    }
    while ( v50 );
    *v49 = a1.vtbl;
  }
  ActiveEffect_Base_SaveAEList(
    *(_DWORD *)(ecx0 + 0x1E4),
    ecx0,
    SHIDWORD(v124),
    v146,
    v147,
    v148,
    (int)v149.vtbl,
    *(int *)&v149.member.type,
    v149.member.flags,
    v149.member.refID);
  LODWORD(v133) = 0x54;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x130), v133);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x58u )
  {
    v52 = *(_DWORD **)(ecx0 + 0x5B4);
    if ( v52 )
    {
      v53 = 0;
      do
      {
        if ( *v52 )
          v53 = (TESFormVtbl *)((char *)v53 + 1);
        v52 = (_DWORD *)v52[1];
      }
      while ( v52 );
      a1.vtbl = v53;
    }
    else
    {
      a1.vtbl = 0;
    }
    LODWORD(v134) = 4;
    TESForm_SaveDataToCurrentSaveGame(&a1, v134);
    if ( (int)a1.vtbl > 0 )
    {
      v54 = *(_DWORD *)(ecx0 + 0x5B4);
      if ( v54 )
      {
        while ( 1 )
        {
          v55 = *(TESForm **)v54;
          if ( !*(_DWORD *)(v54 + 4) )
            break;
          if ( v55 )
            goto LABEL_131;
LABEL_132:
          v54 = *(_DWORD *)(v54 + 4);
          if ( !v54 )
            goto LABEL_133;
        }
        if ( !v55 )
          goto LABEL_133;
LABEL_131:
        LODWORD(v134) = 8;
        TESForm_SaveDataToCurrentSaveGame(v55, v134);
        goto LABEL_132;
      }
    }
  }
LABEL_133:
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x58u )
  {
    v56 = *(TESForm ***)(ecx0 + 0x5B4);
    if ( v56 )
    {
      v57 = *v56;
    }
    else
    {
      v58 = (TESForm *)FormHeapAlloc(8u);
      if ( v58 )
      {
        v58->vtbl = 0;
        *(_DWORD *)&v58->member.type = 0;
      }
      else
      {
        v58 = 0;
      }
      v57 = v58;
    }
    LODWORD(v134) = 8;
    TESForm_SaveDataToCurrentSaveGame(v57, v134);
    if ( !*(_DWORD *)(ecx0 + 0x5B4) )
      FormHeapFree((unsigned int)v57);
  }
  LODWORD(v134) = 3;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x5B8), v134);
  LODWORD(v135) = 0x54;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x188), v135);
  LODWORD(v136) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x184), v136);
  LODWORD(v137) = 1;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x1DC), v137);
  v59 = *(_DWORD *)(ecx0 + 0x5F4);
  a1.vtbl = 0;
  if ( v59 )
    a1.vtbl = *(TESFormVtbl **)(v59 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
  v60 = SaveLoad_CurrentSavegame;
  LODWORD(v138) = 2;
  a1.vtbl = 0;
  v61 = (_WORD *)v60->unk000[5];
  TESForm_SaveDataToCurrentSaveGame(&a1, v138);
  v62 = (_DWORD *)(ecx0 + 0x5E4);
  if ( ecx0 != 0xFFFFFA1C )
  {
    do
    {
      if ( !v62[1] && !*v62 )
        break;
      v160 = *(int **)(*v62 + 0xC);
      TESForm_SaveFormIDToCurrentSaveGame((int)&v160, 4u);
      ++a1.vtbl;
      v62 = (_DWORD *)v62[1];
    }
    while ( v62 );
  }
  *v61 = a1.vtbl;
  v63 = SaveLoad_CurrentSavegame;
  v149.vtbl = 0;
  LODWORD(v139) = 2;
  v155 = (_WORD *)v63->unk000[5];
  TESForm_SaveDataToCurrentSaveGame(&v149, v139);
  v64 = (_DWORD *)(ecx0 + 0x5EC);
  if ( ecx0 != 0xFFFFFA14 )
  {
    do
    {
      if ( !v64[1] && !*v64 )
        break;
      v65 = *v64;
      v66 = *(_DWORD *)(*v64 + 0x68);
      v156 = *(_DWORD *)(v66 + 0xC);
      LOBYTE(a1.vtbl) = 0;
      v62 = (_DWORD *)(v66 + 0x40);
      LOBYTE(v157) = *(_BYTE *)(v65 + 0x60);
      if ( v66 != 0xFFFFFFC0 )
      {
        while ( v62[1] || *v62 )
        {
          v160 = (int *)*v62;
          if ( v65 == sub_52AC30(v160, v157) )
          {
            LOBYTE(a1.vtbl) = *(_BYTE *)v160;
            break;
          }
          v62 = (_DWORD *)v62[1];
          if ( !v62 )
            break;
        }
      }
      TESForm_SaveFormIDToCurrentSaveGame((int)&v156, 4u);
      LODWORD(v140) = 1;
      TESForm_SaveDataToCurrentSaveGame(&a1, v140);
      LODWORD(v141) = 1;
      TESForm_SaveDataToCurrentSaveGame((TESForm *)&v157, v141);
      ++v149.vtbl;
      v64 = (_DWORD *)v64[1];
    }
    while ( v64 );
  }
  *v155 = v149.vtbl;
  sub_416BA0((int)v62);
  v67 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0 + 0x170))(ecx0);
  sub_526230(v67, (int)v62, ecx0);
  Name = TESObjectREFR_GetName((TESObjectREFR *)ecx0);
  LODWORD(v140) = 1;
  LOBYTE(a1.vtbl) = strlen(Name) + 1;
  TESForm_SaveDataToCurrentSaveGame(&a1, v140);
  LODWORD(v142) = LOBYTE(a1.vtbl);
  TESForm_SaveDataToCurrentSaveGame((TESForm *)Name, v142);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x2Cu )
  {
    v69 = Actor_GetActorBaseForm((Actor *)ecx0, 0)[0xA].member.modlist.next;
    v70 = (TESForm::ModReferenceList *)TESDataHandler_LookupTESClassByFormID((void *)iPlayerCustomClass);
    a1.vtbl = 0;
    if ( v69 )
      a1.vtbl = (TESFormVtbl *)v69[1].next;
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
    if ( v69 )
    {
      if ( v69 == v70 )
        sub_51C3B0((const char **)v69);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x45u )
  {
    v71 = *(_DWORD *)(ecx0 + 0x654);
    a1.vtbl = 0;
    if ( v71 )
      a1.vtbl = *(TESFormVtbl **)(v71 + 0xC);
    TESForm_SaveFormIDToCurrentSaveGame((int)&a1, 4u);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x7Eu )
  {
    LODWORD(v143) = 1;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x116), v143);
    LODWORD(v144) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(ecx0 + 0x700), v144);
  }
  if ( Global_DebugSaveBuffer )
  {
    v72 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v73 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v72 )
    {
      v74 = TESForm_LookupByFormID(*v72);
      v75 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v74->vtbl->GetEditorName)(
                            v74,
                            *(UInt32 *)((char *)v72 + 5),
                            0x251A,
                            ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v73 - *(_DWORD *)&v149.member.type,
        *v72,
        v75,
        v79,
        v81,
        v145);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v73 - *(_DWORD *)&v149.member.type,
        0x251A,
        ".\\AI\\PlayerCharacter.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v76 = (_WORD *)Src;
    v77 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v77 > Src + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\PlayerCharacter.cpp",
        0x251A);
    *v76 = v77 - (_WORD)v76;
  }
}
