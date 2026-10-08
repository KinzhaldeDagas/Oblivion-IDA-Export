// Display/settings apply handler; recomputes tree distance scalar flt_B0760C and calls 0x55FCB0 to refresh cached SpeedTree distances.
void __userpurge sub_5DF160(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5, _DWORD *a6)
{
  int v7; // edi
  int v8; // ecx
  int *v9; // edi
  char v10; // dl
  float v11; // eax
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

  switch ( a5 )
  {
    case 1:
      v7 = *(_DWORD *)(a1 + 0x110); /*0x5df1ab*/
      v8 = *(_DWORD *)(v7 + 8); /*0x5df1b1*/
      v9 = (int *)(v7 + 8); /*0x5df1b4*/
      if ( v8 != nWidth || v9[1] != nHeight ) /*0x5df1cd*/
        ShowUIMessageBox((char *)stru_B38CE0, st5_0, a3, a4, (char *)stru_B38CE0, 0, 1, (char *)MEMORY[0xB38CF0], 0); /*0x5df1e1*/
      sub_497C10(*v9, v9[1]); /*0x5df1f0*/
      v10 = g_bDoActorShadowsSetting; /*0x5df1fb*/
      v11 = *(float *)(a1 + 0xEC); /*0x5df201*/
      v12 = g_bDoStaticAndArchShadowsSetting != 0;// Display-settings apply path reads bDoStaticAndArchShadows before recomposing the category mask. /*0x5df20a*/
      MEMORY[0xB3F9B0][0x9AB] = v11; /*0x5df211*/
      *(float *)&texmipmapskip = v11; /*0x5df216*/
      v13 = (v10 != 0 ? 8 : 0) | (v12 ? 2 : 0);
      v70 = byte_B06CBC == 0; /*0x5df22b*/
      g_ShadowCasterCategoryMask = v13;         // Display-settings apply writes Architecture bit 0x02 | Actors bit 0x08 to the caster-category mask. /*0x5df232*/
      byte_B06CB4 = v13 != 0; /*0x5df238*/
      if ( v70 ) /*0x5df23d*/
      {
        SetTextureCanopyShadowMap(0); /*0x5df258*/
        ClearCanopyShadowMap(&MEMORY[0xB333A0]->gridCellArray->__vftable); /*0x5df269*/
        *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] &= ~0x20u; /*0x5df26e*/
      }
      else
      {
        ShadowCanopyPass(MEMORY[0xB333A0]->gridCellArray); /*0x5df248*/
        *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] |= 0x20u; /*0x5df24d*/
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1480C); /*0x5df27a*/
      __asm { fld     dword ptr [eax] } /*0x5df27f*/
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&aGIJ); /*0x5df28a*/
      __asm /*0x5df28f*/
      {
        fld     dword ptr [eax]
        fsubr   [esp+2Ch+var_18]
      }
      v16 = *(_DWORD **)(a1 + 0x54); /*0x5df295*/
      __asm { fstp    [esp+30h+var_18] } /*0x5df29d*/
      Tile_GetFloat(v16, 0xFB5); /*0x5df2a1*/
      __asm { fdiv    qword ptr ds:0A309F0h } /*0x5df2a6*/
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&aGIJ); /*0x5df2b9*/
      __asm /*0x5df2be*/
      {
        fld     dword ptr [eax]
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B0760Ch
      }
      flt_B0760C = _ET1; /*0x5df2c4*/
      sub_55FCB0(); /*0x5df2ca*/
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14824); /*0x5df2d4*/
      __asm { fld     dword ptr [eax] } /*0x5df2d9*/
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1481C); /*0x5df2e4*/
      __asm /*0x5df2e9*/
      {
        fld     dword ptr [eax]
        fsubr   [esp+2Ch+var_18]
      }
      v21 = *(_DWORD **)(a1 + 0x5C); /*0x5df2ef*/
      __asm { fstp    [esp+30h+var_18] } /*0x5df2f7*/
      Tile_GetFloat(v21, 0xFB5); /*0x5df2fb*/
      __asm { fdiv    qword ptr ds:0A309F0h } /*0x5df300*/
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1481C); /*0x5df313*/
      __asm { fld     dword ptr [eax] } /*0x5df318*/
      __asm
      {
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B0762Ch
      }
      SettingLODFadeOutMultActors = _ET1; /*0x5df323*/
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1483C); /*0x5df329*/
      __asm { fld     dword ptr [eax] } /*0x5df32e*/
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14834); /*0x5df339*/
      __asm { fld     dword ptr [eax] } /*0x5df33e*/
      v26 = *(_DWORD **)(a1 + 0x64); /*0x5df340*/
      __asm { fsubr   [esp+2Ch+var_18] } /*0x5df343*/
      __asm { fstp    [esp+30h+var_18] }
      Tile_GetFloat(v26, 0xFB5); /*0x5df350*/
      __asm { fdiv    qword ptr ds:0A309F0h } /*0x5df355*/
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14834); /*0x5df368*/
      __asm { fld     dword ptr [eax] } /*0x5df36d*/
      __asm
      {
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B07624h
      }
      SettingLODFadeOutMultItems = _ET1; /*0x5df378*/
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14854); /*0x5df37e*/
      __asm { fld     dword ptr [eax] } /*0x5df383*/
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1484C); /*0x5df38e*/
      __asm { fld     dword ptr [eax] } /*0x5df393*/
      v31 = *(_DWORD **)(a1 + 0x6C); /*0x5df395*/
      __asm { fsubr   [esp+2Ch+var_18] } /*0x5df398*/
      __asm { fstp    [esp+30h+var_18] }
      Tile_GetFloat(v31, 0xFB5); /*0x5df3a5*/
      __asm { fdiv    qword ptr ds:0A309F0h } /*0x5df3aa*/
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1484C); /*0x5df3bd*/
      __asm /*0x5df3c2*/
      {
        fld     dword ptr [eax]
        fadd    [esp+2Ch+var_18]
        fstp    dword ptr ds:0B0761Ch
      }
      SettingLODFadeOutMultObjects = _ET1; /*0x5df3c8*/
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x7C), 0xFB5); /*0x5df3d6*/
      __asm { fdiv    qword ptr ds:0A309F0h } /*0x5df3db*/
      __asm
      {
        fmul    qword ptr ds:0A6DD08h
        fadd    qword ptr ds:0A6BEA0h
        fstp    dword ptr ds:0B09B18h
      }
      SettingGrassEndDistance = _ET1; /*0x5df3f2*/
      _EAX = GameSetting_GetSafeFloatPointer((int *)&SettingGrassEndDistance); /*0x5df3f8*/
      __asm /*0x5df3fd*/
      {
        fld     dword ptr [eax]
        fcomp   qword ptr ds:0A47A30h
        fnstsw  ax
      }
      if ( __SETP__(BYTE1(_EAX) & 0x41, 0) ) /*0x5df40a*/
      {
        _EAX = GameSetting_GetSafeFloatPointer((int *)&SettingGrassEndDistance); /*0x5df426*/
        __asm /*0x5df42b*/
        {
          fld     dword ptr [eax]
          fsub    qword ptr ds:0A2FC70h
        }
        __asm { fstp    dword ptr ds:0B09B10h }
        SettingGrassStartFadeDistance = _ET1; /*0x5df438*/
        _EAX = GameSetting_GetSafeFloatPointer((int *)&SettingGrassStartFadeDistance); /*0x5df43e*/
        __asm /*0x5df443*/
        {
          fldz
          fcom    dword ptr [eax]
          fnstsw  ax
        }
        if ( (BYTE1(_EAX) & 0x41) != 0 ) /*0x5df44c*/
        {
          __asm { fstp    st } /*0x5df456*/
        }
        else
        {
          __asm { fstp    dword ptr ds:0B09B10h } /*0x5df44e*/
          SettingGrassStartFadeDistance = _ET1; /*0x5df44e*/
        }
      }
      else
      {
        __asm /*0x5df40c*/
        {
          fldz
          fst     dword ptr ds:0B09B18h
        }
        SettingGrassEndDistance = _ET1; /*0x5df40e*/
        __asm { fstp    dword ptr ds:0B09B10h } /*0x5df414*/
        SettingGrassStartFadeDistance = _ET1; /*0x5df414*/
        sub_7C4CE0(); /*0x5df41a*/
      }
      Singleton = InterfaceManager_GetSingleton(0, 0); /*0x5df45e*/
      if ( sub_57CFA0(Singleton, 0) != 0x414 ) /*0x5df472*/
        sub_66B710(reference, Float, 1); /*0x5df47b*/
      v44 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xAC), 0xFB5); /*0x5df48b*/
      g_iActorShadowCountExteriorSetting = Double_To_SInt32(v44); /*0x5df495*/
      v45 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xA4), 0xFB5); /*0x5df4a5*/
      g_iActorShadowCountInteriorSetting = Double_To_SInt32(v45); /*0x5df4b4*/
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B14894); /*0x5df4b9*/
      __asm { fld     dword ptr [eax] } /*0x5df4be*/
      __asm { fstp    [esp+2Ch+var_18] }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1488C); /*0x5df4c9*/
      __asm /*0x5df4ce*/
      {
        fld     dword ptr [eax]
        fsubr   [esp+2Ch+var_18]
      }
      v48 = *(_DWORD **)(a1 + 0xB4); /*0x5df4d4*/
      __asm { fstp    [esp+30h+var_18] } /*0x5df4df*/
      Tile_GetFloat(v48, 0xFB5); /*0x5df4e3*/
      __asm { fdiv    qword ptr ds:0A309F0h } /*0x5df4e8*/
      __asm
      {
        fmul    [esp+2Ch+var_18]
        fstp    [esp+2Ch+var_18]
      }
      _EAX = GameSetting_GetSafeFloatPointer((int *)&flt_B1488C); /*0x5df4fb*/
      __asm { fld     dword ptr [eax] } /*0x5df500*/
      __asm
      {
        fadd    [esp+30h+var_18]
        fstp    dword ptr [esp+30h+var_18]
        fld     dword ptr [esp+30h+var_18]
        fstp    [esp+30h+a2]; float
      }
      sub_497D20(a2); /*0x5df512*/
      Tile_GetFloat(*(_DWORD **)(a1 + 0x94), 0xFB5); /*0x5df525*/
      __asm /*0x5df52a*/
      {
        fdiv    qword ptr ds:0A309F0h
        fadd    qword ptr ds:0A2FC68h
        fstp    dword ptr ds:0B0312Ch
      }
      flt_B0312C = _ET1; /*0x5df536*/
      if ( *(_DWORD *)(a1 + 0xF0) ) /*0x5df53c*/
        __asm { fld     dword ptr ds:0A31C80h } /*0x5df549*/
      else
        __asm { fldz } /*0x5df545*/
      __asm /*0x5df54f*/
      {
        fstp    dword ptr [esp+2Ch+var_18]
        fld     dword ptr [esp+2Ch+var_18]
        fstp    dword ptr ds:0B097C8h
      }
      g_fDecalLifetime_Display = _ET1; /*0x5df557*/
      g_bDecalsOnSkinnedGeometry_Display = *(_DWORD *)(a1 + 0xF0) == 2; /*0x5df566*/
      v52 = *(_DWORD *)(a1 + 0xF4); /*0x5df56b*/
      if ( v52 == 2 ) /*0x5df573*/
      {
        dword_B06F2C = 2; /*0x5df575*/
        sub_497AB0(2u); /*0x5df57c*/
      }
      else if ( v52 == 1 ) /*0x5df580*/
      {
        dword_B06F2C = 1; /*0x5df582*/
        sub_497AB0(1u); /*0x5df589*/
      }
      else
      {
        dword_B06F2C = 0; /*0x5df58b*/
        sub_497AB0(0); /*0x5df597*/
      }
      v53 = MEMORY[0xB333A0]; /*0x5df59c*/
      bUseWaterHiRes = *(_DWORD *)(a1 + 0xF8) == 1; /*0x5df5ae*/
      SetWaterResolution(v53->waterManager); /*0x5df5b7*/
      bDynamicWindowsReflection = OB_RendererGlobalState_010201A0[0x214]; /*0x5df5c1*/
      SetMultiSample(*(_DWORD *)(a1 + 0xFC)); /*0x5df5cd*/
      sub_5DDE20(st5_0, a3); /*0x5df5d5*/
      sub_5BD610(); /*0x5df5da*/
      return; /*0x5df5f1*/
    case 4:
      Tile_GetFloat(*(_DWORD **)(a1 + 0x48), 0xFC9); /*0x5dfe7a*/
      __asm /*0x5dfe7f*/
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x5dfe8a*/
      {
        OB_RendererGlobalState_010201A0[0x1DE] = 1; /*0x5dfe91*/
        bDisplayLODLand = 1; /*0x5dfe98*/
        v75 = sub_404E10(&bDisplayLODLand); /*0x5dfe9f*/
        ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0x48), v75); /*0x5dfeab*/
      }
      *(_DWORD *)(a1 + 0xEC) = 0; /*0x5dfeb7*/
      _EAX = GameSetting_GetSafeFloatPointer(&aSs_fJ); /*0x5dfebd*/
      __asm { fld     dword ptr [eax] } /*0x5dfec2*/
      __asm { fstp    dword ptr ds:0B0760Ch }
      flt_B0760C = _ET1; /*0x5dfec9*/
      _EAX = GameSetting_GetSafeFloatPointer(&dword_B14814); /*0x5dfecf*/
      __asm { fld     dword ptr [eax] } /*0x5dfed4*/
      __asm { fstp    dword ptr ds:0B0762Ch }
      SettingLODFadeOutMultActors = _ET1; /*0x5dfedb*/
      _EAX = GameSetting_GetSafeFloatPointer(&dword_B1482C); /*0x5dfee1*/
      __asm { fld     dword ptr [eax] } /*0x5dfee6*/
      __asm { fstp    dword ptr ds:0B07624h }
      SettingLODFadeOutMultItems = _ET1; /*0x5dfeed*/
      _EAX = GameSetting_GetSafeFloatPointer(&dword_B14844); /*0x5dfef3*/
      __asm /*0x5dfef8*/
      {
        fld     dword ptr [eax]
        fstp    dword ptr ds:0B0761Ch
      }
      SettingLODFadeOutMultObjects = _ET1; /*0x5dfefa*/
      g_bShadowSourceAsReceiverSetting = 0; /*0x5dff00*/
      __asm { fld     dword ptr ds:0A3D8F4h } /*0x5dff06*/
      byte_B06F14 = 0; /*0x5dff0c*/
      __asm { fstp    dword ptr ds:0B09B18h } /*0x5dff12*/
      SettingGrassEndDistance = _ET1; /*0x5dff12*/
      byte_B06CBC = 1; /*0x5dff18*/
      bIsHDR = sub_5DDD00(); /*0x5dff29*/
      byte_B07060 = 1; /*0x5dff2f*/
      bDisplayLODBuildings = 1; /*0x5dff36*/
      bDisplayLODTrees = 1; /*0x5dff3d*/
      byte_B07090 = 1; /*0x5dff44*/
      OB_RendererGlobalState_010201A0[0x214] = 1; /*0x5dff4b*/
      __asm { fld1 } /*0x5dff57*/
      __asm { fstp    [esp+30h+a2]; float }
      byte_B06D34 = !sub_5DDD00(); /*0x5dff62*/
      Renderer_SetGammaAndMarkDirty(a2f); /*0x5dff68*/
      Renderer_ApplyPendingGammaRamp(); /*0x5dff70*/
      v85 = *(_DWORD **)(a1 + 0x4C); /*0x5dff75*/
      if ( v85 ) /*0x5dff7a*/
        Tile_SetString(v85, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8]); /*0x5dff87*/
      v86 = *(_DWORD **)(a1 + 0x78); /*0x5dff8c*/
      if ( v86 ) /*0x5dff91*/
        Tile_SetString(v86, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA8]); /*0x5dff9f*/
      v87 = *(_DWORD **)(a1 + 0x50); /*0x5dffa4*/
      if ( v87 ) /*0x5dffa9*/
        Tile_SetString(v87, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0]); /*0x5dffb6*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0xBC), bIsHDR); /*0x5dffcc*/
      v88 = *(_DWORD **)(a1 + 0xC4); /*0x5dffd1*/
      if ( v88 ) /*0x5dffd9*/
        Tile_SetString(v88, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0]); /*0x5dffe6*/
      v89 = *(_DWORD **)(a1 + 0x9C); /*0x5dffeb*/
      if ( v89 ) /*0x5dfff3*/
        Tile_SetString(v89, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0]); /*0x5e0001*/
      v90 = *(_DWORD **)(a1 + 0xA0); /*0x5e0006*/
      if ( v90 ) /*0x5e000e*/
        Tile_SetString(v90, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0]); /*0x5e001b*/
      v91 = *(_DWORD **)(a1 + 0xC8); /*0x5e0020*/
      if ( v91 ) /*0x5e0028*/
        Tile_SetString(v91, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0]); /*0x5e0036*/
      v92 = *(_DWORD **)(a1 + 0xCC); /*0x5e003b*/
      if ( v92 ) /*0x5e0043*/
        Tile_SetString(v92, (_DWORD *)0xFDE, (char *)MEMORY[0xB38DA0]); /*0x5e0050*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0xE0), byte_B06D34); /*0x5e0066*/
      v93 = *(_DWORD **)(a1 + 0x104); /*0x5e006b*/
      v94 = v93; /*0x5e0071*/
      if ( !v93 ) /*0x5e0075*/
        goto LABEL_130; /*0x5e0075*/
      while ( 1 ) /*0x5e0080*/
      {
        v70 = v94[2] == 0x280; /*0x5e0080*/
        v95 = v94 + 2; /*0x5e0087*/
        v96 = v94; /*0x5e008a*/
        v94 = (_DWORD *)*v94; /*0x5e008c*/
        if ( v70 && v95[1] == 0x1E0 ) /*0x5e0093*/
          break; /*0x5e0093*/
        if ( !v94 ) /*0x5e009b*/
        {
LABEL_130:
          v97 = 0; /*0x5e009f*/
          goto LABEL_131; /*0x5e009f*/
        }
      }
      v97 = v96; /*0x5e0122*/
