// positive sp value has been detected, the output may be wrong!
_DWORD *__usercall EffectSettingsMenu_Create@<eax>(
        double a1@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        _DWORD *a4,
        char a5)
{
  void (__thiscall ***OpenMenuTile)(_DWORD); // eax
  int v7; // edi
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  BSStringT *XML; // ebx
  int ParentMenu; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ebp
  void *v15; // eax
  int v16; // eax
  void *v17; // eax
  bool v18; // bl
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int *v23; // ebx
  int Area; // eax
  unsigned int v25; // eax
  int v26; // ecx
  char *Name; // edi
  char *v28; // edi
  bool v29; // zf
  char *RangeName; // eax
  int v31; // eax
  int Magnitude; // eax
  int v33; // edx
  int v34; // eax
  _DWORD *v35; // eax
  int LockLevel; // eax
  char **v37; // eax
  char *v38; // eax
  int v39; // eax
  int Duration; // eax
  int v41; // ecx
  double v42; // st7
  const char *v43; // eax
  char **v44; // eax
  _DWORD *v45; // ecx
  float v47; // [esp-1Ch] [ebp-178h]
  float v48; // [esp-1Ch] [ebp-178h]
  float v49; // [esp-1Ch] [ebp-178h]
  int v50; // [esp-18h] [ebp-174h]
  int v51; // [esp-14h] [ebp-170h]
  int v52; // [esp-10h] [ebp-16Ch]
  int v53; // [esp-Ch] [ebp-168h]
  int v54; // [esp-8h] [ebp-164h]
  int v55; // [esp-4h] [ebp-160h]
  float v56; // [esp+0h] [ebp-15Ch]
  float v57; // [esp+0h] [ebp-15Ch]
  float v58; // [esp+0h] [ebp-15Ch]
  float v59; // [esp+0h] [ebp-15Ch]
  float v60; // [esp+0h] [ebp-15Ch]
  float v61; // [esp+0h] [ebp-15Ch]
  float v62; // [esp+0h] [ebp-15Ch]
  _DWORD *a2; // [esp+4h] [ebp-158h]
  float v64; // [esp+8h] [ebp-154h]
  char *v65; // [esp+8h] [ebp-154h]
  float v66; // [esp+Ch] [ebp-150h]
  float v67; // [esp+Ch] [ebp-150h]
  float v68; // [esp+Ch] [ebp-150h]
  BSStringT v69; // [esp+10h] [ebp-14Ch] BYREF
  _DWORD *p_m_data; // [esp+18h] [ebp-144h]
  _DWORD *v71; // [esp+1Ch] [ebp-140h] BYREF
  float a3; // [esp+20h] [ebp-13Ch]
  _DWORD *v73[7]; // [esp+24h] [ebp-138h] BYREF
  _DWORD *v74; // [esp+40h] [ebp-11Ch]
  _DWORD *v75; // [esp+44h] [ebp-118h]
  int v76; // [esp+134h] [ebp-28h]
  char v77; // [esp+140h] [ebp-1Ch]
  int v78; // [esp+158h] [ebp-4h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD))Menu_GetOpenMenuTile(0x413);
  v7 = 0;
  if ( OpenMenuTile )
  {
    v50 = 1;
    (**OpenMenuTile)(OpenMenuTile);
  }
  Singleton = InterfaceManager_GetSingleton(0, 1);
  Depth = InterfaceManager_GetDepth(st7_0);
  v56 = Depth;
  XML = Menu_LoadXML(
          (BSStringT *)Singleton->menuRoot,
          a1,
          st6_0,
          Depth,
          "Data\\Menus\\dialog\\enchantmentsetting_menu.xml");
  p_m_data = &XML->m_data;
  ParentMenu = Tile_GetParentMenu(XML);
  v12 = ParentMenu;
  if ( !ParentMenu )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) == 0x413 )
  {
    Menu_SetTileMenu((Menu *)v12, st6_0, Depth, (TileMenu *)XML);
    if ( Tile_GetFloat(XML, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(XML, 0xFA5) == fXMLI_NoClickPast )
      Tile_SetFloat((Tile *)XML, (_DWORD *)0xFAB, v56);
    sub_59FE70((_DWORD *)v12);
    v13 = *(_DWORD *)(v12 + 0x7C);
    v14 = 0;
    *(_BYTE *)(v12 + 0x71) = v77;
    HIBYTE(v55) = 1;
    if ( !v13
      || (v15 = OblivionDynamicCast(
                  *(void **)(*(_DWORD *)(v13 + 0x30) + 8),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESEnchantableForm `RTTI Type Descriptor',
                  0),
          HIBYTE(a2) = 1,
          (*(int (__thiscall **)(void *))(*(_DWORD *)v15 + 0x10))(v15) != 3) )
    {
      HIBYTE(a2) = 0;
    }
    v16 = *(_DWORD *)(v12 + 0x7C);
    v18 = 0;
    if ( v16 )
    {
      v17 = OblivionDynamicCast(
              *(void **)(*(_DWORD *)(v16 + 0x30) + 8),
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESEnchantableForm `RTTI Type Descriptor',
              0);
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v17 + 0x10))(v17) == 2 )
        v18 = 1;
    }
    if ( v77 )
    {
      v56 = COERCE_FLOAT(FormHeapAlloc(0x24u));
      v76 = 0;
      if ( v56 != 0.0 )
        v7 = EffectItem_constrCopy(LODWORD(v64));
      *(_DWORD *)(v12 + 0x94) = v7;
      v19 = flt_B3B29C[0] - dbl_A2F928;
      v76 = 0xFFFFFFFF;
      v20 = Double_To_SInt32(v19);
      EffectItem_SetArea(v7, v20);
      v21 = Double_To_SInt32(flt_B3B2AC[0]);
      EffectItem_SetMagnitude(*(_DWORD *)(v12 + 0x94), v21);
      v22 = Double_To_SInt32(flt_B3B2BC[0]);
      EffectItem_SetDuration(*(_DWORD *)(v12 + 0x94), v22);
      if ( !v18 )
      {
        if ( EffectItem_SetRange(*(_DWORD *)(v12 + 0x94), 0) )
          v14 = 1;
      }
      if ( !HIBYTE(a2) )
      {
        if ( !v18 )
        {
          if ( EffectItem_SetRange(*(_DWORD *)(v12 + 0x94), 2) )
            ++v14;
        }
        if ( EffectItem_SetRange(*(_DWORD *)(v12 + 0x94), 1) )
          ++v14;
      }
      Tile_SetFloat(*(Tile **)(v12 + 0x64), (_DWORD *)0xFA1, 1.0);
      sub_59FBF0((_DWORD *)v12, *(_DWORD **)(v12 + 0x94));
      v23 = (int *)LODWORD(v64);
    }
    else
    {
      *(float *)(v12 + 0x94) = v64;
      if ( !v18 && (*(_DWORD *)(*(_DWORD *)(LODWORD(v64) + 0x1C) + 0x58) & 0x10) != 0 )
        v14 = 1;
      if ( !HIBYTE(a2) )
      {
        if ( !v18 && (*(_DWORD *)(*(_DWORD *)(LODWORD(v64) + 0x1C) + 0x58) & 0x40) != 0 )
          ++v14;
        if ( (*(_DWORD *)(*(_DWORD *)(LODWORD(v64) + 0x1C) + 0x58) & 0x20) != 0 )
          ++v14;
      }
      Tile_SetFloat(*(Tile **)(v12 + 0x64), (_DWORD *)0xFA1, fConstant_2);
      v23 = (int *)LODWORD(v64);
      if ( EffectItem_GetArea((_DWORD *)LODWORD(v64)) )
      {
        v69.m_data = 0;
        *(_DWORD *)&v69.m_dataLen = 0;
        v76 = 1;
        Area = EffectItem_GetArea((_DWORD *)LODWORD(v64));
        BSStringT_Static_Format(&v69, "%d", Area);
        Tile_SetString(*(_DWORD **)(v12 + 0x4C), (_DWORD *)0xFAE, v69.m_data);
        v76 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v69);
      }
      else
      {
        Tile_SetString(*(_DWORD **)(v12 + 0x4C), (_DWORD *)0xFAE, "-");
      }
    }
    v25 = *(_DWORD *)(*(_DWORD *)(v12 + 0x94) + 0x14);
    *(_DWORD *)(v12 + 0x90) = v25;
    v26 = v23[7];
    if ( (*(_DWORD *)(v26 + 0x58) & 0x100000) != 0 )
    {
      Name = (char *)ActorValue_GetName(v25);
      Tile_SetFloat(*(Tile **)(v12 + 0x38), (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat(*(Tile **)(v12 + 0x34), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetString(*(_DWORD **)(v12 + 0x34), (_DWORD *)0xFAE, Name);
      v23 = (int *)LODWORD(v64);
      HIBYTE(v55) = 0;
    }
    else if ( (*(_DWORD *)(v26 + 0x58) & 0x80000) != 0 )
    {
      v28 = (char *)ActorValue_GetName(v25);
      Tile_SetFloat(*(Tile **)(v12 + 0x34), (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat(*(Tile **)(v12 + 0x38), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetString(*(_DWORD **)(v12 + 0x38), (_DWORD *)0xFAE, v28);
      v23 = (int *)LODWORD(v64);
      HIBYTE(v55) = 0;
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v12 + 0x34), (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat(*(Tile **)(v12 + 0x38), (_DWORD *)0xFA1, 1.0);
      Tile_SetFloat((Tile *)p_m_data, (_DWORD *)0xFAF, 0.0);
    }
    v29 = *(_DWORD *)(v12 + 0x78) == 0;
    *(_DWORD *)(v12 + 0x8C) = *(_DWORD *)(*(_DWORD *)(v12 + 0x94) + 0x10);
    if ( v29 || v14 <= 1 )
    {
      Tile_SetFloat(*(Tile **)(v12 + 0x3C), (_DWORD *)0xFA1, 1.0);
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v12 + 0x3C), (_DWORD *)0xFA1, fConstant_2);
      RangeName = (char *)Magic_GetRangeName(*(_DWORD *)(v12 + 0x8C));
      Tile_SetString(*(_DWORD **)(v12 + 0x3C), (_DWORD *)0xFAE, RangeName);
      HIBYTE(v55) = 0;
    }
    *(_DWORD *)(v12 + 0x80) = EffectItem_GetArea(*(_DWORD **)(v12 + 0x94));
    v31 = *(_DWORD *)(v12 + 0x94);
    if ( (*(_DWORD *)(*(_DWORD *)(v31 + 0x1C) + 0x58) & 0x200) != 0 || !*(_DWORD *)(v31 + 0x10) )
    {
      Tile_SetFloat(*(Tile **)(v12 + 0x50), (_DWORD *)0xFA1, 1.0);
    }
    else
    {
      v66 = *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B3B29C) - dbl_A2F928;
      v64 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B3B2A4);
      v57 = v64 - v66;
      Tile_SetFloat(*(Tile **)(v12 + 0x50), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetFloat(*(Tile **)(v12 + 0x50), (_DWORD *)0xFAF, v66);
      Tile_SetFloat(*(Tile **)(v12 + 0x50), (_DWORD *)0xFB0, v64);
      v58 = v57 / dbl_A3F3E8;
      v47 = Round_Float(v58, flt_A31E2C);
      Tile_SetFloat(*(Tile **)(v12 + 0x50), (_DWORD *)0xFB2, v47);
      v56 = (double)*(int *)(v12 + 0x80) - v66;
      Tile_SetFloat(*(Tile **)(v12 + 0x50), (_DWORD *)0xFB3, v56);
      Tile_SetFloat(*(Tile **)(v12 + 0x50), (_DWORD *)0xFB3, 0.0);
      HIBYTE(v55) = 0;
    }
    Magnitude = EffectItem_GetMagnitude(*(_DWORD **)(v12 + 0x94));
    v33 = *(_DWORD *)(v12 + 0x94);
    *(_DWORD *)(v12 + 0x84) = Magnitude;
    if ( (*(_DWORD *)(*(_DWORD *)(v33 + 0x1C) + 0x58) & 0x100) != 0
      || (v34 = *(_DWORD *)(v12 + 0x7C)) != 0
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v34 + 0x34) + 0x10))(*(_DWORD *)(v34 + 0x34)) == 3 )
    {
      Tile_SetFloat(*(Tile **)(v12 + 0x40), (_DWORD *)0xFA1, 1.0);
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v12 + 0x40), (_DWORD *)0xFA1, fConstant_2);
      HIBYTE(v55) = 0;
      v69.m_data = 0;
      *(_DWORD *)&v69.m_dataLen = 0;
      v35 = *(_DWORD **)(v12 + 0x94);
      v29 = *v35 == 0x4E45504F;
      v76 = 2;
      if ( v29 || *v35 == 0x4B434F4C )
      {
        BSStringT_Static_Format(&v69, "%s:", *(const char **)sLockLevelText);
        Tile_SetFloat(*(Tile **)(v12 + 0x40), (_DWORD *)0xFAE, fConstant_2);
        LockLevel = GetLockLevel(*(_DWORD *)(v12 + 0x84));
        *(_DWORD *)(v12 + 0x98) = LockLevel;
        v37 = *(char ***)(4 * LockLevel + 0xB03E1C);
        if ( v37 )
          v38 = *v37;
        else
          v38 = 0;
        Tile_SetString(*(_DWORD **)(v12 + 0x40), (_DWORD *)0xFAF, v38);
        v39 = sub_429A30(*(_DWORD *)(v12 + 0x98));
        EffectItem_SetMagnitude(*(_DWORD *)(v12 + 0x94), v39);
      }
      else
      {
        v67 = *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B3B2AC);
        v64 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B3B2B4);
        v59 = v64 - v67;
        BSStringT_Static_Format(&v69, "%s:", *(const char **)dword_B38930);
        Tile_SetFloat(*(Tile **)(v12 + 0x40), (_DWORD *)0xFAE, 1.0);
        Tile_SetFloat(*(Tile **)(v12 + 0x44), (_DWORD *)0xFAF, v67);
        Tile_SetFloat(*(Tile **)(v12 + 0x44), (_DWORD *)0xFB0, v64);
        v60 = v59 / dbl_A3F3E8;
        v48 = Round_Float(v60, flt_A31E2C);
        Tile_SetFloat(*(Tile **)(v12 + 0x44), (_DWORD *)0xFB2, v48);
        v56 = (double)*(int *)(v12 + 0x84) - v67;
        Tile_SetFloat(*(Tile **)(v12 + 0x44), (_DWORD *)0xFB3, v56);
        Tile_SetFloat(*(Tile **)(v12 + 0x44), (_DWORD *)0xFB3, 0.0);
        if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 0x94) + 0x1C) + 0x58) & 0x40000000) != 0 )
        {
          v56 = (double)*(int *)(v12 + 0x84)
              * *(float *)GameSetting_GetSafeFloatPointer((int *)&fMagicLevelMagnitudeMult);
          Tile_SetFloat(*(Tile **)(v12 + 0x40), (_DWORD *)0xFB1, v56);
        }
      }
      Tile_SetString(*(_DWORD **)(v12 + 0x40), (_DWORD *)0xFB0, v69.m_data);
      v76 = 0xFFFFFFFF;
      BSStringT_Clear((unsigned int *)&v69);
    }
    Duration = EffectItem_GetDuration(*(_DWORD **)(v12 + 0x94));
    v41 = *(_DWORD *)(v12 + 0x94);
    *(_DWORD *)(v12 + 0x88) = Duration;
    if ( (*(_DWORD *)(*(_DWORD *)(v41 + 0x1C) + 0x58) & 0x80) != 0 || HIBYTE(a2) )
    {
      v42 = 1.0;
      Tile_SetFloat(*(Tile **)(v12 + 0x58), (_DWORD *)0xFA1, 1.0);
    }
    else
    {
      v68 = *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B3B2BC);
      v64 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B3B2C4);
      v61 = v64 - v68;
      Tile_SetFloat(*(Tile **)(v12 + 0x58), (_DWORD *)0xFA1, fConstant_2);
      Tile_SetFloat(*(Tile **)(v12 + 0x58), (_DWORD *)0xFAF, v68);
      Tile_SetFloat(*(Tile **)(v12 + 0x58), (_DWORD *)0xFB0, v64);
      v62 = v61 / dbl_A3F3E8;
      v49 = Round_Float(v62, flt_A31E2C);
      Tile_SetFloat(*(Tile **)(v12 + 0x58), (_DWORD *)0xFB2, v49);
      v56 = (double)*(int *)(v12 + 0x88) - v68;
      Tile_SetFloat(*(Tile **)(v12 + 0x58), (_DWORD *)0xFB3, v56);
      v42 = 0.0;
      Tile_SetFloat(*(Tile **)(v12 + 0x58), (_DWORD *)0xFB3, 0.0);
      HIBYTE(v55) = 0;
    }
    v43 = *(const char **)(v23[7] + 0x48);
    if ( !v43 )
      v43 = EmptyString;
    _sprintf((char *)v73, "%s\\%s", "Icons", v43);
    Tile_SetString(*(_DWORD **)(v12 + 0x2C), (_DWORD *)0xFE6, (char *)v73);
    v44 = (char **)EffectItem_GetName(
                     v23,
                     (int)&v71,
                     v50,
                     v51,
                     v52,
                     v53,
                     v54,
                     v55,
                     SLODWORD(v56),
                     (int)a2,
                     SLODWORD(v64));
    v45 = *(_DWORD **)(v12 + 0x30);
    v65 = *v44;
    v78 = 3;
    Tile_SetString(v45, (_DWORD *)0xFDE, v65);
    v78 = 0xFFFFFFFF;
    FormHeapFree((unsigned int)v74);
    v74 = 0;
    v75 = 0;
    EnableMenu((Menu *)v12, a1, st6_0, v42, 0);
    if ( !HIBYTE(a3) )
      return v73[6];
    if ( a5 )
    {
      sub_59FC60((int *)v14, a1, st6_0, v42);
      return v73[6];
    }
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 0xC))(v12, 0x16, *(_DWORD *)(v12 + 0x64));
    goto LABEL_78;
  }
  if ( *(_DWORD *)(v12 + 4) )
LABEL_78:
    (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  return 0;
}
