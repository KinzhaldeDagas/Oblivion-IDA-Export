//  Verified map lifecycle: allocates incomingChangesMap at +4, stores save records there, reconciles pre-load currentChangesMap at +0 after form loading, then swaps in incoming map via 464440. The map roles are based on direct stores/lookups and final pointer assignments.
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
  char *sound; // ebx
  CHAR *Game_ResolveSaveFile; // esi
  int v68; // ebx
  char *v69; // ecx
  unsigned int Game_OpenAndValidateSave; // eax
  unsigned __int8 v71; // al
  int *v72; // ebp
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **v73; // eax
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **v74; // eax
  int *v75; // ecx
  unsigned int v76; // esi
  UInt32 mainThreadID; // edi
  _DWORD *v78; // ecx
  ChangesMap *v79; // eax
  ChangesMap *v80; // eax
  void (__cdecl *v81)(CHAR *, int *, int, int *, int); // edx
  void (__cdecl *v82)(CHAR *, unsigned int *, int, int *, int); // edx
  UInt32 v83; // ebx
  int *v84; // ecx
  void (__thiscall ***v85)(_DWORD, int); // ecx
  int v86; // edi
  int v87; // edi
  void (__cdecl *v88)(CHAR *, UInt32 *, int, TESObjectREFR **, int); // edx
  UInt32 v89; // edi
  void (__cdecl *v90)(CHAR *, UInt8 *, int, TESObjectCELL **, int); // edx
  void (__cdecl *v91)(CHAR *, TESObjectREFR **, int, TESObjectCELL **, int); // edx
  PlayerCharacter *v92; // edx
  UInt32 ResolveFormID; // eax
  TESSaveLoadGame_SerializationView *v95; // ecx
  int v96; // edi
  int v97; // ebx
  bool v98; // cf
  TESObjectCELL *v99; // ecx
  unsigned __int16 v100; // dx
  TESObjectREFR *v101; // eax
  TESObjectCELL *v102; // eax
  TESObjectCELL *v103; // esi
  TESObjectCELL *YCoordinate; // eax
  TESSaveLoadGame_SerializationView *v105; // ecx
  unsigned int v106; // eax
  void (__thiscall *v107)(CHAR *, unsigned int, int); // edx
  TESForm *v108; // edi
  TESWorldSpace *v109; // edi
  TESObjectREFR *v110; // eax
  TESForm *v111; // eax
  TESForm *v112; // edi
  OblivionChangeData *v113; // eax
  unsigned int changeFlags; // ecx
  unsigned __int16 v115; // ax
  int v116; // esi
  TESSaveLoadGame_SerializationView *v117; // ecx
  unsigned int v118; // eax
  int v119; // ecx
  TESForm *v120; // edi
  TESWorldSpace *v121; // eax
  TESWorldSpace *v122; // edi
  TESObjectREFR *v123; // eax
  TESObjectCELL *v124; // ecx
  TESObjectREFR *v125; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  OblivionChangeData *v127; // eax
  unsigned __int8 *savedFormBuffer; // esi
  unsigned int v129; // esi
  TESForm *v130; // esi
  TESObjectCELL *CellAtCellCoord; // edi
  TESWorldSpace *v132; // eax
  void *v133; // eax
  unsigned __int8 v134; // cl
  unsigned __int8 v135; // dl
  unsigned int v136; // esi
  OblivionChangeData *v137; // eax
  unsigned int v138; // edi
  int v139; // esi
  bool v140; // al
  bool v141; // zf
  FreeEntry *v142; // esi
  int v143; // eax
  char v144; // cl
  unsigned int v145; // edx
  UInt32 v146; // eax
  FreeEntry *v147; // eax
  DWORD (__stdcall *v148)(); // edi
  UInt32 v149; // esi
  UInt32 v150; // esi
  double v151; // st7
  double v152; // st7
  UInt32 v153; // edi
  unsigned int **v154; // ecx
  unsigned int v155; // edi
  int *v156; // ebp
  int *v157; // ebp
  double v158; // [esp+0h] [ebp-338h]
  TESObjectREFR *v159; // [esp+4h] [ebp-334h]
  unsigned int v160; // [esp+4h] [ebp-334h]
  UInt8 v161; // [esp+1Fh] [ebp-319h] BYREF
  TESObjectREFR *reference; // [esp+20h] [ebp-318h] BYREF
  UInt32 a1; // [esp+24h] [ebp-314h] BYREF
  unsigned __int8 v164; // [esp+28h] [ebp-310h]
  unsigned int flags; // [esp+29h] [ebp-30Fh]
  int v166; // [esp+2Dh] [ebp-30Bh]
  TESObjectCELL *v167; // [esp+34h] [ebp-304h] BYREF
  int v168; // [esp+38h] [ebp-300h] BYREF
  unsigned int v169; // [esp+3Ch] [ebp-2FCh] BYREF
  void *stream; // [esp+40h] [ebp-2F8h]
  int arg2; // [esp+44h] [ebp-2F4h] BYREF
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
  unsigned __int16 destination; // [esp+68h] [ebp-2D0h] BYREF
  char destination_2; // [esp+6Ah] [ebp-2CEh]
  char destination_3; // [esp+6Bh] [ebp-2CDh]
  signed int TickCount; // [esp+6Ch] [ebp-2CCh]
  int v186; // [esp+70h] [ebp-2C8h]
  _WORD v187[4]; // [esp+74h] [ebp-2C4h] BYREF
  OblivionCreatedReferenceInitialData data; // [esp+7Ch] [ebp-2BCh] BYREF
  NiTLargeArrayUInt32 self; // [esp+A0h] [ebp-298h] BYREF
  int v190; // [esp+B8h] [ebp-280h]
  OblivionMovedReferenceInitialData v191; // [esp+BCh] [ebp-27Ch] BYREF
  unsigned int v192[3]; // [esp+E8h] [ebp-250h] BYREF
  OblivionMovedReferenceInitialData v193; // [esp+F4h] [ebp-244h] BYREF
  char v194[260]; // [esp+120h] [ebp-218h] BYREF
  char v195[260]; // [esp+224h] [ebp-114h] BYREF
  int v196; // [esp+334h] [ebp-4h]

  v190 = a10; /*0x4658ab*/
  TickCount = GetTickCount(); /*0x4658bd*/
  *((_BYTE *)this + 0xA9) = 0; /*0x4658c1*/
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x4658c8*/
  if ( OpenMenuTile ) /*0x4658d2*/
  {
    if ( Tile_GetParentMenu(OpenMenuTile) ) /*0x4658d6*/
      *((_BYTE *)this + 0xA9) = 1; /*0x4658df*/
  }
  if ( *((_BYTE *)this + 0xA9) ) /*0x4658e6*/
  {
    v65 = MEMORY[0xB33398]; /*0x4658ef*/
    MEMORY[0xB3C0EC] = 0; /*0x4658f4*/
    sound = (char *)v65->sound; /*0x4658fb*/
    if ( sound ) /*0x465900*/
    {
      if ( SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 1) ) /*0x46590d*/
        SoundManager_PlayMusic((int)sound, (int)Str); /*0x465918*/
    }
  }
  Game_ResolveSaveFile = (CHAR *)TESSaveLoadGame_ResolveSaveFile( /*0x465928*/
                                   this,
                                   a9,
                                   a6,
                                   a7,
                                   a8,
                                   a5,
                                   st0_0,
                                   st1_0,
                                   st2_0,
                                   a10,
                                   Str,
                                   1);
  v68 = 0; /*0x465931*/
  self.capacity = 0x32; /*0x465933*/
  self.growBy = 0x32; /*0x46593a*/
  stream = Game_ResolveSaveFile; /*0x46594b*/
  self.vtable = &NiTLargeArray<FormAndFlags *>::`vftable'; /*0x46594f*/
  self.count = 0; /*0x46595a*/
  self.nonzeroCount = 0; /*0x465961*/
  self.data = (unsigned int *)FormHeapAlloc(0xC8u); /*0x465975*/
  v196 = 0; /*0x46597e*/
  if ( !Game_ResolveSaveFile /*0x4659ab*/
    || !Game_ResolveSaveFile[0x24]
    || (Game_OpenAndValidateSave = TESSaveLoadGame_OpenAndValidateSave(
                                     (int)this,
                                     a9,
                                     a6,
                                     a7,
                                     a8,
                                     a5,
                                     st0_0,
                                     st1_0,
                                     st2_0,
                                     Game_ResolveSaveFile,
                                     1),
        (v68 = Game_OpenAndValidateSave) == 0)
    || Game_OpenAndValidateSave == 0xFFFFFFFF )
  {
    if ( (!Str || !strstr(Str, "quicksave")) && !v68 ) /*0x466a55*/
      ShowUIMessageBox(v69, a7, a8, a9, (char *)stru_B38740.value, 0, 0, EmptyString, 0); /*0x466a65*/
    if ( Game_ResolveSaveFile ) /*0x466a6f*/
    {
      v157 = *((int **)this + 0x1B); /*0x466a71*/
      if ( v157 ) /*0x466a76*/
        BSSimpleList_Remove(v157, (int)Game_ResolveSaveFile); /*0x466a7b*/
      (**(void (__thiscall ***)(void *, int))Game_ResolveSaveFile)(Game_ResolveSaveFile, 1); /*0x466a88*/
    }
    goto LABEL_200; /*0x466a88*/
  }
  v71 = *((_BYTE *)this + 0x7C); /*0x4659b1*/
  if ( v71 > 0x7Eu ) /*0x4659b6*/
  {
    _sprintf( /*0x4659cf*/
      v195,
      "You are loading a savegame with version %i, but the latest version this exe supports is %i.  It is possible that t"
      "his save game will load correctly, but it is unlikely.  Select abort to skip loading.",
      v71,
      0x7D);
    if ( (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x4659ef*/
           *(_DWORD *)&MEMORY[0xB33E90][0xF00],
           v195) == 3 )
    {
      v72 = *((int **)this + 0x1B); /*0x4659f1*/
      if ( v72 ) /*0x4659f6*/
        BSSimpleList_Remove(v72, (int)Game_ResolveSaveFile); /*0x4659fb*/
      (**(void (__thiscall ***)(void *, int))Game_ResolveSaveFile)(Game_ResolveSaveFile, 1); /*0x465a08*/
      FormHeapFree((unsigned int)self.data); /*0x465a12*/
      return; /*0x465a12*/
    }
  }
  TESSaveLoadGame_ReadSaveHeader( /*0x465a3f*/
    this,
    (char)this,
    (int)Game_ResolveSaveFile,
    v68,
    0,
    (char *)this + 0xB0,
    (_WORD *)this + 0xDA,
    0,
    (float *)this + 0x6E,
    0,
    (_DWORD *)this + 0x6F,
    0);
  if ( a12 ) /*0x465a4c*/
  {
    v73 = (NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> **)FormHeapAlloc(8u); /*0x465a50*/
    v180 = v73; /*0x465a58*/
    LOBYTE(v196) = 1; /*0x465a5e*/
    if ( v73 ) /*0x465a66*/
      v74 = sub_45F0F0(v73); /*0x465a6a*/
    else
      v74 = 0; /*0x465a71*/
    LOBYTE(v196) = 0; /*0x465a73*/
    this->unk030[4] = (UInt32)v74; /*0x465a7b*/
  }
  if ( !sub_45C9C0((int)this, st0_0, st1_0, st2_0, a5, a6, a7, a8, a9, Game_ResolveSaveFile) ) /*0x465a81*/
  {
    v75 = *((int **)this + 0x1B); /*0x465a8a*/
    if ( v75 ) /*0x465a8f*/
      BSSimpleList_Remove(v75, (int)Game_ResolveSaveFile); /*0x465a92*/
    (**(void (__thiscall ***)(void *, int))Game_ResolveSaveFile)(Game_ResolveSaveFile, 1); /*0x465a9f*/
    v76 = this->unk030[4]; /*0x465aa1*/
    if ( v76 ) /*0x465aa6*/
    {
      SaveLoad_ClearReferenceMapState((void *)this->unk030[4]); /*0x465aaa*/
      FormHeapFree(v76); /*0x465ab0*/
    }
    this->unk030[4] = 0; /*0x465ab8*/
LABEL_200:
    FormHeapFree((unsigned int)self.data); /*0x466a8a*/
    return; /*0x466a92*/
  }
  sub_45A190((void **)this, (char)this, (int)Game_ResolveSaveFile); /*0x465ac7*/
  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x465ad2*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x465ae2*/
    this->flags |= 1u; /*0x465ae4*/
  else
    this->flags |= 0x40000u; /*0x465ae9*/
  v78 = (_DWORD *)this->unk030[4]; /*0x465af0*/
  this->flags |= 0x800u; /*0x465af3*/
  *((_BYTE *)this + 0xA8) = 0; /*0x465afc*/
  if ( v78 ) /*0x465b03*/
    sub_4531B0(v78, (char)this, v68, "Save Game Header"); /*0x465b0b*/
  sub_462080((char *)this); /*0x465b12*/
  v79 = (ChangesMap *)FormHeapAlloc(0x10u); /*0x465b19*/
  v180 = v79; /*0x465b21*/
  LOBYTE(v196) = 2; /*0x465b27*/
  if ( v79 ) /*0x465b2f*/
    v80 = ChangesMap::ChangesMap(v79); /*0x465b33*/
  else
    v80 = 0; /*0x465b3a*/
  this->unk000[1] = (UInt32)v80; /*0x465b3c*/
  v81 = *((void (__cdecl **)(CHAR *, int *, int, int *, int))Game_ResolveSaveFile + 1); /*0x465b3f*/
  LOBYTE(v196) = 0; /*0x465b50*/
  arg2 = 1; /*0x465b58*/
  v81(Game_ResolveSaveFile, &v168, 4, &arg2, 1); /*0x465b5c*/
  v82 = *((void (__cdecl **)(CHAR *, unsigned int *, int, int *, int))Game_ResolveSaveFile + 1); /*0x465b5e*/
  arg2 = 1; /*0x465b6f*/
  v82(Game_ResolveSaveFile, &v169, 4, &arg2, 1); /*0x465b73*/
  if ( !v168 ) /*0x465b7d*/
  {
    v83 = MEMORY[0xB33398]->mainThreadID; /*0x465b84*/
    if ( GetCurrentThreadId() == v83 ) /*0x465b8f*/
      this->flags &= ~1u; /*0x465b91*/
    else
      this->flags &= ~0x40000u; /*0x465b97*/
    this->flags &= ~0x800u; /*0x465b9e*/
    sub_45A4E0((char *)this, a7, a8, a9, (int)Game_ResolveSaveFile); /*0x465ba8*/
    v84 = *((int **)this + 0x1B); /*0x465bad*/
    if ( v84 ) /*0x465bb2*/
      BSSimpleList_Remove(v84, (int)Game_ResolveSaveFile); /*0x465bb5*/
    (**(void (__thiscall ***)(void *, int))Game_ResolveSaveFile)(Game_ResolveSaveFile, 1); /*0x465bc1*/
    v85 = (void (__thiscall ***)(_DWORD, int))this->unk000[1]; /*0x465bc3*/
    if ( v85 ) /*0x465bc8*/
      (**v85)(v85, 1); /*0x465bcf*/
    this->unk000[1] = 0; /*0x465bd1*/
    goto LABEL_200; /*0x465bd8*/
  }
  MEMORY[0xB33A10]->members.unk38 = 5; /*0x465be3*/
  sub_432860((volatile LONG *)MEMORY[0xB33A10]); /*0x465bf0*/
  sub_459A10((char)this, st0_0, st1_0, st2_0, a5, a6, a7, a8, a9); /*0x465bf7*/
  v86 = *((_DWORD *)Game_ResolveSaveFile + 0xC); /*0x465bfc*/
  if ( v86 == 0xFFFFFFFF ) /*0x465c02*/
    v86 = *((_DWORD *)Game_ResolveSaveFile + 0x52); /*0x465c04*/
  (*(void (__thiscall **)(CHAR *, int, int))(*(_DWORD *)Game_ResolveSaveFile + 0xC))( /*0x465c23*/
    Game_ResolveSaveFile,
    v168 + *((_DWORD *)this + 0x23),
    BSFile_FilePos_Beg);
  SaveLoad_LoadIDArrays((TESSaveLoadGame_SerializationView *)this, Game_ResolveSaveFile); /*0x465c28*/
  (*(void (__thiscall **)(CHAR *, int, int))(*(_DWORD *)Game_ResolveSaveFile + 0xC))( /*0x465c3b*/
    Game_ResolveSaveFile,
    v86,
    BSFile_FilePos_Beg);
  sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFE); /*0x465c45*/
  SaveLoad_LoadGame_Subroutine_(this, (char)this, st0_0, st1_0, st2_0, a5, a6, a7, a8, a9, (int)Game_ResolveSaveFile); /*0x465c4d*/
  sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFF); /*0x465c5a*/
  v87 = 0; /*0x465c5f*/
  arg2 = 0; /*0x465c65*/
  v186 = 0; /*0x465c69*/
  if ( v169 )
  {
    while ( 1 )
    {
      a9 = sub_5AD980(a7, a9, 0); /*0x465c75*/
      v88 = *((void (__cdecl **)(CHAR *, UInt32 *, int, TESObjectREFR **, int))Game_ResolveSaveFile + 1); /*0x465c7a*/
      v68 = 1; /*0x465c7d*/
      reference = (TESObjectREFR *)1; /*0x465c90*/
      v88(Game_ResolveSaveFile, &a1, 0xC, &reference, 1); /*0x465c94*/
      v89 = a1; /*0x465c96*/
      if ( a1 == 0xFEFFFFFF )
      {
        __asm { fldz } /*0x465ca5*/
        v90 = *((void (__cdecl **)(CHAR *, UInt8 *, int, TESObjectCELL **, int))Game_ResolveSaveFile + 1); /*0x465ca7*/
        __asm { fstp    [esp+334h+reference] } /*0x465cab*/
        v161 = 0; /*0x465cbb*/
        v167 = (TESObjectCELL *)1; /*0x465cc0*/
        v90(Game_ResolveSaveFile, &v161, 1, &v167, 1); /*0x465cc4*/
        v91 = *((void (__cdecl **)(CHAR *, TESObjectREFR **, int, TESObjectCELL **, int))Game_ResolveSaveFile + 1); /*0x465cc6*/
        v167 = (TESObjectCELL *)1; /*0x465cd7*/
        v91(Game_ResolveSaveFile, &reference, 4, &v167, 1); /*0x465cdb*/
        ::reference->isInSEWorld = v161; /*0x465ce6*/
        __asm { fld     [esp+358h+reference] } /*0x465cec*/
        v92 = ::reference; /*0x465cf0*/
        __asm { fstp    dword ptr [edx+700h] } /*0x465cf6*/
        *(float *)&v92->unk700 = _ET1; /*0x465cf6*/
      }
      else
      {
        ResolveFormID = SaveLoad_ResolveFormID(this, a1); /*0x465d07*/
        if ( !ResolveFormID )
        {
          PrintError("Load Error: Plugin for form with ID %08X does not exist.  Its loading will be skipped.", v89);
LABEL_52:
          (*(void (__thiscall **)(CHAR *, _DWORD, int))(*(_DWORD *)Game_ResolveSaveFile + 0xC))( /*0x465d1b*/
            Game_ResolveSaveFile,
            *(unsigned __int16 *)((char *)&v166 + 1),
            BSFile_FilePos_Cur);
          goto LABEL_176; /*0x465d34*/
        }
        a1 = ResolveFormID; /*0x465d40*/
        sub_45A140(this, v166); /*0x465d44*/
        v161 = 1; /*0x465d4e*/
        v68 = (int)TESForm_LookupByFormID(a1); /*0x465d57*/
        if ( (flags & 2) == 0 )
        {
          if ( (int)flags >= 0 )
          {
            if ( v68 ) /*0x4662f2*/
              goto LABEL_123; /*0x4662f2*/
            v127 = ChangesMap_FindByFormID((ChangesMap *)this->unk000[0], a1); /*0x466300*/
            if ( !v127 ) /*0x466307*/
              goto LABEL_123; /*0x466307*/
            if ( (int)v127->changeFlags >= 0 ) /*0x466313*/
              goto LABEL_123; /*0x466313*/
            savedFormBuffer = v127->savedFormBuffer; /*0x466319*/
            if ( !savedFormBuffer ) /*0x46631e*/
              goto LABEL_123; /*0x46631e*/
            qmemcpy(&v193, savedFormBuffer + 4, sizeof(v193)); /*0x466333*/
            v129 = sub_459950(this, v193.primaryLocationFormID); /*0x466344*/
            v193.primaryLocationFormID = v129; /*0x466350*/
            v193.fallbackLocationFormID = sub_459950(this, v193.fallbackLocationFormID); /*0x46635d*/
            v130 = TESForm_LookupByFormID(v129); /*0x466374*/
            CellAtCellCoord = (TESObjectCELL *)OblivionDynamicCast( /*0x46638a*/
                                                 v130,
                                                 0,
                                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                 &TESObjectCELL `RTTI Type Descriptor',
                                                 0);
            v132 = (TESWorldSpace *)OblivionDynamicCast( /*0x46638c*/
                                      v130,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      &TESWorldSpace `RTTI Type Descriptor',
                                      0);
            if ( v132 )
            {
              __asm
              {
                fld     [esp+330h+var_244.worldX]; Verified: source world X; used when source locator is a TESWorldSpace.
                fistp   [esp+330h+var_2D4]
                fld     [esp+330h+var_244.worldY]; Verified: source world Y; used when source locator is a TESWorldSpace.
                fistp   [esp+330h+var_2DC]
              }
              CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v132, v181 >> 0xC, v179 >> 0xC); /*0x4663c5*/
            }
            if ( !CellAtCellCoord || !TESObjectCELL_IsProcessLevel_LowHigh(CellAtCellCoord, 0) ) /*0x4663d4*/
              goto LABEL_123; /*0x4663db*/
            v123 = TESSaveLoadGame_RebuildReferenceFromLocationOverrides(a1, &v193); /*0x4663ec*/
            v124 = CellAtCellCoord; /*0x4663f1*/
LABEL_122:
            v68 = (int)v123; /*0x4663f3*/
            TESObjectCELL_AddReference(v124, v123); /*0x4663f6*/
            goto LABEL_123; /*0x4663f6*/
          }
          v117 = g_TESSaveLoadGame; /*0x4660f2*/
          v191.primaryLocationFormID = 0; /*0x4660fa*/
          v191.fallbackLocationFormID = 0; /*0x466101*/
          SaveLoad_ReadFileBytes(v117, Game_ResolveSaveFile, &v191, 0x2Cu); /*0x466113*/
          v191.primaryLocationFormID = sub_459950(this, v191.primaryLocationFormID); /*0x466131*/
          v118 = sub_459950(this, v191.fallbackLocationFormID); /*0x466138*/
          v119 = BSFile_FilePos_Cur; /*0x46613d*/
          v191.fallbackLocationFormID = v118; /*0x466143*/
          (*(void (__thiscall **)(CHAR *, unsigned int, int))(*(_DWORD *)Game_ResolveSaveFile + 0xC))( /*0x466154*/
            Game_ResolveSaveFile,
            0xFFFFFFD4,
            v119);
          v120 = TESForm_LookupByFormID(v191.fallbackLocationFormID); /*0x46616f*/
          v167 = (TESObjectCELL *)OblivionDynamicCast( /*0x466188*/
                                    v120,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESObjectCELL `RTTI Type Descriptor',
                                    0);
          v121 = (TESWorldSpace *)OblivionDynamicCast( /*0x46618c*/
                                    v120,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESWorldSpace `RTTI Type Descriptor',
                                    0);
          v122 = v121; /*0x466191*/
          if ( v121 )
          {
            __asm
            {
              fld     dword ptr [esp+330h+var_27C.unknown14]; Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
              fistp   [esp+330h+var_2E8]
              fld     dword ptr [esp+330h+var_27C.unknown14+4]; Unknown: trailing payload bytes are copied but not consumed by the reconstruction code examined.
              fistp   [esp+330h+var_2E4]
            }
            v167 = TESWorldSpace::GetCellAtCellCoord(v121, v174 >> 0xC, v175 >> 0xC); /*0x4661c7*/
          }
          if ( v167 && TESObjectCELL_IsProcessLevel_LowHigh(v167, 0) ) /*0x4661df*/
          {
            if ( v68 ) /*0x4661ea*/
              goto LABEL_123; /*0x4661ea*/
            v123 = TESSaveLoadGame_RebuildReferenceFromLocationOverrides(a1, &v191); /*0x4661ff*/
            v124 = v167; /*0x466204*/
            goto LABEL_122; /*0x466208*/
          }
          if ( v68 ) /*0x46620f*/
          {
            v125 = (TESObjectREFR *)OblivionDynamicCast( /*0x466220*/
                                      (void *)v68,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                      0);
            reference = v125; /*0x46622a*/
            if ( v125 ) /*0x46622e*/
            {
              if ( Shared_GetDwordAtOffset40(v125) ) /*0x466232*/
              {
                v159 = reference; /*0x46623f*/
                DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x466240*/
                TESObjectCELL_RemoveReference(DwordAtOffset40, v159); /*0x466247*/
              }
            }
            TESSaveLoadGame_DeleteForm((TESSaveLoadGame_SerializationView *)this, (TESForm *)v68); /*0x46624f*/
            v68 = 0; /*0x466254*/
          }
          if ( v167 && TESObjectCELL_IsInterior(v167) ) /*0x466261*/
          {
            InteriorCellNewReferencesMap_AddReferenceID( /*0x46627a*/
              (InteriorCellNewReferencesMap *)this->unk000[2],
              v191.fallbackLocationFormID,
              a1);
            BSSimpleList_PushFront(&this->unk01C[1], a1); /*0x466287*/
            goto LABEL_123; /*0x46628c*/
          }
          if ( v122 ) /*0x466293*/
          {
            ExteriorCellNewReferencesMap_AddReference( /*0x4662c7*/
              (ExteriorCellNewReferencesMap *)this->unk000[3],
              v191.fallbackLocationFormID,
              a1,
              *(float *)v191.unknown14,
              *(float *)&v191.unknown14[4],
              *(float *)&v191.unknown14[8]);
            BSSimpleList_PushFront(&this->unk01C[1], a1); /*0x4662d4*/
            goto LABEL_123; /*0x4662d9*/
          }
          PrintError( /*0x4662eb*/
            "Worldspace %08X could not be found while loading a reference that changed cells.  Its loading will be skipped.",
            v191.fallbackLocationFormID);
          goto LABEL_52; /*0x4662eb*/
        }
        if ( (flags & 4) != 0 ) /*0x465d6a*/
        {
          v95 = g_TESSaveLoadGame; /*0x465d70*/
          v96 = 0; /*0x465d76*/
          v97 = 0; /*0x465d78*/
          v98 = g_TESSaveLoadGame->currentVersion < 0x5Bu; /*0x465d7a*/
          *(float *)&reference = 0.0; /*0x465d7e*/
          v167 = 0; /*0x465d82*/
          if ( v98 ) /*0x465d86*/
            goto LABEL_62; /*0x465d86*/
          if ( (flags & 0x4000000) != 0 ) /*0x465d8d*/
          {
            SaveLoad_ReadFileBytes(v95, Game_ResolveSaveFile, &destination, 4u); /*0x465d97*/
            v96 = destination_2; /*0x465d9c*/
            v99 = (TESObjectCELL *)destination_3; /*0x465da1*/
            v100 = destination; /*0x465da6*/
            v97 = 4; /*0x465daa*/
            goto LABEL_60; /*0x465daf*/
          }
          if ( (flags & 0x2000000) != 0 ) /*0x465db6*/
          {
            SaveLoad_ReadFileBytes(v95, Game_ResolveSaveFile, v187, 6u); /*0x465dc0*/
            v96 = v187[1]; /*0x465dc5*/
            v99 = (TESObjectCELL *)v187[2]; /*0x465dca*/
            v100 = v187[0]; /*0x465dcf*/
            v97 = 6; /*0x465dd3*/
LABEL_60:
            v167 = v99; /*0x465dd8*/
            v101 = (TESObjectREFR *)sub_459990(this, v100); /*0x465ddf*/
            v95 = g_TESSaveLoadGame; /*0x465de4*/
            reference = v101; /*0x465dea*/
          }
          if ( v95->currentVersion < 0x5Bu ) /*0x465df2*/
          {
LABEL_62:
            SaveLoad_ReadFileBytes(v95, Game_ResolveSaveFile, v192, 0xCu); /*0x465dff*/
            v96 = v192[1]; /*0x465e12*/
            v167 = (TESObjectCELL *)v192[2]; /*0x465e19*/
            v97 = 0xC; /*0x465e20*/
            *(float *)&reference = COERCE_FLOAT(sub_459950(this, v192[0])); /*0x465e2a*/
          }
          (*(void (__thiscall **)(CHAR *, int, int))(*(_DWORD *)Game_ResolveSaveFile + 0xC))( /*0x465e3f*/
            Game_ResolveSaveFile,
            -v97,
            BSFile_FilePos_Cur);
          v68 = (int)TESForm_LookupByFormID(a1); /*0x465e57*/
          v102 = (TESObjectCELL *)OblivionDynamicCast( /*0x465e5c*/
                                    (void *)v68,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESObjectCELL `RTTI Type Descriptor',
                                    0);
          v103 = v102; /*0x465e61*/
          if ( !v102 /*0x465e80*/
            || TESObjectCELL_GetXCoordinate(v102) != v96
            || (YCoordinate = (TESObjectCELL *)TESObjectCELL_GetYCoordinate(v103), YCoordinate != v167) )
          {
            ExteriorCellNewReferencesMap_AddCell( /*0x465e99*/
              (ExteriorCellNewReferencesMap *)this->unk000[4],
              (unsigned int)reference,
              a1,
              v96,
              (int)v167);
            if ( v68 ) /*0x465ea0*/
              TESSaveLoadGame_DeleteForm((TESSaveLoadGame_SerializationView *)this, (TESForm *)v68); /*0x465ea5*/
            v68 = 0; /*0x465eaa*/
          }
          goto LABEL_123; /*0x465eac*/
        }
        v105 = g_TESSaveLoadGame; /*0x465eba*/
        memset(&data, 0, 0xC); /*0x465ec1*/
        SaveLoad_ReadFileBytes(v105, Game_ResolveSaveFile, &data, 0x24u); /*0x465ed6*/
        data.boundFormIDOrVariant = sub_459950(this, data.boundFormIDOrVariant); /*0x465ee7*/
        v106 = sub_459950(this, data.locationFormID); /*0x465ef2*/
        v107 = *(void (__thiscall **)(CHAR *, unsigned int, int))(*(_DWORD *)Game_ResolveSaveFile + 0xC); /*0x465ef9*/
        data.locationFormID = v106; /*0x465efc*/
        v107(Game_ResolveSaveFile, 0xFFFFFFDC, BSFile_FilePos_Cur); /*0x465f0a*/
        v108 = TESForm_LookupByFormID(data.locationFormID); /*0x465f22*/
        *(float *)&reference = COERCE_FLOAT( /*0x465f3b*/
                                 OblivionDynamicCast(
                                   v108,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESObjectCELL `RTTI Type Descriptor',
                                   0));
        v109 = (TESWorldSpace *)OblivionDynamicCast( /*0x465f51*/
                                  v108,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &TESWorldSpace `RTTI Type Descriptor',
                                  0);
        if ( sub_452430(&data.positionX) ) /*0x465f53*/
        {
          v161 = 0; /*0x465f5c*/
          goto LABEL_123; /*0x465f61*/
        }
        if ( v109 )
        {
          __asm
          {
            fld     [esp+330h+data.positionX]; Verified: +8 is resolved as FormID and looked up/cast as TESObjectCELL or TESWorldSpace at 465EEB..465F3F.
            fistp   [esp+330h+var_2EC]
            fld     [esp+330h+data.positionY]; Verified: +0xC,+0x10,+0x14 are finite-checked as a NiPoint3 and X/Y select a worldspace cell at 465F47..465F92.
            fistp   [esp+330h+var_2F0]
          }
          v110 = (TESObjectREFR *)TESWorldSpace::GetCellAtCellCoord(v109, v173 >> 0xC, v172 >> 0xC); /*0x465f92*/
          reference = v110; /*0x465f97*/
        }
        else
        {
          v110 = reference; /*0x465f9d*/
        }
        if ( v110 ) /*0x465fa3*/
        {
          if ( TESObjectCELL_IsProcessLevel_LowHigh((TESObjectCELL *)v110, 0) ) /*0x465fae*/
            goto LABEL_78; /*0x465fb5*/
          v110 = reference; /*0x465fb7*/
        }
        if ( data.kind == kOblivionReference_RestoreExistingOrNormal ) /*0x465fc0*/
        {
LABEL_78:
          v111 = TESForm_LookupByFormID(a1); /*0x465fc6*/
          v112 = v111; /*0x465fd0*/
          if ( v111 ) /*0x465fd7*/
          {
            v113 = ChangesMap_FindByForm((ChangesMap *)this->unk000[0], v111); /*0x465fdd*/
            changeFlags = 0; /*0x465fe2*/
            if ( v113 ) /*0x465fe6*/
              changeFlags = v113->changeFlags; /*0x465fe8*/
            v115 = SaveLoad_AdjustCreatedFormChangeFlags(v112, changeFlags); /*0x465fee*/
            v116 = v115 & (unsigned __int16)~(_WORD)flags & 0xFFF; /*0x465ffb*/
            if ( (v115 & (unsigned __int16)~(_WORD)flags & 0xFFF) != 0 ) /*0x466001*/
            {
              if ( OblivionDynamicCast( /*0x466012*/
                     v112,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0) )
              {
                v116 &= ~0x40u; /*0x46601e*/
              }
              if ( (v116 & 0xFFFFF7FF) != 0 ) /*0x466027*/
                TESSaveLoadGame_DeleteForm((TESSaveLoadGame_SerializationView *)this, v112); /*0x46602c*/
            }
          }
          v68 = (int)TESSaveLoadGame_CreateReferenceFromInitialData( /*0x466042*/
                       (TESSaveLoadGame_SerializationView *)this,
                       a7,
                       a8,
                       a1,
                       &data);
          goto LABEL_123; /*0x466044*/
        }
        if ( v110 && TESObjectCELL_IsInterior((TESObjectCELL *)v110) )
        {
          InteriorCellNewReferencesMap_AddReferenceID( /*0x466065*/
            (InteriorCellNewReferencesMap *)this->unk000[2],
            data.locationFormID,
            a1);
LABEL_92:
          if ( v68 ) /*0x4660a9*/
          {
            TESSaveLoadGame_DeleteForm((TESSaveLoadGame_SerializationView *)this, (TESForm *)v68); /*0x4660b2*/
            v68 = 0; /*0x4660b7*/
          }
LABEL_123:
          v133 = OblivionDynamicCast( /*0x4663fb*/
                   (void *)v68,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                   0);
          v134 = v164; /*0x46640f*/
          if ( v68 )
          {
            v135 = *(_BYTE *)(v68 + 4); /*0x46641a*/
            if ( v135 != v164 )
            {
              PrintError(
                "Load Error: Form with ID %08X was saved with form type %s, but currently has form type %s.  Its loading "
                "will be skipped.",
                a1,
                *(const char **)(0xC * v164 + 0xB05E04),
                *(const char **)(0xC * v135 + 0xB05E04));
              goto LABEL_131; /*0x46644f*/
            }
          }
          if ( v133 )
          {
            if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)v133 + 0x170))(v133) )
            {
              PrintError(
                "Load Error: Reference with ID %08X and saved with form type %s has no bound object.  Its loading will be skipped.",
                a1,
                *(const char **)(0xC * v164 + 0xB05E04));
              goto LABEL_131; /*0x466487*/
            }
            v134 = v164; /*0x466489*/
          }
          if ( !v161 ) /*0x466492*/
          {
LABEL_131:
            (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)stream + 0xC))( /*0x466494*/
              stream,
              *(unsigned __int16 *)((char *)&v166 + 1),
              BSFile_FilePos_Cur);
            goto LABEL_174; /*0x4664ab*/
          }
          v136 = 0; /*0x4664b0*/
          if ( v68 )
          {
            v137 = ChangesMap_FindByForm((ChangesMap *)this->unk000[0], (TESForm *)v68); /*0x4664be*/
            if ( v137 ) /*0x4664c5*/
              v136 = v137->changeFlags; /*0x4664c7*/
            v138 = SaveLoad_AdjustCreatedFormChangeFlags((TESForm *)v68, v136); /*0x4664d5*/
            v167 = (TESObjectCELL *)sub_459FA0((void *)v68); /*0x4664dc*/
            this->unk030[5] = 0x1FFFF000; /*0x4664e0*/
            (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v68 + 0x60))(v68, v138 & 0x1FFFF080); /*0x4664f6*/
            v139 = (unsigned __int16)v138 & (unsigned __int16)~(_WORD)flags & 0xFFF; /*0x466500*/
            if ( ((unsigned __int16)v138 & (unsigned __int16)~(_WORD)flags & 0xFFF) != 0 )
            {
              if ( OblivionDynamicCast( /*0x46651b*/
                     (void *)v68,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                     0) )
              {
                v139 &= ~0x800u; /*0x466536*/
                if ( OblivionDynamicCast( /*0x46653c*/
                       (void *)v68,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0) )
                {
                  v139 &= ~0x40u; /*0x466548*/
                }
              }
              if ( v139 )
              {
                if ( (PlayerCharacter *)v68 != ::reference && !TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v68 + 0xC)) )
                {
                  if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v68 + 0xC)) )
                    PrintError(
                      "Created form %08X with type %s is going to be reset due to flags: %08X.  Header flags: %08X  Current Flags: %08X",
                      *(_DWORD *)(v68 + 0xC),
                      *(const char **)(0xC * *(unsigned __int8 *)(v68 + 4) + 0xB05E04),
                      v139,
                      flags,
                      v138);
                  TESSaveLoadGame_ResetObject( /*0x4665b9*/
                    (TESSaveLoadGame_SerializationView *)this,
                    a7,
                    a8,
                    a9,
                    (TESForm *)v68,
                    v139,
                    flags);
                  v140 = sub_45A500(this); /*0x4665c0*/
                  v141 = *(_BYTE *)(v68 + 4) == 0x30; /*0x4665c5*/
                  LOBYTE(v180) = v140; /*0x4665c9*/
                  if ( v141 ) /*0x4665cd*/
                  {
                    reference = (TESObjectREFR *)MEMORY[0xB33398]->mainThreadID; /*0x4665d8*/
                    if ( (TESObjectREFR *)GetCurrentThreadId() == reference ) /*0x4665e6*/
                      this->flags &= ~1u; /*0x4665e8*/
                    else
                      this->flags &= ~0x40000u; /*0x4665ee*/
                  }
                  (*(void (__thiscall **)(int))(*(_DWORD *)v68 + 0x6C))(v68); /*0x4665fc*/
                  sub_45A530(this, (char)v180); /*0x466605*/
                  if ( !sub_45C020((int)this, (void *)v68, v139, 1) ) /*0x466610*/
                  {
                    PrintError("InitObject deleted form %08X with type %i.  Continuing should be possible.", a1, v164); /*0x466629*/
                    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v190 + 0xC))( /*0x466649*/
                      v190,
                      *(unsigned __int16 *)((char *)&v166 + 1),
                      BSFile_FilePos_Cur);
