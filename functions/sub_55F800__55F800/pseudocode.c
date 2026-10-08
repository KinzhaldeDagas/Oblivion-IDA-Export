// Verified local call paths: invoked from QueuedTreeModel_RunCreateStage (worker result publication) and TESObjectTREE_CreateTreeNodeDirect (synchronous creation). Validates tree model path and reference base-form identity, consumes an already-published node if present, otherwise derives seed, obtains/copies cached model, applies reference scale, and creates BSTreeNode art.
BSTreeNode_OblivionLayout_0F0 *__thiscall BSTreeManager_CreateTreeForReference(
        BSTreeManager_OblivionVerifiedLayout *this,
        TESObjectREFR *reference,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree)
{
  bool v4; // zf
  TESObjectTREE_OblivionLayout_080_NiTArrayVerified *v5; // ebx
  int (*v6)(void); // edx
  unsigned int v7; // eax
  TESObjectTREE_OblivionLayout_080_NiTArrayVerified *v9; // esi
  unsigned int TreeSeed; // esi
  int *Model; // eax
  BSTreeModel_OblivionLayout_058 *v13; // edi
  BSTreeModel_OblivionLayout_058 *v14; // eax
  BSTreeModel_OblivionLayout_058 *v15; // esi
  NiObjectNET *v16; // edi
  char *v17; // eax
  void *baseModel; // [esp+24h] [ebp-18h] BYREF
  void *modelOut; // [esp+28h] [ebp-14h] BYREF
  unsigned __int8 *v20; // [esp+2Ch] [ebp-10h]
  unsigned int v21; // [esp+38h] [ebp-4h]
  float referencea; // [esp+40h] [ebp+4h]

  baseModel = 0; /*0x55f82b*/
  v4 = bEnableTrees_SpeedTree.value == 0; /*0x55f82f*/
  v21 = 0; /*0x55f836*/
  if ( v4 ) /*0x55f83a*/
    return 0; /*0x55f83a*/
  v5 = tree; /*0x55f840*/
  if ( !tree ) /*0x55f846*/
    return 0; /*0x55f846*/
  v6 = *(int (**)(void))(*(_DWORD *)&tree->prefix_000_047[0x24] + 0x14); /*0x55f84f*/
  v20 = &tree->prefix_000_047[0x24]; /*0x55f855*/
  if ( !v6() ) /*0x55f859*/
    return 0; /*0x55f859*/
  LOWORD(v7) = *(_WORD *)&v5->prefix_000_047[0x2C]; /*0x55f863*/
  v7 = (_WORD)v7 == 0xFFFF ? strlen(*(const char **)&v5->prefix_000_047[0x28]) : (unsigned __int16)v7;
  if ( !v7 /*0x55f8a2*/
    || reference && (TESObjectTREE_OblivionLayout_080_NiTArrayVerified *)reference->vtbl->GetBaseForm(reference) != v5 )
  {
    return 0; /*0x55f8a2*/
  }
  tree = 0; /*0x55f8b2*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g_BSTreeManager_TreeCriticalSection, (int)&unk_A2F830);// Verified: protects lookup-and-consume of pendingReferenceNodes with the tree critical section; a hit is removed before leaving the lock, so worker-published tree nodes are consumed once. /*0x55f8b6*/
  if ( (*((unsigned __int8 (__thiscall **)(LockFreeMap *, TESObjectREFR *, TESObjectTREE_OblivionLayout_080_NiTArrayVerified **))this->pendingReferenceNodes->vtbl /*0x55f8c9*/
        + 1))(
         this->pendingReferenceNodes,
         reference,
         &tree) )                               // Verified: queries pendingReferenceNodes by TESObjectREFR*; a hit returns the worker-created BSTreeNode.
  {
    (*((void (__thiscall **)(LockFreeMap *, TESObjectREFR *))this->pendingReferenceNodes->vtbl + 4))( /*0x55f8d8*/
      this->pendingReferenceNodes,
      reference);                               // Verified: removes the reference key after a successful lookup, transferring the pending node to the synchronous caller exactly once.
    NiLeaveCriticalSection_0(&g_BSTreeManager_TreeCriticalSection); /*0x55f8df*/
    v9 = tree; /*0x55f8e4*/
    v21 = 0xFFFFFFFF; /*0x55f8ec*/
    NiPointerSlot_Release(&baseModel); /*0x55f8f4*/
    return (BSTreeNode_OblivionLayout_0F0 *)v9; /*0x55f8fb*/
  }
  NiLeaveCriticalSection_0(&g_BSTreeManager_TreeCriticalSection); /*0x55f905*/
  TreeSeed = 1; /*0x55f90c*/
  if ( reference ) /*0x55f911*/
    TreeSeed = TESObjectREFR_GetTreeSeed(reference);// Verified: TESObjectREFR_GetTreeSeed handles tree references only (base-form type byte 0x1E), reads ExtraData_Seed via ExtraDataList_GetSeedIndex, and asks TESObjectTREE_GetSeedAtIndex to resolve the stored index. Fallout exposes the corresponding named TESObjectTREE::GetSeedAtIndex. /*0x55f91a*/
  if ( !g_BSTreeManager_Instance ) /*0x55f91c*/
    BSTreeManager_Create(0); /*0x55f925*/
  Model = (int *)BSTreeManager_GetModel( /*0x55f93a*/
                   g_BSTreeManager_Instance,
                   (BSTreeModel_OblivionLayout_058 **)&modelOut,
                   v5,
                   TreeSeed);
  LOBYTE(v21) = 1; /*0x55f944*/
  OB_NiSmartPointer_Assign_010201A0((int *)&baseModel, Model); /*0x55f949*/
  LOBYTE(v21) = 0; /*0x55f952*/
  NiPointerSlot_Release(&modelOut); /*0x55f957*/
  v13 = (BSTreeModel_OblivionLayout_058 *)baseModel; /*0x55f95c*/
  if ( !baseModel ) /*0x55f962*/
    goto LABEL_24; /*0x55f962*/
  if ( *((_DWORD *)baseModel + 1) <= 2u )       // Verified: BSTreeModel inherits NiRefObject and +0x04 is its reference count (constructor initializes it through NiRefObject; destructor decrements global object bookkeeping). With the manager cache and this local smart pointer accounting for the normal two references, count <=2 selects in-place base initialization; additional owners select a fresh per-reference instance model. /*0x55f96a*/
  {                                             // Verified: when the cached model reference count is at the unshared threshold (<=2), initializes that cached BSTreeModel directly from the TESObjectTREE form and the reference-derived seed.
    if ( BSTreeModel_InitFromBase((BSTreeModel_OblivionLayout_058 *)baseModel, v5, TreeSeed) ) /*0x55f9dc*/
    {
      v15 = v13; /*0x55f9e5*/
      goto LABEL_28; /*0x55f9e5*/
    }
LABEL_24:
    v21 = 0xFFFFFFFF; /*0x55f9af*/
    NiPointerSlot_Release(&baseModel); /*0x55f9bb*/
    return 0; /*0x55f9d5*/
  }
  v14 = (BSTreeModel_OblivionLayout_058 *)FormHeapAlloc(0x58u);// Verified: allocates 0x58 bytes, exactly the BSTreeModel type size; constructor initializes a fresh NiRefObject/BSTreeModel before InitAsInstance. /*0x55f96e*/
  LOBYTE(v21) = 2; /*0x55f97c*/
  if ( v14 ) /*0x55f981*/
    v15 = BSTreeModel_ctor(v14); /*0x55f98a*/
  else
    v15 = 0; /*0x55f98e*/
  LOBYTE(v21) = 0; /*0x55f993*/
  if ( !BSTreeModel_InitAsInstance(v15, v13) )  // Verified: once the cached base BSTreeModel has additional owners, constructs a per-reference model and calls BSTreeModel_InitAsInstance; failure destroys the partial instance before returning. /*0x55f998*/
  {
    if ( v15 ) /*0x55f9a3*/
      (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))v15->vftable)(v15, 1); /*0x55f9ad*/
    goto LABEL_24; /*0x55f9ad*/
  }
LABEL_28:
  referencea = 1.0; /*0x55f9e7*/
  if ( reference ) /*0x55f9ef*/
    referencea = reference->vtbl->GetScale(reference); /*0x55f9fe*/
  v16 = (NiObjectNET *)(*((int (__thiscall **)(BSTreeModel_OblivionLayout_058 *, float))v15->vftable + 2))( /*0x55fa13*/
                         v15,
                         COERCE_FLOAT(LODWORD(referencea)));
  if ( v16 ) /*0x55fa17*/
  {
    v17 = (char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v20 + 0x14))(v20); /*0x55fa22*/
    NiObjectNET_SetName(v16, v17); /*0x55fa27*/
  }
  v15->unknown_04C_04F[0] = 1;                  // Verified: sets BSTreeModel+0x4C to 1 after invoking the model's CreateArt vtable slot and optionally naming the returned NiObjectNET. The field is initialized to 0 by BSTreeModel_ctor; no stock consumer was identified, so its meaning remains Unknown. /*0x55fa30*/
  v21 = 0xFFFFFFFF; /*0x55fa34*/
  NiPointerSlot_Release(&baseModel); /*0x55fa3c*/
  return (BSTreeNode_OblivionLayout_0F0 *)v16; /*0x55f9c2*/
}
