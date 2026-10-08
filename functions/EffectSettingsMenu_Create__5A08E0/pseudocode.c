// positive sp value has been detected, the output may be wrong!
_DWORD *__usercall EffectSettingsMenu_Create@<eax>(
        double a1@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        _DWORD *a8,
        char a9)
{
  void (__thiscall ***OpenMenuTile)(_DWORD); // eax
  int v10; // edi
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // ebx
  int ParentMenu; // eax
  int v15; // esi
  int v16; // eax
  int v17; // ebp
  void *v18; // eax
  int v19; // eax
  void *v20; // eax
  bool v21; // bl
  double v22; // st7
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int *v26; // ebx
  int Area; // eax
  unsigned int v28; // eax
  int v29; // ecx
  char *Name; // edi
  char *v31; // edi
  bool v32; // zf
  char *RangeName; // eax
  int v34; // eax
  int Magnitude; // eax
  int v36; // edx
  int v37; // eax
  _DWORD *v38; // eax
  LOCK_LEVEL LockLevel; // eax
  char **v40; // eax
  char *v41; // eax
  int v42; // eax
  int Duration; // eax
  int v44; // ecx
  double v45; // st7
  const char *v46; // eax
  char **v47; // eax
  _DWORD *v48; // ecx
  float v50; // [esp-1Ch] [ebp-178h]
  float v51; // [esp-1Ch] [ebp-178h]
  float v52; // [esp-1Ch] [ebp-178h]
  int v53; // [esp-18h] [ebp-174h]
  int v54; // [esp-14h] [ebp-170h]
  BSStringT v55; // [esp-10h] [ebp-16Ch]
  int v56; // [esp-8h] [ebp-164h]
  int v57; // [esp-4h] [ebp-160h]
  float v58; // [esp+0h] [ebp-15Ch]
  float v59; // [esp+0h] [ebp-15Ch]
  float v60; // [esp+0h] [ebp-15Ch]
  float v61; // [esp+0h] [ebp-15Ch]
  float v62; // [esp+0h] [ebp-15Ch]
  float v63; // [esp+0h] [ebp-15Ch]
  float v64; // [esp+0h] [ebp-15Ch]
  _DWORD *a2; // [esp+4h] [ebp-158h]
  float v66; // [esp+8h] [ebp-154h]
  char *v67; // [esp+8h] [ebp-154h]
  float v68; // [esp+Ch] [ebp-150h]
  float v69; // [esp+Ch] [ebp-150h]
  float v70; // [esp+Ch] [ebp-150h]
  BSStringT v71; // [esp+10h] [ebp-14Ch] BYREF
  _DWORD *v72; // [esp+18h] [ebp-144h]
  _DWORD *v73; // [esp+1Ch] [ebp-140h] BYREF
  float a3; // [esp+20h] [ebp-13Ch]
  _DWORD *v75[7]; // [esp+24h] [ebp-138h] BYREF
  _DWORD *v76; // [esp+40h] [ebp-11Ch]
  _DWORD *v77; // [esp+44h] [ebp-118h]
  int v78; // [esp+134h] [ebp-28h]
  char v79; // [esp+140h] [ebp-1Ch]
  int v80; // [esp+158h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD))Menu_GetOpenMenuTile(0x413); /*0x5a092b*/
  v10 = 0; /*0x5a0930*/
  if ( OpenMenuTile ) /*0x5a0937*/
  {
    v53 = 1; /*0x5a093f*/
    (**OpenMenuTile)(OpenMenuTile); /*0x5a0941*/
  }
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5a094e*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x5a0950*/
  v58 = Depth; /*0x5a0955*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\dialog\\enchantmentsetting_menu.xml"); /*0x5a0966*/
  v72 = File; /*0x5a096a*/
  ParentMenu = Tile_GetParentMenu(File); /*0x5a096e*/
  v15 = ParentMenu; /*0x5a0973*/
  if ( !ParentMenu ) /*0x5a0977*/
    return 0; /*0x5a0977*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x413 ) /*0x5a098b*/
  {
    Menu_SetTileMenu((Menu *)v15, st6_0, Depth, File); /*0x5a0994*/
    if ( Tile_GetFloat(File, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(File, 0xFA5) == fXMLI_NoClickPast ) /*0x5a09c9*/
      Tile_SetFloat(File, 0xFABu, v58); /*0x5a09da*/
    sub_59FE70((_DWORD *)v15); /*0x5a09e1*/
    v16 = *(_DWORD *)(v15 + 0x7C); /*0x5a09e6*/
    v17 = 0; /*0x5a09f0*/
    *(_BYTE *)(v15 + 0x71) = v79; /*0x5a09f4*/
    HIBYTE(v57) = 1; /*0x5a09f7*/
    if ( !v16 /*0x5a0a2a*/
      || (v18 = OblivionDynamicCast(
                  *(void **)(*(_DWORD *)(v16 + 0x30) + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0),
          HIBYTE(a2) = 1,
          (*(int (__thiscall **)(void *))(*(_DWORD *)v18 + 0x10))(v18) != 3) )
    {
      HIBYTE(a2) = 0; /*0x5a0a2c*/
    }
    v19 = *(_DWORD *)(v15 + 0x7C); /*0x5a0a31*/
    v21 = 0; /*0x5a0a61*/
    if ( v19 ) /*0x5a0a36*/
    {
      v20 = OblivionDynamicCast( /*0x5a0a4b*/
              *(void **)(*(_DWORD *)(v19 + 0x30) + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESEnchantableForm `RTTI Type Descriptor',
              0);
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v20 + 0x10))(v20) == 2 ) /*0x5a0a5f*/
        v21 = 1; /*0x5a0a36*/
    }
    if ( v79 ) /*0x5a0a6f*/
    {
      v58 = COERCE_FLOAT(FormHeapAlloc(0x24u)); /*0x5a0a7f*/
      v78 = 0; /*0x5a0a85*/
      if ( v58 != 0.0 ) /*0x5a0a8c*/
        v10 = EffectItem_constrCopy(LODWORD(v66)); /*0x5a0a9a*/
      *(_DWORD *)(v15 + 0x94) = v10; /*0x5a0a9c*/
      v22 = *(float *)&dword_B3B0B4[0x7A] - dbl_A2F928; /*0x5a0aa8*/
      v78 = 0xFFFFFFFF; /*0x5a0aae*/
      v23 = Double_To_SInt32(v22); /*0x5a0ab9*/
      EffectItem_SetArea(v10, v23); /*0x5a0ac1*/
      v24 = Double_To_SInt32(*(float *)&dword_B3B0B4[0x7E]); /*0x5a0acc*/
      EffectItem_SetMagnitude(*(_DWORD *)(v15 + 0x94), v24); /*0x5a0ad8*/
      v25 = Double_To_SInt32(*(float *)&dword_B3B0B4[0x82]); /*0x5a0ae3*/
      EffectItem_SetDuration(*(_DWORD *)(v15 + 0x94), v25); /*0x5a0aef*/
      if ( !v21 ) /*0x5a0af6*/
      {
        if ( EffectItem_SetRange(*(_DWORD *)(v15 + 0x94), 0) ) /*0x5a0b00*/
          v17 = 1; /*0x5a0b09*/
      }
      if ( !HIBYTE(a2) ) /*0x5a0b13*/
      {
        if ( !v21 ) /*0x5a0b17*/
        {
          if ( EffectItem_SetRange(*(_DWORD *)(v15 + 0x94), 2) ) /*0x5a0b21*/
            ++v17; /*0x5a0b2a*/
        }
        if ( EffectItem_SetRange(*(_DWORD *)(v15 + 0x94), 1) ) /*0x5a0b35*/
          ++v17; /*0x5a0b3e*/
      }
      Tile_SetFloat(*(Tile **)(v15 + 0x64), 0xFA1u, 1.0); /*0x5a0b4f*/
      sub_59FBF0((_DWORD *)v15, *(_DWORD **)(v15 + 0x94)); /*0x5a0b5d*/
      v26 = (int *)LODWORD(v66); /*0x5a0b62*/
    }
    else
    {
      *(float *)(v15 + 0x94) = v66; /*0x5a0b73*/
      if ( !v21 && (*(_DWORD *)(*(_DWORD *)(LODWORD(v66) + 0x1C) + 0x58) & 0x10) != 0 ) /*0x5a0b86*/
        v17 = 1; /*0x5a0b88*/
      if ( !HIBYTE(a2) ) /*0x5a0b92*/
      {
        if ( !v21 && (*(_DWORD *)(*(_DWORD *)(LODWORD(v66) + 0x1C) + 0x58) & 0x40) != 0 ) /*0x5a0ba4*/
          ++v17; /*0x5a0ba6*/
        if ( (*(_DWORD *)(*(_DWORD *)(LODWORD(v66) + 0x1C) + 0x58) & 0x20) != 0 ) /*0x5a0bb4*/
          ++v17; /*0x5a0bb6*/
      }
      Tile_SetFloat(*(Tile **)(v15 + 0x64), 0xFA1u, fConstant_2); /*0x5a0bcb*/
      v26 = (int *)LODWORD(v66); /*0x5a0bd0*/
      if ( EffectItem_GetArea((_DWORD *)LODWORD(v66)) ) /*0x5a0bd6*/
      {
        v71.m_data = 0; /*0x5a0bdf*/
        *(_DWORD *)&v71.m_dataLen = 0; /*0x5a0be3*/
        v78 = 1; /*0x5a0bef*/
        Area = EffectItem_GetArea((_DWORD *)LODWORD(v66)); /*0x5a0bfa*/
        BSStringT_Static_Format(&v71, "%d", Area); /*0x5a0c0a*/
        Tile_SetString(*(_DWORD **)(v15 + 0x4C), (_DWORD *)0xFAE, v71.m_data); /*0x5a0c1f*/
        v78 = 0xFFFFFFFF; /*0x5a0c28*/
        BSStringT_Clear((unsigned int *)&v71); /*0x5a0c33*/
      }
      else
      {
        Tile_SetString(*(_DWORD **)(v15 + 0x4C), (_DWORD *)0xFAE, "-"); /*0x5a0c47*/
      }
    }
    v28 = *(_DWORD *)(*(_DWORD *)(v15 + 0x94) + 0x14); /*0x5a0c52*/
    *(_DWORD *)(v15 + 0x90) = v28; /*0x5a0c55*/
    v29 = v26[7]; /*0x5a0c5b*/
    if ( (*(_DWORD *)(v29 + 0x58) & 0x100000) != 0 ) /*0x5a0c67*/
    {
      Name = (char *)ActorValue_GetName(v28); /*0x5a0c7c*/
      Tile_SetFloat(*(Tile **)(v15 + 0x38), 0xFA1u, 1.0); /*0x5a0c7e*/
      Tile_SetFloat(*(Tile **)(v15 + 0x34), 0xFA1u, fConstant_2); /*0x5a0c95*/
      Tile_SetString(*(_DWORD **)(v15 + 0x34), (_DWORD *)0xFAE, Name); /*0x5a0ca3*/
      v26 = (int *)LODWORD(v66); /*0x5a0ca8*/
      HIBYTE(v57) = 0; /*0x5a0cac*/
    }
    else if ( (*(_DWORD *)(v29 + 0x58) & 0x80000) != 0 ) /*0x5a0cc1*/
    {
      v31 = (char *)ActorValue_GetName(v28); /*0x5a0cd6*/
      Tile_SetFloat(*(Tile **)(v15 + 0x34), 0xFA1u, 1.0); /*0x5a0cd8*/
      Tile_SetFloat(*(Tile **)(v15 + 0x38), 0xFA1u, fConstant_2); /*0x5a0cef*/
      Tile_SetString(*(_DWORD **)(v15 + 0x38), (_DWORD *)0xFAE, v31); /*0x5a0cfd*/
      v26 = (int *)LODWORD(v66); /*0x5a0d02*/
      HIBYTE(v57) = 0; /*0x5a0d06*/
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v15 + 0x34), 0xFA1u, 1.0); /*0x5a0d1d*/
      Tile_SetFloat(*(Tile **)(v15 + 0x38), 0xFA1u, 1.0); /*0x5a0d30*/
      Tile_SetFloat((Tile *)v72, 0xFAFu, 0.0); /*0x5a0d44*/
    }
    v32 = *(_DWORD *)(v15 + 0x78) == 0; /*0x5a0d49*/
    *(_DWORD *)(v15 + 0x8C) = *(_DWORD *)(*(_DWORD *)(v15 + 0x94) + 0x10); /*0x5a0d55*/
    if ( v32 || v17 <= 1 ) /*0x5a0d60*/
    {
      Tile_SetFloat(*(Tile **)(v15 + 0x3C), 0xFA1u, 1.0); /*0x5a0dab*/
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v15 + 0x3C), 0xFA1u, fConstant_2); /*0x5a0d74*/
      RangeName = (char *)Magic_GetRangeName(*(_DWORD *)(v15 + 0x8C)); /*0x5a0d80*/
      Tile_SetString(*(_DWORD **)(v15 + 0x3C), (_DWORD *)0xFAE, RangeName); /*0x5a0d91*/
      HIBYTE(v57) = 0; /*0x5a0d96*/
    }
    *(_DWORD *)(v15 + 0x80) = EffectItem_GetArea(*(_DWORD **)(v15 + 0x94)); /*0x5a0dbb*/
    v34 = *(_DWORD *)(v15 + 0x94); /*0x5a0dc1*/
    if ( (*(_DWORD *)(*(_DWORD *)(v34 + 0x1C) + 0x58) & 0x200) != 0 || !*(_DWORD *)(v34 + 0x10) ) /*0x5a0dd9*/
    {
      Tile_SetFloat(*(Tile **)(v15 + 0x50), 0xFA1u, 1.0); /*0x5a0edb*/
    }
    else
    {
      v68 = *GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0x7A]) - dbl_A2F928; /*0x5a0df9*/
      v66 = *GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0x7C]); /*0x5a0e07*/
      v59 = v66 - v68; /*0x5a0e14*/
      Tile_SetFloat(*(Tile **)(v15 + 0x50), 0xFA1u, fConstant_2); /*0x5a0e26*/
      Tile_SetFloat(*(Tile **)(v15 + 0x50), 0xFAFu, v68); /*0x5a0e3b*/
      Tile_SetFloat(*(Tile **)(v15 + 0x50), 0xFB0u, v66); /*0x5a0e50*/
      v60 = v59 / dbl_A3F3E8; /*0x5a0e6c*/
      v50 = Round_Float(v60, flt_A31E2C); /*0x5a0e7c*/
      Tile_SetFloat(*(Tile **)(v15 + 0x50), 0xFB2u, v50); /*0x5a0e8b*/
      v58 = (double)*(int *)(v15 + 0x80) - v68; /*0x5a0e9e*/
      Tile_SetFloat(*(Tile **)(v15 + 0x50), 0xFB3u, v58); /*0x5a0eae*/
      Tile_SetFloat(*(Tile **)(v15 + 0x50), 0xFB3u, 0.0); /*0x5a0ec1*/
      HIBYTE(v57) = 0; /*0x5a0ec6*/
    }
    Magnitude = EffectItem_GetMagnitude(*(_DWORD **)(v15 + 0x94)); /*0x5a0ee6*/
    v36 = *(_DWORD *)(v15 + 0x94); /*0x5a0eeb*/
    *(_DWORD *)(v15 + 0x84) = Magnitude; /*0x5a0ef1*/
    if ( (*(_DWORD *)(*(_DWORD *)(v36 + 0x1C) + 0x58) & 0x100) != 0 /*0x5a0f1c*/
      || (v37 = *(_DWORD *)(v15 + 0x7C)) != 0
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v37 + 0x34) + 0x10))(*(_DWORD *)(v37 + 0x34)) == 3 )
    {
      Tile_SetFloat(*(Tile **)(v15 + 0x40), 0xFA1u, 1.0); /*0x5a1161*/
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v15 + 0x40), 0xFA1u, fConstant_2); /*0x5a0f34*/
      HIBYTE(v57) = 0; /*0x5a0f39*/
      v71.m_data = 0; /*0x5a0f3e*/
      *(_DWORD *)&v71.m_dataLen = 0; /*0x5a0f42*/
      v38 = *(_DWORD **)(v15 + 0x94); /*0x5a0f4c*/
      v32 = *v38 == 0x4E45504F; /*0x5a0f52*/
      v78 = 2; /*0x5a0f58*/
      if ( v32 || *v38 == 0x4B434F4C ) /*0x5a0f6f*/
      {
        BSStringT_Static_Format(&v71, "%s:", MEMORY[0xB38940].value); /*0x5a10bd*/
        Tile_SetFloat(*(Tile **)(v15 + 0x40), 0xFAEu, fConstant_2); /*0x5a10d7*/
        LockLevel = GetLockLevel(*(_DWORD *)(v15 + 0x84)); /*0x5a10e3*/
        *(_DWORD *)(v15 + 0x98) = LockLevel; /*0x5a10e8*/
        v40 = *(char ***)(4 * LockLevel + 0xB03E1C); /*0x5a10ee*/
        if ( v40 ) /*0x5a10fa*/
          v41 = *v40; /*0x5a10fc*/
        else
          v41 = 0; /*0x5a1100*/
        Tile_SetString(*(_DWORD **)(v15 + 0x40), (_DWORD *)0xFAF, v41); /*0x5a110b*/
        v42 = sub_429A30(*(_DWORD *)(v15 + 0x98)); /*0x5a1117*/
        EffectItem_SetMagnitude(*(_DWORD *)(v15 + 0x94), v42); /*0x5a1126*/
      }
      else
      {
        v69 = *GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0x7E]); /*0x5a0f86*/
        v66 = *GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0x80]); /*0x5a0f97*/
        v61 = v66 - v69; /*0x5a0fae*/
        BSStringT_Static_Format(&v71, "%s:", stru_B38930.value); /*0x5a0fb2*/
        Tile_SetFloat(*(Tile **)(v15 + 0x40), 0xFAEu, 1.0); /*0x5a0fc7*/
        Tile_SetFloat(*(Tile **)(v15 + 0x44), 0xFAFu, v69); /*0x5a0fdc*/
        Tile_SetFloat(*(Tile **)(v15 + 0x44), 0xFB0u, v66); /*0x5a0ff1*/
        v62 = v61 / dbl_A3F3E8; /*0x5a100d*/
        v51 = Round_Float(v62, flt_A31E2C); /*0x5a101d*/
        Tile_SetFloat(*(Tile **)(v15 + 0x44), 0xFB2u, v51); /*0x5a102c*/
        v58 = (double)*(int *)(v15 + 0x84) - v69; /*0x5a103f*/
        Tile_SetFloat(*(Tile **)(v15 + 0x44), 0xFB3u, v58); /*0x5a104f*/
        Tile_SetFloat(*(Tile **)(v15 + 0x44), 0xFB3u, 0.0); /*0x5a1062*/
        if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v15 + 0x94) + 0x1C) + 0x58) & 0x40000000) != 0 ) /*0x5a1079*/
        {
          v58 = (double)*(int *)(v15 + 0x84) * *GameSetting_GetSafeFloatPointer(&flt_B37ED0[0x80]); /*0x5a1095*/
          Tile_SetFloat(*(Tile **)(v15 + 0x40), 0xFB1u, v58); /*0x5a10a5*/
        }
      }
      Tile_SetString(*(_DWORD **)(v15 + 0x40), (_DWORD *)0xFB0, v71.m_data); /*0x5a1138*/
      v78 = 0xFFFFFFFF; /*0x5a1141*/
      BSStringT_Clear((unsigned int *)&v71); /*0x5a114c*/
    }
    Duration = EffectItem_GetDuration(*(_DWORD **)(v15 + 0x94)); /*0x5a116c*/
    v44 = *(_DWORD *)(v15 + 0x94); /*0x5a1171*/
    *(_DWORD *)(v15 + 0x88) = Duration; /*0x5a1177*/
    if ( (*(_DWORD *)(*(_DWORD *)(v44 + 0x1C) + 0x58) & 0x80) != 0 || HIBYTE(a2) ) /*0x5a1194*/
    {
      v45 = 1.0; /*0x5a1282*/
      Tile_SetFloat(*(Tile **)(v15 + 0x58), 0xFA1u, 1.0); /*0x5a128d*/
    }
    else
    {
      v70 = *GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0x82]); /*0x5a11ab*/
      v66 = *GameSetting_GetSafeFloatPointer((float *)&dword_B3B0B4[0x84]); /*0x5a11b9*/
      v63 = v66 - v70; /*0x5a11c6*/
      Tile_SetFloat(*(Tile **)(v15 + 0x58), 0xFA1u, fConstant_2); /*0x5a11d8*/
      Tile_SetFloat(*(Tile **)(v15 + 0x58), 0xFAFu, v70); /*0x5a11ed*/
      Tile_SetFloat(*(Tile **)(v15 + 0x58), 0xFB0u, v66); /*0x5a1202*/
      v64 = v63 / dbl_A3F3E8; /*0x5a121e*/
      v52 = Round_Float(v64, flt_A31E2C); /*0x5a122e*/
      Tile_SetFloat(*(Tile **)(v15 + 0x58), 0xFB2u, v52); /*0x5a123d*/
      v58 = (double)*(int *)(v15 + 0x88) - v70; /*0x5a1250*/
      Tile_SetFloat(*(Tile **)(v15 + 0x58), 0xFB3u, v58); /*0x5a1260*/
      v45 = 0.0; /*0x5a1265*/
      Tile_SetFloat(*(Tile **)(v15 + 0x58), 0xFB3u, 0.0); /*0x5a1273*/
      HIBYTE(v57) = 0; /*0x5a1278*/
    }
    v46 = *(const char **)(v26[7] + 0x48); /*0x5a1295*/
    if ( !v46 ) /*0x5a129a*/
      v46 = EmptyString; /*0x5a129c*/
    _sprintf((char *)v75, "%s\\%s", "Icons", v46); /*0x5a12b1*/
    Tile_SetString(*(_DWORD **)(v15 + 0x2C), (_DWORD *)0xFE6, (char *)v75); /*0x5a12c6*/
    v47 = (char **)EffectItem_GetName( /*0x5a12d2*/
                     v26,
                     (int)&v73,
                     v53,
                     v54,
                     v55,
                     v56,
                     v57,
                     SLODWORD(v58),
                     (int)a2,
                     (BSStringT *)LODWORD(v66));
    v48 = *(_DWORD **)(v15 + 0x30); /*0x5a12d9*/
    v67 = *v47; /*0x5a12dc*/
    v80 = 3; /*0x5a12e2*/
    Tile_SetString(v48, (_DWORD *)0xFDE, v67); /*0x5a12ed*/
    v80 = 0xFFFFFFFF; /*0x5a12f7*/
    FormHeapFree((unsigned int)v76); /*0x5a1302*/
    v76 = 0; /*0x5a130d*/
    v77 = 0; /*0x5a1316*/
    EnableMenu((Menu *)v15, a1, st6_0, v45, 0); /*0x5a131b*/
    if ( !HIBYTE(a3) ) /*0x5a1325*/
      return v75[6]; /*0x5a1325*/
    if ( a9 ) /*0x5a132f*/
    {
      sub_59FC60(a1, st6_0, v45, a4, a5, a6, a7); /*0x5a1331*/
      return v75[6]; /*0x5a133a*/
    }
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 0xC))(v15, 0x16, *(_DWORD *)(v15 + 0x64)); /*0x5a1349*/
    goto LABEL_78; /*0x5a134b*/
  }
  if ( *(_DWORD *)(v15 + 4) ) /*0x5a134d*/
LABEL_78:
    (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x5a1352*/
  return 0; /*0x5a135e*/
}
