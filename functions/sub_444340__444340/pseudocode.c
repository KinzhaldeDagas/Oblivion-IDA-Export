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
  int **v25; // eax
  TESForm *v26; // eax
  TESObjectCELL *v27; // esi
  NiAVObject *v28; // edi
  _DWORD *v29; // eax
  NiRenderedTexture *v30; // esi
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

  v10 = (unsigned int)uGridsToLoad >> 1;
  v40 = *(_DWORD *)(a1 + 0x20) - v10;
  v39 = *(_DWORD *)(a1 + 0x24) - v10;
  v33 = 0;
  v31 = sub_57BAC0(a1, a4, a5, a2);
  v32 = sub_57BAC0(a1, a4, a5, a2);
  if ( sub_4E9F40() )
    sub_483D60(*(_DWORD **)(a1 + 4), *(_DWORD **)(a1 + 0x74));
  SaveLoad_CurrentSavegame->flags |= 0x100u;
  if ( bhkWorldM )
    sub_889E00((_DWORD *)bhkWorldM);
  v11 = uGridsToLoad;
  v12 = 0;
LABEL_6:
  v36 = v12;
  if ( v12 < v11 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        ++v12;
        goto LABEL_6;
      }
      v14 = v12 + v40;
      sub_4441A0((_DWORD *)a1, a4, a5, a2, v12, v13, v12 + v40, v13 + v39);
      v15 = sub_447740((_DWORD *)TESDataHandler, v14, v13 + v39, *(int ***)(a1 + 0x74), 0);
      v16 = TES;
      v17 = (TESObjectCELL *)v15;
      if ( v15 )
      {
        if ( TESObjectCELL_IsInterior((TESObjectCELL *)v15) )
        {
          for ( i = 0; i < uInteriorCellBuffer; ++i )
          {
            if ( v16->interiorCellBufferArray[i] == v17 )
              goto LABEL_19;
          }
        }
        else
        {
          for ( j = 0; j < uExteriorCellBuffer; ++j )
          {
            if ( v16->exteriorCellBufferArray[j] == v17 )
            {
LABEL_19:
              if ( TESObjectCELL_IsInterior(v17) )
                sub_43FD70((TES *)a1, a4, a5, a2, v17);
              else
                sub_43FED0((_DWORD *)a1, a4, a5, a2, v17);
              break;
            }
          }
        }
      }
      if ( v32 || sub_45A500(SaveLoad_CurrentSavegame) && (SaveLoad_CurrentSavegame->flags & 0x800) != 0 )
      {
        ++v33;
        v34 = uGridsToLoad * uGridsToLoad;
        a5 = (double)v34;
        if ( v34 < 0 )
          a5 = a5 + flt_A2FC78;
        v35 = (double)v33 / a5 * fCostant_100;
        if ( !sub_45A500(SaveLoad_CurrentSavegame) || (SaveLoad_CurrentSavegame->flags & 0x800) == 0 )
        {
          a2 = v35;
          sub_57B950(a1, a4, a5, v35, 1, v35);
          goto LABEL_31;
        }
        a2 = sub_4523A0(a1, a4, a5, v35, 1, v35);
        v11 = uGridsToLoad;
        v12 = v36;
        ++v13;
      }
      else
      {
LABEL_31:
        v11 = uGridsToLoad;
        v12 = v36;
        ++v13;
      }
    }
  }
  if ( bhkWorldM )
    a2 = sub_88D1D0(0);
  SaveLoad_CurrentSavegame->flags &= ~0x100u;
  if ( SaveLoad_CurrentSavegame->unk01C[0] )
  {
    v37 = sub_45A500(SaveLoad_CurrentSavegame);
    v20 = (SaveLoad_CurrentSavegame->flags & 0x80) != 0;
    sub_45A530(SaveLoad_CurrentSavegame, 1);
    SaveLoad_CurrentSavegame->flags |= 0x80u;
    v21 = sub_45FDA0(SaveLoad_CurrentSavegame, a5, a4, a2, 0, 0, 0);
    a2 = sub_461030(SaveLoad_CurrentSavegame, a4, a5, v21, 0);
    v22 = SaveLoad_CurrentSavegame;
    if ( v20 )
      v22->flags |= 0x80u;
    else
      v22->flags &= ~0x80u;
    sub_45A530(SaveLoad_CurrentSavegame, v37);
  }
  if ( bhkWorldM )
    sub_889E00((_DWORD *)bhkWorldM);
  for ( k = 0; ; ++k )
  {
    v38 = k;
    if ( k >= uGridsToLoad )
      break;
    for ( m = 0; m < uGridsToLoad; ++m )
    {
      v25 = *(int ***)(a1 + 0x74);
      if ( v25 )
      {
        v26 = sub_447740((_DWORD *)TESDataHandler, v40 + k, m + v39, v25, 0);
        v27 = (TESObjectCELL *)v26;
        if ( v26 )
        {
          if ( BYTE2(v26[1].member.refID) == 5 )
          {
            sub_4D5BD0((int)v26, a5, a2, a4, a3, a6, a7, a8, a9, a1, !v31);
            if ( TESObjectCELL_IsInterior(v27) )
              sub_43FD70((TES *)a1, a4, a5, a2, v27);
            else
              sub_43FED0((_DWORD *)a1, a4, a5, a2, v27);
            v28 = sub_4D58B0((int)v27);
            NiAVObject_InitializePropertyState(v28);
            NiNode_UpdateDynamicEffectState((NiNode *)v28);
            NiAVObject_InitializePropertyState(*(NiAVObject **)(a1 + 0x10));
            NiNode_UpdateDynamicEffectState(*(NiNode **)(a1 + 0x10));
            if ( !LOWORD(v28[1].members.super.m_controller) )
            {
              a2 = 0.0;
              NiAVObject_UpdateNiAVObject(v28, 0.0, 0);
            }
          }
          if ( *(_DWORD *)(a1 + 0x78) )
          {
            v29 = (_DWORD *)FormHeapAlloc(8u);
            if ( v29 )
            {
              *v29 = *(_DWORD *)(a1 + 0x78);
              v29[1] = 0;
            }
            else
            {
              v29 = 0;
            }
            v29[1] = *(_DWORD *)(a1 + 0x7C);
            *(_DWORD *)(a1 + 0x7C) = v29;
          }
          *(_DWORD *)(a1 + 0x78) = v27;
        }
      }
      k = v38;
    }
  }
  if ( bhkWorldM )
    sub_88D1D0(0);
  v30 = CanopySadowMap;
  if ( CanopySadowMap )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v30->member) )
    {
      if ( v30 )
        v30->__vftable->super.super.super.Destructor((NiRefObject *)v30, 1);
    }
    CanopySadowMap = 0;
  }
  byte_B06A28 = 1;
}
