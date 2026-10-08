// Verified actor-aware PathGrid point selection. For a placed reference, builds a temporary graph node at the requested position, attaches below-water and SubSpace flags, and asks that cell's PathGrid for the best reachable candidate. For exterior coordinates, searches the loaded cell grid; when the position is in the active world's loaded neighborhood, compares actor-aware candidates from the containing and adjacent cell PathGrids. It may reduce cost for candidates with the extra reachability result; exact meaning of that mode remains Candidate.
TESPathGridPoint *__cdecl TESPathGrid_FindNearestReachablePointForActor(
        const NiPoint3 *position,
        TESObjectREFR *actor,
        bool pathMode,
        BSSimpleList_VoidPtr *excludedPoints)
{
  unsigned int v4; // ebp
  TESWorldSpace *CurrentWorldspace; // edi
  _DWORD *DwordAtOffset40; // eax
  TESPathGrid *v8; // ebx
  ExtraDataList *v9; // eax
  TESObjectCELL *v10; // eax
  TESPathGridPoint *p_from; // ecx
  TESWorldSpace *v12; // ebx
  TESObjectCELL *CellAtWorldPosition; // esi
  int v14; // esi
  int v15; // ebp
  double v16; // st7
  double v17; // st6
  double v18; // rt0
  double v19; // st6
  unsigned int v20; // ebx
  int v21; // edi
  TESConnectedPoint *v22; // esi
  int i; // edi
  _DWORD *v24; // ecx
  TESPathGrid *v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ebx
  TESObjectCELL *cell; // esi
  TESPathGrid *v29; // eax
  TESPathGridPoint *ClosestPointByPosition; // eax
  TESPathGridPoint *v31; // esi
  NiPoint3 *v32; // eax
  int v33; // [esp+14h] [ebp-9Ch]
  float v34; // [esp+14h] [ebp-9Ch]
  TESWorldSpace *v35; // [esp+18h] [ebp-98h]
  float v36; // [esp+18h] [ebp-98h]
  float v37; // [esp+18h] [ebp-98h]
  bool v38; // [esp+1Fh] [ebp-91h] BYREF
  bool preferred[4]; // [esp+20h] [ebp-90h]
  float v40; // [esp+24h] [ebp-8Ch]
  bool outFallbackUsed; // [esp+2Bh] [ebp-85h] BYREF
  TESPathGridPoint *ReachablePointForActor; // [esp+2Ch] [ebp-84h]
  double z; // [esp+30h] [ebp-80h]
  float v44; // [esp+38h] [ebp-78h]
  TESObjectCELL *v45; // [esp+3Ch] [ebp-74h]
  TESObjectCELL *CellAtCellCoord; // [esp+40h] [ebp-70h]
  int v47; // [esp+44h] [ebp-6Ch]
  int v48; // [esp+48h] [ebp-68h]
  TESPathGridPoint from; // [esp+4Ch] [ebp-64h] BYREF
  TESPathGridPoint v50; // [esp+78h] [ebp-38h] BYREF
  int v51; // [esp+ACh] [ebp-4h]

  v4 = 0; /*0x67d854*/
  ReachablePointForActor = 0; /*0x67d858*/
  if ( !actor ) /*0x67d85c*/
    return ReachablePointForActor; /*0x67d85c*/
  if ( !sub_4D8B90(actor) ) /*0x67d864*/
  {
    CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x67d87a*/
    if ( TESObjectREFR_GetWorldSpace(actor) != CurrentWorldspace ) /*0x67d883*/
      return 0; /*0x67d887*/
  }
  if ( sub_4D8B90(actor) ) /*0x67d88e*/
  {
    if ( !Shared_GetDwordAtOffset40(actor) ) /*0x67d89d*/
      return ReachablePointForActor; /*0x67d89d*/
    DwordAtOffset40 = (_DWORD *)Shared_GetDwordAtOffset40(actor); /*0x67d8ac*/
    v8 = (TESPathGrid *)sub_4AF170(DwordAtOffset40); /*0x67d8b8*/
    if ( !v8 ) /*0x67d8bc*/
      return ReachablePointForActor; /*0x67d8bc*/
    TESPathGridPoint_ctor(&v50); /*0x67d8c6*/
    v51 = 0; /*0x67d8d7*/
    PathGraphNode_SetPosition(&v50, position); /*0x67d8de*/
    z = position->z; /*0x67d8e8*/
    v9 = (ExtraDataList *)Shared_GetDwordAtOffset40(actor); /*0x67d8ec*/
    if ( TESObjectCELL_GetWaterHeight(v9) > z ) /*0x67d901*/
      PathGraphNode_SetBelowWaterFlag(&v50, 1); /*0x67d909*/
    v10 = (TESObjectCELL *)Shared_GetDwordAtOffset40(actor); /*0x67d911*/
    if ( TESObjectCELL_FindSmallestSubSpaceContainingPosition(v10, &position->x) ) /*0x67d918*/
      PathGraphNode_SetSubSpaceMembershipFlag(&v50, 1); /*0x67d927*/
    outFallbackUsed = 0; /*0x67d94c*/
    ReachablePointForActor = TESPathGrid_FindReachablePointForActor( /*0x67d956*/
                               v8,
                               &v50,
                               actor,
                               pathMode,
                               excludedPoints,
                               &outFallbackUsed);
    v51 = 0xFFFFFFFF; /*0x67d95a*/
    p_from = &v50; /*0x67d965*/
  }
  else
  {
    if ( !TES::GetCurrentWorldspace(MEMORY[0xB333A0]) ) /*0x67d999*/
      return ReachablePointForActor; /*0x67d999*/
    if ( !sub_43F840(MEMORY[0xB333A0], &position->x) ) /*0x67d9b0*/
    {
      v26 = uGridsToLoad; /*0x67dc69*/
      v37 = flt_A32048; /*0x67dc6e*/
      while ( v4 < v26 ) /*0x67dc74*/
      {
        v27 = 0; /*0x67dc7a*/
        while ( v27 < v26 ) /*0x67dc82*/
        {
          cell = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, v4, v27)->cell; /*0x67dc9d*/
          if ( ReachablePointForActor && (!cell || v37 <= sub_4C9DA0((int)cell, &position->x)) ) /*0x67dcbc*/
            goto LABEL_59; /*0x67dcbc*/
          if ( !cell ) /*0x67dcc4*/
            goto LABEL_59; /*0x67dcc4*/
          v29 = (TESPathGrid *)sub_4AF170(cell); /*0x67dccc*/
          if ( !v29 ) /*0x67dcd3*/
            goto LABEL_59; /*0x67dcd3*/
          ClosestPointByPosition = TESPathGrid_FindClosestPointByPosition(v29, position); /*0x67dcd8*/
          v31 = ClosestPointByPosition; /*0x67dcdd*/
          if ( ClosestPointByPosition /*0x67dd35*/
            && (v32 = PathGraphNode_GetPosition(ClosestPointByPosition),
                *(float *)&z = v32->x - position->x,
                *((float *)&z + 1) = v32->y - position->y,
                v44 = v32->z - position->z,
                *(float *)preferred = *(float *)&z * *(float *)&z + *((float *)&z + 1) * *((float *)&z + 1) + v44 * v44,
                v37 > (double)*(float *)preferred) )
          {
            v26 = uGridsToLoad; /*0x67dd37*/
            v37 = *(float *)preferred; /*0x67dd3c*/
            ReachablePointForActor = v31; /*0x67dd40*/
            ++v27; /*0x67dd44*/
          }
          else
          {
LABEL_59:
            v26 = uGridsToLoad; /*0x67dd4e*/
            ++v27; /*0x67dd53*/
          }
        }
        ++v4; /*0x67dd5b*/
      }
      return ReachablePointForActor; /*0x67dc74*/
    }
    v12 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x67d9c1*/
    v35 = v12; /*0x67d9c6*/
    CellAtWorldPosition = TESWorldSpace_GetCellAtWorldPosition(v12, &position->x); /*0x67d9d3*/
    TESPathGridPoint_ctor(&from); /*0x67d9d5*/
    v51 = 1; /*0x67d9df*/
    PathGraphNode_SetPosition(&from, position); /*0x67d9ea*/
    if ( CellAtWorldPosition ) /*0x67d9f1*/
    {
      z = position->z; /*0x67d9f8*/
      if ( TESObjectCELL_GetWaterHeight((ExtraDataList *)CellAtWorldPosition) > z ) /*0x67da0a*/
        PathGraphNode_SetBelowWaterFlag(&from, 1); /*0x67da12*/
      if ( TESWorldSpace_FindSmallestSubSpaceContainingPosition(v12, &position->x) ) /*0x67da1a*/
        PathGraphNode_SetSubSpaceMembershipFlag(&from, 1); /*0x67da29*/
    }
    *(float *)preferred = position->x; /*0x67da36*/
    CellAtCellCoord = 0; /*0x67da3a*/
    v47 = 0; /*0x67da3e*/
    v48 = 0; /*0x67da42*/
    v45 = CellAtWorldPosition; /*0x67da46*/
    v14 = (int)*(float *)preferred >> 0xC; /*0x67da5d*/
    v15 = (int)position->y >> 0xC; /*0x67da79*/
    *(float *)preferred = (float)(v14 << 0xC); /*0x67da7e*/
    v16 = *(float *)preferred; /*0x67da85*/
    *(float *)&z = *(float *)preferred; /*0x67da8d*/
    v33 = 0; /*0x67da97*/
    *(float *)preferred = (float)(v15 << 0xC); /*0x67da9b*/
    v17 = *(float *)preferred; /*0x67da9f*/
    *((float *)&z + 1) = *(float *)preferred; /*0x67daa3*/
    v18 = dbl_A37650; /*0x67daaf*/
    *(float *)preferred = v16 + v18; /*0x67dab1*/
    v40 = v18 + v17; /*0x67dab7*/
    v19 = dbl_A6CC88; /*0x67dabd*/
    if ( *(float *)&z < position->x - v19 ) /*0x67dad2*/
      v20 = *(float *)preferred <= position->x + v19; /*0x67daea*/
    else
      v20 = 0xFFFFFFFF; /*0x67dad4*/
    if ( *((float *)&z + 1) < position->y - v19 ) /*0x67daff*/
    {
      if ( v40 <= v19 + position->y ) /*0x67db1b*/
        v33 = 1; /*0x67db1d*/
    }
    else
    {
      v33 = 0xFFFFFFFF; /*0x67db03*/
    }
    v21 = 1; /*0x67db27*/
    if ( v20 ) /*0x67db2c*/
    {
      CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v35, v20 + v14, v15); /*0x67db3c*/
      v21 = 2; /*0x67db40*/
    }
    if ( v33 ) /*0x67db4b*/
      *(&v45 + v21++) = TESWorldSpace::GetCellAtCellCoord(v35, v14, v15 + v33); /*0x67db5a*/
    if ( v20 ) /*0x67db63*/
    {
      if ( v33 ) /*0x67db6b*/
        *(&v45 + v21) = TESWorldSpace::GetCellAtCellCoord(v35, v14 + v20, v15 + v33); /*0x67db7c*/
    }
    v34 = flt_A32048; /*0x67db94*/
    v22 = 0; /*0x67db98*/
    for ( i = 0; i < 4; ++i ) /*0x67db9a*/
    {
      v24 = *(&v45 + i); /*0x67db9c*/
      if ( v24 ) /*0x67dba2*/
      {
        v38 = 0; /*0x67dba8*/
        v25 = (TESPathGrid *)sub_4AF170(v24); /*0x67dbad*/
        if ( v25 ) /*0x67dbb4*/
          v22 = (TESConnectedPoint *)TESPathGrid_FindReachablePointForActor( /*0x67dbd1*/
                                       v25,
                                       &from,
                                       actor,
                                       pathMode,
                                       excludedPoints,
                                       &v38);
        if ( v22 ) /*0x67dbd5*/
        {
          preferred[0] = PathGraphNode_IsPreferred(v22); /*0x67dbe2*/
          PathGraphNode_SetPreferred(v22, 0); /*0x67dbe6*/
          v36 = TESConnectedPoint_ComputeActorAwareEdgeCost((TESConnectedPoint *)&from, v22, actor); /*0x67dbfe*/
          PathGraphNode_SetPreferred(v22, preferred[0]); /*0x67dc0c*/
          if ( !v38 ) /*0x67dc16*/
            v36 = v36 * fCostant_100; /*0x67dc22*/
          if ( v34 > (double)v36 ) /*0x67dc35*/
          {
            v34 = v36; /*0x67dc37*/
            ReachablePointForActor = (TESPathGridPoint *)v22; /*0x67dc3b*/
          }
        }
      }
    }
    v51 = 0xFFFFFFFF; /*0x67dc4f*/
    p_from = &from; /*0x67dc5a*/
  }
  sub_4E8200((unsigned int *)p_from); /*0x67d969*/
  return ReachablePointForActor; /*0x67d972*/
}
