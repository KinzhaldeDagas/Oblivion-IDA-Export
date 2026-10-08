0x43A8D0: push    esi
0x43A8D1: mov     esi, ecx
0x43A8D3: call    ??1QueuedDistantLOD@@UAE@XZ; Verified QueuedDistantLOD destruction: releases the Ni2DBuffer at DistantLODQueuedInstanceData+0x1C, frees the 0x20-byte context, releases the task's result/resource pointers, then frees the queued model path.
0x43A8D8: test    byte ptr [esp+4+arg_0], 1
0x43A8DD: jz      short loc_43A8E8
0x43A8DF: push    esi
0x43A8E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x43A8E5: add     esp, 4
0x43A8E8: mov     eax, esi
0x43A8EA: pop     esi
0x43A8EB: retn    4
