// Verified post-A* road augmentation. It walks TravelPath nodes, switches to the linked door's WorldSpace and TeleportData marker position on teleport transitions, then asks that world's TESRoad to add surface-derived position nodes for applicable segments. TravelPath_ComputeDistance subsequently sums the added node segments, so road data changes the measured travel distance; this is route measurement/surface sampling, not the A* route search.
void __thiscall TravelPath_AddRoadSegmentsForPath(TravelPath *this, TESObjectREFR *sourceRef)
{
  TESForm *SpatialContainerAtPosition; // eax
  TESWorldSpace *v4; // esi
  BSSimpleList_VoidPtr *p_nodes; // edi
  BSSimpleList_VoidPtr *v6; // ebx
  const TravelPathNode *v7; // ebp
  TESObjectREFR *Reference; // eax
  TeleportData *TeleportData; // eax
  char *v10; // ebx
  TESRoad *worldspaceRoad; // eax
  NiPoint3 *Position; // [esp-Ch] [ebp-24h]
  BSSimpleList_VoidPtr *pathNodes; // [esp+8h] [ebp-10h]
  NiPoint3 worldPosition; // [esp+Ch] [ebp-Ch] BYREF
  Actor *data; // [esp+1Ch] [ebp+4h]

  if ( sourceRef )
  {
    if ( !Actor_IsCreature((Actor *)sourceRef) )
    {
      SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(sourceRef); /*0x689df3*/
      v4 = (TESWorldSpace *)OblivionDynamicCast( /*0x689dfe*/
                              SpatialContainerAtPosition,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESWorldSpace `RTTI Type Descriptor',
                              0);
      worldPosition = *(NiPoint3 *)sourceRef->vtbl->GetPos(sourceRef); /*0x689e11*/
      p_nodes = &this->nodes; /*0x689e18*/
      v6 = 0; /*0x689e22*/
      pathNodes = p_nodes; /*0x689e2a*/
      while ( p_nodes )
      {
        if ( !p_nodes->firstNode.next && !p_nodes->firstNode.data ) /*0x689e3b*/
          break; /*0x689e3e*/
        data = (Actor *)p_nodes->firstNode.data; /*0x689e48*/
        v7 = v6 ? (const TravelPathNode *)v6->firstNode.data : 0;
        if ( v7 ) /*0x689e56*/
        {
          Reference = TravelPathNode_GetReference(v7); /*0x689e5a*/
          if ( Reference ) /*0x689e61*/
          {
            TeleportData = TESObjectREFR_GetTeleportData(Reference); /*0x689e65*/
            v10 = (char *)TeleportData; /*0x689e6a*/
            if ( TeleportData ) /*0x689e6e*/
            {
              v4 = sub_42B470(&TeleportData->linkedDoor); /*0x689e79*/
              worldPosition = *(NiPoint3 *)EmbeddedList_GetHead(v10); /*0x689e84*/
              if ( v4 ) /*0x689e96*/
              {
                if ( TESWorldSpace_FindSmallestSubSpaceContainingPosition(v4, &worldPosition.x) ) /*0x689e9f*/
                  v4 = 0; /*0x689ea8*/
              }
            }
          }
        }
        v6 = p_nodes; /*0x689eac*/
        p_nodes = (BSSimpleList_VoidPtr *)p_nodes->firstNode.next; /*0x689eae*/
        if ( v4 ) /*0x689eb1*/
        {
          if ( GetObjectPointerAt_054(v4) ) /*0x689eb5*/
          {
            Position = TravelPathNode_GetPosition((const TravelPathNode *)data); /*0x689ecb*/
            worldspaceRoad = (TESRoad *)GetObjectPointerAt_054(v4); /*0x689ed5*/
            TESRoad_AddTravelSurfaceSegment(worldspaceRoad, pathNodes, (int)v7, &worldPosition, Position); /*0x689edc*/
            v4 = 0; /*0x689ee1*/
          }
        }
      }
    }
  }
}
