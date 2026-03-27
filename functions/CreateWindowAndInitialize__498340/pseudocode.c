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
  int v24; // eax
  unsigned int v25; // esi
  int v26; // eax
  int v27; // eax
  char v28; // cl
  int v30; // ecx
  int v31; // ebp
  int v32; // eax
  char v33; // cl
  unsigned __int16 v34; // si
  const char *v35; // edi
  char *v36; // ebx
  int v37; // eax
  int (__stdcall *v38)(int, _DWORD, int, int, int, int, int); // edx
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
  int v50; // eax
  const char *v51; // edi
  FILE *v52; // eax
  FILE *v53; // esi
  const char *v54; // eax
  const char *v55; // eax
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
  int v72; // eax
  double v73; // st7
  char v74; // al
  char v75; // cl
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

  v2 = dword_B06C64;
  hWndParent = a1;
  v3 = dword_B06F6C;
  hInstance = a2;
  v4 = dword_B06C5C;
  dword_B34FA0 = v3;
  nWidth = v4;
  nHeight = v2;
  if ( !sub_4980D0(1) )
  {
LABEL_18:
    v14 = dword_B350D8;
    goto LABEL_19;
  }
  v5 = hWndParent;
  if ( g_bFullScreen )
  {
    dword_B06C30 |= 4u;
    hWnd = v5;
  }
  else
  {
    Window = CreateWindowExA(0, lpClassName, 0, 0x50000000, 0, 0, nWidth, nHeight, v5, 0, hInstance, 0);
    v7 = nWidth;
    v8 = nHeight;
    hWnd = Window;
    v95[1] = 0;
    v96 = 0;
    v97 = v7;
    v98 = v8;
    ClassLongA = GetClassLongA(Window, 0xFFFFFFF8);
    v10 = ((int (__stdcall *)(HWND, unsigned int, DWORD))GetWindowLongA)(hWndParent, 0xFFFFFFF0, ClassLongA);
    ((void (__stdcall *)(int *, int))AdjustWindowRect)(&v96, v10);
    SetWindowPos(hWndParent, 0, X, Y, v97, v98 - v96, 0x40);
    v5 = hWnd;
  }
  if ( bIsHDR )
    v11 = 0;
  else
    v11 = iMultiSample <= 1 ? 0 : iMultiSample;
  v12 = bAllowScreenShot == 0;
  iMultisample = v11;
  if ( !v12 && !v11 )
  {
    v11 = 1;
    iMultisample = 1;
  }
  v13 = sub_76BD40(
          nWidth,
          nHeight,
          dword_B06C30,
          (int)v5,
          (int)v5,
          dword_B06C54,
          dword_B34FB8,
          dword_B06C34,
          dword_B06C38,
          dword_B34FA0,
          dword_B34FBC,
          v11,
          dword_B06C40,
          dword_B34FB4);
  v14 = dword_B350D8;
  if ( (NiDX9Renderer *)dword_B350D8 != v13 )
  {
    if ( v14 )
    {
      v15 = (void (__thiscall ***)(_DWORD, int))dword_B350D8;
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
      {
        if ( v15 )
          (**v15)(v15, 1);
      }
    }
    dword_B350D8 = (int)v13;
    if ( !v13 )
      goto LABEL_26;
    InterlockedIncrement((volatile LONG *)&v13->member);
    goto LABEL_18;
  }
LABEL_19:
  if ( v14 )
  {
    nullsub_returnvVoid_1arg(0);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_B350D8 + 0x64))(dword_B350D8, &dword_B350DC);
    v16 = (_DWORD *)FormHeapAlloc(0x38u);
    v101 = 0;
    if ( v16 )
      v17 = (BSShaderAccumulator *)NiAlphaAccumulator_Constructor(v16);
    else
      v17 = 0;
    v18 = (NiDX9Renderer *)dword_B350D8;
    v101 = 0xFFFFFFFF;
    NiDX9Renderer::SetShaderAccumulator(v18, v17);
    if ( byte_B34FA6 )
    {
      v19 = *(_DWORD *)(dword_B350D8 + 0x280);
      if ( v19 )
      {
        v90 = (float)dword_B06C8C;
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v19 + 0x13C))(v19, LODWORD(v90));
      }
    }
    goto LABEL_28;
  }
LABEL_26:
  byte_B34FC8[0] = 0;
  v20 = 0;
  do
  {
    v21 = byte_A3E2C0[v20];
    byte_B34FC8[v20++] = v21;
  }
  while ( v21 );
