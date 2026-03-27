void __userpurge TESSaveLoadGame_LoadGame(
        TESSaveLoad *this@<ecx>,
        double st0_0@<st7>,
        double st1_0@<st6>,
        double st2_0@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10,
        char *Str,
        char a12,
        int a13,
        int a14,
        TESObjectREFR *a15,
        char a16,
        __int16 a17,
        int a18,
        int a19,
        float *a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        char a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        __int16 a37,
        int a38,
        unsigned int a39,
        unsigned int a40,
        float a41,
        float a42,
        int a43,
        int a44,
        int a45,
        int a46,
        char a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        unsigned int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        float a59,
        float a60,
        int a61,
        int a62,
        int a63)
{
  _DWORD *OpenMenuTile; // eax
  OSGlobals *v65; // eax
  const char *sound; // ebx
  char *v67; // esi
  int v68; // ebx
  int v69; // ecx
  unsigned int v70; // eax
  unsigned __int8 v71; // al
  _DWORD *v72; // ebp
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **v73; // eax
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **v74; // eax
  _DWORD *v75; // ecx
  unsigned int v76; // esi
  UInt32 mainThreadID; // edi
  _DWORD *v78; // ecx
  ChangesMap *v79; // eax
  ChangesMap *v80; // eax
  void (__cdecl *v81)(char *, int *, int, int *, int); // edx
  void (__cdecl *v82)(char *, unsigned int *, int, int *, int); // edx
  UInt32 v83; // ebx
  _DWORD *v84; // ecx
  void (__thiscall ***v85)(_DWORD, int); // ecx
  int v86; // edi
  unsigned int v87; // edi
  void (__cdecl *v88)(char *, UInt32 *, int, TESObjectREFR **, int); // edx
  UInt32 v89; // edi
  void (__cdecl *v90)(char *, UInt8 *, int, TESObjectCELL **, int); // edx
  void (__cdecl *v91)(char *, TESObjectREFR **, int, TESObjectCELL **, int); // edx
  UInt32 ResolveFormID; // eax
  TESSaveLoad *v93; // ecx
  int v94; // edi
  int v95; // ebx
  bool v96; // cf
  TESObjectCELL *v97; // ecx
  unsigned __int16 v98; // dx
  TESObjectREFR *v99; // eax
  TESObjectCELL *v100; // eax
  TESObjectCELL *v101; // esi
  TESObjectCELL *YCoordinate; // eax
  TESSaveLoad *v103; // ecx
  UInt32 v104; // eax
  void (__thiscall *v105)(char *, unsigned int, int); // edx
  TESForm *v106; // edi
  TESWorldSpace *v107; // edi
  TESObjectREFR *v108; // eax
  TESForm *v109; // eax
  TESForm *v110; // edi
  unsigned int *v111; // eax
  unsigned int v112; // ecx
  unsigned __int16 v113; // ax
  int v114; // esi
  TESSaveLoad *v115; // ecx
  UInt32 v116; // eax
  int v117; // ecx
  TESForm *v118; // edi
  TESWorldSpace *v119; // eax
  TESWorldSpace *v120; // edi
  TESObjectREFR *v121; // eax
  TESObjectCELL *v122; // ecx
  TESObjectREFR *v123; // eax
  TESObjectCELL *ParentCell; // eax
  int *v125; // eax
  int v126; // esi
  UInt32 v127; // esi
  TESForm *v128; // esi
  TESObjectCELL *CellAtCellCoord; // edi
  TESWorldSpace *v130; // eax
  void *v131; // eax
  unsigned __int8 v132; // cl
  unsigned __int8 v133; // dl
  unsigned int v134; // esi
  unsigned int *v135; // eax
  unsigned int v136; // edi
  int v137; // esi
  bool v138; // al
  bool v139; // zf
  FreeEntry *v140; // esi
  int v141; // eax
  char v142; // cl
  int v143; // edx
  UInt32 v144; // eax
  FreeEntry *v145; // eax
  DWORD (__stdcall *v146)(); // edi
  UInt32 v147; // esi
  UInt32 v148; // esi
  double v149; // st7
  double v150; // st7
  UInt32 v151; // edi
  int v152; // edx
  unsigned int **v153; // ecx
  unsigned int v154; // edi
  _DWORD *v155; // ebp
  double v156; // st7
  _DWORD *v157; // ebp
  size_t v158; // [esp+4h] [ebp-334h]
  TESObjectREFR *v159; // [esp+4h] [ebp-334h]
  int v160; // [esp+4h] [ebp-334h]
  UInt8 v161; // [esp+1Fh] [ebp-319h] BYREF
  TESObjectREFR *v162; // [esp+20h] [ebp-318h] BYREF
  UInt32 a1; // [esp+24h] [ebp-314h] BYREF
  unsigned __int8 v164; // [esp+28h] [ebp-310h]
  int v165; // [esp+29h] [ebp-30Fh]
  int v166; // [esp+2Dh] [ebp-30Bh]
  TESObjectCELL *v167; // [esp+34h] [ebp-304h] BYREF
  int v168; // [esp+38h] [ebp-300h] BYREF
  unsigned int v169; // [esp+3Ch] [ebp-2FCh] BYREF
  char *v170; // [esp+40h] [ebp-2F8h]
  int v171; // [esp+44h] [ebp-2F4h] BYREF
  int v172; // [esp+48h] [ebp-2F0h]
  int v173; // [esp+4Ch] [ebp-2ECh]
  int v174; // [esp+50h] [ebp-2E8h]
  int v175; // [esp+54h] [ebp-2E4h]
  __int16 Src; // [esp+58h] [ebp-2E0h] BYREF
  unsigned __int8 v177; // [esp+5Ah] [ebp-2DEh]
  char v178; // [esp+5Bh] [ebp-2DDh]
  int v179; // [esp+5Ch] [ebp-2DCh]
  void *v180; // [esp+60h] [ebp-2D8h]
  int v181; // [esp+64h] [ebp-2D4h]
  unsigned __int16 v182; // [esp+68h] [ebp-2D0h] BYREF
  char v183; // [esp+6Ah] [ebp-2CEh]
  char v184; // [esp+6Bh] [ebp-2CDh]
  int v185; // [esp+6Ch] [ebp-2CCh]
  int v186; // [esp+70h] [ebp-2C8h]
  _WORD v187[4]; // [esp+74h] [ebp-2C4h] BYREF
  int v188; // [esp+7Ch] [ebp-2BCh] BYREF
  unsigned int v189; // [esp+80h] [ebp-2B8h]
  UInt32 v190; // [esp+84h] [ebp-2B4h]
  float v191; // [esp+88h] [ebp-2B0h] BYREF
  float v192; // [esp+8Ch] [ebp-2ACh]
  int v193; // [esp+90h] [ebp-2A8h]
  void **v194; // [esp+A0h] [ebp-298h] BYREF
  unsigned int v195; // [esp+A4h] [ebp-294h]
  int v196; // [esp+A8h] [ebp-290h]
  int v197; // [esp+ACh] [ebp-28Ch]
  int v198; // [esp+B0h] [ebp-288h]
  int v199; // [esp+B4h] [ebp-284h]
  int v200; // [esp+B8h] [ebp-280h]
  unsigned int v201[4]; // [esp+BCh] [ebp-27Ch] BYREF
  UInt32 v202; // [esp+CCh] [ebp-26Ch]
  float v203; // [esp+D0h] [ebp-268h]
  float v204; // [esp+D4h] [ebp-264h]
  int v205; // [esp+D8h] [ebp-260h]
  unsigned int v206[3]; // [esp+E8h] [ebp-250h] BYREF
  unsigned int v207[11]; // [esp+F4h] [ebp-244h] BYREF
  char v208[260]; // [esp+120h] [ebp-218h] BYREF
  char v209[260]; // [esp+224h] [ebp-114h] BYREF
  int v210; // [esp+334h] [ebp-4h]

  v200 = a10;
  v185 = ((int (__usercall *)@<eax>(double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))GetTickCount)(
           a9,
           a8,
           a7,
           a6,
           a5,
           st2_0,
           st1_0,
           st0_0);
  *((_BYTE *)this + 0xA9) = 0;
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414);
  if ( OpenMenuTile )
  {
    if ( Tile_GetParentMenu(OpenMenuTile) )
      *((_BYTE *)this + 0xA9) = 1;
  }
  if ( *((_BYTE *)this + 0xA9) )
  {
    v65 = OSGlobals;
    IsAtMainMenu = 0;
    sound = (const char *)v65->sound;
    if ( sound )
    {
      if ( SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 1) )
        SoundManager_PlayMusic((int)sound, (int)Str);
    }
  }
  v67 = (char *)Savegame_Rename(this, a9, a6, a7, a8, a5, st0_0, st1_0, st2_0, a10, Str, 1);
  v68 = 0;
  v196 = 0x32;
  v199 = 0x32;
  v170 = v67;
  v194 = &NiTLargeArray<FormAndFlags *>::`vftable';
  v197 = 0;
  v198 = 0;
  v195 = FormHeapAlloc(0xC8u);
  v210 = 0;
  if ( !v67
    || !v67[0x24]
    || (v70 = sub_45DBC0((int)this, a9, a6, a7, a8, a5, st0_0, st1_0, st2_0, v67, 1), (v68 = v70) == 0)
    || v70 == 0xFFFFFFFF )
  {
    if ( (!Str || !strstr(Str, "quicksave")) && !v68 )
      ShowUIMessageBox(v69, (char)this, a7, a8, a9, (const char *)dword_B38740, 0, 0, EmptyString, 0);
    if ( v67 )
    {
      v157 = *((_DWORD **)this + 0x1B);
      if ( v157 )
        BSSimpleList_Remove(v157, (int)v67);
      (**(void (__thiscall ***)(char *, int))v67)(v67, 1);
    }
    goto LABEL_200;
  }
  v71 = *((_BYTE *)this + 0x7C);
  if ( v71 > 0x7Eu )
  {
    _sprintf(
      v209,
      "You are loading a savegame with version %i, but the latest version this exe supports is %i.  It is possible that t"
      "his save game will load correctly, but it is unlikely.  Select abort to skip loading.",
      v71,
      0x7D);
    if ( (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_B34D90 + 0x18))(dword_B34D90, v209) == 3 )
    {
      v72 = *((_DWORD **)this + 0x1B);
      if ( v72 )
        BSSimpleList_Remove(v72, (int)v67);
      (**(void (__thiscall ***)(char *, int))v67)(v67, 1);
      FormHeapFree(v195);
      return;
    }
  }
  sub_45D5F0(
    this,
    (char)this,
    (int)v67,
    v68,
    0,
    (char *)this + 0xB0,
    (_WORD *)this + 0xDA,
    0,
    (float *)this + 0x6E,
    0,
    (_DWORD *)this + 0x6F,
    0);
  if ( a12 )
  {
    v73 = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **)FormHeapAlloc(8u);
    v180 = v73;
    LOBYTE(v210) = 1;
    if ( v73 )
      v74 = sub_45F0F0(v73);
    else
      v74 = 0;
    LOBYTE(v210) = 0;
    this->unk030[4] = (UInt32)v74;
  }
  if ( !sub_45C9C0((int)this, st0_0, st1_0, st2_0, a5, a6, a7, a8, a9, v67) )
  {
    v75 = *((_DWORD **)this + 0x1B);
    if ( v75 )
      BSSimpleList_Remove(v75, (int)v67);
    (**(void (__thiscall ***)(char *, int))v67)(v67, 1);
    v76 = this->unk030[4];
    if ( v76 )
    {
      sub_4530A0((void (__stdcall ****)(signed int))this->unk030[4]);
      FormHeapFree(v76);
    }
    this->unk030[4] = 0;
LABEL_200:
    FormHeapFree(v195);
    return;
  }
  sub_45A190((void **)this, (char)this, (int)v67);
  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    this->flags |= 1u;
  else
    this->flags |= 0x40000u;
  v78 = (_DWORD *)this->unk030[4];
  this->flags |= 0x800u;
  *((_BYTE *)this + 0xA8) = 0;
  if ( v78 )
    sub_4531B0(v78, (char)this, v68, "Save Game Header");
  sub_462080((char *)this);
  v79 = (ChangesMap *)FormHeapAlloc(0x10u);
  v180 = v79;
  LOBYTE(v210) = 2;
  if ( v79 )
    v80 = ChangesMap::ChangesMap(v79);
  else
    v80 = 0;
  this->unk000[1] = (UInt32)v80;
  v81 = *((void (__cdecl **)(char *, int *, int, int *, int))v67 + 1);
  LOBYTE(v210) = 0;
  v171 = 1;
  v81(v67, &v168, 4, &v171, 1);
  v82 = *((void (__cdecl **)(char *, unsigned int *, int, int *, int))v67 + 1);
  v171 = 1;
  v82(v67, &v169, 4, &v171, 1);
  if ( !v168 )
  {
    v83 = OSGlobals->mainThreadID;
    if ( GetCurrentThreadId() == v83 )
      this->flags &= ~1u;
    else
      this->flags &= ~0x40000u;
    this->flags &= ~0x800u;
    sub_45A4E0((int)this, (char)this, a7, a8, a9, (int)v67);
    v84 = *((_DWORD **)this + 0x1B);
    if ( v84 )
      BSSimpleList_Remove(v84, (int)v67);
    (**(void (__thiscall ***)(char *, int))v67)(v67, 1);
    v85 = (void (__thiscall ***)(_DWORD, int))this->unk000[1];
    if ( v85 )
      (**v85)(v85, 1);
    this->unk000[1] = 0;
    goto LABEL_200;
  }
  ioManager->members.unk38 = 5;
  sub_432860((volatile LONG *)ioManager);
  sub_459A10((char)this, st0_0, st1_0, st2_0, a5, a6, a7, a8, a9);
  v86 = *((_DWORD *)v67 + 0xC);
  if ( v86 == 0xFFFFFFFF )
    v86 = *((_DWORD *)v67 + 0x52);
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v67 + 0xC))(
    v67,
    v168 + *((_DWORD *)this + 0x23),
    BSFile_FilePos_Beg);
  sub_45E3D0(this, (int)v67);
  (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v67 + 0xC))(v67, v86, BSFile_FilePos_Beg);
  sub_447DB0((char *)TESDataHandler, 0xFFFFFFFE);
  SaveLoad_LoadGame_Subroutine_(this, (char)this, st0_0, st1_0, st2_0, a5, a6, a7, a8, a9, (int)v67);
  sub_447DB0((char *)TESDataHandler, 0xFFFFFFFF);
  v87 = 0;
  v171 = 0;
  v186 = 0;
  if ( v169 )
  {
    while ( 1 )
    {
      a9 = sub_5AD980(a7, a9, 0);
      v88 = *((void (__cdecl **)(char *, UInt32 *, int, TESObjectREFR **, int))v67 + 1);
      v68 = 1;
      v162 = (TESObjectREFR *)1;
      v88(v67, &a1, 0xC, &v162, 1);
      v89 = a1;
      if ( a1 == 0xFEFFFFFF )
      {
        v90 = *((void (__cdecl **)(char *, UInt8 *, int, TESObjectCELL **, int))v67 + 1);
        *(float *)&v162 = 0.0;
        v161 = 0;
        v167 = (TESObjectCELL *)1;
        v90(v67, &v161, 1, &v167, 1);
        v91 = *((void (__cdecl **)(char *, TESObjectREFR **, int, TESObjectCELL **, int))v67 + 1);
        v167 = (TESObjectCELL *)1;
        v91(v67, &v162, 4, &v167, 1);
        TESDataHandler_g_PlayerRef->isInSEWorld = v161;
        a9 = *(float *)&v162;
        TESDataHandler_g_PlayerRef->unk700 = (UInt32)v162;
      }
      else
      {
        ResolveFormID = SaveLoad_ResolveFormID(this, a1);
        if ( !ResolveFormID )
        {
          PrintError("Load Error: Plugin for form with ID %08X does not exist.  Its loading will be skipped.", v89);
LABEL_52:
          (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v67 + 0xC))(
            v67,
            *(unsigned __int16 *)((char *)&v166 + 1),
            BSFile_FilePos_Cur);
          goto LABEL_176;
        }
        a1 = ResolveFormID;
        sub_45A140(this, v166);
        v161 = 1;
        v68 = (int)TESForm_LookupByFormID(a1);
        if ( (v165 & 2) == 0 )
        {
          if ( v165 >= 0 )
          {
            if ( v68 )
              goto LABEL_123;
            v125 = (int *)sub_452D10(this->unk000[0], a1);
            if ( !v125 )
              goto LABEL_123;
            if ( *v125 >= 0 )
              goto LABEL_123;
            v126 = v125[1];
            if ( !v126 )
              goto LABEL_123;
            qmemcpy(v207, (const void *)(v126 + 4), sizeof(v207));
            v127 = sub_459950(this, v207[0]);
            v207[0] = v127;
            v207[4] = sub_459950(this, v207[4]);
            v128 = TESForm_LookupByFormID(v127);
            CellAtCellCoord = (TESObjectCELL *)OblivionDynamicCast(
                                                 v128,
                                                 0,
                                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                 &TESObjectCELL `RTTI Type Descriptor',
                                                 0);
            v130 = (TESWorldSpace *)OblivionDynamicCast(
                                      v128,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      &TESWorldSpace `RTTI Type Descriptor',
                                      0);
            if ( v130 )
            {
              v181 = (int)*(float *)&v207[1];
              a9 = *(float *)&v207[2];
              v179 = (int)*(float *)&v207[2];
              CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(v130, v181 >> 0xC, v179 >> 0xC);
            }
            if ( !CellAtCellCoord || !TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) )
              goto LABEL_123;
            v121 = sub_45C4F0(a1, (int)v207);
            v122 = CellAtCellCoord;
LABEL_122:
            v68 = (int)v121;
            sub_4D35D0(v122, a7, a8, a9, (TESChildCELL *)v121);
            goto LABEL_123;
          }
          v115 = SaveLoad_CurrentSavegame;
          v201[0] = 0;
          v202 = 0;
          sub_45BB00(v115, (int)v67, (int)v201, 0x2C);
          v201[0] = sub_459950(this, v201[0]);
          v116 = sub_459950(this, v202);
          v117 = BSFile_FilePos_Cur;
          v202 = v116;
          (*(void (__thiscall **)(char *, unsigned int, int))(*(_DWORD *)v67 + 0xC))(v67, 0xFFFFFFD4, v117);
          v118 = TESForm_LookupByFormID(v202);
          v167 = (TESObjectCELL *)OblivionDynamicCast(
                                    v118,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESObjectCELL `RTTI Type Descriptor',
                                    0);
          v119 = (TESWorldSpace *)OblivionDynamicCast(
                                    v118,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESWorldSpace `RTTI Type Descriptor',
                                    0);
          v120 = v119;
          if ( v119 )
          {
            v174 = (int)v203;
            a9 = v204;
            v175 = (int)v204;
            v167 = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(v119, v174 >> 0xC, v175 >> 0xC);
          }
          if ( v167 && TESObjectCELL_IsProcessLevel_LowHigh(v167, 0) )
          {
            if ( v68 )
              goto LABEL_123;
            v121 = sub_45C4F0(a1, (int)v201);
            v122 = v167;
            goto LABEL_122;
          }
          if ( v68 )
          {
            v123 = (TESObjectREFR *)OblivionDynamicCast(
                                      (void *)v68,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                      0);
            v162 = v123;
            if ( v123 )
            {
              if ( TESObjectREFR_GetParentCell(v123) )
              {
                v159 = v162;
                ParentCell = TESObjectREFR_GetParentCell(v162);
                sub_4CECD0(ParentCell, v159);
              }
            }
            sub_45C7A0((char *)this, (TESForm *)v68);
            v68 = 0;
          }
          if ( v167 && TESObjectCELL_IsInterior(v167) )
          {
            sub_452E70((_DWORD *)this->unk000[2], (int *)v202, a1);
            BSSimpleList_PushFront(&this->unk01C[1], a1);
            goto LABEL_123;
          }
          if ( v120 )
          {
            sub_452F10((_DWORD *)this->unk000[3], v202, a1, v203, v204, v205);
            BSSimpleList_PushFront(&this->unk01C[1], a1);
            goto LABEL_123;
          }
          PrintError(
            "Worldspace %08X could not be found while loading a reference that changed cells.  Its loading will be skipped.",
            v202);
          goto LABEL_52;
        }
        if ( (v165 & 4) != 0 )
        {
          v93 = SaveLoad_CurrentSavegame;
          v94 = 0;
          v95 = 0;
          v96 = LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x5Bu;
          *(float *)&v162 = 0.0;
          v167 = 0;
          if ( v96 )
            goto LABEL_62;
          if ( (v165 & 0x4000000) != 0 )
          {
            sub_45BB00(v93, (int)v67, (int)&v182, 4);
            v94 = v183;
            v97 = (TESObjectCELL *)v184;
            v98 = v182;
            v95 = 4;
            goto LABEL_60;
          }
          if ( (v165 & 0x2000000) != 0 )
          {
            sub_45BB00(v93, (int)v67, (int)v187, 6);
            v94 = v187[1];
            v97 = (TESObjectCELL *)v187[2];
            v98 = v187[0];
            v95 = 6;
LABEL_60:
            v167 = v97;
            v99 = (TESObjectREFR *)sub_459990(this, v98);
            v93 = SaveLoad_CurrentSavegame;
            v162 = v99;
          }
          if ( LOBYTE(v93[1].createdObjectList.next) < 0x5Bu )
          {
LABEL_62:
            sub_45BB00(v93, (int)v67, (int)v206, 0xC);
            v94 = v206[1];
            v167 = (TESObjectCELL *)v206[2];
            v95 = 0xC;
            *(float *)&v162 = COERCE_FLOAT(sub_459950(this, v206[0]));
          }
          (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v67 + 0xC))(v67, -v95, BSFile_FilePos_Cur);
          v68 = (int)TESForm_LookupByFormID(a1);
          v100 = (TESObjectCELL *)OblivionDynamicCast(
                                    (void *)v68,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESObjectCELL `RTTI Type Descriptor',
                                    0);
          v101 = v100;
          if ( !v100
            || TESObjectCELL_GetXCoordinate(v100) != v94
            || (YCoordinate = (TESObjectCELL *)TESObjectCELL_GetYCoordinate(v101), YCoordinate != v167) )
          {
            sub_452FE0((_DWORD *)this->unk000[4], v162, a1, v94, v167);
            if ( v68 )
              sub_45C7A0((char *)this, (TESForm *)v68);
            v68 = 0;
          }
          goto LABEL_123;
        }
        v103 = SaveLoad_CurrentSavegame;
        v188 = 0;
        v189 = 0;
        v190 = 0;
        sub_45BB00(v103, (int)v67, (int)&v188, 0x24);
        v189 = sub_459950(this, v189);
        v104 = sub_459950(this, v190);
        v105 = *(void (__thiscall **)(char *, unsigned int, int))(*(_DWORD *)v67 + 0xC);
        v190 = v104;
        v105(v67, 0xFFFFFFDC, BSFile_FilePos_Cur);
        v106 = TESForm_LookupByFormID(v190);
        *(float *)&v162 = COERCE_FLOAT(
                            OblivionDynamicCast(
                              v106,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectCELL `RTTI Type Descriptor',
                              0));
        v107 = (TESWorldSpace *)OblivionDynamicCast(
                                  v106,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESWorldSpace `RTTI Type Descriptor',
                                  0);
        if ( sub_452430(&v191) )
        {
          v161 = 0;
          goto LABEL_123;
        }
        if ( v107 )
        {
          v173 = (int)v191;
          a9 = v192;
          v172 = (int)v192;
          v108 = (TESObjectREFR *)TESWorldSpace::GetCellAtCellCoord(v107, v173 >> 0xC, v172 >> 0xC);
          v162 = v108;
        }
        else
        {
          v108 = v162;
        }
        if ( v108 )
        {
          if ( TESObjectCELL_IsProcessLevel_LowHigh((TESObjectCELL *)v108, 0) )
            goto LABEL_78;
          v108 = v162;
        }
        if ( v188 == 3 )
        {
LABEL_78:
          v109 = TESForm_LookupByFormID(a1);
          v110 = v109;
          if ( v109 )
          {
            v111 = sub_452D30(this->unk000[0], (int)v109);
            v112 = 0;
            if ( v111 )
              v112 = *v111;
            v113 = sub_453530(v110, v112);
            v114 = v113 & (unsigned __int16)~(_WORD)v165 & 0xFFF;
            if ( (v113 & (unsigned __int16)~(_WORD)v165 & 0xFFF) != 0 )
            {
              if ( OblivionDynamicCast(
                     v110,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0) )
              {
                v114 &= ~0x40u;
              }
              if ( (v114 & 0xFFFFF7FF) != 0 )
                sub_45C7A0((char *)this, v110);
            }
          }
          v68 = (int)sub_4603E0((char *)this, a7, a8, a1, &v188);
          goto LABEL_123;
        }
        if ( v108 && TESObjectCELL_IsInterior((TESObjectCELL *)v108) )
        {
          sub_452E70((_DWORD *)this->unk000[2], (int *)v190, a1);
LABEL_92:
          if ( v68 )
          {
            sub_45C7A0((char *)this, (TESForm *)v68);
            v68 = 0;
          }
LABEL_123:
          v131 = OblivionDynamicCast(
                   (void *)v68,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                   0);
          v132 = v164;
          if ( v68 )
          {
            v133 = *(_BYTE *)(v68 + 4);
            if ( v133 != v164 )
            {
              PrintError(
                "Load Error: Form with ID %08X was saved with form type %s, but currently has form type %s.  Its loading "
                "will be skipped.",
                a1,
                *(const char **)(0xC * v164 + 0xB05E04),
                *(const char **)(0xC * v133 + 0xB05E04));
              goto LABEL_131;
            }
          }
          if ( v131 )
          {
            if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)v131 + 0x170))(v131) )
            {
              PrintError(
                "Load Error: Reference with ID %08X and saved with form type %s has no bound object.  Its loading will be skipped.",
                a1,
                *(const char **)(0xC * v164 + 0xB05E04));
              goto LABEL_131;
            }
            v132 = v164;
          }
          if ( !v161 )
          {
LABEL_131:
            (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v170 + 0xC))(
              v170,
              *(unsigned __int16 *)((char *)&v166 + 1),
              BSFile_FilePos_Cur);
            goto LABEL_174;
          }
          v134 = 0;
          if ( v68 )
          {
            v135 = sub_452D30(this->unk000[0], v68);
            if ( v135 )
              v134 = *v135;
            v136 = sub_453530((_DWORD *)v68, v134);
            v167 = (TESObjectCELL *)sub_459FA0((void *)v68);
            this->unk030[5] = 0x1FFFF000;
            (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v68 + 0x60))(v68, v136 & 0x1FFFF080);
            v137 = (unsigned __int16)v136 & (unsigned __int16)~(_WORD)v165 & 0xFFF;
            if ( ((unsigned __int16)v136 & (unsigned __int16)~(_WORD)v165 & 0xFFF) != 0 )
            {
              if ( OblivionDynamicCast(
                     (void *)v68,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                     0) )
              {
                v137 &= ~0x800u;
                if ( OblivionDynamicCast(
                       (void *)v68,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0) )
                {
                  v137 &= ~0x40u;
                }
              }
              if ( v137 )
              {
                if ( (PlayerCharacter *)v68 != TESDataHandler_g_PlayerRef
                  && !TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v68 + 0xC)) )
                {
                  if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v68 + 0xC)) )
                    PrintError(
                      "Created form %08X with type %s is going to be reset due to flags: %08X.  Header flags: %08X  Current Flags: %08X",
                      *(_DWORD *)(v68 + 0xC),
                      *(const char **)(0xC * *(unsigned __int8 *)(v68 + 4) + 0xB05E04),
                      v137,
                      v165,
                      v136);
                  TESSaveLoadGame_ResetObject((int)this, a7, a8, a9, (TESForm *)v68, v137, v165);
                  v138 = sub_45A500(this);
                  v139 = *(_BYTE *)(v68 + 4) == 0x30;
                  LOBYTE(v180) = v138;
                  if ( v139 )
                  {
                    v162 = (TESObjectREFR *)OSGlobals->mainThreadID;
                    if ( (TESObjectREFR *)GetCurrentThreadId() == v162 )
                      this->flags &= ~1u;
                    else
                      this->flags &= ~0x40000u;
                  }
                  (*(void (__thiscall **)(int))(*(_DWORD *)v68 + 0x6C))(v68);
                  sub_45A530(this, (char)v180);
                  if ( !sub_45C020((int)this, a7, a8, a9, (void *)v68, v137, 1) )
                  {
                    PrintError("InitObject deleted form %08X with type %i.  Continuing should be possible.", a1, v164);
                    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v200 + 0xC))(
                      v200,
                      *(unsigned __int16 *)((char *)&v166 + 1),
                      BSFile_FilePos_Cur);
