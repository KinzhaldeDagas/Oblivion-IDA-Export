// Verified top-level TravelPath build sequence: select the destination's smallest containing interior/exterior SubSpace (fallback to supplied cell/worldspace), call TravelPath_BuildRoute with the source reference and positions, then, on success, augment the route with TESRoad surface samples.
void __thiscall TravelPath_BuildToDestination(
        TravelPath *this,
        TESObjectREFR *sourceRef,
        const NiPoint3 *destinationPosition,
        TESObjectCELL *destinationCell,
        TESWorldSpace *destinationWorldspace)
{
  TESObjectCELL *v5; // esi
  TESObjectREFR *SmallestSubSpaceContainingPosition; // eax
  TESForm *SpatialContainerAtPosition; // eax
  float *v9; // [esp-10h] [ebp-20h]
  TESForm *v10; // [esp-Ch] [ebp-1Ch]

  v5 = destinationCell; /*0x68b033*/
  if ( destinationCell ) /*0x68b03e*/
  {
    if ( !TESObjectCELL_IsInterior(destinationCell) ) /*0x68b042*/
      v5 = 0; /*0x68b04b*/
  }
  SmallestSubSpaceContainingPosition = 0; /*0x68b051*/
  if ( v5 ) /*0x68b055*/
  {
    SmallestSubSpaceContainingPosition = TESObjectCELL_FindSmallestSubSpaceContainingPosition( /*0x68b05a*/
                                           v5,
                                           &destinationPosition->x);
  }
  else
  {
    v5 = (TESObjectCELL *)destinationWorldspace; /*0x68b061*/
    if ( !destinationWorldspace ) /*0x68b067*/
      goto LABEL_10; /*0x68b067*/
    SmallestSubSpaceContainingPosition = TESWorldSpace_FindSmallestSubSpaceContainingPosition( /*0x68b06c*/
                                           destinationWorldspace,
                                           &destinationPosition->x);// Verified: fast-travel destination builder resolves a containing TESSubSpace by interior cell scan or exterior WorldSpace +0x60 index. If none contains the destination, it falls back to the supplied cell/worldspace; the selected SubSpace is passed into path construction.
  }
  if ( !SmallestSubSpaceContainingPosition ) /*0x68b073*/
    SmallestSubSpaceContainingPosition = (TESObjectREFR *)v5; /*0x68b075*/
LABEL_10:
  if ( sourceRef ) /*0x68b07d*/
  {
    if ( SmallestSubSpaceContainingPosition ) /*0x68b081*/
    {
      v10 = (TESForm *)SmallestSubSpaceContainingPosition; /*0x68b085*/
      v9 = sourceRef->vtbl->GetPos(sourceRef); /*0x68b092*/
      SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(sourceRef); /*0x68b095*/
      if ( TravelPath_BuildRoute(this, SpatialContainerAtPosition, v9, v10, destinationPosition, sourceRef) ) /*0x68b09d*/
        TravelPath_AddRoadSegmentsForPath(this, sourceRef); /*0x68b0ab*/
    }
  }
}
