// local variable allocation has failed, the output may be wrong!
void __userpurge Player_LoadModifiedForm(
        int a1@<ecx>,
        TESFormVtbl *ebp0@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  UInt32 v8; // ebx
  TESSaveLoad *v9; // ecx
  UInt32 *v10; // edi
  TESForm *v11; // eax
  const char *v12; // eax
  TESSaveLoad *v13; // ecx
  TESSaveLoad *v17; // ecx
  UInt32 *v18; // ebp
  UInt32 v19; // edi
  TESForm *v20; // ecx
  UInt32 v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  UInt32 v24; // edx
  double v25; // st7
  double v26; // st7
  UInt32 *v27; // edi
  TESForm *v28; // eax
  const char *v29; // eax
  TESSaveLoad *v30; // ecx
  TESForm::ModReferenceList *v31; // eax
  TESSaveLoad *v32; // ecx
  TESSaveLoad *v33; // ecx
  unsigned __int8 next; // al
  unsigned __int8 v35; // al
  unsigned __int8 v36; // al
  unsigned __int8 vtbl; // al
  TESForm *v38; // ecx
  TESForm *v39; // eax
  void *v40; // eax
  unsigned __int8 v41; // al
  TESForm *v42; // eax
  TESForm *v43; // eax
  _DWORD *v44; // eax
  unsigned int v45; // ebx
  _DWORD *v46; // edi
  int v47; // ebp
  _DWORD *v48; // eax
  TESForm *v49; // eax
  void *v50; // eax
  int v51; // ecx
  unsigned int v52; // ebp
  unsigned int v53; // ebp
  TESForm::FormFlags flags; // edi
  _DWORD *v55; // eax
  _DWORD *v56; // eax
  TESForm *v57; // eax
  TESForm *v58; // ebp
  TESForm **i; // edi
  TESForm **v60; // eax
  _DWORD *v61; // eax
  TESForm *v62; // eax
  TESForm *v63; // ebp
  TESForm **j; // edi
  TESForm **v65; // eax
  TESForm *v66; // eax
  void *v67; // eax
  _DWORD *v68; // edi
  int v69; // ebp
  int v70; // ebx
  TESForm *v71; // eax
  void *v72; // ebp
  _DWORD *v73; // eax
  int v74; // edi
  TESForm *v75; // eax
  char *v76; // eax
  int *v77; // eax
  int v78; // eax
  int v79; // ebp
  int *v80; // edi
  int *v81; // eax
  __int64 v82; // rax
  int v83; // eax
  TESForm *ActorBaseForm; // edi
  TESForm::ModReferenceList *v85; // eax
  TESForm::ModReferenceList *v86; // ebp
  TESForm *v87; // eax
  TESForm::ModReferenceList *v88; // eax
  TESForm *v89; // eax
  TESSaveLoad *v90; // ecx
  UInt32 *v91; // edi
  UInt32 v92; // esi
  TESForm *v93; // eax
  TESForm::FormFlags v94; // ebx
  unsigned __int32 v95; // ecx
  const char *v96; // eax
  const char *v97; // eax
  unsigned __int32 v98; // edx
  int v99; // [esp-18h] [ebp-230h]
  int v100; // [esp-18h] [ebp-230h]
  size_t v101; // [esp-14h] [ebp-22Ch]
  size_t v102; // [esp-14h] [ebp-22Ch]
  int v103; // [esp-14h] [ebp-22Ch]
  int v104; // [esp-14h] [ebp-22Ch]
  size_t v105; // [esp-Ch] [ebp-224h] OVERLAPPED
  size_t v106; // [esp-8h] [ebp-220h]
  size_t v107; // [esp-8h] [ebp-220h]
  size_t v108; // [esp-8h] [ebp-220h]
  size_t v109; // [esp-8h] [ebp-220h]
  int v110; // [esp-8h] [ebp-220h]
  int v111; // [esp-4h] [ebp-21Ch]
  int v112; // [esp-4h] [ebp-21Ch] OVERLAPPED
  size_t v113; // [esp+0h] [ebp-218h]
  size_t v114; // [esp+0h] [ebp-218h]
  int v115; // [esp+0h] [ebp-218h]
  UInt32 v116; // [esp+0h] [ebp-218h]
  int v117; // [esp+4h] [ebp-214h]
  TESForm v118; // [esp+8h] [ebp-210h] BYREF
  TESForm v119; // [esp+20h] [ebp-1F8h] BYREF
  size_t a2; // [esp+38h] [ebp-1E0h]
  size_t v121; // [esp+40h] [ebp-1D8h] BYREF
  size_t v122; // [esp+48h] [ebp-1D0h] BYREF
  TESForm v123; // [esp+50h] [ebp-1C8h] BYREF
  size_t v124; // [esp+68h] [ebp-1B0h] BYREF
  size_t v125; // [esp+70h] [ebp-1A8h]
  size_t v126; // [esp+78h] [ebp-1A0h]
  size_t v127; // [esp+80h] [ebp-198h]
  size_t v128; // [esp+88h] [ebp-190h] BYREF
  size_t v129; // [esp+90h] [ebp-188h]
  size_t v130; // [esp+98h] [ebp-180h]
  size_t v131; // [esp+A0h] [ebp-178h] BYREF
  size_t v132; // [esp+A8h] [ebp-170h]
  size_t v133; // [esp+B0h] [ebp-168h]
  _BYTE v134[12]; // [esp+B8h] [ebp-160h] BYREF
  int v135[2]; // [esp+C4h] [ebp-154h] BYREF
  TESForm v136; // [esp+CCh] [ebp-14Ch] BYREF
  TESForm v137; // [esp+E8h] [ebp-130h] BYREF
  int v138[14]; // [esp+10Ch] [ebp-10Ch] BYREF

  v8 = 0;
  v136.vtbl = 0;
  if ( sub_45A170() )
  {
    v9 = SaveLoad_CurrentSavegame;
    *(_DWORD *)&v134[4] = 4;
    SaveLoad_LoadData((int)v9, &v136.member.flags, *(size_t *)&v134[4]);
    if ( v136.member.flags != (kFormFlags_CantWait|kFormFlags_Compressed|kFormFlags_OffLimits|kFormFlags_Temporary|kFormFlags_InitiallyDisabled|kFormFlags_QuestItem|kFormFlags_BorderRegion|kFormFlags_FromActiveFile|0x4B410000) )
    {
      v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v10 )
      {
        v11 = TESForm_LookupByFormID(*v10);
        v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v11->vtbl->GetEditorName)(
                              v11,
                              *((unsigned __int8 *)v10 + 9),
                              *(UInt32 *)((char *)v10 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\PlayerCharacter.cpp",
          0x2525,
          *v10,
          v12,
          *(_DWORD *)v134,
          *(_DWORD *)&v134[4]);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\PlayerCharacter.cpp",
          0x2525,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v13 = SaveLoad_CurrentSavegame;
    v8 = SaveLoad_CurrentSavegame->unk000[5];
    *(_DWORD *)&v134[4] = 2;
    SaveLoad_LoadData((int)v13, &v136, *(size_t *)&v134[4]);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x3Bu )
  {
    *(_DWORD *)&v134[4] = 0x120;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x204), *(size_t *)&v134[4]);
    *(_DWORD *)&v134[4] = 0x120;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x324), *(size_t *)&v134[4]);
    *(_DWORD *)&v134[4] = 0x120;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x450), *(size_t *)&v134[4]);
  }
  else
  {
    *(_DWORD *)&v134[4] = 0x11C;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x204), *(size_t *)&v134[4]);
    __asm { fldz }
    *(_DWORD *)&v134[4] = 0x11C;
    __asm { fstp    dword ptr [esi+320h] }
    *(float *)(a1 + 0x320) = _ET1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x324), *(size_t *)&v134[4]);
    __asm
    {
      fldz
      fstp    dword ptr [esi+440h]
    }
    *(float *)(a1 + 0x440) = _ET1;
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x31u )
    {
      *(_DWORD *)&v134[4] = 0x11C;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x450), *(size_t *)&v134[4]);
      __asm
      {
        fldz
        fstp    dword ptr [esi+56Ch]
      }
      *(float *)(a1 + 0x56C) = _ET1;
    }
  }
  *(_DWORD *)&v134[4] = ebp0;
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x444), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x448), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x44C), *(size_t *)v134);
  if ( sub_45A170() )
  {
    v17 = SaveLoad_CurrentSavegame;
    v18 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v19 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v18 )
    {
      v20 = TESForm_LookupByFormID(*v18);
      v21 = LOWORD(v136.vtbl) + v8;
      if ( v19 <= v21 )
      {
        if ( v19 < v21 )
        {
          v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v20->vtbl->GetEditorName)(
                                v20,
                                *((unsigned __int8 *)v18 + 9),
                                *(UInt32 *)((char *)v18 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v8 + LOWORD(v136.vtbl) - v19,
            ".\\AI\\PlayerCharacter.cpp",
            0x253F,
            *v18,
            v23,
            HIDWORD(v133),
            *(_DWORD *)v134);
        }
      }
      else
      {
        v22 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v20->vtbl->GetEditorName)(
                              v20,
                              *((unsigned __int8 *)v18 + 9),
                              *(UInt32 *)((char *)v18 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v19 - LOWORD(v136.vtbl) - v8,
          ".\\AI\\PlayerCharacter.cpp",
          0x253F,
          *v18,
          v22,
          HIDWORD(v133),
          *(_DWORD *)v134);
      }
    }
    else
    {
      v24 = LOWORD(v136.vtbl) + v8;
      if ( v19 <= v24 )
      {
        if ( v19 < v24 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v8 + LOWORD(v136.vtbl) - v19,
            ".\\AI\\PlayerCharacter.cpp",
            0x253F,
            LOBYTE(v17[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v19 - LOWORD(v136.vtbl) - v8,
          ".\\AI\\PlayerCharacter.cpp",
          0x253F,
          LOBYTE(v17[1].createdObjectList.next));
      }
    }
  }
  v25 = sub_5AD980(a3, a5, 0);
  j_Actor_LoadGame((PlayerCharacter *)a1, a3, a4, v25, a6, a7);
  v26 = sub_5AD980(a3, v25, 0);
  v136.member.modlist.data = 0;
  v136.member.modlist.next = 0;
  if ( sub_45A170() )
  {
    *(_DWORD *)v134 = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v138, *(size_t *)v134);
    if ( v138[0] != 0x4B4F4C42 )
    {
      v27 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v27 )
      {
        v28 = TESForm_LookupByFormID(*v27);
        v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v28->vtbl->GetEditorName)(
                              v28,
                              *((unsigned __int8 *)v27 + 9),
                              *(UInt32 *)((char *)v27 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\PlayerCharacter.cpp",
          0x2546,
          *v27,
          v29,
          HIDWORD(v133),
          *(_DWORD *)v134);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\PlayerCharacter.cpp",
          0x2546,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v30 = SaveLoad_CurrentSavegame;
    v31 = (TESForm::ModReferenceList *)SaveLoad_CurrentSavegame->unk000[5];
    *(_DWORD *)v134 = 2;
    v136.member.modlist.next = v31;
    SaveLoad_LoadData((int)v30, &v136.member.modlist, *(size_t *)v134);
  }
  if ( (a6 & 0x2000000) != 0 )
  {
    *(_DWORD *)v134 = *(_DWORD *)(a1 + 0x5CC);
    sub_470780(a1);
  }
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x588), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x589), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x58B), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x58C), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x590), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x59C), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5A0), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5A4), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5A8), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x600), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x604), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x608), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x60C), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x610), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x611), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x614), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x620), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x61C), *(size_t *)v134);
  *(_DWORD *)v134 = 0xC;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x62C), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5D4), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x640), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5BC), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x648), *(size_t *)v134);
  v32 = SaveLoad_CurrentSavegame;
  *(_DWORD *)v134 = 4;
  SaveLoad_LoadData((int)v32, (void *)(a1 + 0x64C), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x594), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x598), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x6E4), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x6E5), *(size_t *)v134);
  *(_DWORD *)v134 = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x6E6), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x6F4), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x6F8), *(size_t *)v134);
  *(_DWORD *)v134 = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x6FC), *(size_t *)v134);
  v33 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x1Du )
  {
    *(_DWORD *)v134 = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x714), *(size_t *)v134);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x22u )
  {
    *(_DWORD *)v134 = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5C0), *(size_t *)v134);
    v33 = SaveLoad_CurrentSavegame;
  }
  next = (unsigned __int8)v33[1].createdObjectList.next;
  if ( next >= 0x28u && next < 0x2Du )
  {
    SaveLoad_AdvanceBufferOffset(v33, 1);
    *(_DWORD *)v134 = 0xC;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x720), *(size_t *)v134);
    *(_DWORD *)v134 = 0xC;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x720), *(size_t *)v134);
    v33 = SaveLoad_CurrentSavegame;
  }
  v35 = (unsigned __int8)v33[1].createdObjectList.next;
  if ( v35 >= 0x35u && v35 < 0x71u )
  {
    SaveLoad_AdvanceBufferOffset(v33, 4);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x39u )
  {
    *(_DWORD *)v134 = 0x70;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x658), *(size_t *)v134);
    *(_DWORD *)v134 = 0x18;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x6C8), *(size_t *)v134);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x3Fu )
  {
    *(_DWORD *)v134 = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x738), *(size_t *)v134);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x40u )
  {
    *(_DWORD *)v134 = 4;
    SaveLoad_LoadData((int)v33, (void *)(a1 + 0x57C), *(size_t *)v134);
    *(_DWORD *)v134 = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x580), *(size_t *)v134);
    *(_DWORD *)v134 = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x584), *(size_t *)v134);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x49u )
  {
    *(_DWORD *)v134 = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x110), *(size_t *)v134);
    *(_DWORD *)v134 = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x200), *(size_t *)v134);
    v33 = SaveLoad_CurrentSavegame;
  }
  v36 = (unsigned __int8)v33[1].createdObjectList.next;
  if ( v36 >= 0x4Au && v36 < 0x59u )
  {
    SaveLoad_AdvanceBufferOffset(v33, 8);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) == 0x59 )
  {
    SaveLoad_AdvanceBufferOffset(v33, 4);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x63u )
  {
    *(_DWORD *)v134 = 1;
    TESForm_LoadDataFromCurrentSaveGame(&v136, *(size_t *)v134);
    vtbl = (unsigned __int8)v136.vtbl;
    if ( LOBYTE(v136.vtbl) )
    {
      if ( !*(_DWORD *)(a1 + 0x5B0) )
      {
        *(_DWORD *)(a1 + 0x5B0) = FormHeapAlloc(
                                    (unsigned __int64)LOBYTE(v136.vtbl) >> 0x1E != 0
                                  ? 0xFFFFFFFF
                                  : 4 * LOBYTE(v136.vtbl));
        vtbl = (unsigned __int8)v136.vtbl;
      }
      v38 = *(TESForm **)(a1 + 0x5B0);
      *(_DWORD *)v134 = 4 * vtbl;
      TESForm_LoadDataFromCurrentSaveGame(v38, *(size_t *)v134);
    }
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x71u )
  {
    *(_DWORD *)v134 = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x58A), *(size_t *)v134);
    *(_DWORD *)v134 = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5A9), *(size_t *)v134);
    *(_DWORD *)v134 = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x718), *(size_t *)v134);
    *(_DWORD *)v134 = 4;
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)(a1 + 0x760), *(size_t *)v134, *(int *)&v134[8], v135[0], v135[1]);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x78u )
  {
    LODWORD(v133) = 1;
    TESForm_LoadDataFromCurrentSaveGame(&byte_B3BAEA, v133);
    LODWORD(v133) = 4;
    TESForm_LoadDataFromCurrentSaveGame(&flt_B3BAFC, v133);
    v33 = SaveLoad_CurrentSavegame;
  }
  if ( LOBYTE(v33[1].createdObjectList.next) >= 0x7Au )
  {
    LODWORD(v133) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&qword_B3BB20 + 4), v133);
  }
  LODWORD(v133) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame(&v136, v133, *(int *)v134, *(int *)&v134[4], *(int *)&v134[8]);
  LODWORD(v132) = 4;
  *(_DWORD *)(a1 + 0x118) = v135[0];
  TESForm_LoadFormIDFromCurrentSaveGame(&v137, v132, v133, SHIDWORD(v133), *(int *)v134);
  LODWORD(v131) = 4;
  HIDWORD(v130) = &v137;
  *(_DWORD *)(a1 + 0x644) = v136.member.modlist.next;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)HIDWORD(v130), v131, v132, SHIDWORD(v132), v133);
  LODWORD(v130) = 0;
  FormID = (TESChildCELL *)v136.member.modlist.next;
  PlayerCharacter_SetCurrentMagicItem((_DWORD *)a1, (char *)v130);
  LODWORD(v130) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame(&v137, v130, v131, SHIDWORD(v131), v132);
  LODWORD(v129) = 4;
  *(_DWORD *)(a1 + 0x624) = v136.member.modlist.next;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v134[8], v129, v130, SHIDWORD(v130), v131);
  LODWORD(v128) = 4;
  HIDWORD(v127) = v135;
  *(_DWORD *)(a1 + 0x1E8) = *(_DWORD *)v134;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)HIDWORD(v127), v128, v129, SHIDWORD(v129), v130);
  LODWORD(v127) = 4;
  HIDWORD(v126) = &v136;
  *(_DWORD *)(a1 + 0x1EC) = *(_DWORD *)&v134[4];
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)HIDWORD(v126), v127, v128, SHIDWORD(v128), v129);
  LODWORD(v126) = 4;
  *(_DWORD *)(a1 + 0x1E0) = v135[0];
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v134[4], v126, v127, SHIDWORD(v127), v128);
  v39 = TESForm_LookupByFormID(HIDWORD(v133));
  v40 = OblivionDynamicCast(
          v39,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESRegion `RTTI Type Descriptor',
          0);
  LODWORD(v125) = 4;
  HIDWORD(v124) = (char *)&v131 + 4;
  *(_DWORD *)(a1 + 0x6E8) = v40;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)HIDWORD(v124), v125, v126, SHIDWORD(v126), v127);
  LODWORD(v124) = 4;
  v123.member.modlist.next = (TESForm::ModReferenceList *)&v131;
  *(_DWORD *)(a1 + 0x628) = HIDWORD(v130);
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)v123.member.modlist.next, v124, v125, SHIDWORD(v125), v126);
  v123.member.modlist.data = (Data *)4;
  *(_DWORD *)(a1 + 0x650) = v130;
  TESForm_LoadFormIDFromCurrentSaveGame(
    (TESForm *)((char *)&v128 + 4),
    *(_QWORD *)&v123.member.modlist,
    v124,
    SHIDWORD(v124),
    v125);
  *(_DWORD *)(a1 + 0x6E0) = HIDWORD(v127);
  v41 = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( v41 >= 0x28u && v41 < 0x2Du )
  {
    v123.member.flags = kFormFlags_Loaded;
    TESForm_LoadFormIDFromCurrentSaveGame(
      (TESForm *)((char *)&v124 + 4),
      *(size_t *)&v123.member.flags,
      (int)v123.member.modlist.data,
      (int)v123.member.modlist.next,
      v124);
    *(_DWORD *)(a1 + 0x72C) = TESForm_LookupByFormID((UInt32)v123.member.modlist.next);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x40u )
  {
    v123.vtbl = (TESFormVtbl *)4;
    TESForm_LoadFormIDFromCurrentSaveGame(
      (TESForm *)&v123.member.modlist.next,
      *(size_t *)&v123.vtbl,
      v123.member.flags,
      v123.member.refID,
      (int)v123.member.modlist.data);
    *(_DWORD *)(a1 + 0x578) = v123.member.refID;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x42u )
  {
    LODWORD(v122) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame(
      (TESForm *)&v123.member.refID,
      v122,
      (int)v123.vtbl,
      *(int *)&v123.member.type,
      v123.member.flags);
    ObjectRef = *(_DWORD *)&v123.member.type;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x57u )
  {
    LODWORD(v121) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v123.member, v121, v122, SHIDWORD(v122), (int)v123.vtbl);
    v42 = TESForm_LookupByFormID(HIDWORD(v122));
    *(_DWORD *)(a1 + 0x570) = OblivionDynamicCast(
                                v42,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                0);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x60u )
  {
    LODWORD(a2) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)((char *)&v122 + 4), a2, v121, SHIDWORD(v121), v122);
    v43 = TESForm_LookupByFormID(HIDWORD(v121));
    *(_DWORD *)(a1 + 0x638) = v43;
    if ( v43 )
      v26 = sub_663D30((TESObjectREFR *)a1, v26);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x63u )
  {
    v119.member.modlist.data = (Data *)2;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&v121 + 4), *(_QWORD *)&v119.member.modlist);
    if ( WORD2(v121) )
    {
      v44 = (_DWORD *)FormHeapAlloc(8u);
      if ( v44 )
      {
        *v44 = 0;
        v44[1] = 0;
      }
      else
      {
        v44 = 0;
      }
      *(_DWORD *)(a1 + 0x5AC) = v44;
    }
    v45 = 0;
    if ( WORD2(v121) )
    {
      do
      {
        v119.member.modlist.data = (Data *)4;
        TESForm_LoadFormIDFromCurrentSaveGame(&v123, *(_QWORD *)&v119.member.modlist, a2, SHIDWORD(a2), v121);
        v46 = *(_DWORD **)(a1 + 0x5AC);
        v47 = v122;
        if ( (_DWORD)v122 )
        {
          if ( *v46 )
          {
            v48 = (_DWORD *)FormHeapAlloc(8u);
            if ( v48 )
            {
              *v48 = *v46;
              v48[1] = 0;
              v48[1] = v46[1];
              v46[1] = v48;
            }
            else
            {
              *(_DWORD *)4 = v46[1];
              v46[1] = 0;
            }
            *v46 = v47;
          }
          else
          {
            *v46 = v122;
          }
        }
        ++v45;
      }
      while ( v45 < WORD2(a2) );
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Cu )
  {
    v119.member.flags = kFormFlags_Loaded;
    TESForm_LoadFormIDFromCurrentSaveGame(
      (TESForm *)&v122,
      *(size_t *)&v119.member.flags,
      (int)v119.member.modlist.data,
      (int)v119.member.modlist.next,
      a2);
    v49 = TESForm_LookupByFormID(v121);
    v50 = OblivionDynamicCast(
            v49,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESWeather `RTTI Type Descriptor',
            0);
    v51 = *(_DWORD *)(a1 + 0x6E8);
    if ( v51 )
    {
      if ( v50 )
        *(_DWORD *)(v51 + 0x24) = v50;
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Fu )
  {
    NiTMap_Clear((_DWORD *)(a1 + 0x788));
    v119.vtbl = (TESFormVtbl *)2;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v119.member.modlist.next, *(size_t *)&v119.vtbl);
    v52 = 0;
    if ( LOWORD(v119.member.modlist.next) )
    {
      do
      {
        v119.vtbl = (TESFormVtbl *)4;
        TESForm_LoadFormIDFromCurrentSaveGame(
          (TESForm *)&v121,
          *(size_t *)&v119.vtbl,
          v119.member.flags,
          v119.member.refID,
          (int)v119.member.modlist.data);
        v118.member.modlist.data = (Data *)1;
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v119.member.modlist, *(_QWORD *)&v118.member.modlist);
        if ( (_DWORD)a2 )
          NiTMap_SetAt((_DWORD *)(a1 + 0x788), a2, (int)v119.member.modlist.data);
        ++v52;
      }
      while ( v52 < LOWORD(v119.member.refID) );
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x73u )
  {
    v118.member.modlist.data = (Data *)2;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v119.member.refID, *(_QWORD *)&v118.member.modlist);
    v53 = 0;
    if ( LOWORD(v119.member.refID) )
    {
      do
      {
        v118.member.modlist.data = (Data *)4;
        TESForm_LoadFormIDFromCurrentSaveGame(
          (TESForm *)&v119.member.modlist,
          *(_QWORD *)&v118.member.modlist,
          (int)v119.vtbl,
          *(int *)&v119.member.type,
          v119.member.flags);
        flags = v119.member.flags;
        if ( v119.member.flags )
        {
          if ( dword_B3BB44 )
          {
            v55 = (_DWORD *)FormHeapAlloc(8u);
            if ( v55 )
            {
              *v55 = dword_B3BB44;
              v55[1] = 0;
            }
            else
            {
              v55 = 0;
            }
            v55[1] = dword_B3BB48;
            dword_B3BB48 = (int)v55;
            dword_B3BB44 = flags;
          }
          else
          {
            dword_B3BB44 = v119.member.flags;
          }
        }
        ++v53;
      }
      while ( v53 < *(unsigned __int16 *)&v119.member.type );
    }
  }
  ActiveEffect_Base_LoadAEList_(
    *(_DWORD *)(a1 + 0x1E4),
    (TESObjectREFR *)a1,
    v118.member.refID,
    (__int16)v118.member.modlist.data,
    (int)v118.member.modlist.next,
    (int)v119.vtbl,
    *(float *)&v119.member.type,
    v119.member.flags,
    v119.member.refID,
    (int)v119.member.modlist.data,
    (int)v119.member.modlist.next);
  v118.member.flags = kFormFlags_BorderRegion|kFormFlags_Loaded|0x10;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x130), *(size_t *)&v118.member.flags);
  sub_663980((unsigned int *)a1);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x58u )
  {
    v118.member.flags = kFormFlags_Loaded;
    *(_DWORD *)&v119.member.type = 0;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v119.member, *(size_t *)&v118.member.flags);
    if ( *(int *)&v119.member.type > 0 )
    {
      if ( !*(_DWORD *)(a1 + 0x5B4) )
      {
        v56 = (_DWORD *)FormHeapAlloc(8u);
        if ( v56 )
        {
          *v56 = 0;
          v56[1] = 0;
        }
        else
        {
          v56 = 0;
        }
        *(_DWORD *)(a1 + 0x5B4) = v56;
      }
      for ( v119.member.refID = 0; (int)v119.member.refID < *(int *)&v119.member.type; ++v119.member.refID )
      {
        v57 = (TESForm *)FormHeapAlloc(8u);
        if ( v57 )
        {
          v57->vtbl = 0;
          *(_DWORD *)&v57->member.type = 0;
          v58 = v57;
        }
        else
        {
          v58 = 0;
        }
        v118.member.flags = kFormFlags_Linked;
        TESForm_LoadDataFromCurrentSaveGame(v58, *(size_t *)&v118.member.flags);
        if ( v58 )
        {
          for ( i = *(TESForm ***)(a1 + 0x5B4); i[1]; i = (TESForm **)i[1] )
            ;
          if ( *i )
          {
            v60 = (TESForm **)FormHeapAlloc(8u);
            if ( v60 )
            {
              *v60 = v58;
              v60[1] = 0;
              i[1] = (TESForm *)v60;
            }
            else
            {
              i[1] = 0;
            }
          }
          else
          {
            *i = v58;
          }
        }
      }
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x58u )
  {
    if ( !*(_DWORD *)(a1 + 0x5B4) )
    {
      v61 = (_DWORD *)FormHeapAlloc(8u);
      if ( v61 )
      {
        *v61 = 0;
        v61[1] = 0;
      }
      else
      {
        v61 = 0;
      }
      *(_DWORD *)(a1 + 0x5B4) = v61;
    }
    v62 = (TESForm *)FormHeapAlloc(8u);
    if ( v62 )
    {
      v62->vtbl = 0;
      *(_DWORD *)&v62->member.type = 0;
      v63 = v62;
    }
    else
    {
      v63 = 0;
    }
    v118.member.flags = kFormFlags_Linked;
    TESForm_LoadDataFromCurrentSaveGame(v63, *(size_t *)&v118.member.flags);
    if ( v63 )
    {
      for ( j = *(TESForm ***)(a1 + 0x5B4); j[1]; j = (TESForm **)j[1] )
        ;
      if ( *j )
      {
        v65 = (TESForm **)FormHeapAlloc(8u);
        if ( v65 )
        {
          *v65 = v63;
          v65[1] = 0;
          j[1] = (TESForm *)v65;
        }
        else
        {
          j[1] = 0;
        }
      }
      else
      {
        *j = v63;
      }
    }
  }
  v118.member.flags = kFormFlags_FromActiveFile|kFormFlags_FromMaster;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x5B8), *(size_t *)&v118.member.flags);
  v118.member.flags = kFormFlags_BorderRegion|kFormFlags_Loaded|0x10;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x188), *(size_t *)&v118.member.flags);
  v118.member.flags = kFormFlags_Loaded;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x184), *(size_t *)&v118.member.flags);
  v118.member.flags = kFormFlags_FromMaster;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x1DC), *(size_t *)&v118.member.flags);
  v118.member.flags = kFormFlags_Loaded;
  TESForm_LoadFormIDFromCurrentSaveGame(
    (TESForm *)&v119.member.flags,
    *(size_t *)&v118.member.flags,
    (int)v118.member.modlist.data,
    (int)v118.member.modlist.next,
    (int)v119.vtbl);
  if ( v119.vtbl )
  {
    v66 = TESForm_LookupByFormID((UInt32)v119.vtbl);
    v67 = OblivionDynamicCast(
            v66,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESQuest `RTTI Type Descriptor',
            0);
    *(_DWORD *)(a1 + 0x5F4) = v67;
    if ( v67 )
      sub_529A20((int)v67, v26, (_DWORD *)(a1 + 0x5F8));
  }
  else
  {
    *(_DWORD *)(a1 + 0x5F4) = 0;
  }
  v68 = (_DWORD *)(a1 + 0x5E4);
  if ( *(_DWORD *)(a1 + 0x5E8) )
  {
    do
    {
      v69 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5E8) + 4);
      FormHeapFree(*(_DWORD *)(a1 + 0x5E8));
      *(_DWORD *)(a1 + 0x5E8) = v69;
    }
    while ( v69 );
  }
  v118.vtbl = (TESFormVtbl *)2;
  *v68 = 0;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v118.member.modlist.next, *(size_t *)&v118.vtbl);
  v70 = 0;
  if ( LOWORD(v118.member.modlist.next) )
  {
    do
    {
      v118.vtbl = (TESFormVtbl *)4;
      TESForm_LoadFormIDFromCurrentSaveGame(
        &v119,
        *(size_t *)&v118.vtbl,
        v118.member.flags,
        v118.member.refID,
        (int)v118.member.modlist.data);
      v71 = TESForm_LookupByFormID((UInt32)v118.member.modlist.data);
      v72 = OblivionDynamicCast(
              v71,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESTopic `RTTI Type Descriptor',
              0);
      if ( v72 )
      {
        if ( *v68 )
        {
          v73 = (_DWORD *)FormHeapAlloc(8u);
          if ( v73 )
          {
            *v73 = *v68;
            v73[1] = 0;
          }
          else
          {
            v73 = 0;
          }
          v73[1] = *(_DWORD *)(a1 + 0x5E8);
          *(_DWORD *)(a1 + 0x5E8) = v73;
        }
        *v68 = v72;
      }
      ++v70;
    }
    while ( v70 < LOWORD(v118.member.refID) );
  }
  sub_52F6D0((tListTopic *)(a1 + 0x5E4));
  if ( *(_DWORD *)(a1 + 0x5F0) )
  {
    do
    {
      v74 = *(_DWORD *)(*(_DWORD *)(a1 + 0x5F0) + 4);
      FormHeapFree(*(_DWORD *)(a1 + 0x5F0));
      *(_DWORD *)(a1 + 0x5F0) = v74;
    }
    while ( v74 );
  }
  LODWORD(v113) = 2;
  *(_DWORD *)(a1 + 0x5EC) = 0;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v118.member.refID, v113);
  v118.member.modlist.next = 0;
  if ( LOWORD(v118.member.refID) )
  {
    do
    {
      LODWORD(v114) = 4;
      TESForm_LoadFormIDFromCurrentSaveGame(
        (TESForm *)&v118.member.modlist,
        v114,
        (int)v118.vtbl,
        *(int *)&v118.member.type,
        v118.member.flags);
      LODWORD(v106) = 1;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v118.member.modlist, v106);
      LODWORD(v107) = 1;
      TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v119.member, v107);
      v75 = TESForm_LookupByFormID(v118.member.flags);
      v76 = (char *)OblivionDynamicCast(
                      v75,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESQuest `RTTI Type Descriptor',
                      0);
      if ( v76 )
      {
        v77 = (int *)sub_529BB0(v76, (char)v118.member.modlist.data);
        if ( v77 )
        {
          v78 = sub_52AC30(v77, v119.member.type);
          v79 = v78;
          if ( v78 )
          {
            v80 = (int *)(a1 + 0x5EC);
            if ( *(_DWORD *)(a1 + 0x5F0) )
            {
              do
                v80 = (int *)v80[1];
              while ( v80[1] );
            }
            if ( *v80 )
            {
              v81 = (int *)FormHeapAlloc(8u);
              if ( v81 )
              {
                *v81 = v79;
                v81[1] = 0;
                v80[1] = (int)v81;
              }
              else
              {
                v80[1] = 0;
              }
            }
            else
            {
              *v80 = v78;
            }
          }
        }
      }
      ++v118.member.refID;
    }
    while ( (int)v118.member.refID < *(unsigned __int16 *)&v118.member.type );
  }
  EffectSettingCollection_LoadKnownEffects_(
    v111,
    v114,
    SHIDWORD(v114),
    (__int16)v118.vtbl,
    *(int *)&v118.member.type,
    v118.member.flags,
    v118.member.refID);
  v82 = ((__int64 (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0x170))(a1);
  sub_528D90((float *)v82, SHIDWORD(v82), (TESObjectREFR *)a1);
  LODWORD(v108) = 1;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v118.member, v108);
  LODWORD(v109) = v118.member.type;
  TESForm_LoadDataFromCurrentSaveGame(&v123, v109);
  v83 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
  BSStringT_Set((BSStringT *)(v83 + 0xA4), (const char *)&v123, 0);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x2Cu )
  {
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0);
    v85 = (TESForm::ModReferenceList *)TESDataHandler_LookupTESClassByFormID((void *)iPlayerCustomClass);
    v110 = 4;
    v86 = v85;
    TESForm_LoadFormIDFromCurrentSaveGame(
      (TESForm *)&v118.member.flags,
      *(size_t *)((char *)&v112 + 0xFFFFFFFC),
      v115,
      v117,
      (int)v118.vtbl);
    v87 = TESForm_LookupByFormID((UInt32)v118.vtbl);
    v88 = (TESForm::ModReferenceList *)OblivionDynamicCast(
                                         v87,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         &TESClass `RTTI Type Descriptor',
                                         0);
    if ( v88 )
    {
      ActorBaseForm[0xA].member.modlist.next = v88;
      if ( v88 == v86 )
        sub_51C490((int)v88);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x45u )
  {
    LODWORD(v105) = 4;
    TESForm_LoadFormIDFromCurrentSaveGame(&v118, v105, v112, v115, v117);
    if ( v116 )
    {
      v89 = TESForm_LookupByFormID(v116);
      *(_DWORD *)(a1 + 0x654) = OblivionDynamicCast(
                                  v89,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESClass `RTTI Type Descriptor',
                                  0);
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x7Eu )
  {
    LODWORD(v101) = 1;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x116), v101);
    LODWORD(v102) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(a1 + 0x700), v102);
  }
  if ( sub_45A170() )
  {
    v90 = SaveLoad_CurrentSavegame;
    v91 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v92 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v91 )
    {
      v93 = TESForm_LookupByFormID(*v91);
      v94 = v118.member.flags;
      v95 = v118.member.flags + *(unsigned __int16 *)&v118.member.type;
      if ( v92 <= v95 )
      {
        if ( v92 < v95 )
        {
          v97 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v93->vtbl->GetEditorName)(
                                v93,
                                *((unsigned __int8 *)v91 + 9),
                                *(UInt32 *)((char *)v91 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v94 + *(unsigned __int16 *)&v118.member.type - v92,
            ".\\AI\\PlayerCharacter.cpp",
            0x2709,
            *v91,
            v97,
            v100,
            v104);
        }
      }
      else
      {
        v96 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v93->vtbl->GetEditorName)(
                              v93,
                              *((unsigned __int8 *)v91 + 9),
                              *(UInt32 *)((char *)v91 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v92 - *(unsigned __int16 *)&v118.member.type - v94,
          ".\\AI\\PlayerCharacter.cpp",
          0x2709,
          *v91,
          v96,
          v99,
          v103);
      }
    }
    else
    {
      v98 = *(unsigned __int16 *)&v118.member.type + v118.member.flags;
      if ( v92 <= v98 )
      {
        if ( v92 < v98 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v118.member.flags + *(unsigned __int16 *)&v118.member.type - v92,
            ".\\AI\\PlayerCharacter.cpp",
            0x2709,
            LOBYTE(v90[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v92 - *(unsigned __int16 *)&v118.member.type - v118.member.flags,
          ".\\AI\\PlayerCharacter.cpp",
          0x2709,
          LOBYTE(v90[1].createdObjectList.next));
      }
    }
  }
}
