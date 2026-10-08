0x4398D0: mov     eax, [esp+destructorFlags]; Verified queued tree-task cleanup removes a pending reference->BSTreeNode entry after releasing task resources; this prevents a cancelled/completed task result from remaining available for handoff.
0x4398D4: push    esi
0x4398D5: push    eax
0x4398D6: mov     esi, ecx
0x4398D8: call    QueuedTreeModel_ReleaseBuildResources; Verified cleanup hook releases queued tree build resources, then under the tree critical section checks/removes the pendingReferenceNodes entry keyed by QueuedTreeModel.reference (+0x38). Fallout QueuedTreeModel::Cancel similarly removes the map entry when cancellation follows a finished task; retain that state condition as a documented cross-version difference until Oblivion task-state dispatch is mapped.
0x4398DD: mov     ecx, [esi+38h]
0x4398E0: pop     esi
0x4398E1: mov     [esp+destructorFlags], ecx
0x4398E5: mov     ecx, g_BSTreeManager_Instance
0x4398EB: jmp     loc_55DFA0
0x55DFA0: push    ecx; IDA tail chunk for 0x4398D0: enters stru_B39E80, tests singleton map +0x24 for key this+0x38, removes through vtable +0x10 if present.
0x55DFA1: push    esi
0x55DFA2: push    edi
0x55DFA3: mov     esi, ecx
0x55DFA5: push    offset unk_A2F830
0x55DFAA: mov     ecx, offset g_BSTreeManager_TreeCriticalSection
0x55DFAF: mov     [esp+10h+var_4], 0
0x55DFB7: call    NiEnterCriticalSection
0x55DFBC: mov     ecx, [esi+24h]
0x55DFBF: mov     eax, [ecx]
0x55DFC1: mov     edi, [esp+0Ch+destructorFlags]
0x55DFC5: mov     eax, [eax+4]
0x55DFC8: lea     edx, [esp+0Ch+var_4]
0x55DFCC: push    edx
0x55DFCD: push    edi
0x55DFCE: call    eax
0x55DFD0: test    al, al
0x55DFD2: jz      short loc_55DFEF
0x55DFD4: mov     ecx, [esi+24h]
0x55DFD7: mov     edx, [ecx]
0x55DFD9: mov     eax, [edx+10h]
0x55DFDC: push    edi
0x55DFDD: call    eax; Verified cleanup removes the pending reference key and releases the removed node returned by the map operation. This is paired with the worker's insert at 0x55DF85 and one-time consume/removal in CreateTreeForReference at 0x55F8C9/0x55F8D8.
0x55DFDF: mov     ecx, [esp+18h+var_10]
0x55DFE3: test    ecx, ecx
0x55DFE5: jz      short loc_55DFEF
0x55DFE7: mov     edx, [ecx]
0x55DFE9: mov     eax, [edx]
0x55DFEB: push    1; lpCriticalSection
0x55DFED: call    eax
0x55DFEF: mov     ecx, offset g_BSTreeManager_TreeCriticalSection; lpCriticalSection
0x55DFF4: call    NiLeaveCriticalSection_0
0x55DFF9: pop     edi
0x55DFFA: pop     esi
0x55DFFB: pop     ecx
0x55DFFC: retn    4
