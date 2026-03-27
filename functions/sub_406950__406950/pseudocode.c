int __cdecl sub_406950()
{
  SceneGraph *v0; // eax
  SceneGraph *v1; // esi
  SceneGraph *v2; // edi
  ShadowSceneNode *v3; // eax
  ShadowSceneNode *v4; // ebp
  NiDX9Renderer *v5; // edi
  NiDX9Renderer *v6; // esi
  int v7; // eax
  char v8; // cl
  int v9; // eax
  NiObjectNET *v10; // eax
  BSShaderProperty *v11; // esi
  int v12; // edi
  BSShaderProperty *v13; // ebx
  NiObjectNET *v14; // eax
  BSShaderProperty *v15; // esi
  BSShaderProperty *v16; // eax
  BSShaderProperty *v17; // edi
  NiObjectNET *v18; // eax
  BSShaderProperty *v19; // esi
  BSShaderProperty *v20; // eax
  BSShaderProperty *v21; // edi
  NiNode *v22; // eax
  NiNode *v23; // esi
  NiObjectNET *v24; // ecx
  NiNode *v25; // edi
  NiNode *v26; // eax
  NiNode *v27; // esi
  NiObjectNET *v28; // ecx
  NiNode *v29; // edi
  NiNode *v30; // eax
  NiNode *v31; // eax
  NiNode *v32; // eax
  NiNode *v33; // esi
  double v34; // st7
  NiNode *v35; // eax
  NiObjectNET *v36; // esi
  NiNode *v37; // eax
  NiObjectNET *v38; // edi
  NiNode *v39; // eax
  NiNode *v40; // eax
  NiNode *v41; // eax
  NiNode *v42; // eax
  float *vtbl; // eax
  int result; // eax
  NiGeometry *v45; // esi
  NiScreenElementsData *v46; // eax
  NiScreenElementsData *v47; // eax
  NiAVObject *v48; // eax
  NiObjectNET *v49; // eax
  BSShaderProperty *v50; // esi
  NiMaterialProperty *v51; // eax
  BSShaderProperty *v52; // eax
  int v53; // ecx
  NiObjectNET *v54; // eax
  BSShaderProperty *v55; // esi
  NiTexturingProperty *v56; // eax
  NiTexturingProperty *v57; // esi
  NiRenderedTexture *InnerTexture; // eax
  BSShaderProperty *a2; // [esp+84h] [ebp-20h]
  float v60; // [esp+94h] [ebp-10h]

  v0 = (SceneGraph *)FormHeapAlloc(0xF0u);
  if ( v0 )
    v1 = SceneGraph::SceneGraph(v0, "World", 0, 0);
  else
    v1 = 0;
  if ( g_worldScenegraph != v1 )
  {
    if ( g_worldScenegraph )
    {
      v2 = g_worldScenegraph;
      if ( !InterlockedDecrement((volatile LONG *)&g_worldScenegraph->super) )
      {
        if ( v2 )
          (*(void (__thiscall **)(SceneGraph *, int))v2->vftable)(v2, 1);
      }
    }
    g_worldScenegraph = v1;
    if ( v1 )
      InterlockedIncrement((volatile LONG *)&v1->super);
  }
  v3 = (ShadowSceneNode *)FormHeapAlloc(0x130u);
  if ( v3 )
    v4 = ShadowSceneNode::ShadowSceneNode(v3);
  else
    v4 = 0;
  v5 = (NiDX9Renderer *)dword_B350D8;
  if ( dword_B43104 != (NiDX9Renderer *)dword_B350D8 )
  {
    if ( dword_B43104 )
    {
      v6 = dword_B43104;
      if ( !InterlockedDecrement((volatile LONG *)&dword_B43104->member) )
      {
        if ( v6 )
          ((void (__thiscall *)(NiDX9Renderer *, int))v6->__vftable->super.gap0[0])(v6, 1);
      }
    }
    dword_B43104 = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)&v5->member);
  }
  v7 = 0;
  do
  {
    v8 = dataShaderPath[v7];
    FullPath[v7++] = v8;
  }
  while ( v8 );
  sub_7BA0F0();
  *((_BYTE *)v4 + 0x11C) = 0;
  sub_7B4270(0, (int)v4);
  sub_7B4270(0, (int)v4);
  byte_B42EA7 = 0;
  byte_B42E85 = 0;
  if ( byte_B06CBC && ShaderPackage >= 2 )
    v9 = 0x20;
  else
    v9 = 0;
  dword_B42F40 = (byte_B06CCC == 1)
               | (byte_B06CD4 != 1 ? 0 : 2)
               | (byte_B06CE4 != 1 ? 0 : 4)
               | (byte_B06CDC != 1 ? 0 : 8)
               | 0x10
               | v9;
  dword_B2C678 = (byte_B06CEC != 0 ? 8 : 0) | (DoStaticAndArchShadows != 0 ? 2 : 0);
  sub_7C2450(g_textureManager, (int)v4, (int)dword_B43104);
  sub_4814C0();
  flt_B44EE4 = 0.0;
  dword_B42EB4 = sub_4E0CF0;
  (*((void (__thiscall **)(SceneGraph *, ShadowSceneNode *, _DWORD))g_worldScenegraph->vftable + 0x21))(
    g_worldScenegraph,
    v4,
    0);
  v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v11 = (BSShaderProperty *)v10;
  if ( v10 )
  {
    NiObjectNET::NiObjectNET(v10);
    v11->vtbl = &NiVertexColorProperty::`vftable';
    v11->member.super.flags = 8;
  }
  else
  {
    v11 = 0;
  }
  a2 = v11;
  v11->member.super.flags = v11->member.super.flags & 0xFFC7 | 0x28;
  sub_405680((NiNode *)v4, v11);
  v12 = FormHeapAlloc(0x1Cu);
  if ( v12 )
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v12);
    *(_DWORD *)v12 = &NiZBufferProperty::`vftable';
    *(_WORD *)(v12 + 0x18) = 0xF;
    v13 = (BSShaderProperty *)v12;
  }
  else
  {
    v13 = 0;
  }
  v13->member.super.flags |= 3u;
  sub_405680((NiNode *)v4, v13);
  v14 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v15 = (BSShaderProperty *)v14;
  if ( v14 )
  {
    NiObjectNET::NiObjectNET(v14);
    v15->vtbl = &NiWireframeProperty::`vftable';
    v15->member.super.flags = 0;
  }
  else
  {
    v15 = 0;
  }
  v16 = dword_B333E0;
  if ( dword_B333E0 != v15 )
  {
    if ( dword_B333E0 )
    {
      v17 = dword_B333E0;
      if ( !InterlockedDecrement((volatile LONG *)&dword_B333E0->member) )
      {
        if ( v17 )
          (*(void (__thiscall **)(BSShaderProperty *, int))v17->vtbl)(v17, 1);
      }
    }
    v16 = v15;
    dword_B333E0 = v15;
    if ( v15 )
    {
      InterlockedIncrement((volatile LONG *)&v15->member);
      v16 = dword_B333E0;
    }
  }
  v16->member.super.flags &= ~1u;
  sub_405680((NiNode *)v4, dword_B333E0);
  v18 = (NiObjectNET *)FormHeapAlloc(0x34u);
  if ( v18 )
    v19 = (BSShaderProperty *)NiFogProperty_constr(v18);
  else
    v19 = 0;
  v20 = dword_B333E4;
  if ( dword_B333E4 != v19 )
  {
    if ( dword_B333E4 )
    {
      v21 = dword_B333E4;
      if ( !InterlockedDecrement((volatile LONG *)&dword_B333E4->member) )
      {
        if ( v21 )
          (*(void (__thiscall **)(BSShaderProperty *, int))v21->vtbl)(v21, 1);
      }
    }
    v20 = v19;
    dword_B333E4 = v19;
    if ( v19 )
    {
      InterlockedIncrement((volatile LONG *)&v19->member);
      v20 = dword_B333E4;
    }
  }
  v20->member.super.flags |= 1u;
  sub_7C8270((float *)dword_B333E4, 1.0);
  sub_405680((NiNode *)v4, dword_B333E4);
  v22 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v22 )
    v23 = NiNode::NiNode(v22, 0);
  else
    v23 = 0;
  v24 = (NiObjectNET *)dword_B333D8;
  if ( dword_B333D8 != v23 )
  {
    if ( dword_B333D8 )
    {
      v25 = dword_B333D8;
      if ( !InterlockedDecrement((volatile LONG *)&dword_B333D8->members) )
      {
        if ( v25 )
          v25->vtbl->super.super.super.Destructor((NiRefObject *)v25, 1);
      }
    }
    v24 = (NiObjectNET *)v23;
    dword_B333D8 = v23;
    if ( v23 )
    {
      InterlockedIncrement((volatile LONG *)&v23->members);
      v24 = (NiObjectNET *)dword_B333D8;
    }
  }
  NiObjectNET_SetName(v24, off_A30044);
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, dword_B333D8, 0);
  v26 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v26 )
    v27 = NiNode::NiNode(v26, 0);
  else
    v27 = 0;
  v28 = (NiObjectNET *)dword_B333DC;
  if ( dword_B333DC != v27 )
  {
    if ( dword_B333DC )
    {
      v29 = dword_B333DC;
      if ( !InterlockedDecrement((volatile LONG *)&dword_B333DC->members) )
      {
        if ( v29 )
          v29->vtbl->super.super.super.Destructor((NiRefObject *)v29, 1);
      }
    }
    v28 = (NiObjectNET *)v27;
    dword_B333DC = v27;
    if ( v27 )
    {
      InterlockedIncrement((volatile LONG *)&v27->members);
      v28 = (NiObjectNET *)dword_B333DC;
    }
  }
  NiObjectNET_SetName(v28, "Weather");
  sub_405680(dword_B333DC, v13);
  sub_405680(dword_B333DC, dword_B333E0);
  sub_405680(dword_B333DC, a2);
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, dword_B333DC, 0);
  InterfaceMenuScenegraph_Create();
  Interface3dScenegraph_Create();
  v30 = (NiNode *)FormHeapAlloc(0xE8u);
  if ( v30 )
    v31 = sub_49FFE0(v30);
  else
    v31 = 0;
  LODRoot = v31;
  NiObjectNET_SetName((NiObjectNET *)v31, "LODRoot");
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, LODRoot, 0);
  v32 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v32 )
    v33 = NiNode::NiNode(v32, 0);
  else
    v33 = 0;
  NiObjectNET_SetName((NiObjectNET *)v33, "LandLOD");
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))LODRoot->vtbl->AddObject)(LODRoot, v33, 0);
  v34 = flt_B02D68;
  v33->members.super.m_localTransform.pos.x = 0.0;
  v60 = v34;
  v33->members.super.m_localTransform.pos.y = 0.0;
  v33->members.super.m_localTransform.pos.z = v60;
  v35 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v35 )
    v36 = (NiObjectNET *)NiNode::NiNode(v35, 0);
  else
    v36 = 0;
  NiObjectNET_SetName(v36, "DistantRefLOD");
  ((void (__thiscall *)(NiNode *, NiObjectNET *, _DWORD))LODRoot->vtbl->AddObject)(LODRoot, v36, 0);
  v37 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v37 )
    v38 = (NiObjectNET *)NiNode::NiNode(v37, 0);
  else
    v38 = 0;
  NiObjectNET_SetName(v38, "LOD Trees");
  (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, _DWORD))v36->vtbl + 0x21))(v36, v38, 0);
  LODTree = (NiNode *)v38;
  v39 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v39 )
    v40 = NiNode::NiNode(v39, 0);
  else
    v40 = 0;
  ObjectLODRoot = v40;
  NiObjectNET_SetName((NiObjectNET *)v40, "ObjectLODRoot");
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, ObjectLODRoot, 0);
  v41 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v41 )
    v42 = NiNode::NiNode(v41, 0);
  else
    v42 = 0;
  MagicProjectileRoot = v42;
  NiObjectNET_SetName((NiObjectNET *)v42, "MagicProjectileRoot");
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, MagicProjectileRoot, 0);
  if ( g_worldScenegraph->super.children.end )
    vtbl = (float *)g_worldScenegraph->super.children.data->vtbl;
  else
    vtbl = 0;
  vtbl[0x15] = 0.0;
  vtbl[0x16] = 0.0;
  vtbl[0x17] = 128.0;
  NiAVObject_InitializePropertyState((NiAVObject *)g_worldScenegraph);
  NiNode_UpdateDynamicEffectState((NiNode *)g_worldScenegraph);
  result = NiAVObject_UpdateNiAVObject((NiAVObject *)g_worldScenegraph, 0.0, 1);
  byte_B33396 = byte_B06DC4;
  if ( !ScreenElementsRoot_ && !ImageSpaceEffectEnabled )
  {
    v45 = (NiGeometry *)FormHeapAlloc(0xC0u);
    if ( v45 )
    {
      v46 = (NiScreenElementsData *)FormHeapAlloc(0x70u);
      if ( v46 )
      {
        v47 = NiScreenElementsData::Construct(v46, 0, 0, 1u, 1, 1, 4, 1, 2, 1);
        v48 = NiScreenElements::NiScreenElements(v45, v47);
      }
      else
      {
        v48 = NiScreenElements::NiScreenElements(v45, 0);
      }
    }
    else
    {
      v48 = 0;
    }
    NiSmartPointer_Set__((Ni2DBuffer **)&ScreenElementsRoot_, (Ni2DBuffer *)v48);
    sub_702970(*((NiGeometry **)ScreenElementsRoot_ + 0x2D), 4, 0, 0);
    sub_702EC0(*((NiGeometry **)ScreenElementsRoot_ + 0x2D), 0, 0.0, 0.0, 1.0, 1.0);
    sub_703050(*((NiGeometry **)ScreenElementsRoot_ + 0x2D));
    sub_702FC0(*((NiGeometry **)ScreenElementsRoot_ + 0x2D), 0, 0, 0.0, 0.0, 1.0, 1.0);
    v49 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v50 = (BSShaderProperty *)v49;
    if ( v49 )
    {
      NiObjectNET::NiObjectNET(v49);
      v50->vtbl = &NiVertexColorProperty::`vftable';
      v50->member.super.flags = 8;
    }
    else
    {
      v50 = 0;
    }
    v50->member.super.flags &= 0xFFC7u;
    sub_405680((NiNode *)ScreenElementsRoot_, v50);
    v51 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
    if ( v51 )
      v52 = (BSShaderProperty *)NiMaterialProperty::NiMaterialProperty(v51);
    else
      v52 = 0;
    v52->member.unk38.end = (NiTList_Entry_NiProperty *)dword_B25AC4;
    v52->member.unk38.numItems = dword_B25AC8;
    v53 = dword_B25ACC;
    ++v52->member.unk48.numItems;
    v52->member.unk48.vtlb = (void **)v53;
    sub_405680((NiNode *)ScreenElementsRoot_, v52);
    v54 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v55 = (BSShaderProperty *)v54;
    if ( v54 )
    {
      NiObjectNET::NiObjectNET(v54);
      v55->vtbl = &NiZBufferProperty::`vftable';
      v55->member.super.flags = 0xF;
    }
    else
    {
      v55 = 0;
    }
    v55->member.super.flags &= 0xFFFCu;
    sub_405680((NiNode *)ScreenElementsRoot_, v55);
    v56 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
    if ( v56 )
      v57 = NiTexturingProperty::NiTexturingProperty(v56);
    else
      v57 = 0;
    InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)menuRenderedTexture);
    NiTexturingProperty::SetUnk08(v57, InnerTexture);
    sub_405900(v57, 0);
    sub_405870(v57, 0);
    sub_405680((NiNode *)ScreenElementsRoot_, (BSShaderProperty *)v57);
    NiAVObject_InitializePropertyState((NiAVObject *)ScreenElementsRoot_);
    return NiAVObject_UpdateNiAVObject((NiAVObject *)ScreenElementsRoot_, 0.0, 1);
  }
  return result;
}
