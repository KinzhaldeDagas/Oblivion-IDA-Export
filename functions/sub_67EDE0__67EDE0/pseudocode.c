// Verified actor-aware edge cost: TESObjectREFR_GetPathGraphMovementCost(from, actor) + Euclidean distance + fPathWaterExitPenalty when below-water bit 0x08 differs + fPathSpaceExitPenalty when SubSpace bit 0x40 differs. Current defaults: 20,000 for each boundary penalty; exact tuning rationale Unknown.
float __cdecl TESConnectedPoint_ComputeActorAwareEdgeCost(
        TESConnectedPoint *from,
        TESConnectedPoint *to,
        TESObjectREFR *actor)
{
  double v4; // st7
  NiPoint3 *Position; // esi
  NiPoint3 *v6; // eax
  float v9; // [esp+4h] [ebp-10h]
  float v10[3]; // [esp+8h] [ebp-Ch] BYREF
  float froma; // [esp+18h] [ebp+4h]

  v9 = flt_A32048; /*0x67edee*/
  if ( from ) /*0x67edf4*/
  {
    if ( to ) /*0x67ee01*/
    {
      if ( actor ) /*0x67ee0d*/
      {
        froma = TESObjectREFR_GetPathGraphMovementCost(actor, &to->totalEstimateCost); /*0x67ee1a*/
        if ( (((unsigned __int8)((unsigned int)from->stateFlags >> 3) /*0x67ee35*/
             ^ (unsigned __int8)((unsigned int)to->stateFlags >> 3))
            & 1) != 0 )
          froma = g_fPathWaterExitPenalty + froma; /*0x67ee41*/
        if ( (((unsigned __int8)((unsigned int)from->stateFlags >> 6) /*0x67ee53*/
             ^ (unsigned __int8)((unsigned int)to->stateFlags >> 6))
            & 1) != 0 )
          froma = g_fPathSpaceExitPenalty + froma; /*0x67ee5f*/
        v4 = 0.0; /*0x67ee63*/
        if ( froma > 0.0 ) /*0x67ee6e*/
        {
          Position = PathGraphNode_GetPosition(to); /*0x67ee7b*/
          v6 = PathGraphNode_GetPosition(from); /*0x67ee7d*/
          v10[0] = v6->x - Position->x; /*0x67ee8a*/
          v10[1] = v6->y - Position->y; /*0x67ee94*/
          v10[2] = v6->z - Position->z; /*0x67ee9e*/
          return NiPoint3_Length(v10) + froma; /*0x67eea7*/
        }
        return v4; /*0x67eeab*/
      }
    }
  }
  return v9; /*0x67eeb4*/
}
