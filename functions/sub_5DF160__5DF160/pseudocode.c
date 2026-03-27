void __userpurge sub_5DF160(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5, _DWORD *a6)
{
  int v7; // edi
  int v8; // ecx
  int *v9; // edi
  char v10; // dl
  int v11; // eax
  bool v12; // cf
  int v13; // ecx
  _DWORD *v16; // ecx
  _DWORD *v21; // ecx
  _DWORD *v26; // ecx
  _DWORD *v31; // ecx
  double Float; // st7
  InterfaceManager *Singleton; // eax
  double v44; // st7
  double v45; // st7
  _DWORD *v48; // ecx
  int v52; // eax
  TES *v53; // edx
  int *v54; // eax
  int v55; // eax
  int v56; // eax
  void (__cdecl *v57)(int, _DWORD *); // edx
  char *v58; // ecx
  bool v59; // sf
  int v60; // eax
  int v61; // eax
  bool v62; // al
  char v63; // bl
  void (__thiscall *v64)(int, int, _DWORD *); // edx
  char *v65; // ecx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  bool v70; // zf
  void (__cdecl *v71)(int, _DWORD *); // edx
  char *v72; // ecx
  char *v73; // eax
  char v75; // al
  _DWORD *v85; // ecx
  _DWORD *v86; // ecx
  _DWORD *v87; // ecx
  _DWORD *v88; // ecx
  _DWORD *v89; // ecx
  _DWORD *v90; // ecx
  _DWORD *v91; // ecx
  _DWORD *v92; // ecx
  _DWORD *v93; // edi
  _DWORD *v94; // eax
  _DWORD *v95; // ecx
  _DWORD *v96; // edx
  _DWORD *v97; // eax
  const char *v99; // [esp-14h] [ebp-44h]
  const char *v100; // [esp-14h] [ebp-44h]
  const char *v101; // [esp-14h] [ebp-44h]
  const char *v102; // [esp-10h] [ebp-40h]
  const char *v103; // [esp-10h] [ebp-40h]
  const char *v104; // [esp-10h] [ebp-40h]
  const char *v105; // [esp-Ch] [ebp-3Ch]
  const char *v106; // [esp-Ch] [ebp-3Ch]
  const char *v107; // [esp-Ch] [ebp-3Ch]
  const char *v108; // [esp-Ch] [ebp-3Ch]
  const char *v109; // [esp-8h] [ebp-38h]
  const char *v110; // [esp-8h] [ebp-38h]
  const char *v111; // [esp-8h] [ebp-38h]
  const char *v112; // [esp-8h] [ebp-38h]
  const char *v113; // [esp-4h] [ebp-34h]
  float a2; // [esp+0h] [ebp-30h]
  float a2a; // [esp+0h] [ebp-30h]
  _DWORD *a2b; // [esp+0h] [ebp-30h]
  const char *a2c; // [esp+0h] [ebp-30h]
  _DWORD *a2d; // [esp+0h] [ebp-30h]
  _DWORD *a2e; // [esp+0h] [ebp-30h]
  float a2f; // [esp+0h] [ebp-30h]
  float a2g; // [esp+0h] [ebp-30h]
  BSStringT v122; // [esp+10h] [ebp-20h] BYREF
  double v123; // [esp+18h] [ebp-18h] BYREF
  int v124; // [esp+24h] [ebp-Ch]
  int v125; // [esp+2Ch] [ebp-4h]
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  switch ( a5 )
  {
    case 1:
      v7 = *(_DWORD *)(a1 + 0x110);
      v8 = *(_DWORD *)(v7 + 8);
      v9 = (int *)(v7 + 8);
      if ( v8 != nWidth || v9[1] != nHeight )
        ShowUIMessageBox(
          (char *)dword_B38CE0,
          (char)&savedregs,
          st5_0,
          a3,
          a4,
          (const char *)dword_B38CE0,
          0,
          1,
          (const char *)sOk,
          0);
      sub_497C10(*v9, v9[1]);
      v10 = byte_B06CEC;
      v11 = *(_DWORD *)(a1 + 0xEC);
      v12 = DoStaticAndArchShadows != 0;
      textMipmapStuff_ = v11;
      texmipmapskip = v11;
      v13 = (v10 != 0 ? 8 : 0) | (v12 ? 2 : 0);
      v70 = byte_B06CBC == 0;
      dword_B2C678 = v13;
      byte_B06CB4 = v13 != 0;
      if ( v70 )
      {
        SetTextureCanopyShadowMap(0);
        sub_482670(&TES->gridCellArray->__vftable);
        dword_B42F40 &= ~0x20u;
      }
      else
      {
        ShadowCanopyPass(TES->gridCellArray);
        dword_B42F40 |= 0x20u;
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1480C);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&aGIJ);
      __asm
      {
        fld     dword ptr [eax]
        fsubr   [esp+2Ch+var_18]
      }
      v16 = *(_DWORD **)(a1 + 0x54);
      __asm { fstp    [esp+30h+var_18] }
      Tile_GetFloat(v16, 0xFB5);
      __asm { fdiv    qword ptr ds:0A309F0h }
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&aGIJ);
      __asm
      {
        fld     dword ptr [eax]
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B0760Ch
      }
      flt_B0760C = _ET1;
      sub_55FCB0();
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14824);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1481C);
      __asm
      {
        fld     dword ptr [eax]
        fsubr   [esp+2Ch+var_18]
      }
      v21 = *(_DWORD **)(a1 + 0x5C);
      __asm { fstp    [esp+30h+var_18] }
      Tile_GetFloat(v21, 0xFB5);
      __asm { fdiv    qword ptr ds:0A309F0h }
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1481C);
      __asm { fld     dword ptr [eax] }
      __asm
      {
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B0762Ch
      }
      SettingLODFadeOutMultActors = _ET1;
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1483C);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14834);
      __asm { fld     dword ptr [eax] }
      v26 = *(_DWORD **)(a1 + 0x64);
      __asm { fsubr   [esp+2Ch+var_18] }
      __asm { fstp    [esp+30h+var_18] }
      Tile_GetFloat(v26, 0xFB5);
      __asm { fdiv    qword ptr ds:0A309F0h }
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14834);
      __asm { fld     dword ptr [eax] }
      __asm
      {
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B07624h
      }
      SettingLODFadeOutMultItems = _ET1;
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14854);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1484C);
      __asm { fld     dword ptr [eax] }
      v31 = *(_DWORD **)(a1 + 0x6C);
      __asm { fsubr   [esp+2Ch+var_18] }
      __asm { fstp    [esp+30h+var_18] }
      Tile_GetFloat(v31, 0xFB5);
      __asm { fdiv    qword ptr ds:0A309F0h }
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1484C);
      __asm
      {
        fld     dword ptr [eax]
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B0761Ch
      }
      SettingLODFadeOutMultObjects = _ET1;
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x7C), 0xFB5);
      __asm { fdiv    qword ptr ds:0A309F0h }
      __asm
      {
        fmul    qword ptr ds:0A6DD08h
        fadd    qword ptr ds:0A6BEA0h
        fstp    dword ptr ds:0B09B18h
      }
      SettingGrassEndDistance = _ET1;
      _EAX = GameSetting_GetSafeFloatPointer((int *)&SettingGrassEndDistance);
      __asm
      {
        fld     dword ptr [eax]
        fcomp   qword ptr ds:0A47A30h
        fnstsw  ax
      }
      if ( __SETP__(BYTE1(_EAX) & 0x41, 0) )
      {
        _EAX = GameSetting_GetSafeFloatPointer((int *)&SettingGrassEndDistance);
        __asm
        {
          fld     dword ptr [eax]
          fsub    qword ptr ds:0A2FC70h
        }
        __asm { fstp    dword ptr ds:0B09B10h }
        SettingGrassStartFadeDistance = _ET1;
        _EAX = GameSetting_GetSafeFloatPointer((int *)&SettingGrassStartFadeDistance);
        __asm
        {
          fldz
          fcom    dword ptr [eax]
          fnstsw  ax
        }
        if ( (BYTE1(_EAX) & 0x41) != 0 )
        {
          __asm { fstp    st }
        }
        else
        {
          __asm { fstp    dword ptr ds:0B09B10h }
          SettingGrassStartFadeDistance = _ET1;
        }
      }
      else
      {
        __asm
        {
          fldz
          fst     dword ptr ds:0B09B18h
        }
        SettingGrassEndDistance = _ET1;
        __asm { fstp    dword ptr ds:0B09B10h }
        SettingGrassStartFadeDistance = _ET1;
        sub_7C4CE0();
      }
      Singleton = InterfaceManager_GetSingleton(0, 0);
      if ( sub_57CFA0(Singleton, 0) != 0x414 )
        sub_66B710(TESDataHandler_g_PlayerRef, Float, st5_0, 1);
      v44 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xAC), 0xFB5);
      dword_B06EFC = Double_To_SInt32(v44);
      v45 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xA4), 0xFB5);
      dword_B06F04 = Double_To_SInt32(v45);
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14894);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1488C);
      __asm
      {
        fld     dword ptr [eax]
        fsubr   [esp+2Ch+var_18]
      }
      v48 = *(_DWORD **)(a1 + 0xB4);
      __asm { fstp    [esp+30h+var_18] }
      Tile_GetFloat(v48, 0xFB5);
      __asm { fdiv    qword ptr ds:0A309F0h }
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1488C);
      __asm { fld     dword ptr [eax] }
      __asm
      {
        fadd    [esp+30h+var_18]
        fstp    dword ptr [esp+30h+var_18]
        fld     dword ptr [esp+30h+var_18]
        fstp    [esp+30h+a2]; float
      }
      sub_497D20(a2);
      Tile_GetFloat(*(_DWORD **)(a1 + 0x94), 0xFB5);
      __asm
      {
        fdiv    qword ptr ds:0A309F0h
        fadd    qword ptr ds:0A2FC68h
        fstp    dword ptr ds:0B0312Ch
      }
      flt_B0312C = _ET1;
      if ( *(_DWORD *)(a1 + 0xF0) )
        __asm { fld     dword ptr ds:0A31C80h }
      else
        __asm { fldz }
      __asm
      {
        fstp    dword ptr [esp+2Ch+var_18]
        fld     dword ptr [esp+2Ch+var_18]
        fstp    dword ptr ds:0B097C8h
      }
      flt_B097C8 = _ET1;
      byte_B06F5C = *(_DWORD *)(a1 + 0xF0) == 2;
      v52 = *(_DWORD *)(a1 + 0xF4);
      if ( v52 == 2 )
      {
        dword_B06F2C = 2;
        sub_497AB0(2u);
      }
      else if ( v52 == 1 )
      {
        dword_B06F2C = 1;
        sub_497AB0(1u);
      }
      else
      {
        dword_B06F2C = 0;
        sub_497AB0(0);
      }
      v53 = TES;
      bUseWaterHiRes = *(_DWORD *)(a1 + 0xF8) == 1;
      SetWaterResolution(v53->waterManager);
      bDynamicWindowsReflection = bDynWinRelfections_;
      SetMultiSample(*(_DWORD *)(a1 + 0xFC));
      sub_5DDE20(st5_0, a3);
      sub_5BD610();
      return;
    case 4:
      Tile_GetFloat(*(_DWORD **)(a1 + 0x48), 0xFC9);
      __asm
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
      {
        byte_B43077 = 1;
        byte_B02D70 = 1;
        v75 = sub_404E10(&byte_B02D70);
        sub_59B640(*(_DWORD **)(a1 + 0x48), v75);
      }
      *(_DWORD *)(a1 + 0xEC) = 0;
      _EAX = GameSetting_GetSafeFloatPointer(&aSs_fJ);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    dword ptr ds:0B0760Ch }
      flt_B0760C = _ET1;
      _EAX = GameSetting_GetSafeFloatPointer(&dword_B14814);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    dword ptr ds:0B0762Ch }
      SettingLODFadeOutMultActors = _ET1;
      _EAX = GameSetting_GetSafeFloatPointer(&dword_B1482C);
      __asm { fld     dword ptr [eax] }
      __asm { fstp    dword ptr ds:0B07624h }
      SettingLODFadeOutMultItems = _ET1;
      _EAX = GameSetting_GetSafeFloatPointer(&dword_B14844);
      __asm
      {
        fld     dword ptr [eax]
        fstp    dword ptr ds:0B0761Ch
      }
      SettingLODFadeOutMultObjects = _ET1;
      byte_B06F0C = 0;
      __asm { fld     dword ptr ds:0A3D8F4h }
      byte_B06F14 = 0;
      __asm { fstp    dword ptr ds:0B09B18h }
      SettingGrassEndDistance = _ET1;
      byte_B06CBC = 1;
      bIsHDR = sub_5DDD00();
      byte_B07060 = 1;
      byte_B09AE8 = 1;
      byte_B09AF0 = 1;
      byte_B07090 = 1;
      bDynWinRelfections_ = 1;
      __asm { fld1 }
      __asm { fstp    [esp+30h+a2]; float }
      byte_B06D34 = !sub_5DDD00();
      sub_497AE0(a2f);
      sub_497C30();
      v85 = *(_DWORD **)(a1 + 0x4C);
      if ( v85 )
        Tile_SetString(v85, (_DWORD *)0xFDE, (char *)sOffButtonText);
      v86 = *(_DWORD **)(a1 + 0x78);
      if ( v86 )
        Tile_SetString(v86, (_DWORD *)0xFDE, (char *)sOffButtonText);
      v87 = *(_DWORD **)(a1 + 0x50);
      if ( v87 )
        Tile_SetString(v87, (_DWORD *)0xFDE, (char *)sOnButtonText);
      sub_59B640(*(_DWORD **)(a1 + 0xBC), bIsHDR);
      v88 = *(_DWORD **)(a1 + 0xC4);
      if ( v88 )
        Tile_SetString(v88, (_DWORD *)0xFDE, (char *)sOnButtonText);
      v89 = *(_DWORD **)(a1 + 0x9C);
      if ( v89 )
        Tile_SetString(v89, (_DWORD *)0xFDE, (char *)sOnButtonText);
      v90 = *(_DWORD **)(a1 + 0xA0);
      if ( v90 )
        Tile_SetString(v90, (_DWORD *)0xFDE, (char *)sOnButtonText);
      v91 = *(_DWORD **)(a1 + 0xC8);
      if ( v91 )
        Tile_SetString(v91, (_DWORD *)0xFDE, (char *)sOnButtonText);
      v92 = *(_DWORD **)(a1 + 0xCC);
      if ( v92 )
        Tile_SetString(v92, (_DWORD *)0xFDE, (char *)sOnButtonText);
      sub_59B640(*(_DWORD **)(a1 + 0xE0), byte_B06D34);
      v93 = *(_DWORD **)(a1 + 0x104);
      v94 = v93;
      if ( !v93 )
        goto LABEL_130;
      while ( 1 )
      {
        v70 = v94[2] == 0x280;
        v95 = v94 + 2;
        v96 = v94;
        v94 = (_DWORD *)*v94;
        if ( v70 && v95[1] == 0x1E0 )
          break;
        if ( !v94 )
        {
LABEL_130:
          v97 = 0;
          goto LABEL_131;
        }
      }
      v97 = v96;
