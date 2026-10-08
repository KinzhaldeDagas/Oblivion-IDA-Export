// MoonSugarEffect decode: native shader-id selector for standard shader property families. Updates program/pass render-state choices and constants for hardcoded IDs before object render.
int *__cdecl sub_7D1320(int *a1)
{
  int *shader; // esi
  int *v2; // edi
  int *v3; // ebx
  int *v4; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // eax
  unsigned int i; // ebp
  _DWORD *v15; // edi
  void (__thiscall ***v16)(_DWORD, int); // esi
  int *result; // eax
  double v18; // rt0
  int v19; // [esp+10h] [ebp-18h] BYREF
  int v20; // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]
  int v24; // [esp+24h] [ebp-4h]

  shader = (int *)GetShaderDefinition(1u)->shader; /*0x7d132e*/
  v2 = (int *)GetShaderDefinition(0xEu)->shader; /*0x7d133b*/
  v3 = (int *)GetShaderDefinition(0xFu)->shader; /*0x7d1348*/
  v4 = (int *)GetShaderDefinition(0xDu)->shader; /*0x7d1355*/
  if ( (unsigned __int16)((_WORD)a1 - 0x18C) > 3u ) /*0x7d136b*/
  {
    if ( shader ) /*0x7d1404*/
    {
      OB_NiSmartPointer_Assign_010201A0(shader + 0xB, shader + 0x25); /*0x7d1410*/
      OB_NiSmartPointer_Assign_010201A0(shader + 0xC, shader + 0x26); /*0x7d141f*/
    }
    if ( v2 ) /*0x7d1426*/
    {
      OB_NiSmartPointer_Assign_010201A0(v2 + 0xB, v2 + 0x25); /*0x7d1432*/
      OB_NiSmartPointer_Assign_010201A0(v2 + 0xC, v2 + 0x26); /*0x7d1441*/
    }
    if ( v3 ) /*0x7d1448*/
    {
      OB_NiSmartPointer_Assign_010201A0(v3 + 0xB, v3 + 0x25); /*0x7d1454*/
      OB_NiSmartPointer_Assign_010201A0(v3 + 0xC, v3 + 0x26); /*0x7d1463*/
    }
    if ( v4 ) /*0x7d146a*/
    {
      OB_NiSmartPointer_Assign_010201A0(v4 + 0xB, v4 + 0x25); /*0x7d1476*/
      OB_NiSmartPointer_Assign_010201A0(v4 + 0xC, v4 + 0x26); /*0x7d1485*/
    }
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x7d1492*/
    {
      if ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] == 1 ) /*0x7d14a3*/
        sub_849020((unsigned __int16)a1); /*0x7d14aa*/
    }
    else
    {
      sub_83AC70((unsigned __int16)a1); /*0x7d1499*/
    }
  }
  else
  {
    if ( shader ) /*0x7d1373*/
    {
      OB_NiSmartPointer_Assign_010201A0(shader + 0xB, shader + 0x23); /*0x7d137f*/
      OB_NiSmartPointer_Assign_010201A0(shader + 0xC, shader + 0x24); /*0x7d138e*/
    }
    if ( v2 ) /*0x7d1395*/
    {
      OB_NiSmartPointer_Assign_010201A0(v2 + 0xB, v2 + 0x23); /*0x7d13a1*/
      OB_NiSmartPointer_Assign_010201A0(v2 + 0xC, v2 + 0x24); /*0x7d13b0*/
    }
    if ( v3 ) /*0x7d13b7*/
    {
      OB_NiSmartPointer_Assign_010201A0(v3 + 0xB, v3 + 0x23); /*0x7d13c3*/
      OB_NiSmartPointer_Assign_010201A0(v3 + 0xC, v3 + 0x24); /*0x7d13d2*/
    }
    if ( v4 ) /*0x7d13d9*/
    {
      OB_NiSmartPointer_Assign_010201A0(v4 + 0xB, v4 + 0x23); /*0x7d13e9*/
      OB_NiSmartPointer_Assign_010201A0(v4 + 0xC, v4 + 0x24); /*0x7d13f8*/
    }
  }
  if ( (unsigned __int16)a1 < 0x1A3u ) /*0x7d14ba*/
  {
    v5 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d14c3*/
    if ( !*(_DWORD *)(v5 + 0x30) ) /*0x7d14ca*/
      *(_DWORD *)(v5 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d14d5*/
    NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v5 + 0x30), 0x1C, 0, 0);// Fog decode: standard shader selector disables fixed-function fog for this shader pass. /*0x7d14e1*/
    if ( ((unsigned __int16)a1 < 0x160u || (unsigned __int16)a1 > 0x164u) && (unsigned __int16)((_WORD)a1 - 0x165) > 2u ) /*0x7d1502*/
    {
      if ( (unsigned __int16)((_WORD)a1 - 0x10F) > 0x1Au ) /*0x7d152c*/
      {
        if ( (_WORD)a1 == 0x19E || (_WORD)a1 == 0x19F || (_WORD)a1 == 0xA || (_WORD)a1 == 0xB ) /*0x7d154c*/
        {
          v7 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d1589*/
          if ( !*(_DWORD *)(v7 + 0x30) ) /*0x7d1590*/
            *(_DWORD *)(v7 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d159b*/
          NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v7 + 0x30), 0xA8, 8, 0); /*0x7d15aa*/
        }
        else if ( (unsigned __int16)a1 > 2u ) /*0x7d1554*/
        {
          if ( (_WORD)a1 == 3 ) /*0x7d156f*/
            NiD3DPass_SetRenderState((_DWORD *)unk_B455AC, 0xA8, 0, 0); /*0x7d157e*/
          else
            NiD3DPass_SetRenderState(*(_DWORD **)(4 * (unsigned __int16)a1 + 0xB455A0), 0xA8, 7, 0); /*0x7d1587*/
        }
        else
        {
          NiD3DPass_SetRenderState(*(_DWORD **)(4 * (unsigned __int16)a1 + 0xB455A0), 0xA8, 0, 0); /*0x7d1564*/
        }
      }
      else
      {
        NiD3DPass_SetRenderState(*(_DWORD **)(4 * (unsigned __int16)a1 + 0xB455A0), 0xA8, 0xF, 0); /*0x7d1532*/
      }
    }
    else
    {
      v6 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d1504*/
      if ( !*(_DWORD *)(v6 + 0x30) ) /*0x7d150b*/
        *(_DWORD *)(v6 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d1516*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v6 + 0x30), 0xA8, 0xF, 0); /*0x7d151d*/
    }
    v8 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d15b7*/
    if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 4 ) /*0x7d15be*/
    {
      if ( !*(_DWORD *)(v8 + 0x30) ) /*0x7d15c4*/
        *(_DWORD *)(v8 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d15cf*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v8 + 0x30), 0x34, 1, 0); /*0x7d15db*/
      v9 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d15e0*/
      if ( !*(_DWORD *)(v9 + 0x30) ) /*0x7d15e7*/
        *(_DWORD *)(v9 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d15f2*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v9 + 0x30), 0x38, 8, 0); /*0x7d15fe*/
      v10 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d1603*/
      if ( !*(_DWORD *)(v10 + 0x30) ) /*0x7d160a*/
        *(_DWORD *)(v10 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d1615*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v10 + 0x30), 0x37, 7, 0); /*0x7d1621*/
      v11 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d1626*/
      if ( !*(_DWORD *)(v11 + 0x30) ) /*0x7d162d*/
        *(_DWORD *)(v11 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d1638*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v11 + 0x30), 0x35, 1, 0); /*0x7d1644*/
      v12 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d1649*/
      if ( !*(_DWORD *)(v12 + 0x30) ) /*0x7d1650*/
        *(_DWORD *)(v12 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d165b*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v12 + 0x30), 0x36, 1, 0); /*0x7d1664*/
    }
    else
    {
      if ( !*(_DWORD *)(v8 + 0x30) ) /*0x7d1666*/
        *(_DWORD *)(v8 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7d1671*/
      NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v8 + 0x30), 0x34, 0, 0); /*0x7d167d*/
    }
    if ( (_WORD)a1 != 0x17B ) /*0x7d1687*/
    {
      v13 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d1689*/
      for ( i = 0; i < *(_DWORD *)(v13 + 0x18); ++i ) /*0x7d1692*/
      {
        v15 = *(_DWORD **)(*(_DWORD *)(v13 + 0x24) + 4 * i); /*0x7d169a*/
        if ( v15 ) /*0x7d169f*/
        {
          v20 = *sub_75FB10(v15, &v19); /*0x7d16b5*/
          if ( v19 ) /*0x7d16b9*/
          {
            v16 = (void (__thiscall ***)(_DWORD, int))v19; /*0x7d16bb*/
            if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) ) /*0x7d16c1*/
              (**v16)(v16, 1); /*0x7d16d7*/
          }
          if ( v20 ) /*0x7d16df*/
          {
            if ( v20 != LODWORD(flt_B43110[0]) && i != 7 ) /*0x7d16ec*/
              NiD3DTextureStage_ApplyAddressModePreset((_DWORD **)v15, 3); /*0x7d16f2*/
          }
        }
        v13 = *(_DWORD *)(4 * (unsigned __int16)a1 + 0xB455A0); /*0x7d16f7*/
      }
    }
  }
  result = a1; /*0x7d1706*/
  if ( (_WORD)a1 == 0x77 || (_WORD)a1 == 0x85 ) /*0x7d1714*/
  {
    *(float *)&v21 = unk_B4313C - MEMORY[0xB3F92C]; /*0x7d172d*/
    *(float *)&v22 = unk_B43140 - unk_B3F930; /*0x7d1743*/
    v18 = dbl_A492F0; /*0x7d175c*/
    *(float *)&v23 = unk_B43144 - v18; /*0x7d175e*/
    *(float *)&v24 = unk_B43148 - v18; /*0x7d176f*/
    OB_BSShader_SetSharedFloat4Constant_010201A0(0x20u, v21, v22, v23, v24); /*0x7d177a*/
    result = OB_BSShader_SetSharedFloat4Constant_010201A0(0x22u, dword_B2C718, dword_B2C71C, dword_B2C720, dword_B2C724); /*0x7d17a9*/
  }
  if ( (_WORD)a1 == 0x17B ) /*0x7d17b8*/
    return OB_BSShader_SetSharedFloat4Constant_010201A0(0x21u, dword_B2C728, dword_B2C72C, dword_B2C730, dword_B2C734); /*0x7d17e4*/
  return result; /*0x7d17ec*/
}
