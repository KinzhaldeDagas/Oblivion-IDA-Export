int __cdecl CreateWindowAndInitialize(HWND a1, HINSTANCE a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  HWND v5; // ecx
  HWND Window; // eax
  int v7; // edx
  int v8; // ecx
  DWORD ClassLongA; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  NiDX9Renderer *v13; // esi
  int v14; // eax
  void (__thiscall ***v15)(_DWORD, int); // edi
  _DWORD *v16; // eax
  BSShaderAccumulator *v17; // eax
  NiDX9Renderer *v18; // ecx
  int v19; // eax
  int v20; // eax
  char v21; // cl
  NiDevImageConverter *v22; // eax
  NiDevImageConverter *v23; // eax
  unsigned int *Singleton; // eax
  unsigned int v25; // esi
  int v26; // eax
  int v27; // eax
  char v28; // cl
  int v30; // ecx
  int pD3DCaps9; // ebp
  int v32; // eax
  char v33; // cl
  unsigned __int16 maxPS20Instructions; // si
  const char *v35; // edi
  const char *v36; // ebx
  IDirect3D9 *v37; // eax
  HRESULT (__stdcall *CheckDeviceFormat)(IDirect3D9 *, UINT, D3DDEVTYPE, D3DFORMAT, DWORD, D3DRESOURCETYPE, D3DFORMAT); // edx
  int v39; // eax
  char v40; // al
  int v41; // eax
  HMODULE LibraryA; // eax
  HMODULE v43; // esi
  int (*ProcAddress)(void); // eax
  HMODULE v45; // eax
  HMODULE v46; // edi
  FARPROC v47; // esi
  double v48; // st7
  int i; // esi
  D3DFORMAT v50; // eax
  const char *ShaderVersionName; // edi
  FILE *v52; // eax
  FILE *v53; // esi
  const char *VertexShaderTargetName; // eax
  const char *PixelShaderTargetName; // eax
  const char *v56; // eax
  const char *v57; // eax
  const char *v58; // eax
  const char *v59; // eax
  const char *v60; // eax
  const char *v61; // eax
  const char *v62; // eax
  const char *v63; // eax
  const char *v64; // eax
  const char *v65; // eax
  const char *v66; // eax
  const char *v67; // eax
  const char *v68; // eax
  const char *v69; // eax
  const char *v70; // eax
  int v71; // eax
  int ShaderProgramPackageIndex; // eax
  double v73; // st7
  unsigned __int8 v74; // al
  unsigned __int8 v75; // cl
  int v76; // edx
  double v77; // st7
  char v78; // al
  double v79; // st7
  bool v80; // sf
  bool v81; // of
  char v82; // cl
  double v83; // st7
  unsigned int v84; // ecx
  double v85; // st7
  int v86; // edx
  double v87; // st7
  unsigned int v88; // eax
  size_t v89; // [esp+AAh] [ebp-150h]
  float v90; // [esp+AAh] [ebp-150h]
  size_t v91; // [esp+AAh] [ebp-150h]
  char v92; // [esp+C5h] [ebp-135h]
  int v93; // [esp+C6h] [ebp-134h]
  int v94; // [esp+CAh] [ebp-130h] BYREF
  _DWORD v95[2]; // [esp+CEh] [ebp-12Ch] BYREF
  int v96; // [esp+D6h] [ebp-124h] BYREF
  int v97; // [esp+DAh] [ebp-120h]
  int v98; // [esp+DEh] [ebp-11Ch]
  const char *v99; // [esp+E2h] [ebp-118h]
  char Filename[260]; // [esp+E6h] [ebp-114h] BYREF
  int v101; // [esp+1F6h] [ebp-4h]

  v2 = dword_B06C64; /*0x498389*/
  *(_DWORD *)&MEMORY[0xB33E90][0x111C] = a1; /*0x49838f*/
  v3 = dword_B06F6C; /*0x498394*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1120] = a2; /*0x498399*/
  v4 = dword_B06C5C; /*0x49839f*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1110] = v3; /*0x4983a7*/
  nWidth = v4; /*0x4983ac*/
  nHeight = v2; /*0x4983b2*/
  if ( !sub_4980D0(1) ) /*0x4983c7*/
  {
LABEL_18:
    v14 = *(_DWORD *)&MEMORY[0xB33E90][0x1248]; /*0x498566*/
    goto LABEL_19; /*0x498566*/
  }
  v5 = *(HWND *)&MEMORY[0xB33E90][0x111C]; /*0x4983d3*/
  if ( g_bFullScreen ) /*0x4983cd*/
  {
    dword_B06C30 |= 4u; /*0x4983db*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1118] = v5; /*0x4983e2*/
  }
  else
  {
    Window = CreateWindowExA( /*0x498413*/
               0,
               lpClassName,
               0,
               0x50000000,
               0,
               0,
               nWidth,
               nHeight,
               v5,
               0,
               *(HINSTANCE *)&MEMORY[0xB33E90][0x1120],
               0);
    v7 = nWidth; /*0x498419*/
    v8 = nHeight; /*0x49841f*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1118] = Window; /*0x498428*/
    v95[1] = 0; /*0x49842d*/
    v96 = 0; /*0x498431*/
    v97 = v7; /*0x498435*/
    v98 = v8; /*0x498439*/
    ClassLongA = GetClassLongA(Window, 0xFFFFFFF8); /*0x49843d*/
    v10 = ((int (__stdcall *)(_DWORD, unsigned int, DWORD))GetWindowLongA)( /*0x49844d*/
            *(_DWORD *)&MEMORY[0xB33E90][0x111C],
            0xFFFFFFF0,
            ClassLongA);
    ((void (__stdcall *)(int *, int))AdjustWindowRect)(&v96, v10); /*0x498459*/
    SetWindowPos(*(HWND *)&MEMORY[0xB33E90][0x111C], 0, X, Y, v97, v98 - v96, 0x40); /*0x498488*/
    v5 = *(HWND *)&MEMORY[0xB33E90][0x1118]; /*0x49848e*/
  }
  if ( bIsHDR )
    v11 = 0; /*0x49849c*/
  else
    v11 = iMultiSample <= 1 ? 0 : iMultiSample;
  v12 = bAllowScreenShot == 0; /*0x4984b2*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1130] = v11; /*0x4984b8*/
  if ( !v12 && !v11 ) /*0x4984c1*/
  {
    v11 = 1; /*0x4984c3*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1130] = 1; /*0x4984c8*/
  }
  v13 = sub_76BD40( /*0x49851e*/
          nWidth,
          nHeight,
          dword_B06C30,
          (int)v5,
          (int)v5,
          dword_B06C54,
          *(_DWORD *)&MEMORY[0xB33E90][0x1128],
          dword_B06C34,
          dword_B06C38,
          *(_DWORD *)&MEMORY[0xB33E90][0x1110],
          *(_DWORD *)&MEMORY[0xB33E90][0x112C],
          v11,
          dword_B06C40,
          *(_DWORD *)&MEMORY[0xB33E90][0x1124]);
  v14 = *(_DWORD *)&MEMORY[0xB33E90][0x1248]; /*0x498520*/
  if ( *(NiDX9Renderer **)&MEMORY[0xB33E90][0x1248] != v13 ) /*0x49852a*/
  {
    if ( v14 ) /*0x49852e*/
    {
      v15 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x1248]; /*0x498530*/
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x498536*/
      {
        if ( v15 ) /*0x498542*/
          (**v15)(v15, 1); /*0x49854c*/
      }
    }
    *(_DWORD *)&MEMORY[0xB33E90][0x1248] = v13; /*0x498550*/
    if ( !v13 ) /*0x498556*/
      goto LABEL_26; /*0x498556*/
    InterlockedIncrement((volatile LONG *)&v13->member); /*0x498560*/
    goto LABEL_18; /*0x498560*/
  }