TESSaveLoadGame_LoadGame___ChangeRecordLoop_Next:
                    v67 = v170;
                    goto LABEL_176;
                  }
                }
              }
            }
            sub_452C90((_DWORD *)this->unk000[1], *(_DWORD **)(v68 + 0xC), v165);
            v140 = sub_453500(this, (char)this, *(unsigned __int16 *)((char *)&v166 + 1));
            sub_45BB00(this, (int)v170, (int)v140, *(unsigned __int16 *)((char *)&v166 + 1));
            v160 = v165;
            *((_DWORD *)this + 0x20) = &a1;
            sub_460BC0(this, a7, a8, a9, (void *)v68, v160);
            (*(void (__thiscall **)(int, int, unsigned int))(*(_DWORD *)v68 + 0x54))(v68, v165, v136);
            *((_DWORD *)this + 0x20) = 0;
            v141 = FormHeapAlloc(0x10u);
            if ( v141 )
            {
              v142 = v166;
              v143 = v165;
              *(_DWORD *)v141 = v68;
              *(_DWORD *)(v141 + 4) = v143;
              *(_DWORD *)(v141 + 8) = v136;
              *(_BYTE *)(v141 + 0xC) = v142;
            }
            else
            {
              v141 = 0;
            }
            v139 = v68 == (_DWORD)TESDataHandler_g_PlayerRef;
            v162 = (TESObjectREFR *)v141;
            if ( v139 )
              v171 = v141;
            else
              sub_5A6AB0(&v194, &v162);
            v144 = this->unk000[5] - *(unsigned __int16 *)((char *)&v166 + 1) - (_DWORD)v140;
            if ( v144 )
            {
              if ( v144 != 0xFFFFFFFE )
                (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_B34D90 + 0x18))(
                  dword_B34D90,
                  "LoadGame() call did not properly empty buffer.  See Warnings.txt for more info.");
            }
            this->unk030[5] = 0x60000000;
            (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v68 + 0x60))(v68, v136 & 0x60000000);
            sub_45A020((int)v140, (void *)v68, (float *)v167);
            sub_452230(this, v140);
            sub_452DF0(this->unk000[0], *(_DWORD *)(v68 + 0xC), 1);
            if ( *((_DWORD *)this + 0x14) )
            {
              sub_452D60((_DWORD *)this->unk000[1], v68, *((_DWORD *)this + 0x14));
              *((_DWORD *)this + 0x14) = 0;
            }
            if ( this->unk030[4] )
