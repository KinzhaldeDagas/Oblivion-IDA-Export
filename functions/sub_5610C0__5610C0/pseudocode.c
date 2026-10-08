//
// [Mesh leaves v126] 0x561441 installs the leaf shape and 0x561476 precaches it. Mesh-leaf source capture now occurs earlier after 0x563741 native leaf build/atlas processing; runtime conversion does not borrow native CPU vertex arrays across this scene setup. Runtime array disposal is a supported hypothesis, not proven by v125 generic array-bounds logs.
BSTreeNode_OblivionLayout_0F0 *__thiscall BSTreeModel_CreateArt(BSTreeModel_OblivionLayout_058 *this, float scale)
{
  int v3; // esi
  bool v4; // zf
  double v6; // st7
  bhkRefObject *TrunkCapsuleShape; // eax
  BSTreeNode_OblivionLayout_0F0 *v8; // eax
  NiAVObject *v9; // ebp
  OB_CSpeedTreeRT_010201A0 *speedTree; // ecx
  NiNode *v11; // eax
  int i; // ebx
  NiAVObject *v13; // eax
  NiAVObject *v14; // ebp
  BSShaderProperty *AlphaProperty; // eax
  BSShaderProperty *v16; // ecx
  NiProperty **branchCachedPropertiesByLOD; // ecx
  NiAVObject *v18; // eax
  int v19; // ebp
  int v20; // ebx
  NiNode *v21; // eax
  UInt32 v22; // esi
  Ni2DBuffer *NiPropertyByID; // eax
  int v24; // ebx
  OB_CSpeedTreeRT_010201A0 *v25; // ecx
  int v26; // ebp
  NiTriShape *v27; // eax
  NiNode *v28; // esi
  BSShaderProperty *v29; // eax
  BSShaderProperty *v30; // ecx
  BSShaderProperty **leafCachedPropertiesByLOD; // edx
  void (__thiscall ***v32)(_DWORD, int); // esi
  float scalea; // [esp+3Ch] [ebp-38h]
  unsigned __int16 NumBranchLodLevels; // [esp+54h] [ebp-20h]
  unsigned __int16 NumLeafLodLevels; // [esp+54h] [ebp-20h]
  NiAVObject *v36; // [esp+58h] [ebp-1Ch]
  float v37; // [esp+5Ch] [ebp-18h]
  float trunkLength; // [esp+5Ch] [ebp-18h]
  ShaderDefinition *ShaderDefinition; // [esp+5Ch] [ebp-18h]
  ShaderDefinition *v40; // [esp+5Ch] [ebp-18h]
  UInt32 v41; // [esp+60h] [ebp-14h] BYREF
  void *v42; // [esp+64h] [ebp-10h]
  unsigned int v43; // [esp+70h] [ebp-4h]

  v3 = 0; /*0x5610e9*/
  v41 = 0; /*0x5610eb*/
  v4 = this->speedTree == 0; /*0x5610ef*/
  v43 = 0; /*0x5610f2*/
  if ( v4 ) /*0x5610f6*/
    return 0; /*0x5610f8*/
  v6 = scale; /*0x56110a*/
  if ( flt_A56670 < (double)this->trunkLength ) /*0x561111*/
  {
    if ( 1.0 == v6 ) /*0x56111c*/
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&v41, (Ni2DBuffer *)this->collisionShape); /*0x561128*/
    }
    else
    {
      v37 = this->trunkWidth * v6 * dbl_A2FAA0; /*0x56113d*/
      scalea = v37; /*0x561145*/
      trunkLength = v6 * this->trunkLength; /*0x56114c*/
      TrunkCapsuleShape = BSTreeModel_CreateTrunkCapsuleShape(trunkLength, scalea); /*0x561157*/
      NiSmartPointer_Set__((Ni2DBuffer **)&v41, (Ni2DBuffer *)TrunkCapsuleShape); /*0x561164*/
    }
  }
  v8 = (BSTreeNode_OblivionLayout_0F0 *)FormHeapAlloc(0xF0u); /*0x561172*/
  LOBYTE(v43) = 1; /*0x561180*/
  if ( v8 ) /*0x561185*/
  {
    v9 = (NiAVObject *)BSTreeNode_ctor(v8, this, (bhkRefObject *)v41); /*0x561194*/
    v36 = v9; /*0x561196*/
  }
  else
  {
    v36 = 0; /*0x56119c*/
    v9 = 0; /*0x5611a0*/
  }
  v4 = this->branchGeometryDataByLOD == 0; /*0x5611a2*/
  LOBYTE(v43) = 0; /*0x5611a5*/
  if ( !v4 ) /*0x5611aa*/
  {
    if ( this->branchShaderPropertiesByLOD ) /*0x5611b0*/
    {
      if ( this->branchCachedPropertiesByLOD ) /*0x5611b9*/
      {
        speedTree = this->speedTree; /*0x5611c2*/
        if ( speedTree ) /*0x5611c7*/
          NumBranchLodLevels = CSpeedTreeRT__GetNumBranchLodLevels(speedTree); /*0x5611d1*/
        else
          NumBranchLodLevels = 0; /*0x5611d7*/
        ShaderDefinition = GetShaderDefinition(4u); /*0x5611e2*/
        v11 = (NiNode *)((int (__thiscall *)(NiAVObject *))v9->vtbl[1].super.Load)(v9); /*0x5611f4*/
        if ( v11 ) /*0x5611f8*/
        {
          if ( this->branchTexturingProperty ) /*0x5611fa*/
            sub_405680(v11, (BSShaderProperty *)this->branchTexturingProperty); /*0x561204*/
        }
        for ( i = 0; (unsigned __int16)i < NumBranchLodLevels; ++v3 ) /*0x561210*/
        {
          if ( this->branchGeometryDataByLOD[v3] ) /*0x561223*/
          {
            v13 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x561232*/
            v42 = v13; /*0x56123a*/
            LOBYTE(v43) = 2; /*0x561240*/
            if ( v13 ) /*0x561245*/
              v14 = sub_719A20(v13, this->branchGeometryDataByLOD[v3]); /*0x561255*/
            else
              v14 = 0; /*0x561259*/
            LOBYTE(v43) = 0; /*0x56125b*/
            AlphaProperty = (BSShaderProperty *)BSTreeModel_CreateAlphaProperty(); /*0x561260*/
            if ( AlphaProperty ) /*0x561267*/
            {
              AlphaProperty->member.super.flags &= ~0x200u; /*0x561269*/
              sub_405680((NiNode *)v14, AlphaProperty); /*0x561272*/
            }
            v16 = this->branchShaderPropertiesByLOD[v3]; /*0x56127a*/
            if ( v16 ) /*0x56127f*/
            {
              BSShaderProperty_ClearRenderPassLists(v16); /*0x561281*/
              sub_405680((NiNode *)v14, this->branchShaderPropertiesByLOD[v3]); /*0x56128f*/
            }
            if ( this->modelState_0_uninit_1_base_2_instance == 2 ) /*0x561298*/
            {
              branchCachedPropertiesByLOD = this->branchCachedPropertiesByLOD; /*0x56129a*/
              if ( branchCachedPropertiesByLOD[v3] ) /*0x56129d*/
                sub_405680((NiNode *)v14, (BSShaderProperty *)branchCachedPropertiesByLOD[v3]); /*0x5612a7*/
              NiGeometry_SetShader((NiGeometry *)v14, ShaderDefinition->shader); /*0x5612b6*/
            }
            ((void (__thiscall *)(NiAVObject *, int, NiAVObject *))v36->vtbl[1].super.DumpChildAttributes)(v36, i, v14); /*0x5612c9*/
            v9 = v36; /*0x5612cb*/
          }
          ++i; /*0x5612cf*/
        }
        if ( this->modelState_0_uninit_1_base_2_instance != 2 ) /*0x5612e4*/
        {
          v18 = (NiAVObject *)((int (__thiscall *)(NiAVObject *))v9->vtbl[1].super.Load)(v9); /*0x5612fb*/
          BSShaderManager_AssignShadersRecursive(v18, 4u, 1, 1); /*0x5612fe*/
          v19 = 0; /*0x561303*/
          if ( NumBranchLodLevels ) /*0x56130d*/
          {
            v20 = 0; /*0x56130f*/
            do /*0x56135c*/
            {
              v21 = (NiNode *)((int (__thiscall *)(NiAVObject *, int))v36->vtbl[1].super.Save)(v36, v19); /*0x56131e*/
              v22 = (UInt32)v21; /*0x561320*/
              if ( v21 ) /*0x561324*/
              {
                NiPropertyByID = (Ni2DBuffer *)NiNode_GetNiPropertyByID(v21, 3); /*0x56132a*/
                NiSmartPointer_Set__((Ni2DBuffer **)&this->branchCachedPropertiesByLOD[v20], NiPropertyByID); /*0x561335*/
                renderer->__vftable->super.NiRenderer::PrecacheGeometryData((NiRenderer *)renderer, v22, 0, 0, 0); /*0x56134f*/
              }
              ++v19; /*0x561351*/
              ++v20; /*0x561354*/
            }
            while ( (unsigned __int16)v19 < NumBranchLodLevels ); /*0x56135c*/
          }
          v9 = v36; /*0x56135e*/
        }
      }
    }
  }
  v24 = 0; /*0x561362*/
  if ( this->leafGeometryDataByLOD ) /*0x561364*/
  {
    if ( this->leafShaderPropertiesByLOD ) /*0x56136d*/
    {
      if ( this->leafCachedPropertiesByLOD ) /*0x561376*/
      {
        v25 = this->speedTree; /*0x56137f*/
        if ( v25 ) /*0x561384*/
          NumLeafLodLevels = CSpeedTreeRT__GetNumLeafLodLevels(v25); /*0x56138e*/
        else
          NumLeafLodLevels = 0; /*0x561394*/
        v40 = GetShaderDefinition(6u); /*0x5613a7*/
        if ( NumLeafLodLevels ) /*0x5613ab*/
        {
          v26 = 0; /*0x5613b1*/
          do /*0x561483*/
          {
            if ( this->leafGeometryDataByLOD[v26] ) /*0x5613b6*/
            {
              v27 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x5613c5*/
              v42 = v27; /*0x5613cd*/
              LOBYTE(v43) = 3; /*0x5613d3*/
              if ( v27 ) /*0x5613d8*/
                v28 = (NiNode *)OB_NiTriShape_ctorWithData_010201A0(v27, this->leafGeometryDataByLOD[v26]); /*0x5613e8*/
              else
                v28 = 0; /*0x5613ec*/
              LOBYTE(v43) = 0; /*0x5613ee*/
              v29 = (BSShaderProperty *)BSTreeModel_CreateAlphaProperty(); /*0x5613f3*/
              if ( v29 ) /*0x5613fa*/
                sub_405680(v28, v29); /*0x5613ff*/
              v30 = this->leafShaderPropertiesByLOD[v26]; /*0x561407*/
              if ( v30 ) /*0x56140c*/
              {
                BSShaderProperty_ClearRenderPassLists(v30); /*0x56140e*/
                sub_405680(v28, this->leafShaderPropertiesByLOD[v26]); /*0x56141c*/
              }
              leafCachedPropertiesByLOD = this->leafCachedPropertiesByLOD; /*0x561421*/
              if ( leafCachedPropertiesByLOD[v26] ) /*0x561424*/
                sub_405680(v28, leafCachedPropertiesByLOD[v26]); /*0x56142e*/
              ((void (__thiscall *)(NiAVObject *, int, NiNode *))v36->vtbl[1].super.Unk_0E)(v36, v24, v28); /*0x561441*/
              NiGeometry_SetShader((NiGeometry *)v28, v40->shader); /*0x56144d*/
              v40->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)v40->shader, v28); /*0x56145f*/
              renderer->__vftable->super.NiRenderer::PrecacheGeometryData((NiRenderer *)renderer, (UInt32)v28, 0, 0, 0); /*0x561476*/
            }
            ++v24; /*0x561478*/
            ++v26; /*0x56147b*/
          }
          while ( (unsigned __int16)v24 < NumLeafLodLevels ); /*0x561483*/
          v9 = v36; /*0x561489*/
        }
      }
    }
  }
  ((void (__thiscall *)(NiAVObject *))v9->vtbl[1].super.FindNodes)(v9); /*0x561498*/
  if ( this->billboardShape_STBB ) /*0x56149a*/
    v9->vtbl[1].super.Unk_0F((NiObject *)v9, (UInt32)this->billboardShape_STBB);// Verified: CreateArt passes model.billboardShape_STBB (+0x1C) to BSTreeNode vtable slot +0xC0, which resolves locally to BSTreeNode_SetBillboard and attaches the STBB shape under the Billboard child. /*0x5614ad*/
  NiAVObject_InitializePropertyState(v9); /*0x5614b1*/
  NiNode_UpdateDynamicEffectState((NiNode *)v9); /*0x5614b8*/
  sub_7073A0(v9, 0.0); /*0x5614c5*/
  BSTreeNode__MakeHavokLeaves(v9, this->speedTree, scale); /*0x5614d8*/
  v32 = (void (__thiscall ***)(_DWORD, int))v41; /*0x5614dd*/
  v43 = 0xFFFFFFFF; /*0x5614e3*/
  if ( v41 ) /*0x5614eb*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v41 + 4)) ) /*0x5614f1*/
      (**v32)(v32, 1); /*0x561503*/
  }
  return (BSTreeNode_OblivionLayout_0F0 *)v9; /*0x561507*/
}
