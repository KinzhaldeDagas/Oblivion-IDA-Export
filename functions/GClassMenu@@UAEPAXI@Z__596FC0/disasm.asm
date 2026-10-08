0x596FC0: push    esi
0x596FC1: mov     esi, ecx
0x596FC3: call    ??1ClassMenu@@UAE@XZ; ClassMenu destruction boundary. Sidecar staged custom-class selections are menu-lifetime state and must be discarded here (as well as on back/cancel) without committing them; a wrapper must preserve the caller's integer and x87 state before tail-calling the relocated prologue.
0x596FC8: test    byte ptr [esp+4+arg_0], 1
0x596FCD: jz      short loc_596FD8
0x596FCF: push    esi
0x596FD0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x596FD5: add     esp, 4
0x596FD8: mov     eax, esi
0x596FDA: pop     esi
0x596FDB: retn    4
