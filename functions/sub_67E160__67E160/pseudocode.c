// Verified direct-segment test used before actor-aware A*. It locates PathGrid nodes near both endpoints, rejects/defers segments based on distance, water-state mismatch and actor collision-height checks, and reports whether graph fallback should be attempted. Exact meaning of several geometric thresholds remains Unknown.
bool __thiscall ConnectedPointGraph_TestStraightSegment(float *segmentQuery, TESObjectREFR *actor, bool strictMode)
{
  float *v4; // edi
  TESPathGridPoint *NearestReachablePointForActor; // eax
  TESPathGridPoint *v7; // ecx
  NiPoint3 *Position; // eax
  float *v9; // eax
  NiPoint3 *v10; // eax
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v17; // st5
  bool IsBelowWaterFlagSet; // bl
  double ScaledCollisionHeight; // st7
  float v20; // edx
  float v21; // eax
  float v22; // ecx
  float v23; // edx
  float v24; // eax
  float v25; // [esp+8h] [ebp-20h]
  float v26; // [esp+Ch] [ebp-1Ch]
  float v27[3]; // [esp+10h] [ebp-18h] BYREF
  float v28[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v29; // [esp+24h] [ebp-4h]
  float actora; // [esp+2Ch] [ebp+4h]
  float strictModea; // [esp+30h] [ebp+8h]

  if ( stru_B15450.x == *segmentQuery && stru_B15450.y == *(segmentQuery + 1) && stru_B15450.z == *(segmentQuery + 2) ) /*0x67e19c*/
    return 0; /*0x67e3ba*/
  v4 = segmentQuery + 3; /*0x67e1a3*/
  if ( !NiPoint3__NotEqual((const NiPoint3 *)segmentQuery + 1, &stru_B15450) ) /*0x67e1ad*/
    return 0; /*0x67e3a4*/
  if ( !actor ) /*0x67e1c1*/
    return 0; /*0x67e3b0*/
  if ( sub_4D8B90(actor) || sub_43F840(MEMORY[0xB333A0], segmentQuery) || sub_43F840(MEMORY[0xB333A0], segmentQuery + 3) ) /*0x67e1e9*/
  {
    *((_DWORD *)segmentQuery + 7) = TESPathGrid_FindNearestReachablePointForActor( /*0x67e207*/
                                      (const NiPoint3 *)segmentQuery,
                                      actor,
                                      *((_BYTE *)segmentQuery + 0x18) == 0,
                                      0);
    NearestReachablePointForActor = TESPathGrid_FindNearestReachablePointForActor( /*0x67e216*/
                                      (const NiPoint3 *)segmentQuery + 1,
                                      actor,
                                      *((_BYTE *)segmentQuery + 0x18) == 0,
                                      0);
    v7 = *((TESPathGridPoint **)segmentQuery + 7); /*0x67e21b*/
    *((_DWORD *)segmentQuery + 8) = NearestReachablePointForActor; /*0x67e223*/
    *((_DWORD *)segmentQuery + 0xA) = actor; /*0x67e226*/
    if ( v7 ) /*0x67e229*/
    {
      if ( NearestReachablePointForActor ) /*0x67e231*/
      {
        if ( v7 != NearestReachablePointForActor ) /*0x67e239*/
        {
          Position = PathGraphNode_GetPosition(v7); /*0x67e23f*/
          v9 = sub_4121A0(segmentQuery, v28, &Position->x); /*0x67e24c*/
          v25 = sub_47DA40(v9); /*0x67e258*/
          v10 = PathGraphNode_GetPosition(*((void **)segmentQuery + 8)); /*0x67e25f*/
          v11 = sub_4121A0(segmentQuery + 3, v28, &v10->x); /*0x67e26c*/
          v26 = sub_47DA40(v11); /*0x67e278*/
          v12 = sub_4121A0(segmentQuery, v28, segmentQuery + 3); /*0x67e284*/
          actora = sub_47DA40(v12); /*0x67e290*/
          v13 = v25; /*0x67e298*/
          v14 = v26; /*0x67e29c*/
          if ( strictMode ) /*0x67e2a0*/
          {
            v15 = flt_A4CAE0; /*0x67e2a2*/
            if ( v15 > v13 && v15 > v14 ) /*0x67e2b8*/
              return 1; /*0x67e2b8*/
          }
          v17 = dbl_A748C8; /*0x67e2cc*/
          if ( v17 > v13 && v17 > v14 ) /*0x67e2e2*/
            return 1; /*0x67e2e2*/
          if ( actora > v13 + v14 ) /*0x67e2f5*/
            return 1; /*0x67e2f5*/
          IsBelowWaterFlagSet = GraphNode_IsBelowWaterFlagSet(*((void **)segmentQuery + 8)); /*0x67e302*/
          if ( GraphNode_IsBelowWaterFlagSet(*((void **)segmentQuery + 7)) != IsBelowWaterFlagSet ) /*0x67e30b*/
            return 1; /*0x67e30b*/
          if ( actora < kTerrainLODQuadRayStartZOffset ) /*0x67e31c*/
          {
            ScaledCollisionHeight = Actor_GetScaledCollisionHeight(actor); /*0x67e320*/
            v20 = *segmentQuery; /*0x67e32e*/
            v21 = *(segmentQuery + 1); /*0x67e330*/
            strictModea = ScaledCollisionHeight * dbl_A2FAA0; /*0x67e333*/
            v29 = *(segmentQuery + 2); /*0x67e337*/
            v22 = *(segmentQuery + 5); /*0x67e343*/
            v28[0] = v20; /*0x67e348*/
            v23 = *v4; /*0x67e34c*/
            v28[1] = v21; /*0x67e350*/
            v24 = *(segmentQuery + 4); /*0x67e356*/
            v29 = v29 + strictModea; /*0x67e359*/
            v27[0] = v23; /*0x67e35d*/
            v27[1] = v24; /*0x67e36d*/
            v27[2] = strictModea + v22; /*0x67e376*/
            if ( !sub_6859A0(v28, v27) ) /*0x67e37b*/
              return 1; /*0x67e2c1*/
          }
        }
      }
    }
  }
  *(segmentQuery + 7) = 0.0; /*0x67e38f*/
  *(segmentQuery + 8) = 0.0; /*0x67e392*/
  *(segmentQuery + 0xA) = 0.0; /*0x67e395*/
  return 0; /*0x67e2c0*/
}