LABEL_173:
              sub_45AD00(&a1);
          }
          else
          {
            if ( *(_WORD *)((char *)&v166 + 1) )
            {
              v177 = v132;
              v178 = v166;
              Src = *(_WORD *)((char *)&v166 + 1);
              v145 = sub_453500(this, (char)this, *(unsigned __int16 *)((char *)&v166 + 1) + 4);
              v146 = GetCurrentThreadId;
              v68 = (int)v145;
              v147 = OSGlobals->mainThreadID;
              if ( GetCurrentThreadId() == v147 )
                this->flags &= ~1u;
              else
                this->flags &= ~0x40000u;
              LODWORD(v158) = 4;
              SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v158);
              v148 = OSGlobals->mainThreadID;
              if ( v146() == v148 )
                this->flags |= 1u;
              else
                this->flags |= 0x40000u;
              sub_45BB00(this, (int)v170, this->unk000[5], *(unsigned __int16 *)((char *)&v166 + 1));
              sub_452CF0((_DWORD *)this->unk000[1], (_DWORD *)a1, v165, v68);
            }
            else
            {
              sub_452C90((_DWORD *)this->unk000[1], (_DWORD *)a1, v165);
            }
            sub_452DF0(this->unk000[0], a1, 1);
            if ( this->unk030[4] )
              goto LABEL_173;
          }
