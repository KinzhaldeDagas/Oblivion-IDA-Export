// Verified one-slot base model cache. For each TESObjectTREE, compares requested seed against BSTreeModel.seed at +0x48; same seed returns the cached model, different seed replaces the only slot. Cache operation is protected by g_BSTreeManager_TreeCriticalSection.
BSTreeModel_OblivionLayout_058 **__thiscall BSTreeManager_GetModel(
        BSTreeManager_OblivionVerifiedLayout *this,
        BSTreeModel_OblivionLayout_058 **outModel,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree,
        unsigned int seed)
{
  BSTreeModel_OblivionLayout_058 **ModelArray; // ebp
  signed int v6; // eax
  BSTreeModel_OblivionLayout_058 *v7; // esi
  BSTreeModel_OblivionLayout_058 *v8; // edi
  BSTreeModel_OblivionLayout_058 *v9; // eax
  BSTreeModel_OblivionLayout_058 *v10; // eax
  BSTreeModel_OblivionLayout_058 *v11; // edi
  BSTreeModel_OblivionLayout_058 *v12; // esi
  BSTreeModel_OblivionLayout_058 *v13; // esi
  signed int seeda; // [esp+2Ch] [ebp+8h]

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&g_BSTreeManager_TreeCriticalSection, (int)&unk_A2F830);// Verified: serializes the one-slot TESObjectTREE* -> BSTreeModel* seed cache with the tree critical section. Cache hits compare requested seed with BSTreeModel.seed (+0x48); a miss replaces the lone cached model. Fallout has matching one-entry-per-tree cache behavior, but its BSTreeModel and BSTreeManager layouts differ; do not transplant offsets. /*0x55ed6b*/
  *outModel = 0; /*0x55ed74*/
  if ( !tree ) /*0x55ed88*/
    goto LABEL_34; /*0x55ed88*/
  ModelArray = BSTreeManager_GetModelArray(this, tree); /*0x55ed9d*/
  seeda = 0xFFFFFFFF; /*0x55ed9f*/
  v6 = 0; /*0x55eda3*/
  while ( 1 ) /*0x55eda5*/
  {
    v7 = ModelArray[v6]; /*0x55eda5*/
    if ( !v7 ) /*0x55edab*/
    {
      if ( seeda == 0xFFFFFFFF ) /*0x55ee2b*/
        seeda = v6; /*0x55ee2d*/
      goto LABEL_16; /*0x55ee2d*/
    }
    if ( v7->seed == seed ) /*0x55edb0*/
      break; /*0x55edb0*/
LABEL_16:
    if ( ++v6 >= 1 ) /*0x55ee37*/
      goto LABEL_10; /*0x55ee37*/
  }
  v8 = *outModel; /*0x55edb2*/
  if ( *outModel != v7 ) /*0x55edb6*/
  {
    if ( v8 ) /*0x55edba*/
    {
      if ( !InterlockedDecrement(&v8->refCount) ) /*0x55edc0*/
        (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))v8->vftable)(v8, 1); /*0x55edd6*/
    }
    *outModel = v7; /*0x55edd8*/
    InterlockedIncrement(&v7->refCount); /*0x55edde*/
  }
LABEL_10:
  if ( !*outModel ) /*0x55ede4*/
  {
    if ( seeda >= 0 ) /*0x55edf2*/
    {
      v10 = (BSTreeModel_OblivionLayout_058 *)FormHeapAlloc(0x58u); /*0x55ee41*/
      if ( v10 ) /*0x55ee57*/
        v11 = BSTreeModel_ctor(v10); /*0x55ee60*/
      else
        v11 = 0; /*0x55ee64*/
      v12 = *outModel; /*0x55ee66*/
      if ( *outModel != v11 ) /*0x55ee6f*/
      {
        if ( v12 ) /*0x55ee73*/
        {
          if ( !InterlockedDecrement(&v12->refCount) ) /*0x55ee79*/
            (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))v12->vftable)(v12, 1); /*0x55ee8f*/
        }
        *outModel = v11; /*0x55ee93*/
        if ( v11 ) /*0x55ee95*/
          InterlockedIncrement(&v11->refCount); /*0x55ee9b*/
      }
      v13 = ModelArray[seeda]; /*0x55eea5*/
      if ( v13 != *outModel ) /*0x55eeab*/
      {
        if ( v13 ) /*0x55eeaf*/
        {
          if ( !InterlockedDecrement(&v13->refCount) ) /*0x55eeb5*/
            (*(void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, int))v13->vftable)(v13, 1); /*0x55eecb*/
        }
        v9 = *outModel; /*0x55eecd*/
        ModelArray[seeda] = *outModel; /*0x55eecf*/
LABEL_32:
        if ( v9 ) /*0x55eed5*/
          InterlockedIncrement(&v9->refCount); /*0x55eedb*/
      }
    }
    else if ( *ModelArray ) /*0x55edf4*/
    {
      v9 = *ModelArray; /*0x55ee1d*/
      *outModel = *ModelArray; /*0x55ee20*/
      goto LABEL_32; /*0x55ee22*/
    }
  }
LABEL_34:
  NiLeaveCriticalSection_0(&g_BSTreeManager_TreeCriticalSection); /*0x55eee1*/
  return outModel; /*0x55eeed*/
}