TESSaveLoadGame_LoadGame___ChangeRecordLoop_Next:
                    Game_ResolveSaveFile = (CHAR *)stream; /*0x466868*/
                    goto LABEL_176; /*0x466868*/
                  }
                }
              }
            }
            ChangesMap_SetChangeFlags((ChangesMap *)this->unk000[1], *(_DWORD *)(v68 + 0xC), flags); /*0x46665c*/
            v142 = sub_453500(this, (char)this, *(unsigned __int16 *)((char *)&v166 + 1)); /*0x466672*/
            SaveLoad_ReadFileBytes( /*0x46667e*/
              (TESSaveLoadGame_SerializationView *)this,
              stream,
              v142,
              *(unsigned __int16 *)((char *)&v166 + 1));
            v160 = flags; /*0x466687*/
            *((_DWORD *)this + 0x20) = &a1; /*0x46668f*/
            sub_460BC0(this, a7, a8, a9, (void *)v68, v160); /*0x466695*/
            (*(void (__thiscall **)(int, unsigned int, unsigned int))(*(_DWORD *)v68 + 0x54))(v68, flags, v138); /*0x4666a7*/
            *((_DWORD *)this + 0x20) = 0; /*0x4666ab*/
            v143 = FormHeapAlloc(0x10u); /*0x4666b5*/
            if ( v143 ) /*0x4666bf*/
            {
              v144 = v166; /*0x4666c1*/
              v145 = flags; /*0x4666c5*/
              *(_DWORD *)v143 = v68; /*0x4666c9*/
              *(_DWORD *)(v143 + 4) = v145; /*0x4666cb*/
              *(_DWORD *)(v143 + 8) = v138; /*0x4666ce*/
              *(_BYTE *)(v143 + 0xC) = v144; /*0x4666d1*/
            }
            else
            {
              v143 = 0; /*0x4666d6*/
            }
            v141 = v68 == (_DWORD)::reference; /*0x4666d8*/
            reference = (TESObjectREFR *)v143; /*0x4666de*/
            if ( v141 ) /*0x4666e2*/
              arg2 = v143; /*0x4666f7*/
            else
              NiTLargeArray32_AppendSlot(&self, (const unsigned int *)&reference); /*0x4666f0*/
            v146 = this->unk000[5] - *(unsigned __int16 *)((char *)&v166 + 1) - (_DWORD)v142; /*0x466705*/
            if ( v146 ) /*0x466707*/
            {
              if ( v146 != 0xFFFFFFFE ) /*0x46670c*/
                (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)&MEMORY[0xB33E90][0xF00] + 0x18))( /*0x46671e*/
                  *(_DWORD *)&MEMORY[0xB33E90][0xF00],
                  "LoadGame() call did not properly empty buffer.  See Warnings.txt for more info.");
            }
            this->unk030[5] = 0x60000000; /*0x466720*/
            (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v68 + 0x60))(v68, v138 & 0x60000000); /*0x466735*/
            sub_45A020((int)v142, (void *)v68, (float *)v167); /*0x46673f*/
            sub_452230(this, v142); /*0x466747*/
            SaveLoadChangesMap_RemoveChanges((ChangesMap *)this->unk000[0], *(_DWORD *)(v68 + 0xC), 1); /*0x466755*/
            if ( *((_DWORD *)this + 0x14) ) /*0x46675a*/
            {
              ChangesMap_RemoveFormChangeFlags((ChangesMap *)this->unk000[1], (TESForm *)v68, *((_DWORD *)this + 0x14)); /*0x466766*/
              *((_DWORD *)this + 0x14) = 0; /*0x46676b*/
            }
            if ( this->unk030[4] ) /*0x466772*/