LABEL_28:
  v22 = (NiDevImageConverter *)FormHeapAlloc(0x900u);
  v101 = 1;
  if ( v22 )
    v23 = NiDevImageConverter::NiDevImageConverter(v22);
  else
    v23 = 0;
  v101 = 0xFFFFFFFF;
  sub_71B290(v23);
  v24 = dword_B34FC4;
  v25 = dword_B06C54;
  v12 = dword_B34FC4 == 0;
  byte_B256CC = 1;
  byte_B3F708 = 0;
  if ( v12 && (v24 = sub_763DE0(), (dword_B34FC4 = v24) == 0)
    || v25 >= *(_DWORD *)v24
    || v25 >= *(unsigned __int16 *)(v24 + 0xE) )
  {
    v26 = 0;
  }
  else
  {
    v26 = *(_DWORD *)(*(_DWORD *)(v24 + 8) + 4 * v25);
  }
  if ( !v26 )
  {
    byte_B34FC8[0] = 0;
    v27 = 0;
    do
    {
      v28 = byte_A3E2A4[v27];
      byte_B34FC8[v27++] = v28;
    }
    while ( v28 );
    return 0;
  }
  v30 = *(_DWORD *)(v26 + 0x460);
  if ( !*(_DWORD *)(v30 + 4) || !v30 || (v31 = v30 + 4, v30 == 0xFFFFFFFC) )
  {
    byte_B34FC8[0] = 0;
    v32 = 0;
    do
    {
      v33 = byte_A3E278[v32];
      byte_B34FC8[v32++] = v33;
    }
    while ( v33 );
    return 0;
  }
  if ( g_bFullScreen )
    byte_B34FA5 = (*(_DWORD *)(v30 + 0x10) & 0x20000) != 0;
  else
    byte_B34FA5 = 0;
  v34 = *(_WORD *)(v30 + 0x11C);
  v35 = (const char *)(v26 + 0x204);
  v36 = (char *)(v26 + 4);
  v37 = dword_B42154;
  byte_B42F32 = bAllowSM20Hair;
  v38 = *(int (__stdcall **)(int, _DWORD, int, int, int, int, int))(*(_DWORD *)v37 + 0x28);
  v99 = v35;
  byte_B350D6 = v38(v37, 0, 1, 0x16, 0x80000, 3, 0x71) >= 0;
  byte_B43071 = (*(int (__stdcall **)(int, _DWORD, int, int, int, int, int))(*(_DWORD *)dword_B42154 + 0x28))(
                  dword_B42154,
                  0,
                  1,
                  0x16,
                  0x20000,
                  3,
                  0x71) >= 0;
  byte_B43072 = (*(_DWORD *)(v31 + 0x40) & 0x400) != 0;
  v39 = *(_DWORD *)(v31 + 0x3C);
  if ( (v39 & 2) == 0 || (v92 = 0, (v39 & 0x100) != 0) )
    v92 = 1;
  v40 = bDoImageSpaceEffect;
  if ( bIsHDR && v40 && byte_B350D6 )
  {
    UseHDR = 1;
LABEL_59:
    byte_B43073 = 0;
    goto LABEL_60;
  }
  UseHDR = 0;
  if ( !v40 )
    goto LABEL_59;
  v12 = byte_B06D34 == 0;
  byte_B43073 = 1;
  if ( v12 )
    goto LABEL_59;