LABEL_19:
  if ( v14 ) /*0x49856d*/
  {
    nullsub_returnvVoid_1arg(0); /*0x49857c*/
    (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)&MEMORY[0xB33E90][0x1248] + 0x64))( /*0x498591*/
      *(_DWORD *)&MEMORY[0xB33E90][0x1248],
      &MEMORY[0xB33E90][0x124C]);               // Fog decode: renderer init consumes startup color vector; not the active FogParam/FogColor shader constant producer.
    v16 = (_DWORD *)FormHeapAlloc(0x38u); /*0x498595*/
    v101 = 0; /*0x4985a3*/
    if ( v16 ) /*0x4985aa*/
      v17 = (BSShaderAccumulator *)NiAlphaAccumulator_Constructor(v16); /*0x4985ae*/
    else
      v17 = 0; /*0x4985b5*/
    v18 = *(NiDX9Renderer **)&MEMORY[0xB33E90][0x1248]; /*0x4985b7*/
    v101 = 0xFFFFFFFF; /*0x4985be*/
    NiDX9Renderer::SetShaderAccumulator(v18, v17); /*0x4985c5*/
    if ( MEMORY[0xB33E90][0x1116] ) /*0x4985ca*/
    {
      v19 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1248] + 0x280); /*0x4985d8*/
      if ( v19 ) /*0x4985e0*/
      {
        v90 = (float)dword_B06C8C; /*0x4985f1*/
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v19 + 0x13C))(v19, LODWORD(v90)); /*0x4985f5*/
      }
    }
    goto LABEL_28; /*0x4985f7*/
  }