LABEL_173:
              sub_45AD00(&a1); /*0x466858*/
          }
          else
          {
            if ( *(_WORD *)((char *)&v166 + 1) ) /*0x46678f*/
            {
              v177 = v134; /*0x466798*/
              v178 = v166; /*0x4667a3*/
              Src = *(_WORD *)((char *)&v166 + 1); /*0x4667aa*/
              v147 = sub_453500(this, (char)this, *(unsigned __int16 *)((char *)&v166 + 1) + 4); /*0x4667af*/
              v148 = GetCurrentThreadId; /*0x4667b4*/
              v68 = (int)v147; /*0x4667ba*/
              v149 = MEMORY[0xB33398]->mainThreadID; /*0x4667c1*/
              if ( GetCurrentThreadId() == v149 ) /*0x4667c8*/
                this->flags &= ~1u; /*0x4667ca*/
              else
                this->flags &= ~0x40000u; /*0x4667d0*/
              SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 4u); /*0x4667e4*/
              v150 = MEMORY[0xB33398]->mainThreadID; /*0x4667ef*/
              if ( v148() == v150 ) /*0x4667f6*/
                this->flags |= 1u; /*0x4667f8*/
              else
                this->flags |= 0x40000u; /*0x4667fe*/
              SaveLoad_ReadFileBytes( /*0x466816*/
                (TESSaveLoadGame_SerializationView *)this,
                stream,
                (void *)this->unk000[5],
                *(unsigned __int16 *)((char *)&v166 + 1));
              ChangesMap_SetChangeBuffer((ChangesMap *)this->unk000[1], a1, flags, (unsigned __int8 *)v68); /*0x466829*/
            }
            else
            {
              ChangesMap_SetChangeFlags((ChangesMap *)this->unk000[1], a1, flags); /*0x46683d*/
            }
            SaveLoadChangesMap_RemoveChanges((ChangesMap *)this->unk000[0], a1, 1); /*0x46684c*/
            if ( this->unk030[4] ) /*0x466851*/
              goto LABEL_173; /*0x466856*/
          }