LABEL_60:
  if ( !v92 || (v12 = ForcePow2Text == 0, byte_B42E96 = 1, !v12) )
    byte_B42E96 = 0;
  v41 = dword_B06D2C;
  textMipmapStuff_ = texmipmapskip;
  dword_B42060 = v41;
  if ( v34 > 0x60u && *(int *)(v31 + 0x110) < 0x20 )
    v34 = 0x60;
  v93 = v34;
  SetShaderPackage(dword_B06C44, dword_B06C48, byte_B06DB4, (int)v35, v36, v34);
  if ( ShaderPackage < 5 )
    byte_B06F14 = 0;
  LODWORD(v89) = 3;
  ShadowSurfaceRes = word_B06F1C;
  if ( !_strnicmp(v36, byte_A3E274, v89) )
  {
    LibraryA = LoadLibraryA("ATIMGPUD.dll");
    v43 = LibraryA;
    if ( LibraryA )
    {
      ProcAddress = (int (*)(void))GetProcAddress(LibraryA, "AtiQueryMgpuCount");
      if ( ProcAddress )
      {
        if ( ProcAddress() > 0 )
        {
          byte_B43075 = 1;
          OcclusionCullngBool = 0;
        }
      }
      FreeLibrary(v43);
    }
    if ( iMultisample >= 2 )
      goto LABEL_85;
  }
  else
  {
    LODWORD(v91) = 2;
    if ( !_strnicmp(v36, "nv", v91) )
    {
      v45 = LoadLibraryA("NVCPL.dll");
      v46 = v45;
      if ( v45 )
      {
        v47 = GetProcAddress(v45, "NvCplGetDataInt");
        if ( v47 )
        {
          v95[0] = 0;
          v94 = 0;
          ((void (__cdecl *)(int, _DWORD *))v47)(8, v95);
          ((void (__cdecl *)(int, int *))v47)(9, &v94);
          if ( v95[0] > 0 && (v94 & 0x10000000) != 0 )
          {
            byte_B43075 = 1;
            OcclusionCullngBool = 0;
          }
        }
        FreeLibrary(v46);
      }
    }
    else if ( iMultisample >= 2 )
    {
LABEL_85:
      enableRefraction = 0;
      goto LABEL_86;
    }
  }
  v12 = byte_B06CAC == 0;
  enableRefraction = 1;
  if ( v12 )
    goto LABEL_85;
