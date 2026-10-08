0x4346A0: push    esi; Verified worker create stage: builds/gets a BSTreeNode through BSTreeManager_CreateTreeForReference and publishes it to the pending reference-node map through BSTreeManager_RegisterBackgroundLoadedTree, keyed by the same TESObjectREFR.
0x4346A1: mov     esi, ecx
0x4346A3: mov     eax, [esi+3Ch]
0x4346A6: mov     ecx, [esi+38h]
0x4346A9: push    eax; tree
0x4346AA: push    ecx; reference
0x4346AB: mov     ecx, g_BSTreeManager_Instance; this
0x4346B1: call    BSTreeManager_CreateTreeForReference; Verified: queued worker create stage takes its TESObjectREFR and TESObjectTREE from QueuedTreeModel (+0x38/+0x3C), calls BSTreeManager_CreateTreeForReference, then publishes the returned BSTreeNode under that same reference key.
0x4346B6: mov     edx, [esi+38h]
0x4346B9: mov     ecx, g_BSTreeManager_Instance; this
0x4346BF: push    eax; node
0x4346C0: push    edx; reference
0x4346C1: call    BSTreeManager_RegisterBackgroundLoadedTree; Verified map insertion for asynchronous tree build results. Stores TESObjectREFR* -> BSTreeNode*; if insertion fails, releases/destroys the node.
0x4346C6: pop     esi; Verified: publishes the constructed BSTreeNode to BSTreeManager.pendingReferenceNodes. Main-thread direct path also calls BSTreeManager_CreateTreeForReference from TESObjectTREE_CreateTreeNodeDirect; Fallout homolog performs the same create-then-register sequence in QueuedTreeModel::Run.
0x4346C7: retn
