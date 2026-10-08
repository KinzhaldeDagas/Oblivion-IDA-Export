// Verified route normalization scans teleport references for an earlier route reference in the linked door's spatial container; when one is found, it removes nodes from the list head through the current node. Probable intent is to prune a redundant teleport loop; exact loop policy remains Unknown.
void __thiscall TravelPath_PruneTeleportRouteLoop(TravelPath *this)
{
  TravelPath *v1; // edi
  BSSimpleList_VoidPtr::NodeVoid *next; // ebx
  TESObjectREFR *Reference; // eax
  TeleportData *TeleportData; // eax
  TeleportData *v5; // esi
  TESObjectREFR *LinkedDoor; // eax
  BSSimpleList_VoidPtr *p_nodes; // edi
  BSSimpleList_VoidPtr *v8; // esi
  int *v9; // ebp
  TESObjectREFR *v10; // eax
  char v11; // bl
  TravelPathNode *v12; // esi
  BSSimpleList_VoidPtr::NodeVoid *v13; // eax
  TravelPathNode **v14; // edi
  TravelPathNode *v15; // esi
  const TravelPathNode *data; // [esp+8h] [ebp-Ch]
  TESForm *SpatialContainerAtPosition; // [esp+10h] [ebp-4h]

  v1 = this; /*0x689c65*/
  next = this->nodes.firstNode.next; /*0x689c67*/
  if ( next ) /*0x689c70*/
  {
    while ( next->next || next->data ) /*0x689c84*/
    {
      data = (const TravelPathNode *)next->data; /*0x689c95*/
      Reference = TravelPathNode_GetReference((const TravelPathNode *)next->data); /*0x689c99*/
      if ( Reference ) /*0x689ca0*/
      {
        TeleportData = TESObjectREFR_GetTeleportData(Reference); /*0x689ca4*/
        v5 = TeleportData; /*0x689ca9*/
        if ( TeleportData ) /*0x689cad*/
        {
          if ( TeleportData_GetLinkedDoor(TeleportData) ) /*0x689cb1*/
          {
            LinkedDoor = TeleportData_GetLinkedDoor(v5); /*0x689cbc*/
            SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x689cca*/
            if ( SpatialContainerAtPosition ) /*0x689cce*/
            {
              p_nodes = &v1->nodes; /*0x689cd0*/
              v8 = p_nodes; /*0x689cd3*/
              v9 = 0; /*0x689cd5*/
              if ( p_nodes ) /*0x689cd9*/
              {
                while ( (v8->firstNode.next || v8->firstNode.data) && v8 != (BSSimpleList_VoidPtr *)next ) /*0x689ced*/
                {
                  v10 = TravelPathNode_GetReference((const TravelPathNode *)v8->firstNode.data); /*0x689cf1*/
                  if ( v10 && TESObjectREFR_GetSpatialContainerAtPosition(v10) == SpatialContainerAtPosition ) /*0x689d05*/
                  {
                    v11 = 1; /*0x689d25*/
                    if ( v9 ) /*0x689d27*/
                    {
                      do /*0x689db6*/
                      {
                        v14 = (TravelPathNode **)v9[1]; /*0x689d83*/
                        v15 = *v14; /*0x689d86*/
                        if ( *v14 == data ) /*0x689d8c*/
                          v11 = 0; /*0x689d8e*/
                        if ( v15 ) /*0x689d92*/
                        {
                          TravelPathNode_FreeOwnedPosition(*v14); /*0x689d96*/
                          FormHeapFree((unsigned int)v15); /*0x689d9c*/
                        }
                        BSSimpleList_Remove(v9, (int)*v14); /*0x689da9*/
                      }
                      while ( v9[1] && v11 ); /*0x689db6*/
                      next = (BSSimpleList_VoidPtr::NodeVoid *)v9[1]; /*0x689db8*/
                    }
                    else
                    {
                      do /*0x689d7d*/
                      {
                        v12 = (TravelPathNode *)p_nodes->firstNode.data; /*0x689d30*/
                        if ( p_nodes->firstNode.data == data ) /*0x689d36*/
                          v11 = 0; /*0x689d38*/
                        if ( v12 ) /*0x689d3c*/
                        {
                          TravelPathNode_FreeOwnedPosition((TravelPathNode *)p_nodes->firstNode.data); /*0x689d40*/
                          FormHeapFree((unsigned int)v12); /*0x689d46*/
                        }
                        v13 = p_nodes->firstNode.next; /*0x689d4e*/
                        if ( v13 ) /*0x689d53*/
                        {
                          p_nodes->firstNode.next = v13->next; /*0x689d58*/
                          p_nodes->firstNode.data = v13->data; /*0x689d5e*/
                          FormHeapFree((unsigned int)v13); /*0x689d60*/
                        }
                        else
                        {
                          p_nodes->firstNode.data = 0; /*0x689d6a*/
                        }
                      }
                      while ( (p_nodes->firstNode.next || p_nodes->firstNode.data) && v11 ); /*0x689d7d*/
                      next = &p_nodes->firstNode; /*0x689d7f*/
                    }
                    goto LABEL_18; /*0x689d81*/
                  }
                  v9 = (int *)v8; /*0x689d07*/
                  v8 = (BSSimpleList_VoidPtr *)v8->firstNode.next; /*0x689d09*/
                  if ( !v8 ) /*0x689d0e*/
                    break; /*0x689d0e*/
                }
              }
            }
          }
        }
      }
      next = next->next; /*0x689d10*/
LABEL_18:
      if ( !next ) /*0x689d15*/
        break; /*0x689d15*/
      v1 = this; /*0x689c80*/
    }
  }
}
