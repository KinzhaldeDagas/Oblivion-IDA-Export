// Verified — TESPathGrid-specific graph copy routine, reached through vtable entry at A476F8. It dynamic-casts source TESForm to TESPathGrid, forces source graph resolution if needed, allocates destination point nodes and copies positions, remaps source adjacency pointers by source-array index into destination point pointers, copies PGRI records, and conditionally clears non-active/unoverridden source graph state. The implementation verifies graph-copy/remap semantics; exact external lifecycle intent beyond the vtable callback remains Unknown.
void __thiscall TESPathGrid_CopyGraphFrom(TESPathGrid *this, TESForm *source)
{
  TESPathGrid *v2; // ebp
  TESPathGrid *v3; // eax
  TESPathGrid *v4; // edi
  NiTArray_TESPathGridPoint *v5; // esi
  int v6; // eax
  unsigned int i; // edi
  TESPathGridPoint *v8; // ebp
  TESPathGridPoint *v9; // eax
  TESPathGridPoint *v10; // esi
  NiPoint3 *Position; // eax
  unsigned int v12; // edi
  bool v13; // zf
  TESPathGridPoint *v14; // ebp
  BSSimpleList_VoidPtr *Connections; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // edi
  BSSimpleList_VoidPtr *j; // ebp
  NiTArray_TESPathGridPoint *v18; // ecx
  void *data; // esi
  int v20; // eax
  void **v21; // ecx
  TESPathGridPoint *v22; // edi
  BSSimpleList_VoidPtr *v23; // esi
  int p_next; // eax
  TESPathGridPoint **v25; // eax
  NiTArray_TESPathGridPoint *v26; // eax
  unsigned int v27; // edx
  BSSimpleList_VoidPtr *p_PGRIRecords; // ebp
  _DWORD *v29; // edi
  _DWORD *v30; // esi
  int v31; // eax
  BSSimpleList_VoidPtr *v32; // edi
  BSSimpleList_VoidPtr::NodeVoid *v33; // eax
  Data *OverrideFile; // eax
  unsigned int capacity_high; // [esp-4h] [ebp-3Ch]
  TESPathGridPoint *v37; // [esp+1Ch] [ebp-1Ch]
  TESPathGridPoint *v38; // [esp+20h] [ebp-18h] BYREF
  TESPathGrid *v39; // [esp+24h] [ebp-14h]
  NiTArray_TESPathGridPoint *pointArray; // [esp+28h] [ebp-10h]
  int v41; // [esp+34h] [ebp-4h]
  bool sourcea; // [esp+3Ch] [ebp+4h]

  v2 = this; /*0x4e7977*/
  v3 = (TESPathGrid *)OblivionDynamicCast( /*0x4e7990*/
                        source,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESPathGrid `RTTI Type Descriptor',
                        0);
  v4 = v3; /*0x4e7995*/
  v39 = v3; /*0x4e799c*/
  if ( v3 ) /*0x4e79a0*/
  {
    sourcea = v3->pointArray != 0; /*0x4e79ae*/
    if ( !v3->pointArray ) /*0x4e79a6*/
      TESPathGrid_LoadOrResolveGraph(v3); /*0x4e79b6*/
    pointArray = v4->pointArray; /*0x4e79c0*/
    v5 = pointArray; /*0x4e79bb*/
    if ( pointArray ) /*0x4e79c4*/
    {
      sub_521BE0(pointArray); /*0x4e79cc*/
      v2->pointCount = v4->pointCount; /*0x4e79d7*/
      v6 = FormHeapAlloc(0x10u); /*0x4e79db*/
      if ( v6 ) /*0x4e79e5*/
      {
        *(_DWORD *)v6 = &NiTArray<TESPathGridPoint *>::`vftable'; /*0x4e79e7*/
        *(_WORD *)(v6 + 8) = 0; /*0x4e79ed*/
        *(_WORD *)(v6 + 0xE) = 1; /*0x4e79f1*/
        *(_WORD *)(v6 + 0xA) = 0; /*0x4e79f7*/
        *(_WORD *)(v6 + 0xC) = 0; /*0x4e79fb*/
        *(_DWORD *)(v6 + 4) = 0; /*0x4e79ff*/
      }
      else
      {
        v6 = 0; /*0x4e7a04*/
      }
      v2->pointArray = (NiTArray_TESPathGridPoint *)v6; /*0x4e7a06*/
      capacity_high = HIWORD(v5->capacity); /*0x4e7a0d*/
      v41 = 0xFFFFFFFF; /*0x4e7a10*/
      NiTArray_SetSize((unsigned __int16 *)v6, capacity_high); /*0x4e7a18*/
      for ( i = 0; i < HIWORD(v5->capacity); ++i ) /*0x4e7a1f*/
      {
        v8 = v5->data[i]; /*0x4e7a28*/
        if ( v8 ) /*0x4e7a2d*/
        {
          v9 = (TESPathGridPoint *)FormHeapAlloc(0x2Cu); /*0x4e7a31*/
          v38 = v9; /*0x4e7a39*/
          v41 = 1; /*0x4e7a3f*/
          if ( v9 ) /*0x4e7a47*/
            v10 = TESPathGridPoint_ctor(v9); /*0x4e7a50*/
          else
            v10 = 0; /*0x4e7a54*/
          v41 = 0xFFFFFFFF; /*0x4e7a58*/
          v38 = v10; /*0x4e7a60*/
          Position = PathGraphNode_GetPosition(v8); /*0x4e7a64*/
          PathGraphNode_SetPosition(v10, Position); /*0x4e7a6c*/
          NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)this->pointArray, i, &v38); /*0x4e7a7e*/
          v5 = pointArray; /*0x4e7a83*/
        }
      }
      v12 = 0; /*0x4e7a92*/
      v13 = HIWORD(v5->capacity) == 0; /*0x4e7a94*/
      v38 = 0; /*0x4e7a98*/
      if ( !v13 ) /*0x4e7a9c*/
      {
        do /*0x4e7c1f*/
        {
          v14 = v5->data[v12]; /*0x4e7aa5*/
          if ( v14 ) /*0x4e7aaa*/
          {
            v37 = this->pointArray->data[v12]; /*0x4e7abd*/
            Connections = PathGraphNode_GetConnections(v37); /*0x4e7ac6*/
            if ( Connections->firstNode.next ) /*0x4e7ac8*/
            {
              do /*0x4e7ae4*/
              {
                next = Connections->firstNode.next->next; /*0x4e7ad3*/
                FormHeapFree((unsigned int)Connections->firstNode.next); /*0x4e7ad7*/
                Connections->firstNode.next = next; /*0x4e7ae1*/
              }
              while ( next ); /*0x4e7ae4*/
              v12 = (unsigned int)v38; /*0x4e7ae6*/
            }
            Connections->firstNode.data = 0; /*0x4e7aec*/
            for ( j = PathGraphNode_GetConnections(v14); j; j = (BSSimpleList_VoidPtr *)j->firstNode.next ) /*0x4e7af7*/
            {
              if ( !j->firstNode.next && !j->firstNode.data ) /*0x4e7b05*/
                break; /*0x4e7b08*/
              v18 = v39->pointArray; /*0x4e7b12*/
              data = j->firstNode.data; /*0x4e7b17*/
              if ( v18 ) /*0x4e7b1a*/
              {
                if ( data ) /*0x4e7b22*/
                {
                  v20 = 0; /*0x4e7b2c*/
                  if ( v39->pointCount ) /*0x4e7b28*/
                  {
                    v21 = (void **)v18->data; /*0x4e7b36*/
                    while ( *v21 != data ) /*0x4e7b42*/
                    {
                      ++v20; /*0x4e7b44*/
                      ++v21; /*0x4e7b47*/
                      if ( v20 >= v39->pointCount ) /*0x4e7b4c*/
                        goto LABEL_41; /*0x4e7b4c*/
                    }
                    if ( v20 >= 0 ) /*0x4e7b52*/
                    {
                      v22 = this->pointArray->data[v20]; /*0x4e7b5e*/
                      if ( v22 ) /*0x4e7b63*/
                      {
                        if ( v22 != v37 ) /*0x4e7b69*/
                        {
                          v23 = PathGraphNode_GetConnections(v37); /*0x4e7b74*/
                          p_next = (int)&v23->firstNode.next; /*0x4e7b79*/
                          if ( v23->firstNode.next ) /*0x4e7b76*/
                          {
                            do /*0x4e7b88*/
                            {
                              v23 = *(BSSimpleList_VoidPtr **)p_next; /*0x4e7b80*/
                              v13 = *(_DWORD *)(*(_DWORD *)p_next + 4) == 0; /*0x4e7b82*/
                              p_next = *(_DWORD *)p_next + 4; /*0x4e7b85*/
                            }
                            while ( !v13 ); /*0x4e7b88*/
                          }
                          if ( v23->firstNode.data ) /*0x4e7b8a*/
                          {
                            v25 = (TESPathGridPoint **)FormHeapAlloc(8u); /*0x4e7b90*/
                            if ( v25 ) /*0x4e7b9a*/
                            {
                              *v25 = v22; /*0x4e7b9c*/
                              v25[1] = 0; /*0x4e7b9e*/
                              v23->firstNode.next = (BSSimpleList_VoidPtr::NodeVoid *)v25; /*0x4e7ba1*/
                            }
                            else
                            {
                              v23->firstNode.next = 0; /*0x4e7ba8*/
                            }
                          }
                          else
                          {
                            v23->firstNode.data = v22; /*0x4e7bad*/
                          }
                        }
                      }
                      v12 = (unsigned int)v38; /*0x4e7baf*/
                    }
                  }
                }
              }
LABEL_41:
              ; /*0x4e7bb3*/
            }
            v26 = this->pointArray; /*0x4e7bc2*/
            if ( v12 < HIWORD(v26->capacity) ) /*0x4e7bcb*/
            {
              if ( v37 ) /*0x4e7be5*/
              {
                if ( !v26->data[v12] ) /*0x4e7bea*/
                  ++LOWORD(v26->numObjs); /*0x4e7bef*/
              }
              else if ( v26->data[v12] ) /*0x4e7bf9*/
              {
                --LOWORD(v26->numObjs); /*0x4e7bfe*/
              }
            }
            else
            {
              HIWORD(v26->capacity) = v12 + 1; /*0x4e7bd4*/
              if ( v37 ) /*0x4e7bd8*/
                ++LOWORD(v26->numObjs); /*0x4e7bda*/
            }
            v5 = pointArray; /*0x4e7c0b*/
            v26->data[v12] = v37; /*0x4e7c0f*/
          }
          v27 = HIWORD(v5->capacity); /*0x4e7c12*/
          v38 = (TESPathGridPoint *)++v12; /*0x4e7c1b*/
        }
        while ( v12 < v27 ); /*0x4e7c1f*/
      }
      v2 = this; /*0x4e7c25*/
      v4 = v39; /*0x4e7c29*/
    }
    TESPathGrid_ClearPGRIRecords(v2); /*0x4e7c2f*/
    p_PGRIRecords = &v4->PGRIRecords; /*0x4e7c34*/
    if ( v4 != (TESPathGrid *)0xFFFFFFD8 ) /*0x4e7c39*/
    {
      do /*0x4e7cb6*/
      {
        if ( !p_PGRIRecords->firstNode.next && !p_PGRIRecords->firstNode.data ) /*0x4e7c45*/
          break; /*0x4e7c48*/
        v29 = p_PGRIRecords->firstNode.data; /*0x4e7c4a*/
        v30 = (_DWORD *)FormHeapAlloc(0x10u); /*0x4e7c54*/
        *v30 = *v29; /*0x4e7c58*/
        v30[1] = v29[1]; /*0x4e7c5d*/
        v30[2] = v29[2]; /*0x4e7c63*/
        v31 = v29[3]; /*0x4e7c66*/
        v32 = &this->PGRIRecords; /*0x4e7c6d*/
        v30[3] = v31; /*0x4e7c73*/
        if ( this->PGRIRecords.firstNode.next ) /*0x4e7c76*/
        {
          do /*0x4e7c83*/
            v32 = (BSSimpleList_VoidPtr *)v32->firstNode.next; /*0x4e7c80*/
          while ( v32->firstNode.next ); /*0x4e7c83*/
        }
        if ( v32->firstNode.data ) /*0x4e7c88*/
        {
          v33 = (BSSimpleList_VoidPtr::NodeVoid *)FormHeapAlloc(8u); /*0x4e7c8e*/
          if ( v33 ) /*0x4e7c98*/
          {
            v33->data = v30; /*0x4e7c9a*/
            v33->next = 0; /*0x4e7c9c*/
            v32->firstNode.next = v33; /*0x4e7c9f*/
          }
          else
          {
            v32->firstNode.next = 0; /*0x4e7ca6*/
          }
        }
        else
        {
          v32->firstNode.data = v30; /*0x4e7cab*/
        }
        p_PGRIRecords = (BSSimpleList_VoidPtr *)p_PGRIRecords->firstNode.next; /*0x4e7cad*/
        v4 = v39; /*0x4e7cb2*/
      }
      while ( p_PGRIRecords ); /*0x4e7cb6*/
    }
    if ( !sourcea ) /*0x4e7cbc*/
    {
      if ( v4->pointArray ) /*0x4e7cbe*/
      {
        TESPathGrid_ClearRenderedPointGeometry(v4); /*0x4e7cc5*/
        if ( !TESForm_GetOverrideFile(&v4->base, 0xFFFFFFFF) /*0x4e7ce1*/
          || (OverrideFile = TESForm_GetOverrideFile(&v4->base, 0), !TESFile_IsActive(OverrideFile)) )
        {
          TESPathGrid_ClearPointsAndReferenceMaps(v4); /*0x4e7cec*/
          TESPathGrid_ClearPointsByCell(v4); /*0x4e7cf3*/
        }
      }
    }
  }
}
