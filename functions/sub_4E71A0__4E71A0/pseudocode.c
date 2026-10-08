// Verified rebuilds this PathGrid's render root and point/linked-reference visualization. It owns a NiNode at TESPathGrid+0x1C; each point receives a NiNode renderNode at +0x28 with an octahedron clone; adjacency uses NiLines segments; PGRL-associated references receive a marker/edge overlay from pointsByReference. It then attaches the grid root beneath the shared world ObjectLODRoot. Verified Fallout divergence: Fallout's TESObjectCELL::AttachToWorld adds draw-only navmeshes to NavMeshRender::spRootDrawNode, and TESObjectCELL::Detach removes them. Fallout uses a cell-scoped manager/root path; Oblivion uses per-PathGrid/per-point nodes.
int __thiscall TESPathGrid_RebuildRenderedGraph(TESPathGrid *this)
{
  TESPathGrid *v1; // ebx
  NiNode *v2; // eax
  NiNode *v3; // edi
  NiNode *renderNode; // esi
  int v5; // esi
  TESPathGridPoint *v6; // ecx
  unsigned int bucketCount; // ecx
  unsigned int v8; // eax
  void **buckets; // edx
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  void **v17; // ecx
  NiAVObject *OctahedronGeometry; // ebp
  void *v19; // ebp
  const NiPoint3 *v20; // eax
  NiAVObject *Segment; // eax
  NiNode *v22; // esi
  NiObjectNET *v23; // eax
  BSShaderProperty *v24; // ebx
  NiPoint3 *a2; // [esp+20h] [ebp-48h]
  _DWORD *v27; // [esp+3Ch] [ebp-2Ch]
  int v29; // [esp+44h] [ebp-24h]
  int v30[4]; // [esp+4Ch] [ebp-1Ch] BYREF
  int v31; // [esp+64h] [ebp-4h]

  v1 = this; /*0x4e71c7*/
  if ( this->renderNode ) /*0x4e71cd*/
    TESPathGrid_ClearRenderedPointGeometry(this); /*0x4e71d4*/
  v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4e71de*/
  v31 = 0; /*0x4e71ec*/
  if ( v2 ) /*0x4e71f4*/
    v3 = NiNode::NiNode(v2, 0); /*0x4e71ff*/
  else
    v3 = 0; /*0x4e7203*/
  renderNode = v1->renderNode; /*0x4e7205*/
  v31 = 0xFFFFFFFF; /*0x4e720a*/
  if ( renderNode != v3 ) /*0x4e7212*/
  {
    if ( renderNode ) /*0x4e7216*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&renderNode->members) ) /*0x4e721c*/
        renderNode->vtbl->super.super.super.Destructor((NiRefObject *)renderNode, 1); /*0x4e7232*/
    }
    v1->renderNode = v3; /*0x4e7236*/
    if ( v3 ) /*0x4e7239*/
      InterlockedIncrement((volatile LONG *)&v3->members); /*0x4e723f*/
  }
  v5 = 0; /*0x4e7245*/
  if ( v1->pointCount ) /*0x4e7247*/
  {
    do /*0x4e726e*/
    {
      v6 = v1->pointArray->data[v5]; /*0x4e7256*/
      if ( v6 ) /*0x4e725b*/
        TESPathGridPoint_RebuildRenderGeometry(v6, v1, 1);// Verified renderer loop invokes TESPathGridPoint_RebuildRenderGeometry for each non-null point, passing the owning TESPathGrid and includeAllNeighbors=true. /*0x4e7260*/
      ++v5; /*0x4e7269*/
    }
    while ( v5 < v1->pointCount ); /*0x4e726e*/
  }
  bucketCount = v1->pointsByReference.bucketCount; /*0x4e7270*/
  v8 = 0; /*0x4e7273*/
  if ( bucketCount ) /*0x4e7277*/
  {
    buckets = v1->pointsByReference.buckets; /*0x4e727c*/
    while ( !*buckets ) /*0x4e7283*/
    {
      ++v8; /*0x4e7285*/
      ++buckets; /*0x4e7288*/
      if ( v8 >= bucketCount ) /*0x4e728d*/
        goto LABEL_20; /*0x4e728d*/
    }
    v10 = v1->pointsByReference.buckets[v8]; /*0x4e729b*/
  }
  else
  {
LABEL_20:
    v10 = 0; /*0x4e728f*/
  }
  if ( v10 ) /*0x4e7293*/
  {
    while ( 1 ) /*0x4e72a4*/
    {
      v11 = v10[1]; /*0x4e72a4*/
      v12 = v10[2]; /*0x4e72a7*/
      v13 = (_DWORD *)*v10; /*0x4e72aa*/
      v29 = v11; /*0x4e72ae*/
      if ( v13 ) /*0x4e72b2*/
      {
        v27 = v13; /*0x4e72b4*/
      }
      else
      {
        v14 = (*((int (__thiscall **)(TESPathGridReferencePointMap *, int))v1->pointsByReference.vtable + 1))( /*0x4e72c6*/
                &v1->pointsByReference,
                v11);
        v15 = v1->pointsByReference.bucketCount; /*0x4e72c8*/
        v16 = v14 + 1; /*0x4e72cb*/
        if ( v16 >= v15 ) /*0x4e72d0*/
        {
LABEL_31:
          v27 = 0; /*0x4e72e8*/
        }
        else
        {
          v17 = &v1->pointsByReference.buckets[v16]; /*0x4e72d5*/
          while ( !*v17 ) /*0x4e72dc*/
          {
            ++v16; /*0x4e72de*/
            ++v17; /*0x4e72e1*/
            if ( v16 >= v15 ) /*0x4e72e6*/
              goto LABEL_31; /*0x4e72e6*/
          }
          v27 = *v17; /*0x4e735c*/
        }
      }
      if ( v11 ) /*0x4e72f2*/
      {
        *(float *)v30 = 1.0; /*0x4e72fe*/
        *(float *)&v30[1] = 0.0; /*0x4e7306*/
        *(float *)&v30[3] = 0.0; /*0x4e730a*/
        *(float *)&v30[2] = 1.0; /*0x4e730e*/
        OctahedronGeometry = NiTriShape_CreateOctahedronGeometry(flt_A31C80, (const NiColorAlpha *)v30); /*0x4e7320*/
        OctahedronGeometry->members.m_localTransform.pos = *(NiPoint3 *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11); /*0x4e7333*/
        ((void (__thiscall *)(NiNode *, NiAVObject *, int))v1->renderNode->vtbl->AddObject)( /*0x4e7350*/
          v1->renderNode,
          OctahedronGeometry,
          1);
        if ( v12 ) /*0x4e7354*/
        {
          while ( *(_DWORD *)(v12 + 4) || *(_DWORD *)v12 ) /*0x4e7366*/
          {
            v19 = *(void **)v12; /*0x4e7375*/
            a2 = PathGraphNode_GetPosition(*(void **)v12); /*0x4e7383*/
            v20 = (const NiPoint3 *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11); /*0x4e7393*/
            Segment = NiLines_CreateSegment(v20, (const NiColorAlpha *)v30, a2, (const NiColorAlpha *)v30);// Verified edge-render call: NiLines_CreateSegment receives the PathGrid point position and its adjacent point position, with the same vertex color for both endpoints; the resulting segment is added under TESPathGrid.renderNode. /*0x4e7396*/
            ((void (__thiscall *)(NiNode *, NiAVObject *, int))v1->renderNode->vtbl->AddObject)( /*0x4e73ac*/
              v1->renderNode,
              Segment,
              1);
            v22 = (NiNode *)sub_47EA60(flt_A47800, flt_A47800, flt_A47800, v30); /*0x4e73ce*/
            v23 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x4e73d0*/
            v24 = (BSShaderProperty *)v23; /*0x4e73d5*/
            v31 = 1; /*0x4e73e0*/
            if ( v23 ) /*0x4e73e8*/
            {
              NiObjectNET::NiObjectNET(v23); /*0x4e73ec*/
              v24->vtbl = &NiWireframeProperty::`vftable'; /*0x4e73f1*/
              v24->member.super.flags = 0; /*0x4e73f7*/
            }
            else
            {
              v24 = 0; /*0x4e73ff*/
            }
            v24->member.super.flags |= 1u; /*0x4e7401*/
            v31 = 0xFFFFFFFF; /*0x4e7409*/
            sub_405680(v22, v24); /*0x4e7411*/
            ((void (__thiscall *)(NiNode *, NiNode *, int))this->renderNode->vtbl->AddObject)(this->renderNode, v22, 1); /*0x4e7428*/
            v1 = this; /*0x4e7433*/
            v22->members.super.m_localTransform.pos = *PathGraphNode_GetPosition(v19); /*0x4e7437*/
            v12 = *(_DWORD *)(v12 + 4); /*0x4e7446*/
            if ( !v12 ) /*0x4e744b*/
              break; /*0x4e744b*/
            v11 = v29; /*0x4e7362*/
          }
        }
      }
      if ( !v27 ) /*0x4e7456*/
        break; /*0x4e7456*/
      v10 = v27; /*0x4e72a0*/
    }
  }
  NiAVObject_InitializePropertyState((NiAVObject *)v1->renderNode); /*0x4e745f*/
  (*(void (__thiscall **)(UInt32, NiNode *, int))(*(_DWORD *)g_PathGridDebugRenderRoot + 0x84))( /*0x4e7478*/
    g_PathGridDebugRenderRoot,
    v1->renderNode,
    1);
  NiAVObject_InitializePropertyState((NiAVObject *)g_PathGridDebugRenderRoot); /*0x4e7480*/
  return NiAVObject_UpdateNiAVObject((NiAVObject *)g_PathGridDebugRenderRoot, 0.0, 0); /*0x4e7498*/
}
