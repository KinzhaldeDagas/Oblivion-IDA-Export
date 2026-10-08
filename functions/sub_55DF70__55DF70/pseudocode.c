// Verified map insertion for asynchronous tree build results. Stores TESObjectREFR* -> BSTreeNode*; if insertion fails, releases/destroys the node.
bool __thiscall BSTreeManager_RegisterBackgroundLoadedTree(
        BSTreeManager_OblivionVerifiedLayout *this,
        TESObjectREFR *reference,
        BSTreeNode_OblivionLayout_0F0 *node)
{
  bool result; // al

  result = (*((int (__thiscall **)(LockFreeMap *, TESObjectREFR *, BSTreeNode_OblivionLayout_0F0 *, _DWORD))this->pendingReferenceNodes->vtbl /*0x55df85*/
            + 3))(
             this->pendingReferenceNodes,
             reference,
             node,
             0);                                // Verified: inserts TESObjectREFR* -> BSTreeNode* into pendingReferenceNodes; failed insertion destroys/releases the unaccepted node. Fallout AddBackgroundLoadedTree has matching set-and-release-on-failure behavior.
  if ( !result ) /*0x55df89*/
  {
    if ( node ) /*0x55df8d*/
      return ((bool (__thiscall *)(BSTreeNode_OblivionLayout_0F0 *, int))node->base.vtbl->super.super.super.Destructor)( /*0x55df97*/
               node,
               1);
  }
  return result; /*0x55df99*/
}
