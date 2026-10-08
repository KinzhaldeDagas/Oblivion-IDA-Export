// Verified worker create stage: builds/gets a BSTreeNode through BSTreeManager_CreateTreeForReference and publishes it to the pending reference-node map through BSTreeManager_RegisterBackgroundLoadedTree, keyed by the same TESObjectREFR.
bool __thiscall QueuedTreeModel_RunCreateStage(QueuedTreeModel_OblivionLayout *this)
{
  BSTreeNode_OblivionLayout_0F0 *TreeForReference; // eax

  TreeForReference = BSTreeManager_CreateTreeForReference( /*0x4346b1*/
                       g_BSTreeManager_Instance,
                       this->reference,
                       (TESObjectTREE_OblivionLayout_080_NiTArrayVerified *)this->tree);// Verified: queued worker create stage takes its TESObjectREFR and TESObjectTREE from QueuedTreeModel (+0x38/+0x3C), calls BSTreeManager_CreateTreeForReference, then publishes the returned BSTreeNode under that same reference key.
  return BSTreeManager_RegisterBackgroundLoadedTree(g_BSTreeManager_Instance, this->reference, TreeForReference);// Verified: publishes the constructed BSTreeNode to BSTreeManager.pendingReferenceNodes. Main-thread direct path also calls BSTreeManager_CreateTreeForReference from TESObjectTREE_CreateTreeNodeDirect; Fallout homolog performs the same create-then-register sequence in QueuedTreeModel::Run. /*0x4346c6*/
}