LABEL_131:
      *(_DWORD *)(a1 + 0x110) = v97;
      if ( !v97 )
        *(_DWORD *)(a1 + 0x110) = v93;
      sub_5DEAD0((_DWORD *)a1);
      __asm { fld     dword ptr ds:0A34A80h }
      __asm { fstp    [esp+30h+a2]; float }
      dword_B06EFC = 2;
      dword_B06F04 = 4;
      sub_497D20(a2g);
      __asm
      {
        fld1
        fstp    dword ptr ds:0B0312Ch
      }
      flt_B0312C = _ET1;
      *(_DWORD *)(a1 + 0xF0) = 2;
      *(_DWORD *)(a1 + 0xF4) = 0;
      *(_DWORD *)(a1 + 0xF8) = 0;
      *(_DWORD *)(a1 + 0xFC) = 0;
      sub_5DE920((_DWORD *)a1);
      sub_5DE2E0(a1);
      return;
    case 8:
    case 0x1A:
      v70 = sub_587C20(a5) == 7;
      v54 = *(int **)(a1 + 0x110);
      if ( v70 )
      {
        if ( v54 )
          v55 = *v54;
        else
          v55 = 0;
        *(_DWORD *)(a1 + 0x110) = v55;
        if ( !v55 )
          *(_DWORD *)(a1 + 0x110) = *(_DWORD *)(a1 + 0x104);
      }
      else
      {
        v56 = sub_5DDCE0(*(_DWORD *)(a1 + 0x110));
        *(_DWORD *)(a1 + 0x110) = v56;
        if ( !v56 )
          *(_DWORD *)(a1 + 0x110) = *(_DWORD *)(a1 + 0x108);
      }
      sub_5DEAD0((_DWORD *)a1);
      LODWORD(v123) = (4 * *(_DWORD *)(*(_DWORD *)(a1 + 0x110) + 0xC) < (unsigned int)(3
                                                                                     * *(_DWORD *)(*(_DWORD *)(a1 + 0x110)
                                                                                                 + 8)))
                    + 1;
      __asm { fild    dword ptr [esp+2Ch+var_18] }
      __asm { fstp    [esp+30h+a2]; a3 }
      Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFB1, a2a);
      return;
    case 9:
      v62 = byte_B43077 == 0;
      byte_B43077 = v62;
      byte_B02D70 = v62;
      v63 = sub_404E10(&byte_B02D70);
      LOBYTE(v123) = v63;
      sub_5DE9C0((Tile **)a1, v63);
      goto LABEL_104;
    case 0xA:
      byte_B06F0C = byte_B06F0C == 0;
      v63 = sub_404E10(&byte_B06F0C);
      goto LABEL_104;
    case 0xB:
      v63 = byte_B06CBC == 0;
      byte_B06CBC = v63;
      goto LABEL_104;
    case 0x14:
      while ( 1 )
      {
        v66 = ++*(_DWORD *)(a1 + 0xEC);
        if ( v66 > 3 )
          break;
        if ( v66 < 3 )
          goto LABEL_76;
      }
      *(_DWORD *)(a1 + 0xEC) = 0;
