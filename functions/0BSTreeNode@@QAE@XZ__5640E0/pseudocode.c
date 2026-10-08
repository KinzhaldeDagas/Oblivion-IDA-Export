// Verified 0xF0-byte BSTreeNode layout: NiNode base +0x00..+0xDB; model +0xDC; branch/leaf LOD arrays +0xE0/+0xE4; billboardGeometry +0xE8; +0xEC float Unknown. Constructor creates child slot 2 as a separate NiBillboardNode named Billboard; the +0xE8 field stores the NiTriBasedGeom added under that parent.
BSTreeNode_OblivionLayout_0F0 *__thiscall BSTreeNode_ctor(
        BSTreeNode_OblivionLayout_0F0 *this,
        BSTreeModel_OblivionLayout_058 *model,
        bhkRefObject *collisionShape)
{
  BSTreeModel_OblivionLayout_058 *treeModel; // edi
  BSTreeModel_OblivionLayout_058 *v5; // ebx
  BSTreeModel_OblivionLayout_058 *v6; // eax
  NiObjectNET *v7; // edi
  LONG (__stdcall *v8)(volatile LONG *); // ebx
  BSTreeModel_OblivionLayout_058 *v9; // edi
  BSTreeModel_OblivionLayout_058 *v10; // eax
  NiObjectNET *v11; // edi
  BSTreeManager_OblivionVerifiedLayout *Instance; // eax
  BSTreeModel_OblivionLayout_058 *v13; // edi
  BSTreeModel_OblivionLayout_058 *v14; // eax
  BSTreeModel_OblivionLayout_058 *v15; // edi
  BSTreeModel_OblivionLayout_058 *v16; // edi
  unsigned __int16 NumBranchLODLevels; // ax
  unsigned __int16 v18; // bx
  BSTreeModel_OblivionLayout_058 *v19; // edi
  unsigned int v20; // ecx
  int v21; // eax
  NiAVObject **v22; // ebp
  int v23; // ebx
  NiAVObject **branchNodesByLOD; // edi
  NiAVObject *v25; // ebp
  NiAVObject **v26; // edi
  unsigned __int16 NumLeafLODLevels; // ax
  int v28; // ebx
  BSTreeModel_OblivionLayout_058 *v29; // edi
  unsigned int v30; // ecx
  int v31; // eax
  NiAVObject **v32; // ebp
  NiAVObject **v33; // eax
  NiAVObject **leafNodesByLOD; // edi
  int v35; // ebp
  _DWORD *v36; // edi
  NiTriBasedGeom *billboardGeometry; // edi
  BSTreeManager_OblivionVerifiedLayout *v38; // eax
  bhkRefObject *v39; // ebx
  bhkRefObject *v40; // eax
  BSTreeModel_OblivionLayout_058 *v41; // eax
  Ni2DBuffer **v42; // edi
  bhkRefObject *v43; // eax

  NiNode::NiNode(&this->base, 0); /*0x56410e*/
  this->base.vtbl = (NiNodeVtbl *)&BSTreeNode::`vftable'; /*0x564113*/
  this->treeModel = 0;                          // Verified BSTreeNode.treeModel at +0xDC: stored with an intrusive reference count; branch/leaf LOD array sizing is read from this model. /*0x56411d*/
  this->billboardGeometry = 0; /*0x564123*/
  treeModel = this->treeModel; /*0x564129*/
  v5 = model; /*0x56412f*/
  if ( treeModel != model ) /*0x56413a*/
  {
    if ( treeModel ) /*0x56413e*/
    {
      if ( !InterlockedDecrement(&treeModel->refCount) ) /*0x564144*/
        (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))treeModel->vftable)(treeModel, 1); /*0x56415a*/
    }
    this->treeModel = v5; /*0x56415e*/
    if ( v5 ) /*0x564164*/
      InterlockedIncrement(&v5->refCount); /*0x56416a*/
  }
  this->base.members.super.m_flags |= 2u; /*0x564170*/
  v6 = (BSTreeModel_OblivionLayout_058 *)FormHeapAlloc(0xDCu); /*0x56417a*/
  model = v6; /*0x564182*/
  if ( v6 ) /*0x56418d*/
    v7 = (NiObjectNET *)NiNode::NiNode((NiNode *)v6, 0); /*0x564197*/
  else
    v7 = 0; /*0x56419b*/
  NiObjectNET_SetName(v7, "Branches"); /*0x5641a9*/
  NiNode::SetObjectAt(&this->base, &model, 0, (NiAVObject *)v7); /*0x5641b7*/
  v8 = InterlockedDecrement; /*0x5641c2*/
  if ( model ) /*0x5641c8*/
  {
    v9 = model; /*0x5641ca*/
    if ( !v8(&model->refCount) ) /*0x5641d0*/
      (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))v9->vftable)(v9, 1); /*0x5641e2*/
  }
  v10 = (BSTreeModel_OblivionLayout_058 *)FormHeapAlloc(0xDCu); /*0x5641e9*/
  model = v10; /*0x5641f1*/
  if ( v10 ) /*0x5641fc*/
    v11 = (NiObjectNET *)NiNode::NiNode((NiNode *)v10, 0); /*0x564206*/
  else
    v11 = 0; /*0x56420a*/
  NiObjectNET_SetName(v11, "Leaves"); /*0x564218*/
  if ( BSTreeManager_GetInstance(1)->zBufferProperty ) /*0x564224*/
  {
    Instance = BSTreeManager_GetInstance(1); /*0x564230*/
    sub_405680((NiNode *)v11, (BSShaderProperty *)Instance->zBufferProperty); /*0x564240*/
  }
  NiNode::SetObjectAt(&this->base, &model, 1u, (NiAVObject *)v11); /*0x56424f*/
  if ( model ) /*0x56425a*/
  {
    v13 = model; /*0x56425c*/
    if ( !v8(&model->refCount) ) /*0x564262*/
      (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))v13->vftable)(v13, 1); /*0x564274*/
  }
  v14 = (BSTreeModel_OblivionLayout_058 *)FormHeapAlloc(0xE4u); /*0x56427b*/
  v15 = v14; /*0x564280*/
  model = v14; /*0x564285*/
  if ( v14 ) /*0x564290*/
  {
    NiNode::NiNode((NiNode *)v14, 0); /*0x564295*/
    *(float *)&v15[2].leafCachedPropertiesByLOD = 0.0; /*0x56429c*/
    v15->vftable = &NiBillboardNode::`vftable'; /*0x5642a2*/
    LOWORD(v15[2].branchCachedPropertiesByLOD) = 9; /*0x5642a8*/
  }
  else
  {
    v15 = 0; /*0x5642b3*/
  }
  NiObjectNET_SetName((NiObjectNET *)v15, "Billboard"); /*0x5642c1*/
  LOWORD(v15[2].branchCachedPropertiesByLOD) = (int)v15[2].branchCachedPropertiesByLOD & 0xFFF8 | 1; /*0x5642e5*/
  sub_70FE20((float *)&v15->leafCachedPropertiesByLOD, flt_A3721C, 1.0, 0.0, 0.0); /*0x5642fc*/
  NiNode::SetObjectAt(&this->base, &model, 2u, (NiAVObject *)v15); /*0x56430b*/
  if ( model ) /*0x564316*/
  {
    v16 = model; /*0x564318*/
    if ( !v8(&model->refCount) ) /*0x56431e*/
      (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))v16->vftable)(v16, 1); /*0x564330*/
  }
  NumBranchLODLevels = BSTreeModel_GetNumBranchLODLevels(this->treeModel); /*0x564338*/
  v18 = NumBranchLODLevels; /*0x56433d*/
  if ( NumBranchLODLevels )
  {
    v19 = (BSTreeModel_OblivionLayout_058 *)NumBranchLODLevels; /*0x564349*/
    v20 = (unsigned __int64)NumBranchLODLevels >> 0x1E != 0 ? 0xFFFFFFFF : 4 * NumBranchLODLevels;
    v21 = FormHeapAlloc(__CFADD__(v20, 4) ? 0xFFFFFFFF : v20 + 4);
    model = (BSTreeModel_OblivionLayout_058 *)v21; /*0x564373*/
    if ( v21 ) /*0x56437e*/
    {
      v22 = (NiAVObject **)(v21 + 4); /*0x56438b*/
      *(_DWORD *)v21 = v18; /*0x564391*/
      ArrayConstructor( /*0x564393*/
        (char *)(v21 + 4),
        4u,
        v18,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v22 = 0; /*0x56439a*/
    }
    this->branchNodesByLOD = v22;               // Verified BSTreeNode.branchNodesByLOD at +0xE0: array count equals BSTreeModel::GetNumBranchLODLevels; elements are pointer-sized smart references, initially cleared. /*0x5643a4*/
    if ( v18 ) /*0x5643aa*/
    {
      v23 = 0; /*0x5643ac*/
      model = v19; /*0x5643ae*/
      do /*0x5643ec*/
      {
        branchNodesByLOD = this->branchNodesByLOD; /*0x5643b2*/
        v25 = branchNodesByLOD[v23]; /*0x5643b8*/
        v26 = &branchNodesByLOD[v23]; /*0x5643bb*/
        if ( v25 ) /*0x5643bf*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x5643c5*/
            v25->vtbl->super.super.Destructor((NiRefObject *)v25, 1); /*0x5643dc*/
          *v26 = 0; /*0x5643de*/
        }
        ++v23; /*0x5643e4*/
        model = (BSTreeModel_OblivionLayout_058 *)((char *)model + 0xFFFFFFFF); /*0x5643e7*/
      }
      while ( model ); /*0x5643ec*/
    }
  }
  else
  {
    this->branchNodesByLOD = 0; /*0x56445c*/
  }
  NumLeafLODLevels = BSTreeModel_GetNumLeafLODLevels(this->treeModel); /*0x5643f6*/
  v28 = NumLeafLODLevels; /*0x5643fb*/
  if ( NumLeafLODLevels )
  {
    v29 = (BSTreeModel_OblivionLayout_058 *)NumLeafLODLevels; /*0x564407*/
    v30 = (unsigned __int64)NumLeafLODLevels >> 0x1E != 0 ? 0xFFFFFFFF : 4 * NumLeafLODLevels;
    v31 = FormHeapAlloc(__CFADD__(v30, 4) ? 0xFFFFFFFF : v30 + 4);
    model = (BSTreeModel_OblivionLayout_058 *)v31; /*0x564431*/
    if ( v31 ) /*0x56443c*/
    {
      v32 = (NiAVObject **)(v31 + 4); /*0x564449*/
      *(_DWORD *)v31 = (unsigned __int16)v28; /*0x56444f*/
      ArrayConstructor( /*0x564451*/
        (char *)(v31 + 4),
        4u,
        (unsigned __int16)v28,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
      v33 = v32; /*0x564456*/
    }
    else
    {
      v33 = 0; /*0x564464*/
    }
    this->leafNodesByLOD = v33;                 // Verified BSTreeNode.leafNodesByLOD at +0xE4: array count equals BSTreeModel::GetNumLeafLODLevels; elements are pointer-sized smart references, initially cleared. /*0x56446e*/
    if ( (_WORD)v28 ) /*0x564474*/
    {
      v28 = 0; /*0x564476*/
      model = v29; /*0x564478*/
      do /*0x5644ba*/
      {
        leafNodesByLOD = this->leafNodesByLOD; /*0x564480*/
        v35 = *(int *)((char *)leafNodesByLOD + v28); /*0x564486*/
        v36 = (NiAVObject **)((char *)leafNodesByLOD + v28); /*0x564489*/
        if ( v35 ) /*0x56448d*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) ) /*0x564493*/
            (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x5644aa*/
          *v36 = 0; /*0x5644ac*/
        }
        v28 += 4; /*0x5644b2*/
        model = (BSTreeModel_OblivionLayout_058 *)((char *)model + 0xFFFFFFFF); /*0x5644b5*/
      }
      while ( model ); /*0x5644ba*/
    }
  }
  else
  {
    this->leafNodesByLOD = 0; /*0x5644c0*/
  }
  billboardGeometry = this->billboardGeometry; /*0x5644c6*/
  if ( billboardGeometry ) /*0x5644ce*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&billboardGeometry->vtbl.super.super.GetType) ) /*0x5644d4*/
      (*(void (__thiscall **)(NiTriBasedGeom *, int))billboardGeometry->vtbl.super.super.super.Destructor)( /*0x5644ea*/
        billboardGeometry,
        1);
    this->billboardGeometry = 0;                // Verified BSTreeNode.billboardNode at +0xE8: initially cleared, getter returns it, setter attaches/replaces the billboard under child slot 2. /*0x5644ec*/
  }
  v38 = BSTreeManager_GetInstance(1); /*0x5644f4*/
  NiObjectNET_AddExtraData((const void **)&this->base.vtbl, v28, (unsigned int *)v38->treeFlags); /*0x564504*/
  v39 = collisionShape; /*0x564509*/
  if ( collisionShape ) /*0x56450f*/
    v40 = collisionShape; /*0x564511*/
  else
    v40 = this->treeModel->collisionShape; /*0x56451b*/
  if ( v40 ) /*0x564520*/
  {
    v41 = (BSTreeModel_OblivionLayout_058 *)FormHeapAlloc(0x14u); /*0x564524*/
    v42 = (Ni2DBuffer **)v41; /*0x564529*/
    model = v41; /*0x56452e*/
    if ( v41 ) /*0x564539*/
    {
      sub_897600((NiObject *)v41); /*0x56453d*/
      *v42 = (Ni2DBuffer *)&bhkCollisionObject::`vftable'; /*0x564542*/
    }
    else
    {
      v42 = 0; /*0x56454a*/
    }
    if ( v39 ) /*0x564553*/
      v43 = v39; /*0x564555*/
    else
      v43 = this->treeModel->collisionShape; /*0x56455f*/
    sub_897670(v42, (Ni2DBuffer *)v43); /*0x564565*/
    ((void (__thiscall *)(Ni2DBuffer **, BSTreeNode_OblivionLayout_0F0 *))(*v42)[3].members.data)(v42, this); /*0x564572*/
  }
  this->unknown_EC = 0.0;                       // Unknown BSTreeNode trailing float at +0xEC: constructor sets zero; no semantic name established yet. /*0x564578*/
  return this; /*0x56457e*/
}
