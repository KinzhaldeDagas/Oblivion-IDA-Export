0x68D9AC: mov     eax, [esi+34h]; Verified ActiveEffect destructor frees the HitEffectNode root allocation only after BSSimpleList_Clear frees successor nodes; BSTempEffect items are detached and remain under ActorProcessManager refcount/update lifecycle.
0x68D9AF: push    eax
0x68D9B0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