LABEL_76:
      sub_5DDD20(a1);
      if ( (dword_B3B744 & 8) == 0 )
      {
        ShowUIMessageBox(
          (char *)sOk,
          (char)&savedregs,
          st5_0,
          a3,
          a4,
          (const char *)dword_B38CE8,
          0,
          0,
          (const char *)sOk,
          0);
        LOWORD(dword_B3B744) |= 8u;
      }
      return;
    case 0x15:
      byte_B06F14 = byte_B06F14 == 0;
      v63 = sub_404E10(&byte_B06F14);
      goto LABEL_104;
    case 0x1E:
      byte_B09AE8 = byte_B09AE8 == 0;
      v63 = sub_404E10(&byte_B09AE8);
      if ( (dword_B3B744 & 2) == 0 )
      {
        ShowUIMessageBox(
          (char *)sOk,
          (char)&savedregs,
          st5_0,
          a3,
          a4,
          (const char *)dword_B38CE8,
          0,
          0,
          (const char *)sOk,
          0);
        LOWORD(dword_B3B744) |= 2u;
      }
      goto LABEL_104;
    case 0x1F:
      byte_B09AF0 = byte_B09AF0 == 0;
      v63 = sub_404E10(&byte_B09AF0);
      if ( (dword_B3B744 & 4) == 0 )
      {
        ShowUIMessageBox(
          (char *)sOk,
          (char)&savedregs,
          st5_0,
          a3,
          a4,
          (const char *)dword_B38CE8,
          0,
          0,
          (const char *)sOk,
          0);
        LOWORD(dword_B3B744) |= 4u;
      }
      goto LABEL_104;
    case 0x26:
      if ( *(_BYTE *)(a1 + 0x115) )
      {
        if ( !bIsHDR )
        {
          if ( *(_DWORD *)(a1 + 0xFC) )
          {
            *(_DWORD *)(a1 + 0xFC) = 0;
            sub_5DE920((_DWORD *)a1);
            if ( (dword_B3B744 & 0x20) == 0 )
            {
              v123 = 0.0;
              a2c = (const char *)dword_B3B758;
              v113 = *(const char **)dword_B3B768;
              v110 = (const char *)dword_B3B750;
              v106 = *(const char **)dword_B3B760;
              v125 = 1;
              BSStringT_Static_Format((BSStringT *)&v123, "%s %s %s %s.", v106, v110, v113, a2c);
              ShowUIMessageBox(
                (char *)sOk,
                (char)&savedregs,
                st5_0,
                a3,
                a4,
                (const char *)LODWORD(v123),
                (int)sub_5DE960,
                0,
                (const char *)sOk,
                0);
              LOWORD(dword_B3B744) |= 0x20u;
              dword_B147F8 = 0;
              v125 = 0xFFFFFFFF;
              BSStringT_Clear((unsigned int *)&v123);
            }
          }
          if ( byte_B06D34 )
          {
            v64 = *(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0xC);
            a2d = *(_DWORD **)(a1 + 0xE0);
            *(_BYTE *)(a1 + 0x115) = 0;
            v64(a1, 0x2F, a2d);
            *(_BYTE *)(a1 + 0x115) = 1;
            if ( dword_B147F8 == 0xFFFFFFFF && (dword_B3B744 & 0x100) == 0 )
            {
              v122.m_data = 0;
              v122.m_dataLen = 0;
              v122.m_bufLen = 0;
              v111 = (const char *)dword_B3B758;
              v107 = *(const char **)dword_B3B768;
              v103 = (const char *)dword_B3B750;
              v100 = *(const char **)dword_B3B770;
              v124 = 2;
              BSStringT_Static_Format(&v122, "%s %s %s %s.", v100, v103, v107, v111);
              ShowUIMessageBox(
                v65,
                (char)&savedregs,
                st5_0,
                a3,
                a4,
                v122.m_data,
                (int)sub_5DE960,
                0,
                (const char *)sOk,
                0);
              LOWORD(dword_B3B744) |= 0x100u;
              dword_B147F8 = 0;
              v124 = 0xFFFFFFFF;
              BSStringT_Clear((unsigned int *)&v122);
            }
          }
        }
      }
      v63 = bIsHDR == 0;
      v70 = dword_B147F8 == 0xFFFFFFFF;
      bIsHDR = v63;
      if ( v70 )
      {
        if ( *(_BYTE *)(a1 + 0x115) )
        {
          if ( (dword_B3B744 & 1) == 0 )
          {
            ShowUIMessageBox(
              (char *)sOk,
              (char)&savedregs,
              st5_0,
              a3,
              a4,
              (const char *)dword_B38CE8,
              0,
              0,
              (const char *)sOk,
              0);
            LOWORD(dword_B3B744) |= 1u;
          }
        }
      }
      goto LABEL_104;
    case 0x27:
      while ( 1 )
      {
        v69 = ++*(_DWORD *)(a1 + 0xF8);
        if ( v69 > 2 )
          break;
        if ( v69 < 2 )
        {
          sub_5DDDA0(a1);
          return;
        }
      }
      *(_DWORD *)(a1 + 0xF8) = 0;
      sub_5DDDA0(a1);
      return;
    case 0x28:
      byte_B07060 = byte_B07060 == 0;
      v63 = sub_404E10(&byte_B07060);
      goto LABEL_104;
    case 0x29:
      byte_B07090 = byte_B07090 == 0;
      v63 = sub_404E10(&byte_B07090);
      goto LABEL_104;
    case 0x2A:
      v63 = bDynWinRelfections_ == 0;
      bDynWinRelfections_ = v63;
      goto LABEL_104;
    case 0x2B:
      while ( 1 )
      {
        v67 = ++*(_DWORD *)(a1 + 0xF0);
        if ( v67 > 3 )
          break;
        if ( v67 < 3 )
        {
          sub_5DDD60(a1);
          return;
        }
      }
      *(_DWORD *)(a1 + 0xF0) = 0;
      sub_5DDD60(a1);
      return;
    case 0x2D:
    case 0x2E:
      if ( !*(_DWORD *)(a1 + 0xFC) )
      {
        if ( bIsHDR )
        {
          v57 = *(void (__cdecl **)(int, _DWORD *))(*(_DWORD *)a1 + 0xC);
          a2b = *(_DWORD **)(a1 + 0xBC);
          *(_BYTE *)(a1 + 0x115) = 0;
          v57(0x26, a2b);
          *(_BYTE *)(a1 + 0x115) = 1;
          if ( (dword_B3B744 & 0x40) == 0 )
          {
            v122.m_data = 0;
            v122.m_dataLen = 0;
            v122.m_bufLen = 0;
            v109 = (const char *)dword_B3B758;
            v105 = *(const char **)dword_B3B760;
            v102 = (const char *)dword_B3B750;
            v99 = *(const char **)dword_B3B768;
            v124 = 0;
            BSStringT_Static_Format(&v122, "%s %s %s %s.", v99, v102, v105, v109);
            ShowUIMessageBox(
              v58,
              (char)&savedregs,
              st5_0,
              a3,
              a4,
              v122.m_data,
              (int)sub_5DE960,
              0,
              (const char *)sOk,
              0);
            LOWORD(dword_B3B744) |= 0x40u;
            dword_B147F8 = 4;
            v124 = 0xFFFFFFFF;
            BSStringT_Clear((unsigned int *)&v122);
          }
        }
      }
      if ( sub_587C20(a5) == 0x2C )
      {
        while ( 1 )
        {
          v59 = --*(_DWORD *)(a1 + 0xFC) < 0;
          v60 = *(_DWORD *)(a1 + 0xFC);
          if ( v59 )
          {
            *(_DWORD *)(a1 + 0xFC) = 0x10;
          }
          else
          {
            if ( v60 == 1 )
              goto LABEL_50;
            if ( !v60 )
              goto LABEL_51;
          }
          if ( sub_497D50(*(_DWORD *)(a1 + 0xFC)) )
            goto LABEL_51;
        }
      }
      do
      {
        v61 = ++*(_DWORD *)(a1 + 0xFC);
        if ( v61 > 0x10 )
        {
LABEL_50:
          *(_DWORD *)(a1 + 0xFC) = 0;
          break;
        }
        if ( v61 == 1 )
        {
          *(_DWORD *)(a1 + 0xFC) = 2;
        }
        else if ( !v61 )
        {
          break;
        }
      }
      while ( !sub_497D50(*(_DWORD *)(a1 + 0xFC)) );
