// Verified copies low-path route entries into newly allocated TravelPathNode records. Each clone is set to kind 0 and stores the route TESObjectREFR*; these references remain non-owned.
void __thiscall TravelPath_CopyRouteNodes(TravelPath *this, BSSimpleList_VoidPtr *sourceNodes)
{
  BSSimpleList_VoidPtr *i; // ebx
  TravelPathNode *v3; // eax
  TravelPathNode *v4; // edi
  int v5; // eax
  _DWORD *p_data; // esi
  bool v7; // zf
  TravelPathNode **v8; // eax
  BSSimpleList_VoidPtr::NodeVoid **p_next; // eax
  BSSimpleList_VoidPtr *p_nodes; // esi
  TravelPathNode **v11; // eax

  TravelPath_ClearNodes(this); /*0x689a8b*/
  for ( i = 0; sourceNodes; sourceNodes = (BSSimpleList_VoidPtr *)sourceNodes->firstNode.next ) /*0x689a9e*/
  {
    if ( !sourceNodes->firstNode.next && !sourceNodes->firstNode.data ) /*0x689aaf*/
      return; /*0x689aaf*/
    v3 = (TravelPathNode *)FormHeapAlloc(8u); /*0x689ab7*/
    if ( v3 ) /*0x689ac9*/
      v4 = TravelPathNode_Init(v3); /*0x689ad2*/
    else
      v4 = 0; /*0x689ad6*/
    TravelPathNode_SetKind(v4, TravelPathNodeKind_Reference); /*0x689ae3*/
    TravelPathNode_SetReference(v4, (TESObjectREFR *)sourceNodes->firstNode.data); /*0x689aed*/
    if ( !i ) /*0x689af4*/
    {
      i = &this->nodes; /*0x689b42*/
      if ( v4 ) /*0x689b47*/
      {
        p_next = &this->nodes.firstNode.next; /*0x689b4c*/
        p_nodes = &this->nodes; /*0x689b4f*/
        if ( this->nodes.firstNode.next ) /*0x689b49*/
        {
          do /*0x689b5b*/
          {
            p_nodes = (BSSimpleList_VoidPtr *)*p_next; /*0x689b53*/
            v7 = (*p_next)->next == 0; /*0x689b55*/
            p_next = &(*p_next)->next; /*0x689b58*/
          }
          while ( !v7 ); /*0x689b5b*/
        }
        if ( p_nodes->firstNode.data ) /*0x689b5d*/
        {
          v11 = (TravelPathNode **)FormHeapAlloc(8u); /*0x689b63*/
          if ( v11 ) /*0x689b6d*/
          {
            *v11 = v4; /*0x689b6f*/
            v11[1] = 0; /*0x689b71*/
            p_nodes->firstNode.next = (BSSimpleList_VoidPtr::NodeVoid *)v11; /*0x689b74*/
          }
          else
          {
            p_nodes->firstNode.next = 0; /*0x689b7b*/
          }
        }
        else
        {
          p_nodes->firstNode.data = v4; /*0x689b80*/
        }
      }
      continue; /*0x689b77*/
    }
    if ( v4 ) /*0x689af8*/
    {
      v5 = (int)&i->firstNode.next; /*0x689afd*/
      p_data = &i->firstNode.data; /*0x689b00*/
      if ( i->firstNode.next ) /*0x689afa*/
      {
        do /*0x689b0c*/
        {
          p_data = *(_DWORD **)v5; /*0x689b04*/
          v7 = *(_DWORD *)(*(_DWORD *)v5 + 4) == 0; /*0x689b06*/
          v5 = *(_DWORD *)v5 + 4; /*0x689b09*/
        }
        while ( !v7 ); /*0x689b0c*/
      }
      if ( *p_data ) /*0x689b0e*/
      {
        v8 = (TravelPathNode **)FormHeapAlloc(8u); /*0x689b14*/
        if ( v8 ) /*0x689b1e*/
        {
          *v8 = v4; /*0x689b20*/
          v8[1] = 0; /*0x689b22*/
          p_data[1] = v8; /*0x689b25*/
        }
        else
        {
          p_data[1] = 0; /*0x689b2f*/
        }
        i = (BSSimpleList_VoidPtr *)i->firstNode.next; /*0x689b28*/
        continue; /*0x689b2b*/
      }
      *p_data = v4; /*0x689b37*/
    }
    i = (BSSimpleList_VoidPtr *)i->firstNode.next; /*0x689b39*/
  }
}
