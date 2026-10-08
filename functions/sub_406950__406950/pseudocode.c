// Retail world-scene construction: creates the world SceneGraph/ShadowSceneNode state consumed by NiRenderer_Render and ShadowPass.
// Verified world-root ownership for DX11 lifetime work, 2026-10-01: B333CC is an owning SceneGraph reference, not merely a borrowed render pointer. Initialization at 4069AA..4069ED compares old/new, releases old +4 (destroy-on-zero), assigns B333CC at4069E1, and increments the new +4 at4069ED. Teardown at40C3CC..40C3F9 decrements +4/destroys-on-zero before clearing the global. A separately proved primary-world promotion interval may therefore retain the current positive node reference by CAS and defer Release to a safe Present boundary. Root retention preserves attached descendants but does not retain detached/replaced geometry, property objects or buffer metadata; those still need separate ownership/writer closure.
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

  v0 = (SceneGraph *)FormHeapAlloc(0xF0u); /*0x40697c*/
  if ( v0 ) /*0x406992*/
    v1 = SceneGraph::SceneGraph(v0, "World", 0, 0); /*0x4069a4*/
  else
    v1 = 0; /*0x4069a8*/
  if ( g_WorldSceneReceiverRoot != v1 ) /*0x4069bf*/
  {
    if ( g_WorldSceneReceiverRoot ) /*0x4069c3*/
    {
      v2 = g_WorldSceneReceiverRoot; /*0x4069c5*/
      if ( !InterlockedDecrement((volatile LONG *)&g_WorldSceneReceiverRoot->super) ) /*0x4069cb*/
      {
        if ( v2 ) /*0x4069d3*/
          (*(void (__thiscall **)(SceneGraph *, int))v2->vftable)(v2, 1); /*0x4069dd*/
      }
    }
    g_WorldSceneReceiverRoot = v1; /*0x4069e1*/
    if ( v1 ) /*0x4069e7*/
      InterlockedIncrement((volatile LONG *)&v1->super); /*0x4069ed*/
  }
  v3 = (ShadowSceneNode *)FormHeapAlloc(0x130u); /*0x4069f8*/
  if ( v3 ) /*0x406a0e*/
    v4 = ShadowSceneNode::ShadowSceneNode(v3); /*0x406a17*/
  else
    v4 = 0; /*0x406a1b*/
  v5 = *(NiDX9Renderer **)&MEMORY[0xB33E90][0x1248]; /*0x406a32*/
  if ( unk_B43104 != *(NiDX9Renderer **)&MEMORY[0xB33E90][0x1248] ) /*0x406a34*/
  {
    if ( unk_B43104 ) /*0x406a38*/
    {
      v6 = unk_B43104; /*0x406a3a*/
      if ( !InterlockedDecrement((volatile LONG *)&unk_B43104->member) ) /*0x406a40*/
      {
        if ( v6 ) /*0x406a48*/
          ((void (__thiscall *)(NiDX9Renderer *, int))v6->__vftable->super.gap0[0])(v6, 1); /*0x406a52*/
      }
    }
    unk_B43104 = v5; /*0x406a56*/
    if ( v5 ) /*0x406a5c*/
      InterlockedIncrement((volatile LONG *)&v5->member); /*0x406a62*/
  }
  v7 = 0; /*0x406a68*/
  do /*0x406a81*/
  {
    v8 = dataShaderPath[v7]; /*0x406a70*/
    OB_RendererGlobalState_010201A0[v7++ + 0xCF] = v8; /*0x406a76*/
  }
  while ( v8 ); /*0x406a81*/
  sub_7BA0F0(); /*0x406a83*/
  *((_BYTE *)v4 + 0x11C) = 0; /*0x406a8b*/
  sub_7B4270(0, (int)v4); /*0x406a92*/
  sub_7B4270(0, (int)v4); /*0x406a9a*/
  OB_RendererGlobalState_010201A0[0xE] = 0; /*0x406abd*/
  OB_ShaderPassControl_010201A0[1] = 0;         // [Verified] World/display initialization clears OB_ShaderPassControl+1 before composing the independent BSShaderFeatureMask and shadow-caster category mask. /*0x406ac4*/
  if ( byte_B06CBC && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x406b0f*/
    v9 = 0x20; /*0x406b11*/
  else
    v9 = 0;                                     // Display initialization conditionally contributes native canopy-shadow category bit 0x20. /*0x406b18*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] = (byte_B06CCC == 1)
                                                    | (byte_B06CD4 != 1 ? 0 : 2)
                                                    | (byte_B06CE4 != 1 ? 0 : 4)
                                                    | (byte_B06CDC != 1 ? 0 : 8)
                                                    | 0x10
                                                    | v9;// Publish the complete BSShaderFeatureMask assembled from display settings plus native shadow-map bit 0x10 and the conditional canopy bit 0x20.
  g_ShadowCasterCategoryMask = (g_bDoActorShadowsSetting != 0 ? 8 : 0) | (g_bDoStaticAndArchShadowsSetting != 0 ? 2 : 0);// Publish g_ShadowCasterCategoryMask = (bDoStaticAndArchShadows ? 0x02 : 0) | (bDoActorShadows ? 0x08 : 0). This is separate from the master shadow-map feature bit.
  sub_7C2450(*(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7], (int)v4, (int)unk_B43104); /*0x406b4e*/
  sub_4814C0(); /*0x406b53*/
  flt_B44EE4 = 0.0; /*0x406b60*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1B] = ClassifyShadowCasterCategory; /*0x406b66*/
  (*((void (__thiscall **)(SceneGraph *, ShadowSceneNode *, _DWORD))g_WorldSceneReceiverRoot->vftable + 0x21))( /*0x406b7b*/
    g_WorldSceneReceiverRoot,
    v4,
    0);
  v10 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x406b7f*/
  v11 = (BSShaderProperty *)v10; /*0x406b84*/
  if ( v10 ) /*0x406b93*/
  {
    NiObjectNET::NiObjectNET(v10); /*0x406b97*/
    v11->vtbl = &NiVertexColorProperty::`vftable'; /*0x406b9c*/
    v11->member.super.flags = 8; /*0x406ba2*/
  }
  else
  {
    v11 = 0; /*0x406baa*/
  }
  a2 = v11; /*0x406bbb*/
  v11->member.super.flags = v11->member.super.flags & 0xFFC7 | 0x28; /*0x406bc7*/
  sub_405680((NiNode *)v4, v11); /*0x406bcb*/
  v12 = FormHeapAlloc(0x1Cu); /*0x406bd7*/
  if ( v12 ) /*0x406beb*/
  {
    NiObjectNET::NiObjectNET((NiObjectNET *)v12); /*0x406bef*/
    *(_DWORD *)v12 = &NiZBufferProperty::`vftable'; /*0x406bf4*/
    *(_WORD *)(v12 + 0x18) = 0xF; /*0x406bfa*/
    v13 = (BSShaderProperty *)v12; /*0x406c00*/
  }
  else
  {
    v13 = 0; /*0x406c04*/
  }
  v13->member.super.flags |= 3u; /*0x406c06*/
  sub_405680((NiNode *)v4, v13); /*0x406c14*/
  v14 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x406c1b*/
  v15 = (BSShaderProperty *)v14; /*0x406c20*/
  if ( v14 ) /*0x406c33*/
  {
    NiObjectNET::NiObjectNET(v14); /*0x406c37*/
    v15->vtbl = &NiWireframeProperty::`vftable'; /*0x406c3c*/
    v15->member.super.flags = 0; /*0x406c42*/
  }
  else
  {
    v15 = 0; /*0x406c4a*/
  }
  v16 = unk_B333E0; /*0x406c4c*/
  if ( unk_B333E0 != v15 ) /*0x406c57*/
  {
    if ( unk_B333E0 ) /*0x406c5b*/
    {
      v17 = unk_B333E0; /*0x406c5d*/
      if ( !InterlockedDecrement((volatile LONG *)&unk_B333E0->member) ) /*0x406c63*/
      {
        if ( v17 ) /*0x406c6f*/
          (*(void (__thiscall **)(BSShaderProperty *, int))v17->vtbl)(v17, 1); /*0x406c79*/
      }
    }
    v16 = v15; /*0x406c7d*/
    unk_B333E0 = v15; /*0x406c7f*/
    if ( v15 ) /*0x406c84*/
    {
      InterlockedIncrement((volatile LONG *)&v15->member); /*0x406c8a*/
      v16 = unk_B333E0; /*0x406c90*/
    }
  }
  v16->member.super.flags &= ~1u; /*0x406c95*/
  sub_405680((NiNode *)v4, unk_B333E0); /*0x406ca4*/
  v18 = (NiObjectNET *)FormHeapAlloc(0x34u); /*0x406cab*/
  if ( v18 ) /*0x406cc1*/
    v19 = (BSShaderProperty *)NiFogProperty_constr(v18);// Fog decode: scene setup constructs the global active BSFogProperty for B333E4 via NiFogProperty_constr. This is the active world fog object, not the plain startup NiFogProperty default. /*0x406cca*/
  else
    v19 = 0; /*0x406cce*/
  v20 = unk_B333E4; /*0x406cd0*/
  if ( unk_B333E4 != v19 ) /*0x406cdf*/
  {
    if ( unk_B333E4 ) /*0x406ce3*/
    {
      v21 = unk_B333E4; /*0x406ce5*/
      if ( !InterlockedDecrement((volatile LONG *)&unk_B333E4->member) ) /*0x406ceb*/
      {
        if ( v21 ) /*0x406cf7*/
          (*(void (__thiscall **)(BSShaderProperty *, int))v21->vtbl)(v21, 1); /*0x406d01*/
      }
    }
    v20 = v19; /*0x406d05*/
    unk_B333E4 = v19;                           // Fog decode: stores the active global BSFogProperty pointer into B333E4. /*0x406d07*/
    if ( v19 ) /*0x406d0c*/
    {
      InterlockedIncrement((volatile LONG *)&v19->member); /*0x406d12*/
      v20 = unk_B333E4; /*0x406d18*/
    }
  }
  v20->member.super.flags |= 1u;                // Fog decode: enables the B333E4 fog property by setting flags bit 0. /*0x406d1d*/
  sub_7C8270((float *)unk_B333E4, 1.0);         // Fog decode: initializes B333E4 BSFogProperty default fogStart/fogEnd through 0x7C8270. /*0x406d2e*/
  sub_405680((NiNode *)v4, unk_B333E4);         // Fog decode: attaches B333E4 to the root/sky scene node. Property propagation puts it in NiPropertyState slot type 1 / +0x0C for render consumers. /*0x406d3c*/
  v22 = (NiNode *)FormHeapAlloc(0xDCu); /*0x406d46*/
  if ( v22 ) /*0x406d5c*/
    v23 = NiNode::NiNode(v22, 0); /*0x406d67*/
  else
    v23 = 0; /*0x406d6b*/
  v24 = (NiObjectNET *)root; /*0x406d6d*/
  if ( root != v23 ) /*0x406d7d*/
  {
    if ( root ) /*0x406d81*/
    {
      v25 = root; /*0x406d83*/
      if ( !InterlockedDecrement((volatile LONG *)&root->members) ) /*0x406d89*/
      {
        if ( v25 ) /*0x406d95*/
          v25->vtbl->super.super.super.Destructor((NiRefObject *)v25, 1); /*0x406d9f*/
      }
    }
    v24 = (NiObjectNET *)v23; /*0x406da3*/
    root = v23; /*0x406da5*/
    if ( v23 ) /*0x406dab*/
    {
      InterlockedIncrement((volatile LONG *)&v23->members); /*0x406db1*/
      v24 = (NiObjectNET *)root; /*0x406db7*/
    }
  }
  NiObjectNET_SetName(v24, off_A30044); /*0x406dc2*/
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, root, 0); /*0x406dda*/
  v26 = (NiNode *)FormHeapAlloc(0xDCu); /*0x406de1*/
  if ( v26 ) /*0x406df7*/
    v27 = NiNode::NiNode(v26, 0); /*0x406e02*/
  else
    v27 = 0; /*0x406e06*/
  v28 = (NiObjectNET *)unk_B333DC; /*0x406e08*/
  if ( unk_B333DC != v27 ) /*0x406e18*/
  {
    if ( unk_B333DC ) /*0x406e1c*/
    {
      v29 = unk_B333DC; /*0x406e1e*/
      if ( !InterlockedDecrement((volatile LONG *)&unk_B333DC->members) ) /*0x406e24*/
      {
        if ( v29 ) /*0x406e30*/
          v29->vtbl->super.super.super.Destructor((NiRefObject *)v29, 1); /*0x406e3a*/
      }
    }
    v28 = (NiObjectNET *)v27; /*0x406e3e*/
    unk_B333DC = v27; /*0x406e40*/
    if ( v27 ) /*0x406e46*/
    {
      InterlockedIncrement((volatile LONG *)&v27->members); /*0x406e4c*/
      v28 = (NiObjectNET *)unk_B333DC; /*0x406e52*/
    }
  }
  NiObjectNET_SetName(v28, "Weather"); /*0x406e5d*/
  sub_405680(unk_B333DC, v13); /*0x406e69*/
  sub_405680(unk_B333DC, unk_B333E0); /*0x406e7a*/
  sub_405680(unk_B333DC, a2); /*0x406e8a*/
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, unk_B333DC, 0); /*0x406ea2*/
  InterfaceMenuScenegraph_Create(); /*0x406ea4*/
  Interface3dScenegraph_Create(); /*0x406ea9*/
  v30 = (NiNode *)FormHeapAlloc(0xE8u); /*0x406eb3*/
  if ( v30 ) /*0x406ec9*/
    v31 = sub_49FFE0(v30); /*0x406ecd*/
  else
    v31 = 0; /*0x406ed4*/
  MEMORY[0xB333A8] = v31; /*0x406ee4*/
  NiObjectNET_SetName((NiObjectNET *)v31, "LODRoot"); /*0x406ee9*/
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, MEMORY[0xB333A8], 0); /*0x406f02*/
  v32 = (NiNode *)FormHeapAlloc(0xDCu); /*0x406f09*/
  if ( v32 ) /*0x406f1f*/
    v33 = NiNode::NiNode(v32, 0); /*0x406f2a*/
  else
    v33 = 0; /*0x406f2e*/
  NiObjectNET_SetName((NiObjectNET *)v33, "LandLOD"); /*0x406f3b*/
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))MEMORY[0xB333A8]->vtbl->AddObject)(MEMORY[0xB333A8], v33, 0); /*0x406f51*/
  v34 = flt_B02D68; /*0x406f66*/
  v33->members.super.m_localTransform.pos.x = 0.0; /*0x406f70*/
  v60 = v34; /*0x406f73*/
  v33->members.super.m_localTransform.pos.y = 0.0; /*0x406f7b*/
  v33->members.super.m_localTransform.pos.z = v60; /*0x406f7e*/
  v35 = (NiNode *)FormHeapAlloc(0xDCu); /*0x406f81*/
  if ( v35 ) /*0x406f97*/
    v36 = (NiObjectNET *)NiNode::NiNode(v35, 0); /*0x406fa2*/
  else
    v36 = 0; /*0x406fa6*/
  NiObjectNET_SetName(v36, "DistantRefLOD"); /*0x406fb3*/
  ((void (__thiscall *)(NiNode *, NiObjectNET *, _DWORD))MEMORY[0xB333A8]->vtbl->AddObject)(MEMORY[0xB333A8], v36, 0); /*0x406fc9*/
  v37 = (NiNode *)FormHeapAlloc(0xDCu); /*0x406fd0*/
  if ( v37 ) /*0x406fe6*/
    v38 = (NiObjectNET *)NiNode::NiNode(v37, 0); /*0x406ff1*/
  else
    v38 = 0; /*0x406ff5*/
  NiObjectNET_SetName(v38, "LOD Trees"); /*0x407005*/
  (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, _DWORD))v36->vtbl + 0x21))(v36, v38, 0); /*0x407017*/
  MEMORY[0xB42D64] = (NiNode *)v38; /*0x40701e*/
  v39 = (NiNode *)FormHeapAlloc(0xDCu); /*0x407024*/
  if ( v39 ) /*0x40703a*/
    v40 = NiNode::NiNode(v39, 0); /*0x407040*/
  else
    v40 = 0; /*0x407047*/
  MEMORY[0xB333AC] = v40; /*0x407054*/
  NiObjectNET_SetName((NiObjectNET *)v40, "ObjectLODRoot"); /*0x407059*/
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, MEMORY[0xB333AC], 0); /*0x407072*/
  v41 = (NiNode *)FormHeapAlloc(0xDCu); /*0x407079*/
  if ( v41 ) /*0x40708f*/
    v42 = NiNode::NiNode(v41, 0); /*0x407095*/
  else
    v42 = 0; /*0x40709c*/
  MEMORY[0xB333A4] = v42; /*0x4070a9*/
  NiObjectNET_SetName((NiObjectNET *)v42, "MagicProjectileRoot"); /*0x4070ae*/
  (*(void (__thiscall **)(ShadowSceneNode *, NiNode *, _DWORD))(*(_DWORD *)v4 + 0x84))(v4, MEMORY[0xB333A4], 0); /*0x4070c7*/
  if ( g_WorldSceneReceiverRoot->super.children.end ) /*0x4070ce*/
    vtbl = (float *)g_WorldSceneReceiverRoot->super.children.data->vtbl; /*0x4070e2*/
  else
    vtbl = 0; /*0x4070d8*/
  vtbl[0x15] = 0.0; /*0x4070fc*/
  vtbl[0x16] = 0.0; /*0x407107*/
  vtbl[0x17] = 128.0; /*0x40710a*/
  NiAVObject_InitializePropertyState((NiAVObject *)g_WorldSceneReceiverRoot); /*0x407113*/
  NiNode_UpdateDynamicEffectState((NiNode *)g_WorldSceneReceiverRoot); /*0x40711e*/
  result = NiAVObject_UpdateNiAVObject((NiAVObject *)g_WorldSceneReceiverRoot, 0.0, 1); /*0x407131*/
  unk_B33396 = byte_B06DC4; /*0x407143*/
  if ( !MEMORY[0xB333EC] && !OB_RendererGlobalState_010201A0[0xA5] ) /*0x407156*/
  {
    v45 = (NiGeometry *)FormHeapAlloc(0xC0u); /*0x407166*/
    if ( v45 ) /*0x40717a*/
    {
      v46 = (NiScreenElementsData *)FormHeapAlloc(0x70u); /*0x40717e*/
      if ( v46 ) /*0x407191*/
      {
        v47 = NiScreenElementsData::Construct(v46, 0, 0, 1u, 1, 1, 4, 1, 2, 1); /*0x4071a7*/
        v48 = NiScreenElements::NiScreenElements(v45, v47); /*0x4071b3*/
      }
      else
      {
        v48 = NiScreenElements::NiScreenElements(v45, 0); /*0x4071c3*/
      }
    }
    else
    {
      v48 = 0; /*0x4071ca*/
    }
    NiSmartPointer_Set__((Ni2DBuffer **)&MEMORY[0xB333EC], (Ni2DBuffer *)v48); /*0x4071d9*/
    sub_702970(*((NiGeometry **)MEMORY[0xB333EC] + 0x2D), 4u, 0, 0); /*0x4071ef*/
    sub_702EC0(*((NiGeometry **)MEMORY[0xB333EC] + 0x2D), 0, 0.0, 0.0, 1.0, 1.0); /*0x407218*/
    sub_703050(*((NiGeometry **)MEMORY[0xB333EC] + 0x2D)); /*0x407229*/
    sub_702FC0(*((NiGeometry **)MEMORY[0xB333EC] + 0x2D), 0, 0, 0.0, 0.0, 1.0, 1.0); /*0x407253*/
    v49 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x40725a*/
    v50 = (BSShaderProperty *)v49; /*0x40725f*/
    if ( v49 ) /*0x407272*/
    {
      NiObjectNET::NiObjectNET(v49); /*0x407276*/
      v50->vtbl = &NiVertexColorProperty::`vftable'; /*0x40727b*/
      v50->member.super.flags = 8; /*0x407281*/
    }
    else
    {
      v50 = 0; /*0x407289*/
    }
    v50->member.super.flags &= 0xFFC7u; /*0x40728b*/
    sub_405680((NiNode *)MEMORY[0xB333EC], v50); /*0x40729c*/
    v51 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x4072a3*/
    if ( v51 ) /*0x4072b9*/
      v52 = (BSShaderProperty *)NiMaterialProperty::NiMaterialProperty(v51); /*0x4072bd*/
    else
      v52 = 0; /*0x4072c4*/
    v52->member.unk38.end = (NiTList_Entry_NiProperty *)stru_B25AC4; /*0x4072cc*/
    v52->member.unk38.numItems = MEMORY[0xB25AC8]; /*0x4072d5*/
    v53 = MEMORY[0xB25ACC]; /*0x4072d8*/
    ++v52->member.unk48.numItems; /*0x4072de*/
    v52->member.unk48.vtlb = (void **)v53; /*0x4072e2*/
    sub_405680((NiNode *)MEMORY[0xB333EC], v52); /*0x4072f0*/
    v54 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x4072f7*/
    v55 = (BSShaderProperty *)v54; /*0x4072fc*/
    if ( v54 ) /*0x40730f*/
    {
      NiObjectNET::NiObjectNET(v54); /*0x407313*/
      v55->vtbl = &NiZBufferProperty::`vftable'; /*0x407318*/
      v55->member.super.flags = 0xF; /*0x40731e*/
    }
    else
    {
      v55 = 0; /*0x407326*/
    }
    v55->member.super.flags &= 0xFFFCu; /*0x407328*/
    sub_405680((NiNode *)MEMORY[0xB333EC], v55); /*0x407339*/
    v56 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x407340*/
    if ( v56 ) /*0x407356*/
      v57 = NiTexturingProperty::NiTexturingProperty(v56); /*0x40735f*/
    else
      v57 = 0; /*0x407363*/
    InnerTexture = BSRenderedTexture::GetInnerTexture((BSRenderedTexture *)texture); /*0x40736f*/
    OB_NiTexturingProperty_SetBaseTexture_010201A0(v57, InnerTexture); /*0x407377*/
    NiTexturingProperty_SetBaseMapFilterMode(v57, 0); /*0x407380*/
    OB_NiTexturingProperty_SetClampMode_010201A0(v57, 0); /*0x407389*/
    sub_405680((NiNode *)MEMORY[0xB333EC], (BSShaderProperty *)v57); /*0x407395*/
    NiAVObject_InitializePropertyState((NiAVObject *)MEMORY[0xB333EC]); /*0x4073a0*/
    return NiAVObject_UpdateNiAVObject((NiAVObject *)MEMORY[0xB333EC], 0.0, 1); /*0x4073b3*/
  }
  return result; /*0x4073b8*/
}
