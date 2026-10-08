// Verified unlink path for a door reference whose ExtraTeleport is being removed: locate its AStarWorldNode by reciprocal space pair and endpoint refs, remove it from both inner lists, remove/free empty inner maps and outer entries, unlink it from LowPathSearchGlobals.allAStarWorldNodes, release its state slot, and free the node. Called from RemoveExtraTeleportFromDoorRef and ExtraData cleanup.
void __cdecl TravelPath_RemoveAStarWorldNodeFromSpaceMaps(TESObjectREFR *doorReference)
{
  int *v1; // edi
  TeleportData *TeleportData; // eax
  TeleportData *v3; // esi
  TESForm *SpatialContainerAtPosition; // ebx
  TESObjectREFR *LinkedDoor; // eax
  TESForm *v6; // eax
  int v7; // esi
  LowPathWorldDoorLinkMap *doorLinkMap; // ecx
  _DWORD *v9; // ebx
  BSSimpleList_VoidPtr *v10; // esi
  AStarWorldNode *data; // ebp
  BSSimpleList_VoidPtr *v12; // esi
  LowPathWorldDoorLinkMap *v13; // ecx
  _DWORD *v14; // ebx
  BSSimpleList_VoidPtr *v15; // ebp
  BSSimpleList_VoidPtr *next; // esi
  int *v17; // edi
  AStarWorldNode *v18; // esi
  _DWORD *v19; // [esp+8h] [ebp-14h] BYREF
  BSSimpleList_VoidPtr *v20; // [esp+Ch] [ebp-10h] BYREF
  TESForm *v21; // [esp+10h] [ebp-Ch]
  TESForm *v22; // [esp+14h] [ebp-8h]
  AStarWorldNode *v23; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x67f344*/
  if ( MEMORY[0xB3BE00].doorLinkMap ) /*0x67f346*/
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB3BE00].unknown38[0x48], (int)&unk_A2F830); /*0x67f35d*/
    if ( doorReference ) /*0x67f368*/
    {
      TeleportData = TESObjectREFR_GetTeleportData(doorReference); /*0x67f371*/
      v3 = TeleportData; /*0x67f376*/
      if ( TeleportData ) /*0x67f37a*/
      {
        if ( TeleportData_GetLinkedDoor(TeleportData) ) /*0x67f382*/
        {
          SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(doorReference); /*0x67f397*/
          v21 = SpatialContainerAtPosition; /*0x67f39b*/
          LinkedDoor = TeleportData_GetLinkedDoor(v3); /*0x67f39f*/
          v6 = TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x67f3a6*/
          v7 = (int)v6; /*0x67f3ad*/
          v22 = v6; /*0x67f3af*/
          if ( SpatialContainerAtPosition ) /*0x67f3b3*/
          {
            if ( v6 ) /*0x67f3bb*/
            {
              doorLinkMap = MEMORY[0xB3BE00].doorLinkMap; /*0x67f3c1*/
              v19 = 0; /*0x67f3cd*/
              if ( NiTMap_GetAt(doorLinkMap, (int)SpatialContainerAtPosition, &v19) ) /*0x67f3d1*/
              {
                v9 = v19; /*0x67f3de*/
                if ( v19 ) /*0x67f3e4*/
                {
                  v20 = 0; /*0x67f3f2*/
                  if ( NiTMap_GetAt(v19, v7, &v20) ) /*0x67f3f6*/
                  {
                    v10 = v20; /*0x67f403*/
                    if ( v20 ) /*0x67f409*/
                    {
                      while ( !BSSimpleList_IsEmpty(v10) ) /*0x67f419*/
                      {
                        if ( AStarWorldNode_ContainsReference((AStarWorldNode *)v10->firstNode.data, doorReference) ) /*0x67f422*/
                        {
                          data = (AStarWorldNode *)v10->firstNode.data; /*0x67f447*/
                          v23 = (AStarWorldNode *)v10->firstNode.data; /*0x67f449*/
                          if ( v1 ) /*0x67f44d*/
                            BSSimpleList_Remove(v1, (int)data); /*0x67f452*/
                          else
                            sub_67F100(v10); /*0x67f45b*/
                          v12 = v20; /*0x67f460*/
                          if ( BSSimpleList_IsEmpty(v20) ) /*0x67f466*/
                          {
                            FormHeapFree((unsigned int)v12); /*0x67f470*/
                            NiTMap_RemoveAt(v9, (int)v22); /*0x67f47f*/
                            if ( !v9[3] ) /*0x67f484*/
                            {
                              (*(void (__thiscall **)(_DWORD *, int))*v9)(v9, 1); /*0x67f492*/
                              v13 = MEMORY[0xB3BE00].doorLinkMap; /*0x67f498*/
                              v19 = 0; /*0x67f49f*/
                              NiTMap_RemoveAt(v13, (int)v21); /*0x67f4a7*/
                            }
                          }
                          if ( data ) /*0x67f4ae*/
                          {
                            if ( NiTMap_GetAt(&MEMORY[0xB3BE00].doorLinkMap->vtable, (int)v22, &v19) ) /*0x67f4c4*/
                            {
                              v14 = v19; /*0x67f4d1*/
                              if ( v19 ) /*0x67f4d7*/
                              {
                                v20 = 0; /*0x67f4e9*/
                                if ( NiTMap_GetAt(v19, (int)v21, &v20) ) /*0x67f4f1*/
                                {
                                  v15 = v20; /*0x67f4fe*/
                                  if ( v20 ) /*0x67f504*/
                                  {
                                    next = v20; /*0x67f50a*/
                                    v17 = 0; /*0x67f50c*/
                                    while ( !BSSimpleList_IsEmpty(next) ) /*0x67f519*/
                                    {
                                      if ( next->firstNode.data == v23 ) /*0x67f525*/
                                      {
                                        if ( v17 ) /*0x67f543*/
                                          BSSimpleList_Remove(v17, (int)v23); /*0x67f548*/
                                        else
                                          sub_67F100(next); /*0x67f551*/
                                        if ( BSSimpleList_IsEmpty(v15) ) /*0x67f558*/
                                        {
                                          FormHeapFree((unsigned int)v15); /*0x67f562*/
                                          NiTMap_RemoveAt(v14, (int)v21); /*0x67f571*/
                                          if ( !v14[3] ) /*0x67f576*/
                                          {
                                            (*(void (__thiscall **)(_DWORD *, int))*v14)(v14, 1); /*0x67f584*/
                                            NiTMap_RemoveAt(&MEMORY[0xB3BE00].doorLinkMap->vtable, (int)v22); /*0x67f591*/
                                          }
                                        }
                                        v18 = v23; /*0x67f596*/
                                        BSSimpleList_Remove((int *)MEMORY[0xB3BE00].allAStarWorldNodes, (int)v23); /*0x67f5a0*/
                                        AStarWorldNode_ReleaseSearchStateSlot(v18); /*0x67f5a7*/
                                        FormHeapFree((unsigned int)v18); /*0x67f5ad*/
                                        goto LABEL_38; /*0x67f5ad*/
                                      }
                                      v17 = (int *)next; /*0x67f527*/
                                      next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x67f529*/
                                      if ( !next ) /*0x67f52e*/
                                        goto LABEL_38; /*0x67f52e*/
                                    }
                                  }
                                }
                              }
                            }
                          }
                          break; /*0x67f519*/
                        }
                        v1 = (int *)v10; /*0x67f42b*/
                        v10 = (BSSimpleList_VoidPtr *)v10->firstNode.next; /*0x67f42d*/
                        if ( !v10 ) /*0x67f432*/
                          break; /*0x67f432*/
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_38:
    NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&MEMORY[0xB3BE00].unknown38[0x48]); /*0x67f5b7*/
  }
}
