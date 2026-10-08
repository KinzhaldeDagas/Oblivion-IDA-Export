// Verified Oblivion usage cache direction: packed exterior cell label -> BSSimpleList of (TESBoundObject*, instanceCount), used to retain/release queued model-loader paths per cell. Fallout's inspected DistantLODShaderProperty::AddDistantLOD instead finds CachedDistantLOD by base-object FormID and records cell keys on that object entry; these are different ownership maps, not offset homologs.
void __cdecl DistantLOD_AddModelUsage(TESBoundObject *model, unsigned int usageCount, unsigned int packedCellLabel)
{
  TESBoundObject *v3; // ebp
  unsigned int v4; // esi
  BSSimpleList_BASE_DISTANT_DATA *cellUsageList; // edi
  BSSimpleList_BASE_DISTANT_DATA *v6; // eax
  BSSimpleListNode_BASE_DISTANT_DATA *cellUsageNode; // eax
  struct BSSimpleListNode_BASE_DISTANT_DATA *next; // ecx
  BASE_DISTANT_DATA *usageEntry; // esi

  v3 = model; /*0x4b2731*/
  if ( model && usageCount ) /*0x4b2742*/
  {
    v4 = packedCellLabel; /*0x4b2749*/
    model = 0; /*0x4b2759*/
    if ( !NiTMap_GetAt(&g_DistantLODCellModelUsageMap, packedCellLabel, &model) /*0x4b2770*/
      || (cellUsageList = (BSSimpleList_BASE_DISTANT_DATA *)model) == 0 )
    {
      v6 = (BSSimpleList_BASE_DISTANT_DATA *)FormHeapAlloc(8u); /*0x4b2774*/
      if ( v6 ) /*0x4b277e*/
      {
        v6->firstNode.data = 0; /*0x4b2780*/
        v6->firstNode.next = 0; /*0x4b2786*/
      }
      else
      {
        v6 = 0; /*0x4b278f*/
      }
      cellUsageList = v6; /*0x4b2798*/
      NiTMap_SetAt(&g_DistantLODCellModelUsageMap, v4, (int)v6); /*0x4b279a*/
    }
    cellUsageNode = &cellUsageList->firstNode; /*0x4b27a1*/
    if ( cellUsageList ) /*0x4b27a3*/
    {
      do /*0x4b27a5*/
      {
        next = cellUsageNode->next; /*0x4b27a5*/
        if ( !next && !cellUsageNode->data ) /*0x4b27ac*/
          break; /*0x4b27ac*/
        if ( cellUsageNode->data->boundObject == v3 ) /*0x4b27b4*/
        {
          usageEntry = cellUsageNode->data; /*0x4b27be*/
          if ( cellUsageNode->data ) /*0x4b27b0*/
            goto LABEL_17; /*0x4b27c2*/
          break; /*0x4b27c2*/
        }
        cellUsageNode = cellUsageNode->next; /*0x4b27b6*/
      }
      while ( next ); /*0x4b27a5*/
    }
    usageEntry = (BASE_DISTANT_DATA *)FormHeapAlloc(8u);// Verified new per-model usage entry allocation: 8 bytes for boundObject pointer + usageCount; inserted into the current exterior-cell list. /*0x4b27c4*/
    usageEntry->boundObject = v3; /*0x4b27d3*/
    usageEntry->usageCount = 0; /*0x4b27d5*/
    BSSimpleList_PushFront(cellUsageList, (int)usageEntry); /*0x4b27dc*/
LABEL_17:
    usageEntry->usageCount += usageCount;       // Verified increments this cell's reference-model usage count by the number of queued distant instances. /*0x4b27e1*/
  }
}
