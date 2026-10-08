// Verified cell-unload cleanup: walks BASE_DISTANT_DATA entries, derives each model path, calls QueuedModelLoader_RemoveModel(path, count), frees list nodes/data, then removes the packed-cell map entry.
void __cdecl DistantLOD_RemoveCellModelUsages(unsigned int packedExteriorCellLabel)
{
  BSSimpleList_BASE_DISTANT_DATA *cellUsageList; // edi
  BASE_DISTANT_DATA *usageEntry; // esi
  BSSimpleListNode_BASE_DISTANT_DATA *nextNode; // eax
  BSSimpleList_BASE_DISTANT_DATA *v4; // [esp+4h] [ebp-10Ch] BYREF
  char Str[260]; // [esp+8h] [ebp-108h] BYREF

  v4 = 0; /*0x4b2817*/
  if ( NiTMap_GetAt(&g_DistantLODCellModelUsageMap, packedExteriorCellLabel, &v4) ) /*0x4b281f*/
  {
    cellUsageList = v4; /*0x4b282d*/
    if ( v4 ) /*0x4b2833*/
    {
      if ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v4) ) /*0x4b283b*/
      {
        do /*0x4b28ab*/
        {
          usageEntry = cellUsageList->firstNode.data; /*0x4b2845*/
          if ( cellUsageList->firstNode.data->boundObject ) /*0x4b2845*/
          {
            if ( usageEntry->usageCount ) /*0x4b284d*/
            {
              sub_46D540(Str, (char *)cellUsageList->firstNode.data->boundObject); /*0x4b2859*/
              QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], (int)Str, 1, usageEntry->usageCount);// Verified decrements the queued model loader's per-path reference usage by this cell's stored usageCount. /*0x4b2872*/
            }
          }
          FormHeapFree((unsigned int)usageEntry); /*0x4b2878*/
          nextNode = cellUsageList->firstNode.next; /*0x4b287d*/
          if ( nextNode ) /*0x4b2885*/
          {
            *cellUsageList = (BSSimpleList_BASE_DISTANT_DATA)*nextNode; /*0x4b288a*/
            FormHeapFree((unsigned int)nextNode); /*0x4b2892*/
          }
          else
          {
            cellUsageList->firstNode.data = 0; /*0x4b289c*/
          }
        }
        while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)cellUsageList) ); /*0x4b28ab*/
      }
      FormHeapFree((unsigned int)cellUsageList); /*0x4b28af*/
      NiTMap_RemoveAt(&g_DistantLODCellModelUsageMap, packedExteriorCellLabel);// Verified removes the per-cell usage map entry after all listed model paths have been decremented. Fallout's counterpart tracks cell keys under object-keyed DistantLOD shader cache entries and uses RemoveAllDistantLOD/ClearStaticMaps; keep the ownership direction distinct. /*0x4b28bd*/
    }
  }
}
