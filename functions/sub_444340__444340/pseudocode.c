void __usercall sub_444340(
        int a1@<ecx>,
        double a2@<st0>,
        double a3@<st3>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st4>,
        double a7@<st5>,
        double a8@<st6>,
        double a9@<st7>)
{
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  signed int v14; // edi
  TESForm *v15; // eax
  TES *v16; // edi
  TESObjectCELL *v17; // esi
  unsigned int i; // eax
  unsigned int j; // eax
  bool v20; // bl
  double v21; // st7
  TESSaveLoad *v22; // eax
  unsigned int k; // ecx
  unsigned int m; // ebx
  TESWorldSpace *v25; // eax
  TESObjectCELL *v26; // eax
  TESObjectCELL *v27; // esi
  NiNode *v28; // edi
  _DWORD *v29; // eax
  volatile LONG *v30; // esi
  bool v31; // [esp+1Ah] [ebp-16h]
  bool v32; // [esp+1Bh] [ebp-15h]
  int v33; // [esp+1Ch] [ebp-14h]
  int v34; // [esp+20h] [ebp-10h]
  float v35; // [esp+20h] [ebp-10h]
  unsigned int v36; // [esp+24h] [ebp-Ch]
  char v37; // [esp+24h] [ebp-Ch]
  unsigned int v38; // [esp+24h] [ebp-Ch]
  unsigned int v39; // [esp+28h] [ebp-8h]
  unsigned int v40; // [esp+2Ch] [ebp-4h]

  v10 = (unsigned int)uGridsToLoad >> 1; /*0x44434f*/
  v40 = *(_DWORD *)(a1 + 0x20) - v10; /*0x444353*/
  v39 = *(_DWORD *)(a1 + 0x24) - v10; /*0x44435e*/
  v33 = 0; /*0x444362*/
  v31 = sub_57BAC0(); /*0x444378*/
  v32 = sub_57BAC0(); /*0x444382*/
  if ( sub_4E9F40() ) /*0x444386*/
    sub_483D60(*(unsigned int **)(a1 + 4), *(TESWorldSpace **)(a1 + 0x74)); /*0x444396*/
  g_TESSaveLoadGame->flags |= 0x100u; /*0x4443a0*/
  if ( MEMORY[0xB35C24] ) /*0x4443a7*/
    sub_889E00((_DWORD *)MEMORY[0xB35C24]); /*0x4443b1*/
  v11 = uGridsToLoad; /*0x4443b6*/
  v12 = 0; /*0x4443bb*/
LABEL_6:
  v36 = v12; /*0x4443bd*/
  if ( v12 < v11 ) /*0x4443c3*/
  {
    v13 = 0; /*0x4443c9*/
    while ( 1 ) /*0x4443d0*/
    {
      if ( v13 >= v11 ) /*0x4443d2*/
      {
        ++v12; /*0x44452c*/
        goto LABEL_6; /*0x44452f*/
      }
      v14 = v12 + v40; /*0x4443e4*/
      sub_4441A0((_DWORD *)a1, a4, a5, a2, v12, v13, v12 + v40, v13 + v39); /*0x4443ec*/
      v15 = sub_447740((TESWorldSpace **)g_TESDataHandler, v14, v13 + v39, *(TESWorldSpace **)(a1 + 0x74), 0); /*0x4443ff*/
      v16 = MEMORY[0xB333A0]; /*0x444404*/
      v17 = (TESObjectCELL *)v15; /*0x44440a*/
      if ( v15 ) /*0x44440e*/
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)v15) ) /*0x444412*/
        {
          for ( i = 0; i < uInteriorCellBuffer; ++i ) /*0x444421*/
          {
            if ( v16->interiorCellBufferArray[i] == v17 ) /*0x44442d*/
              goto LABEL_19; /*0x44442d*/
          }
        }
        else
        {
          for ( j = 0; j < uExteriorCellBuffer; ++j ) /*0x44443a*/
          {
            if ( v16->exteriorCellBufferArray[j] == v17 ) /*0x44444a*/
            {
LABEL_19:
              if ( TESObjectCELL_IsInterior(v17) ) /*0x444453*/
                sub_43FD70((TES *)a1, a4, a5, a2, v17); /*0x44445f*/
              else
                sub_43FED0((_DWORD *)a1, a4, a5, a2, v17); /*0x444466*/
              break; /*0x444464*/
            }
          }
        }
      }
      if ( v32 || sub_45A500(g_TESSaveLoadGame) && (g_TESSaveLoadGame->flags & 0x800) != 0 ) /*0x444493*/
      {
        ++v33; /*0x44449e*/
        v34 = uGridsToLoad * uGridsToLoad; /*0x4444ae*/
        a5 = (double)v34; /*0x4444b2*/
        if ( v34 < 0 ) /*0x4444b6*/
          a5 = a5 + flt_A2FC78; /*0x4444b8*/
        v35 = (double)v33 / a5 * fCostant_100; /*0x4444cc*/
        if ( !sub_45A500(g_TESSaveLoadGame) || (g_TESSaveLoadGame->flags & 0x800) == 0 ) /*0x4444e7*/
        {
          a2 = v35; /*0x444509*/
          sub_57B950(a1, a4, a5, 1, v35); /*0x444513*/
          goto LABEL_31; /*0x444513*/
        }
        a2 = sub_4523A0(a1, a4, a5, v35, 1, v35); /*0x4444f3*/
        v11 = uGridsToLoad; /*0x4444f8*/
        v12 = v36; /*0x4444fd*/
        ++v13; /*0x444501*/
      }
      else
      {
LABEL_31:
        v11 = uGridsToLoad; /*0x44451b*/
        v12 = v36; /*0x444520*/
        ++v13; /*0x444524*/
      }
    }
  }
  if ( MEMORY[0xB35C24] ) /*0x444534*/
    sub_88D1D0((int *)MEMORY[0xB35C24], a1, 0); /*0x444540*/
  g_TESSaveLoadGame->flags &= ~0x100u; /*0x44454a*/
  if ( g_TESSaveLoadGame->unk01C[0] ) /*0x444557*/
  {
    v37 = sub_45A500(g_TESSaveLoadGame); /*0x444570*/
    v20 = (g_TESSaveLoadGame->flags & 0x80) != 0; /*0x444574*/
    sub_45A530(g_TESSaveLoadGame, 1); /*0x444577*/
    g_TESSaveLoadGame->flags |= 0x80u; /*0x444588*/
    v21 = sub_45FDA0(g_TESSaveLoadGame, a5, a4, a2, 0, 0, 0); /*0x444595*/
    a2 = sub_461030(g_TESSaveLoadGame, a4, a5, v21, 0); /*0x4445a2*/
    v22 = g_TESSaveLoadGame; /*0x4445a9*/
    if ( v20 ) /*0x4445ae*/
      v22->flags |= 0x80u; /*0x4445b0*/
    else
      v22->flags &= ~0x80u; /*0x4445b5*/
    sub_45A530(g_TESSaveLoadGame, v37); /*0x4445c7*/
  }
  if ( MEMORY[0xB35C24] ) /*0x4445cc*/
    sub_889E00((_DWORD *)MEMORY[0xB35C24]); /*0x4445d6*/
  for ( k = 0; ; ++k ) /*0x4445db*/
  {
    v38 = k; /*0x4445e3*/
    if ( k >= uGridsToLoad ) /*0x4445e7*/
      break; /*0x4445e7*/
    for ( m = 0; m < uGridsToLoad; ++m ) /*0x4445ed*/
    {
      v25 = *(TESWorldSpace **)(a1 + 0x74); /*0x4445fc*/
      if ( v25 ) /*0x444601*/
      {
        v26 = (TESObjectCELL *)sub_447740((TESWorldSpace **)g_TESDataHandler, v40 + k, m + v39, v25, 0); /*0x44461f*/
        v27 = v26; /*0x444624*/
        if ( v26 ) /*0x444628*/
        {
          if ( v26->members.cellProcessLevel == 5 ) /*0x444632*/
          {
            sub_4D5BD0(v26, a5, a2, a4, a3, a6, a7, a8, a9, a1, !v31); /*0x44463f*/
            if ( TESObjectCELL_IsInterior(v27) ) /*0x444646*/
              sub_43FD70((TES *)a1, a4, a5, a2, v27); /*0x444652*/
            else
              sub_43FED0((_DWORD *)a1, a4, a5, a2, v27); /*0x444659*/
            v28 = sub_4D58B0(v27); /*0x444665*/
            NiAVObject_InitializePropertyState((NiAVObject *)v28); /*0x444669*/
            NiNode_UpdateDynamicEffectState(v28); /*0x444670*/
            NiAVObject_InitializePropertyState(*(NiAVObject **)(a1 + 0x10)); /*0x444678*/
            NiNode_UpdateDynamicEffectState(*(NiNode **)(a1 + 0x10)); /*0x444680*/
            if ( !v28->members.children.numObjs ) /*0x444685*/
            {
              a2 = 0.0; /*0x44468f*/
              NiAVObject_UpdateNiAVObject((NiAVObject *)v28, 0.0, 0); /*0x444699*/
            }
          }
          if ( *(_DWORD *)(a1 + 0x78) ) /*0x44469e*/
          {
            v29 = (_DWORD *)FormHeapAlloc(8u); /*0x4446a6*/
            if ( v29 ) /*0x4446b0*/
            {
              *v29 = *(_DWORD *)(a1 + 0x78); /*0x4446b5*/
              v29[1] = 0; /*0x4446b7*/
            }
            else
            {
              v29 = 0; /*0x4446c0*/
            }
            v29[1] = *(_DWORD *)(a1 + 0x7C); /*0x4446c5*/
            *(_DWORD *)(a1 + 0x7C) = v29; /*0x4446c8*/
          }
          *(_DWORD *)(a1 + 0x78) = v27; /*0x4446cb*/
        }
      }
      k = v38; /*0x4446ce*/
    }
  }
  if ( MEMORY[0xB35C24] ) /*0x4446e2*/
    sub_88D1D0((int *)MEMORY[0xB35C24], a1, 0); /*0x4446ee*/
  v30 = (volatile LONG *)g_CanopyShadowMap; /*0x4446f3*/
  if ( g_CanopyShadowMap ) /*0x4446f3*/
  {
    if ( !InterlockedDecrement(v30 + 1) ) /*0x444701*/
    {
      if ( v30 ) /*0x44470d*/
        (**(void (__thiscall ***)(void *, int))v30)((void *)v30, 1); /*0x444717*/
    }
    g_CanopyShadowMap = 0; /*0x444719*/
  }
  g_bCanopyShadowMapPending = 1; /*0x444726*/
}
