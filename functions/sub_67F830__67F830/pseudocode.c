// Verified A* neighbor expansion: resolve the current node's spatial form, enumerate its linked-reference bucket, validate candidate reference/space relationship and traversal cost, update candidate fitness and parent when improved, then reinsert or reopen it as appropriate. Reaching destination space updates the best-route bound.
void __cdecl TravelPath_ExpandSpaceDoorNeighbors(
        TESForm *currentSpace,
        TravelPathSpaceDoorLink *currentNode,
        AStarWorldNodeList *openNodes)
{
  float v3; // ecx
  MEF_U32PointerMapLayout32 *v4; // esi
  void *v5; // ebx
  TravelPathSpaceDoorLink *v6; // esi
  double Fitness; // st7
  char v8; // bl
  double v9; // st7
  double v10; // st7
  bool v11; // zf
  void *valueOut; // [esp+14h] [ebp-30h] BYREF
  MEF_U32PointerMapLayout32 *self; // [esp+18h] [ebp-2Ch] BYREF
  unsigned int keyOut[2]; // [esp+1Ch] [ebp-28h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+28h] [ebp-1Ch] BYREF
  double v16; // [esp+2Ch] [ebp-18h]
  NiPoint3 outPosition; // [esp+38h] [ebp-Ch] BYREF

  if ( currentSpace ) /*0x67f841*/
  {
    if ( openNodes ) /*0x67f84b*/
    {
      if ( currentNode ) /*0x67f856*/
      {
        if ( TravelPathSpaceDoorLink_GetPositionInSpace(currentNode, currentSpace, &outPosition) ) /*0x67f862*/
        {
          v3 = qword_B3BB2C[0xB5]; /*0x67f874*/
          self = 0; /*0x67f87b*/
          if ( NiTMap_GetAt((_DWORD *)LODWORD(v3), (int)currentSpace, &self) ) /*0x67f883*/
          {
            v4 = self; /*0x67f890*/
            if ( self ) /*0x67f896*/
            {
              position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)self); /*0x67f8a5*/
              if ( position ) /*0x67f8a9*/
              {
                while ( 1 ) /*0x67f8c6*/
                {
                  valueOut = 0; /*0x67f8c6*/
                  NiTMap_U32Pointer_GetNextEntry(v4, &position, keyOut, &valueOut); /*0x67f8ce*/
                  v5 = valueOut; /*0x67f8d3*/
                  if ( valueOut ) /*0x67f8d9*/
                  {
                    while ( *((_DWORD *)v5 + 1) || *(_DWORD *)v5 ) /*0x67f8e5*/
                    {
                      v6 = *(TravelPathSpaceDoorLink **)v5; /*0x67f8f4*/
                      if ( TravelPathSpaceDoorLink_IsEligibleInSpace(*(TravelPathSpaceDoorLink **)v5, currentSpace) ) /*0x67f8f9*/
                      {
                        *(double *)keyOut = TravelPath_ComputeTransitionDistanceCost( /*0x67f91b*/
                                              currentSpace,
                                              &outPosition,
                                              (TESObjectREFR **)v6,
                                              (TESObjectREFR *)LODWORD(qword_B3BB2C[0xB7]),
                                              1);
                        Fitness = TravelPath_SearchState_GetFitness(currentNode); /*0x67f925*/
                        v8 = 0; /*0x67f930*/
                        *(float *)keyOut = Fitness + *(double *)keyOut; /*0x67f932*/
                        if ( !TravelPath_SearchState_IsDiscovered(v6) && !TravelPath_SearchState_IsExpanded(v6) /*0x67f964*/
                          || (v16 = *(float *)keyOut, v8 = 1, v9 = TravelPath_SearchState_GetFitness(v6), v9 > v16) )
                        {
                          TravelPath_SearchState_SetFitness(v6, *(float *)keyOut); /*0x67f974*/
                          TravelPath_SearchState_SetParentAndSpace(v6, currentNode, currentSpace); /*0x67f980*/
                          if ( TravelPath_SearchState_IsDiscovered(v6) /*0x67f9a4*/
                            || (double)flt_B1545C <= TravelPath_SearchState_GetFitness(v6) )
                          {
                            if ( v8 ) /*0x67f9bc*/
                              AStarWorldNodeList_ReinsertByFitness(openNodes, v6); /*0x67f9c2*/
                          }
                          else
                          {
                            TravelPath_SearchState_SetDiscoveredFlag(v6, 1); /*0x67f9aa*/
                            AStarWorldNodeList_InsertByFitness(openNodes, v6); /*0x67f9b3*/
                          }
                          if ( TravelPathSpaceDoorLink_GetOtherSpace(v6, currentSpace) == (TESForm *)LODWORD(qword_B3BB2C[0xB9]) ) /*0x67f9d7*/
                          {
                            v16 = TravelPath_ComputeTransitionDistanceCost( /*0x67f9ee*/
                                    (TESForm *)LODWORD(qword_B3BB2C[0xB9]),
                                    (const NiPoint3 *)&qword_B3BB2C[0xC0],
                                    (TESObjectREFR **)v6,
                                    (TESObjectREFR *)LODWORD(qword_B3BB2C[0xB7]),
                                    0);
                            v10 = TravelPath_SearchState_GetFitness(v6); /*0x67f9f7*/
                            v11 = LODWORD(qword_B3BB2C[0xB6]) == 0; /*0x67fa00*/
                            *(float *)keyOut = v10 + v16; /*0x67fa07*/
                            if ( v11 || flt_B1545C > (double)*(float *)keyOut ) /*0x67fa1e*/
                            {
                              flt_B1545C = *(float *)keyOut; /*0x67fa20*/
                              LODWORD(qword_B3BB2C[0xB6]) = v6; /*0x67fa26*/
                            }
                          }
                        }
                        v5 = valueOut; /*0x67fa30*/
                      }
                      valueOut = *((void **)v5 + 1); /*0x67fa39*/
                      if ( !valueOut ) /*0x67fa3d*/
                        break; /*0x67fa3d*/
                      v5 = valueOut; /*0x67f8e1*/
                    }
                  }
                  if ( !position ) /*0x67fa48*/
                    break; /*0x67fa48*/
                  v4 = self; /*0x67f8b1*/
                }
              }
            }
          }
        }
        else
        {
          PrintError("Failed to find coord for space."); /*0x67fa5a*/
        }
      }
    }
  }
}