LABEL_131:
      *(_DWORD *)(a1 + 0x110) = v97; /*0x5e00a1*/
      if ( !v97 ) /*0x5e00a9*/
        *(_DWORD *)(a1 + 0x110) = v93; /*0x5e00ab*/
      sub_5DEAD0((_DWORD *)a1); /*0x5e00b3*/
      __asm { fld     dword ptr ds:0A34A80h } /*0x5e00b8*/
      __asm { fstp    [esp+30h+a2]; float }
      g_iActorShadowCountExteriorSetting = 2; /*0x5e00c7*/
      g_iActorShadowCountInteriorSetting = 4; /*0x5e00cd*/
      sub_497D20(a2g); /*0x5e00d7*/
      __asm /*0x5e00dc*/
      {
        fld1
        fstp    dword ptr ds:0B0312Ch
      }
      flt_B0312C = _ET1; /*0x5e00de*/
      *(_DWORD *)(a1 + 0xF0) = 2; /*0x5e00e9*/
      *(_DWORD *)(a1 + 0xF4) = 0; /*0x5e00ef*/
      *(_DWORD *)(a1 + 0xF8) = 0; /*0x5e00f5*/
      *(_DWORD *)(a1 + 0xFC) = 0; /*0x5e00fb*/
      sub_5DE920((_DWORD *)a1); /*0x5e0101*/
      sub_5DE2E0(a1); /*0x5e0108*/
      return; /*0x5e0108*/
    case 8:
    case 0x1A:
      v70 = sub_587C20(a5) == 7; /*0x5df5fa*/
      v54 = *(int **)(a1 + 0x110); /*0x5df5fd*/
      if ( v70 ) /*0x5df603*/
      {
        if ( v54 ) /*0x5df607*/
          v55 = *v54; /*0x5df609*/
        else
          v55 = 0; /*0x5df60d*/
        *(_DWORD *)(a1 + 0x110) = v55; /*0x5df611*/
        if ( !v55 ) /*0x5df617*/
          *(_DWORD *)(a1 + 0x110) = *(_DWORD *)(a1 + 0x104); /*0x5df61f*/
      }
      else
      {
        v56 = sub_5DDCE0(*(_DWORD *)(a1 + 0x110)); /*0x5df62e*/
        *(_DWORD *)(a1 + 0x110) = v56; /*0x5df635*/
        if ( !v56 ) /*0x5df63b*/
          *(_DWORD *)(a1 + 0x110) = *(_DWORD *)(a1 + 0x108); /*0x5df643*/
      }
      sub_5DEAD0((_DWORD *)a1); /*0x5df64b*/
      LODWORD(v123) = (4 * *(_DWORD *)(*(_DWORD *)(a1 + 0x110) + 0xC) < (unsigned int)(3 /*0x5df66e*/
                                                                                     * *(_DWORD *)(*(_DWORD *)(a1 + 0x110)
                                                                                                 + 8)))
                    + 1;
      __asm { fild    dword ptr [esp+2Ch+var_18] } /*0x5df672*/
      __asm { fstp    [esp+30h+a2]; value }
      Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFB1, a2a); /*0x5df682*/
      return; /*0x5df699*/
    case 9:
      v62 = OB_RendererGlobalState_010201A0[0x1DE] == 0;// Verified settings-menu case 9 toggles bDisplayLODLand; DistantLOD_UpdateLandLODMap reads this setting when activating LandLOD display. /*0x5df850*/
      OB_RendererGlobalState_010201A0[0x1DE] = v62; /*0x5df853*/
      bDisplayLODLand = v62; /*0x5df858*/
      v63 = sub_404E10(&bDisplayLODLand); /*0x5df862*/
      LOBYTE(v123) = v63; /*0x5df864*/
      sub_5DE9C0((Tile **)a1, v63); /*0x5df86f*/
      goto LABEL_104; /*0x5df874*/
    case 0xA:
      g_bShadowSourceAsReceiverSetting = g_bShadowSourceAsReceiverSetting == 0; /*0x5df888*/
      v63 = sub_404E10(&g_bShadowSourceAsReceiverSetting); /*0x5df892*/
      goto LABEL_104; /*0x5df894*/
    case 0xB:
      v63 = byte_B06CBC == 0; /*0x5df8c1*/
      byte_B06CBC = v63; /*0x5df8c4*/
      goto LABEL_104; /*0x5df8ca*/
    case 0x14:
      while ( 1 ) /*0x5dfad0*/
      {
        v66 = ++*(_DWORD *)(a1 + 0xEC); /*0x5dfad6*/
        if ( v66 > 3 ) /*0x5dfadf*/
          break; /*0x5dfadf*/
        if ( v66 < 3 ) /*0x5dfae1*/
          goto LABEL_76; /*0x5dfae1*/
      }
      *(_DWORD *)(a1 + 0xEC) = 0; /*0x5dfae5*/
