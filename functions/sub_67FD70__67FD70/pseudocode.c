// Verified add path for a newly allocated AStarWorldNode: under LowPathSearchGlobals.lowPathCriticalSection, insert the same node into the nested space map in both directions. The outer map is keyed by spaceA/spaceB; each inner map keys the opposite space and stores BSSimpleList<AStarWorldNode*>. Existing entries/lists are reused; missing maps/lists are allocated. WorldSpace endpoints create 0xBF-bucket inner maps, other endpoint forms create 0x25-bucket maps; why these bucket counts differ is Unknown. Fallout's TeleportDoorSearch::GetNodeConnections enumerates cell/worldspace door lists during search instead of using this Oblivion cached reciprocal map.
void __cdecl TravelPath_AddAStarWorldNodeToSpaceMaps(AStarWorldNode *node)
{
  _DWORD *v1; // esi
  TESForm *spaceA; // ebp
  TESForm *spaceB; // ebx
  _DWORD *v4; // ebp
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  LowPathSpaceNodeMap *v8; // eax
  LowPathSpaceNodeMap *v9; // eax
  LowPathSpaceNodeMap *v10; // eax
  LowPathWorldDoorLinkMap *v11; // ecx
  _DWORD *v12; // eax
  LowPathWorldDoorLinkMap *doorLinkMap; // ecx
  _DWORD *v14; // edi
  int v15; // ebx
  _DWORD *v16; // ecx
  _DWORD *v17; // eax
  LowPathSpaceNodeMap *v18; // eax
  LowPathSpaceNodeMap *v19; // eax
  LowPathSpaceNodeMap *v20; // eax
  LowPathWorldDoorLinkMap *v21; // ecx
  LowPathSpaceNodeMap *v22; // edi
  _DWORD *v23; // eax
  _DWORD *p_vtable; // [esp+1Ch] [ebp-14h] BYREF
  int a2; // [esp+20h] [ebp-10h]
  int v26; // [esp+2Ch] [ebp-4h]

  NiEnterCriticalSection(&MEMORY[0xB3BE00].lowPathCriticalSection, (int)&unk_A2F830); /*0x67fda1*/
  v1 = 0; /*0x67fdaa*/
  if ( node ) /*0x67fdae*/
  {
    p_vtable = 0; /*0x67fdb6*/
    spaceA = (TESForm *)Shared_GetPointerAtOffset08((Atmosphere *)node);// Verified at this AStarWorldNode call site: Shared_GetPointerAtOffset08 is a 4-byte getter for [this+8], which is AStarWorldNode.spaceA. The helper's other use cases do not change this call's field meaning. /*0x67fdbf*/
    a2 = (int)spaceA; /*0x67fdc3*/
    spaceB = (TESForm *)NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)node);// Verified at this AStarWorldNode call site: NiDX92DBufferData::GetSurfaceData is a 4-byte getter for [this+0x10]; here it reads AStarWorldNode.spaceB. The generic helper name reflects other callers, not this node's semantic field. /*0x67fdd2*/
    if ( NiTMap_GetAt(&MEMORY[0xB3BE00].doorLinkMap->vtable, (int)spaceA, &p_vtable) ) /*0x67fdda*/
    {
      v4 = p_vtable; /*0x67fde3*/
      if ( p_vtable ) /*0x67fde9*/
      {
        v5 = p_vtable; /*0x67fdf1*/
        p_vtable = 0; /*0x67fdf3*/
        if ( NiTMap_GetAt(v5, (int)spaceB, &p_vtable) && p_vtable ) /*0x67fe06*/
        {
          BSSimpleList_PushFront(p_vtable, (int)node); /*0x67fe09*/
          goto LABEL_22; /*0x67fe0e*/
        }
        v6 = (_DWORD *)FormHeapAlloc(8u); /*0x67fe15*/
        if ( v6 ) /*0x67fe1f*/
        {
          *v6 = 0; /*0x67fe25*/
          v6[1] = 0; /*0x67fe27*/
          v7 = v6; /*0x67fe2a*/
          BSSimpleList_PushFront(v6, (int)node); /*0x67fe2d*/
        }
        else
        {
          v7 = 0; /*0x67fe36*/
          BSSimpleList_PushFront(0, (int)node); /*0x67fe39*/
        }
LABEL_21:
        NiTMap_SetAt(v4, (int)spaceB, (int)v7); /*0x67fed1*/
LABEL_22:
        if ( (TESForm *)a2 == spaceB ) /*0x67fede*/
          goto LABEL_40; /*0x67fede*/
        doorLinkMap = MEMORY[0xB3BE00].doorLinkMap; /*0x67fee4*/
        p_vtable = 0; /*0x67fef0*/
        if ( NiTMap_GetAt(doorLinkMap, (int)spaceB, &p_vtable) ) /*0x67fef4*/
        {
          v14 = p_vtable; /*0x67fefd*/
          if ( p_vtable ) /*0x67ff03*/
          {
            v15 = a2; /*0x67ff05*/
            v16 = p_vtable; /*0x67ff0f*/
            p_vtable = 0; /*0x67ff11*/
            if ( NiTMap_GetAt(v16, a2, &p_vtable) && p_vtable ) /*0x67ff24*/
            {
              BSSimpleList_PushFront(p_vtable, (int)node); /*0x67ff2b*/
            }
            else
            {
              v17 = (_DWORD *)FormHeapAlloc(8u); /*0x67ff37*/
              if ( v17 ) /*0x67ff41*/
              {
                *v17 = 0; /*0x67ff43*/
                v17[1] = 0; /*0x67ff45*/
                v1 = v17; /*0x67ff48*/
              }
              BSSimpleList_PushFront(v1, (int)node); /*0x67ff51*/
              NiTMap_SetAt(v14, v15, (int)v1); /*0x67ff58*/
            }
            goto LABEL_40; /*0x67ff30*/
          }
        }
        if ( spaceB->member.type == kFormType_WorldSpace ) /*0x67ff63*/
        {
          v18 = (LowPathSpaceNodeMap *)FormHeapAlloc(0x10u); /*0x67ff65*/
          p_vtable = &v18->vtable; /*0x67ff6d*/
          v26 = 2; /*0x67ff73*/
          if ( v18 ) /*0x67ff7b*/
          {
            v19 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>( /*0x67ff84*/
                    v18,
                    0xBFu);
LABEL_37:
            v21 = MEMORY[0xB3BE00].doorLinkMap; /*0x67ffb0*/
            v22 = v19; /*0x67ffb6*/
            v26 = 0xFFFFFFFF; /*0x67ffba*/
            NiTMap_SetAt(v21, (int)spaceB, (int)v19); /*0x67ffc2*/
            v23 = (_DWORD *)FormHeapAlloc(8u); /*0x67ffc9*/
            if ( v23 ) /*0x67ffd3*/
            {
              *v23 = 0; /*0x67ffd5*/
              v23[1] = 0; /*0x67ffd7*/
              v1 = v23; /*0x67ffda*/
            }
            BSSimpleList_PushFront(v1, (int)node); /*0x67ffe3*/
            NiTMap_SetAt(v22, a2, (int)v1); /*0x67fff0*/
            goto LABEL_40; /*0x67fff0*/
          }
        }
        else
        {
          v20 = (LowPathSpaceNodeMap *)FormHeapAlloc(0x10u); /*0x67ff8b*/
          p_vtable = &v20->vtable; /*0x67ff93*/
          v26 = 3; /*0x67ff99*/
          if ( v20 ) /*0x67ffa1*/
          {
            v19 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>( /*0x67ffa7*/
                    v20,
                    0x25u);
            goto LABEL_37; /*0x67ffac*/
          }
        }
        v19 = 0; /*0x67ffae*/
        goto LABEL_37; /*0x67ffae*/
      }
      spaceA = (TESForm *)a2; /*0x67fe3e*/
    }
    if ( spaceA->member.type == kFormType_WorldSpace ) /*0x67fe48*/
    {
      v8 = (LowPathSpaceNodeMap *)FormHeapAlloc(0x10u); /*0x67fe4a*/
      p_vtable = &v8->vtable; /*0x67fe52*/
      v26 = 0; /*0x67fe58*/
      if ( v8 ) /*0x67fe5c*/
      {
        v9 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>( /*0x67fe65*/
               v8,
               0xBFu);
LABEL_17:
        v11 = MEMORY[0xB3BE00].doorLinkMap; /*0x67fe91*/
        v4 = &v9->vtable; /*0x67fe97*/
        v26 = 0xFFFFFFFF; /*0x67fe9f*/
        NiTMap_SetAt(v11, a2, (int)v9); /*0x67fea7*/
        v12 = (_DWORD *)FormHeapAlloc(8u); /*0x67feae*/
        if ( v12 ) /*0x67feb8*/
        {
          *v12 = 0; /*0x67feba*/
          v12[1] = 0; /*0x67febc*/
          v7 = v12; /*0x67febf*/
        }
        else
        {
          v7 = 0; /*0x67fec3*/
        }
        BSSimpleList_PushFront(v7, (int)node); /*0x67fecc*/
        goto LABEL_21; /*0x67fecc*/
      }
    }
    else
    {
      v10 = (LowPathSpaceNodeMap *)FormHeapAlloc(0x10u); /*0x67fe6c*/
      p_vtable = &v10->vtable; /*0x67fe74*/
      v26 = 1; /*0x67fe7a*/
      if ( v10 ) /*0x67fe82*/
      {
        v9 = NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>( /*0x67fe88*/
               v10,
               0x25u);
        goto LABEL_17; /*0x67fe8d*/
      }
    }
    v9 = 0; /*0x67fe8f*/
    goto LABEL_17; /*0x67fe8f*/
  }
LABEL_40:
  NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&MEMORY[0xB3BE00].lowPathCriticalSection); /*0x67fff5*/
}
