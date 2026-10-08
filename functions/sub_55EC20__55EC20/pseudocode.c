// Verified BSTreeManager.modelCacheByTree at +0: lazily creates a 37-bucket NiTPointerMap<TESObjectTREE*, NiPointer<BSTreeModel>*> and gives each tree form a one-element smart-pointer array.
BSTreeModel_OblivionLayout_058 **__thiscall BSTreeManager_GetModelArray(
        BSTreeManager_OblivionVerifiedLayout *this,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree)
{
  BSTreeModel_OblivionLayout_058 **v3; // esi
  NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *v5; // eax
  NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *v6; // eax
  int v7; // eax
  NiTPointerMap_TESObjectTREE_BSTreeModelArray *modelCacheByTree; // ecx
  BSTreeModel_OblivionLayout_058 **v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+1Ch] [ebp-4h]

  v3 = 0; /*0x55ec4a*/
  v9 = 0; /*0x55ec4e*/
  if ( !tree ) /*0x55ec52*/
    return 0; /*0x55ec54*/
  if ( !this->modelCacheByTree ) /*0x55ec6b*/
  {
    v5 = (NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *)FormHeapAlloc(0x10u); /*0x55ec71*/
    v10 = 0; /*0x55ec7f*/
    if ( v5 ) /*0x55ec83*/
      v6 = NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>( /*0x55ec89*/
             v5,
             0x25u);
    else
      v6 = 0; /*0x55ec90*/
    v10 = 0xFFFFFFFF; /*0x55ec92*/
    this->modelCacheByTree = v6; /*0x55ec9a*/
  }
  if ( NiTMap_GetAt(this->modelCacheByTree, (int)tree, &v9) ) /*0x55eca4*/
    return v9; /*0x55ecad*/
  v7 = FormHeapAlloc(8u); /*0x55ecc8*/
  v10 = 1; /*0x55ecd6*/
  if ( v7 ) /*0x55ecde*/
  {
    v3 = (BSTreeModel_OblivionLayout_058 **)(v7 + 4); /*0x55ecec*/
    *(_DWORD *)v7 = 1; /*0x55ecf2*/
    ArrayConstructor( /*0x55ecf8*/
      (char *)(v7 + 4),
      4u,
      1,
      (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
  }
  modelCacheByTree = this->modelCacheByTree; /*0x55ecfd*/
  v10 = 0xFFFFFFFF; /*0x55ed01*/
  NiTMap_SetAt(modelCacheByTree, (int)tree, (int)v3); /*0x55ed09*/
  return v3; /*0x55ec56*/
}