LABEL_76:
      sub_5DDD20(a1); /*0x5dfaef*/
      if ( (dword_B3B744[0] & 8) == 0 ) /*0x5dfafd*/
      {
        ShowUIMessageBox( /*0x5dfb17*/
          (char *)MEMORY[0xB38CF0],
          st5_0,
          a3,
          a4,
          (char *)stru_B38CE8,
          0,
          0,
          (char *)MEMORY[0xB38CF0],
          0);
        LOWORD(dword_B3B744[0]) |= 8u; /*0x5dfb1f*/
      }
      return; /*0x5dfb39*/
    case 0x15:
      byte_B06F14 = byte_B06F14 == 0; /*0x5df8a3*/
      v63 = sub_404E10(&byte_B06F14); /*0x5df8b3*/
      goto LABEL_104; /*0x5df8b5*/
    case 0x1E:
      bDisplayLODBuildings = bDisplayLODBuildings == 0;// Verified settings-menu case 30 toggles bDisplayLODBuildings; DistantLOD_UpdateExteriorGrid uses this setting for its building/object channel. /*0x5dfc64*/
      v63 = sub_404E10(&bDisplayLODBuildings); /*0x5dfc75*/
      if ( (dword_B3B744[0] & 2) == 0 ) /*0x5dfc77*/
      {
        ShowUIMessageBox( /*0x5dfc91*/
          (char *)MEMORY[0xB38CF0],
          st5_0,
          a3,
          a4,
          (char *)stru_B38CE8,
          0,
          0,
          (char *)MEMORY[0xB38CF0],
          0);
        LOWORD(dword_B3B744[0]) |= 2u; /*0x5dfc99*/
      }
      goto LABEL_104; /*0x5dfca1*/
    case 0x1F:
      bDisplayLODTrees = bDisplayLODTrees == 0; // Verified settings-menu case 31 toggles bDisplayLODTrees; DistantLOD_UpdateExteriorGrid uses this setting for its tree channel. /*0x5dfcb5*/
      v63 = sub_404E10(&bDisplayLODTrees); /*0x5dfcc6*/
      if ( (dword_B3B744[0] & 4) == 0 ) /*0x5dfcc8*/
      {
        ShowUIMessageBox( /*0x5dfce2*/
          (char *)MEMORY[0xB38CF0],
          st5_0,
          a3,
          a4,
          (char *)stru_B38CE8,
          0,
          0,
          (char *)MEMORY[0xB38CF0],
          0);
        LOWORD(dword_B3B744[0]) |= 4u; /*0x5dfcea*/
      }
      goto LABEL_104; /*0x5dfcf2*/
    case 0x26:
      if ( *(_BYTE *)(a1 + 0x115) ) /*0x5df8d1*/
      {
        if ( !bIsHDR ) /*0x5df8dd*/
        {
          if ( *(_DWORD *)(a1 + 0xFC) ) /*0x5df8e9*/
          {
            *(_DWORD *)(a1 + 0xFC) = 0; /*0x5df8f5*/
            sub_5DE920((_DWORD *)a1); /*0x5df8fb*/
            if ( (dword_B3B744[0] & 0x20) == 0 ) /*0x5df907*/
            {
              v123 = 0.0; /*0x5df909*/
              a2c = (const char *)dword_B3B744[5]; /*0x5df928*/
              v113 = (const char *)dword_B3B744[9]; /*0x5df92f*/
              v110 = (const char *)dword_B3B744[3]; /*0x5df930*/
              v106 = (const char *)dword_B3B744[7]; /*0x5df931*/
              v125 = 1; /*0x5df93c*/
              BSStringT_Static_Format((BSStringT *)&v123, "%s %s %s %s.", v106, v110, v113, a2c); /*0x5df944*/
              ShowUIMessageBox( /*0x5df95c*/
                (char *)MEMORY[0xB38CF0],
                st5_0,
                a3,
                a4,
                (char *)LODWORD(v123),
                (int)sub_5DE960,
                0,
                (char *)MEMORY[0xB38CF0],
                0);
              LOWORD(dword_B3B744[0]) |= 0x20u; /*0x5df961*/
              dword_B147F8 = 0; /*0x5df970*/
              v125 = 0xFFFFFFFF; /*0x5df976*/
              BSStringT_Clear((unsigned int *)&v123); /*0x5df97e*/
            }
          }
          if ( byte_B06D34 ) /*0x5df983*/
          {
            v64 = *(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0xC); /*0x5df998*/
            a2d = *(_DWORD **)(a1 + 0xE0); /*0x5df99b*/
            *(_BYTE *)(a1 + 0x115) = 0; /*0x5df9a0*/
            v64(a1, 0x2F, a2d); /*0x5df9a7*/
            *(_BYTE *)(a1 + 0x115) = 1; /*0x5df9ac*/
            if ( dword_B147F8 == 0xFFFFFFFF && (dword_B3B744[0] & 0x100) == 0 ) /*0x5df9c9*/
            {
              v122.m_data = 0; /*0x5df9cb*/
              v122.m_dataLen = 0; /*0x5df9cf*/
              v122.m_bufLen = 0; /*0x5df9d4*/
              v111 = (const char *)dword_B3B744[5]; /*0x5df9ea*/
              v107 = (const char *)dword_B3B744[9]; /*0x5df9f0*/
              v103 = (const char *)dword_B3B744[3]; /*0x5df9f1*/
              v100 = (const char *)dword_B3B744[0xB]; /*0x5df9f2*/
              v124 = 2; /*0x5df9fd*/
              BSStringT_Static_Format(&v122, "%s %s %s %s.", v100, v103, v107, v111); /*0x5dfa05*/
              ShowUIMessageBox(v65, st5_0, a3, a4, v122.m_data, (int)sub_5DE960, 0, (char *)MEMORY[0xB38CF0], 0); /*0x5dfa1d*/
              LOWORD(dword_B3B744[0]) |= 0x100u; /*0x5dfa22*/
              dword_B147F8 = 0; /*0x5dfa32*/
              v124 = 0xFFFFFFFF; /*0x5dfa38*/
              BSStringT_Clear((unsigned int *)&v122); /*0x5dfa3c*/
            }
          }
        }
      }
      v63 = bIsHDR == 0; /*0x5dfa48*/
      v70 = dword_B147F8 == 0xFFFFFFFF; /*0x5dfa4b*/
      bIsHDR = v63; /*0x5dfa52*/
      if ( v70 ) /*0x5dfa58*/
      {
        if ( *(_BYTE *)(a1 + 0x115) ) /*0x5dfa5e*/
        {
          if ( (dword_B3B744[0] & 1) == 0 ) /*0x5dfa72*/
          {
            ShowUIMessageBox( /*0x5dfa8c*/
              (char *)MEMORY[0xB38CF0],
              st5_0,
              a3,
              a4,
              (char *)stru_B38CE8,
              0,
              0,
              (char *)MEMORY[0xB38CF0],
              0);
            LOWORD(dword_B3B744[0]) |= 1u; /*0x5dfa94*/
          }
        }
      }
      goto LABEL_104; /*0x5dfa9c*/
    case 0x27:
      while ( 1 ) /*0x5dfc00*/
      {
        v69 = ++*(_DWORD *)(a1 + 0xF8); /*0x5dfc06*/
        if ( v69 > 2 ) /*0x5dfc0f*/
          break; /*0x5dfc0f*/
        if ( v69 < 2 ) /*0x5dfc11*/
        {
          sub_5DDDA0(a1); /*0x5dfc15*/
          return; /*0x5dfc2c*/
        }
      }
      *(_DWORD *)(a1 + 0xF8) = 0; /*0x5dfc31*/
      sub_5DDDA0(a1); /*0x5dfc3b*/
      return; /*0x5dfc52*/
    case 0x28:
      byte_B07060 = byte_B07060 == 0; /*0x5dfab0*/
      v63 = sub_404E10(&byte_B07060); /*0x5dfaba*/
      goto LABEL_104; /*0x5dfabc*/
    case 0x29:
      byte_B07090 = byte_B07090 == 0; /*0x5dfd06*/
      v63 = sub_404E10(&byte_B07090); /*0x5dfd10*/
      goto LABEL_104; /*0x5dfd12*/
    case 0x2A:
      v63 = OB_RendererGlobalState_010201A0[0x214] == 0; /*0x5dfd1e*/
      OB_RendererGlobalState_010201A0[0x214] = v63; /*0x5dfd21*/
      goto LABEL_104; /*0x5dfd27*/
    case 0x2B:
      while ( 1 ) /*0x5dfb41*/
      {
        v67 = ++*(_DWORD *)(a1 + 0xF0); /*0x5dfb47*/
        if ( v67 > 3 ) /*0x5dfb50*/
          break; /*0x5dfb50*/
        if ( v67 < 3 ) /*0x5dfb52*/
        {
          sub_5DDD60(a1); /*0x5dfb56*/
          return; /*0x5dfb6d*/
        }
      }
      *(_DWORD *)(a1 + 0xF0) = 0; /*0x5dfb72*/
      sub_5DDD60(a1); /*0x5dfb7c*/
      return; /*0x5dfb93*/
    case 0x2D:
    case 0x2E:
      if ( !*(_DWORD *)(a1 + 0xFC) ) /*0x5df69e*/
      {
        if ( bIsHDR ) /*0x5df6aa*/
        {
          v57 = *(void (__cdecl **)(int, _DWORD *))(*(_DWORD *)a1 + 0xC); /*0x5df6be*/
          a2b = *(_DWORD **)(a1 + 0xBC); /*0x5df6c1*/
          *(_BYTE *)(a1 + 0x115) = 0; /*0x5df6c4*/
          v57(0x26, a2b); /*0x5df6ca*/
          *(_BYTE *)(a1 + 0x115) = 1; /*0x5df6cc*/
          if ( (dword_B3B744[0] & 0x40) == 0 ) /*0x5df6da*/
          {
            v122.m_data = 0; /*0x5df6dc*/
            v122.m_dataLen = 0; /*0x5df6e0*/
            v122.m_bufLen = 0; /*0x5df6e5*/
            v109 = (const char *)dword_B3B744[5]; /*0x5df6fb*/
            v105 = (const char *)dword_B3B744[7]; /*0x5df701*/
            v102 = (const char *)dword_B3B744[3]; /*0x5df702*/
            v99 = (const char *)dword_B3B744[9]; /*0x5df703*/
            v124 = 0; /*0x5df70e*/
            BSStringT_Static_Format(&v122, "%s %s %s %s.", v99, v102, v105, v109); /*0x5df712*/
            ShowUIMessageBox(v58, st5_0, a3, a4, v122.m_data, (int)sub_5DE960, 0, (char *)MEMORY[0xB38CF0], 0); /*0x5df72a*/
            LOWORD(dword_B3B744[0]) |= 0x40u; /*0x5df72f*/
            dword_B147F8 = 4; /*0x5df73e*/
            v124 = 0xFFFFFFFF; /*0x5df748*/
            BSStringT_Clear((unsigned int *)&v122); /*0x5df750*/
          }
        }
      }
      if ( sub_587C20(a5) == 0x2C ) /*0x5df760*/
      {
        while ( 1 ) /*0x5df770*/
        {
          v59 = --*(_DWORD *)(a1 + 0xFC) < 0; /*0x5df770*/
          v60 = *(_DWORD *)(a1 + 0xFC); /*0x5df777*/
          if ( v59 ) /*0x5df77d*/
          {
            *(_DWORD *)(a1 + 0xFC) = 0x10; /*0x5df77f*/
          }
          else
          {
            if ( v60 == 1 ) /*0x5df78a*/
              goto LABEL_50; /*0x5df78a*/
            if ( !v60 ) /*0x5df78e*/
              goto LABEL_51; /*0x5df78e*/
          }
          if ( sub_497D50(*(_DWORD *)(a1 + 0xFC)) ) /*0x5df797*/
            goto LABEL_51; /*0x5df7a1*/
        }
      }
      do /*0x5df7e4*/
      {
        v61 = ++*(_DWORD *)(a1 + 0xFC); /*0x5df7b7*/
        if ( v61 > 0x10 ) /*0x5df7c0*/
        {
LABEL_50:
          *(_DWORD *)(a1 + 0xFC) = 0; /*0x5df7e8*/
          break; /*0x5df7e8*/
        }
        if ( v61 == 1 ) /*0x5df7c5*/
        {
          *(_DWORD *)(a1 + 0xFC) = 2; /*0x5df7c7*/
        }
        else if ( !v61 ) /*0x5df7d1*/
        {
          break; /*0x5df7d1*/
        }
      }
      while ( !sub_497D50(*(_DWORD *)(a1 + 0xFC)) ); /*0x5df7e4*/
