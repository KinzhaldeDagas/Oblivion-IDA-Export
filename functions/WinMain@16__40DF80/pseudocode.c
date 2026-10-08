// Pass230: +0x1C reads here are on player NiNode/property-state derived objects during exit-to-main-menu handling; not proof of TES+0x1C shader fog upload.
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
  char *v24; // edx
  unsigned int v25; // eax
  char *v26; // edi
  char *v28; // edi
  unsigned int v29; // ecx
  int (__stdcall *v30)(HWND, LPCSTR, LPCSTR, UINT); // edi
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  HWND WindowA; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // eax
  BSTexturePalette *v37; // eax
  BSTexturePalette *v38; // eax
  int v39; // eax
  char v40; // cl
  int v41; // eax
  char v42; // cl
  HWND Window; // esi
  _BYTE *v44; // eax
  OSGlobals *v45; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // eax
  OSGlobals *v48; // esi
  InputGlobal *input; // ecx
  InputGlobal **p_input; // edi
  double v51; // st7
  TESForm *v52; // esi
  TESWorldSpace *v53; // eax
  int v54; // ebx
  int v55; // eax
  TESObjectREFR **v56; // esi
  unsigned __int8 *v57; // eax
  TESWorldSpace *WorldSpace; // eax
  double v59; // st7
  TESObjectCELL *currentInteriorCell; // esi
  double v61; // st7
  NiAVObject *PlayerNode; // eax
  _DWORD *ShadowSceneNode; // eax
  float *vtbl; // eax
  NiAVObjectVtbl *v65; // esi
  NiAVObject *v66; // ecx
  double v67; // st7
  TESForm *ActorBaseForm; // eax
  TESForm::ModReferenceList *p_modlist; // esi
  Data *data; // edi
  char *p_unkFile018; // edi
  NiDX9Renderer *v72; // ecx
  UInt32 *p_SceneState2; // esi
  UInt32 *v74; // esi
  TESObjectCELL *ParentCell; // eax
  NiNode *v76; // eax
  NiNode *v77; // esi
  int v78; // eax
  int v79; // ecx
  void (__thiscall ***v80)(_DWORD, int); // esi
  NiNode *v81; // esi
  int v82; // eax
  int v83; // ecx
  void (__thiscall ***v84)(_DWORD, int); // esi
  int v85; // esi
  TESForm *v86; // eax
  LowProcess *process; // ecx
  OSGlobals *v88; // eax
  TES *v89; // esi
  void *sound; // edi
  void **p_sound; // esi
  void *v92; // esi
  OSGlobals *v93; // esi
  FileFinder *v94; // esi
  void (__thiscall ***v95)(_DWORD, int); // esi
  unsigned __int8 *v97; // [esp+20h] [ebp-6BCh]
  NiNode *v98; // [esp+20h] [ebp-6BCh]
  TESObjectREFR *v99; // [esp+20h] [ebp-6BCh]
  int v100; // [esp+24h] [ebp-6B8h]
  int v101; // [esp+24h] [ebp-6B8h]
  int v102; // [esp+24h] [ebp-6B8h]
  int v103; // [esp+28h] [ebp-6B4h]
  int v104; // [esp+28h] [ebp-6B4h]
  int v105; // [esp+28h] [ebp-6B4h]
  int v106; // [esp+2Ch] [ebp-6B0h]
  int v107; // [esp+2Ch] [ebp-6B0h]
  int v108; // [esp+2Ch] [ebp-6B0h]
  int v109; // [esp+34h] [ebp-6A8h]
  HWND v110; // [esp+34h] [ebp-6A8h]
  signed int v111; // [esp+38h] [ebp-6A4h] BYREF
  int v112; // [esp+3Ch] [ebp-6A0h] BYREF
  float v113; // [esp+40h] [ebp-69Ch] BYREF
  float v114; // [esp+44h] [ebp-698h]
  float v115; // [esp+48h] [ebp-694h]
  struct tagRECT Rect; // [esp+4Ch] [ebp-690h] BYREF
  __int64 v117; // [esp+5Ch] [ebp-680h] BYREF
  float v118; // [esp+64h] [ebp-678h]
  struct tagMSG Msg; // [esp+68h] [ebp-674h] BYREF
  WNDCLASSA WndClass; // [esp+84h] [ebp-658h] BYREF
  float v121[8]; // [esp+ACh] [ebp-630h] BYREF
  char v122; // [esp+CFh] [ebp-60Dh] BYREF
  CHAR pszPath[259]; // [esp+D0h] [ebp-60Ch] BYREF
  char v124; // [esp+1D3h] [ebp-509h] BYREF
  CHAR FileName[260]; // [esp+1D4h] [ebp-508h] BYREF
  CHAR ReturnedString[1024]; // [esp+2D8h] [ebp-404h] BYREF

  _sprintf(FileName, ".\\%s", OblivionINI[0]); /*0x40dfb2*/
  v11 = 0; /*0x40dfd4*/
  if ( GetPrivateProfileIntA("General", "bUseMyGamesDirectory", 1, FileName) ) /*0x40dfce*/
  {
    FileName[0] = 0; /*0x40dff1*/
    SHGetFolderPathA(0, 0x1C, 0, 0, pszPath); /*0x40dff9*/
    v12 = &v122; /*0x40e002*/
    while ( *++v12 ) /*0x40e00d*/
      ; /*0x40e005*/
    strcpy(v12, "\\Oblivion\\"); /*0x40e021*/
    CreateDirectoryA(pszPath, 0); /*0x40e043*/
    v14 = 0; /*0x40e045*/
    do /*0x40e062*/
    {
      v15 = pszPath[v14]; /*0x40e050*/
      *((_BYTE *)&MEMORY[0xB3F178] + v14++) = v15; /*0x40e057*/
    }
    while ( v15 ); /*0x40e062*/
    SHGetFolderPathA(0, 5, 0, 0, pszPath); /*0x40e071*/
    v16 = &v122; /*0x40e07a*/
    while ( *++v16 ) /*0x40e088*/
      ; /*0x40e080*/
    strcpy(v16, "\\My Games\\"); /*0x40e096*/
    CreateDirectoryA(pszPath, 0); /*0x40e0b8*/
    v18 = &v122; /*0x40e0c1*/
    while ( *++v18 ) /*0x40e0cc*/
      ; /*0x40e0c4*/
    strcpy(v18, "Oblivion\\"); /*0x40e0da*/
    CreateDirectoryA(pszPath, 0); /*0x40e0f3*/
    v20 = 0; /*0x40e0f5*/
    do /*0x40e112*/
    {
      v21 = pszPath[v20]; /*0x40e100*/
      unk_B3F280[v20++] = v21; /*0x40e107*/
    }
    while ( v21 ); /*0x40e112*/
  }
  else
  {
    strcpy((char *)&MEMORY[0xB3F178], ".\\"); /*0x40e122*/
    strcpy(unk_B3F280, ".\\"); /*0x40e12e*/
  }
  v22 = 0; /*0x40e13a*/
  do /*0x40e152*/
  {
    v23 = unk_B3F280[v22]; /*0x40e140*/
    FileName[v22++] = v23; /*0x40e146*/
  }
  while ( v23 ); /*0x40e152*/
  v24 = OblivionINI[0]; /*0x40e159*/
  v25 = strlen(OblivionINI[0]) + 1; /*0x40e167*/
  v26 = &v124; /*0x40e172*/
  while ( *++v26 ) /*0x40e17d*/
    ; /*0x40e175*/
  qmemcpy(v26, OblivionINI[0], 4 * (v25 >> 2)); /*0x40e186*/
  v28 = &v26[4 * (v25 >> 2)]; /*0x40e186*/
  v29 = v25 & 3; /*0x40e18a*/
  qmemcpy(v28, &v24[4 * (v25 >> 2)], v29); /*0x40e18d*/
  v30 = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))&v28[v29]; /*0x40e18d*/
  v31 = sub_494480(); /*0x40e18f*/
  DeleteFileA(v31); /*0x40e19b*/
  v32 = sub_4944F0(); /*0x40e19d*/
  DeleteFileA(v32); /*0x40e1a3*/
  v33 = sub_494560(); /*0x40e1a5*/
  DeleteFileA(v33); /*0x40e1ab*/
  if ( _access(FileName, 0) == 0xFFFFFFFF ) /*0x40e1c1*/
  {
    strcpy(pszPath, "Oblivion_default.ini"); /*0x40e1d4*/
    CopyFileA(pszPath, FileName, 1); /*0x40e221*/
  }
  if ( !FindOblivionDiscDrive() ) /*0x40e227*/
  {
    GetPrivateProfileStringA( /*0x40e260*/
      "CopyProtectionStrings",
      "sCopyProtectionTitle",
      lpCaption,
      ReturnedString,
      0x400u,
      FileName);
    Setting_SetStringValue(&lpCaption, (int)ReturnedString, v100, v103, v106); /*0x40e26f*/
    GetPrivateProfileStringA( /*0x40e299*/
      "CopyProtectionStrings",
      "sCopyProtectionMessage",
      lpText,
      ReturnedString,
      0x400u,
      FileName);
    Setting_SetStringValue(&lpText, (int)ReturnedString, v101, v104, v107); /*0x40e2a8*/
    MessageBoxA(0, lpText, lpCaption, 0x40010u); /*0x40e2c0*/
    return 0; /*0x40e2c6*/
  }
  if ( !unk_B33394 ) /*0x40e2d2*/
  {
    v30 = MessageBoxA; /*0x40e2de*/
    do /*0x40e38d*/
    {
      GetPrivateProfileStringA( /*0x40e315*/
        "CopyProtectionStrings",
        "sCopyProtectionTitle2",
        lpDefault,
        ReturnedString,
        0x400u,
        FileName);
      Setting_SetStringValue(&lpDefault, (int)ReturnedString, v100, v103, v106); /*0x40e324*/
      GetPrivateProfileStringA( /*0x40e34f*/
        "CopyProtectionStrings",
        "sCopyProtectionMessage2",
        off_B02DF0,
        ReturnedString,
        0x400u,
        FileName);
      Setting_SetStringValue(&off_B02DF0, (int)ReturnedString, v102, v105, v108); /*0x40e35e*/
      if ( MessageBoxA(0, off_B02DF0, lpDefault, 0x40035u) == 2 ) /*0x40e37b*/
        return 0; /*0x40e37b*/
      FindOblivionDiscDrive(); /*0x40e381*/
    }
    while ( !unk_B33394 ); /*0x40e38d*/
  }
  WindowA = FindWindowA(lpClassName, 0); /*0x40e39b*/
  if ( WindowA ) /*0x40e3a3*/
  {
    SetForegroundWindow(WindowA); /*0x40e3a6*/
    return 0; /*0x40e3ac*/
  }
  sub_47F670(lpClassName); /*0x40e3b7*/
  MemoryPool_Create(&FormHeap, 0, 8u, 0xC00000u, "Default Pool 8"); /*0x40e3d0*/
  MemoryPool_Create(&FormHeap, 0, 0xCu, (unsigned int)&loc_800000, "Default Pool 12"); /*0x40e3e6*/
  MemoryPool_Create(&FormHeap, 0, 0x10u, 0x400000u, "Default Pool 16"); /*0x40e3fc*/
  MemoryPool_Create(&FormHeap, 0, 0x14u, 0x400000u, "Default Pool 20"); /*0x40e412*/
  MemoryPool_Create(&FormHeap, 0, 0x18u, (unsigned int)&loc_800000, "Default Pool 24"); /*0x40e428*/
  MemoryPool_Create(&FormHeap, 0, 0x1Cu, 0x400000u, "Default Pool 28"); /*0x40e43e*/
  MemoryPool_Create(&FormHeap, 0, 0x20u, (unsigned int)&loc_800000, "Default Pool 32"); /*0x40e454*/
  MemoryPool_Create(&FormHeap, 0, 0x24u, 0x400000u, "Default Pool 36"); /*0x40e46a*/
  MemoryPool_Create(&FormHeap, 0, 0x28u, 0x400000u, "Default Pool 40"); /*0x40e480*/
  MemoryPool_Create(&FormHeap, 0, 0x2Cu, 0x400000u, "Default Pool 44"); /*0x40e496*/
  MemoryPool_Create(&FormHeap, 0, 0x38u, 0x2000000u, "Default Pool 56"); /*0x40e4ac*/
  MemoryPool_Create(&FormHeap, 0, 0x44u, 0x400000u, "Default Pool 68"); /*0x40e4c2*/
  MemoryPool_Create(&FormHeap, 0, 0x48u, (unsigned int)&loc_800000, "Default Pool 72"); /*0x40e4d8*/
  MemoryPool_Create(&FormHeap, 0, 0x60u, (unsigned int)&loc_800000, "Default Pool 96"); /*0x40e4ee*/
  MemoryPool_Create(&FormHeap, 0, 0x64u, (unsigned int)&loc_800000, "Default Pool 100"); /*0x40e504*/
  MemoryPool_Create(&FormHeap, 0, 0x30u, 0x200000u, "Default Pool 48"); /*0x40e51a*/
  MemoryPool_Create(&FormHeap, 0, 0x34u, 0x400000u, "Default Pool 52"); /*0x40e530*/
  MemoryPool_Create(&FormHeap, 0, 0x40u, 0x400000u, "Default Pool 64"); /*0x40e546*/
  MemoryPool_Create(&FormHeap, 0, 0x50u, 0x400000u, "Default Pool 80"); /*0x40e55c*/
  MemoryPool_Create(&FormHeap, 0, 0x5Cu, 0x400000u, "Default Pool 92"); /*0x40e572*/
  MemoryPool_Create(&FormHeap, 0, 0x6Cu, 0x400000u, "Default Pool 108"); /*0x40e588*/
  MemoryPool_Create(&FormHeap, 0, 0x78u, 0x400000u, "Default Pool 120"); /*0x40e59e*/
  MemoryPool_Create(&FormHeap, 0, 0xC8u, (unsigned int)&loc_800000, "Default Pool 200"); /*0x40e5b7*/
  MemoryPool_Create(&FormHeap, 0, 0xD8u, 0x400000u, "NiGeometry Pool"); /*0x40e5d0*/
  MemoryPool_Create(&FormHeap, 0, 0xF4u, 0x400000u, "NiNode Pool"); /*0x40e5e9*/
  MemoryPool_Create(&FormHeap, 0, 0x100u, (unsigned int)&loc_800000, "Default Pool 256"); /*0x40e602*/
  MemoryPool_Create(&FormHeap, 0, 0x108u, 0x400000u, "BSFadeNode Pool"); /*0x40e61b*/
  dword_B02184 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))Memory_Cleanup; /*0x40e620*/
  sub_747BA0(); /*0x40e62a*/
  unk_B3F958 = 1; /*0x40e62f*/
  sub_6F98F0(); /*0x40e636*/
  unk_B40334 = (int (*)(void))sub_430D60; /*0x40e63d*/
  v35 = (_DWORD *)FormHeapAlloc(4u); /*0x40e647*/
  if ( v35 ) /*0x40e651*/
  {
    unk_BA7A00 = (int)v35; /*0x40e653*/
    *v35 = &SoundCollisionListener::`vftable'; /*0x40e658*/
  }
  v36 = (_DWORD *)FormHeapAlloc(0x14u); /*0x40e660*/
  if ( v36 ) /*0x40e66a*/
    sub_4316E0(v36); /*0x40e66e*/
  if ( MEMORY[0xB33A04] ) /*0x40e67b*/
    ((void (__thiscall *)(FileFinder *, const char *))MEMORY[0xB33A04]->vtbl->Unk_02)(MEMORY[0xB33A04], "Data"); /*0x40e687*/
  v37 = (BSTexturePalette *)FormHeapAlloc(0x10u); /*0x40e68b*/
  if ( v37 ) /*0x40e695*/
    v38 = BSTexturePalette::BSTexturePalette(v37, 0x3F1u); /*0x40e69e*/
  else
    v38 = 0; /*0x40e6a5*/
  NiSmartPointer_Set__((Ni2DBuffer **)&unk_B35300, (Ni2DBuffer *)v38); /*0x40e6ad*/
  unk_B3FAC8 = unk_B35300; /*0x40e6b8*/
  v39 = 0; /*0x40e6be*/
  do /*0x40e6d1*/
  {
    v40 = byte_A30FEC[v39]; /*0x40e6c0*/
    byte_B07D2C[v39++] = v40; /*0x40e6c6*/
  }
  while ( v40 ); /*0x40e6d1*/
  if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))RegSettingCollection[5])(&RegSettingCollection, 0) ) /*0x40e6e2*/
  {
    ((void (__thiscall *)(void ***))RegSettingCollection[8])(&RegSettingCollection); /*0x40e6f6*/
    ((void (__thiscall *)(void ***))RegSettingCollection[6])(&RegSettingCollection); /*0x40e706*/
  }
  v41 = 0; /*0x40e708*/
  do /*0x40e722*/
  {
    v42 = FileName[v41]; /*0x40e710*/
    byte_B07BF4[v41++] = v42; /*0x40e717*/
  }
  while ( v42 ); /*0x40e722*/
  if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))INISettingCollection[5])(&INISettingCollection, 0) ) /*0x40e733*/
  {
    ((void (__thiscall *)(void ***))INISettingCollection[8])(&INISettingCollection); /*0x40e747*/
    ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection); /*0x40e757*/
  }
  sub_53AC60(); /*0x40e759*/
  sub_42F610(0, (int)v30); /*0x40e75e*/
  WndClass.style = 3; /*0x40e766*/
  WndClass.lpfnWndProc = sub_4060F0; /*0x40e76e*/
  WndClass.cbClsExtra = 0; /*0x40e776*/
  WndClass.cbWndExtra = 0; /*0x40e77a*/
  WndClass.hInstance = hInstance; /*0x40e77e*/
  WndClass.hIcon = LoadIconA(hInstance, (LPCSTR)0x65); /*0x40e78a*/
  WndClass.hCursor = 0; /*0x40e78e*/
  WndClass.hbrBackground = (HBRUSH)GetStockObject(4); /*0x40e7a3*/
  WndClass.lpszClassName = lpClassName; /*0x40e7aa*/
  WndClass.lpszMenuName = 0; /*0x40e7b1*/
  RegisterClassA(&WndClass); /*0x40e7b8*/
  Rect.left = 0; /*0x40e7c9*/
  Rect.top = 0; /*0x40e7cd*/
  Rect.right = 0x140; /*0x40e7d1*/
  Rect.bottom = 0xF0; /*0x40e7d9*/
  AdjustWindowRect(&Rect, 0xCA0000u, 0); /*0x40e7e1*/
  Window = CreateWindowExA( /*0x40e814*/
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
  v44 = (_BYTE *)FormHeapAlloc(0x28u); /*0x40e816*/
  if ( v44 ) /*0x40e820*/
    v45 = (OSGlobals *)InitializeOSGlobals(v44, (int)Window, (IDirectInputDevice8 *)hInstance); /*0x40e826*/
  else
    v45 = 0; /*0x40e82d*/
  MEMORY[0xB33398] = v45; /*0x40e831*/
  v46 = (_DWORD *)FormHeapAlloc(8u); /*0x40e836*/
  if ( v46 ) /*0x40e840*/
    v47 = sub_572DC0(v46); /*0x40e844*/
  else
    v47 = 0; /*0x40e84b*/
  unk_B3A6B0 = v47; /*0x40e852*/
  PrintToLog___("Initializing Renderer..."); /*0x40e857*/
  sub_4052F0((int)MEMORY[0xB33398]); /*0x40e865*/
  OB_NiDX9SourceTextureData_s_persistentFastPathEnabled_010201A0 = 1; /*0x40e876*/
  NiDX9Renderer::AddLostDeviceCallbak(renderer, (int)Cmd_AddAchievement_PC_ReturnTrueNoOp, 0); /*0x40e87d*/
  NiRenderer_RegisterOnDeviceLostCallback(renderer, (int)sub_405440, 0); /*0x40e88e*/
  FaceGenManager_EnsureInitialized(); /*0x40e893*/
  PrintToLog___("Initializing Shader System..."); /*0x40e89d*/
  unk_B42E8C = (int (__cdecl *)(_DWORD, _DWORD))sub_405150; /*0x40e8c1*/
  MEMORY[0xB42F3E] = bDoImageSpaceEffect;       // Initialize renderer global B42F3E (OB_RendererGlobalState_010201A0+0xA5) from bDoImageSpaceEffect loaded at 0x40E8A8. This is Hair's first conditional base-builder gate. /*0x40e8cb*/
  MEMORY[0xB42EBC] = unk_B35300; /*0x40e8d4*/
  unk_B42D78 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_405290; /*0x40e8e0*/
  sub_7B4870(flt_B06D8C, flt_B06D94, flt_B06D9C); /*0x40e8ed*/
  MEMORY[0xB430A8] = OB_INI_fLocalTreeMipMapLODBias_SpeedTree_010201A0; /*0x40e905*/
  MEMORY[0xB430A4] = OB_INI_fLODTreeMipMapLODBias_SpeedTree_010201A0; /*0x40e91a*/
  MEMORY[0xB430AE] = bUseHardDriveCache;        // [Verified] WinMain tests RendererGlobalState+0x1D7 at entry and selects distinct HDR or non-HDR renderer parameter sets. This corroborates the HDR-mode use also visible in shader-name construction at sub_801210. /*0x40e927*/
  MEMORY[0xB43077] = bDisplayLODLand; /*0x40e92d*/
  unk_B42D40 = byte_B06D1C; /*0x40e932*/
  if ( MEMORY[0xB43070] ) /*0x40e938*/
  {
    flt_B2C2BC = flt_B06E24; /*0x40e94a*/
    flt_B2C2C0 = flt_B06E2C; /*0x40e961*/
    dword_B2C1E4 = dword_B06DEC; /*0x40e967*/
    unk_B43220 = dword_B06DF4; /*0x40e973*/
    unk_B431F8 = flt_B06DFC; /*0x40e978*/
    unk_B43224 = dword_B06E6C; /*0x40e97e*/
    unk_B431FC = flt_B06E74; /*0x40e98a*/
    unk_B431E8 = flt_B06E04; /*0x40e996*/
    unk_B431EC = flt_B06E7C; /*0x40e9a2*/
    unk_B431F0 = flt_B06E0C; /*0x40e9ae*/
    unk_B431F4 = flt_B06E84; /*0x40e9ba*/
    unk_B43200 = flt_B06E3C; /*0x40e9c6*/
    unk_B43204 = flt_B06E8C; /*0x40e9d2*/
    unk_B43208 = flt_B06E44; /*0x40e9de*/
    unk_B4320C = flt_B06E94; /*0x40e9ea*/
    unk_B43210 = flt_B06E5C; /*0x40e9f6*/
    unk_B43214 = flt_B06E9C; /*0x40ea02*/
    unk_B43218 = flt_B06E64; /*0x40ea0e*/
    unk_B4321C = flt_B06EA4; /*0x40ea1a*/
    unk_B43154 = flt_B06E14; /*0x40ea26*/
    unk_B43158 = flt_B06E1C; /*0x40ea32*/
  }
  else
  {
    sub_7B4830(dword_B06D3C, dword_B06D44, flt_B06D4C, flt_B06D5C, flt_B06D64, dword_B06D54); /*0x40ea6e*/
    unk_B43154 = flt_B06D6C; /*0x40ea79*/
    unk_B43158 = flt_B06D74; /*0x40ea88*/
    flt_B2C2BC = flt_B06D7C; /*0x40ea94*/
    flt_B2C2C0 = flt_B06D84; /*0x40eaa0*/
  }
  sub_406950(); /*0x40eaac*/
  v48 = MEMORY[0xB33398]; /*0x40eab1*/
  input = MEMORY[0xB33398]->input; /*0x40eab7*/
  p_input = &MEMORY[0xB33398]->input; /*0x40eabc*/
  if ( input ) /*0x40eabf*/
  {
    InputGlobals::FlushKeyboardBuffer(input); /*0x40eac1*/
    InputGlobals::PollAndUpdateInputState(*p_input); /*0x40eac8*/
  }
  sub_47D0F0(&MEMORY[0xB33E90]); /*0x40ead2*/
  v48->unk02 = 1; /*0x40ead7*/
  sub_410310(); /*0x40eadb*/
  sub_410E40((DWORD (*)(LPVOID))lpParameter, 0, 0xFFFFFFFF); /*0x40eaea*/
  unk_B39B84 = (int)g_WorldSceneReceiverRoot->camera; /*0x40eafa*/
  unk_B39E00 = (int)g_WorldSceneReceiverRoot->camera; /*0x40eb06*/
  TravelPath_EnsureDoorLinkMapInitialized(); /*0x40eb0c*/
  GetPathBuilderSingleton(); /*0x40eb11*/
  sub_578CC0(1); /*0x40eb18*/
  OSGlobals_Initialize___(v9, v10, (NiAVObject *)g_WorldSceneReceiverRoot); /*0x40eb2c*/
  BSTreeManager_Create(0); /*0x40eb32*/
  v113 = 2048.0; /*0x40eb43*/
  v114 = 2048.0; /*0x40eb47*/
  v51 = 128.0; /*0x40eb4e*/
  v115 = 128.0; /*0x40eb54*/
  sub_4431F0(MEMORY[0xB333A0], v9, 0, v10, 128.0, *(TESWorldSpace **)(g_TESDataHandler + 0xC)); /*0x40eb62*/
  sub_662EE0(); /*0x40eb6d*/
  ArchiveManager_DisacrdAllBSARetainedFilenames(); /*0x40eb72*/
  *(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x185) = 1; /*0x40eb8b*/
  PrintToLog___("Initializing Actor Locations..."); /*0x40eb92*/
  sub_675310(&MEMORY[0xB3BD00].middleHighActors, v9, v10, 128.0); /*0x40eb9f*/
  sub_447300((Sky **)g_TESDataHandler); /*0x40ebaa*/
  PrintToLog___("Loading initial area..."); /*0x40ebb4*/
  if ( strlen(*(const char **)off_B02CE0) ) /*0x40ebc4*/
  {
    v52 = sub_4476B0((_DWORD *)g_TESDataHandler, *(char **)off_B02CE0); /*0x40ebe4*/
    if ( v52 ) /*0x40ebe8*/
      goto LABEL_73; /*0x40ebe8*/
    v11 = 0; /*0x40ec04*/
    v111 = 0; /*0x40ec07*/
    v112 = 0; /*0x40ec0b*/
    v53 = (TESWorldSpace *)sub_4478B0((int *)g_TESDataHandler, 0, 0, *(char **)off_B02CE0, &v111, &v112); /*0x40ec0f*/
    p_input = (InputGlobal **)v53; /*0x40ec14*/
    if ( v53 ) /*0x40ec18*/
    {
      sub_4431F0(MEMORY[0xB333A0], v9, 0, v10, 128.0, v53); /*0x40ec25*/
      v10 = (double)(v111 << 0xC) + 2048.0; /*0x40ec56*/
      v113 = v10; /*0x40ec59*/
      v114 = (double)(v112 << 0xC) + 2048.0; /*0x40ec61*/
      v115 = 0.0; /*0x40ec67*/
      sub_445A10((unsigned int)MEMORY[0xB333A0], (int)p_input, v8, v9, v10, 0.0, v4, v7, v5, v6, &v113); /*0x40ec6b*/
      sub_447740((TESWorldSpace **)g_TESDataHandler, v111, v112, (TESWorldSpace *)p_input, 0); /*0x40ec82*/
      goto LABEL_89; /*0x40ec87*/
    }
  }
  else
  {
    if ( !strlen(off_B02CF8) || !strlen(off_B02D00) ) /*0x40ecad*/
      goto LABEL_89; /*0x40ecbb*/
    v54 = j__atol(off_B02CF8); /*0x40ecce*/
    v55 = j__atol(off_B02D00); /*0x40ecd0*/
    p_input = *(InputGlobal ***)(g_TESDataHandler + 0xC); /*0x40ecdb*/
    v56 = (TESObjectREFR **)(g_TESDataHandler + 0xC); /*0x40ecde*/
    v109 = v55; /*0x40ece6*/
    if ( g_TESDataHandler != 0xFFFFFFF4 ) /*0x40ecea*/
    {
      while ( v56[1] || *v56 ) /*0x40ecf7*/
      {
        v11 = *v56; /*0x40ecf9*/
        v97 = (unsigned __int8 *)right; /*0x40ed03*/
        v57 = (unsigned __int8 *)(*v56)->vtbl->super.GetEditorName(*v56); /*0x40ed0c*/
        if ( !CRT_StricmpLocaleDispatch(v57, v97) ) /*0x40ed19*/
        {
          p_input = (InputGlobal **)v11; /*0x40ed26*/
          break; /*0x40ed26*/
        }
        v56 = (TESObjectREFR **)v56[1]; /*0x40ed1b*/
        if ( !v56 ) /*0x40ed20*/
          break; /*0x40ed20*/
        v11 = 0; /*0x40ed22*/
      }
    }
    if ( !p_input ) /*0x40ed2a*/
      goto LABEL_76; /*0x40ed2a*/
    v11 = (TESObjectREFR *)v109; /*0x40ed30*/
    v52 = TESWorldSpace_LoadExteriorCellAtCoord((TESWorldSpace *)p_input, v9, v10, 128.0, v54, v109); /*0x40ed3d*/
    if ( v52 ) /*0x40ed41*/
      goto LABEL_73; /*0x40ed41*/
    v52 = sub_447740((TESWorldSpace **)g_TESDataHandler, v54, v109, (TESWorldSpace *)p_input, 1); /*0x40ed53*/
    v11 = 0; /*0x40ed55*/
  }
  if ( !v52 ) /*0x40ed59*/
  {
LABEL_76:
    if ( *(_DWORD *)off_B02CE0 && **(_BYTE **)off_B02CE0 ) /*0x40eddb*/
    {
      PrintError("Could not find starting cell '%s'.", *(const char **)off_B02CE0); /*0x40ede6*/
    }
    else if ( off_B02CF8 && off_B02D00 && *off_B02CF8 && *off_B02D00 ) /*0x40ee09*/
    {
      if ( right && *right ) /*0x40ee17*/
        PrintError("Could not find starting cell (%s, %s) in worldspace '%s'.", off_B02CF8, off_B02D00, right); /*0x40ee24*/
      else
        PrintError("Could not find starting cell (%s, %s) in default Tamriel worldspace", off_B02CF8, off_B02D00); /*0x40ee35*/
    }
    else
    {
      PrintError("Could not find starting cell for INI data."); /*0x40ee44*/
    }
    goto LABEL_88; /*0x40edee*/
  }
LABEL_73:
  if ( TESObjectCELL_IsInterior((TESObjectCELL *)v52) ) /*0x40ed5d*/
  {
    sub_4455E0( /*0x40ed72*/
      (unsigned int)MEMORY[0xB333A0],
      128.0,
      v8,
      v9,
      v10,
      v4,
      v7,
      v5,
      v6,
      (int)p_input,
      (TESObjectREFR *)v52,
      &v113);
  }
  else
  {
    WorldSpace = TESObjectCELL_GetWorldSpace((TESObjectCELL *)v52); /*0x40ed7e*/
    sub_4431F0(MEMORY[0xB333A0], v9, (char)v11, v10, 128.0, WorldSpace); /*0x40ed8a*/
    v113 = (double)(TESObjectCELL_GetXCoordinate((TESObjectCELL *)v52) << 0xC) + 2048.0; /*0x40eda9*/
    v114 = (double)(TESObjectCELL_GetYCoordinate((TESObjectCELL *)v52) << 0xC) + 2048.0; /*0x40edc3*/
    v51 = 0.0; /*0x40edc7*/
    v115 = 0.0; /*0x40edc9*/
  }
LABEL_88:
  sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFF); /*0x40ee4c*/
  v59 = sub_444EC0(MEMORY[0xB333A0], v11, v51, v8, v9, v10, v7, v6, v5, v4, &v113, 1); /*0x40ee66*/
  sub_482310((int)MEMORY[0xB333A0]->gridCellArray, v59); /*0x40ee73*/
LABEL_89:
  PrintToLog___("Placing player..."); /*0x40ee7a*/
  currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x40ee8a*/
  v117 = *(_QWORD *)&g_zeroNiPoint3; /*0x40ee98*/
  v118 = MEMORY[0xB3F9B0]; /*0x40eeab*/
  if ( currentInteriorCell /*0x40eec6*/
    || (currentInteriorCell = GetGridEntry(
                                MEMORY[0xB333A0]->gridCellArray,
                                (unsigned int)uGridsToLoad >> 1,
                                (unsigned int)uGridsToLoad >> 1)->cell) != 0 )
  {
    sub_4D5D70(currentInteriorCell, v9, v10, &v113, &v117); /*0x40eed4*/
  }
  v61 = v118; /*0x40eedf*/
  ((void (__stdcall *)(_DWORD))reference->vtbl->super.super.Unk_7A)(LODWORD(v118)); /*0x40eeef*/
  ((void (__thiscall *)(PlayerCharacter *, float *))reference->vtbl->super.super.Unk_73)(reference, &v113); /*0x40ef04*/
  if ( currentInteriorCell ) /*0x40ef08*/
  {
    TESObjectCELL_AddReference(currentInteriorCell, v9, v10, v61, (TESObjectREFR *)reference); /*0x40ef12*/
    sub_434020(MEMORY[0xB33A10], v9, v10, v61, 5); /*0x40ef1f*/
    PlayerNode = (NiAVObject *)PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x40ef2b*/
    NiAVObject_InitializePropertyState(PlayerNode); /*0x40ef32*/
    v98 = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x40ef43*/
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x40ef45*/
    ShadowSceneNodeAddShadowCaster(ShadowSceneNode, (volatile LONG *)v98); /*0x40ef4f*/
  }
  sub_4D70E0((TESObjectREFR *)reference, v10, v61); /*0x40ef5a*/
  if ( g_WorldSceneReceiverRoot->super.children.end ) /*0x40ef64*/
    vtbl = (float *)g_WorldSceneReceiverRoot->super.children.data->vtbl; /*0x40ef77*/
  else
    vtbl = 0; /*0x40ef6d*/
  vtbl[0x15] = v113; /*0x40ef7d*/
  vtbl[0x16] = v114; /*0x40ef84*/
  vtbl[0x17] = v115; /*0x40ef8b*/
  if ( g_WorldSceneReceiverRoot->super.children.end ) /*0x40ef93*/
    v65 = g_WorldSceneReceiverRoot->super.children.data->vtbl; /*0x40efa6*/
  else
    v65 = 0; /*0x40ef9c*/
  qmemcpy(&v65->super.DumpAttributes, sub_4D7AF0((float *)reference, v121), 0x24u); /*0x40efc5*/
  if ( g_WorldSceneReceiverRoot->super.children.end ) /*0x40efcc*/
    v66 = (NiAVObject *)g_WorldSceneReceiverRoot->super.children.data->vtbl; /*0x40efdf*/
  else
    v66 = 0; /*0x40efd5*/
  v67 = 0.0; /*0x40efe1*/
  NiAVObject_UpdateNiAVObject(v66, 0.0, 1); /*0x40efe9*/
  sub_578CD0(v9, v10); /*0x40efee*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x40effa*/
  p_modlist = &ActorBaseForm[3].member.modlist; /*0x40f001*/
  if ( ActorBaseForm != (TESForm *)0xFFFFFFA8 ) /*0x40f004*/
  {
    while ( p_modlist->next || p_modlist->data ) /*0x40f00d*/
    {
      data = p_modlist->data; /*0x40f00f*/
      if ( EffectItemList_GetSchoolAV() == 0x19 ) /*0x40f01c*/
      {
        sub_664850(reference, 0); /*0x40f02e*/
        if ( data ) /*0x40f035*/
          p_unkFile018 = (char *)&data->unkFile018; /*0x40f037*/
        else
          p_unkFile018 = 0; /*0x40f03c*/
        PlayerCharacter_SetCurrentMagicItem(reference, p_unkFile018); /*0x40f045*/
        break; /*0x40f045*/
      }
      p_modlist = p_modlist->next; /*0x40f01e*/
      if ( !p_modlist ) /*0x40f023*/
        break; /*0x40f023*/
    }
  }
  sub_6632A0(reference, 0); /*0x40f04a*/
  MEMORY[0xB33398]->unk03 = 1; /*0x40f05a*/
  sub_42BA50(); /*0x40f05e*/
  if ( Shared_GetDwordAtOffset40((TESObjectREFR *)reference) ) /*0x40f069*/
  {
    sub_40FDD0(); /*0x40f0db*/
  }
  else
  {
    sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFF); /*0x40f07a*/
    sub_440AF0((int)MEMORY[0xB333A0], v9, v10, 0, 0, 0, 0); /*0x40f088*/
    MainMenu_Open(0, v10, 0.0, v9, v8); /*0x40f08d*/
    sub_40FDD0(); /*0x40f092*/
    NiRenderer_BeginScene1(kClear_ALL, 0); /*0x40f09a*/
    sub_7D7210(); /*0x40f09f*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40f0a5*/
    sub_5B5AC0(); /*0x40f0aa*/
    sub_410BA0(*(const char **)off_B0308C, 1, 1, 0, 0, 0.0, 0); /*0x40f0be*/
    sub_5B5C90(); /*0x40f0c3*/
    unk_B33430 = 0; /*0x40f0ca*/
    Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x40f0d1*/
  }
  PrintToLog___("Begin Idle loop..."); /*0x40f0e5*/
  memset(&Msg, 0, sizeof(Msg)); /*0x40f107*/
  v110 = MEMORY[0xB33398]->window; /*0x40f126*/
  while ( 1 ) /*0x40f130*/
  {
    while ( PeekMessageA((LPMSG)&Msg, 0, 0, 0, 1u) ) /*0x40f13d*/
    {
      TranslateMessage((const MSG *)&Msg); /*0x40f148*/
      DispatchMessageA((const MSG *)&Msg); /*0x40f14f*/
    }
    if ( GetActiveWindow() != v110 && !MEMORY[0xB333A0]->unk51 && !MEMORY[0xB333A0]->unk52 && !unk_B333F0 ) /*0x40f188*/
      goto LABEL_123; /*0x40f188*/
    if ( (int)renderer->member.device->lpVtbl->TestCooperativeLevel(renderer->member.device) < 0 ) /*0x40f1ad*/
    {
      v72 = renderer; /*0x40f1b3*/
      p_SceneState2 = &renderer->member.super.SceneState2; /*0x40f1c0*/
      if ( !renderer->member.super.SceneState2 && !renderer->member.super.SceneState1 ) /*0x40f1c8*/
      {
        if ( ((unsigned __int8 (*)(void))renderer->__vftable->super.BeginScene)() ) /*0x40f1d9*/
          *p_SceneState2 = 1; /*0x40f1df*/
        v72 = renderer; /*0x40f1e5*/
      }
      v74 = &v72->member.super.SceneState2; /*0x40f1f2*/
      if ( v72->member.super.SceneState2 == 1 && !v72->member.super.SceneState1 ) /*0x40f1fa*/
      {
        if ( v72->__vftable->super.EndScene((NiRenderer *)v72) ) /*0x40f20b*/
          *v74 = 0; /*0x40f211*/
        v72 = renderer; /*0x40f217*/
      }
      if ( (int)v72->member.device->lpVtbl->TestCooperativeLevel(v72->member.device) >= 0 ) /*0x40f22d*/
      {
        if ( MEMORY[0xB333A0]->waterManager ) /*0x40f235*/
        {
          if ( byte_B0703C ) /*0x40f242*/
          {
            if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x40f24a*/
              v67 = WaterSurfaceLoop(*(float *)&MEMORY[0xB333A0]->waterManager, v67); /*0x40f25b*/
          }
        }
      }
LABEL_123:
      Sleep(0x32u); /*0x40f18a*/
      goto LABEL_142; /*0x40f192*/
    }
    sub_40D800((InputGlobal **)MEMORY[0xB33398], v4, v5, v6, v7, v8, v9, v10); /*0x40f270*/
LABEL_142:
    if ( MEMORY[0xB33398]->quitGame ) /*0x40f27a*/
      break; /*0x40f27a*/
    if ( MEMORY[0xB33398]->exitToMainMenu ) /*0x40f283*/
    {
      SoundManager_StopFilterGraph((_BYTE *)MEMORY[0xB33398]->sound); /*0x40f290*/
      if ( Shared_GetDwordAtOffset40((TESObjectREFR *)reference) ) /*0x40f29b*/
      {
        v99 = (TESObjectREFR *)reference; /*0x40f2aa*/
        ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x40f2ab*/
        TESObjectCELL_RemoveReference(ParentCell, v99); /*0x40f2b2*/
      }
      v76 = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x40f2bf*/
      v77 = v76; /*0x40f2c4*/
      if ( v76 ) /*0x40f2c8*/
      {
        v78 = (int)v76->vtbl->super.super.Unk_02((NiObject *)v76); /*0x40f2d1*/
        if ( v78 ) /*0x40f2d5*/
        {
          v79 = *(_DWORD *)(v78 + 0x1C); /*0x40f2d7*/
          if ( v79 ) /*0x40f2dc*/
          {
            (*(void (__thiscall **)(int, signed int *, NiNode *))(*(_DWORD *)v79 + 0x88))(v79, &v111, v77); /*0x40f2ec*/
            if ( v111 ) /*0x40f2f4*/
            {
              v80 = (void (__thiscall ***)(_DWORD, int))v111; /*0x40f2f6*/
              if ( !InterlockedDecrement((volatile LONG *)(v111 + 4)) ) /*0x40f2fc*/
                (**v80)(v80, 1); /*0x40f312*/
            }
          }
        }
      }
      v81 = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x40f321*/
      if ( v81 ) /*0x40f325*/
      {
        v82 = (int)v81->vtbl->super.super.Unk_02((NiObject *)v81); /*0x40f32e*/
        if ( v82 ) /*0x40f332*/
        {
          v83 = *(_DWORD *)(v82 + 0x1C); /*0x40f334*/
          if ( v83 ) /*0x40f339*/
          {
            (*(void (__thiscall **)(int, int *, NiNode *))(*(_DWORD *)v83 + 0x88))(v83, &v112, v81); /*0x40f349*/
            if ( v112 ) /*0x40f351*/
            {
              v84 = (void (__thiscall ***)(_DWORD, int))v112; /*0x40f353*/
              if ( !InterlockedDecrement((volatile LONG *)(v112 + 4)) ) /*0x40f359*/
                (**v84)(v84, 1); /*0x40f36f*/
            }
          }
        }
      }
      sub_442630(MEMORY[0xB333A0], 0, 0); /*0x40f37b*/
      MEMORY[0xB333A0]->extXCoord = 0x7FFFFFFF; /*0x40f38b*/
      MEMORY[0xB333A0]->extYCoord = 0x7FFFFFFF; /*0x40f394*/
      v85 = sub_4533F0(g_TESSaveLoadGame, (int)reference, 0); /*0x40f3b2*/
      sub_45A530(g_TESSaveLoadGame, 1); /*0x40f3b4*/
      TESSaveLoadGame_ReconcileExistingChanges((char *)g_TESSaveLoadGame, (int)PeekMessageA, v9, v10, v67, 0); /*0x40f3c1*/
      ((void (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Set3D)(reference, 0); /*0x40f3d6*/
      v86 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x40f3e6*/
      TESNPC_ClearFaceGenNodes(v86); /*0x40f3ea*/
      sub_5E9690((int *)reference); /*0x40f3f5*/
      process = reference->super.super.super.process; /*0x40f400*/
      if ( process ) /*0x40f405*/
        ((void (__thiscall *)(LowProcess *, _DWORD))process->SetUnk184)(process, 0); /*0x40f411*/
      sub_663340(reference, v9, v10, (int)PeekMessageA, v85); /*0x40f41a*/
      sub_462080((char *)g_TESSaveLoadGame); /*0x40f425*/
      TESSaveLoadGame_ProcessDeferredDeletions((BSSimpleList_VoidPtr *)g_TESSaveLoadGame); /*0x40f430*/
      sub_45A530(g_TESSaveLoadGame, 0); /*0x40f43d*/
      sub_45C320((BSSimpleList_VoidPtr *)g_TESSaveLoadGame, (int)TranslateMessage, (int)DispatchMessageA, v9, v10, v67); /*0x40f448*/
      sub_675310(&MEMORY[0xB3BD00].middleHighActors, v9, v10, v67); /*0x40f452*/
      sub_447300((Sky **)g_TESDataHandler); /*0x40f45d*/
      sub_57CCC0(0); /*0x40f464*/
      sub_5B5AC0(); /*0x40f46c*/
      MainMenu_Open((char)DispatchMessageA, v10, v67, v9, v8); /*0x40f471*/
      v88 = MEMORY[0xB33398]; /*0x40f476*/
      MEMORY[0xB33398]->exitToMainMenu = 0; /*0x40f47b*/
      v88->unk04 = 0; /*0x40f47f*/
    }
  }
  MEMORY[0xB33398]->unk03 = 0; /*0x40f488*/
  if ( g_NiParallelUpdateTaskManager ) /*0x40f493*/
    NiParallelUpdateTaskManager_DestroyGlobal(); /*0x40f495*/
  sub_43E0F0(MEMORY[0xB33A1C]); /*0x40f4a0*/
  sub_410B80(); /*0x40f4a5*/
  TravelPath_ClearAllDoorLinkMaps(); /*0x40f4aa*/
  sub_682430(); /*0x40f4af*/
  sub_6844D0(); /*0x40f4b4*/
  sub_684710(); /*0x40f4b9*/
  sub_405B00(); /*0x40f4be*/
  Interface3dScenegraph_Destructor(); /*0x40f4c3*/
  sub_67CF00(&MEMORY[0xB3BDB0]); /*0x40f4cd*/
  sub_578EF0(v9, v10, v67); /*0x40f4d2*/
  sub_5C0FC0(); /*0x40f4d7*/
  if ( MEMORY[0xB333A0]->sky ) /*0x40f4e2*/
    sub_53FB30(); /*0x40f4e9*/
  sub_6AC330((_DWORD *)MEMORY[0xB33398]->sound, 0xFFFFFFFF); /*0x40f4f9*/
  sub_6F96B0(); /*0x40f4fe*/
  v89 = MEMORY[0xB333A0]; /*0x40f50d*/
  if ( MEMORY[0xB333A0] ) /*0x40f50f*/
  {
    TES_destr(MEMORY[0xB333A0], v9, v10, v67); /*0x40f511*/
    FormHeapFree((unsigned int)v89); /*0x40f517*/
  }
  sound = MEMORY[0xB33398]->sound; /*0x40f525*/
  p_sound = &MEMORY[0xB33398]->sound; /*0x40f528*/
  if ( sound ) /*0x40f52d*/
  {
    sub_6AC020((int)sound, v10, v67); /*0x40f531*/
    FormHeapFree((unsigned int)sound); /*0x40f537*/
  }
  *p_sound = 0; /*0x40f53f*/
  sub_5535D0(); /*0x40f541*/
  BSTreeManager_Destroy(); /*0x40f546*/
  EffectSettingCollection_Clear((NiTMap_TESCELL *)&MEMORY[0xB33508]); /*0x40f550*/
  ActiveEffect_Base_ClearCreateFuncTable(); /*0x40f555*/
  v92 = unk_B3A6B0; /*0x40f562*/
  if ( unk_B3A6B0 ) /*0x40f564*/
  {
    Shared_NoOpVirtual_60D0A0(unk_B3A6B0); /*0x40f566*/
    FormHeapFree((unsigned int)v92); /*0x40f56c*/
  }
  v93 = MEMORY[0xB33398]; /*0x40f57c*/
  if ( MEMORY[0xB33398] ) /*0x40f57e*/
  {
    sub_40C350((InputGlobal **)MEMORY[0xB33398]); /*0x40f580*/
    FormHeapFree((unsigned int)v93); /*0x40f586*/
  }
  MEMORY[0xB33398] = 0; /*0x40f598*/
  sub_40C180(&INISettingCollection, byte_B07BF4); /*0x40f59e*/
  sub_53AD60(); /*0x40f5a3*/
  OB_NiDX9Renderer_UnregisterDeviceLostCallback_010201A0(renderer, (int)sub_405440); /*0x40f5b3*/
  sub_40C2F0(renderer, (int)Cmd_AddAchievement_PC_ReturnTrueNoOp); /*0x40f5c3*/
  sub_497B50(1); /*0x40f5ca*/
  if ( MEMORY[0xB33A04] ) /*0x40f5da*/
  {
    v94 = MEMORY[0xB33A04]; /*0x40f5dc*/
    sub_431770(MEMORY[0xB33A04]); /*0x40f5de*/
    FormHeapFree((unsigned int)v94); /*0x40f5e4*/
  }
  v95 = (void (__thiscall ***)(_DWORD, int))unk_B35300; /*0x40f5ec*/
  if ( unk_B35300 ) /*0x40f5f4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk_B35300 + 4)) ) /*0x40f5fa*/
    {
      if ( v95 ) /*0x40f606*/
        (**v95)(v95, 1); /*0x40f610*/
    }
    unk_B35300 = 0; /*0x40f612*/
  }
  sub_747BE0(); /*0x40f618*/
  return 0; /*0x40f61d*/
}