LABEL_51:
      sub_5DE920((_DWORD *)a1);
      if ( dword_B147F8 == 0xFFFFFFFF && (dword_B3B744 & 0x10) == 0 )
      {
        ShowUIMessageBox(
          (char *)dword_B38CE8,
          (char)&savedregs,
          st5_0,
          a3,
          a4,
          (const char *)dword_B38CE8,
          0,
          0,
          (const char *)sOk,
          0);
        LOWORD(dword_B3B744) |= 0x10u;
      }
      return;
    case 0x2F:
      v70 = byte_B06D34 == 0;
      if ( !byte_B06D34 )
      {
        if ( bIsHDR )
        {
          v71 = *(void (__cdecl **)(int, _DWORD *))(*(_DWORD *)a1 + 0xC);
          a2e = *(_DWORD **)(a1 + 0xBC);
          *(_BYTE *)(a1 + 0x115) = 0;
          v71(0x26, a2e);
          *(_BYTE *)(a1 + 0x115) = 1;
          if ( SLOBYTE(dword_B3B744) >= 0 )
          {
            v122.m_data = 0;
            v122.m_dataLen = 0;
            v122.m_bufLen = 0;
            v112 = (const char *)dword_B3B758;
            v108 = *(const char **)dword_B3B770;
            v104 = (const char *)dword_B3B750;
            v101 = *(const char **)dword_B3B768;
            v124 = 3;
            BSStringT_Static_Format(&v122, "%s %s %s %s.", v101, v104, v108, v112);
            ShowUIMessageBox(
              v72,
              (char)&savedregs,
              st5_0,
              a3,
              a4,
              v122.m_data,
              (int)sub_5DE960,
              0,
              (const char *)sOk,
              0);
            LOWORD(dword_B3B744) |= 0x80u;
            dword_B147F8 = 9;
            v124 = 0xFFFFFFFF;
            BSStringT_Clear((unsigned int *)&v122);
          }
        }
        v70 = byte_B06D34 == 0;
      }
      v63 = v70;
      v70 = dword_B147F8 == 0xFFFFFFFF;
      byte_B06D34 = v63;
      if ( v70 && (dword_B3B744 & 0x200) == 0 )
      {
        ShowUIMessageBox(
          (char *)sOk,
          (char)&savedregs,
          st5_0,
          a3,
          a4,
          (const char *)dword_B38CE8,
          0,
          0,
          (const char *)sOk,
          0);
        LOWORD(dword_B3B744) |= 0x200u;
      }
LABEL_104:
      if ( a6 )
      {
        v73 = (char *)sOnButtonText;
        if ( !v63 )
          v73 = (char *)sOffButtonText;
        Tile_SetString(a6, (_DWORD *)0xFDE, v73);
      }
      return;
    case 0x30:
      break;
    default:
      return;
  }
  while ( 1 )
  {
    v68 = ++*(_DWORD *)(a1 + 0xF4);
    if ( v68 > 3 )
      break;
    if ( v68 < 3 )
    {
      sub_5DDDE0(a1);
      return;
    }
  }
  *(_DWORD *)(a1 + 0xF4) = 0;
  sub_5DDDE0(a1);
}
