// Verified A* route builder: F=G+H, Euclidean edge G, Euclidean H, predecessor at +0x0C. It emits a TeleportData chain from v14: the goal if found, otherwise the best candidate seen; return value v13 separately reports whether the goal was reached. Fallout's inspected Pathing uses typed AStarQueue/NavMeshSearchNode and TeleportDoorSearch instead.
bool __stdcall ConnectedPointGraph_BuildAStarRoute(
        TESConnectedPoint *start,
        TESConnectedPoint *goal,
        TeleportData **outRouteNodes)
{
  bool result; // al
  TESConnectedPoint *i; // edi
  BSSimpleList_VoidPtr *Connections; // eax
  TESConnectedPoint *data; // esi
  _DWORD *p_totalEstimateCost; // edi
  NiPoint3 *Position; // eax
  TeleportData *v9; // eax
  TeleportData *v10; // esi
  float value; // [esp+0h] [ebp-50h]
  float valuea; // [esp+0h] [ebp-50h]
  bool v13; // [esp+17h] [ebp-39h]
  TESConnectedPoint *v14; // [esp+18h] [ebp-38h]
  BSSimpleList_VoidPtr *next; // [esp+1Ch] [ebp-34h]
  double v16; // [esp+20h] [ebp-30h]
  float v17; // [esp+20h] [ebp-30h]
  double TotalEstimateCost; // [esp+28h] [ebp-28h]
  NiTPointerList__BSImageSpaceShader v19; // [esp+30h] [ebp-20h] BYREF
  unsigned int v20; // [esp+4Ch] [ebp-4h]

  result = 0; /*0x67e63f*/
  v13 = 0; /*0x67e645*/
  if ( start ) /*0x67e649*/
  {
    if ( goal ) /*0x67e654*/
    {
      if ( outRouteNodes ) /*0x67e65d*/
      {
        memset(&v19.start, 0, 0xC); /*0x67e667*/
        v19.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&AStarNodeList::`vftable'; /*0x67e66f*/
        v20 = 0; /*0x67e67f*/
        v14 = 0; /*0x67e683*/
        SetFloatAtOffset_04(start, 0.0); /*0x67e687*/
        value = TESConnectedPoint_DistanceTo(start, goal); /*0x67e693*/
        TESConnectedPoint_SetHeuristicCost(start, value); /*0x67e69c*/
        TESConnectedPoint_RecomputeTotalEstimateCost(start); /*0x67e6a3*/
        TESWaterCulling::SetCamera((TESWaterCulling *)start, 0); /*0x67e6ab*/
        GraphNode_SetFlag01(start, 1); /*0x67e6b4*/
        AStarNodeList_Add(&v19, start); /*0x67e6be*/
        for ( i = AStarNodeList_PopLowestTotalEstimateCost(&v19); i; i = AStarNodeList_PopLowestTotalEstimateCost(&v19) ) /*0x67e6d0*/
        {
          if ( v13 ) /*0x67e6e5*/
            break; /*0x67e6e5*/
          if ( i == goal ) /*0x67e6ed*/
          {
            v13 = 1; /*0x67e6ef*/
            v14 = goal; /*0x67e6f4*/
          }
          Connections = PathGraphNode_GetConnections(i); /*0x67e6fa*/
          next = Connections; /*0x67e701*/
          if ( Connections ) /*0x67e705*/
          {
            while ( Connections->firstNode.next || Connections->firstNode.data ) /*0x67e714*/
            {
              if ( v13 ) /*0x67e728*/
                break; /*0x67e728*/
              data = (TESConnectedPoint *)Connections->firstNode.data; /*0x67e72e*/
              if ( Connections->firstNode.data == goal ) /*0x67e732*/
              {
                v13 = 1; /*0x67e737*/
                TESWaterCulling::SetCamera((TESWaterCulling *)goal, (NiCamera *)i); /*0x67e73c*/
                v14 = goal; /*0x67e741*/
              }
              else
              {
                v16 = TESConnectedPoint_DistanceTo(i, (TESConnectedPoint *)Connections->firstNode.data); /*0x67e751*/
                v17 = TESConnectedPoint_GetPathCost(i) + v16; /*0x67e765*/
                if ( !GraphNode_IsFlag01Set(data) && !GraphNode_IsFlag02Set(data) /*0x67e795*/
                  || TESConnectedPoint_GetPathCost(data) > (double)v17 )
                {
                  if ( !GraphNode_IsFlag01Set(data) ) /*0x67e79d*/
                  {
                    GraphNode_SetFlag01(data, 1); /*0x67e7aa*/
                    AStarNodeList_Add(&v19, data); /*0x67e7b4*/
                  }
                  SetFloatAtOffset_04(data, v17); /*0x67e7c3*/
                  valuea = TESConnectedPoint_DistanceTo(data, goal); /*0x67e7cf*/
                  TESConnectedPoint_SetHeuristicCost(data, valuea); /*0x67e7d8*/
                  TESConnectedPoint_RecomputeTotalEstimateCost(data); /*0x67e7df*/
                  TESWaterCulling::SetCamera((TESWaterCulling *)data, (NiCamera *)i); /*0x67e7e7*/
                  if ( !v14 /*0x67e810*/
                    || (TotalEstimateCost = TESConnectedPoint_GetTotalEstimateCost(data),
                        TESConnectedPoint_GetTotalEstimateCost(v14) > TotalEstimateCost) )
                  {
                    v14 = data; /*0x67e812*/
                  }
                }
                next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x67e81d*/
              }
              if ( !next ) /*0x67e826*/
                break; /*0x67e826*/
              Connections = next; /*0x67e710*/
            }
          }
          GraphNode_SetFlag02(i, 1); /*0x67e830*/
        }
        p_totalEstimateCost = (_DWORD *)&v14->totalEstimateCost; /*0x67e848*/
        if ( v14 ) /*0x67e84e*/
        {
          do /*0x67e8a0*/
          {
            Position = PathGraphNode_GetPosition(p_totalEstimateCost); /*0x67e854*/
            v9 = sub_68C280(outRouteNodes, Position, 0); /*0x67e85d*/
            v10 = v9; /*0x67e862*/
            if ( v9 ) /*0x67e866*/
            {
              sub_68CA30(v9, 1); /*0x67e86c*/
              sub_68CA60(v10, 1); /*0x67e875*/
              sub_68CA90(v10, 0); /*0x67e87e*/
              sub_68CAC0(v10, 0); /*0x67e887*/
              sub_68CB10(v10, 1); /*0x67e890*/
            }
            p_totalEstimateCost = (_DWORD *)TESEnchantableForm_GetCastingType(p_totalEstimateCost); /*0x67e89c*/
          }
          while ( p_totalEstimateCost ); /*0x67e8a0*/
        }
        v20 = 0xFFFFFFFF; /*0x67e8a6*/
        AStarNodeList_dtor(&v19); /*0x67e8ae*/
        return v13; /*0x67e8b3*/
      }
    }
  }
  return result; /*0x67e8b7*/
}