LABEL_86:
  v48 = (double)nHeight;
  byte_B350D7 = 0;
  if ( v48 / (double)nWidth != dbl_A31C70 )
    byte_B350D7 = 1;
  for ( i = 0; i < 0xD; ++i )
  {
    switch ( i )
    {
      case 0:
        v50 = 0x17;
        break;
      case 1:
        v50 = 0x18;
        break;
      case 2:
        v50 = 0x19;
        break;
      case 3:
        v50 = 0x1A;
        break;
      case 4:
        v50 = 0x51;
        break;
      case 5:
        v50 = 0x14;
        break;
      case 6:
        v50 = 0x15;
        break;
      case 7:
        v50 = 0x16;
        break;
      case 8:
        v50 = 0x72;
        break;
      case 9:
        v50 = 0x71;
        break;
      case 0xA:
        v50 = 0x24;
        break;
      case 0xB:
        v50 = 0x74;
        break;
      case 0xC:
        v50 = 0x32;
        break;
      default:
        v50 = 0;
        break;
    }
    byte_B42E98[i] = (*(int (__stdcall **)(int, _DWORD, int, int, _DWORD, int, int))(*(_DWORD *)dword_B42154 + 0x28))(
                       dword_B42154,
                       0,
                       1,
                       0x16,
                       0,
                       3,
                       v50) >= 0;
  }
  if ( flt_B06F64 != flt_B06C2C && flt_B06F64 > 0.0 )
  {
    flt_B06C2C = flt_B06F64;
    byte_B34FA4 = 1;
  }
  v51 = sub_7B7070();
  _sprintf(Filename, "%sRendererInfo.txt", word_B3F280);
  v52 = fopen(Filename, "w");
  v53 = v52;
  if ( v52 )
  {
    fprintf(v52, "Renderer Device Information:\n\t%s\n\t%s\n", v99, v36);
    fprintf(v53, "\tRenderPath         \t\t: %s\n", v51);
    fprintf(v53, "\tPSversion          \t\t: %X\n", *(unsigned __int16 *)(v31 + 0xCC));
    fprintf(v53, "\tVSversion          \t\t: %X\n", *(unsigned __int16 *)(v31 + 0xC4));
    v54 = sub_7B47E0();
    fprintf(v53, "\tVStarget           \t\t: %s\n", v54);
    v55 = sub_7B4780(0);
    fprintf(v53, "\tPStarget           \t\t: %s\n", v55);
    v56 = sub_7B4780(1);
    fprintf(v53, "\tPS2xtarget         \t\t: %s\n", v56);
    fprintf(v53, "\tmaxPS20inst        \t\t: %i\n", v93);
    v57 = (const char *)&off_A3E128;
    if ( !UsePS3Shaders )
      v57 = "no";
    fprintf(v53, "\t3.0 Shaders        \t\t: %s\n", v57);
    v58 = (const char *)&off_A3E128;
    if ( !bDoImageSpaceEffect )
      v58 = "no";
    fprintf(v53, "\tImage space effects\t\t: %s\n", v58);
    v59 = (const char *)&off_A3E128;
    if ( !v92 )
      v59 = "no";
    fprintf(v53, "\tNonpowerof2textures\t\t: %s\n", v59);
    v60 = (const char *)&off_A3E128;
    if ( !byte_B350D6 )
      v60 = "no";
    fprintf(v53, "\tFP16ARGB blending  \t\t: %s\n", v60);
    v61 = (const char *)&off_A3E128;
    if ( !byte_B43071 )
      v61 = "no";
    fprintf(v53, "\tFP16ARGB filtering \t\t: %s\n", v61);
    v62 = (const char *)&off_A3E128;
    if ( !UseHDR )
      v62 = "no";
    fprintf(v53, "\tHigh dynamic range \t\t: %s\n", v62);
    v63 = (const char *)&off_A3E128;
    if ( !byte_B43073 )
      v63 = "no";
    fprintf(v53, "\tBloom lighting     \t\t: %s\n", v63);
    v64 = (const char *)&off_A3E128;
    if ( !enableRefraction )
      v64 = "no";
    fprintf(v53, "\tRefraction         \t\t: %s\n", v64);
    v65 = (const char *)&off_A3E128;
    if ( !byte_B42F32 )
      v65 = "no";
    fprintf(v53, "\t2.0 hair           \t\t: %s\n", v65);
    v66 = (const char *)&off_A3E128;
    if ( !byte_B43075 )
      v66 = "no";
    fprintf(v53, "\tSLI mode           \t\t: %s\n", v66);
    v67 = (const char *)&off_A3E128;
    if ( !byte_B07050 )
      v67 = "no";
    fprintf(v53, "\tWater shader       \t\t: %s\n", v67);
    v68 = (const char *)&off_A3E128;
    if ( !byte_B07060 )
      v68 = "no";
    fprintf(v53, "\tWater reflections  \t\t: %s\n", v68);
    v69 = (const char *)&off_A3E128;
    if ( !byte_B07090 )
      v69 = "no";
    fprintf(v53, "\tWater displacement \t\t: %s\n", v69);
    v70 = (const char *)&off_A3E128;
    if ( !bUseWaterHiRes )
      v70 = "no";
    fprintf(v53, "\tWater high res     \t\t: %s\n", v70);
    v71 = sub_497E10((NiDX9Renderer *)dword_B350D8);
    fprintf(v53, "\tMultisample Type   \t\t: %d\n", *(_DWORD *)(v71 + 0x10));
    v72 = sub_7DAB80();
    fprintf(v53, "\tShader Package     \t\t: %d\n", v72);
    fclose(v53);
  }
  if ( bIsHDR )
    v73 = flt_B06E34;
  else
    v73 = flt_B06DDC;
  flt_B42F4C = v73;
  v74 = byte_B06F74;
  v75 = bDynamicWindowsReflection;
  flt_B42EA8 = flt_B06E4C;
  flt_B42F44 = flt_B06E54;
  v76 = dword_B06F8C;
  v77 = flt_B06EAC;
  byte_B430AC = v74;
  v78 = byte_B06F94;
  flt_B4307C = v77;
  flt_B43080 = flt_B06EB4;
  v79 = flt_B06EBC;
  byte_B42E86 = v78;
  flt_B43084 = v79;
  v81 = __OFSUB__(ShaderPackage, 5);
  v80 = ShaderPackage - 5 < 0;
  flt_B43088 = flt_B06EC4;
  bDynWinRelfections_ = v75;
  v82 = bBlendLandscapeValue;
  flt_B4308C = flt_B06ECC;
  flt_B43090 = flt_B06ED4;
  v83 = flt_B06EDC;
  byte_B2C67E = v82;
  v84 = dword_B06F2C;
  flt_B43094 = v83;
  v85 = flt_B06EE4;
  dword_B2C674 = v76;
  v86 = uGridsToLoad;
  flt_B43098 = v85;
  v87 = flt_B06EEC;
  dword_B2C684 = v86;
  flt_B4309C = v87;
  flt_B430A0 = flt_B06EF4;
  v88 = ((v80 ^ v81) - 1) & 2;
  flt_B2C680 = flt_B06F7C;
  dword_B430B0 = v88;
  if ( v88 >= v84 )
    dword_B430B0 = v84;
  return dword_B350D8;
}
