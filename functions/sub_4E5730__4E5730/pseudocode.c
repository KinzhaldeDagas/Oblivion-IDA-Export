// Verified PathGrid candidate search: scans point lists in nearby packed cell buckets, skips null/disabled points and exclusions, scores candidates using actor-aware connected-point cost, and optionally tests a short segment/line-of-sight before returning the best point. The exact semantics of the extraFilter and outFallbackUsed parameters remain Candidate.
TESPathGridPoint *__thiscall TESPathGrid_FindReachablePointForActor(
        TESPathGrid *this,
        TESPathGridPoint *origin,
        TESObjectREFR *actor,
        bool extraFilter,
        BSSimpleList_VoidPtr *excludedPoints,
        bool *outFallbackUsed)
{
  NiPoint3 *Position; // eax
  float y; // ecx
  float z; // edx
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // esi
  int v13; // eax
  float v14; // edi
  TESConnectedPoint *v15; // esi
  BSSimpleList_VoidPtr *Connections; // eax
  BSSimpleList_VoidPtr *next; // eax
  NiPoint3 *v18; // eax
  bool v19; // zf
  NiPoint3 *v20; // eax
  int v21; // esi
  TESConnectedPoint *v22; // ecx
  NiPoint3 *v23; // eax
  TESPathGridPoint *v25; // ecx
  NiPoint3 *v26; // [esp-4h] [ebp-78h]
  NiPoint3 *v27; // [esp-4h] [ebp-78h]
  float v28; // [esp+0h] [ebp-74h]
  float v29; // [esp+0h] [ebp-74h]
  TESPathGridPoint *v30; // [esp+10h] [ebp-64h]
  unsigned int v31; // [esp+14h] [ebp-60h]
  float v32; // [esp+18h] [ebp-5Ch] BYREF
  float v33; // [esp+1Ch] [ebp-58h]
  int v34; // [esp+20h] [ebp-54h]
  int v35; // [esp+24h] [ebp-50h]
  int v36; // [esp+28h] [ebp-4Ch]
  int v37; // [esp+2Ch] [ebp-48h]
  unsigned int v38; // [esp+30h] [ebp-44h]
  unsigned int v39; // [esp+34h] [ebp-40h]
  TESPathGridCellPointMap *p_pointsByCell; // [esp+38h] [ebp-3Ch]
  bool preferred[4]; // [esp+3Ch] [ebp-38h]
  NiPoint3 v42; // [esp+40h] [ebp-34h] BYREF
  TESConnectedPoint *v43[10]; // [esp+4Ch] [ebp-28h] BYREF

  v30 = 0; /*0x4e5748*/
  *outFallbackUsed = 0; /*0x4e574c*/
  if ( origin && actor && this->pointArray ) /*0x4e575d*/
  {
    v33 = flt_A32048; /*0x4e5773*/
    sub_401080(v43, 8, 5, (void *(__thiscall *)(void *))sub_4E4990); /*0x4e577e*/
    Position = PathGraphNode_GetPosition(origin); /*0x4e5785*/
    y = Position->y; /*0x4e578c*/
    v42.x = Position->x; /*0x4e578f*/
    z = Position->z; /*0x4e5793*/
    v42.y = y; /*0x4e5796*/
    v42.z = z; /*0x4e579a*/
    v10 = (int)v42.x >> 9; /*0x4e57aa*/
    v36 = v10; /*0x4e57ad*/
    v11 = 0xFFFFFFFF; /*0x4e57c0*/
    v31 = 0xFFFFFFFF; /*0x4e57c9*/
    p_pointsByCell = &this->pointsByCell; /*0x4e57cd*/
    v37 = ((int)v42.y >> 9) - 1; /*0x4e57d1*/
    while ( 1 ) /*0x4e57e8*/
    {
      v12 = v37; /*0x4e57e8*/
      v39 = v11 + v10; /*0x4e57f6*/
      v38 = v11 + v10 + 0x7FFF; /*0x4e57fa*/
      v34 = v37; /*0x4e57fe*/
      v35 = 3; /*0x4e5802*/
      do /*0x4e5941*/
      {
        v13 = 0; /*0x4e580a*/
        if ( v38 <= 0xFFFD && (unsigned int)(v12 + 0x7FFF) <= 0xFFFD ) /*0x4e5822*/
          v13 = (unsigned __int16)v12 | (v39 << 0x10); /*0x4e582e*/
        v32 = 0.0; /*0x4e583a*/
        NiTMap_GetAt(p_pointsByCell, v13, &v32); /*0x4e583e*/
        v14 = v32; /*0x4e5843*/
        if ( v32 != 0.0 ) /*0x4e5849*/
        {
          do /*0x4e592b*/
          {
            v15 = *(TESConnectedPoint **)LODWORD(v14); /*0x4e5850*/
            if ( *(_DWORD *)LODWORD(v14) ) /*0x4e5850*/
            {
              if ( !PathGraphNode_IsLinkedPointsDisabled(*(void **)LODWORD(v14)) ) /*0x4e585c*/
              {
                Connections = PathGraphNode_GetConnections(v15); /*0x4e586b*/
                if ( Connections->firstNode.next || Connections->firstNode.data ) /*0x4e5875*/
                {
                  next = excludedPoints; /*0x4e587d*/
                  if ( excludedPoints ) /*0x4e5882*/
                  {
                    while ( next->firstNode.data != v15 ) /*0x4e5886*/
                    {
                      next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x4e588c*/
                      if ( !next ) /*0x4e5891*/
                        goto LABEL_18; /*0x4e5891*/
                    }
                  }
                  else
                  {
LABEL_18:
                    preferred[0] = PathGraphNode_IsPreferred(v15); /*0x4e5893*/
                    PathGraphNode_SetPreferred(v15, 0); /*0x4e58a1*/
                    v32 = TESConnectedPoint_ComputeActorAwareEdgeCost((TESConnectedPoint *)origin, v15, actor); /*0x4e58b4*/
                    PathGraphNode_SetPreferred(v15, preferred[0]); /*0x4e58c2*/
                    if ( v33 > (double)v32 ) /*0x4e58d6*/
                    {
                      v33 = v32; /*0x4e58d8*/
                      v30 = (TESPathGridPoint *)v15; /*0x4e58dc*/
                    }
                    if ( extraFilter ) /*0x4e58e7*/
                    {
                      v28 = unk_B3A448; /*0x4e58f2*/
                      v26 = PathGraphNode_GetPosition(v15); /*0x4e58fd*/
                      v18 = PathGraphNode_GetPosition(origin); /*0x4e58fe*/
                      if ( sub_480520(&v18->x, &v26->x, v28) < 0 ) /*0x4e590e*/
                        sub_4E49B0((int)v43, (int)v15, v32); /*0x4e591e*/
                    }
                  }
                }
              }
            }
            v14 = *(float *)(LODWORD(v14) + 4); /*0x4e5926*/
          }
          while ( v14 != 0.0 ); /*0x4e592b*/
          v12 = v34; /*0x4e5931*/
        }
        ++v12; /*0x4e5935*/
        v19 = v35-- == 1; /*0x4e5938*/
        v34 = v12; /*0x4e593d*/
      }
      while ( !v19 ); /*0x4e5941*/
      if ( (int)++v31 > 1 ) /*0x4e5955*/
        break; /*0x4e5955*/
      v10 = v36; /*0x4e57e0*/
      v11 = v31; /*0x4e57e4*/
    }
    if ( v30 ) /*0x4e595f*/
    {
      if ( extraFilter ) /*0x4e5968*/
      {
        v29 = unk_B3A448; /*0x4e597a*/
        v27 = PathGraphNode_GetPosition(origin); /*0x4e5986*/
        v20 = PathGraphNode_GetPosition(v30); /*0x4e5987*/
        if ( sub_480520(&v20->x, &v27->x, v29) < 0 ) /*0x4e5997*/
        {
          v42 = *PathGraphNode_GetPosition(origin); /*0x4e59a2*/
          v21 = 0; /*0x4e59b4*/
          while ( 1 ) /*0x4e59b6*/
          {
            v22 = v43[2 * v21]; /*0x4e59b6*/
            if ( !v22 ) /*0x4e59bc*/
              break; /*0x4e59bc*/
            v23 = PathGraphNode_GetPosition(v22); /*0x4e59be*/
            if ( sub_687C30((MobileObject *)actor, &v42, &v23->x) ) /*0x4e59cd*/
            {
              v25 = (TESPathGridPoint *)v43[2 * v21]; /*0x4e59f1*/
              *outFallbackUsed = 1; /*0x4e59f5*/
              return v25; /*0x4e59f8*/
            }
            if ( ++v21 >= 5 ) /*0x4e59df*/
              return v30; /*0x4e59eb*/
          }
        }
      }
    }
  }
  return v30; /*0x4e59e5*/
}
