// CSpeedTreeRT default constructor/init. Allocates owned engine/geometry/lighting/wind/simple-billboard/frond objects, tree sizes, shared refcount/list, registers in global tree list, and initializes base extents/horizontal coords.
OB_CSpeedTreeRT_010201A0 *__thiscall CSpeedTreeRT__ctor(OB_CSpeedTreeRT_010201A0 *this)
{
  int v2; // ebx
  OB_CWindEngine_010201A0 *v7; // ecx
  OB_CWindEngine_010201A0 *v8; // eax
  OB_CIndexedGeometry_010201A0 *v9; // ecx
  OB_CIndexedGeometry_010201A0 *v10; // eax
  OB_CTreeEngine_010201A0 *v11; // ecx
  OB_CTreeEngine_010201A0 *v12; // eax
  OB_CLightingEngine_010201A0 *v13; // ecx
  OB_CLightingEngine_010201A0 *v14; // eax
  OB_CLeafGeometry_010201A0 *v15; // ecx
  OB_CLeafGeometry_010201A0 *v16; // eax
  OB_CSimpleBillboard_010201A0 *v17; // ecx
  OB_CSimpleBillboard_010201A0 *v18; // eax
  unsigned int *v19; // eax
  _DWORD *v20; // eax
  OB_CFrondEngine_010201A0 *v21; // ecx
  OB_CFrondEngine_010201A0 *v22; // eax
  OB_CIndexedGeometry_010201A0 *v23; // ecx
  OB_CIndexedGeometry_010201A0 *v24; // eax
  OB_STreeExtents_010201A0 *treeSizeBounds; // edx
  OB_STreeExtents_010201A0 *v27; // eax
  OB_STreeExtents_010201A0 *v29; // ecx
  OB_STreeExtents_010201A0 *v31; // edx
  OB_STreeExtents_010201A0 *v33; // eax
  OB_STreeExtents_010201A0 *v35; // ecx
  OB_STreeExtents_010201A0 *v37; // edx
  int v41; // [esp+0h] [ebp-68h] BYREF
  OB_CSpeedTreeRT_010201A0 *v42; // [esp+50h] [ebp-18h] BYREF
  OB_CSpeedTreeRT_010201A0 *v43; // [esp+54h] [ebp-14h]
  int *v44; // [esp+58h] [ebp-10h]
  int v45; // [esp+64h] [ebp-4h]

  v44 = &v41; /*0x78d6c8*/
  v43 = this; /*0x78d6cd*/
  __asm { fld     dword ptr ds:0A8C430h } /*0x78d6d0*/
  v2 = 0; /*0x78d6d6*/
  __asm { fstp    dword ptr [esi+1Ch] } /*0x78d6d8*/
  v43->leafLodTransitionRadius = _ET1; /*0x78d6d8*/
  __asm { fld     dword ptr ds:0A41724h } /*0x78d6de*/
  __asm { fstp    dword ptr [esi+20h] }
  this->leafLodCurveExponent = _ET1; /*0x78d6e9*/
  __asm { fld     dword ptr ds:0A3D65Ch } /*0x78d6ee*/
  this->treeEngine = 0; /*0x78d6f4*/
  __asm { fstp    dword ptr [esi+24h] } /*0x78d6f6*/
  this->leafSizeIncreaseFactor = _ET1; /*0x78d6f6*/
  this->branchGeometry = 0; /*0x78d6f9*/
  __asm { fldz } /*0x78d6fc*/
  this->leafGeometry = 0; /*0x78d6fe*/
  __asm { fstp    dword ptr [esi+28h] } /*0x78d701*/
  this->leafTransitionFactor16014 = _ET1; /*0x78d701*/
  this->lightingEngine = 0; /*0x78d704*/
  this->windEngine = 0; /*0x78d707*/
  this->simpleBillboard = 0; /*0x78d70a*/
  this->leafLodTransitionMethod = 1; /*0x78d70d*/
  this->leafLodSizeAdjustments = 0; /*0x78d710*/
  this->sharedInstanceRefcount = 0; /*0x78d713*/
  this->instanceData = 0; /*0x78d716*/
  this->frondActivationLevel = 0xFFFFFFFF; /*0x78d719*/
  this->treeSizeBounds = 0; /*0x78d71c*/
  this->targetAlphaByte = 0x54; /*0x78d71f*/
  this->treeComputedFlag = 0; /*0x78d723*/
  this->branchWindWeightLevel = 0xFFFFFFFF; /*0x78d726*/
  this->embeddedTexcoords = 0; /*0x78d729*/
  this->projectedShadow = 0; /*0x78d72c*/
  this->directional360ImageCount = 0;           // 2026-05-21 360 gap pass: CSpeedTreeRT constructor zeros +0x54 directional image count; current parser paths do not later populate it. /*0x78d72f*/
  this->collisionObjects = 0; /*0x78d733*/
  this->frondEngine = 0; /*0x78d736*/
  this->frondLodCount = 0; /*0x78d739*/
  this->userDataString = 0; /*0x78d73d*/
  this->flag360Billboard = 0; /*0x78d740*/
  this->flagHorizontalBillboard = 0; /*0x78d743*/
  v45 = 0; /*0x78d746*/
  v7 = (OB_CWindEngine_010201A0 *)FormHeapAlloc(0x44u); /*0x78d74e*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v7; /*0x78d753*/
  LOBYTE(v45) = 1; /*0x78d758*/
  if ( v7 ) /*0x78d75c*/
    v8 = OB_CWindEngine_ctor_010201A0(v7); /*0x78d75e*/
  else
    v8 = 0; /*0x78d765*/
  LOBYTE(v45) = 0; /*0x78d76c*/
  this->windEngine = v8; /*0x78d76f*/
  v9 = (OB_CIndexedGeometry_010201A0 *)FormHeapAlloc(0x118u); /*0x78d777*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v9; /*0x78d77c*/
  LOBYTE(v45) = 2; /*0x78d781*/
  if ( v9 ) /*0x78d785*/
    v10 = OB_CIndexedGeometry_ctor_010201A0(v9, this->windEngine, 0); /*0x78d78c*/
  else
    v10 = 0; /*0x78d793*/
  LOBYTE(v45) = 0; /*0x78d79a*/
  this->branchGeometry = v10; /*0x78d79d*/
  v11 = (OB_CTreeEngine_010201A0 *)FormHeapAlloc(0x110u); /*0x78d7a5*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v11; /*0x78d7aa*/
  LOBYTE(v45) = 3; /*0x78d7af*/
  if ( v11 ) /*0x78d7b3*/
    v12 = OB_CTreeEngine_ctor_010201A0(v11, this->branchGeometry); /*0x78d7b9*/
  else
    v12 = 0; /*0x78d7c0*/
  LOBYTE(v45) = 0; /*0x78d7c7*/
  this->treeEngine = v12; /*0x78d7ca*/
  v13 = (OB_CLightingEngine_010201A0 *)FormHeapAlloc(0xB0u); /*0x78d7d1*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v13; /*0x78d7d6*/
  LOBYTE(v45) = 4; /*0x78d7db*/
  if ( v13 ) /*0x78d7df*/
    v14 = OB_CLightingEngine_ctor_010201A0(v13); /*0x78d7e1*/
  else
    v14 = 0; /*0x78d7e8*/
  LOBYTE(v45) = 0; /*0x78d7ec*/
  this->lightingEngine = v14; /*0x78d7ef*/
  v15 = (OB_CLeafGeometry_010201A0 *)FormHeapAlloc(0x30u); /*0x78d7f7*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v15; /*0x78d7fc*/
  LOBYTE(v45) = 5; /*0x78d801*/
  if ( v15 ) /*0x78d805*/
    v16 = OB_CLeafGeometry_ctor_010201A0(v15, this->windEngine); /*0x78d80b*/
  else
    v16 = 0; /*0x78d812*/
  LOBYTE(v45) = 0; /*0x78d816*/
  this->leafGeometry = v16; /*0x78d819*/
  v17 = (OB_CSimpleBillboard_010201A0 *)FormHeapAlloc(0x34u); /*0x78d821*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v17; /*0x78d826*/
  LOBYTE(v45) = 6; /*0x78d82b*/
  if ( v17 ) /*0x78d82f*/
    v18 = OB_CSimpleBillboard_ctor_010201A0(v17); /*0x78d831*/
  else
    v18 = 0; /*0x78d838*/
  LOBYTE(v45) = 0; /*0x78d83c*/
  this->simpleBillboard = v18; /*0x78d83f*/
  this->treeSizeBounds = (OB_STreeExtents_010201A0 *)FormHeapAlloc(0x1Cu); /*0x78d84c*/
  v19 = (unsigned int *)FormHeapAlloc(4u);      // Allocates the 4-byte shared-instance refcount object used as family identity; initializes it to 1 at 0x78D85C. This allocation outlives individual base/instance wrappers until final shared cleanup. /*0x78d84f*/
  this->sharedInstanceRefcount = v19; /*0x78d857*/
  *v19 = 1; /*0x78d85c*/
  v20 = (_DWORD *)FormHeapAlloc(0x10u); /*0x78d85e*/
  if ( v20 ) /*0x78d868*/
  {
    v20[1] = 0; /*0x78d86a*/
    v20[2] = 0; /*0x78d86d*/
    v20[3] = 0; /*0x78d870*/
  }
  else
  {
    v20 = 0; /*0x78d875*/
  }
  LOBYTE(v45) = 0; /*0x78d879*/
  this->sharedInstanceListVector = v20; /*0x78d87c*/
  v21 = (OB_CFrondEngine_010201A0 *)FormHeapAlloc(0x6Cu); /*0x78d884*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v21; /*0x78d889*/
  LOBYTE(v45) = 8; /*0x78d88e*/
  if ( v21 ) /*0x78d892*/
    v22 = OB_CFrondEngine_ctor_010201A0(v21); /*0x78d894*/
  else
    v22 = 0; /*0x78d89b*/
  LOBYTE(v45) = 0; /*0x78d8a2*/
  this->frondEngine = v22; /*0x78d8a5*/
  v23 = (OB_CIndexedGeometry_010201A0 *)FormHeapAlloc(0x118u); /*0x78d8ad*/
  v42 = (OB_CSpeedTreeRT_010201A0 *)v23; /*0x78d8b2*/
  LOBYTE(v45) = 9; /*0x78d8b7*/
  if ( v23 ) /*0x78d8bb*/
    v24 = OB_CIndexedGeometry_ctor_010201A0(v23, this->windEngine, 1); /*0x78d8c2*/
  else
    v24 = 0; /*0x78d8c9*/
  this->frondGeometry = v24; /*0x78d8cb*/
  LOBYTE(v45) = 0; /*0x78d8d7*/
  v42 = this; /*0x78d8da*/
  OB_stVector4_PushBack_010201A0(&stru_B42984, &v42); /*0x78d8dd*/
  __asm { fldz } /*0x78d8e2*/
  ++unk_B42980; /*0x78d8e4*/
  unk_B429BC = (int)this->lightingEngine; /*0x78d8ed*/
  treeSizeBounds = this->treeSizeBounds; /*0x78d8f3*/
  __asm { fst     dword ptr [edx] } /*0x78d8f6*/
  treeSizeBounds->min.x = _ET1; /*0x78d8f6*/
  v27 = this->treeSizeBounds; /*0x78d8f8*/
  __asm { fst     dword ptr [eax+4] } /*0x78d8fb*/
  v27->min.y = _ET1; /*0x78d8fb*/
  v29 = this->treeSizeBounds; /*0x78d8fe*/
  __asm { fst     dword ptr [ecx+8] } /*0x78d901*/
  v29->min.z = _ET1; /*0x78d901*/
  v31 = this->treeSizeBounds; /*0x78d904*/
  __asm /*0x78d907*/
  {
    fld1
    fst     dword ptr [edx+0Ch]
  }
  v31->max.x = _ET1; /*0x78d909*/
  v33 = this->treeSizeBounds; /*0x78d90c*/
  __asm { fst     dword ptr [eax+10h] } /*0x78d90f*/
  v33->max.y = _ET1; /*0x78d90f*/
  v35 = this->treeSizeBounds; /*0x78d912*/
  __asm { fst     dword ptr [ecx+14h] } /*0x78d915*/
  v35->max.z = _ET1; /*0x78d915*/
  v37 = this->treeSizeBounds; /*0x78d918*/
  __asm { fstp    dword ptr [edx+18h] } /*0x78d91b*/
  v37[1].min.x = _ET1; /*0x78d91b*/
  while ( v2 < 0xC ) /*0x78d921*/
  {
    __asm { fst     dword ptr [esi+ebx*4+70h] } /*0x78d923*/
    this->horizontalBillboardCoords12[v2++] = _ET1; /*0x78d923*/
  }
  __asm { fstp    st } /*0x78d92b*/
  return this; /*0x78d92f*/
}
