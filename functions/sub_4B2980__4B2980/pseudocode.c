// Verified direct path for type 0x1E tree forms: obtains BSTreeManager and calls BSTreeManager_CreateTreeForReference, stores the returned node through tree-form vtable +0x120, and writes the node model's seed back to a reference when present.
BSTreeNode_OblivionLayout_0F0 *__thiscall OB_TESObjectTREE_CreateTreeNodeDirect_010201A0(
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *this,
        TESObjectREFR *reference,
        int a3)
{
  BSTreeNode_OblivionLayout_0F0 *TreeForReference; // esi
  BSTreeManager_OblivionVerifiedLayout *Instance; // eax
  int v7; // eax

  TreeForReference = 0; /*0x4b2984*/
  if ( this->prefix_000_047[4] != 0x1E ) /*0x4b298a*/
    return 0; /*0x4b298d*/
  if ( BSTreeManager_GetInstance(1) ) /*0x4b2996*/
  {
    Instance = BSTreeManager_GetInstance(1); /*0x4b29aa*/
    TreeForReference = BSTreeManager_CreateTreeForReference(Instance, reference, this);// Verified synchronous tree-node path for TESObjectTREE type 0x1E: calls BSTreeManager_CreateTreeForReference, then invokes the tree-form vtable setter at +0x120 with the returned node. This shares the same create-or-consume-pending path as the queued worker. /*0x4b29b9*/
  }
  (*(void (__thiscall **)(TESObjectTREE_OblivionLayout_080_NiTArrayVerified *, BSTreeNode_OblivionLayout_0F0 *))(*(_DWORD *)this->prefix_000_047 + 0x120))( /*0x4b29c6*/
    this,
    TreeForReference);
  if ( TreeForReference ) /*0x4b29ca*/
  {
    if ( ((int (__thiscall *)(BSTreeNode_OblivionLayout_0F0 *))TreeForReference->base.vtbl[1].super.super.super.Destructor)(TreeForReference) ) /*0x4b29d6*/
    {
      if ( reference ) /*0x4b29de*/
      {
        v7 = ((int (__thiscall *)(BSTreeNode_OblivionLayout_0F0 *))TreeForReference->base.vtbl[1].super.super.super.Destructor)(TreeForReference); /*0x4b29ea*/
        TESObjectREFR_SetTreeSeedByValue(reference, *(_DWORD *)(v7 + 0x48));// Verified: after creation, reads the returned BSTreeModel.seed at +0x48 and stores that seed by value on the TESObjectREFR. This preserves the selected randomized tree seed on the reference. /*0x4b29f2*/
      }
    }
  }
  return TreeForReference; /*0x4b298c*/
}
