// Verified actor-aware A* over graph-node adjacency. It uses TESConnectedPoint_ComputeActorAwareEdgeCost, skips candidates whose PathGrid linkedPointsDisabled bit 0x20 is set, and applies an additional actor-specific path filter. Its pathgrid caller selects a reachable point for actor movement.
bool __thiscall ConnectedPointGraph_FindActorAwarePath(void *searchContext, TESObjectREFR *actor)
{
  void *v3; // ecx
  bool result; // al
  NiCamera *i; // ebx
  NiCamera *v6; // eax
  BSSimpleList_VoidPtr *Connections; // eax
  TESConnectedPoint *data; // esi
  TESWaterCulling *v9; // ecx
  float value; // [esp+0h] [ebp-50h]
  float valuea; // [esp+0h] [ebp-50h]
  bool v12; // [esp+1Bh] [ebp-35h]
  BSSimpleList_VoidPtr *next; // [esp+1Ch] [ebp-34h]
  double v14; // [esp+20h] [ebp-30h]
  float v15; // [esp+20h] [ebp-30h]
  double TotalEstimateCost; // [esp+28h] [ebp-28h]
  NiTPointerList__BSImageSpaceShader v17; // [esp+30h] [ebp-20h] BYREF
  unsigned int v18; // [esp+4Ch] [ebp-4h]

  v3 = *((void **)searchContext + 7); /*0x67e8fe*/
  result = 0; /*0x67e901*/
  v12 = 0; /*0x67e907*/
  if ( v3 ) /*0x67e90b*/
  {
    if ( *((_DWORD *)searchContext + 8) ) /*0x67e911*/
    {
      memset(&v17.start, 0, 0xC); /*0x67e91e*/
      v17.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&AStarNodeList::`vftable'; /*0x67e926*/
      v18 = 0; /*0x67e934*/
      SetFloatAtOffset_04(v3, 0.0); /*0x67e938*/
      value = sub_67EEC0((char *)*((_DWORD *)searchContext + 7), (char *)*((_DWORD *)searchContext + 8)); /*0x67e94a*/
      TESConnectedPoint_SetHeuristicCost(*((TESConnectedPoint **)searchContext + 7), value); /*0x67e954*/
      TESConnectedPoint_RecomputeTotalEstimateCost(*((TESConnectedPoint **)searchContext + 7)); /*0x67e95c*/
      TESWaterCulling::SetCamera(*((TESWaterCulling **)searchContext + 7), 0); /*0x67e965*/
      GraphNode_SetFlag01(*((void **)searchContext + 7), 1); /*0x67e96f*/
      AStarNodeList_Add(&v17, *((TESConnectedPoint **)searchContext + 7)); /*0x67e97c*/
      for ( i = (NiCamera *)AStarNodeList_PopLowestTotalEstimateCost(&v17); /*0x67e98e*/
            i;
            i = (NiCamera *)AStarNodeList_PopLowestTotalEstimateCost(&v17) )
      {
        if ( v12 ) /*0x67e999*/
          break; /*0x67e999*/
        v6 = *((NiCamera **)searchContext + 8); /*0x67e99f*/
        if ( i == v6 ) /*0x67e9a4*/
        {
          v12 = 1; /*0x67e9a6*/
          *((_DWORD *)searchContext + 9) = v6; /*0x67e9ab*/
        }
        Connections = PathGraphNode_GetConnections(i); /*0x67e9b0*/
        next = Connections; /*0x67e9b7*/
        if ( Connections ) /*0x67e9bb*/
        {
          while ( Connections->firstNode.next || Connections->firstNode.data ) /*0x67e9c7*/
          {
            if ( v12 ) /*0x67e9db*/
              break; /*0x67e9db*/
            data = (TESConnectedPoint *)Connections->firstNode.data; /*0x67e9e1*/
            if ( PathGraphNode_IsLinkedPointsDisabled(Connections->firstNode.data) /*0x67e9f7*/
              || sub_5E0710(actor, (int)i, (int)data) )
            {
              next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x67eb01*/
            }
            else
            {
              v9 = *((TESWaterCulling **)searchContext + 8); /*0x67ea04*/
              if ( data == (TESConnectedPoint *)v9 ) /*0x67ea09*/
              {
                v12 = 1; /*0x67ea0c*/
                TESWaterCulling::SetCamera(v9, i); /*0x67ea11*/
                *((_DWORD *)searchContext + 9) = *((_DWORD *)searchContext + 8); /*0x67ea19*/
              }
              else
              {
                v14 = TESConnectedPoint_ComputeActorAwareEdgeCost((TESConnectedPoint *)i, data, actor); /*0x67ea2c*/
                v15 = TESConnectedPoint_GetPathCost((TESConnectedPoint *)i) + v14; /*0x67ea40*/
                if ( !GraphNode_IsFlag01Set(data) && !GraphNode_IsFlag02Set(data) /*0x67ea70*/
                  || TESConnectedPoint_GetPathCost(data) > (double)v15 )
                {
                  if ( !GraphNode_IsFlag01Set(data) ) /*0x67ea74*/
                  {
                    GraphNode_SetFlag01(data, 1); /*0x67ea81*/
                    AStarNodeList_Add(&v17, data); /*0x67ea8b*/
                  }
                  SetFloatAtOffset_04(data, v15); /*0x67ea9a*/
                  valuea = sub_67EEC0((char *)data, (char *)*((_DWORD *)searchContext + 8)); /*0x67eaa9*/
                  TESConnectedPoint_SetHeuristicCost(data, valuea); /*0x67eab2*/
                  TESConnectedPoint_RecomputeTotalEstimateCost(data); /*0x67eab9*/
                  TESWaterCulling::SetCamera((TESWaterCulling *)data, i); /*0x67eac1*/
                  if ( !*((_DWORD *)searchContext + 9) /*0x67eae8*/
                    || (TotalEstimateCost = TESConnectedPoint_GetTotalEstimateCost(data),
                        TESConnectedPoint_GetTotalEstimateCost(*((TESConnectedPoint **)searchContext + 9)) > TotalEstimateCost) )
                  {
                    *((_DWORD *)searchContext + 9) = data; /*0x67eaea*/
                  }
                }
                next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x67eaf4*/
              }
            }
            if ( !next ) /*0x67eb0a*/
              break; /*0x67eb0a*/
            Connections = next; /*0x67e9c3*/
          }
        }
        GraphNode_SetFlag02(i, 1); /*0x67eb14*/
      }
      v18 = 0xFFFFFFFF; /*0x67eb32*/
      AStarNodeList::~AStarNodeList(&v17); /*0x67eb3a*/
      return v12; /*0x67eb3f*/
    }
  }
  return result; /*0x67eb43*/
}
