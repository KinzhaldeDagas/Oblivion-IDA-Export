// Verified reset/teardown: release all AStarWorldNode state slots and allocations from LowPathSearchGlobals.allAStarWorldNodes, clear each node list, destroy inner/outer map instances, free the search-state table, and null doorLinkMap. Save/load reconciliation calls this then TravelPath_EnsureDoorLinkMapInitialized; WinMain also participates in this subsystem lifecycle.
void __cdecl TravelPath_ClearAllDoorLinkMaps()
{
  AStarWorldNode *v0; // ecx
  _DWORD *v1; // eax
  unsigned int v2; // esi
  MEF_U32PointerMapLayout32 *doorLinkMap; // ecx
  unsigned int bucketCount; // edx
  unsigned int v5; // eax
  MEF_U32PointerMapEntry32 **buckets; // esi
  MEF_U32PointerMapEntry32 *v7; // eax
  _DWORD *v8; // ebp
  unsigned int v9; // edx
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // esi
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  _DWORD *v18; // ecx
  int v19; // edi
  void *valueOut; // [esp+4h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-4h] BYREF

  if ( MEMORY[0xB3BE00].doorLinkMap ) /*0x67f183*/
  {
    TravelPath_FreeSearchStateTable(); /*0x67f190*/
LABEL_3:
    v0 = *(AStarWorldNode **)MEMORY[0xB3BE00].allAStarWorldNodes; /*0x67f197*/
    v1 = *(_DWORD **)&MEMORY[0xB3BE00].allAStarWorldNodes[4]; /*0x67f19d*/
    while ( v1 || v0 ) /*0x67f1a8*/
    {
      v2 = (unsigned int)v0; /*0x67f1ac*/
      if ( v0 ) /*0x67f1ae*/
      {
        AStarWorldNode_ReleaseSearchStateSlot(v0); /*0x67f1b0*/
        FormHeapFree(v2); /*0x67f1b6*/
        v1 = *(_DWORD **)&MEMORY[0xB3BE00].allAStarWorldNodes[4]; /*0x67f1bb*/
      }
      if ( v1 ) /*0x67f1c5*/
      {
        *(_DWORD *)&MEMORY[0xB3BE00].allAStarWorldNodes[4] = v1[1]; /*0x67f1ca*/
        *(_DWORD *)MEMORY[0xB3BE00].allAStarWorldNodes = *v1; /*0x67f1d3*/
        FormHeapFree((unsigned int)v1); /*0x67f1d9*/
        goto LABEL_3; /*0x67f1e1*/
      }
      v0 = 0; /*0x67f1e3*/
      *(_DWORD *)MEMORY[0xB3BE00].allAStarWorldNodes = 0; /*0x67f1e5*/
    }
    doorLinkMap = (MEF_U32PointerMapLayout32 *)MEMORY[0xB3BE00].doorLinkMap; /*0x67f1ed*/
    bucketCount = MEMORY[0xB3BE00].doorLinkMap->bucketCount; /*0x67f1f3*/
    v5 = 0; /*0x67f1f6*/
    if ( bucketCount ) /*0x67f1fa*/
    {
      buckets = doorLinkMap->buckets; /*0x67f1ff*/
      while ( !*buckets ) /*0x67f204*/
      {
        ++v5; /*0x67f206*/
        ++buckets; /*0x67f209*/
        if ( v5 >= bucketCount ) /*0x67f20e*/
          goto LABEL_15; /*0x67f20e*/
      }
      v7 = doorLinkMap->buckets[v5]; /*0x67f27e*/
    }
    else
    {
LABEL_15:
      v7 = 0; /*0x67f210*/
    }
    for ( position = v7; position; doorLinkMap = (MEF_U32PointerMapLayout32 *)MEMORY[0xB3BE00].doorLinkMap ) /*0x67f218*/
    {
      valueOut = 0; /*0x67f22f*/
      NiTMap_U32Pointer_GetNextEntry(doorLinkMap, &position, &keyOut, &valueOut); /*0x67f237*/
      v8 = valueOut; /*0x67f23c*/
      if ( valueOut ) /*0x67f242*/
      {
        v9 = *((_DWORD *)valueOut + 1); /*0x67f248*/
        v10 = 0; /*0x67f24b*/
        if ( v9 ) /*0x67f24f*/
        {
          v11 = *((_DWORD **)valueOut + 2); /*0x67f254*/
          while ( !*v11 ) /*0x67f259*/
          {
            ++v10; /*0x67f25b*/
            ++v11; /*0x67f25e*/
            if ( v10 >= v9 ) /*0x67f263*/
              goto LABEL_22; /*0x67f263*/
          }
          v12 = *(_DWORD **)(*((_DWORD *)valueOut + 2) + 4 * v10); /*0x67f283*/
        }
        else
        {
LABEL_22:
          v12 = 0; /*0x67f265*/
        }
        v13 = v12; /*0x67f269*/
        while ( v13 ) /*0x67f26b*/
        {
          v14 = (_DWORD *)v13[2]; /*0x67f275*/
          if ( *v13 ) /*0x67f271*/
          {
            v13 = (_DWORD *)*v13; /*0x67f27a*/
          }
          else
          {
            v15 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v8 + 4))(v8, v13[1]); /*0x67f294*/
            v16 = v8[1]; /*0x67f296*/
            v17 = v15 + 1; /*0x67f299*/
            if ( v17 >= v16 ) /*0x67f29e*/
            {
LABEL_32:
              v13 = 0; /*0x67f2b6*/
            }
            else
            {
              v18 = (_DWORD *)(v8[2] + 4 * v17); /*0x67f2a3*/
              while ( 1 ) /*0x67f2a6*/
              {
                v13 = (_DWORD *)*v18; /*0x67f2a6*/
                if ( *v18 ) /*0x67f2a6*/
                  break; /*0x67f2a6*/
                ++v17; /*0x67f2ac*/
                ++v18; /*0x67f2af*/
                if ( v17 >= v16 ) /*0x67f2b4*/
                  goto LABEL_32; /*0x67f2b4*/
              }
            }
          }
          if ( v14 ) /*0x67f2ba*/
          {
            if ( v14[1] ) /*0x67f2bc*/
            {
              do /*0x67f2d6*/
              {
                v19 = *(_DWORD *)(v14[1] + 4); /*0x67f2c5*/
                FormHeapFree(v14[1]); /*0x67f2c9*/
                v14[1] = v19; /*0x67f2d3*/
              }
              while ( v19 ); /*0x67f2d6*/
            }
            *v14 = 0; /*0x67f2d9*/
            FormHeapFree((unsigned int)v14); /*0x67f2df*/
          }
        }
        NiTMap_Clear(v8); /*0x67f2ed*/
        (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x67f2fb*/
      }
    }
    NiTMap_Clear(doorLinkMap); /*0x67f310*/
    if ( MEMORY[0xB3BE00].doorLinkMap ) /*0x67f315*/
      (*(void (__thiscall **)(LowPathWorldDoorLinkMap *, int))MEMORY[0xB3BE00].doorLinkMap->vtable)( /*0x67f327*/
        MEMORY[0xB3BE00].doorLinkMap,
        1);
    MEMORY[0xB3BE00].doorLinkMap = 0; /*0x67f329*/
  }
}
