0x439B20: push    esi
0x439B21: mov     esi, ecx
0x439B23: call    ??1QueuedHead@@UAE@XZ; QueuedHead::~QueuedHead(void)
0x439B28: test    byte ptr [esp+4+arg_0], 1
0x439B2D: jz      short loc_439B38
0x439B2F: push    esi
0x439B30: call    FormHeapFree
0x439B35: add     esp, 4
0x439B38: mov     eax, esi
0x439B3A: pop     esi
0x439B3B: retn    4