LABEL_26:
  MEMORY[0xB33E90][0x1138] = 0; /*0x4985f9*/
  v20 = 0; /*0x4985ff*/
  do /*0x498612*/
  {
    v21 = byte_A3E2C0[v20]; /*0x498601*/
    MEMORY[0xB33E90][v20++ + 0x1138] = v21; /*0x498607*/
  }
  while ( v21 ); /*0x498612*/
LABEL_28:
  v22 = (NiDevImageConverter *)FormHeapAlloc(0x900u); /*0x498614*/
  v101 = 1; /*0x498627*/
  if ( v22 ) /*0x498632*/
    v23 = NiDevImageConverter::NiDevImageConverter(v22); /*0x498636*/
  else
    v23 = 0; /*0x49863d*/
  v101 = 0xFFFFFFFF; /*0x498640*/
  sub_71B290(v23); /*0x498647*/
  Singleton = *(unsigned int **)&MEMORY[0xB33E90][0x1134]; /*0x49864c*/
  v25 = dword_B06C54; /*0x498651*/
  v12 = *(_DWORD *)&MEMORY[0xB33E90][0x1134] == 0; /*0x49865a*/
  byte_B256CC = 1; /*0x49865c*/
  OB_NiSourceTexture_s_defaultGenerateMipmaps_010201A0 = 0; /*0x498663*/
  if ( v12 /*0x498684*/
    && (Singleton = (unsigned int *)NiDX9AdapterDescArray_GetSingleton(),
        (*(_DWORD *)&MEMORY[0xB33E90][0x1134] = Singleton) == 0)
    || v25 >= *Singleton
    || v25 >= *((unsigned __int16 *)Singleton + 7) )
  {
    v26 = 0; /*0x49868e*/
  }
  else
  {
    v26 = *(_DWORD *)(Singleton[2] + 4 * v25); /*0x498689*/
  }
  if ( !v26 ) /*0x498692*/
  {
    MEMORY[0xB33E90][0x1138] = 0; /*0x498694*/
    v27 = 0; /*0x49869b*/
    do /*0x4986b1*/
    {
      v28 = byte_A3E2A4[v27]; /*0x4986a0*/
      MEMORY[0xB33E90][v27++ + 0x1138] = v28; /*0x4986a6*/
    }
    while ( v28 ); /*0x4986b1*/
    return 0; /*0x4986b5*/
  }
  v30 = *(_DWORD *)(v26 + 0x460); /*0x4986ba*/
  if ( !*(_DWORD *)(v30 + 4) || !v30 || (pD3DCaps9 = v30 + 4, v30 == 0xFFFFFFFC) ) /*0x4986ce*/
  {
    MEMORY[0xB33E90][0x1138] = 0; /*0x4986d0*/
    v32 = 0; /*0x4986d7*/
    do /*0x4986f1*/
    {
      v33 = byte_A3E278[v32]; /*0x4986e0*/
      MEMORY[0xB33E90][v32++ + 0x1138] = v33; /*0x4986e6*/
    }
    while ( v33 ); /*0x4986f1*/
    return 0; /*0x4986f5*/
  }
  if ( g_bFullScreen ) /*0x4986fa*/
    MEMORY[0xB33E90][0x1115] = (*(_DWORD *)(v30 + 0x10) & 0x20000) != 0; /*0x49870c*/
  else
    MEMORY[0xB33E90][0x1115] = 0; /*0x498714*/
  maxPS20Instructions = *(_WORD *)(v30 + 0x11C);// [Verified] Reads D3DCAPS9.PS20Caps.NumInstructionSlots. This value is later logged as maxPS20inst and passed to SetShaderPackage(maxPS20Instructions). /*0x498721*/
  v35 = (const char *)(v26 + 0x204);            // [Verified] pD3DCaps9 is D3DCAPS9*: later accesses at +0xC4/+0xCC read VertexShaderVersion/PixelShaderVersion and +0x40 reads TextureFilterCaps, matching the imported D3DCAPS9 layout. /*0x498733*/
  v36 = (const char *)(v26 + 4); /*0x498739*/
  v37 = g_Direct3D9; /*0x49873c*/
  OB_RendererGlobalState_010201A0.pad_00D[0x8C] = bAllowSM20Hair; /*0x498743*/
  CheckDeviceFormat = v37->lpVtbl->CheckDeviceFormat; /*0x49874b*/
  v99 = v35; /*0x498751*/
  MEMORY[0xB33E90][0x1246] = (int)CheckDeviceFormat( /*0x498767*/
                                    v37,
                                    0,
                                    D3DDEVTYPE_HAL,
                                    D3DFMT_X8R8G8B8,
                                    0x80000,
                                    D3DRTYPE_TEXTURE,
                                    D3DFMT_A16B16G16R16F) >= 0;// [Verified] Stores the result of the device CheckDeviceFormat query for format 0x71 and usage 0x80000 in renderer capability state B33E90+0x1246; RendererInfo reports this result as FP16ARGB blending.
  OB_RendererGlobalState_010201A0.bFP16ARGBFiltering = (int)g_Direct3D9->lpVtbl->CheckDeviceFormat( /*0x498782*/
                                                              g_Direct3D9,
                                                              0,
                                                              1,
                                                              0x16,
                                                              0x20000,
                                                              3,
                                                              0x71) >= 0;// [Verified] Queries device support for format 0x71 with usage 0x20000 and stores the result in RendererGlobalState+0x1D8. The RendererInfo output labels this capability FP16ARGB filtering.
  OB_RendererGlobalState_010201A0.bMinAnisotropicFilterSupport = (*(_DWORD *)(pD3DCaps9 + 0x40) & 0x400) != 0;// [Verified] Copies (pD3DCaps9->TextureFilterCaps & 0x400) != 0 into RendererGlobalState+0x1D9. [Probable] The D3D9 mask is D3DPTFILTERCAPS_MINFANISOTROPIC (minifying anisotropic filtering). /*0x498790*/
  v39 = *(_DWORD *)(pD3DCaps9 + 0x3C); /*0x498796*/
  if ( (v39 & 2) == 0 || (v92 = 0, (v39 & 0x100) != 0) ) /*0x4987a7*/
    v92 = 1; /*0x4987a9*/
  v40 = bDoImageSpaceEffect; /*0x4987b5*/
  if ( bIsHDR && v40 && MEMORY[0xB33E90][0x1246] )// [Verified] HDR mode becomes active only when bIsHDR, bDoImageSpaceEffect, and the earlier FP16ARGB blending query at B33E90+0x1246 are all true; otherwise +0x1D7 is cleared. /*0x4987c0*/
  {
    OB_RendererGlobalState_010201A0.bHighDynamicRangeMode = 1;// Set HDR-enabled byte only when bDoHighDynamicRange:BlurShaderHDR, bDoImageSpaceEffects:Display, and device HDR capability are all true. /*0x4987c9*/
LABEL_59:
    OB_RendererGlobalState_010201A0.bBloomLightingEnabled = 0;// [Verified] Clears the bloom-lighting field at RendererGlobalState+0x1DA on the HDR path. The adjacent branch sets it from image-space-effect state and byte_B06D34. /*0x4987ed*/
    goto LABEL_60; /*0x4987ed*/
  }
  OB_RendererGlobalState_010201A0.bHighDynamicRangeMode = 0;// Clear HDR-enabled byte when the HDR prerequisites fail. /*0x4987d4*/
  if ( !v40 ) /*0x4987db*/
    goto LABEL_59; /*0x4987db*/
  v12 = bUseBlurShader == 0;                    // [Verified] When HDR mode prerequisites fail but image-space effects are enabled, bUseBlurShader determines the fallback bloom path: zero clears +0x1DA; nonzero enables the Bloom lighting status. /*0x4987dd*/
  OB_RendererGlobalState_010201A0.bBloomLightingEnabled = 1; /*0x4987e4*/
  if ( v12 ) /*0x4987eb*/
    goto LABEL_59; /*0x4987eb*/
