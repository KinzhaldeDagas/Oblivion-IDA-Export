// Verified instance copy path: shares the base model at +0x10, copies/refcounts +0x14/+0x18 geometry data and +0x2C/+0x30 cached property slots, while deep-cloning per-LOD shader-property objects at +0x24/+0x28. The leaf cached-property source remains Unknown because no stock writer was found.
bool __thiscall BSTreeModel_InitAsInstance(
        BSTreeModel_OblivionLayout_058 *this,
        BSTreeModel_OblivionLayout_058 *baseModel)
{
  OB_CSpeedTreeRT_010201A0 *v4; // ecx
  OB_CSpeedTreeRT_010201A0 *Instance; // eax
  bhkRefObject *collisionShape; // ecx
  Ni2DBuffer *v7; // eax
  unsigned __int16 NumBranchLODLevels; // ax
  int v9; // ebx
  unsigned int v10; // ecx
  int v11; // eax
  NiScreenElementsData **v12; // edi
  NiScreenElementsData **v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  BSShaderProperty **v16; // edi
  unsigned int v17; // ecx
  int v18; // eax
  NiProperty **v19; // edi
  int v20; // edi
  NiObject *v21; // ecx
  OB_CSpeedTreeRT_010201A0 *speedTree; // ecx
  unsigned __int16 NumLeafLodLevels; // ax
  int v24; // ebx
  unsigned int v25; // ecx
  int v26; // eax
  NiTriShapeData **v27; // edi
  unsigned int v28; // ecx
  int v29; // eax
  BSShaderProperty **v30; // edi
  unsigned int v31; // ecx
  int v32; // eax
  BSShaderProperty **v33; // edi
  int v34; // edi
  NiObject *v35; // ecx
  NiObject *billboardShape_STBB; // ebp
  Ni2DBuffer *v37; // eax
  Ni2DBuffer *v39; // [esp+4h] [ebp-44h]
  Ni2DBuffer *v40; // [esp+4h] [ebp-44h]
  int (__stdcall ***v41[7])(signed int); // [esp+20h] [ebp-28h] BYREF
  int v42; // [esp+44h] [ebp-4h]
  unsigned __int16 a2; // [esp+4Ch] [ebp+4h]
  unsigned __int16 a2a; // [esp+4Ch] [ebp+4h]

  NiEnterCriticalSection( /*0x5630d3*/
    (struct _RTL_CRITICAL_SECTION *)&OB_BSTreeModel_MakeInstanceCriticalSection_010201A0,
    (int)&unk_A2F830);
  if ( baseModel
    && (v4 = baseModel->speedTree) != 0
    && baseModel->modelState_0_uninit_1_base_2_instance != 2
    && !this->modelState_0_uninit_1_base_2_instance
    && (Instance = CSpeedTreeRT__MakeInstance(v4), (this->speedTree = Instance) != 0) )
  {
    NiSmartPointer_Set__((Ni2DBuffer **)&this->baseModel, (Ni2DBuffer *)baseModel); /*0x56311b*/
    this->modelState_0_uninit_1_base_2_instance = 2; /*0x563127*/
    OB_NiSmartPointer_Assign_010201A0((int *)&this->branchTexturingProperty, (int *)&baseModel->branchTexturingProperty); /*0x56312a*/
    OB_NiSmartPointer_Assign_010201A0((int *)&this->leafTexture, (int *)&baseModel->leafTexture); /*0x563136*/
    OB_NiSmartPointer_Assign_010201A0( /*0x563142*/
      (int *)&this->billboardTexturingProperty,
      (int *)&baseModel->billboardTexturingProperty);
    OB_NiSmartPointer_Assign_010201A0((int *)&this->leafShaderStreamData, (int *)&baseModel->leafShaderStreamData); /*0x56314e*/
    this->curveScalar = baseModel->curveScalar; /*0x563156*/
    this->seed = baseModel->seed; /*0x56315c*/
    this->trunkLength = baseModel->trunkLength; /*0x563162*/
    this->trunkWidth = baseModel->trunkWidth; /*0x563168*/
    if ( baseModel->collisionShape ) /*0x56316b*/
    {
      sub_478C80((NiTPointerMap<NiObject *,NiObject *> **)v41, 1.0); /*0x56317c*/
      collisionShape = baseModel->collisionShape; /*0x563181*/
      v42 = 0; /*0x563189*/
      v7 = (Ni2DBuffer *)sub_700610(collisionShape, (int)v41); /*0x563191*/
      NiSmartPointer_Set__((Ni2DBuffer **)&this->collisionShape, v7); /*0x56319a*/
      v42 = 0xFFFFFFFF; /*0x5631a3*/
      sub_4781A0(v41); /*0x5631ab*/
    }
    else
    {
      NiSmartPointer_Set__((Ni2DBuffer **)&this->collisionShape, 0); /*0x5631b7*/
    }
    NumBranchLODLevels = BSTreeModel_GetNumBranchLODLevels(this); /*0x5631be*/
    a2 = NumBranchLODLevels; /*0x5631c9*/
    if ( NumBranchLODLevels )
    {
      if ( baseModel->branchGeometryDataByLOD )
      {
        if ( baseModel->branchShaderPropertiesByLOD )
        {
          if ( baseModel->branchCachedPropertiesByLOD )
          {
            v9 = NumBranchLODLevels; /*0x5631f1*/
            v10 = (unsigned __int64)NumBranchLODLevels >> 0x1E != 0 ? 0xFFFFFFFF : 4 * NumBranchLODLevels;
            v11 = FormHeapAlloc(__CFADD__(v10, 4) ? 0xFFFFFFFF : v10 + 4);
            v42 = 1; /*0x563221*/
            if ( v11 ) /*0x563229*/
            {
              v12 = (NiScreenElementsData **)(v11 + 4); /*0x563236*/
              *(_DWORD *)v11 = v9; /*0x56323c*/
              ArrayConstructor( /*0x56323e*/
                (char *)(v11 + 4),
                4u,
                v9,
                (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                (void (__thiscall *)(void *))NiPointerSlot_Release);
              v13 = v12; /*0x563243*/
            }
            else
            {
              v13 = 0; /*0x56324c*/
            }
            this->branchGeometryDataByLOD = v13; /*0x56324e*/
            v42 = 0xFFFFFFFF; /*0x56325f*/
            v14 = (unsigned __int64)(unsigned int)v9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v9;
            v15 = FormHeapAlloc(__CFADD__(v14, 4) ? 0xFFFFFFFF : v14 + 4);
            v42 = 2; /*0x563286*/
            if ( v15 ) /*0x56328a*/
            {
              v16 = (BSShaderProperty **)(v15 + 4); /*0x563297*/
              *(_DWORD *)v15 = v9; /*0x56329d*/
              ArrayConstructor( /*0x56329f*/
                (char *)(v15 + 4),
                4u,
                v9,
                (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                (void (__thiscall *)(void *))NiPointerSlot_Release);
            }
            else
            {
              v16 = 0; /*0x5632a6*/
            }
            v42 = 0xFFFFFFFF; /*0x5632b6*/
            this->branchShaderPropertiesByLOD = v16; /*0x5632be*/
            v17 = (unsigned __int64)(unsigned int)v9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v9;
            v18 = FormHeapAlloc(__CFADD__(v17, 4) ? 0xFFFFFFFF : v17 + 4);
            v42 = 3; /*0x5632e0*/
            if ( v18 ) /*0x5632e8*/
            {
              v19 = (NiProperty **)(v18 + 4); /*0x5632f5*/
              *(_DWORD *)v18 = v9; /*0x5632fb*/
              ArrayConstructor( /*0x5632fd*/
                (char *)(v18 + 4),
                4u,
                v9,
                (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                (void (__thiscall *)(void *))NiPointerSlot_Release);
            }
            else
            {
              v19 = 0; /*0x563304*/
            }
            v42 = 0xFFFFFFFF; /*0x56330c*/
            this->branchCachedPropertiesByLOD = v19; /*0x563314*/
            if ( a2 ) /*0x563317*/
            {
              v20 = 0; /*0x563319*/
              do /*0x563364*/
              {
                OB_NiSmartPointer_Assign_010201A0( /*0x56332b*/
                  (int *)&this->branchGeometryDataByLOD[v20],
                  (int *)&baseModel->branchGeometryDataByLOD[v20]);
                v21 = (NiObject *)baseModel->branchShaderPropertiesByLOD[v20]; /*0x563333*/
                if ( v21 ) /*0x563338*/
                {
                  v39 = (Ni2DBuffer *)NiObject_CloneWithPointerMap(v21); /*0x56333f*/
                  NiSmartPointer_Set__((Ni2DBuffer **)&this->branchShaderPropertiesByLOD[v20], v39); /*0x563340*/
                }
                else
                {
                  NiSmartPointer_Set__((Ni2DBuffer **)&this->branchShaderPropertiesByLOD[v20], 0); /*0x563349*/
                }
                OB_NiSmartPointer_Assign_010201A0( /*0x563359*/
                  (int *)&this->branchCachedPropertiesByLOD[v20],
                  (int *)&baseModel->branchCachedPropertiesByLOD[v20]);
                ++v20; /*0x56335e*/
                --v9; /*0x563361*/
              }
              while ( v9 ); /*0x563364*/
            }
          }
        }
      }
    }
    speedTree = this->speedTree; /*0x563366*/
    if ( speedTree )
    {
      NumLeafLodLevels = CSpeedTreeRT__GetNumLeafLodLevels(speedTree); /*0x563371*/
      a2a = NumLeafLodLevels; /*0x56337c*/
      if ( NumLeafLodLevels )
      {
        if ( baseModel->leafGeometryDataByLOD )
        {
          if ( baseModel->leafShaderPropertiesByLOD )
          {
            if ( baseModel->leafCachedPropertiesByLOD )
            {
              v24 = NumLeafLodLevels; /*0x5633a4*/
              v25 = (unsigned __int64)NumLeafLodLevels >> 0x1E != 0 ? 0xFFFFFFFF : 4 * NumLeafLodLevels;
              v26 = FormHeapAlloc(__CFADD__(v25, 4) ? 0xFFFFFFFF : v25 + 4);
              v42 = 4; /*0x5633d4*/
              if ( v26 ) /*0x5633dc*/
              {
                v27 = (NiTriShapeData **)(v26 + 4); /*0x5633e9*/
                *(_DWORD *)v26 = v24; /*0x5633ef*/
                ArrayConstructor( /*0x5633f1*/
                  (char *)(v26 + 4),
                  4u,
                  v24,
                  (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                  (void (__thiscall *)(void *))NiPointerSlot_Release);
              }
              else
              {
                v27 = 0; /*0x5633f8*/
              }
              v42 = 0xFFFFFFFF; /*0x563408*/
              this->leafGeometryDataByLOD = v27; /*0x563410*/
              v28 = (unsigned __int64)(unsigned int)v24 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v24;
              v29 = FormHeapAlloc(__CFADD__(v28, 4) ? 0xFFFFFFFF : v28 + 4);
              v42 = 5; /*0x563432*/
              if ( v29 ) /*0x56343a*/
              {
                v30 = (BSShaderProperty **)(v29 + 4); /*0x563447*/
                *(_DWORD *)v29 = v24; /*0x56344d*/
                ArrayConstructor( /*0x56344f*/
                  (char *)(v29 + 4),
                  4u,
                  v24,
                  (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                  (void (__thiscall *)(void *))NiPointerSlot_Release);
              }
              else
              {
                v30 = 0; /*0x563456*/
              }
              v42 = 0xFFFFFFFF; /*0x563466*/
              this->leafShaderPropertiesByLOD = v30; /*0x56346e*/
              v31 = (unsigned __int64)(unsigned int)v24 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v24;
              v32 = FormHeapAlloc(__CFADD__(v31, 4) ? 0xFFFFFFFF : v31 + 4);
              v42 = 6; /*0x563490*/
              if ( v32 ) /*0x563498*/
              {
                v33 = (BSShaderProperty **)(v32 + 4); /*0x5634a5*/
                *(_DWORD *)v32 = v24; /*0x5634ab*/
                ArrayConstructor( /*0x5634ad*/
                  (char *)(v32 + 4),
                  4u,
                  v24,
                  (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
                  (void (__thiscall *)(void *))NiPointerSlot_Release);
              }
              else
              {
                v33 = 0; /*0x5634b4*/
              }
              v42 = 0xFFFFFFFF; /*0x5634bc*/
              this->leafCachedPropertiesByLOD = v33; /*0x5634c4*/
              if ( a2a ) /*0x5634c7*/
              {
                v34 = 0; /*0x5634c9*/
                do /*0x563514*/
                {
                  OB_NiSmartPointer_Assign_010201A0( /*0x5634db*/
                    (int *)&this->leafGeometryDataByLOD[v34],
                    (int *)&baseModel->leafGeometryDataByLOD[v34]);
                  v35 = (NiObject *)baseModel->leafShaderPropertiesByLOD[v34]; /*0x5634e3*/
                  if ( v35 ) /*0x5634e8*/
                  {
                    v40 = (Ni2DBuffer *)NiObject_CloneWithPointerMap(v35); /*0x5634ef*/
                    NiSmartPointer_Set__((Ni2DBuffer **)&this->leafShaderPropertiesByLOD[v34], v40); /*0x5634f0*/
                  }
                  else
                  {
                    NiSmartPointer_Set__((Ni2DBuffer **)&this->leafShaderPropertiesByLOD[v34], 0); /*0x5634f9*/
                  }
                  OB_NiSmartPointer_Assign_010201A0( /*0x563509*/
                    (int *)&this->leafCachedPropertiesByLOD[v34],
                    (int *)&baseModel->leafCachedPropertiesByLOD[v34]);
                  ++v34; /*0x56350e*/
                  --v24; /*0x563511*/
                }
                while ( v24 ); /*0x563514*/
              }
            }
          }
        }
      }
    }
    billboardShape_STBB = (NiObject *)baseModel->billboardShape_STBB;// Verified: InitAsInstance clones billboardShape_STBB (+0x1C) with NiObject_CloneWithPointerMap; its local producer is the NiTriShape named STBB. /*0x563516*/
    if ( billboardShape_STBB ) /*0x56351b*/
    {
      v37 = (Ni2DBuffer *)NiObject_CloneWithPointerMap(billboardShape_STBB); /*0x56351f*/
      NiSmartPointer_Set__((Ni2DBuffer **)&this->billboardShape_STBB, v37); /*0x563528*/
    }
    NiLeaveCriticalSection_0(&OB_BSTreeModel_MakeInstanceCriticalSection_010201A0); /*0x563532*/
    return 1; /*0x563537*/
  }
  else
  {
    NiLeaveCriticalSection_0(&OB_BSTreeModel_MakeInstanceCriticalSection_010201A0); /*0x563540*/
    return 0; /*0x563545*/
  }
}
