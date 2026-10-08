// Verified loaded-cell dispatcher for TESObjectCELL_RemoveTreeModel3DByTrunkLength. Iterates current/interior or exterior-buffer cells; when skipCurrentExteriorNeighbors is true, preserves the active 2x2 exterior neighborhood. Memory_Cleanup supplies trunkLength buckets [-FLT_MAX,100), [100,250), and [250,FLT_MAX); length units are Unknown.
char __cdecl TES_RemoveTreeModelsByTrunkLength(bool skipCurrentExteriorNeighbors, float lowerBound, float upperBound)
{
  int v3; // eax
  TES *v4; // ecx
  unsigned int i; // ebx
  TESObjectCELL *currentInteriorCell; // esi
  int XCoordinate; // edi
  int YCoordinate; // eax
  unsigned int v10; // [esp+18h] [ebp-4h]

  v3 = sub_43FD20(); /*0x405097*/
  v4 = MEMORY[0xB333A0]; /*0x40509c*/
  v10 = v3; /*0x4050a6*/
  if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x4050a2*/
    v10 = 1; /*0x4050ab*/
  for ( i = 0; i < v10; ++i ) /*0x4050b9*/
  {
    currentInteriorCell = v4->currentInteriorCell; /*0x4050c0*/
    if ( !currentInteriorCell ) /*0x4050c5*/
    {
      currentInteriorCell = v4->exteriorCellBufferArray[i]; /*0x4050ca*/
      if ( !currentInteriorCell ) /*0x4050cf*/
        continue; /*0x4050cf*/
    }
    if ( skipCurrentExteriorNeighbors ) /*0x4050d6*/
    {
      XCoordinate = TESObjectCELL_GetXCoordinate(currentInteriorCell); /*0x4050e1*/
      YCoordinate = TESObjectCELL_GetYCoordinate(currentInteriorCell); /*0x4050e3*/
      v4 = MEMORY[0xB333A0]; /*0x4050e8*/
      if ( (int)abs32(MEMORY[0xB333A0]->extXCoord - XCoordinate) < 2 /*0x40510c*/
        && (int)abs32(MEMORY[0xB333A0]->extYCoord - YCoordinate) < 2 )
      {
        continue; /*0x40510c*/
      }
    }
    TESObjectCELL_RemoveTreeModel3DByTrunkLength(currentInteriorCell, lowerBound, upperBound); /*0x405122*/
    v4 = MEMORY[0xB333A0]; /*0x405127*/
  }
  return sub_43FC20(v4, 1); /*0x405142*/
}