LABEL_60:
  if ( !v92 || (v12 = ForcePow2Text == 0, unk_B42E96 = 1, !v12) ) /*0x498809*/
    unk_B42E96 = 0; /*0x49880b*/
  v41 = dword_B06D2C; /*0x49881c*/
  MEMORY[0xB4205C] = texmipmapskip; /*0x498821*/
  unk_B42060 = v41; /*0x498827*/
  if ( maxPS20Instructions > 0x60u && *(int *)(pD3DCaps9 + 0x110) < 0x20 ) /*0x498835*/
    maxPS20Instructions = 0x60; /*0x498837*/
  v93 = maxPS20Instructions; /*0x498850*/
  SetShaderPackage(dword_B06C44, dword_B06C48, bForce1XShaders, (int)v35, v36, maxPS20Instructions); /*0x49885b*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 5 ) /*0x49886a*/
    byte_B06F14 = 0; /*0x49886c*/
  LODWORD(v89) = 3; /*0x49887a*/
  ShadowSurfaceRes = word_B06F1C;               // Copies iShadowMapResolution (word_B06F1C) into native ShadowSurfaceRes (B2C67C) used by shadow-target creation. /*0x498882*/
  if ( !_strnicmp(v36, byte_A3E274, v89) ) /*0x498889*/
  {
    LibraryA = LoadLibraryA("ATIMGPUD.dll"); /*0x49889a*/
    v43 = LibraryA; /*0x4988a0*/
    if ( LibraryA ) /*0x4988a4*/
    {
      ProcAddress = (int (*)(void))GetProcAddress(LibraryA, "AtiQueryMgpuCount"); /*0x4988ac*/
      if ( ProcAddress ) /*0x4988b4*/
      {
        if ( ProcAddress() > 0 ) /*0x4988ba*/
        {
          OB_RendererGlobalState_010201A0.pad_1DB[1] = 1; /*0x4988bc*/
          MEMORY[0xB42E97] = 0; /*0x4988c3*/
        }
      }
      FreeLibrary(v43); /*0x4988cb*/
    }
    if ( *(int *)&MEMORY[0xB33E90][0x1130] >= 2 ) /*0x4988d8*/
      goto LABEL_85; /*0x4988d8*/
  }
  else
  {
    LODWORD(v91) = 2; /*0x4988e3*/
    if ( !_strnicmp(v36, "nv", v91) ) /*0x4988eb*/
    {
      v45 = LoadLibraryA("NVCPL.dll"); /*0x4988fc*/
      v46 = v45; /*0x498902*/
      if ( v45 ) /*0x498906*/
      {
        v47 = GetProcAddress(v45, "NvCplGetDataInt"); /*0x498914*/
        if ( v47 ) /*0x498918*/
        {
          v95[0] = 0; /*0x498923*/
          v94 = 0; /*0x498927*/
          ((void (__cdecl *)(int, _DWORD *))v47)(8, v95); /*0x49892b*/
          ((void (__cdecl *)(int, int *))v47)(9, &v94); /*0x498934*/
          if ( v95[0] > 0 && (v94 & 0x10000000) != 0 ) /*0x498948*/
          {
            OB_RendererGlobalState_010201A0.pad_1DB[1] = 1; /*0x49894a*/
            MEMORY[0xB42E97] = 0; /*0x498951*/
          }
        }
        FreeLibrary(v46); /*0x498959*/
      }
    }
    else if ( *(int *)&MEMORY[0xB33E90][0x1130] >= 2 ) /*0x498968*/
    {
LABEL_85:
      OB_ShaderPassControl_010201A0[0] = 0; /*0x49897a*/
      goto LABEL_86; /*0x49897a*/
    }
  }
  v12 = byte_B06CAC == 0; /*0x49896a*/
  OB_ShaderPassControl_010201A0[0] = 1; /*0x498971*/
  if ( v12 ) /*0x498978*/
    goto LABEL_85; /*0x498978*/
