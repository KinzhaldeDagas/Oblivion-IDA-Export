int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  double v4; // st0
  double v5; // st1
  double v6; // st2
  double v7; // st3
  double v8; // st4
  double v9; // st5
  double v10; // st6
  TESObjectREFR *v11; // ebp
  char *v12; // eax
  int v14; // eax
  CHAR v15; // cl
  char *v16; // eax
  char *v18; // eax
  int v20; // eax
  CHAR v21; // cl
  int v22; // eax
  CHAR v23; // cl
  unsigned int v24; // eax
  char *v25; // edi
  char *v27; // eax
  char *v28; // eax
  char *v29; // eax
  HWND WindowA; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  BSTexturePalette *v33; // eax
  BSTexturePalette *v34; // eax
  int v35; // eax
  char v36; // cl
  int v37; // eax
  char v38; // cl
  HWND a2; // esi
  _BYTE *v40; // eax
  OSGlobals *v41; // eax
  _DWORD *v42; // eax
  _DWORD *v43; // eax
  double v44; // st7
  OSGlobals *v45; // esi
  InputGlobal *input; // ecx
  InputGlobal **p_input; // edi
  double v48; // st7
  TESForm *v49; // esi
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  TESObjectREFR **v53; // esi
  char *v54; // eax
  TESWorldSpace *WorldSpace; // eax
  TESObjectCELL *currentInteriorCell; // esi
  double v57; // st7
  NiAVObject *PlayerNode; // eax
  _DWORD *ShadowSceneNode; // eax
  float *vtbl; // eax
  NiAVObjectVtbl *v61; // esi
  NiAVObject *v62; // ecx
  double v63; // st7
  TESForm *ActorBaseForm; // eax
  TESForm::ModReferenceList *p_modlist; // esi
  Data *data; // edi
  char *p_unkFile018; // edi
  double v68; // st7
  NiDX9Renderer *v69; // ecx
  UInt32 *p_SceneState2; // esi
  UInt32 *v71; // esi
  TESObjectCELL *ParentCell; // eax
  NiNode *v73; // eax
  NiNode *v74; // esi
  int v75; // eax
  int v76; // ecx
  void (__thiscall ***v77)(_DWORD, int); // esi
  NiNode *v78; // esi
  int v79; // eax
  int v80; // ecx
  void (__thiscall ***v81)(_DWORD, int); // esi
  int v82; // esi
  TESForm *v83; // eax
  LowProcess *process; // ecx
  OSGlobals *v85; // eax
  TES *v86; // esi
  void *sound; // edi
  void **p_sound; // esi
  void *v89; // esi
  OSGlobals *v90; // esi
  FileFinder *v91; // esi
  void (__thiscall ***v92)(_DWORD, int); // esi
  char *v94; // [esp+20h] [ebp-6BCh]
  NiNode *v95; // [esp+20h] [ebp-6BCh]
  TESObjectREFR *v96; // [esp+20h] [ebp-6BCh]
  int v97; // [esp+24h] [ebp-6B8h]
  int v98; // [esp+24h] [ebp-6B8h]
  int v99; // [esp+24h] [ebp-6B8h]
  int v100; // [esp+28h] [ebp-6B4h]
  int v101; // [esp+28h] [ebp-6B4h]
  int v102; // [esp+28h] [ebp-6B4h]
  int v103; // [esp+2Ch] [ebp-6B0h]
  int v104; // [esp+2Ch] [ebp-6B0h]
  int v105; // [esp+2Ch] [ebp-6B0h]
  int v106; // [esp+34h] [ebp-6A8h]
  HWND window; // [esp+34h] [ebp-6A8h]
  signed int v108; // [esp+38h] [ebp-6A4h] BYREF
  int v109; // [esp+3Ch] [ebp-6A0h] BYREF
  float v110; // [esp+40h] [ebp-69Ch] BYREF
  float v111; // [esp+44h] [ebp-698h]
  float v112; // [esp+48h] [ebp-694h]
  struct tagRECT Rect; // [esp+4Ch] [ebp-690h] BYREF
  __int64 v114; // [esp+5Ch] [ebp-680h] BYREF
  float v115; // [esp+64h] [ebp-678h]
  struct tagMSG Msg; // [esp+68h] [ebp-674h] BYREF
  WNDCLASSA WndClass; // [esp+84h] [ebp-658h] BYREF
  float v118[8]; // [esp+ACh] [ebp-630h] BYREF
  char v119; // [esp+CFh] [ebp-60Dh] BYREF
  CHAR pszPath[259]; // [esp+D0h] [ebp-60Ch] BYREF
  char v121; // [esp+1D3h] [ebp-509h] BYREF
  CHAR FileName[260]; // [esp+1D4h] [ebp-508h] BYREF
  CHAR ReturnedString[1024]; // [esp+2D8h] [ebp-404h] BYREF

  _sprintf(FileName, ".\\%s", OblivionINI[0]);
  v11 = 0;
  if ( GetPrivateProfileIntA("General", "bUseMyGamesDirectory", 1, FileName) )
  {
    FileName[0] = 0;
    SHGetFolderPathA(0, 0x1C, 0, 0, pszPath);
    v12 = &v119;
    while ( *++v12 )
      ;
    strcpy(v12, "\\Oblivion\\");
    CreateDirectoryA(pszPath, 0);
    v14 = 0;
    do
    {
      v15 = pszPath[v14];
      *((_BYTE *)&AppDataPath + v14++) = v15;
    }
    while ( v15 );
    SHGetFolderPathA(0, 5, 0, 0, pszPath);
    v16 = &v119;
    while ( *++v16 )
      ;
    strcpy(v16, "\\My Games\\");
    CreateDirectoryA(pszPath, 0);
    v18 = &v119;
    while ( *++v18 )
      ;
    strcpy(v18, "Oblivion\\");
    CreateDirectoryA(pszPath, 0);
    v20 = 0;
    do
    {
      v21 = pszPath[v20];
      word_B3F280[v20++] = v21;
    }
    while ( v21 );
  }
  else
  {
    strcpy((char *)&AppDataPath, ".\\");
    strcpy(word_B3F280, ".\\");
  }
  v22 = 0;
  do
  {
    v23 = word_B3F280[v22];
    FileName[v22++] = v23;
  }
  while ( v23 );
  v24 = strlen(OblivionINI[0]) + 1;
  v25 = &v121;
  while ( *++v25 )
    ;
  qmemcpy(v25, OblivionINI[0], v24);
  v27 = sub_494480();
  DeleteFileA(v27);
  v28 = sub_4944F0();
  DeleteFileA(v28);
  v29 = sub_494560();
  DeleteFileA(v29);
  if ( _access(FileName, 0) == 0xFFFFFFFF )
  {
    strcpy(pszPath, "Oblivion_default.ini");
    CopyFileA(pszPath, FileName, 1);
  }
  if ( !sub_404940() )
  {
    GetPrivateProfileStringA(
      "CopyProtectionStrings",
      "sCopyProtectionTitle",
      lpCaption,
      ReturnedString,
      0x400u,
      FileName);
    Setting_SetStringValue(&lpCaption, (int)ReturnedString, v97, v100, v103);
    GetPrivateProfileStringA(
      "CopyProtectionStrings",
      "sCopyProtectionMessage",
      lpText,
      ReturnedString,
      0x400u,
      FileName);
    Setting_SetStringValue(&lpText, (int)ReturnedString, v98, v101, v104);
    MessageBoxA(0, lpText, lpCaption, 0x40010u);
    return 0;
  }
  while ( !byte_B33394 )
  {
    GetPrivateProfileStringA(
      "CopyProtectionStrings",
      "sCopyProtectionTitle2",
      lpDefault,
      ReturnedString,
      0x400u,
      FileName);
    Setting_SetStringValue(&lpDefault, (int)ReturnedString, v97, v100, v103);
    GetPrivateProfileStringA(
      "CopyProtectionStrings",
      "sCopyProtectionMessage2",
      off_B02DF0,
      ReturnedString,
      0x400u,
      FileName);
    Setting_SetStringValue(&off_B02DF0, (int)ReturnedString, v99, v102, v105);
    if ( MessageBoxA(0, off_B02DF0, lpDefault, 0x40035u) == 2 )
      return 0;
    sub_404940();
  }
  WindowA = FindWindowA(lpClassName, 0);
  if ( WindowA )
  {
    SetForegroundWindow(WindowA);
    return 0;
  }
  sub_47F670((int)lpClassName);
  MemoryPool_Create(&FormHeap, 0, 8u, 0xC00000u, "Default Pool 8");
  MemoryPool_Create(&FormHeap, 0, 0xCu, (unsigned int)&loc_800000, "Default Pool 12");
  MemoryPool_Create(&FormHeap, 0, 0x10u, 0x400000u, "Default Pool 16");
  MemoryPool_Create(&FormHeap, 0, 0x14u, 0x400000u, "Default Pool 20");
  MemoryPool_Create(&FormHeap, 0, 0x18u, (unsigned int)&loc_800000, "Default Pool 24");
  MemoryPool_Create(&FormHeap, 0, 0x1Cu, 0x400000u, "Default Pool 28");
  MemoryPool_Create(&FormHeap, 0, 0x20u, (unsigned int)&loc_800000, "Default Pool 32");
  MemoryPool_Create(&FormHeap, 0, 0x24u, 0x400000u, "Default Pool 36");
  MemoryPool_Create(&FormHeap, 0, 0x28u, 0x400000u, "Default Pool 40");
  MemoryPool_Create(&FormHeap, 0, 0x2Cu, 0x400000u, "Default Pool 44");
  MemoryPool_Create(&FormHeap, 0, 0x38u, 0x2000000u, "Default Pool 56");
  MemoryPool_Create(&FormHeap, 0, 0x44u, 0x400000u, "Default Pool 68");
  MemoryPool_Create(&FormHeap, 0, 0x48u, (unsigned int)&loc_800000, "Default Pool 72");
  MemoryPool_Create(&FormHeap, 0, 0x60u, (unsigned int)&loc_800000, "Default Pool 96");
  MemoryPool_Create(&FormHeap, 0, 0x64u, (unsigned int)&loc_800000, "Default Pool 100");
  MemoryPool_Create(&FormHeap, 0, 0x30u, 0x200000u, "Default Pool 48");
  MemoryPool_Create(&FormHeap, 0, 0x34u, 0x400000u, "Default Pool 52");
  MemoryPool_Create(&FormHeap, 0, 0x40u, 0x400000u, "Default Pool 64");
  MemoryPool_Create(&FormHeap, 0, 0x50u, 0x400000u, "Default Pool 80");
  MemoryPool_Create(&FormHeap, 0, 0x5Cu, 0x400000u, "Default Pool 92");
  MemoryPool_Create(&FormHeap, 0, 0x6Cu, 0x400000u, "Default Pool 108");
  MemoryPool_Create(&FormHeap, 0, 0x78u, 0x400000u, "Default Pool 120");
  MemoryPool_Create(&FormHeap, 0, 0xC8u, (unsigned int)&loc_800000, "Default Pool 200");
  MemoryPool_Create(&FormHeap, 0, 0xD8u, 0x400000u, "NiGeometry Pool");
  MemoryPool_Create(&FormHeap, 0, 0xF4u, 0x400000u, "NiNode Pool");
  MemoryPool_Create(&FormHeap, 0, 0x100u, (unsigned int)&loc_800000, "Default Pool 256");
  MemoryPool_Create(&FormHeap, 0, 0x108u, 0x400000u, "BSFadeNode Pool");
  dword_B02184 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))Memory_Cleanup;
  sub_747BA0();
  byte_B3F958 = 1;
  sub_6F98F0();
  dword_B40334 = (int (*)(void))sub_430D60;
  v31 = (_DWORD *)FormHeapAlloc(4u);
  if ( v31 )
  {
    dword_BA7A00 = (int)v31;
    *v31 = &SoundCollisionListener::`vftable';
  }
  v32 = (_DWORD *)FormHeapAlloc(0x14u);
  if ( v32 )
    sub_4316E0(v32);
  if ( OBSE_g_FileFinder )
    ((void (__thiscall *)(FileFinder *, const char *))OBSE_g_FileFinder->vtbl->Unk_02)(OBSE_g_FileFinder, "Data");
  v33 = (BSTexturePalette *)FormHeapAlloc(0x10u);
  if ( v33 )
    v34 = BSTexturePalette::BSTexturePalette(v33, 0x3F1u);
  else
    v34 = 0;
  NiSmartPointer_Set__((Ni2DBuffer **)&dword_B35300, (Ni2DBuffer *)v34);
  dword_B3FAC8 = dword_B35300;
  v35 = 0;
  do
  {
    v36 = byte_A30FEC[v35];
    byte_B07D2C[v35++] = v36;
  }
  while ( v36 );
  if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))RegSettingCollection[5])(&RegSettingCollection, 0) )
  {
    ((void (__thiscall *)(void ***))RegSettingCollection[8])(&RegSettingCollection);
    ((void (__thiscall *)(void ***))RegSettingCollection[6])(&RegSettingCollection);
  }
  v37 = 0;
  do
  {
    v38 = FileName[v37];
    byte_B07BF4[v37++] = v38;
  }
  while ( v38 );
  if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))INISettingCollection[5])(&INISettingCollection, 0) )
  {
    ((void (__thiscall *)(void ***))INISettingCollection[8])(&INISettingCollection);
    ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection);
  }
  sub_53AC60();
  sub_42F610();
  WndClass.style = 3;
  WndClass.lpfnWndProc = sub_4060F0;
  WndClass.cbClsExtra = 0;
  WndClass.cbWndExtra = 0;
  WndClass.hInstance = hInstance;
  WndClass.hIcon = LoadIconA(hInstance, (LPCSTR)0x65);
  WndClass.hCursor = 0;
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
  WndClass.lpszClassName = lpClassName;
  WndClass.lpszMenuName = 0;
  RegisterClassA(&WndClass);
  Rect.left = 0;
  Rect.top = 0;
  Rect.right = 0x140;
  Rect.bottom = 0xF0;
  AdjustWindowRect(&Rect, 0xCA0000u, 0);
  a2 = CreateWindowExA(
         0,
         lpClassName,
         lpClassName,
         0x10CA0000u,
         0,
         0,
         Rect.right - Rect.left,
         Rect.bottom - Rect.top,
         0,
         0,
         hInstance,
         0);
  v40 = (_BYTE *)FormHeapAlloc(0x28u);
  if ( v40 )
    v41 = (OSGlobals *)InitializeOSGlobals(v40, (int)a2, (IDirectInputDevice8 *)hInstance);
  else
    v41 = 0;
  OSGlobals = v41;
  v42 = (_DWORD *)FormHeapAlloc(8u);
  if ( v42 )
    v43 = sub_572DC0(v42);
  else
    v43 = 0;
  dword_B3A6B0 = v43;
  PrintToLog___("Initializing Renderer...");
  sub_4052F0((int)OSGlobals);
  byte_B3F709 = 1;
  NiDX9Renderer::AddLostDeviceCallbak(g_Renderer, (int)nullsub_returnTrue_0arg, 0);
  NiRenderer_RegisterOnDeviceLostCallback(g_Renderer, (int)sub_405440, 0);
  sub_553550();
  PrintToLog___("Initializing Shader System...");
  dword_B42E8C = (int (__cdecl *)(_DWORD, _DWORD))sub_405150;
  ImageSpaceEffectEnabled = bDoImageSpaceEffect;
  dword_B42EBC = dword_B35300;
  dword_B42D78 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_405290;
  sub_7B4870(flt_B06D8C, flt_B06D94, flt_B06D9C);
  flt_B430A8 = flt_B02D78;
  flt_B430A4 = flt_B02D80;
  useHardDriveCache = bUseHardDriveCache;
  byte_B43077 = byte_B02D70;
  byte_B42D40 = byte_B06D1C;
  if ( UseHDR )
  {
    flt_B2C2BC = flt_B06E24;
    flt_B2C2C0 = flt_B06E2C;
    dword_B2C1E4 = dword_B06DEC;
    dword_B43220 = dword_B06DF4;
    flt_B431F8 = flt_B06DFC;
    dword_B43224 = dword_B06E6C;
    flt_B431FC = flt_B06E74;
    flt_B431E8 = flt_B06E04;
    flt_B431EC = flt_B06E7C;
    flt_B431F0 = flt_B06E0C;
    flt_B431F4 = flt_B06E84;
    flt_B43200 = flt_B06E3C;
    flt_B43204 = flt_B06E8C;
    flt_B43208 = flt_B06E44;
    flt_B4320C = flt_B06E94;
    flt_B43210 = flt_B06E5C;
    flt_B43214 = flt_B06E9C;
    flt_B43218 = flt_B06E64;
    flt_B4321C = flt_B06EA4;
    flt_B43154 = flt_B06E14;
    v44 = flt_B06E1C;
    flt_B43158 = flt_B06E1C;
  }
  else
  {
    sub_7B4830(dword_B06D3C, dword_B06D44, flt_B06D4C, flt_B06D5C, flt_B06D64, dword_B06D54);
    flt_B43154 = flt_B06D6C;
    flt_B43158 = flt_B06D74;
    flt_B2C2BC = flt_B06D7C;
    v44 = flt_B06D84;
    flt_B2C2C0 = flt_B06D84;
  }
  sub_406950();
  v45 = OSGlobals;
  input = OSGlobals->input;
  p_input = &OSGlobals->input;
  if ( input )
  {
    InputGlobals::FlushKeyboardBuffer(input);
    InputGlobals::PollAndUpdateInputState(*p_input);
  }
  sub_47D0F0(&TimeInfo);
  v45->unk02 = 1;
  sub_410310();
  sub_410E40(lpParameter, 0, 0xFFFFFFFF);
  dword_B39B84 = (int)g_worldScenegraph->camera;
  dword_B39E00 = (int)g_worldScenegraph->camera;
  sub_67FCF0();
  GetPathBuilderSingleton();
  sub_578CC0(0, v9, v10, v44, 1);
  OSGlobals_Initialize___(v9, v10, (NiAVObject *)g_worldScenegraph);
  sub_55F750(0);
  v110 = 2048.0;
  v111 = 2048.0;
  v48 = 128.0;
  v112 = 128.0;
  sub_4431F0((int)TES, v9, 0, v10, 128.0, *(_DWORD *)(TESDataHandler + 0xC));
  sub_662EE0();
  ArchiveManager_DisacrdAllBSARetainedFilenames();
  *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x185) = 1;
  PrintToLog___("Initializing Actor Locations...");
  sub_675310(&ActorProcessManager_ptr.middleHighActors, v9, v10, 128.0);
  sub_447300((_DWORD **)TESDataHandler);
  PrintToLog___("Loading initial area...");
  if ( strlen(*(const char **)off_B02CE0) )
  {
    v49 = (TESForm *)sub_4476B0((_DWORD *)TESDataHandler, *(char **)off_B02CE0);
    if ( v49 )
      goto LABEL_72;
    v11 = 0;
    v108 = 0;
    v109 = 0;
    v50 = sub_4478B0((int *)TESDataHandler, *(char **)off_B02CE0, &v108, &v109);
    p_input = (InputGlobal **)v50;
    if ( v50 )
    {
      sub_4431F0((int)TES, v9, 0, v10, 128.0, v50);
      v10 = (double)(v108 << 0xC) + 2048.0;
      v110 = v10;
      v111 = (double)(v109 << 0xC) + 2048.0;
      v112 = 0.0;
      sub_445A10((int)TES, (int)p_input, v8, v9, v10, 0.0, v4, v7, v5, v6, &v110);
      sub_447740((_DWORD *)TESDataHandler, v108, v109, (int **)p_input, 0);
      goto LABEL_88;
    }
  }
  else
  {
    if ( !strlen(off_B02CF8) || !strlen(off_B02D00) )
      goto LABEL_88;
    v51 = j__atol(off_B02CF8);
    v52 = j__atol(off_B02D00);
    p_input = *(InputGlobal ***)(TESDataHandler + 0xC);
    v53 = (TESObjectREFR **)(TESDataHandler + 0xC);
    v106 = v52;
    if ( TESDataHandler != 0xFFFFFFF4 )
    {
      while ( v53[1] || *v53 )
      {
        v11 = *v53;
        v94 = off_B02CF0;
        v54 = (char *)(*v53)->vtbl->super.GetEditorName(*v53);
        if ( !_strcmp(v54, v94) )
        {
          p_input = (InputGlobal **)v11;
          break;
        }
        v53 = (TESObjectREFR **)v53[1];
        if ( !v53 )
          break;
        v11 = 0;
      }
    }
    if ( !p_input )
      goto LABEL_75;
    v11 = (TESObjectREFR *)v106;
    v49 = sub_4F1630((TESWorldSpace *)p_input, v9, v10, 128.0, v51, v106);
    if ( v49 )
      goto LABEL_72;
    v49 = sub_447740((_DWORD *)TESDataHandler, v51, v106, (int **)p_input, 1);
    v11 = 0;
  }
  if ( !v49 )
  {
LABEL_75:
    if ( *(_DWORD *)off_B02CE0 && **(_BYTE **)off_B02CE0 )
    {
      PrintError("Could not find starting cell '%s'.", *(const char **)off_B02CE0);
    }
    else if ( off_B02CF8 && off_B02D00 && *off_B02CF8 && *off_B02D00 )
    {
      if ( off_B02CF0 && *off_B02CF0 )
        PrintError("Could not find starting cell (%s, %s) in worldspace '%s'.", off_B02CF8, off_B02D00, off_B02CF0);
      else
        PrintError("Could not find starting cell (%s, %s) in default Tamriel worldspace", off_B02CF8, off_B02D00);
    }
    else
    {
      PrintError("Could not find starting cell for INI data.");
    }
    goto LABEL_87;
  }
LABEL_72:
  if ( TESObjectCELL_IsInterior((TESObjectCELL *)v49) )
  {
    sub_4455E0((unsigned int)TES, 128.0, v8, v9, v10, v4, v7, v5, v6, (int)p_input, (TESObjectREFR *)v49, &v110);
  }
  else
  {
    WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)v49);
    sub_4431F0((int)TES, v9, (char)v11, v10, 128.0, (int)WorldSpace);
    v110 = (double)(TESObjectCELL_GetXCoordinate((TESObjectCELL *)v49) << 0xC) + 2048.0;
    v111 = (double)(TESObjectCELL_GetYCoordinate((TESObjectCELL *)v49) << 0xC) + 2048.0;
    v48 = 0.0;
    v112 = 0.0;
  }
LABEL_87:
  sub_447DB0((char *)TESDataHandler, 0xFFFFFFFF);
  sub_444EC0(TES, v11, v48, v8, v9, v10, v7, v6, v5, v4, &v110, 1);
  sub_482310((int)TES->gridCellArray, *(float *)&v11);
LABEL_88:
  PrintToLog___("Placing player...");
  currentInteriorCell = TES->currentInteriorCell;
  v114 = *(_QWORD *)&Vector3_InitValue_;
  v115 = dword_B3F9B0;
  if ( currentInteriorCell
    || (currentInteriorCell = GetGridEntry(
                                TES->gridCellArray,
                                (unsigned int)uGridsToLoad >> 1,
                                (unsigned int)uGridsToLoad >> 1)->cell) != 0 )
  {
    sub_4D5D70(currentInteriorCell, &v110, &v114);
  }
  v57 = v115;
  ((void (__stdcall *)(_DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.Unk_7A)(LODWORD(v115));
  ((void (__thiscall *)(PlayerCharacter *, float *))TESDataHandler_g_PlayerRef->vtbl->super.super.Unk_73)(
    TESDataHandler_g_PlayerRef,
    &v110);
  if ( currentInteriorCell )
  {
    sub_4D35D0(currentInteriorCell, v9, v10, v57, (TESChildCELL *)TESDataHandler_g_PlayerRef);
    sub_434020(ioManager, v9, v10, v57, 5);
    PlayerNode = (NiAVObject *)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
    NiAVObject_InitializePropertyState(PlayerNode);
    v95 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    ShadowSceneNodeAddShadowCaster(ShadowSceneNode, (volatile LONG *)v95);
  }
  sub_4D70E0((TESObjectREFR *)TESDataHandler_g_PlayerRef, v9, v10);
  if ( g_worldScenegraph->super.children.end )
    vtbl = (float *)g_worldScenegraph->super.children.data->vtbl;
  else
    vtbl = 0;
  vtbl[0x15] = v110;
  vtbl[0x16] = v111;
  vtbl[0x17] = v112;
  if ( g_worldScenegraph->super.children.end )
    v61 = g_worldScenegraph->super.children.data->vtbl;
  else
    v61 = 0;
  qmemcpy(&v61->super.DumpAttributes, sub_4D7AF0((float *)TESDataHandler_g_PlayerRef, v118), 0x24u);
  if ( g_worldScenegraph->super.children.end )
    v62 = (NiAVObject *)g_worldScenegraph->super.children.data->vtbl;
  else
    v62 = 0;
  v63 = 0.0;
  NiAVObject_UpdateNiAVObject(v62, 0.0, 1);
  sub_578CD0(0, v9, v10, 0.0);
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
  p_modlist = &ActorBaseForm[3].member.modlist;
  if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 )
  {
    while ( p_modlist->next || p_modlist->data )
    {
      data = p_modlist->data;
      if ( EffectItemList_GetSchoolAV() == 0x19 )
      {
        sub_664850((int)TESDataHandler_g_PlayerRef, 0, v9, v10, 0.0, 0);
        if ( data )
          p_unkFile018 = (char *)&data->unkFile018;
        else
          p_unkFile018 = 0;
        PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, 0, v9, v10, 0.0, p_unkFile018);
        break;
      }
      p_modlist = p_modlist->next;
      if ( !p_modlist )
        break;
    }
  }
  sub_6632A0(TESDataHandler_g_PlayerRef);
  OSGlobals->unk03 = 1;
  sub_42BA50();
  if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
  {
    sub_40FDD0();
  }
  else
  {
    sub_447DB0((char *)TESDataHandler, 0xFFFFFFFF);
    sub_440AF0((int)TES, v9, v10, 0, 0, 0, 0);
    sub_5B6040(0, v10, 0.0, v9);
    sub_40FDD0();
    NiRenderer_BeginScene1(kClear_ALL, 0);
    sub_7D7210();
    v68 = nullsub_returnTrue_0arg();
    sub_5B5AC0();
    sub_410BA0(v9, v10, v68, *(int *)off_B0308C, 1, 1, 0, 0, 0.0, 0);
    sub_5B5C90();
    byte_B33430 = 0;
    v63 = nullsub_returnTrue_0arg();
  }
  PrintToLog___("Begin Idle loop...");
  memset(&Msg, 0, sizeof(Msg));
  window = OSGlobals->window;
  while ( 1 )
  {
    while ( PeekMessageA((LPMSG)&Msg, 0, 0, 0, 1u) )
    {
      TranslateMessage((const MSG *)&Msg);
      DispatchMessageA((const MSG *)&Msg);
    }
    if ( GetActiveWindow() != window && !TES->unk51 && !TES->unk52 && !dword_B333F0 )
      goto LABEL_122;
    if ( (int)g_Renderer->member.device->lpVtbl->TestCooperativeLevel(g_Renderer->member.device) < 0 )
    {
      v69 = g_Renderer;
      p_SceneState2 = &g_Renderer->member.super.SceneState2;
      if ( !g_Renderer->member.super.SceneState2 && !g_Renderer->member.super.SceneState1 )
      {
        if ( ((unsigned __int8 (*)(void))g_Renderer->__vftable->super.BeginScene)() )
          *p_SceneState2 = 1;
        v69 = g_Renderer;
      }
      v71 = &v69->member.super.SceneState2;
      if ( v69->member.super.SceneState2 == 1 && !v69->member.super.SceneState1 )
      {
        if ( v69->__vftable->super.EndScene((NiRenderer *)v69) )
          *v71 = 0;
        v69 = g_Renderer;
      }
      if ( (int)v69->member.device->lpVtbl->TestCooperativeLevel(v69->member.device) >= 0 )
      {
        if ( TES->waterManager )
        {
          if ( byte_B0703C )
          {
            if ( !sub_45A500(SaveLoad_CurrentSavegame) )
              v63 = WaterSurfaceLoop(*(float *)&TES->waterManager, v63);
          }
        }
      }
LABEL_122:
      Sleep(0x32u);
      goto LABEL_141;
    }
    sub_40D800((InputGlobal **)OSGlobals, v4, v5, v6, v7, v8, v9, v10);
LABEL_141:
    if ( OSGlobals->quitGame )
      break;
    if ( OSGlobals->exitToMainMenu )
    {
      SoundManager_StopFilterGraph((_BYTE *)OSGlobals->sound);
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
      {
        v96 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
        sub_4CECD0(ParentCell, v96);
      }
      v73 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
      v74 = v73;
      if ( v73 )
      {
        v75 = (int)v73->vtbl->super.super.Unk_02((NiObject *)v73);
        if ( v75 )
        {
          v76 = *(_DWORD *)(v75 + 0x1C);
          if ( v76 )
          {
            (*(void (__thiscall **)(int, signed int *, NiNode *))(*(_DWORD *)v76 + 0x88))(v76, &v108, v74);
            if ( v108 )
            {
              v77 = (void (__thiscall ***)(_DWORD, int))v108;
              if ( !InterlockedDecrement((volatile LONG *)(v108 + 4)) )
                (**v77)(v77, 1);
            }
          }
        }
      }
      v78 = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
      if ( v78 )
      {
        v79 = (int)v78->vtbl->super.super.Unk_02((NiObject *)v78);
        if ( v79 )
        {
          v80 = *(_DWORD *)(v79 + 0x1C);
          if ( v80 )
          {
            (*(void (__thiscall **)(int, int *, NiNode *))(*(_DWORD *)v80 + 0x88))(v80, &v109, v78);
            if ( v109 )
            {
              v81 = (void (__thiscall ***)(_DWORD, int))v109;
              if ( !InterlockedDecrement((volatile LONG *)(v109 + 4)) )
                (**v81)(v81, 1);
            }
          }
        }
      }
      sub_442630(TES, 0, 0);
      TES->extXCoord = 0x7FFFFFFF;
      TES->extYCoord = 0x7FFFFFFF;
      v82 = sub_4533F0(SaveLoad_CurrentSavegame, (int)TESDataHandler_g_PlayerRef, 0);
      sub_45A530(SaveLoad_CurrentSavegame, 1);
      sub_464440((char *)SaveLoad_CurrentSavegame, (int)PeekMessageA, v9, v10, v63, 0);
      ((void (__thiscall *)(PlayerCharacter *, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.super.super.Set3D)(
        TESDataHandler_g_PlayerRef,
        0);
      v83 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      sub_405CE0(v83);
      sub_5E9690(TESDataHandler_g_PlayerRef);
      process = TESDataHandler_g_PlayerRef->super.super.super.process;
      if ( process )
        v63 = ((double (__thiscall *)(LowProcess *, _DWORD))process->SetUnk184)(process, 0);
      sub_663340((int)TESDataHandler_g_PlayerRef, (int)TranslateMessage, v9, v10, v63, v82);
      sub_462080((char *)SaveLoad_CurrentSavegame);
      SaveLoad_ValidateCreatedObj__((int *)SaveLoad_CurrentSavegame);
      sub_45A530(SaveLoad_CurrentSavegame, 0);
      sub_45C320((int)SaveLoad_CurrentSavegame, (int)TranslateMessage, (int)DispatchMessageA, v9, v10, v63);
      sub_675310(&ActorProcessManager_ptr.middleHighActors, v9, v10, v63);
      sub_447300((_DWORD **)TESDataHandler);
      sub_57CCC0((char)DispatchMessageA, v9, v10, v63, 0);
      sub_5B5AC0();
      sub_5B6040((char)DispatchMessageA, v10, v63, v9);
      v85 = OSGlobals;
      OSGlobals->exitToMainMenu = 0;
      v85->unk04 = 0;
    }
  }
  OSGlobals->unk03 = 0;
  if ( dword_B3F940 )
    sub_701A80();
  sub_43E0F0(ModelLoaderPtr);
  sub_410B80();
  sub_67F180();
  sub_682430();
  sub_6844D0();
  sub_684710();
  sub_405B00();
  Interface3dScenegraph_Destructor();
  sub_67CF00(&dword_B3BDB0);
  sub_578EF0((char)DispatchMessageA, v9, v10, v63);
  sub_5C0FC0();
  if ( TES->sky )
    sub_53FB30();
  sub_6AC330((_DWORD *)OSGlobals->sound, 0xFFFFFFFF);
  sub_6F96B0();
  v86 = TES;
  if ( TES )
  {
    TES_destr(TES, v9, v10, v63);
    FormHeapFree((unsigned int)v86);
  }
  sound = OSGlobals->sound;
  p_sound = &OSGlobals->sound;
  if ( sound )
  {
    sub_6AC020((int)sound, v9, v10);
    FormHeapFree((unsigned int)sound);
  }
  *p_sound = 0;
  sub_5535D0();
  sub_55F720();
  EffectSettingCollection_Clear(&EffectSettingCollection);
  ActiveEffect_Base_ClearCreateFuncTable();
  v89 = dword_B3A6B0;
  if ( dword_B3A6B0 )
  {
    TESTexture::ClearComponentReferences(dword_B3A6B0);
    FormHeapFree((unsigned int)v89);
  }
  v90 = OSGlobals;
  if ( OSGlobals )
  {
    sub_40C350((InputGlobal **)OSGlobals);
    FormHeapFree((unsigned int)v90);
  }
  OSGlobals = 0;
  sub_40C180(&INISettingCollection, byte_B07BF4);
  sub_53AD60();
  sub_40C220(g_Renderer, (int)sub_405440);
  sub_40C2F0(g_Renderer, (int)nullsub_returnTrue_0arg);
  sub_497B50(1);
  if ( OBSE_g_FileFinder )
  {
    v91 = OBSE_g_FileFinder;
    sub_431770((unsigned __int16 *)OBSE_g_FileFinder);
    FormHeapFree((unsigned int)v91);
  }
  v92 = (void (__thiscall ***)(_DWORD, int))dword_B35300;
  if ( dword_B35300 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(dword_B35300 + 4)) )
    {
      if ( v92 )
        (**v92)(v92, 1);
    }
    dword_B35300 = 0;
  }
  sub_747BE0();
  return 0;
}