LABEL_174:
          *((_BYTE *)this + 0x7C) = *((_BYTE *)this + 0x71);
          goto TESSaveLoadGame_LoadGame___ChangeRecordLoop_Next;
        }
        if ( v107 )
        {
          sub_452F10((_DWORD *)this->unk000[3], v190, a1, v191, v192, v193);
          goto LABEL_92;
        }
        PrintError(
          "Worldspace %08X could not be found while loading a created reference.  Its loading will be skipped.",
          v190);
        (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v67 + 0xC))(
          v67,
          *(unsigned __int16 *)((char *)&v166 + 1),
          BSFile_FilePos_Cur);
      }
LABEL_176:
      if ( ++v186 >= v169 )
      {
        v87 = v171;
        break;
      }
    }
  }
  sub_464440((char *)this, v87, a7, a8, a9, 1);
  sub_432890((volatile LONG *)ioManager);
  v149 = sub_45FDA0(this, a8, a7, a9, &v194, v87, 1);
  if ( v87 )
    FormHeapFree(v87);
  SaveLoad_ValidateCreatedObj__((BSSimpleList_VoidPtr *)this);
  sub_45C320((BSSimpleList_VoidPtr *)this, v68, (int)this, a7, a8, v149);
  sub_57A850((char)this, a7, a8, v149);
  sub_675F40((int)&ActorProcessManager_ptr);
  sub_673BD0(&ActorProcessManager_ptr, 1);
  sub_673BD0(&ActorProcessManager_ptr, 2);
  sub_441510((int)TES, a7, a8, v149);
  v150 = sub_461030(this, a7, a8, v149, 1);
  sub_45FC60((int)this, (int)this, v87, (int)v67);
  sub_677360((int)&ActorProcessManager_ptr);
  sub_677A90(&ActorProcessManager_ptr);
  sub_43BEB0(ModelLoaderPtr);
  sub_459A90((int)this, (char)this, a7, a8, v150);
  v151 = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == v151 )
    this->flags &= ~1u;
  else
    this->flags &= ~0x40000u;
  this->flags &= ~0x800u;
  *((_BYTE *)this + 0xA8) = 0;
  sub_65E800(TESDataHandler_g_PlayerRef);
  sub_65E860((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v150, v152, TESDataHandler_g_PlayerRef);
  sub_663F50();
  sub_447300((Sky **)TESDataHandler);
  v153 = (unsigned int **)this->unk030[4];
  *((_BYTE *)this + 0x70) = 0;
  *((_BYTE *)this + 0x71) = 0x7D;
  *((_BYTE *)this + 0x7C) = 0x7D;
  if ( v153 )
  {
    TESSaveLoadGame_PrintChangeRecords_(v153, v67 + 0x3C);
    v154 = this->unk030[4];
    if ( v154 )
    {
      sub_4530A0((void (__stdcall ****)(signed int))this->unk030[4]);
      FormHeapFree(v154);
    }
    this->unk030[4] = 0;
  }
  v155 = *((_DWORD **)this + 0x1B);
  if ( v155 )
    BSSimpleList_Remove(v155, (int)v67);
  (**(void (__thiscall ***)(char *, int))v67)(v67, 1);
  byte_B33B04 = 1;
  v185 = GetTickCount() - v185;
  v156 = (double)v185;
  if ( v185 < 0 )
    v156 = v156 + flt_A2FC78;
  _sprintf(v208, "LoadGame took %.2f seconds\n", v156 / dbl_A2FC70);
  FormHeapFree(v195);
}
