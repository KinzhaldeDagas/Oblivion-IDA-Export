// Verified deferred PGRI resolver. For each PGRI row, low u16 is a local point-array index and XYZ at +4 locates the remote point; it adds reciprocal adjacency if absent and emits the reciprocal request on the remote grid. Out-of-range local indices are removed. Caller is TESPathGrid_LoadOrResolveGraph.
void __thiscall TESPathGrid_ResolveCrossCellLinks(TESPathGrid *this)
{
  int *p_PGRIRecords; // ebx
  int *v3; // edi
  DWORD CurrentThreadId; // eax
  unsigned int v5; // esi
  unsigned __int16 v6; // ax
  TESObjectCELL *parentCell; // ecx
  TESPathGridPoint *v8; // edi
  TESWorldSpace *WorldSpace; // eax
  TESPathGridPoint *PointInNeighborCell; // eax
  TESPathGridPoint *v11; // esi
  BSSimpleList_VoidPtr *Connections; // eax
  BSSimpleList_VoidPtr *v13; // eax
  NiPoint3 *Position; // eax
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  TESPathGrid *outOwningGrid; // [esp+4h] [ebp-4h] BYREF

  if ( this->pointArray ) /*0x4e6f34*/
  {
    if ( TESObjectCELL_GetWorldSpace(this->parentCell) ) /*0x4e6f41*/
    {
      p_PGRIRecords = (int *)&this->PGRIRecords; /*0x4e6f55*/
      v3 = 0; /*0x4e6f58*/
      EnterCriticalSection(&g_PathGridCriticalSection);// Verified cross-cell PGRI resolution runs under the same g_PathGridCriticalSection as point teardown, updating owner-thread/nesting bookkeeping and preventing concurrent graph mutation. /*0x4e6f5a*/
      CurrentThreadId = GetCurrentThreadId(); /*0x4e6f60*/
      ++g_PathGridLockNestingCount; /*0x4e6f66*/
      g_PathGridLockOwnerThreadId = CurrentThreadId; /*0x4e6f6f*/
      if ( this != (TESPathGrid *)0xFFFFFFD8 ) /*0x4e6f74*/
      {
        do /*0x4e702d*/
        {
          if ( !p_PGRIRecords[1] && !*p_PGRIRecords ) /*0x4e6f86*/
            break; /*0x4e6f89*/
          v5 = *p_PGRIRecords; /*0x4e6f8f*/
          v6 = *(_WORD *)*p_PGRIRecords; /*0x4e6f91*/
          if ( v6 >= this->pointCount ) /*0x4e6f98*/
          {
            if ( v3 ) /*0x4e7059*/
            {
              BSSimpleList_Remove(v3, *p_PGRIRecords); /*0x4e705e*/
              p_PGRIRecords = (int *)v3[1]; /*0x4e7063*/
              FormHeapFree(v5); /*0x4e7067*/
            }
            else
            {
              next = this->PGRIRecords.firstNode.next; /*0x4e7071*/
              p_PGRIRecords = (int *)&this->PGRIRecords; /*0x4e7076*/
              if ( next ) /*0x4e7079*/
              {
                this->PGRIRecords.firstNode.next = next->next; /*0x4e707e*/
                *p_PGRIRecords = (int)next->data; /*0x4e7084*/
                FormHeapFree((unsigned int)next); /*0x4e7086*/
              }
              else
              {
                *p_PGRIRecords = 0; /*0x4e709a*/
              }
              FormHeapFree(v5); /*0x4e708f*/
            }
          }
          else
          {
            parentCell = this->parentCell; /*0x4e6fa4*/
            v8 = this->pointArray->data[v6]; /*0x4e6faa*/
            outOwningGrid = 0; /*0x4e6fb3*/
            WorldSpace = TESObjectCELL_GetWorldSpace(parentCell); /*0x4e6fbb*/
            PointInNeighborCell = TESPathGrid_FindPointInNeighborCell( /*0x4e6fc5*/
                                    (const NiPoint3 *)(v5 + 4),
                                    WorldSpace,
                                    &outOwningGrid,
                                    this);
            v11 = PointInNeighborCell; /*0x4e6fca*/
            if ( PointInNeighborCell ) /*0x4e6fd1*/
            {
              if ( PointInNeighborCell != v8 ) /*0x4e6fd5*/
              {
                if ( outOwningGrid ) /*0x4e6fdc*/
                {
                  if ( !sub_4E7F80(v8, (int)PointInNeighborCell) ) /*0x4e6fe1*/
                  {
                    Connections = PathGraphNode_GetConnections(v8); /*0x4e6fed*/
                    BSSimpleList_PushFront(Connections, (int)v11); /*0x4e6ff4*/
                  }
                  if ( !sub_4E7F80(v11, (int)v8) ) /*0x4e6ffc*/
                  {
                    v13 = PathGraphNode_GetConnections(v11); /*0x4e7008*/
                    BSSimpleList_PushFront(v13, (int)v8); /*0x4e700f*/
                    Position = PathGraphNode_GetPosition(v8); /*0x4e7016*/
                    TESPathGrid_AddPGRICrossCellLinkRequest(outOwningGrid, v11, Position); /*0x4e7021*/
                  }
                }
              }
            }
            v3 = p_PGRIRecords; /*0x4e7026*/
            p_PGRIRecords = (int *)p_PGRIRecords[1]; /*0x4e7028*/
          }
        }
        while ( p_PGRIRecords ); /*0x4e702d*/
      }
      if ( g_PathGridLockNestingCount-- == 1 ) /*0x4e7034*/
        g_PathGridLockOwnerThreadId = 0; /*0x4e703f*/
      LeaveCriticalSection(&g_PathGridCriticalSection); /*0x4e704e*/
    }
  }
}
