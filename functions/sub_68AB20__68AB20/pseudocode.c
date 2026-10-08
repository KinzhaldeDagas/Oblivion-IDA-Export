// Verified TravelPath orchestration: clears existing node records; calls TravelPath_FindLowLevelRoute; copies returned kind-0 reference nodes into the TravelPath list; runs the teleport-loop pruning pass; and appends a kind-1 owned position node for the destination only when the A* search succeeded.
char __thiscall TravelPath_BuildRoute(
        TravelPath *this,
        TESForm *sourceSpace,
        void *sourceRouteContext,
        TESForm *destinationSpace,
        const NiPoint3 *destinationPosition,
        TESObjectREFR *sourceRef)
{
  char v7; // bl
  BSSimpleList_VoidPtr sourceNodes; // [esp+Ch] [ebp-8h] BYREF

  v7 = 0; /*0x68ab28*/
  TravelPath_ClearNodes(this); /*0x68ab2a*/
  if ( sourceSpace ) /*0x68ab3b*/
  {
    if ( destinationSpace ) /*0x68ab43*/
    {
      sourceNodes.firstNode.data = 0; /*0x68ab45*/
      sourceNodes.firstNode.next = 0; /*0x68ab49*/
      v7 = TravelPath_FindLowLevelRoute( /*0x68ab64*/
             *(float *)&sourceSpace,
             (float *)sourceRouteContext,
             *(float *)&destinationSpace,
             &destinationPosition->x,
             &sourceNodes,
             *(float *)&sourceRef);
      if ( v7 ) /*0x68ab6b*/
        TravelPath_CopyRouteNodes(this, &sourceNodes); /*0x68ab74*/
      BSSimpleList_Clear(&sourceNodes); /*0x68ab7d*/
    }
  }
  TravelPath_PruneTeleportRouteLoop(this); /*0x68ab84*/
  if ( v7 ) /*0x68ab8b*/
    TravelPath_AppendDestinationPosition(this, destinationPosition); /*0x68ab90*/
  return v7; /*0x68ab95*/
}