LABEL_86:
  v48 = (double)nHeight; /*0x498981*/
  MEMORY[0xB33E90][0x1247] = 0; /*0x498987*/
  if ( v48 / (double)nWidth != dbl_A31C70 ) /*0x49899f*/
    MEMORY[0xB33E90][0x1247] = 1; /*0x4989a1*/
  for ( i = 0; i < 0xD; ++i ) /*0x4989a8*/
  {
    switch ( i ) /*0x4989b5*/
    {
      case 0: /*0x4989b5*/
        v50 = D3DFMT_R5G6B5; /*0x4989bc*/
        break; /*0x4989c1*/
      case 1: /*0x4989b5*/
        v50 = D3DFMT_X1R5G5B5; /*0x4989c3*/
        break; /*0x4989c8*/
      case 2: /*0x4989b5*/
        v50 = D3DFMT_A1R5G5B5; /*0x4989ca*/
        break; /*0x4989cf*/
      case 3: /*0x4989b5*/
        v50 = D3DFMT_A4R4G4B4; /*0x4989d1*/
        break; /*0x4989d6*/
      case 4: /*0x4989b5*/
        v50 = D3DFMT_L16; /*0x4989d8*/
        break; /*0x4989dd*/
      case 5: /*0x4989b5*/
        v50 = D3DFMT_R8G8B8; /*0x4989df*/
        break; /*0x4989e4*/
      case 6: /*0x4989b5*/
        v50 = D3DFMT_A8R8G8B8; /*0x4989e6*/
        break; /*0x4989eb*/
      case 7: /*0x4989b5*/
        v50 = D3DFMT_X8R8G8B8; /*0x4989ed*/
        break; /*0x4989f2*/
      case 8: /*0x4989b5*/
        v50 = D3DFMT_R32F; /*0x4989f4*/
        break; /*0x4989f9*/
      case 9: /*0x4989b5*/
        v50 = D3DFMT_A16B16G16R16F; /*0x498a02*/
        break; /*0x498a07*/
      case 0xA: /*0x4989b5*/
        v50 = D3DFMT_A16B16G16R16; /*0x4989fb*/
        break; /*0x498a00*/
      case 0xB: /*0x4989b5*/
        v50 = D3DFMT_A32B32G32R32F; /*0x498a09*/
        break; /*0x498a0e*/
      case 0xC: /*0x4989b5*/
        v50 = D3DFMT_L8; /*0x498a10*/
        break; /*0x498a15*/
      default:
        v50 = D3DFMT_UNKNOWN; /*0x498a17*/
        break; /*0x498a17*/
    }
    unk_B42E98[i] = (int)g_Direct3D9->lpVtbl->CheckDeviceFormat(g_Direct3D9, 0, 1, 0x16, 0, 3, v50) >= 0; /*0x498a37*/
  }
  if ( flt_B06F64 != g_RequestedRenderGamma && flt_B06F64 > 0.0 ) /*0x498a6b*/
  {
    g_RequestedRenderGamma = flt_B06F64; /*0x498a6d*/
    MEMORY[0xB33E90][0x1114] = 1; /*0x498a73*/
  }
  ShaderVersionName = BSShaderManager_GetShaderVersionName(); /*0x498a92*/
  _sprintf(Filename, "%sRendererInfo.txt", unk_B3F280); /*0x498a94*/
  v52 = fopen(Filename, "w"); /*0x498aa3*/
  v53 = v52; /*0x498aa8*/
  if ( v52 )
  {
    fprintf(v52, "Renderer Device Information:\n\t%s\n\t%s\n", v99, v36); /*0x498ac1*/
    fprintf(v53, "\tRenderPath         \t\t: %s\n", ShaderVersionName);
    fprintf(v53, "\tPSversion          \t\t: %X\n", *(unsigned __int16 *)(pD3DCaps9 + 0xCC));
    fprintf(v53, "\tVSversion          \t\t: %X\n", *(unsigned __int16 *)(pD3DCaps9 + 0xC4));
    VertexShaderTargetName = BSShaderManager_GetVertexShaderTargetName(); /*0x498af8*/
    fprintf(v53, "\tVStarget           \t\t: %s\n", VertexShaderTargetName);
    PixelShaderTargetName = BSShaderManager_GetPixelShaderTargetName(0); /*0x498b0e*/
    fprintf(v53, "\tPStarget           \t\t: %s\n", PixelShaderTargetName);
    v56 = BSShaderManager_GetPixelShaderTargetName(1);// [Verified] RendererInfo prints maxPS20inst from v93. The same v93 value is passed as SetShaderPackage argument maxPS20Instructions at 0x49885B. /*0x498b21*/
    fprintf(v53, "\tPS2xtarget         \t\t: %s\n", v56);
    fprintf(v53, "\tmaxPS20inst        \t\t: %i\n", v93);
    v57 = (const char *)&off_A3E128; /*0x498b4c*/
    if ( !OB_RendererGlobalState_010201A0.bLighting30ShaderEnabled ) /*0x498b45*/
      v57 = "no"; /*0x498b53*/
    fprintf(v53, "\t3.0 Shaders        \t\t: %s\n", v57);
    v58 = (const char *)&off_A3E128; /*0x498b6e*/
    if ( !bDoImageSpaceEffect ) /*0x498b67*/
      v58 = "no"; /*0x498b75*/
    fprintf(v53, "\tImage space effects\t\t: %s\n", v58);
    v59 = (const char *)&off_A3E128; /*0x498b8e*/
    if ( !v92 ) /*0x498b93*/
      v59 = "no"; /*0x498b95*/
    fprintf(v53, "\tNonpowerof2textures\t\t: %s\n", v59);
    v60 = (const char *)&off_A3E128; /*0x498bb0*/
    if ( !MEMORY[0xB33E90][0x1246] ) /*0x498ba9*/
      v60 = "no"; /*0x498bb7*/
    fprintf(v53, "\tFP16ARGB blending  \t\t: %s\n", v60);
    v61 = (const char *)&off_A3E128; /*0x498bd2*/
    if ( !OB_RendererGlobalState_010201A0.bFP16ARGBFiltering )// [Verified] RendererInfo.txt labels RendererGlobalState+0x1D8 as FP16ARGB filtering. /*0x498bcb*/
      v61 = "no"; /*0x498bd9*/
    fprintf(v53, "\tFP16ARGB filtering \t\t: %s\n", v61);
    v62 = (const char *)&off_A3E128; /*0x498bf4*/
    if ( !OB_RendererGlobalState_010201A0.bHighDynamicRangeMode )// [Verified] RendererInfo.txt labels RendererGlobalState+0x1D7 as High dynamic range. /*0x498bed*/
      v62 = "no"; /*0x498bfb*/
    fprintf(v53, "\tHigh dynamic range \t\t: %s\n", v62);
    v63 = (const char *)&off_A3E128; /*0x498c16*/
    if ( !OB_RendererGlobalState_010201A0.bBloomLightingEnabled )// [Verified] RendererInfo.txt labels RendererGlobalState+0x1DA as Bloom lighting. /*0x498c0f*/
      v63 = "no"; /*0x498c1d*/
    fprintf(v53, "\tBloom lighting     \t\t: %s\n", v63);
    v64 = (const char *)&off_A3E128; /*0x498c38*/
    if ( !OB_ShaderPassControl_010201A0[0] )    // [Verified] RendererInfo.txt prints OB_ShaderPassControl.refractionPassEnabled as the Refraction capability/status line. /*0x498c31*/
      v64 = "no"; /*0x498c3f*/
    fprintf(v53, "\tRefraction         \t\t: %s\n", v64);
    v65 = (const char *)&off_A3E128; /*0x498c5a*/
    if ( !OB_RendererGlobalState_010201A0.pad_00D[0x8C] ) /*0x498c53*/
      v65 = "no"; /*0x498c61*/
    fprintf(v53, "\t2.0 hair           \t\t: %s\n", v65);
    v66 = (const char *)&off_A3E128; /*0x498c7c*/
    if ( !OB_RendererGlobalState_010201A0.pad_1DB[1] ) /*0x498c75*/
      v66 = "no"; /*0x498c83*/
    fprintf(v53, "\tSLI mode           \t\t: %s\n", v66);
    v67 = (const char *)&off_A3E128; /*0x498c9e*/
    if ( !byte_B07050 ) /*0x498c97*/
      v67 = "no"; /*0x498ca5*/
    fprintf(v53, "\tWater shader       \t\t: %s\n", v67);
    v68 = (const char *)&off_A3E128; /*0x498cc0*/
    if ( !byte_B07060 ) /*0x498cb9*/
      v68 = "no"; /*0x498cc7*/
    fprintf(v53, "\tWater reflections  \t\t: %s\n", v68);
    v69 = (const char *)&off_A3E128; /*0x498ce2*/
    if ( !byte_B07090 ) /*0x498cdb*/
      v69 = "no"; /*0x498ce9*/
    fprintf(v53, "\tWater displacement \t\t: %s\n", v69);
    v70 = (const char *)&off_A3E128; /*0x498d04*/
    if ( !bUseWaterHiRes ) /*0x498cfd*/
      v70 = "no"; /*0x498d0b*/
    fprintf(v53, "\tWater high res     \t\t: %s\n", v70);
    v71 = sub_497E10(*(NiDX9Renderer **)&MEMORY[0xB33E90][0x1248]); /*0x498d25*/
    fprintf(v53, "\tMultisample Type   \t\t: %d\n", *(_DWORD *)(v71 + 0x10));
    ShaderProgramPackageIndex = GetShaderProgramPackageIndex(); /*0x498d39*/
    fprintf(v53, "\tShader Package     \t\t: %d\n", ShaderProgramPackageIndex);
    fclose(v53); /*0x498d4b*/
  }
  if ( bIsHDR ) /*0x498d53*/
    v73 = flt_B06E34; /*0x498d5c*/
  else
    v73 = flt_B06DDC; /*0x498d64*/
  *(float *)OB_RendererGlobalState_010201A0.pad_0B3 = v73; /*0x498d6a*/
  v74 = byte_B06F74; /*0x498d70*/
  v75 = bDynamicWindowsReflection; /*0x498d7d*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_00D[2] = OB_INI_fTreeDimmer_BlurShaderHDR_010201A0;// Startup writer for rendererGlobal+0x0F (B42EA8): copy fTreeDimmer:BlurShaderHDR setting. Default setting bits are 1.2f. /*0x498d84*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_00D[0x9E] = flt_B06E54; /*0x498d90*/
  v76 = dword_B06F8C; /*0x498d96*/
  v77 = flt_B06EAC; /*0x498d9c*/
  OB_RendererGlobalState_010201A0.pad_1DB[0x38] = v74; /*0x498da2*/
  v78 = OB_INI_bFullBrightLighting_Display_010201A0; /*0x498da7*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[8] = v77; /*0x498dae*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0xC] = flt_B06EB4; /*0x498dba*/
  v79 = flt_B06EBC; /*0x498dc0*/
  OB_ShaderPassControl_010201A0[2] = v78;       // [Verified] Writes OB_ShaderPassControl.bFullBrightLighting from OB_INI_bFullBrightLighting_Display_010201A0 during renderer initialization. /*0x498dc6*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x10] = v79; /*0x498dcb*/
  v81 = __OFSUB__(*(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le, 5); /*0x498dd9*/
  v80 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le - 5 < 0; /*0x498dd9*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x14] = flt_B06EC4; /*0x498de0*/
  OB_RendererGlobalState_010201A0.pad_1DB[0x39] = v75; /*0x498de6*/
  v82 = bBlendLandscapeValue; /*0x498df2*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x18] = flt_B06ECC; /*0x498df9*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x1C] = flt_B06ED4; /*0x498e05*/
  v83 = flt_B06EDC; /*0x498e0e*/
  byte_B2C67E = v82; /*0x498e14*/
  v84 = dword_B06F2C; /*0x498e1a*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x20] = v83; /*0x498e20*/
  v85 = flt_B06EE4; /*0x498e26*/
  dword_B2C674 = v76; /*0x498e2c*/
  v86 = uGridsToLoad; /*0x498e32*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x24] = v85; /*0x498e38*/
  v87 = flt_B06EEC; /*0x498e3e*/
  dword_B2C684 = v86; /*0x498e44*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x28] = v87; /*0x498e4a*/
  *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[0x2C] = flt_B06EF4; /*0x498e56*/
  v88 = ((v80 ^ v81) - 1) & 2; /*0x498e65*/
  flt_B2C680 = flt_B06F7C; /*0x498e68*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_1DB[0x3C] = v88; /*0x498e70*/
  if ( v88 >= v84 ) /*0x498e75*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_1DB[0x3C] = v84; /*0x498e77*/
  return *(_DWORD *)&MEMORY[0xB33E90][0x1248]; /*0x498e82*/
}
