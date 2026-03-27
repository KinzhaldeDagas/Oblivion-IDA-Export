char *__cdecl sub_67D820(float *a1, TESObjectREFR *a2, char a3, char **a4)
{
  unsigned int v4; // ebp
  TESWorldSpace *CurrentWorldspace; // edi
  TESObjectCELL *ParentCell; // eax
  _DWORD *v8; // ebx
  TESObjectCELL *v9; // eax
  TESObjectCELL *v10; // eax
  float *v11; // ecx
  TESWorldSpace *v12; // ebx
  ExtraDataList *v13; // eax
  ExtraDataList *v14; // esi
  signed int v15; // esi
  signed int v16; // ebp
  double v17; // st7
  double v18; // st6
  double v19; // rt0
  double v20; // st6
  unsigned int v21; // ebx
  int v22; // edi
  float *v23; // esi
  int i; // edi
  _DWORD *v25; // ecx
  _DWORD *v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // ebx
  TESObjectCELL *cell; // esi
  int *v30; // eax
  char *v31; // eax
  char *v32; // esi
  float *v33; // eax
  int v34; // [esp+14h] [ebp-9Ch]
  float v35; // [esp+14h] [ebp-9Ch]
  TESWorldSpace *v36; // [esp+18h] [ebp-98h]
  float v37; // [esp+18h] [ebp-98h]
  float v38; // [esp+18h] [ebp-98h]
  char v39; // [esp+1Fh] [ebp-91h] BYREF
  float v40; // [esp+20h] [ebp-90h]
  float v41; // [esp+24h] [ebp-8Ch]
  char v42; // [esp+2Bh] [ebp-85h] BYREF
  char *v43; // [esp+2Ch] [ebp-84h]
  double v44; // [esp+30h] [ebp-80h]
  float v45; // [esp+38h] [ebp-78h]
  ExtraDataList *v46; // [esp+3Ch] [ebp-74h]
  int CellAtCellCoord; // [esp+40h] [ebp-70h]
  int v48; // [esp+44h] [ebp-6Ch]
  int v49; // [esp+48h] [ebp-68h]
  float v50[11]; // [esp+4Ch] [ebp-64h] BYREF
  float v51[11]; // [esp+78h] [ebp-38h] BYREF
  int v52; // [esp+ACh] [ebp-4h]

  v4 = 0;
  v43 = 0;
  if ( !a2 )
    return v43;
  if ( !sub_4D8B90(a2) )
  {
    CurrentWorldspace = TES::GetCurrentWorldspace(TES);
    if ( TESObjectREFR_GetWorldSpace(a2) != CurrentWorldspace )
      return 0;
  }
  if ( sub_4D8B90(a2) )
  {
    if ( !TESObjectREFR_GetParentCell(a2) )
      return v43;
    ParentCell = TESObjectREFR_GetParentCell(a2);
    v8 = (_DWORD *)sub_4AF170(ParentCell);
    if ( !v8 )
      return v43;
    sub_4E7DF0(v51);
    v52 = 0;
    sub_4BEF50(v51, a1);
    v44 = a1[2];
    v9 = TESObjectREFR_GetParentCell(a2);
    if ( TESObjectCELL_GetWaterHeight((ExtraDataList *)v9) > v44 )
      sub_67ED00(v51, 1);
    v10 = TESObjectREFR_GetParentCell(a2);
    if ( sub_4CBBB0(v10, a1) )
      sub_67ED50(v51, 1);
    v42 = 0;
    v43 = sub_4E5730(v8, (char *)v51, a2, a3, a4, &v42);
    v52 = 0xFFFFFFFF;
    v11 = v51;
  }
  else
  {
    if ( !TES::GetCurrentWorldspace(TES) )
      return v43;
    if ( !sub_43F840(TES, a1) )
    {
      v27 = uGridsToLoad;
      v38 = flt_A32048;
      while ( v4 < v27 )
      {
        v28 = 0;
        while ( v28 < v27 )
        {
          cell = GetGridEntry(TES->gridCellArray, v4, v28)->cell;
          if ( v43 && (!cell || v38 <= sub_4C9DA0((int)cell, a1)) )
            goto LABEL_59;
          if ( !cell )
            goto LABEL_59;
          v30 = (int *)sub_4AF170(cell);
          if ( !v30 )
            goto LABEL_59;
          v31 = (char *)sub_4E55E0(v30, a1);
          v32 = v31;
          if ( v31
            && (v33 = (float *)sub_4BEF40(v31),
                *(float *)&v44 = *v33 - *a1,
                *((float *)&v44 + 1) = v33[1] - a1[1],
                v45 = v33[2] - a1[2],
                v40 = *(float *)&v44 * *(float *)&v44 + *((float *)&v44 + 1) * *((float *)&v44 + 1) + v45 * v45,
                v38 > (double)v40) )
          {
            v27 = uGridsToLoad;
            v38 = v40;
            v43 = v32;
            ++v28;
          }
          else
          {
LABEL_59:
            v27 = uGridsToLoad;
            ++v28;
          }
        }
        ++v4;
      }
      return v43;
    }
    v12 = TES::GetCurrentWorldspace(TES);
    v36 = v12;
    TESWorldSpace::GetCellAtPos(v12, a1);
    v14 = v13;
    sub_4E7DF0(v50);
    v52 = 1;
    sub_4BEF50(v50, a1);
    if ( v14 )
    {
      v44 = a1[2];
      if ( TESObjectCELL_GetWaterHeight(v14) > v44 )
        sub_67ED00(v50, 1);
      if ( sub_4F0600(v12, a1) )
        sub_67ED50(v50, 1);
    }
    v40 = *a1;
    CellAtCellCoord = 0;
    v48 = 0;
    v49 = 0;
    v46 = v14;
    v15 = (int)v40 >> 0xC;
    v16 = (int)a1[1] >> 0xC;
    v40 = (float)(v15 << 0xC);
    v17 = v40;
    *(float *)&v44 = v40;
    v34 = 0;
    v40 = (float)(v16 << 0xC);
    v18 = v40;
    *((float *)&v44 + 1) = v40;
    v19 = dbl_A37650;
    v40 = v17 + v19;
    v41 = v19 + v18;
    v20 = dbl_A6CC88;
    if ( *(float *)&v44 < *a1 - v20 )
      v21 = v40 <= *a1 + v20;
    else
      v21 = 0xFFFFFFFF;
    if ( *((float *)&v44 + 1) < a1[1] - v20 )
    {
      if ( v41 <= v20 + a1[1] )
        v34 = 1;
    }
    else
    {
      v34 = 0xFFFFFFFF;
    }
    v22 = 1;
    if ( v21 )
    {
      CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v36, v21 + v15, v16);
      v22 = 2;
    }
    if ( v34 )
      *(&v46 + v22++) = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v36, v15, v16 + v34);
    if ( v21 )
    {
      if ( v34 )
        *(&v46 + v22) = (ExtraDataList *)TESWorldSpace::GetCellAtCellCoord(v36, v15 + v21, v16 + v34);
    }
    v35 = flt_A32048;
    v23 = 0;
    for ( i = 0; i < 4; ++i )
    {
      v25 = *(&v46 + i);
      if ( v25 )
      {
        v39 = 0;
        v26 = (_DWORD *)sub_4AF170(v25);
        if ( v26 )
          v23 = (float *)sub_4E5730(v26, (char *)v50, a2, a3, a4, &v39);
        if ( v23 )
        {
          LOBYTE(v40) = sub_4E8040(v23);
          sub_4E8060(v23, 0);
          v37 = sub_67EDE0((char *)v50, (int)v23, a2);
          sub_4E8060(v23, SLOBYTE(v40));
          if ( !v39 )
            v37 = v37 * fCostant_100;
          if ( v35 > (double)v37 )
          {
            v35 = v37;
            v43 = (char *)v23;
          }
        }
      }
    }
    v52 = 0xFFFFFFFF;
    v11 = v50;
  }
  sub_4E8200((unsigned int *)v11);
  return v43;
}