LABEL_51:
      sub_5DE920((_DWORD *)a1); /*0x5df7ee*/
      if ( dword_B147F8 == 0xFFFFFFFF && (dword_B3B744[0] & 0x10) == 0 ) /*0x5df809*/
      {
        ShowUIMessageBox((char *)stru_B38CE8, st5_0, a3, a4, (char *)stru_B38CE8, 0, 0, (char *)MEMORY[0xB38CF0], 0); /*0x5df81f*/
        LOWORD(dword_B3B744[0]) |= 0x10u; /*0x5df827*/
      }
      return; /*0x5df841*/
    case 0x2F:
      v70 = byte_B06D34 == 0; /*0x5dfd2e*/
      if ( !byte_B06D34 ) /*0x5dfd2e*/
      {
        if ( bIsHDR ) /*0x5dfd3b*/
        {
          v71 = *(void (__cdecl **)(int, _DWORD *))(*(_DWORD *)a1 + 0xC); /*0x5dfd50*/
          a2e = *(_DWORD **)(a1 + 0xBC); /*0x5dfd53*/
          *(_BYTE *)(a1 + 0x115) = 0; /*0x5dfd56*/
          v71(0x26, a2e); /*0x5dfd5d*/
          *(_BYTE *)(a1 + 0x115) = 1; /*0x5dfd64*/
          if ( SLOBYTE(dword_B3B744[0]) >= 0 ) /*0x5dfd71*/
          {
            v122.m_data = 0; /*0x5dfd77*/
            v122.m_dataLen = 0; /*0x5dfd7b*/
            v122.m_bufLen = 0; /*0x5dfd80*/
            v112 = (const char *)dword_B3B744[5]; /*0x5dfd96*/
            v108 = (const char *)dword_B3B744[0xB]; /*0x5dfd9c*/
            v104 = (const char *)dword_B3B744[3]; /*0x5dfd9d*/
            v101 = (const char *)dword_B3B744[9]; /*0x5dfd9e*/
            v124 = 3; /*0x5dfda9*/
            BSStringT_Static_Format(&v122, "%s %s %s %s.", v101, v104, v108, v112); /*0x5dfdb1*/
            ShowUIMessageBox(v72, st5_0, a3, a4, v122.m_data, (int)sub_5DE960, 0, (char *)MEMORY[0xB38CF0], 0); /*0x5dfdc9*/
            LOWORD(dword_B3B744[0]) |= 0x80u; /*0x5dfdce*/
            dword_B147F8 = 9; /*0x5dfddc*/
            v124 = 0xFFFFFFFF; /*0x5dfde6*/
            BSStringT_Clear((unsigned int *)&v122); /*0x5dfdee*/
          }
        }
        v70 = byte_B06D34 == 0; /*0x5dfdf3*/
      }
      v63 = v70; /*0x5dfdfa*/
      v70 = dword_B147F8 == 0xFFFFFFFF; /*0x5dfdfd*/
      byte_B06D34 = v63; /*0x5dfe04*/
      if ( v70 && (dword_B3B744[0] & 0x200) == 0 ) /*0x5dfe17*/
      {
        ShowUIMessageBox( /*0x5dfe2a*/
          (char *)MEMORY[0xB38CF0],
          st5_0,
          a3,
          a4,
          (char *)stru_B38CE8,
          0,
          0,
          (char *)MEMORY[0xB38CF0],
          0);
        LOWORD(dword_B3B744[0]) |= 0x200u; /*0x5dfe32*/
      }
LABEL_104:
      if ( a6 ) /*0x5dfe3e*/
      {
        v73 = (char *)MEMORY[0xB38DA0]; /*0x5dfe46*/
        if ( !v63 ) /*0x5dfe4b*/
          v73 = (char *)MEMORY[0xB38DA8]; /*0x5dfe4d*/
        Tile_SetString(a6, (_DWORD *)0xFDE, v73); /*0x5dfe58*/
      }
      return; /*0x5dfe6f*/
    case 0x30:
      break;
    default:
      return;
  }
  while ( 1 ) /*0x5dfba0*/
  {
    v68 = ++*(_DWORD *)(a1 + 0xF4); /*0x5dfba6*/
    if ( v68 > 3 ) /*0x5dfbaf*/
      break; /*0x5dfbaf*/
    if ( v68 < 3 ) /*0x5dfbb1*/
    {
      sub_5DDDE0(a1); /*0x5dfbb5*/
      return; /*0x5dfbcc*/
    }
  }
  *(_DWORD *)(a1 + 0xF4) = 0; /*0x5dfbd1*/
  sub_5DDDE0(a1); /*0x5dfbdb*/
}
