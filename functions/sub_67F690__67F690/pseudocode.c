// Verified low-level route search seeding: enumerate the per-space reference map for the origin TESForm, filter eligible linked references, compute initial costs from source position and sourceRef, initialize per-node search state/parent, insert candidates into AStarWorldNodeList, and retain the best candidate already in the destination space.
void __cdecl TravelPath_SeedSpaceDoorCandidates(AStarWorldNodeList *openNodes)
{
  LowPathWorldDoorLinkMap *doorLinkMap; // ecx
  MEF_U32PointerMapLayout32 *v2; // esi
  TESObjectREFR ***v3; // edi
  TESObjectREFR **v4; // esi
  double v5; // st7
  bool v6; // zf
  TESForm *sourceSpace; // [esp-4h] [ebp-28h]
  float fitness; // [esp+0h] [ebp-24h]
  MEF_U32PointerMapLayout32 *self; // [esp+10h] [ebp-14h] BYREF
  void *valueOut; // [esp+14h] [ebp-10h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+18h] [ebp-Ch] BYREF
  unsigned int keyOut[2]; // [esp+1Ch] [ebp-8h] BYREF

  if ( openNodes ) /*0x67f69f*/
  {
    sourceSpace = MEMORY[0xB3BE00].sourceSpace; /*0x67f6b0*/
    doorLinkMap = MEMORY[0xB3BE00].doorLinkMap; /*0x67f6b1*/
    self = 0; /*0x67f6b7*/
    if ( NiTMap_GetAt(doorLinkMap, (int)sourceSpace, &self) ) /*0x67f6bf*/
    {
      v2 = self; /*0x67f6cc*/
      if ( self ) /*0x67f6d2*/
      {
        position = (MEF_U32PointerMapEntry32 *)NiTMapBase_GetFirstNode((unsigned int *)self); /*0x67f6e1*/
        if ( position ) /*0x67f6e5*/
        {
          while ( 1 ) /*0x67f705*/
          {
            *(float *)&valueOut = 0.0; /*0x67f705*/
            NiTMap_U32Pointer_GetNextEntry(v2, &position, keyOut, &valueOut); /*0x67f70d*/
            v3 = (TESObjectREFR ***)valueOut; /*0x67f712*/
            if ( *(float *)&valueOut != 0.0 ) /*0x67f718*/
            {
              do /*0x67f818*/
              {
                if ( !v3[1] && !*v3 ) /*0x67f724*/
                  break; /*0x67f727*/
                v4 = *v3; /*0x67f72d*/
                if ( TravelPathSpaceDoorLink_IsEligibleInSpace( /*0x67f738*/
                       (TravelPathSpaceDoorLink *)*v3,
                       MEMORY[0xB3BE00].sourceSpace) )
                {
                  fitness = TravelPath_ComputeTransitionDistanceCost( /*0x67f75f*/
                              MEMORY[0xB3BE00].sourceSpace,
                              &MEMORY[0xB3BE00].sourcePosition,
                              v4,
                              MEMORY[0xB3BE00].sourceRef,
                              1);
                  TravelPath_SearchState_SetFitness((TravelPathSpaceDoorLink *)v4, fitness); /*0x67f768*/
                  TravelPath_SearchState_SetParentAndSpace( /*0x67f778*/
                    (TravelPathSpaceDoorLink *)v4,
                    0,
                    MEMORY[0xB3BE00].sourceSpace);
                  TravelPath_SearchState_SetDiscoveredFlag((TravelPathSpaceDoorLink *)v4, 1); /*0x67f781*/
                  if ( (double)flt_B1545C > TravelPath_SearchState_GetFitness((TravelPathSpaceDoorLink *)v4) ) /*0x67f79a*/
                    AStarWorldNodeList_InsertByFitness(openNodes, (TravelPathSpaceDoorLink *)v4); /*0x67f7a0*/
                  if ( TravelPathSpaceDoorLink_GetOtherSpace( /*0x67f7ba*/
                         (TravelPathSpaceDoorLink *)v4,
                         MEMORY[0xB3BE00].sourceSpace) == MEMORY[0xB3BE00].destinationSpace )
                  {
                    *(double *)keyOut = TravelPath_ComputeTransitionDistanceCost( /*0x67f7d1*/
                                          MEMORY[0xB3BE00].destinationSpace,
                                          &MEMORY[0xB3BE00].destinationPosition,
                                          v4,
                                          MEMORY[0xB3BE00].sourceRef,
                                          0);
                    v5 = TravelPath_SearchState_GetFitness((TravelPathSpaceDoorLink *)v4); /*0x67f7da*/
                    v6 = MEMORY[0xB3BE00].bestGoalNode == 0; /*0x67f7e3*/
                    *(float *)&valueOut = v5 + *(double *)keyOut; /*0x67f7ea*/
                    if ( v6 || flt_B1545C > (double)*(float *)&valueOut ) /*0x67f801*/
                    {
                      flt_B1545C = *(float *)&valueOut; /*0x67f803*/
                      MEMORY[0xB3BE00].bestGoalNode = (AStarWorldNode *)v4; /*0x67f809*/
                    }
                  }
                }
                v3 = (TESObjectREFR ***)v3[1]; /*0x67f813*/
              }
              while ( v3 ); /*0x67f818*/
            }
            if ( !position ) /*0x67f823*/
              break; /*0x67f823*/
            v2 = self; /*0x67f6f0*/
          }
        }
      }
    }
  }
}