LABEL_174:
          *((_BYTE *)this + 0x7C) = *((_BYTE *)this + 0x71); /*0x466862*/
          goto TESSaveLoadGame_LoadGame___ChangeRecordLoop_Next; /*0x466865*/
        }
        if ( v109 ) /*0x46606e*/
        {
          ExteriorCellNewReferencesMap_AddReference( /*0x4660a2*/
            (ExteriorCellNewReferencesMap *)this->unk000[3],
            data.locationFormID,
            a1,
            data.positionX,
            data.positionY,
            data.positionZ);
          goto LABEL_92; /*0x4660a2*/
        }
        PrintError( /*0x4660c8*/
          "Worldspace %08X could not be found while loading a created reference.  Its loading will be skipped.",
          data.locationFormID);
        (*(void (__thiscall **)(CHAR *, _DWORD, int))(*(_DWORD *)Game_ResolveSaveFile + 0xC))( /*0x4660e3*/
          Game_ResolveSaveFile,
          *(unsigned __int16 *)((char *)&v166 + 1),
          BSFile_FilePos_Cur);
      }
LABEL_176:
      if ( ++v186 >= v169 ) /*0x46687b*/
      {
        v87 = arg2; /*0x466881*/
        break; /*0x466881*/
      }
    }
  }
  TESSaveLoadGame_ReconcileExistingChanges((TESSaveLoadGame_SerializationView *)this, v87, a7, a8, a9, 1); /*0x466885*/
  sub_432890((volatile LONG *)MEMORY[0xB33A10]); /*0x466894*/
  v151 = TESSaveLoadGame_FinalizeLoadedForms(this, a8, a7, a9, &self, v87, 1); /*0x4668a6*/
  if ( v87 ) /*0x4668ad*/
    FormHeapFree(v87); /*0x4668b0*/
  TESSaveLoadGame_ProcessDeferredDeletions((TESSaveLoadGame_SerializationView *)this); /*0x4668ba*/
  sub_45C320((BSSimpleList_VoidPtr *)this, v68, (int)this, a7, a8, v151); /*0x4668c1*/
  sub_57A850(); /*0x4668c6*/
  sub_675F40((int)&qword_B3BB2C[0x75]); /*0x4668d0*/
  sub_673BD0(&qword_B3BB2C[0x75], 1); /*0x4668dc*/
  sub_673BD0(&qword_B3BB2C[0x75], 2); /*0x4668e8*/
  sub_441510((int)MEMORY[0xB333A0], a7, a8, v151); /*0x4668f3*/
  v152 = sub_461030(this, a7, a8, v151, 1); /*0x4668fc*/
  TESSaveLoadGame_LoadTempEffectsList((int)this, (char)this, v87, (int)Game_ResolveSaveFile); /*0x466904*/
  sub_677360((int)&qword_B3BB2C[0x75]); /*0x46690e*/
  ProcessLists_RebuildNearbyActorCandidates(&qword_B3BB2C[0x75]); /*0x466918*/
  sub_43BEB0(MEMORY[0xB33A1C]); /*0x466923*/
  sub_459A90((int)this, (char)this, a7, a8, v152); /*0x46692a*/
  v153 = MEMORY[0xB33398]->mainThreadID; /*0x466935*/
  if ( GetCurrentThreadId() == v153 ) /*0x466940*/
    this->flags &= ~1u; /*0x466942*/
  else
    this->flags &= ~0x40000u; /*0x466948*/
  this->flags &= ~0x800u; /*0x46694f*/
  *((_BYTE *)this + 0xA8) = 0; /*0x466956*/
  sub_65E800(::reference); /*0x466963*/
  sub_65E860((TESObjectREFR *)::reference); /*0x46696e*/
  sub_665260((TESObjectREFR *)::reference, v152, ::reference); /*0x46697a*/
  sub_663F50(); /*0x466985*/
  sub_447300((TESHealthForm **)g_TESDataHandler); /*0x466990*/
  v154 = (unsigned int **)this->unk030[4];      // xOBSE source Hooks_SaveLoad.cpp installs serialization load callback hook here; Blockhead registered load/new-game callbacks clear scripted head/mesh/age overrides. Source evidence only for plugin scheduling; no proof this ordering causes OCO face corruption. Capture alongside native head reconstruction during A/B cold/in-process matrix. /*0x466995*/
  *((_BYTE *)this + 0x70) = 0; /*0x46699a*/
  *((_BYTE *)this + 0x71) = 0x7D; /*0x46699e*/
  *((_BYTE *)this + 0x7C) = 0x7D; /*0x4669a2*/
  if ( v154 ) /*0x4669a6*/
  {
    TESSaveLoadGame_PrintChangeRecords_(v154, Game_ResolveSaveFile + 0x3C); /*0x4669ac*/
    v155 = this->unk030[4]; /*0x4669b1*/
    if ( v155 ) /*0x4669b6*/
    {
      SaveLoad_ClearReferenceMapState((void *)this->unk030[4]); /*0x4669ba*/
      FormHeapFree(v155); /*0x4669c0*/
    }
    this->unk030[4] = 0; /*0x4669c8*/
  }
  v156 = *((int **)this + 0x1B); /*0x4669cf*/
  if ( v156 ) /*0x4669d4*/
    BSSimpleList_Remove(v156, (int)Game_ResolveSaveFile); /*0x4669d9*/
  (**(void (__thiscall ***)(void *, int))Game_ResolveSaveFile)(Game_ResolveSaveFile, 1); /*0x4669e6*/
  byte_B33B04[0] = 1; /*0x4669e8*/
  TickCount = GetTickCount() - TickCount; /*0x4669fb*/
  __asm { fild    [esp+330h+var_2CC] } /*0x4669ff*/
  if ( TickCount < 0 ) /*0x466a03*/
    __asm { fadd    dword ptr ds:0A2FC78h } /*0x466a05*/
  __asm { fdiv    qword ptr ds:0A2FC70h } /*0x466a0b*/
  __asm { fstp    [esp+338h+var_338] }
  _sprintf(v194, "LoadGame took %.2f seconds\n", v158); /*0x466a24*/
  FormHeapFree((unsigned int)self.data); /*0x466a31*/
}
