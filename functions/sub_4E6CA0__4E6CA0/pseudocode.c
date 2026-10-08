// Verified point teardown order under the shared pathgrid critical section: remove reciprocal PGRI cross-cell connections; clear pointsByReference list headers/nodes; destroy each point's owned adjacency list via its point cleanup helper; free point nodes; destroy and null the NiTArray at +0x24. The 512-unit spatial-bucket map at +0x44 is cleared separately by TESPathGrid_ClearSpatialBucketMap.
void __thiscall TESPathGrid_ClearPointsAndReferenceMaps(TESPathGrid *this)
{
  signed int v2; // edi
  DWORD CurrentThreadId; // eax
  NiTArray_TESPathGridPoint *pointArray; // eax
  signed int capacity_high; // ebp
  TESPathGridPoint **data; // edx
  unsigned int v7; // ebx
  NiTArray_TESPathGridPoint *v8; // ecx
  int v10; // [esp+8h] [ebp-4h] BYREF

  v2 = 0; /*0x4e6ca5*/
  if ( this->pointArray ) /*0x4e6ca7*/
  {
    EnterCriticalSection(&g_PathGridCriticalSection);// Verified point graph teardown enters g_PathGridCriticalSection before removing reciprocal PGRI links, clearing reference-to-point index, and destroying points. Updates owner-thread/nesting bookkeeping while held. /*0x4e6cb6*/
    CurrentThreadId = GetCurrentThreadId(); /*0x4e6cbc*/
    ++g_PathGridLockNestingCount; /*0x4e6cc2*/
    g_PathGridLockOwnerThreadId = CurrentThreadId; /*0x4e6ccb*/
    TESPathGrid_RemovePGRICrossCellConnections(this); /*0x4e6cd0*/
    TESPathGrid_ClearPointsByReference(this); /*0x4e6cd7*/
    pointArray = this->pointArray; /*0x4e6cdc*/
    capacity_high = HIWORD(pointArray->capacity); /*0x4e6cdf*/
    if ( HIWORD(pointArray->capacity) ) /*0x4e6cdf*/
    {
      v10 = 0; /*0x4e6ce7*/
      do /*0x4e6d20*/
      {
        data = this->pointArray->data; /*0x4e6cf3*/
        v7 = (unsigned int)data[v2]; /*0x4e6cf6*/
        if ( v7 ) /*0x4e6cfb*/
        {
          TESPathGridPoint_Cleanup((unsigned int *)data[v2]); /*0x4e6cff*/
          FormHeapFree(v7); /*0x4e6d05*/
        }
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)this->pointArray, v2++, &v10); /*0x4e6d16*/
      }
      while ( v2 < capacity_high ); /*0x4e6d20*/
    }
    v8 = this->pointArray; /*0x4e6d25*/
    if ( v8 ) /*0x4e6d2b*/
      (*(void (__thiscall **)(NiTArray_TESPathGridPoint *, int))v8->vtable)(v8, 1); /*0x4e6d33*/
    this->pointArray = 0; /*0x4e6d35*/
    if ( g_PathGridLockNestingCount-- == 1 ) /*0x4e6d38*/
      g_PathGridLockOwnerThreadId = 0; /*0x4e6d41*/
    LeaveCriticalSection(&g_PathGridCriticalSection); /*0x4e6d4c*/
  }
}
